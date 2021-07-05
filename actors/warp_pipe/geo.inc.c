#include "src/game/envfx_snow.h"

extern const Gfx warp_pipe_pipe_001_mesh_layer_1[];
extern const Gfx warp_pipe_material_revert_render_settings[];

const GeoLayout warp_pipe_geo[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(1, warp_pipe_pipe_001_mesh_layer_1),
        GEO_DISPLAY_LIST(1, warp_pipe_material_revert_render_settings),
    GEO_CLOSE_NODE(),
    GEO_END(),
};