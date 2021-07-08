/*==================================================================================================
		walker Shape Hms Data 																			   
====================================================================================================*/

extern Gfx RCP_walker_walk0[];
extern Gfx RCP_walker_walk1[];
extern Gfx RCP_walker_walk2[];
extern Gfx RCP_walker_walk3[];
extern Gfx RCP_walker_walk4[];
extern Gfx RCP_walker_walk5[];
extern Gfx RCP_walker_walk17[];
extern Gfx RCP_walker_walk15[];
extern Gfx RCP_walker_walk6[];
extern Gfx RCP_walker_walk16[];
extern Gfx RCP_walker_walk7[];
extern Gfx RCP_walker_walk8[];
extern Gfx RCP_walker_walk9[];
extern Gfx RCP_walker_walk10[];
extern Gfx RCP_walker_walk11[];
extern Gfx RCP_walker_walk12[];
extern Gfx RCP_walker_walk13[];
extern Gfx RCP_walker_walk14[];

/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/

const GeoLayout scuttlebug_geo[] = {
 GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100), 
 GEO_OPEN_NODE(), 
 GEO_SCALE(0x00, 16384), 
    GEO_OPEN_NODE(), 
      GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL), 		/*, , xxx, */
      GEO_OPEN_NODE(), 
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -29, 0, NULL),  /* , jnt8_1, (40), */
         GEO_OPEN_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 113, 112, NULL),  /* , chn1, (39), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt1_1, (29), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),  /* , jnt1_2, (23), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),  /* , jnt1_3, (15), */
                     GEO_OPEN_NODE(), 
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk0),  /* , W_footA, (0), */
                     GEO_CLOSE_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk1),  /* , W_legA2, (1), */
                  GEO_CLOSE_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk2),  /* , W_legA1, (2), */
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 109, -116, NULL),  /* , chn3, (38), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt3_1, (30), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),  /* , jnt3_2, (24), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),  /* , jnt3_3, (16), */
                     GEO_OPEN_NODE(), 
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk3),  /* , W_footB, (3), */
                     GEO_CLOSE_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk4),  /* , W_legB2, (4), */
                  GEO_CLOSE_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk5),  /* , W_legB1, (5), */
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk17),  /* , W_body, (37), */
            GEO_ANIMATED_PART(LAYER_OPAQUE, -29, -57, 28, NULL),  /* , chn9, (36), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt9_1, (25), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 158, 0, 0, NULL),  /* , eff9, (21), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk15),  /* , W_eyeL, (17), */
                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),  /* , W_pupilL, (6), */
                  GEO_CLOSE_NODE(), 
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 55, 28, NULL),  /* , chn10, (35), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt10_1, (26), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 157, 0, 0, NULL),  /* , eff10, (22), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk16),  /* , W_eyeR, (18), */
                     GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),  /* , W_pupilR, (7), */
                  GEO_CLOSE_NODE(), 
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, -111, NULL),  /* , chn12, (34), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt12_1, (31), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 198, 0, 0, NULL),  /* , jnt12_2, (27), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),  /* , jnt12_3, (19), */
                     GEO_OPEN_NODE(), 
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk8),  /* , W_footC, (8), */
                     GEO_CLOSE_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk9),  /* , W_legC2, (9), */
                  GEO_CLOSE_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk10),  /* , W_legC1, (10), */
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, -1, -116, 112, NULL),  /* , chn5, (33), */
            GEO_OPEN_NODE(), 
               GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),  /* , jnt5_1, (32), */
               GEO_OPEN_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 195, 0, 0, NULL),  /* , jnt5_2, (28), */
                  GEO_OPEN_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 199, 0, 0, NULL),  /* , jnt5_3, (20), */
                     GEO_OPEN_NODE(), 
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk11),  /* , W_footD, (11), */
                     GEO_CLOSE_NODE(), 
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk12),  /* , W_legD2, (12), */
                  GEO_CLOSE_NODE(), 
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk13),  /* , W_legD1, (13), */
               GEO_CLOSE_NODE(), 
            GEO_CLOSE_NODE(), 
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, RCP_walker_walk14),  /* , W_eyebrow, (14), */
         GEO_CLOSE_NODE(), 
      GEO_CLOSE_NODE(), 
   GEO_CLOSE_NODE(), 
 GEO_CLOSE_NODE(), 
 GEO_END(), 
};
