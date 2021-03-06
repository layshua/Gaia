#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <glm/glm.hpp>

using glm::vec2;
using glm::vec3;

enum INDEX_MODE {
	TRIANGLES,
	QUADS,
	CORNER
};

enum WATER_SOURCE {
	RAIN,
	LAKE,
	NOSOURCE,
	TERRAINMOD
};
extern vec2 simRes; //Simulation resolution
extern vec2 screenRes;
extern WATER_SOURCE waterSource;

extern int NUM_QUADS;
extern vec2 SUBDIV;
extern float texScale;
extern float heightScale;
extern vec3 lightPosWorld;
extern float gridSpacing;		// how far away each grid is
extern float pixelsPerEdge;
extern float tessLevelInner;
extern float tessLevelOuter;

extern bool genNormalMap;		// true if we want to generate normal map manually
extern bool enableTexcoords;	// texcoords will be used as an input attribute in the shaders (used for pass.vert &
								// pass.frag)
extern bool enableErosion;
extern bool enableWaterTest;
extern bool enableTimers;

//EROSION

extern float deltaT;
extern float virtualPipeArea;
extern float virtualPipeLength;
extern float Kc;
extern float Ks;
extern float Ke;

// paths
const extern char* heightmapColorPath;	// temporarily load a color map
const extern char* normalmapPath;
const extern char* diffusemapPath;
const extern char* foamTextureImgPath;
const extern char* grassTexPath;
const extern char* rockTexPath;
const extern char* dirtTexPath;
const extern char* heightmapPath;
const extern char* vertShaderPath;
const extern char* fragShaderPath;
const extern char* tessCtrlShaderPath;
const extern char* tessEvalShadePath;
const extern char* nmapVertShaderPath;
const extern char* nmapFragShaderPath;
const extern char* smooth1FragShaderPath;
const extern char* smoothFragShaderPath;
const extern char* vertQuadShaderPath;
const extern char* tessQuadCtrlShaderPath;
const extern char* tessQuadEvalShadePath; 
const extern char* fragQuadShaderPath;
const extern char* vertSkyboxShaderPath;
const extern char* fragSkyboxShaderPath;
const extern char* cubeMapUpImgPath;
const extern char* cubeMapDownImgPath;
const extern char* cubeMapLeftImgPath;
const extern char* cubeMapRightImgPath;
const extern char* cubeMapFrontImgPath;
const extern char* cubeMapBackImgPath;

// erosion shader paths
const extern char* vertTerrainTexInitPath;
const extern char* fragTerrainTexInitPath;
const extern char* vertErosDepoPath;
const extern char* fragErosDepoPath;
const extern char* vertEvapPath;
const extern char* fragEvapPath;
const extern char* vertFlowSimFluxPath;
const extern char* fragFlowSimFluxPath;
const extern char* vertFlowSimVelPath;
const extern char* fragFlowSimVelPath;
const extern char* vertFlowSimWatHeightPath;
const extern char* fragFlowSimWatHeightPath;
const extern char* vertSedTransPath;
const extern char* fragSedTransPath;
const extern char* vertWatIncPath;
const extern char* fragWatIncPath;
const extern char* vertCopyPath;
const extern char* fragCopyPath;
const extern char* vertWaterPath;
const extern char* fragWaterPath;


// debugging shader paths
const extern char* vertFboTestPath;
const extern char* fragFboTestPath;

// uniform ids
extern char* U_FARID;
extern char* U_NEARID;
extern char* U_MODELID;
extern char* U_VIEWID;
extern char* U_PERSPID;
extern char* U_TESSINNERID;
extern char* U_TESSOUTERID;
extern char* U_TEXSCALEID;
extern char* U_NUMPATCHESID;
extern char* U_HEIGHTSCALEID;
extern char* U_GRIDSPACINGID;
extern char* U_HEIGHTMAPID;
extern char* U_MVINVTRANSID;
extern char* U_PVMID;
extern char* U_LIGHTPOSWORLDID;
extern char* U_PIXELSPEREDGE;
extern char* U_NORMALMAPID;
extern char* U_DIFFUSEMAPID;
extern char* U_TOGGLENORMALID;
extern char* U_SCREENSIZEID;
extern char* U_SOURCETEXID;
extern char* U_TERRAINATTRTEXID;
extern char* U_FLUXTEXID;
extern char* U_TERRAINATTRTEXID;
extern char* U_DELTATID;
extern char* U_FLUXTEXID;
extern char* U_VELTEXID;
extern char* U_VIRTUALPIPEAREAID;
extern char* U_VIRTUALPIPELENGTHID;
extern char* U_KCID;
extern char* U_KSID;
extern char* U_KEID;
extern char* U_UP;
extern char* U_CUBEMAPID;
extern char* U_LIGHTCOLORID;
extern char* U_LIGHTDIRECTIONID;
extern char* U_FRESNELTERMID;
extern char* U_CAMPOSID;
extern char* U_FOAMTEXID;
extern char* U_MANIPCENTERID;
extern char* U_MANIPRADIUSID;
extern char* U_WTRSRCID;
extern char* U_USERINTID;
extern char* U_RANDSEED;
extern char* U_COMPUTEDNORMALMAPID;
extern char* U_KERNELSIZEXID;
extern char* U_KERNELSIZEYID;
extern char* U_GRASSTEXID;
extern char* U_ROCKTEXID;
extern char* U_DIRTTEXID;
#endif