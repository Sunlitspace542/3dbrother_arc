/********************************************************************************
		Hms tree data.
														[ Jan 25, 1996 ]
*********************************************************************************/

extern Gfx  RCP_main_tree[];
extern Gfx 	RCP_tree02[];
extern Gfx 	RCP_tree03[];
extern Gfx 	RCP_tree04[];
extern Gfx 	RCP_tree05[];


/********************************************************************************/
/*	const GeoLayout map data of MainTree.												*/
/********************************************************************************/
const GeoLayout bubbly_tree_geo[] = {
	GEO_CULLING_RADIUS(800),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_main_tree),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};

/********************************************************************************/
/*	const GeoLayout map data of Tree02.												*/
/********************************************************************************/
const GeoLayout spiky_tree_geo[] = {
	GEO_CULLING_RADIUS(800),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_tree02),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};

/********************************************************************************/
/*	const GeoLayout map data of Tree03.												*/
/********************************************************************************/
const GeoLayout snow_tree_geo[] = {
	GEO_CULLING_RADIUS(800),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_tree03),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};

/********************************************************************************/
/*	const GeoLayout map data of Tree04.												*/
/********************************************************************************/
const GeoLayout spiky_tree1_geo[] = {
	GEO_CULLING_RADIUS(800),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_tree04),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};

/********************************************************************************/
/*	const GeoLayout map data of Tree05.												*/
/********************************************************************************/
const GeoLayout palm_tree_geo[] = {
	GEO_CULLING_RADIUS(800),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_tree05),
	GEO_CLOSE_NODE(),
  	GEO_END(),
};
