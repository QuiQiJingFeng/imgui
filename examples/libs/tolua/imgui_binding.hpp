#ifndef __IMGUI_BINDING__
#define __IMGUI_BINDING__

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

int register_all_imgui(lua_State* tolua_S);

#endif