/****************************************************************************
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#ifndef __COCOS2DX_SCRIPTING_LUA_COCOS2DXSUPPORT_LUABAISCCONVERSIONS_H__
#define __COCOS2DX_SCRIPTING_LUA_COCOS2DXSUPPORT_LUABAISCCONVERSIONS_H__

 
extern "C" {
#include "lua.h"
#include "tolua++.h"
}
#include "imgui.h"
#include <string>
#include <vector>
 
#define uint16_t int
#define ssize_t int

#ifndef TOLUA_RELEASE
void luaval_to_native_err(lua_State* L,const char* msg,tolua_Error* err, const char* funcName = "");
#endif

extern bool luaval_is_usertype(lua_State* L,int lo,const char* type, int def);

extern bool luaval_to_ushort(lua_State* L, int lo, unsigned short* outValue, const char* funcName);

extern bool luaval_to_int32(lua_State* L,int lo,int* outValue, const char* funcName);

extern bool luaval_to_uint32(lua_State* L, int lo, unsigned int* outValue, const char* funcName);

extern bool luaval_to_uint16(lua_State* L,int lo,uint16_t* outValue, const char* funcName);

extern bool luaval_to_boolean(lua_State* L,int lo,bool* outValue, const char* funcName);

extern bool luaval_to_number(lua_State* L,int lo,double* outValue, const char* funcName);

extern bool luaval_to_long_long(lua_State* L,int lo,long long* outValue, const char* funcName);

extern bool luaval_to_std_string(lua_State* L, int lo, std::string* outValue, const char* funcName);

extern bool luaval_to_ImVec2(lua_State* L,int lo,ImVec2* outValue, const char* funcName);

extern bool luaval_to_ImVec4(lua_State* L,int lo,ImVec4* outValue, const char* funcName);

extern bool luaval_to_ssize(lua_State* L,int lo, ssize_t* outValue, const char* funcName);

extern bool luaval_to_long(lua_State* L,int lo, long* outValue, const char* funcName);

extern bool luaval_to_ulong(lua_State* L,int lo, unsigned long* outValue, const char* funcName);
  
extern bool luaval_to_ImColor(lua_State* L,int lo,ImColor* outValue, const char* funcName);

extern void ImVec2_to_luaval(lua_State* L,const ImVec2& vec2);

extern void ImVec4_to_luaval(lua_State* L,const ImVec4& vec4);

extern void ImColor_to_luaval(lua_State* L, const ImColor& cc);

extern void obj_to_lua(lua_State* L,const char* type, void* ret);

extern bool luaval_to_std_vector_string(lua_State* L, int lo, std::vector<std::string>* ret, const char* funcName);

extern bool luaval_to_std_vector_int(lua_State* L, int lo, std::vector<int>* ret, const char* funcName);

extern bool luaval_to_std_vector_float(lua_State* L, int lo, std::vector<float>* ret, const char* funcName);

#endif //__COCOS2DX_SCRIPTING_LUA_COCOS2DXSUPPORT_LUABAISCCONVERSIONS_H__
