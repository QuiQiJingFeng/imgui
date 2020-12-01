#include "Boolean.h"
#include "Integer.h"
#include "Floater.h"
#include "imgui.h"
#include "imgui_binding.hpp"
#include "LuaBasicConversions.h"

//bool value = false  lua:imgui.Boolean(true)
int lua_imgui_Boolean_constructor(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isboolean(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  	bool value = (bool)tolua_toboolean(tolua_S,1,0);
	Boolean* ptr = new Boolean(value);
	tolua_pushusertype(tolua_S,ptr,"imgui.Boolean");
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Boolean constructor'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Boolean_getPtr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Boolean",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Boolean* ptr = ((Boolean*)  tolua_tousertype(tolua_S,1,NULL));
	bool* ret = ptr->getPtr();
	tolua_pushuserdata(tolua_S,(void*)ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Boolean getPtr'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Boolean_getValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Boolean",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Boolean* ptr = ((Boolean*) tolua_tousertype(tolua_S,1,NULL));
	bool ret = ptr->getValue();
	tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Boolean getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Boolean_setValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Boolean",0,&tolua_err) ||
	 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Boolean* ptr = ((Boolean*) tolua_tousertype(tolua_S,1,NULL));
	bool value = (bool)tolua_toboolean(tolua_S,2,NULL);
	ptr->setValue(value);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Boolean getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Boolean_destroy(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Boolean",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Boolean* ptr = ((Boolean*) tolua_tousertype(tolua_S,1,NULL));
	ptr->destroy();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Boolean getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_register_imgui_Boolean(lua_State* tolua_S)
{
	tolua_usertype(tolua_S,"imgui.Boolean");
    tolua_cclass(tolua_S,"Boolean","imgui.Boolean","",nullptr);
	tolua_beginmodule(tolua_S,"Boolean");
        tolua_function(tolua_S,"new",lua_imgui_Boolean_constructor);
        tolua_function(tolua_S,"getPtr",lua_imgui_Boolean_getPtr);
        tolua_function(tolua_S,"getValue",lua_imgui_Boolean_getValue);
		tolua_function(tolua_S,"setValue",lua_imgui_Boolean_setValue);
		tolua_function(tolua_S,"destroy",lua_imgui_Boolean_destroy);
    tolua_endmodule(tolua_S);
	return 1;
}




//int value = false  lua:imgui.Integer(true)
int lua_imgui_Integer_constructor(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  	int value = (int)tolua_tonumber(tolua_S,1,0);
	Integer* ptr = new Integer(value);
	tolua_pushusertype(tolua_S,ptr,"imgui.Integer");
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Integer constructor'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Integer_getPtr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Integer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Integer* ptr = ((Integer*)  tolua_tousertype(tolua_S,1,NULL));
	int* ret = ptr->getPtr();
	tolua_pushuserdata(tolua_S,(void*)ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Integer getPtr'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Integer_getValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Integer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Integer* ptr = ((Integer*) tolua_tousertype(tolua_S,1,NULL));
	int ret = ptr->getValue();
	tolua_pushnumber(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Integer getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Integer_setValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Integer",0,&tolua_err) ||
	 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Integer* ptr = ((Integer*) tolua_tousertype(tolua_S,1,NULL));
	int value = (int)tolua_tonumber(tolua_S,2,NULL);
	ptr->setValue(value);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Integer getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Integer_destroy(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Integer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	Integer* ptr = ((Integer*) tolua_tousertype(tolua_S,1,NULL));
	ptr->destroy();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Integer getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_register_imgui_Integer(lua_State* tolua_S)
{
	tolua_usertype(tolua_S,"imgui.Integer");
    tolua_cclass(tolua_S,"Integer","imgui.Integer","",nullptr);
	tolua_beginmodule(tolua_S,"Integer");
        tolua_function(tolua_S,"new",lua_imgui_Integer_constructor);
        tolua_function(tolua_S,"getPtr",lua_imgui_Integer_getPtr);
        tolua_function(tolua_S,"getValue",lua_imgui_Integer_getValue);
		tolua_function(tolua_S,"setValue",lua_imgui_Integer_setValue);
		tolua_function(tolua_S,"destroy",lua_imgui_Integer_destroy);
    tolua_endmodule(tolua_S);
	return 1;
}




//float value = false  lua:imgui.Floater(true)
int lua_imgui_Floater_constructor(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
    float value = (float)tolua_tonumber(tolua_S,1,0);
    Floater* ptr = new Floater(value);
    tolua_pushusertype(tolua_S,ptr,"imgui.Floater");
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floater constructor'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Floater_getPtr(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Floater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Floater* ptr = ((Floater*)  tolua_tousertype(tolua_S,1,NULL));
  float* ret = ptr->getPtr();
  tolua_pushuserdata(tolua_S,(void*)ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floater getPtr'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Floater_getValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Floater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Floater* ptr = ((Floater*) tolua_tousertype(tolua_S,1,NULL));
  float ret = ptr->getValue();
  tolua_pushnumber(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floater getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Floater_setValue(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Floater",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Floater* ptr = ((Floater*) tolua_tousertype(tolua_S,1,NULL));
  float value = (float)tolua_tonumber(tolua_S,2,NULL);
  ptr->setValue(value);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floater getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Floater_destroy(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"imgui.Floater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Floater* ptr = ((Floater*) tolua_tousertype(tolua_S,1,NULL));
  ptr->destroy();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floater getValue'.",&tolua_err);
 return 0;
#endif
}

int lua_register_imgui_Floater(lua_State* tolua_S)
{
  tolua_usertype(tolua_S,"imgui.Floater");
  tolua_cclass(tolua_S,"Floater","imgui.Floater","",nullptr);
  tolua_beginmodule(tolua_S,"Floater");
    tolua_function(tolua_S,"new",lua_imgui_Floater_constructor);
    tolua_function(tolua_S,"getPtr",lua_imgui_Floater_getPtr);
    tolua_function(tolua_S,"getValue",lua_imgui_Floater_getValue);
    tolua_function(tolua_S,"setValue",lua_imgui_Floater_setValue);
    tolua_function(tolua_S,"destroy",lua_imgui_Floater_destroy);
  tolua_endmodule(tolua_S);
  return 1;
}









//const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0
int lua_imgui_Begin(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 	 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 	const char* name = (const char*)  tolua_tostring(tolua_S,1,0);
	bool* ptr = (bool*) tolua_touserdata(tolua_S,2,nullptr);
	ImGuiWindowFlags flags = (ImGuiWindowFlags) tolua_tonumber(tolua_S,3,0);
	bool ret = ImGui::Begin(name,ptr,flags);
	tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_imgui_Begin'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_End(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	ImGui::End();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_imgui_End'.",&tolua_err);
 return 0;
#endif
}

//ImGuiID id, const ImVec2& size = ImVec2(0, 0), bool border = false, ImGuiWindowFlags flags = 0
int lua_imgui_BeginChild01(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S, 2, 1, &tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 	ImGuiID id = (ImGuiID) tolua_tonumber(tolua_S,1,0);
 	ImVec2 size(0,0);
 	if (lua_istable(tolua_S, 2))
 	{
 		luaval_to_ImVec2(tolua_S,2,&size, "lua_imgui_BeginChild01");
 	}
	bool border = ((bool)  tolua_toboolean(tolua_S,3,false));
	ImGuiWindowFlags flags = (ImGuiWindowFlags) tolua_tonumber(tolua_S,4,0);
	bool ret = ImGui::BeginChild(id,size,border,flags);
	tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_imgui_BeginChild01'.",&tolua_err);
 return 0;
#endif
}

//const char* str_id, const ImVec2& size = ImVec2(0, 0), bool border = false, ImGuiWindowFlags flags = 0
int lua_imgui_BeginChild(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S, 2, 1, &tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 	const char* str_id = (const char*)  tolua_tostring(tolua_S,1,0);
 	ImVec2 size(0,0);
 	if (lua_istable(tolua_S, 2))
 	{
 		luaval_to_ImVec2(tolua_S,2,&size, "lua_imgui_BeginChild");
 	}
	bool border = (bool) tolua_toboolean(tolua_S,3,false);
	ImGuiWindowFlags flags = (ImGuiWindowFlags) tolua_tonumber(tolua_S,4,0);
	bool ret = ImGui::BeginChild(str_id,size,border,flags);
	tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 return lua_imgui_BeginChild01(tolua_S);
#endif
}

int lua_imgui_EndChild(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	ImGui::EndChild();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lua_imgui_EndChild'.",&tolua_err);
 return 0;
#endif
}

//bool* p_open = NULL
int lua_imgui_ShowDemoWindow(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool* p_open = ((bool*)tolua_touserdata(tolua_S,1,NULL));
  {
   ImGui::ShowDemoWindow(p_open);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowDemoWindow'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Text(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* fmt = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   ImGui::Text(fmt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Text'.",&tolua_err);
 return 0;
#endif
}

//const char* label, const ImVec2& size = ImVec2(0, 0)
int lua_imgui_Button(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S, 2, 1, &tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
   ImVec2 size(0,0);
   if (lua_istable(tolua_S, 2))
   {
	  luaval_to_ImVec2(tolua_S,2,&size, "lua_imgui_Button");
   }
   bool ret = ImGui::Button(label,size);
   tolua_pushboolean(tolua_S,ret);
 
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Button'.",&tolua_err);
 return 0;
#endif
}

//const char* label
int lua_imgui_SmallButton(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
	const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
    bool ret = ImGui::SmallButton(label);
    tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SmallButton'.",&tolua_err);
 return 0;
#endif
}

//const char* str_id, const ImVec2& size, ImGuiButtonFlags flags = 0
int lua_imgui_InvisibleButton(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S, 2, 1, &tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* str_id = ((const char*)  tolua_tostring(tolua_S,1,0));
   ImVec2 size(0,0);
   if (lua_istable(tolua_S, 2))
   {
	  luaval_to_ImVec2(tolua_S,2,&size, "lua_imgui_InvisibleButton");
   }
   ImGuiButtonFlags flags = (ImGuiButtonFlags) tolua_tonumber(tolua_S,3,0);
   bool ret = ImGui::InvisibleButton(str_id,size,flags);
   tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InvisibleButton'.",&tolua_err);
 return 0;
#endif
}

//const char* str_id, ImGuiDir dir
int lua_imgui_ArrowButton(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* str_id = ((const char*)  tolua_tostring(tolua_S,1,0));
   ImGuiDir dir = (ImGuiDir) tolua_tonumber(tolua_S,2,0);
   bool ret = ImGui::ArrowButton(str_id,dir);
   tolua_pushboolean(tolua_S,(bool)ret);
 
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ArrowButton'.",&tolua_err);
 return 0;
#endif
}

//ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0), 
//const ImVec2& uv1 = ImVec2(1,1), const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0)
int lua_imgui_Image(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,1,&tolua_err) ||
     !tolua_istable(tolua_S,4,1,&tolua_err) ||
     !tolua_istable(tolua_S,5,1,&tolua_err) ||
     !tolua_istable(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   ImTextureID user_texture_id = (ImTextureID)  tolua_touserdata(tolua_S,1,0);
   ImVec2 size(0,0);
   if (!luaval_to_ImVec2(tolua_S, 2, &size, "lua_imgui_Image")) goto tolua_lerror;

   ImVec2 uv0(0,0);
   if (lua_istable(tolua_S, 3))
   {
	  luaval_to_ImVec2(tolua_S,3,&uv0, "lua_imgui_Image");
   }

   ImVec2 uv1(1,1);
   if (lua_istable(tolua_S, 4))
   {
	  luaval_to_ImVec2(tolua_S,4,&uv1, "lua_imgui_Image");
   }

   ImVec4 tint_col(1,1,1,1);
   if (lua_istable(tolua_S, 5))
   {
	  luaval_to_ImVec4(tolua_S,5,&tint_col, "lua_imgui_Image");
   }

   ImVec4 border_col(0,0,0,0);
   if (lua_istable(tolua_S, 6))
   {
	  luaval_to_ImVec4(tolua_S,6,&border_col, "lua_imgui_Image");
   }

   ImGui::Image(user_texture_id,size,uv0,uv1,tint_col,border_col);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Image'.",&tolua_err);
 return 0;
#endif
}

//ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0),  
//const ImVec2& uv1 = ImVec2(1,1), int frame_padding = -1, 
//const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1)
int lua_imgui_ImageButton(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,1,&tolua_err) ||
     !tolua_istable(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_istable(tolua_S,6,1,&tolua_err) ||
     !tolua_istable(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   ImTextureID user_texture_id = (ImTextureID)  tolua_touserdata(tolua_S,1,0);
   ImVec2 size(0,0);
   if (!luaval_to_ImVec2(tolua_S, 2, &size, "lua_imgui_ImageButton")) goto tolua_lerror;

   ImVec2 uv0(0,0);
   if (lua_istable(tolua_S, 3))
   {
	  luaval_to_ImVec2(tolua_S,3,&uv0, "lua_imgui_ImageButton");
   }

   ImVec2 uv1(1,1);
   if (lua_istable(tolua_S, 4))
   {
	  luaval_to_ImVec2(tolua_S,4,&uv1, "lua_imgui_ImageButton");
   }
   int frame_padding = (int) tolua_tonumber(tolua_S,5,0);

   ImVec4 bg_col(1,1,1,1);
   if (lua_istable(tolua_S, 5))
   {
	  luaval_to_ImVec4(tolua_S,5,&bg_col, "lua_imgui_ImageButton");
   }

   ImVec4 tint_col(0,0,0,0);
   if (lua_istable(tolua_S, 6))
   {
	  luaval_to_ImVec4(tolua_S,6,&tint_col, "lua_imgui_ImageButton");
   }


   bool ret = ImGui::ImageButton(user_texture_id,size,uv0,uv1,frame_padding,bg_col,tint_col);
   tolua_pushboolean(tolua_S,(bool)ret);
 
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ImageButton'.",&tolua_err);
 return 0;
#endif
}

//const char* label, bool* v
int tolua_imgui_Checkbox(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
   bool* ptr = (bool*) tolua_touserdata(tolua_S,2,NULL);
   bool ret = ImGui::Checkbox(label,ptr);
   tolua_pushboolean(tolua_S,ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Checkbox'.",&tolua_err);
 return 0;
#endif
}

//const char* label, unsigned int* flags, unsigned int flags_value
int tolua_imgui_CheckboxFlags(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
   int* flags = (int*) tolua_touserdata(tolua_S,2,NULL);
   unsigned int flags_value = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
   bool ret = ImGui::CheckboxFlags(label,(unsigned int*)flags,flags_value);
   tolua_pushboolean(tolua_S,(bool)ret);
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CheckboxFlags'.",&tolua_err);
 return 0;
#endif
}

//const char* label, int* v, int v_button
int lua_imgui_RadioButton01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  int* v = (int*) tolua_touserdata(tolua_S,2,NULL);
  int v_button = ((int)  tolua_tonumber(tolua_S,3,0));
 
   bool ret = (bool)  ImGui::RadioButton(label,v,v_button);
   tolua_pushboolean(tolua_S,ret);
 }
 return 1;
tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RadioButton'.",&tolua_err);
 return 0;
}

//const char* label, bool active
int lua_imgui_RadioButton(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
   bool active = ((bool)  tolua_toboolean(tolua_S,2,0));
   bool ret = ImGui::RadioButton(label,active);
   tolua_pushboolean(tolua_S,ret);
 
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 return lua_imgui_RadioButton01(tolua_S);
#endif
}

//float fraction, const ImVec2& size_arg = ImVec2(-1, 0), const char* overlay = NULL
int lua_imgui_ProgressBar(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S, 2, 1, &tolua_err) ||
     !tolua_isstring(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
    float fraction = ((float)  tolua_tonumber(tolua_S,1,0));
	ImVec2 size_arg(-1,0);
	if (lua_istable(tolua_S, 2))
	{
		luaval_to_ImVec2(tolua_S, 2, &size_arg, "lua_imgui_ProgressBar");
	}
   const char* overlay = ((const char*)  tolua_tostring(tolua_S,3,0));
 
   ImGui::ProgressBar(fraction,size_arg,overlay);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ProgressBar'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_Bullet(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
 
   ImGui::Bullet();
 
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bullet'.",&tolua_err);
 return 0;
#endif
}

//const char* fmt
static int lua_imgui_BulletText(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* fmt = ((const char*)  tolua_tostring(tolua_S,1,0));
  ImGui::BulletText(fmt);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BulletText'.",&tolua_err);
 return 0;
#endif
}

//float indent_w = 0.0f
int lua_imgui_Indent(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float indent_w = ((float)  tolua_tonumber(tolua_S,1,0.0f));
  {
   ImGui::Indent(indent_w);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Indent'.",&tolua_err);
 return 0;
#endif
}

//float indent_w = 0.0f
int lua_imgui_Unindent(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float indent_w = ((float)  tolua_tonumber(tolua_S,1,0.0f));
  {
   ImGui::Unindent(indent_w);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Unindent'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_BeginGroup(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::BeginGroup();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BeginGroup'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_EndGroup(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::EndGroup();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EndGroup'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_GetCursorPos(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
    ImVec2 vec2 = ImGui::GetCursorPos();
	ImVec2_to_luaval(tolua_S, vec2);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorPos'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetCursorPosX(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = ImGui::GetCursorPosX();
   tolua_pushnumber(tolua_S,tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorPosX'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetCursorPosY(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = ImGui::GetCursorPosY();
   tolua_pushnumber(tolua_S,tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorPosY'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_Separator(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::Separator();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Separator'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_SameLine(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float offset_from_start_x = ((float)  tolua_tonumber(tolua_S,1,0.0f));
  float spacing = ((float)  tolua_tonumber(tolua_S,2,-1.0f));
  {
   ImGui::SameLine(offset_from_start_x,spacing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SameLine'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_NewLine(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::NewLine();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'NewLine'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_Spacing(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   ImGui::Spacing();
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Spacing'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_SetCursorPos(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
	 (tolua_istable(tolua_S, 1, 0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImVec2 local_pos(0,0);
  if (lua_istable(tolua_S, 1))
    luaval_to_ImVec2(tolua_S,1,&local_pos, "lua_imgui_ImGui_SetCursorPos");
  else
    goto tolua_lerror;
  {
    ImGui::SetCursorPos(local_pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCursorPos'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetCursorStartPos(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImVec2 tolua_ret = ImGui::GetCursorStartPos();
   {
	   ImVec2_to_luaval(tolua_S, tolua_ret);
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorStartPos'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetCursorScreenPos(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImVec2 tolua_ret = ImGui::GetCursorScreenPos();
   {
	   ImVec2_to_luaval(tolua_S, tolua_ret);
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorScreenPos'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_SetCursorScreenPos(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
	 !tolua_istable(tolua_S, 1,0, &tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ImVec2 pos(0,0);
  if (lua_istable(tolua_S, 1))
    luaval_to_ImVec2(tolua_S,1,&pos, "lua_imgui_ImGui_SetCursorPos");
  else
    goto tolua_lerror;
  {
   ImGui::SetCursorScreenPos(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCursorScreenPos'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_AlignTextToFramePadding(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::AlignTextToFramePadding();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AlignTextToFramePadding'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetTextLineHeight(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  ImGui::GetTextLineHeight();
   tolua_pushnumber(tolua_S,tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextLineHeight'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetTextLineHeightWithSpacing(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  ImGui::GetTextLineHeightWithSpacing();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextLineHeightWithSpacing'.",&tolua_err);
 return 0;
#endif
}


int lua_imgui_ImGui_GetFrameHeight(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  ImGui::GetFrameHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameHeight'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_GetFrameHeightWithSpacing(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  ImGui::GetFrameHeightWithSpacing();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameHeightWithSpacing'.",&tolua_err);
 return 0;
#endif
}


/* function: ImGui::PushID */
int tolua_imgui_ImGui_PushID03(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* str_id = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   ImGui::PushID(str_id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PushID'.",&tolua_err);
 return 0;
#endif
}

/* function: ImGui::PushID */
int tolua_imgui_ImGui_PushID02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* str_id_begin = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* str_id_end = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   ImGui::PushID(str_id_begin,str_id_end);
  }
 }
 return 0;
tolua_lerror:
 return tolua_imgui_ImGui_PushID03(tolua_S);
}

/* function: ImGui::PushID */
int tolua_imgui_ImGui_PushID01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const void* ptr_id = ((const void*)  tolua_touserdata(tolua_S,1,0));
  {
   ImGui::PushID(ptr_id);
  }
 }
 return 0;
tolua_lerror:
 return tolua_imgui_ImGui_PushID02(tolua_S);
}

/* function: ImGui::PushID */
int lua_imgui_ImGui_PushID(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int int_id = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   ImGui::PushID(int_id);
  }
 }
 return 0;
tolua_lerror:
 return tolua_imgui_ImGui_PushID01(tolua_S);
}


int lua_imgui_ImGui_PopID(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::PopID();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PopID'.",&tolua_err);
 return 0;
#endif
}


/* function: ImGui::GetID */
int tolua_imgui_ImGui_GetID02(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* str_id = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  ImGui::GetID(str_id);
   tolua_pushnumber(tolua_S,(float)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetID'.",&tolua_err);
 return 0;
#endif
}

/* function: ImGui::GetID */
int tolua_imgui_ImGui_GetID01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* str_id_begin = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* str_id_end = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   unsigned int tolua_ret = (unsigned int)  ImGui::GetID(str_id_begin,str_id_end);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_imgui_ImGui_GetID02(tolua_S);
}

/* function: ImGui::GetID */
int lua_imgui_ImGui_GetID(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const void* ptr_id = ((const void*)  tolua_touserdata(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  ImGui::GetID(ptr_id);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_imgui_ImGui_GetID01(tolua_S);
}

int lua_imgui_ImGui_BeginCombo(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* preview_value = ((const char*)  tolua_tostring(tolua_S,2,0));
   int flags = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  ImGui::BeginCombo(label,preview_value,flags);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BeginCombo'.",&tolua_err);
 return 0;
#endif
}


int lua_imgui_ImGui_EndCombo(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ImGui::EndCombo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EndCombo'.",&tolua_err);
 return 0;
#endif
}
 
int lua_imgui_ImGui_Combo01(lua_State* tolua_S)
{
	tolua_Error tolua_err;
	if (
		!tolua_isstring(tolua_S, 1, 0, &tolua_err) ||
		!tolua_isusertype(tolua_S, 2, "imgui.Integer", 0, &tolua_err) ||
		!tolua_isstring(tolua_S, 3, 0, &tolua_err) ||
		!tolua_isnumber(tolua_S, 4, 1, &tolua_err) ||
		!tolua_isnoobj(tolua_S, 5, &tolua_err)
		)
		goto tolua_lerror;
	else
	{
		const char* label = ((const char*)tolua_tostring(tolua_S, 1, 0));
		Integer* ptr = ((Integer*)tolua_tousertype(tolua_S, 2, NULL));
		int* current_item = ptr->getPtr();

		const char* items_separated_by_zeros = ((const char*)tolua_tostring(tolua_S, 3, 0));
		int popup_max_height_in_items = ((int)tolua_tonumber(tolua_S, 4, -1));
		{
			bool tolua_ret = (bool)ImGui::Combo(label, current_item, items_separated_by_zeros, popup_max_height_in_items);
			tolua_pushboolean(tolua_S, (bool)tolua_ret);
		}
	}
	return 1;
tolua_lerror:
	tolua_error(tolua_S, "#ferror in function 'EndCombo'.", &tolua_err);
	return 0;
}


int lua_imgui_ImGui_Combo(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"imgui.Integer",0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  Integer* ptr = ((Integer*)  tolua_tousertype(tolua_S,2,NULL));

  int* current_item = ptr->getPtr();
  std::vector<std::string> items;
  if(!luaval_to_std_vector_string(tolua_S,3,&items,"lua_imgui_ImGui_Combo")) goto tolua_lerror;
 
  int items_count = ((int)  tolua_tonumber(tolua_S,4,0));
  int popup_max_height_in_items = ((int)  tolua_tonumber(tolua_S,5,-1));
  {
  /* bool tolua_ret = (bool)  ImGui::Combo(label,current_item,(const char**)items.begin(),items_count,popup_max_height_in_items);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);*/  //TODO
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 return lua_imgui_ImGui_Combo01(tolua_S);
#endif
}


int lua_imgui_ImGui_DragFloat(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
	 !tolua_isuserdata(tolua_S, 2, 0, &tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  float* ptr = (float*)tolua_touserdata(tolua_S, 2, NULL);
  float v_speed = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float v_min = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float v_max = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  const char* format = ((const char*)  tolua_tostring(tolua_S,6,"%.3f"));
  float power = ((float)tolua_tonumber(tolua_S, 7, 0));
  {
	  bool tolua_ret = (bool)ImGui::DragFloat(label, ptr, v_speed, v_min, v_max, format, power);
     tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DragFloat'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_DragFloat2(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  float vect[2];
  std::vector<float> v;
  if(!luaval_to_std_vector_float(tolua_S,2,&v,"lua_imgui_ImGui_DragFloat2")) goto tolua_lerror;
  vect[1] = v[1];
  vect[2] = v[2];
  float v_speed = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float v_min = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float v_max = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  const char* format = ((const char*)  tolua_tostring(tolua_S,6,"%.3f"));
   int flags = ((int)  tolua_tonumber(tolua_S,7,0));
 
  {
   bool tolua_ret = (bool)  ImGui::DragFloat2(label,vect,v_speed,v_min,v_max,format,flags);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DragFloat2'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_DragFloat3(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  float vect[3];
  std::vector<float> v;
  if(!luaval_to_std_vector_float(tolua_S,2,&v,"lua_imgui_ImGui_DragFloat2")) goto tolua_lerror;
  vect[1] = v[1];
  vect[2] = v[2];
  vect[3] = v[3];
  float v_speed = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float v_min = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float v_max = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  const char* format = ((const char*)  tolua_tostring(tolua_S,6,"%.3f"));
   int flags = ((int)  tolua_tonumber(tolua_S,7,0));
 
  {
   bool tolua_ret = (bool)  ImGui::DragFloat2(label,vect,v_speed,v_min,v_max,format,flags);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DragFloat2'.",&tolua_err);
 return 0;
#endif
}

int lua_imgui_ImGui_DragFloat4(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,1,0));
  float vect[3];
  std::vector<float> v;
  if(!luaval_to_std_vector_float(tolua_S,2,&v,"lua_imgui_ImGui_DragFloat2")) goto tolua_lerror;
  vect[1] = v[1];
  vect[2] = v[2];
  vect[3] = v[3];
  vect[4] = v[4];
  float v_speed = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float v_min = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float v_max = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  const char* format = ((const char*)  tolua_tostring(tolua_S,6,"%.3f"));
   int flags = ((int)  tolua_tonumber(tolua_S,7,0));
 
  {
   bool tolua_ret = (bool)  ImGui::DragFloat2(label,vect,v_speed,v_min,v_max,format,flags);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DragFloat2'.",&tolua_err);
 return 0;
#endif
}

int lua_register_imgui_api(lua_State* tolua_S)
{
    tolua_function(tolua_S,"Begin",lua_imgui_Begin);
    tolua_function(tolua_S,"End",lua_imgui_End);
    tolua_function(tolua_S,"BeginChild",lua_imgui_BeginChild);
    tolua_function(tolua_S,"EndChild",lua_imgui_EndChild);
    tolua_function(tolua_S,"ShowDemoWindow",lua_imgui_ShowDemoWindow);
    tolua_function(tolua_S,"Text",lua_imgui_Text);
    tolua_function(tolua_S,"Button",lua_imgui_Button);
    tolua_function(tolua_S,"SmallButton",lua_imgui_SmallButton);
    tolua_function(tolua_S,"InvisibleButton",lua_imgui_InvisibleButton);
    tolua_function(tolua_S,"ArrowButton",lua_imgui_ArrowButton);
    tolua_function(tolua_S,"Image",lua_imgui_Image);
    tolua_function(tolua_S,"ImageButton",lua_imgui_ImageButton);
    tolua_function(tolua_S,"Checkbox",tolua_imgui_Checkbox);
    tolua_function(tolua_S,"CheckboxFlags",tolua_imgui_CheckboxFlags);
    tolua_function(tolua_S,"RadioButton",lua_imgui_RadioButton);
    tolua_function(tolua_S,"ProgressBar",lua_imgui_ProgressBar);
    tolua_function(tolua_S,"Bullet",lua_imgui_Bullet);
    tolua_function(tolua_S,"BulletText",lua_imgui_BulletText);
    tolua_function(tolua_S,"Indent",lua_imgui_Indent);
    tolua_function(tolua_S,"Unindent",lua_imgui_Unindent);
    tolua_function(tolua_S,"BeginGroup",lua_imgui_BeginGroup);
    tolua_function(tolua_S,"EndGroup",lua_imgui_EndGroup);
    tolua_function(tolua_S,"GetCursorPos",lua_imgui_GetCursorPos);
    tolua_function(tolua_S,"GetCursorPosX",lua_imgui_ImGui_GetCursorPosX);
    tolua_function(tolua_S,"GetCursorPosY",lua_imgui_ImGui_GetCursorPosY);
    tolua_function(tolua_S,"Separator",lua_imgui_ImGui_Separator);
    tolua_function(tolua_S,"SameLine",lua_imgui_ImGui_SameLine);
    tolua_function(tolua_S,"NewLine",lua_imgui_ImGui_NewLine);
    tolua_function(tolua_S,"Spacing",lua_imgui_ImGui_Spacing);
    tolua_function(tolua_S,"SetCursorPos",lua_imgui_ImGui_SetCursorPos);
    tolua_function(tolua_S,"GetCursorStartPos",lua_imgui_ImGui_GetCursorStartPos);
    tolua_function(tolua_S,"GetCursorScreenPos",lua_imgui_ImGui_GetCursorScreenPos);
    tolua_function(tolua_S,"SetCursorScreenPos",lua_imgui_ImGui_SetCursorScreenPos);
    tolua_function(tolua_S,"AlignTextToFramePadding",lua_imgui_ImGui_AlignTextToFramePadding);
    tolua_function(tolua_S,"GetTextLineHeight",lua_imgui_ImGui_GetTextLineHeight);
    tolua_function(tolua_S,"GetTextLineHeightWithSpacing",lua_imgui_ImGui_GetTextLineHeightWithSpacing);
    tolua_function(tolua_S,"GetFrameHeight",lua_imgui_ImGui_GetFrameHeight);
    tolua_function(tolua_S,"GetFrameHeightWithSpacing",lua_imgui_ImGui_GetFrameHeightWithSpacing);
    tolua_function(tolua_S,"PushID",lua_imgui_ImGui_PushID);
    tolua_function(tolua_S,"PopID",lua_imgui_ImGui_PopID);
    tolua_function(tolua_S,"GetID",lua_imgui_ImGui_GetID);
    tolua_function(tolua_S,"BeginCombo",lua_imgui_ImGui_BeginCombo);
    tolua_function(tolua_S,"EndCombo",lua_imgui_ImGui_EndCombo);
    tolua_function(tolua_S,"Combo",lua_imgui_ImGui_Combo);
    tolua_function(tolua_S,"DragFloat",lua_imgui_ImGui_DragFloat);
    tolua_function(tolua_S,"DragFloat2",lua_imgui_ImGui_DragFloat2);
    tolua_function(tolua_S,"DragFloat3",lua_imgui_ImGui_DragFloat3);
    tolua_function(tolua_S,"DragFloat4",lua_imgui_ImGui_DragFloat4);
 





    return 1;
}

TOLUA_API int register_all_imgui(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S, NULL, 0);
	tolua_beginmodule(tolua_S, NULL);
	
		tolua_module(tolua_S,"imgui",0);
		tolua_beginmodule(tolua_S,"imgui");

			lua_register_imgui_Boolean(tolua_S);
			lua_register_imgui_Integer(tolua_S);
			lua_register_imgui_Floater(tolua_S);

 			lua_register_imgui_api(tolua_S);
		tolua_endmodule(tolua_S);
	tolua_endmodule(tolua_S);
	return 1;
}
