#define CCLOG printf

#include "LuaBasicConversions.h"

#ifndef TOLUA_RELEASE
void luaval_to_native_err(lua_State* L,const char* msg,tolua_Error* err, const char* funcName)
{
    if (NULL == L || NULL == err || NULL == msg || 0 == strlen(msg))
        return;

    if (msg[0] == '#')
    {
        const char* expected = err->type;
        const char* provided = tolua_typename(L,err->index);
        if (msg[1]=='f')
        {
            int narg = err->index;
            if (err->array)
                CCLOG("%s\n     %s argument #%d is array of '%s'; array of '%s' expected.\n",msg+2,funcName,narg,provided,expected);
            else
                CCLOG("%s\n     %s argument #%d is '%s'; '%s' expected.\n",msg+2,funcName,narg,provided,expected);
        }
        else if (msg[1]=='v')
        {
            if (err->array)
                CCLOG("%s\n     %s value is array of '%s'; array of '%s' expected.\n",funcName,msg+2,provided,expected);
            else
                CCLOG("%s\n     %s value is '%s'; '%s' expected.\n",msg+2,funcName,provided,expected);
        }
    }
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern int lua_isusertype (lua_State* L, int lo, const char* type);
#ifdef __cplusplus
}
#endif

bool luaval_is_usertype(lua_State* L,int lo,const char* type, int def)
{
    if (def && lua_gettop(L)<abs(lo))
        return true;
    
    if (lua_isnil(L,lo) || lua_isusertype(L,lo,type))
        return true;
    
    return false;
}

bool luaval_to_ushort(lua_State* L, int lo, unsigned short* outValue, const char* funcName)
{
    if (nullptr == L || nullptr == outValue)
        return false;
    
    bool ok = true;
    
    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (unsigned short)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}


bool luaval_to_int32(lua_State* L,int lo,int* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        /**
         When we want to convert the number value from the Lua to int, we would call lua_tonumber to implement.It would
         experience two phase conversion: int -> double, double->int.But,for the 0x80000000 which the min value of int, the
         int cast may return an undefined result,like 0x7fffffff.So we must use the (int)(unsigned int)lua_tonumber() to get
         predictable results for 0x80000000.In this place,we didn't use lua_tointeger, because it may produce differen results
         depending on the compiler,e.g:for iPhone4s,it also get wrong value for 0x80000000.
         */
        unsigned int estimateValue = (unsigned int)lua_tonumber(L, lo);
        if (estimateValue == std::numeric_limits<int>::min())
        {
            *outValue = (int)estimateValue;
        }
        else
        {
            *outValue = (int)lua_tonumber(L, lo);
        }
    }
    
    return ok;
}

bool luaval_to_uint32(lua_State* L, int lo, unsigned int* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (unsigned int)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_uint16(lua_State* L,int lo,uint16_t* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (unsigned char)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_boolean(lua_State* L,int lo,bool* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isboolean(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (bool)tolua_toboolean(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_number(lua_State* L,int lo,double* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_long_long(lua_State* L,int lo,long long* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (long long)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_std_string(lua_State* L, int lo, std::string* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_iscppstring(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = tolua_tocppstring(L,lo,NULL);
    }
    
    return ok;
}

bool luaval_to_ImVec2(lua_State* L,int lo,ImVec2* outValue, const char* funcName)
{
    if (nullptr == L || nullptr == outValue)
        return false;
    
    bool ok = true;
    
    tolua_Error tolua_err;
    if (!tolua_istable(L, lo, 0, &tolua_err) )
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    
    if (ok)
    {
        lua_pushstring(L, "x");
        lua_gettable(L, lo);
        outValue->x = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
        
        lua_pushstring(L, "y");
        lua_gettable(L, lo);
        outValue->y = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
    }
    return ok;
}

bool luaval_to_ImVec4(lua_State* L,int lo,ImVec4* outValue, const char* funcName)
{
    if (nullptr == L || nullptr == outValue)
        return false;
    
    bool ok = true;
    
    tolua_Error tolua_err;
    if (!tolua_istable(L, lo, 0, &tolua_err) )
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    
    if (ok)
    {
        lua_pushstring(L, "x");
        lua_gettable(L, lo);
        outValue->x = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
        
        lua_pushstring(L, "y");
        lua_gettable(L, lo);
        outValue->y = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
        
        lua_pushstring(L, "z");
        lua_gettable(L, lo);
        outValue->z = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
        
        lua_pushstring(L, "w");
        lua_gettable(L, lo);
        outValue->w = lua_isnil(L, -1) ? 0 : lua_tonumber(L, -1);
        lua_pop(L, 1);
    }
    return ok;
}

bool luaval_to_ssize(lua_State* L,int lo, ssize_t* outValue, const char* funcName)
{
	return luaval_to_long(L, lo, reinterpret_cast<long*>(outValue), funcName);
}

bool luaval_to_long(lua_State* L,int lo, long* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;
    
    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (long)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}

bool luaval_to_ulong(lua_State* L,int lo, unsigned long* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;
    
    tolua_Error tolua_err;
    if (!tolua_isnumber(L,lo,0,&tolua_err))
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        *outValue = (unsigned long)tolua_tonumber(L, lo, 0);
    }
    
    return ok;
}
  

bool luaval_to_ImColor(lua_State* L,int lo,ImColor* outValue, const char* funcName)
{
    if (NULL == L || NULL == outValue)
        return false;
    
    bool ok = true;

    tolua_Error tolua_err;
    if (!tolua_istable(L, lo, 0, &tolua_err) )
    {
#ifndef TOLUA_RELEASE
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if(ok)
    {
        lua_pushstring(L, "r");
        lua_gettable(L,lo);
        outValue->Value.x = lua_isnil(L,-1) ? 0 : lua_tonumber(L,-1);
        lua_pop(L,1);
        
        lua_pushstring(L, "g");
        lua_gettable(L,lo);
        outValue->Value.y = lua_isnil(L,-1) ? 0 : lua_tonumber(L,-1);
        lua_pop(L,1);
        
        lua_pushstring(L, "b");
        lua_gettable(L,lo);
        outValue->Value.z = lua_isnil(L,-1) ? 0 : lua_tonumber(L,-1);
        lua_pop(L,1);
        
        lua_pushstring(L, "a");
        lua_gettable(L,lo);
        outValue->Value.w = lua_isnil(L,-1) ? 0 : lua_tonumber(L,-1);
        lua_pop(L,1);
    }
    
    return ok;
}

void ImVec2_to_luaval(lua_State* L,const ImVec2& vec2)
{
    if (NULL  == L)
        return;
    lua_newtable(L);                                    /* L: table */
    lua_pushstring(L, "x");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec2.x);               /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
    lua_pushstring(L, "y");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec2.y);               /* L: table key value*/
    lua_rawset(L, -3);
    
}

void ImVec4_to_luaval(lua_State* L,const ImVec4& vec4)
{
    if (NULL  == L)
        return;
    
    lua_newtable(L);                                    /* L: table */
    lua_pushstring(L, "x");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec4.x);             /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
    lua_pushstring(L, "y");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec4.y);             /* L: table key value*/
    lua_rawset(L, -3);
    lua_pushstring(L, "z");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec4.z);             /* L: table key value*/
    lua_rawset(L, -3);
    lua_pushstring(L, "w");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) vec4.w);             /* L: table key value*/
    lua_rawset(L, -3);
}

