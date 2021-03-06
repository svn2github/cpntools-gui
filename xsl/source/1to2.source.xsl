<?xml version="1.0"?>

<xsl:stylesheet xmlns:loop="http://informatik.hu-berlin.de/loop" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0" exclude-result-prefixes="loop">

  <xsl:output method="xml"
              encoding="iso-8859-1"
              omit-xml-declaration="no"
              doctype-public="-//CPN//DTD CPNXML 1.0//EN"
              doctype-system="http://www.daimi.au.dk/~cpntools/bin/DTD/2/cpn.dtd"
              indent="yes"/>

  <xsl:variable name="fname_sep" select="'#'"/>

  <xsl:template match="comment()"/>

  <xsl:template match="globdecl"/>

  <xsl:template match="workspaceElements">
    <workspaceElements>
      <generator tool="Converter" version="0" format="2"/>
      <xsl:apply-templates select="cpnet"/>
    </workspaceElements>
  </xsl:template>

  <xsl:template match="cpnet">
    <cpnet>
      <xsl:choose>
        <xsl:when test="globbox">
          <xsl:apply-templates select="globbox"/>
        </xsl:when>
        <xsl:otherwise>
          <globbox>
            <errordecl>
              <xsl:apply-templates select="page/globdecl/text/text()"/>
            </errordecl>
          </globbox>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:apply-templates select="page"/>
      <xsl:if test="page/place/fus-key">
        <xsl:variable name="fusion" select="page/place[fus-key]"/>
        <xsl:call-template name="fusions">
          <xsl:with-param name="fusion" select="$fusion"/>
          <xsl:with-param name="name" select="page/place/fus-key/fusion/text/text()"/>
          <xsl:with-param name="used_names" select="$fname_sep"/>
        </xsl:call-template>
      </xsl:if>
    </cpnet>
  </xsl:template>

  <xsl:template name="fusions">
    <xsl:param name="fusion"/>
    <xsl:param name="name"/>
    <xsl:param name="used_names"/>
    <fusion>
      <xsl:attribute name="id">
        <xsl:value-of select="page/place/fus-key[fusion/text/text() = $name]/@id"/>
      </xsl:attribute>
      <xsl:attribute name="name">
        <xsl:value-of select="$name"/>
      </xsl:attribute>
      <xsl:for-each select="$fusion">
        <xsl:if test="string(fus-key/fusion/text/text()) = string($name)">
          <fusion_elm>
            <xsl:attribute name="idref">
              <xsl:value-of select="@id"/>
            </xsl:attribute>
            <!-- for debugging <xsl:value-of select="$name"/>=<xsl:value-of select="fus-key/fusion/text/text()"/> -->
          </fusion_elm>
        </xsl:if>
      </xsl:for-each>
    </fusion>
    <xsl:variable name="new_used">
      <xsl:value-of select="concat($used_names,$name,$fname_sep)"/>
    </xsl:variable>
    <xsl:variable name="new_name">
      <xsl:value-of select="page/place/fus-key/fusion/text[not(contains($new_used,concat($fname_sep,text(),$fname_sep)))]/text()"/>
    </xsl:variable>
    <xsl:if test="not($new_name='')">
      <xsl:call-template name="fusions">
        <xsl:with-param name="fusion" select="$fusion"/>
        <xsl:with-param name="name" select="$new_name"/>
        <xsl:with-param name="used_names" select="$new_used"/>
      </xsl:call-template>
    </xsl:if>
  </xsl:template>

  <xsl:template match="hguideline">
    <xsl:copy>
      <xsl:attribute name="id">IDIDID</xsl:attribute>
      <xsl:attribute name="y"><xsl:value-of select="@y"/></xsl:attribute>
      <xsl:variable name="elements" select="@elements"/>
      <loop:while test="contains($elements,')')">
        <loop:do>
          <guideline_elm idref="{substring-after(substring-before($elements,')'),'(')}"/>
        </loop:do>
        <loop:update name="elements" select="substring-after($elements,')')"/>
      </loop:while>
    </xsl:copy>
  </xsl:template>

  <xsl:template match="vguideline">
    <xsl:copy>
      <xsl:attribute name="id">IDIDID</xsl:attribute>
      <xsl:attribute name="x"><xsl:value-of select="@x"/></xsl:attribute>
      <xsl:variable name="elements" select="@elements"/>
      <loop:while test="contains($elements,')')">
        <loop:do>
          <guideline_elm idref="{substring-after(substring-before($elements,')'),'(')}"/>
        </loop:do>
        <loop:update name="elements" select="substring-after($elements,')')"/>
      </loop:while>
    </xsl:copy>
  </xsl:template>

  <xsl:template match="arc">
    <arc>
      <xsl:attribute name="id"><xsl:value-of select="@id"/></xsl:attribute>
      <xsl:attribute name="orientation"><xsl:value-of select="@orientation"/></xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <xsl:apply-templates select="arrowattr"/>
      <xsl:apply-templates select="transend"/>
      <xsl:apply-templates select="placeend"/>
      <xsl:apply-templates select="annot"/>
      <xsl:choose>
        <xsl:when test="bendpoint">
          <!-- We are in luck, copy the bendpoints -->
          <xsl:apply-templates select="bendpoint"/>
        </xsl:when>
        <xsl:otherwise>
          <!-- Shit, we have to create the bendpoints from seg-conn thingies -->
          <xsl:apply-templates select="seg-conn"/>
        </xsl:otherwise>
      </xsl:choose>
    </arc>
  </xsl:template>

  <xsl:template match="seg-conn">
    <xsl:variable name="points" select="@points"/>
    <xsl:variable name="number" select="string-length(translate(@points, '(),-1234567890.', '('))"/>
      <loop:while test="contains($points,')')">
        <loop:do>
          <bendpoint>
            <xsl:attribute name="serial">
              <xsl:value-of select="$number"/>
            </xsl:attribute>
            <textattr colour="Black" bold="false"/>
            <lineattr colour="Black" thick="0" type="Solid"/>
            <fillattr colour="White" pattern="Solid"/>
            <posattr>
              <xsl:attribute name="x">
                <xsl:value-of select="substring-before(substring-after(substring-before($points,')'),'('),',')"/>
              </xsl:attribute>
              <xsl:attribute name="y">
                <xsl:value-of select="substring-after(substring-after(substring-before($points,')'),'('),',')"/>
              </xsl:attribute>
            </posattr>
          </bendpoint>
        </loop:do>
        <loop:update name="points" select="substring-after($points,')')"/>
        <loop:update name="number" select="($number)-1"/>
      </loop:while>
  </xsl:template>

  <xsl:template match="fus-key">
    <fusioninfo>
      <xsl:attribute name="id">
        <xsl:value-of select="@id"/>
      </xsl:attribute>
      <xsl:attribute name="name">
        <xsl:value-of select="fusion/text/text()"/>
      </xsl:attribute>
      <xsl:apply-templates select="fusion/posattr"/>
      <xsl:apply-templates select="fusion/fillattr"/>
      <xsl:apply-templates select="fusion/lineattr"/>
      <xsl:apply-templates select="fusion/textattr"/>
    </fusioninfo>
  </xsl:template>

  <xsl:template match="trans/code-key">
    <code>
      <xsl:attribute name="id">
        <xsl:value-of select="code/@id"/>
      </xsl:attribute>
      <xsl:apply-templates select="code/posattr"/>
      <xsl:apply-templates select="code/fillattr"/>
      <xsl:apply-templates select="code/lineattr"/>
      <xsl:apply-templates select="code/textattr"/>
      <text>
        <xsl:value-of select="code/text/text()"/>
      </text>
    </code>
  </xsl:template>

  <xsl:template match="trans">
    <trans>
      <xsl:attribute name="id">
        <xsl:value-of select="@id"/>
      </xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <!-- bug #1317-->
      <xsl:choose>
        <xsl:when test="text and not(name)">
          <text><xsl:value-of select="text/text()"/></text>
        </xsl:when>
        <xsl:when test="name and not(text)">
          <text><xsl:value-of select="name/text/text()"/></text>
        </xsl:when>
        <xsl:otherwise>
          <text><xsl:value-of select="text/text()"/> - <xsl:value-of select="name/text/text()"/></text>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:apply-templates select="box"/>
      <xsl:apply-templates select="subst"/>
      <xsl:apply-templates select="time"/>
      <xsl:apply-templates select="cond"/>
      <xsl:apply-templates select="code-key"/>
      <xsl:apply-templates select="code"/>
    </trans>
  </xsl:template>

  <xsl:template match="place">
    <place>
      <xsl:attribute name="id">
        <xsl:value-of select="@id"/>
      </xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <!-- bug #1317-->
      <xsl:choose>
        <xsl:when test="text and not(name)">
          <text><xsl:value-of select="text/text()"/></text>
        </xsl:when>
        <xsl:when test="name and not(text)">
          <text><xsl:value-of select="name/text/text()"/></text>
        </xsl:when>
        <xsl:otherwise>
          <text><xsl:value-of select="text/text()"/> - <xsl:value-of select="name/text/text()"/></text>
        </xsl:otherwise>
      </xsl:choose>
      <xsl:apply-templates select="ellipse"/>
      <xsl:apply-templates select="fus-key"/>
      <xsl:if test="port">
        <port>
          <xsl:attribute name="type">
            <xsl:value-of select="port/@type"/>
          </xsl:attribute>
          <xsl:choose>
            <xsl:when test="portkreg/posattr">
              <posattr>
                <xsl:attribute name="x">
                  <xsl:value-of select="portkreg/posattr/@x"/>
                </xsl:attribute>
                <xsl:attribute name="y">
                  <xsl:value-of select="portkreg/posattr/@y"/>
                </xsl:attribute>
              </posattr>
            </xsl:when>
            <xsl:otherwise>
              <posattr>
                <xsl:attribute name="x">
                  <xsl:value-of select="number(posattr/@x)-(ellipse/@w div 2)"/>
                </xsl:attribute>
                <xsl:attribute name="y">
                  <xsl:value-of select="number(posattr/@y)+(ellipse/@h div 2)"/>
                </xsl:attribute>
              </posattr>
            </xsl:otherwise>
          </xsl:choose>
        </port>
      </xsl:if>
      <xsl:apply-templates select="type"/>
      <xsl:apply-templates select="initmark"/>
    </place>
  </xsl:template>

  <!-- Hack to remove Design/CPN fill pattern=none -->
  <xsl:template match="fillattr">
    <fillattr>
      <xsl:choose>
        <xsl:when test="(@pattern = 'none') and not(@filled)"><!-- used to have: and (@colour = 'black') -->
          <xsl:attribute name="colour">White</xsl:attribute>
          <xsl:attribute name="pattern">Solid</xsl:attribute>
          <xsl:attribute name="filled">false</xsl:attribute>
        </xsl:when>
        <xsl:when test="not(@filled)">
          <xsl:attribute name="colour"><xsl:value-of select="@colour"/></xsl:attribute>
          <xsl:attribute name="pattern"><xsl:value-of select="@pattern"/></xsl:attribute>
          <xsl:attribute name="filled">false</xsl:attribute>        
        </xsl:when>
        <xsl:otherwise>
          <xsl:attribute name="colour"><xsl:value-of select="@colour"/></xsl:attribute>
          <xsl:attribute name="pattern"><xsl:value-of select="@pattern"/></xsl:attribute>
          <xsl:attribute name="filled"><xsl:value-of select="@filled"/></xsl:attribute>     
        </xsl:otherwise>
      </xsl:choose>
    </fillattr>
  </xsl:template>

  <!-- Transform aux-boxes with text to aux label and box (bug #1059) -->
  <xsl:template match="aux[box and text]">
    <aux>
      <xsl:attribute name="id">box<xsl:value-of select="@id"/></xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="box"/>
    </aux>
    <aux>
      <xsl:attribute name="id"><xsl:value-of select="@id"/></xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <label>
        <xsl:attribute name="h"><xsl:value-of select="box/@h"/></xsl:attribute>
        <xsl:attribute name="w"><xsl:value-of select="box/@w"/></xsl:attribute>
      </label>
      <xsl:apply-templates select="text"/>
    </aux>
  </xsl:template>

  <!-- Transform aux-boxes with ml code to aux label (bug #712) -->
  <xsl:template match="aux[box and aux-ml]">
    <aux>
      <xsl:attribute name="id"><xsl:value-of select="@id"/></xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <label>
        <xsl:attribute name="h"><xsl:value-of select="box/@h"/></xsl:attribute>
        <xsl:attribute name="w"><xsl:value-of select="box/@w"/></xsl:attribute>
      </label>
      <xsl:apply-templates select="text"/>
    </aux>
  </xsl:template>

  <!-- Transform aux-rboxes with ml code to aux label (bug #1004) -->
  <xsl:template match="aux[rbox and aux-ml]">
    <aux>
      <xsl:attribute name="id"><xsl:value-of select="@id"/></xsl:attribute>
      <xsl:apply-templates select="posattr"/>
      <xsl:apply-templates select="fillattr"/>
      <xsl:apply-templates select="lineattr"/>
      <xsl:apply-templates select="textattr"/>
      <label>
        <xsl:attribute name="h"><xsl:value-of select="rbox/@h"/></xsl:attribute>
        <xsl:attribute name="w"><xsl:value-of select="rbox/@w"/></xsl:attribute>
      </label>
      <xsl:apply-templates select="text"/>
    </aux>
  </xsl:template>

  <!-- Turn rounded boxes into unrounded boxes (bug #713) -->
  <xsl:template match="aux/rbox">
    <box>
      <xsl:attribute name="h"><xsl:value-of select="@h"/></xsl:attribute>
      <xsl:attribute name="w"><xsl:value-of select="@w"/></xsl:attribute>
    </box>
  </xsl:template>

  <!-- Special case to handle automatic aux elements (bug #1128) -->
  <xsl:template match="page[not(trans or place or group or vguideline or hguideline)]/aux[last()=1]/posattr">
    <posattr x="0.0" y="0.0"/>
  </xsl:template>

  <xsl:template match="@*|node()"
                priority="-10000">
    <xsl:copy>
      <xsl:apply-templates select="@*|node()"/>
    </xsl:copy>
  </xsl:template>

</xsl:stylesheet>