void ImColor_to_luaval(lua_State* L, const ImColor& cc)
{
    if (NULL  == L)
        return;
    lua_newtable(L);                                    /* L: table */
    lua_pushstring(L, "r");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) cc.Value.x);               /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
    lua_pushstring(L, "g");                             /* L: table key */
    lua_pushnumber(L, (lua_Number) cc.Value.y);               /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
    lua_pushstring(L, "b");                         /* L: table key */
    lua_pushnumber(L, (lua_Number) cc.Value.z);           /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
    lua_pushstring(L, "a");                        /* L: table key */
    lua_pushnumber(L, (lua_Number) cc.Value.w);          /* L: table key value*/
    lua_rawset(L, -3);                                  /* table[key] = value, L: table */
}

bool luaval_to_std_vector_string(lua_State* L, int lo, std::vector<std::string>* ret, const char* funcName)
{
    if (nullptr == L || nullptr == ret || lua_gettop(L) < lo)
        return false;
    
    tolua_Error tolua_err;
    bool ok = true;
    if (!tolua_istable(L, lo, 0, &tolua_err))
    {
#if COCOS2D_DEBUG >=1
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        size_t len = lua_objlen(L, lo);
        std::string value = "";
        for (size_t i = 0; i < len; i++)
        {
            lua_pushnumber(L, i + 1);
            lua_gettable(L,lo-1);
            if(lua_isstring(L, -1))
            {
				ok = luaval_to_std_string(L, -1, &value, funcName);
                if(ok)
                    ret->push_back(value);
            }
            else
            {
                assert(false, "string type is needed");
            }
            
            lua_pop(L, 1);
        }
    }
    
    return ok;
}

bool luaval_to_std_vector_int(lua_State* L, int lo, std::vector<int>* ret, const char* funcName)
{
    if (nullptr == L || nullptr == ret || lua_gettop(L) < lo)
        return false;
    
    tolua_Error tolua_err;
    bool ok = true;
    if (!tolua_istable(L, lo, 0, &tolua_err))
    {
#if COCOS2D_DEBUG >=1
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        size_t len = lua_objlen(L, lo);
        for (size_t i = 0; i < len; i++)
        {
            lua_pushnumber(L, i + 1);
            lua_gettable(L,lo);
            if(lua_isnumber(L, -1))
            {
                ret->push_back((int)tolua_tonumber(L, -1, 0));
            }
            else
            {
                assert(false, "int type is needed");
            }
            
            lua_pop(L, 1);
        }
    }
    
    return ok;
}

bool luaval_to_std_vector_float(lua_State* L, int lo, std::vector<float>* ret, const char* funcName)
{
    if (nullptr == L || nullptr == ret || lua_gettop(L) < lo)
        return false;
    
    tolua_Error tolua_err;
    bool ok = true;
    
    if (!tolua_istable(L, lo, 0, &tolua_err))
    {
#if COCOS2D_DEBUG >=1
        luaval_to_native_err(L,"#ferror:",&tolua_err,funcName);
#endif
        ok = false;
    }
    
    if (ok)
    {
        size_t len = lua_objlen(L, lo);
        for (size_t i = 0; i < len; i++)
        {
            lua_pushnumber(L, i + 1);
            lua_gettable(L,lo);
            if(lua_isnumber(L, -1))
            {
                ret->push_back((float)tolua_tonumber(L, -1, 0));
            }
            else
            {
                assert(false, "float type is needed");
            }
            
            lua_pop(L, 1);
        }
    }
    
    return ok;
}


void obj_to_lua(lua_State* L,const char* type, void* ret)
{
    tolua_pushusertype(L,ret,type);
}