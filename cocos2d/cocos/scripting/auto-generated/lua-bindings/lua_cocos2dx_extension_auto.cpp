#include "lua_cocos2dx_extension_auto.hpp"
#include "cocos-ext.h"
#include "CocosBuilder.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;
        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->resizableSpriteWithCapInsets(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "resizableSpriteWithCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInsetBottom(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetBottom",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrameName(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrameName(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrameName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInsetTop(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetTop",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPreferredSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreferredSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::SpriteFrame* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setSpriteFrame(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSpriteFrame",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            cocos2d::SpriteBatchNode* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);

            if (!ok) { break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            cocos2d::SpriteBatchNode* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2);

            if (!ok) { break; }
            cocos2d::Rect arg3;
            ok &= luaval_to_rect(tolua_S, 5, &arg3);

            if (!ok) { break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithBatchNode",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getInsetBottom();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetBottom",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Rect ret = cobj->getCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::SpriteBatchNode* arg0;
        cocos2d::Rect arg1;
        bool arg2;
        cocos2d::Rect arg3;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteBatchNode",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteBatchNode*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_rect(tolua_S, 3, &arg1);
        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        ok &= luaval_to_rect(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        bool ret = cobj->updateWithBatchNode(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateWithBatchNode",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getInsetRight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetRight",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getOriginalSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getOriginalSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOriginalSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0);

            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getInsetTop();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetTop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInsetLeft(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetLeft",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrame(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrame(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSpriteFrame",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreferredSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;
        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getInsetLeft();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsetLeft",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInsetRight(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsetRight",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0);
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            cocos2d::SpriteFrame* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::Scale9Sprite();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"Scale9Sprite");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"Scale9Sprite");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Scale9Sprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_Scale9Sprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Scale9Sprite)");
    return 0;
}

int lua_register_cocos2dx_extension_Scale9Sprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Scale9Sprite");
    tolua_cclass(tolua_S,"Scale9Sprite","Scale9Sprite","Node",NULL);

    tolua_beginmodule(tolua_S,"Scale9Sprite");
        tolua_function(tolua_S,"resizableSpriteWithCapInsets",lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets);
        tolua_function(tolua_S,"setInsetBottom",lua_cocos2dx_extension_Scale9Sprite_setInsetBottom);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName);
        tolua_function(tolua_S,"setInsetTop",lua_cocos2dx_extension_Scale9Sprite_setInsetTop);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Scale9Sprite_init);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_Scale9Sprite_setPreferredSize);
        tolua_function(tolua_S,"setSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame);
        tolua_function(tolua_S,"initWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode);
        tolua_function(tolua_S,"getInsetBottom",lua_cocos2dx_extension_Scale9Sprite_getInsetBottom);
        tolua_function(tolua_S,"getCapInsets",lua_cocos2dx_extension_Scale9Sprite_getCapInsets);
        tolua_function(tolua_S,"updateWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode);
        tolua_function(tolua_S,"getInsetRight",lua_cocos2dx_extension_Scale9Sprite_getInsetRight);
        tolua_function(tolua_S,"getOriginalSize",lua_cocos2dx_extension_Scale9Sprite_getOriginalSize);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_extension_Scale9Sprite_initWithFile);
        tolua_function(tolua_S,"getInsetTop",lua_cocos2dx_extension_Scale9Sprite_getInsetTop);
        tolua_function(tolua_S,"setInsetLeft",lua_cocos2dx_extension_Scale9Sprite_setInsetLeft);
        tolua_function(tolua_S,"initWithSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_Scale9Sprite_getPreferredSize);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_extension_Scale9Sprite_setCapInsets);
        tolua_function(tolua_S,"getInsetLeft",lua_cocos2dx_extension_Scale9Sprite_getInsetLeft);
        tolua_function(tolua_S,"setInsetRight",lua_cocos2dx_extension_Scale9Sprite_setInsetRight);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Scale9Sprite_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Scale9Sprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::Scale9Sprite).name();
    g_luaType[typeName] = "Scale9Sprite";
    return 1;
}

int lua_cocos2dx_extension_Control_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchMoved(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchMoved",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_getState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getState();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchEnded(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchEnded",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchEnded'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_sendActionsForControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->sendActionsForControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "sendActionsForControlEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setSelected'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSelected(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSelected",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchCancelled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->onTouchCancelled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchCancelled",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchCancelled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_needsLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Event",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Event*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "onTouchBegan",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchBegan'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_hasVisibleParents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_hasVisibleParents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->hasVisibleParents();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasVisibleParents",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_hasVisibleParents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isSelected'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isSelected();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isSelected",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isTouchInside'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchInside",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isTouchInside'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setHighlighted'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setHighlighted(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHighlighted",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_getTouchLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getTouchLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getTouchLocation(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchLocation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getTouchLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isHighlighted'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isHighlighted();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isHighlighted",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"Control",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::extension::Control* ret = cocos2d::extension::Control::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Control";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Control*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_Control_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Control)");
    return 0;
}

int lua_register_cocos2dx_extension_Control(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"Control");
    tolua_cclass(tolua_S,"Control","Control","Layer",NULL);

    tolua_beginmodule(tolua_S,"Control");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_Control_setEnabled);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_Control_onTouchMoved);
        tolua_function(tolua_S,"getState",lua_cocos2dx_extension_Control_getState);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_Control_onTouchEnded);
        tolua_function(tolua_S,"sendActionsForControlEvents",lua_cocos2dx_extension_Control_sendActionsForControlEvents);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_Control_setSelected);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_extension_Control_isEnabled);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_Control_onTouchCancelled);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_Control_needsLayout);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_Control_onTouchBegan);
        tolua_function(tolua_S,"hasVisibleParents",lua_cocos2dx_extension_Control_hasVisibleParents);
        tolua_function(tolua_S,"isSelected",lua_cocos2dx_extension_Control_isSelected);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_Control_isTouchInside);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_Control_setHighlighted);
        tolua_function(tolua_S,"getTouchLocation",lua_cocos2dx_extension_Control_getTouchLocation);
        tolua_function(tolua_S,"isHighlighted",lua_cocos2dx_extension_Control_isHighlighted);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Control_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::Control).name();
    g_luaType[typeName] = "Control";
    return 1;
}

int lua_cocos2dx_extension_ControlButton_isPushed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_isPushed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isPushed();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isPushed",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_isPushed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setSelected'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSelected(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSelected",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleLabelForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleLabelForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAdjustBackgroundImage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAdjustBackgroundImage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setHighlighted(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHighlighted",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setZoomOnTouchDown(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setZoomOnTouchDown",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setLabelAnchorPoint(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLabelAnchorPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getLabelAnchorPoint();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLabelAnchorPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        double ret = cobj->getTitleTTFSizeForState(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleTTFSizeForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleTTFForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleTTFForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleTTFSizeForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleTTFSizeForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setTitleLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleLabel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPreferredSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreferredSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitleColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Color3B& ret = cobj->getCurrentTitleColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTitleColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSpriteForState(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSpriteForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getHorizontalOrigin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getHorizontalOrigin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHorizontalOrigin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_needsLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            std::string ret = cobj->getCurrentTitle();
            tolua_pushcppstring(tolua_S,ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            const std::string& ret = cobj->getCurrentTitle();
            tolua_pushcppstring(tolua_S,ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurrentTitle",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        const std::string& ret = cobj->getTitleTTFForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleTTFForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Scale9Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::Scale9Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Color3B ret = cobj->getTitleColorForState(arg0);
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleColorForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Color3B arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleColorForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleColorForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->doesAdjustBackgroundImage();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "doesAdjustBackgroundImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::SpriteFrame* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"SpriteFrame",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::SpriteFrame*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setBackgroundSpriteFrameForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSpriteFrameForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        cocos2d::extension::Control::State arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setBackgroundSpriteForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSpriteForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackgroundSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getTitleLabel();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleLabel",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreferredSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getVerticalMargin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getVerticalMargin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVerticalMargin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getTitleLabelForState(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleLabelForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setMargins(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setMargins'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setMargins(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMargins",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setMargins'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setTitleBMFontForState(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleBMFontForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        const std::string& ret = cobj->getTitleBMFontForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleBMFontForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getZoomOnTouchDown();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getZoomOnTouchDown",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        std::string ret = cobj->getTitleForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            cocos2d::extension::Scale9Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlButton";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlButton*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create();
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlButton";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlButton*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            cocos2d::Node* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlButton";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlButton*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0);
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1);
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2);
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlButton";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlButton*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_ControlButton_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlButton)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlButton(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlButton");
    tolua_cclass(tolua_S,"ControlButton","ControlButton","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlButton");
        tolua_function(tolua_S,"isPushed",lua_cocos2dx_extension_ControlButton_isPushed);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_ControlButton_setSelected);
        tolua_function(tolua_S,"setTitleLabelForState",lua_cocos2dx_extension_ControlButton_setTitleLabelForState);
        tolua_function(tolua_S,"setAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_ControlButton_setHighlighted);
        tolua_function(tolua_S,"setZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown);
        tolua_function(tolua_S,"setTitleForState",lua_cocos2dx_extension_ControlButton_setTitleForState);
        tolua_function(tolua_S,"setLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint);
        tolua_function(tolua_S,"getLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint);
        tolua_function(tolua_S,"getTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleTTFForState",lua_cocos2dx_extension_ControlButton_setTitleTTFForState);
        tolua_function(tolua_S,"setTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleLabel",lua_cocos2dx_extension_ControlButton_setTitleLabel);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_ControlButton_setPreferredSize);
        tolua_function(tolua_S,"getCurrentTitleColor",lua_cocos2dx_extension_ControlButton_getCurrentTitleColor);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlButton_setEnabled);
        tolua_function(tolua_S,"getBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState);
        tolua_function(tolua_S,"getHorizontalOrigin",lua_cocos2dx_extension_ControlButton_getHorizontalOrigin);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_ControlButton_needsLayout);
        tolua_function(tolua_S,"getCurrentTitle",lua_cocos2dx_extension_ControlButton_getCurrentTitle);
        tolua_function(tolua_S,"getTitleTTFForState",lua_cocos2dx_extension_ControlButton_getTitleTTFForState);
        tolua_function(tolua_S,"getBackgroundSprite",lua_cocos2dx_extension_ControlButton_getBackgroundSprite);
        tolua_function(tolua_S,"getTitleColorForState",lua_cocos2dx_extension_ControlButton_getTitleColorForState);
        tolua_function(tolua_S,"setTitleColorForState",lua_cocos2dx_extension_ControlButton_setTitleColorForState);
        tolua_function(tolua_S,"doesAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage);
        tolua_function(tolua_S,"setBackgroundSpriteFrameForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState);
        tolua_function(tolua_S,"setBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState);
        tolua_function(tolua_S,"setBackgroundSprite",lua_cocos2dx_extension_ControlButton_setBackgroundSprite);
        tolua_function(tolua_S,"getTitleLabel",lua_cocos2dx_extension_ControlButton_getTitleLabel);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_ControlButton_getPreferredSize);
        tolua_function(tolua_S,"getVerticalMargin",lua_cocos2dx_extension_ControlButton_getVerticalMargin);
        tolua_function(tolua_S,"getTitleLabelForState",lua_cocos2dx_extension_ControlButton_getTitleLabelForState);
        tolua_function(tolua_S,"setMargins",lua_cocos2dx_extension_ControlButton_setMargins);
        tolua_function(tolua_S,"setTitleBMFontForState",lua_cocos2dx_extension_ControlButton_setTitleBMFontForState);
        tolua_function(tolua_S,"getTitleBMFontForState",lua_cocos2dx_extension_ControlButton_getTitleBMFontForState);
        tolua_function(tolua_S,"getZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown);
        tolua_function(tolua_S,"getTitleForState",lua_cocos2dx_extension_ControlButton_getTitleForState);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlButton_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlButton).name();
    g_luaType[typeName] = "ControlButton";
    return 1;
}

int lua_cocos2dx_extension_ControlHuePicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTargetAndPos(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTargetAndPos",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setHue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setHue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setHue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setHue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getStartPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getStartPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getStartPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStartPos",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getStartPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getHue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getHue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getHue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getHue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getSlider();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlider",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getSlider'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackground(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackground",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setBackground'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setHuePercentage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setHuePercentage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setHuePercentage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHuePercentage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setHuePercentage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getBackground'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_getHuePercentage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_getHuePercentage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getHuePercentage();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHuePercentage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_getHuePercentage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_setSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlHuePicker_setSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setSlider(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSlider",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_setSlider'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlHuePicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::extension::ControlHuePicker* ret = cocos2d::extension::ControlHuePicker::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlHuePicker";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlHuePicker*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlHuePicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlHuePicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlHuePicker();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlHuePicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlHuePicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlHuePicker",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlHuePicker_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlHuePicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlHuePicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlHuePicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlHuePicker");
    tolua_cclass(tolua_S,"ControlHuePicker","ControlHuePicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlHuePicker");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlHuePicker_setEnabled);
        tolua_function(tolua_S,"initWithTargetAndPos",lua_cocos2dx_extension_ControlHuePicker_initWithTargetAndPos);
        tolua_function(tolua_S,"setHue",lua_cocos2dx_extension_ControlHuePicker_setHue);
        tolua_function(tolua_S,"getStartPos",lua_cocos2dx_extension_ControlHuePicker_getStartPos);
        tolua_function(tolua_S,"getHue",lua_cocos2dx_extension_ControlHuePicker_getHue);
        tolua_function(tolua_S,"getSlider",lua_cocos2dx_extension_ControlHuePicker_getSlider);
        tolua_function(tolua_S,"setBackground",lua_cocos2dx_extension_ControlHuePicker_setBackground);
        tolua_function(tolua_S,"setHuePercentage",lua_cocos2dx_extension_ControlHuePicker_setHuePercentage);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlHuePicker_getBackground);
        tolua_function(tolua_S,"getHuePercentage",lua_cocos2dx_extension_ControlHuePicker_getHuePercentage);
        tolua_function(tolua_S,"setSlider",lua_cocos2dx_extension_ControlHuePicker_setSlider);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlHuePicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlHuePicker_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlHuePicker).name();
    g_luaType[typeName] = "ControlHuePicker";
    return 1;
}

int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getShadow();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getShadow",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTargetAndPos(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTargetAndPos",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getStartPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStartPos",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getOverlay();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOverlay",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getSlider();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSlider",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getSaturation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSaturation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getBrightness();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBrightness",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSaturationBrightnessPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Node* arg0;
        cocos2d::Point arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cocos2d::extension::ControlSaturationBrightnessPicker* ret = cocos2d::extension::ControlSaturationBrightnessPicker::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSaturationBrightnessPicker";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSaturationBrightnessPicker*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSaturationBrightnessPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSaturationBrightnessPicker();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSaturationBrightnessPicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSaturationBrightnessPicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSaturationBrightnessPicker",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlSaturationBrightnessPicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSaturationBrightnessPicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSaturationBrightnessPicker");
    tolua_cclass(tolua_S,"ControlSaturationBrightnessPicker","ControlSaturationBrightnessPicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSaturationBrightnessPicker");
        tolua_function(tolua_S,"getShadow",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getShadow);
        tolua_function(tolua_S,"initWithTargetAndPos",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_initWithTargetAndPos);
        tolua_function(tolua_S,"getStartPos",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getStartPos);
        tolua_function(tolua_S,"getOverlay",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getOverlay);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_setEnabled);
        tolua_function(tolua_S,"getSlider",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSlider);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBackground);
        tolua_function(tolua_S,"getSaturation",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getSaturation);
        tolua_function(tolua_S,"getBrightness",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_getBrightness);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSaturationBrightnessPicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlSaturationBrightnessPicker).name();
    g_luaType[typeName] = "ControlSaturationBrightnessPicker";
    return 1;
}

int lua_cocos2dx_extension_ControlColourPicker_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getHuePicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getHuePicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlHuePicker* ret = cobj->getHuePicker();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlHuePicker";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlHuePicker*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getHuePicker",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getHuePicker'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Object* arg0;
        cocos2d::extension::Control::EventType arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->hueSliderValueChanged(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hueSliderValueChanged",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getcolourPicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getcolourPicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlSaturationBrightnessPicker* ret = cobj->getcolourPicker();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSaturationBrightnessPicker";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSaturationBrightnessPicker*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getcolourPicker",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getcolourPicker'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackground(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackground",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setBackground'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setcolourPicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setcolourPicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ControlSaturationBrightnessPicker* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ControlSaturationBrightnessPicker",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ControlSaturationBrightnessPicker*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setcolourPicker(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setcolourPicker",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setcolourPicker'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Object* arg0;
        cocos2d::extension::Control::EventType arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->colourSliderValueChanged(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "colourSliderValueChanged",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_setHuePicker(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_setHuePicker'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ControlHuePicker* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ControlHuePicker",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::extension::ControlHuePicker*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setHuePicker(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setHuePicker",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_setHuePicker'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_getBackground(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlColourPicker*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlColourPicker_getBackground'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackground();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackground",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_getBackground'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlColourPicker",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::extension::ControlColourPicker* ret = cocos2d::extension::ControlColourPicker::create();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlColourPicker";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlColourPicker*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlColourPicker_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlColourPicker* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlColourPicker();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlColourPicker");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlColourPicker");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlColourPicker",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlColourPicker_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlColourPicker_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlColourPicker)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlColourPicker(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlColourPicker");
    tolua_cclass(tolua_S,"ControlColourPicker","ControlColourPicker","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlColourPicker");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlColourPicker_setEnabled);
        tolua_function(tolua_S,"getHuePicker",lua_cocos2dx_extension_ControlColourPicker_getHuePicker);
        tolua_function(tolua_S,"setColor",lua_cocos2dx_extension_ControlColourPicker_setColor);
        tolua_function(tolua_S,"hueSliderValueChanged",lua_cocos2dx_extension_ControlColourPicker_hueSliderValueChanged);
        tolua_function(tolua_S,"getcolourPicker",lua_cocos2dx_extension_ControlColourPicker_getcolourPicker);
        tolua_function(tolua_S,"setBackground",lua_cocos2dx_extension_ControlColourPicker_setBackground);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ControlColourPicker_init);
        tolua_function(tolua_S,"setcolourPicker",lua_cocos2dx_extension_ControlColourPicker_setcolourPicker);
        tolua_function(tolua_S,"colourSliderValueChanged",lua_cocos2dx_extension_ControlColourPicker_colourSliderValueChanged);
        tolua_function(tolua_S,"setHuePicker",lua_cocos2dx_extension_ControlColourPicker_setHuePicker);
        tolua_function(tolua_S,"getBackground",lua_cocos2dx_extension_ControlColourPicker_getBackground);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlColourPicker_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlColourPicker_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlColourPicker).name();
    g_luaType[typeName] = "ControlColourPicker";
    return 1;
}

int lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPreviousLocation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPreviousLocation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ProgressTimer* ret = cobj->getProgressTimer();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ProgressTimer";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::ProgressTimer*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProgressTimer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMaximumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        cocos2d::Point arg2;
        cocos2d::Point arg3;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        ok &= luaval_to_point(tolua_S, 4, &arg2);
        ok &= luaval_to_point(tolua_S, 5, &arg3);
        if(!ok)
            return 0;
        double ret = cobj->angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(arg0, arg1, arg2, arg3);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->potentiometerBegan(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerBegan",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMinimumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setThumbSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setThumbSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getPreviousLocation();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPreviousLocation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Point arg0;
        cocos2d::Point arg1;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        ok &= luaval_to_point(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        double ret = cobj->distanceBetweenPointAndPoint(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "distanceBetweenPointAndPoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->potentiometerEnded(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerEnded",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ProgressTimer* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"ProgressTimer",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::ProgressTimer*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setProgressTimer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProgressTimer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getThumbSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getThumbSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::ProgressTimer* arg1;
        cocos2d::Sprite* arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"ProgressTimer",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::ProgressTimer*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithTrackSprite_ProgressTimer_ThumbSprite(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithTrackSprite_ProgressTimer_ThumbSprite",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlPotentiometer*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->potentiometerMoved(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "potentiometerMoved",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlPotentiometer",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::extension::ControlPotentiometer* ret = cocos2d::extension::ControlPotentiometer::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlPotentiometer";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlPotentiometer*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlPotentiometer_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlPotentiometer* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlPotentiometer();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlPotentiometer");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlPotentiometer");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlPotentiometer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlPotentiometer_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlPotentiometer_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlPotentiometer)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlPotentiometer(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlPotentiometer");
    tolua_cclass(tolua_S,"ControlPotentiometer","ControlPotentiometer","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlPotentiometer");
        tolua_function(tolua_S,"setPreviousLocation",lua_cocos2dx_extension_ControlPotentiometer_setPreviousLocation);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlPotentiometer_setValue);
        tolua_function(tolua_S,"getProgressTimer",lua_cocos2dx_extension_ControlPotentiometer_getProgressTimer);
        tolua_function(tolua_S,"getMaximumValue",lua_cocos2dx_extension_ControlPotentiometer_getMaximumValue);
        tolua_function(tolua_S,"angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint",lua_cocos2dx_extension_ControlPotentiometer_angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint);
        tolua_function(tolua_S,"potentiometerBegan",lua_cocos2dx_extension_ControlPotentiometer_potentiometerBegan);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlPotentiometer_setMaximumValue);
        tolua_function(tolua_S,"getMinimumValue",lua_cocos2dx_extension_ControlPotentiometer_getMinimumValue);
        tolua_function(tolua_S,"setThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_setThumbSprite);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlPotentiometer_getValue);
        tolua_function(tolua_S,"getPreviousLocation",lua_cocos2dx_extension_ControlPotentiometer_getPreviousLocation);
        tolua_function(tolua_S,"distanceBetweenPointAndPoint",lua_cocos2dx_extension_ControlPotentiometer_distanceBetweenPointAndPoint);
        tolua_function(tolua_S,"potentiometerEnded",lua_cocos2dx_extension_ControlPotentiometer_potentiometerEnded);
        tolua_function(tolua_S,"setProgressTimer",lua_cocos2dx_extension_ControlPotentiometer_setProgressTimer);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlPotentiometer_setMinimumValue);
        tolua_function(tolua_S,"getThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_getThumbSprite);
        tolua_function(tolua_S,"initWithTrackSprite_ProgressTimer_ThumbSprite",lua_cocos2dx_extension_ControlPotentiometer_initWithTrackSprite_ProgressTimer_ThumbSprite);
        tolua_function(tolua_S,"potentiometerMoved",lua_cocos2dx_extension_ControlPotentiometer_potentiometerMoved);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlPotentiometer_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlPotentiometer_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlPotentiometer).name();
    g_luaType[typeName] = "ControlPotentiometer";
    return 1;
}

int lua_cocos2dx_extension_ControlSlider_locationFromTouch(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_locationFromTouch'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->locationFromTouch(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "locationFromTouch",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_locationFromTouch'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setProgressSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setProgressSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setProgressSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProgressSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setProgressSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMaximumAllowedValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumAllowedValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMinimumAllowedValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumAllowedValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMinimumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinimumValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setThumbSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setThumbSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setThumbSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMinimumAllowedValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumAllowedValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_needsLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->needsLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "needsLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_needsLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getBackgroundSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackgroundSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_initWithSprites(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_initWithSprites'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        cocos2d::Sprite* arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSprites(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSprites",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_initWithSprites'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getMaximumValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaximumValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_isTouchInside'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchInside",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_isTouchInside'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getThumbSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getThumbSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getThumbSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getThumbSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getThumbSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_getProgressSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_getProgressSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getProgressSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getProgressSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_getProgressSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setBackgroundSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackgroundSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSlider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaximumAllowedValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumAllowedValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSlider_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSlider",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::ControlSlider* ret = cocos2d::extension::ControlSlider::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSlider";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSlider*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            cocos2d::extension::ControlSlider* ret = cocos2d::extension::ControlSlider::create(arg0, arg1, arg2);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSlider";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSlider*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSlider_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSlider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSlider();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSlider");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSlider");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSlider",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSlider_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlSlider_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSlider)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSlider(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSlider");
    tolua_cclass(tolua_S,"ControlSlider","ControlSlider","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSlider");
        tolua_function(tolua_S,"locationFromTouch",lua_cocos2dx_extension_ControlSlider_locationFromTouch);
        tolua_function(tolua_S,"setProgressSprite",lua_cocos2dx_extension_ControlSlider_setProgressSprite);
        tolua_function(tolua_S,"getMaximumAllowedValue",lua_cocos2dx_extension_ControlSlider_getMaximumAllowedValue);
        tolua_function(tolua_S,"getMinimumAllowedValue",lua_cocos2dx_extension_ControlSlider_getMinimumAllowedValue);
        tolua_function(tolua_S,"getMinimumValue",lua_cocos2dx_extension_ControlSlider_getMinimumValue);
        tolua_function(tolua_S,"setThumbSprite",lua_cocos2dx_extension_ControlSlider_setThumbSprite);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlSlider_setMinimumValue);
        tolua_function(tolua_S,"setMinimumAllowedValue",lua_cocos2dx_extension_ControlSlider_setMinimumAllowedValue);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSlider_setEnabled);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlSlider_setValue);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlSlider_setMaximumValue);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_ControlSlider_needsLayout);
        tolua_function(tolua_S,"getBackgroundSprite",lua_cocos2dx_extension_ControlSlider_getBackgroundSprite);
        tolua_function(tolua_S,"initWithSprites",lua_cocos2dx_extension_ControlSlider_initWithSprites);
        tolua_function(tolua_S,"getMaximumValue",lua_cocos2dx_extension_ControlSlider_getMaximumValue);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_ControlSlider_isTouchInside);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlSlider_getValue);
        tolua_function(tolua_S,"getThumbSprite",lua_cocos2dx_extension_ControlSlider_getThumbSprite);
        tolua_function(tolua_S,"getProgressSprite",lua_cocos2dx_extension_ControlSlider_getProgressSprite);
        tolua_function(tolua_S,"setBackgroundSprite",lua_cocos2dx_extension_ControlSlider_setBackgroundSprite);
        tolua_function(tolua_S,"setMaximumAllowedValue",lua_cocos2dx_extension_ControlSlider_setMaximumAllowedValue);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSlider_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSlider_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlSlider).name();
    g_luaType[typeName] = "ControlSlider";
    return 1;
}

int lua_cocos2dx_extension_ControlStepper_setMinusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setMinusSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinusSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinusSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getMinusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getMinusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::LabelTTF* ret = cobj->getMinusLabel();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "LabelTTF";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::LabelTTF*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinusLabel",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getMinusLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setWraps(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setWraps'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setWraps(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setWraps",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setWraps'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_isContinuous(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_isContinuous'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isContinuous();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isContinuous",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_isContinuous'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getMinusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getMinusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getMinusSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMinusSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getMinusSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;
        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->updateLayoutUsingTouchLocation(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateLayoutUsingTouchLocation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->setValueWithSendingEvent(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValueWithSendingEvent",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getPlusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getPlusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::LabelTTF* ret = cobj->getPlusLabel();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "LabelTTF";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::LabelTTF*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlusLabel",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getPlusLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_stopAutorepeat(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_stopAutorepeat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->stopAutorepeat();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "stopAutorepeat",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_stopAutorepeat'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMinimumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinimumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMinimumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinimumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinimumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Sprite* ret = cobj->getPlusSprite();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Sprite";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Sprite*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlusSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getPlusSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setPlusSprite(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlusSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setPlusSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMinusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMinusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::LabelTTF* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setMinusLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMinusLabel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMinusLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setStepValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setStepValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setStepValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStepValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setStepValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setMaximumValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setMaximumValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaximumValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaximumValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setMaximumValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_update(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_update'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_startAutorepeat(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_startAutorepeat'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->startAutorepeat();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "startAutorepeat",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_startAutorepeat'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithMinusSpriteAndPlusSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithMinusSpriteAndPlusSprite",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_getValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_getValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getValue();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_getValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_setPlusLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlStepper*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlStepper_setPlusLabel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::LabelTTF* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setPlusLabel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlusLabel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_setPlusLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlStepper_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlStepper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Sprite* arg0;
        cocos2d::Sprite* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::ControlStepper* ret = cocos2d::extension::ControlStepper::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlStepper";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlStepper*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlStepper_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlStepper* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlStepper();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlStepper");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlStepper");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlStepper",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlStepper_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlStepper_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlStepper)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlStepper(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlStepper");
    tolua_cclass(tolua_S,"ControlStepper","ControlStepper","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlStepper");
        tolua_function(tolua_S,"setMinusSprite",lua_cocos2dx_extension_ControlStepper_setMinusSprite);
        tolua_function(tolua_S,"getMinusLabel",lua_cocos2dx_extension_ControlStepper_getMinusLabel);
        tolua_function(tolua_S,"setWraps",lua_cocos2dx_extension_ControlStepper_setWraps);
        tolua_function(tolua_S,"isContinuous",lua_cocos2dx_extension_ControlStepper_isContinuous);
        tolua_function(tolua_S,"getMinusSprite",lua_cocos2dx_extension_ControlStepper_getMinusSprite);
        tolua_function(tolua_S,"updateLayoutUsingTouchLocation",lua_cocos2dx_extension_ControlStepper_updateLayoutUsingTouchLocation);
        tolua_function(tolua_S,"setValueWithSendingEvent",lua_cocos2dx_extension_ControlStepper_setValueWithSendingEvent);
        tolua_function(tolua_S,"getPlusLabel",lua_cocos2dx_extension_ControlStepper_getPlusLabel);
        tolua_function(tolua_S,"stopAutorepeat",lua_cocos2dx_extension_ControlStepper_stopAutorepeat);
        tolua_function(tolua_S,"setMinimumValue",lua_cocos2dx_extension_ControlStepper_setMinimumValue);
        tolua_function(tolua_S,"getPlusSprite",lua_cocos2dx_extension_ControlStepper_getPlusSprite);
        tolua_function(tolua_S,"setPlusSprite",lua_cocos2dx_extension_ControlStepper_setPlusSprite);
        tolua_function(tolua_S,"setMinusLabel",lua_cocos2dx_extension_ControlStepper_setMinusLabel);
        tolua_function(tolua_S,"setValue",lua_cocos2dx_extension_ControlStepper_setValue);
        tolua_function(tolua_S,"setStepValue",lua_cocos2dx_extension_ControlStepper_setStepValue);
        tolua_function(tolua_S,"setMaximumValue",lua_cocos2dx_extension_ControlStepper_setMaximumValue);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_ControlStepper_update);
        tolua_function(tolua_S,"startAutorepeat",lua_cocos2dx_extension_ControlStepper_startAutorepeat);
        tolua_function(tolua_S,"initWithMinusSpriteAndPlusSprite",lua_cocos2dx_extension_ControlStepper_initWithMinusSpriteAndPlusSprite);
        tolua_function(tolua_S,"getValue",lua_cocos2dx_extension_ControlStepper_getValue);
        tolua_function(tolua_S,"setPlusLabel",lua_cocos2dx_extension_ControlStepper_setPlusLabel);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlStepper_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlStepper_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlStepper).name();
    g_luaType[typeName] = "ControlStepper";
    return 1;
}

int lua_cocos2dx_extension_ControlSwitch_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_setOn(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_setOn'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0);

            if (!ok) { break; }
            cobj->setOn(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            bool arg0;
            ok &= luaval_to_boolean(tolua_S, 2,&arg0);

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1);

            if (!ok) { break; }
            cobj->setOn(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setOn",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_setOn'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_isOn(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_isOn'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isOn();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isOn",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_isOn'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 6) {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::LabelTTF* arg4;
            do {
				if (!luaval_is_usertype(tolua_S,6,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg4 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,6,0);
					if (nullptr == arg4){
						LUA_PRECONDITION( arg4, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::LabelTTF* arg5;
            do {
				if (!luaval_is_usertype(tolua_S,7,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg5 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,7,0);
					if (nullptr == arg5){
						LUA_PRECONDITION( arg5, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            bool ret = cobj->initWithMaskSprite(arg0, arg1, arg2, arg3, arg4, arg5);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            bool ret = cobj->initWithMaskSprite(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithMaskSprite",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_hasMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_hasMoved'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->hasMoved();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hasMoved",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_hasMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_locationFromTouch(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlSwitch*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlSwitch_locationFromTouch'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Touch",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Touch*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->locationFromTouch(arg0);
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "locationFromTouch",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_locationFromTouch'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ControlSwitch",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 4)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::ControlSwitch* ret = cocos2d::extension::ControlSwitch::create(arg0, arg1, arg2, arg3);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSwitch";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSwitch*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 6)
        {
            cocos2d::Sprite* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::Sprite* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::LabelTTF* arg4;
            do {
				if (!luaval_is_usertype(tolua_S,6,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg4 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,6,0);
					if (nullptr == arg4){
						LUA_PRECONDITION( arg4, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::LabelTTF* arg5;
            do {
				if (!luaval_is_usertype(tolua_S,7,"LabelTTF",0)){
					ok = false;
					break;
				}
				if (ok){
					arg5 = (cocos2d::LabelTTF*)tolua_tousertype(tolua_S,7,0);
					if (nullptr == arg5){
						LUA_PRECONDITION( arg5, "Invalid Native Object");
			}}} while (0);
            if (!ok) { break; }
            cocos2d::extension::ControlSwitch* ret = cocos2d::extension::ControlSwitch::create(arg0, arg1, arg2, arg3, arg4, arg5);
            do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "ControlSwitch";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::ControlSwitch*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
            return 1;
        }
    } while (0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d", "create",argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlSwitch_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlSwitch* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::ControlSwitch();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ControlSwitch");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"ControlSwitch");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ControlSwitch",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlSwitch_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ControlSwitch_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlSwitch)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlSwitch(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ControlSwitch");
    tolua_cclass(tolua_S,"ControlSwitch","ControlSwitch","Control",NULL);

    tolua_beginmodule(tolua_S,"ControlSwitch");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlSwitch_setEnabled);
        tolua_function(tolua_S,"setOn",lua_cocos2dx_extension_ControlSwitch_setOn);
        tolua_function(tolua_S,"isOn",lua_cocos2dx_extension_ControlSwitch_isOn);
        tolua_function(tolua_S,"initWithMaskSprite",lua_cocos2dx_extension_ControlSwitch_initWithMaskSprite);
        tolua_function(tolua_S,"hasMoved",lua_cocos2dx_extension_ControlSwitch_hasMoved);
        tolua_function(tolua_S,"locationFromTouch",lua_cocos2dx_extension_ControlSwitch_locationFromTouch);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ControlSwitch_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlSwitch_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlSwitch).name();
    g_luaType[typeName] = "ControlSwitch";
    return 1;
}

int lua_cocos2dx_extension_EditBox_getText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getText();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPlaceholderFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getPlaceHolder();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlaceHolder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setPlaceholderFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputMode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputMode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputMode arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setInputMode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInputMode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputMode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPlaceholderFontColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFontColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;
        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setFontColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setPlaceholderFont(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceholderFont",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->initWithSizeAndBackgroundSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initWithSizeAndBackgroundSprite",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPlaceHolder(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceHolder",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setReturnType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setReturnType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::KeyboardReturnType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setReturnType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setReturnType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setReturnType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputFlag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputFlag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputFlag arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setInputFlag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInputFlag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getMaxLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMaxLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaxLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setMaxLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setMaxLength(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaxLength",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFont'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setFont(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFont",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFont'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "EditBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::EditBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "EditBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::EditBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        cocos2d::extension::Scale9Sprite* arg3;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,4,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,5,"Scale9Sprite",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2, arg3);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "EditBox";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::EditBox*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::EditBox();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"EditBox");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"EditBox");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "EditBox",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_EditBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EditBox)");
    return 0;
}

int lua_register_cocos2dx_extension_EditBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"EditBox");
    tolua_cclass(tolua_S,"EditBox","EditBox","ControlButton",NULL);

    tolua_beginmodule(tolua_S,"EditBox");
        tolua_function(tolua_S,"getText",lua_cocos2dx_extension_EditBox_getText);
        tolua_function(tolua_S,"setPlaceholderFontName",lua_cocos2dx_extension_EditBox_setPlaceholderFontName);
        tolua_function(tolua_S,"getPlaceHolder",lua_cocos2dx_extension_EditBox_getPlaceHolder);
        tolua_function(tolua_S,"setFontName",lua_cocos2dx_extension_EditBox_setFontName);
        tolua_function(tolua_S,"setPlaceholderFontSize",lua_cocos2dx_extension_EditBox_setPlaceholderFontSize);
        tolua_function(tolua_S,"setInputMode",lua_cocos2dx_extension_EditBox_setInputMode);
        tolua_function(tolua_S,"setPlaceholderFontColor",lua_cocos2dx_extension_EditBox_setPlaceholderFontColor);
        tolua_function(tolua_S,"setFontColor",lua_cocos2dx_extension_EditBox_setFontColor);
        tolua_function(tolua_S,"setPlaceholderFont",lua_cocos2dx_extension_EditBox_setPlaceholderFont);
        tolua_function(tolua_S,"setFontSize",lua_cocos2dx_extension_EditBox_setFontSize);
        tolua_function(tolua_S,"initWithSizeAndBackgroundSprite",lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite);
        tolua_function(tolua_S,"setPlaceHolder",lua_cocos2dx_extension_EditBox_setPlaceHolder);
        tolua_function(tolua_S,"setReturnType",lua_cocos2dx_extension_EditBox_setReturnType);
        tolua_function(tolua_S,"setInputFlag",lua_cocos2dx_extension_EditBox_setInputFlag);
        tolua_function(tolua_S,"getMaxLength",lua_cocos2dx_extension_EditBox_getMaxLength);
        tolua_function(tolua_S,"setText",lua_cocos2dx_extension_EditBox_setText);
        tolua_function(tolua_S,"setMaxLength",lua_cocos2dx_extension_EditBox_setMaxLength);
        tolua_function(tolua_S,"setFont",lua_cocos2dx_extension_EditBox_setFont);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_EditBox_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_EditBox_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::EditBox).name();
    g_luaType[typeName] = "EditBox";
    return 1;
}

int lua_cocos2dx_extension_AssetsManager_setStoragePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_setStoragePath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setStoragePath(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStoragePath",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_setStoragePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_setPackageUrl(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_setPackageUrl'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPackageUrl(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPackageUrl",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_setPackageUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_checkUpdate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_checkUpdate'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->checkUpdate();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "checkUpdate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_checkUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_getStoragePath(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_getStoragePath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getStoragePath();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStoragePath",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_getStoragePath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_update(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_update'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->update();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_setConnectionTimeout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_setConnectionTimeout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setConnectionTimeout(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setConnectionTimeout",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_setConnectionTimeout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_setVersionFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_setVersionFileUrl'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setVersionFileUrl(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setVersionFileUrl",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_setVersionFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_getPackageUrl(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_getPackageUrl'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getPackageUrl();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPackageUrl",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_getPackageUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_getConnectionTimeout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_getConnectionTimeout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        unsigned int ret = cobj->getConnectionTimeout();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getConnectionTimeout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_getConnectionTimeout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_getVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_getVersion'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getVersion();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersion",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_getVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_getVersionFileUrl(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_getVersionFileUrl'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getVersionFileUrl();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVersionFileUrl",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_getVersionFileUrl'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_deleteVersion(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::AssetsManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_AssetsManager_deleteVersion'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->deleteVersion();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "deleteVersion",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_deleteVersion'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_AssetsManager_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"AssetsManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 6)
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        std::function<void (int)> arg3;
        std::function<void (int)> arg4;
        std::function<void ()> arg5;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
            return 0;
        cocos2d::extension::AssetsManager* ret = cocos2d::extension::AssetsManager::create(arg0, arg1, arg2, arg3, arg4, arg5);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "AssetsManager";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::extension::AssetsManager*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_AssetsManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::AssetsManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::AssetsManager();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AssetsManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AssetsManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::AssetsManager(arg0);
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AssetsManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AssetsManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::AssetsManager(arg0, arg1);
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AssetsManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AssetsManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cobj = new cocos2d::extension::AssetsManager(arg0, arg1, arg2);
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"AssetsManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"AssetsManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "AssetsManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_AssetsManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_AssetsManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AssetsManager)");
    return 0;
}

int lua_register_cocos2dx_extension_AssetsManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"AssetsManager");
    tolua_cclass(tolua_S,"AssetsManager","AssetsManager","Node",NULL);

    tolua_beginmodule(tolua_S,"AssetsManager");
        tolua_function(tolua_S,"setStoragePath",lua_cocos2dx_extension_AssetsManager_setStoragePath);
        tolua_function(tolua_S,"setPackageUrl",lua_cocos2dx_extension_AssetsManager_setPackageUrl);
        tolua_function(tolua_S,"checkUpdate",lua_cocos2dx_extension_AssetsManager_checkUpdate);
        tolua_function(tolua_S,"getStoragePath",lua_cocos2dx_extension_AssetsManager_getStoragePath);
        tolua_function(tolua_S,"update",lua_cocos2dx_extension_AssetsManager_update);
        tolua_function(tolua_S,"setConnectionTimeout",lua_cocos2dx_extension_AssetsManager_setConnectionTimeout);
        tolua_function(tolua_S,"setVersionFileUrl",lua_cocos2dx_extension_AssetsManager_setVersionFileUrl);
        tolua_function(tolua_S,"getPackageUrl",lua_cocos2dx_extension_AssetsManager_getPackageUrl);
        tolua_function(tolua_S,"getConnectionTimeout",lua_cocos2dx_extension_AssetsManager_getConnectionTimeout);
        tolua_function(tolua_S,"getVersion",lua_cocos2dx_extension_AssetsManager_getVersion);
        tolua_function(tolua_S,"getVersionFileUrl",lua_cocos2dx_extension_AssetsManager_getVersionFileUrl);
        tolua_function(tolua_S,"deleteVersion",lua_cocos2dx_extension_AssetsManager_deleteVersion);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_AssetsManager_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_AssetsManager_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::AssetsManager).name();
    g_luaType[typeName] = "AssetsManager";
    return 1;
}

int lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::Node* arg1;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->moveAnimationsFromNode(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "moveAnimationsFromNode",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setAutoPlaySequenceId(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAutoPlaySequenceId",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector& ret = cobj->getDocumentCallbackNames();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequenceProperty* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequenceProperty",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequenceProperty*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Object* ret = cobj->actionForSoundChannel(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "actionForSoundChannel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setBaseValue(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setBaseValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Value arg0;
        cocos2d::Node* arg1;
        std::string arg2;
        ok &= luaval_to_ccvalue(tolua_S, 2, &arg0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->setBaseValue(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBaseValue",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setBaseValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getDocumentOutletNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentOutletNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getLastCompletedSequenceName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLastCompletedSequenceName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setRootNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setRootNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRootNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        double arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceNamedTweenDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceNamedTweenDuration",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentOutletName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentOutletName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequences(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequences'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocosbuilder::CCBSequence *>& ret = cobj->getSequences();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequences",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequences'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getRootContainerSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRootContainerSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDocumentControllerName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDocumentControllerName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setObject(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setObject'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Object* arg0;
        cocos2d::Node* arg1;
        std::string arg2;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Object",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Object*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        do {
				if (!luaval_is_usertype(tolua_S,3,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocos2d::Node*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);
        ok &= luaval_to_std_string(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->setObject(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setObject",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setObject'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getContainerSize(arg0);
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContainerSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getContainerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequenceProperty* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequenceProperty",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequenceProperty*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cocos2d::Object* ret = cobj->actionForCallbackChannel(arg0);
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Object";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Object*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "actionForCallbackChannel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector& ret = cobj->getDocumentOutletNames();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentOutletNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackControlEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_init(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_init'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector& ret = cobj->getKeyframeCallbacks();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getKeyframeCallbacks",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector& ret = cobj->getDocumentCallbackControlEvents();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackControlEvents",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;
        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setRootContainerSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRootContainerSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        double arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceIdTweenDuration(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceIdTweenDuration",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getRunningSequenceName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRunningSequenceName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getAutoPlaySequenceId();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAutoPlaySequenceId",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getRootNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getRootNode();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "Node";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocos2d::Node*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRootNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getRootNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addDocumentOutletNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentOutletNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        double ret = cobj->getSequenceDuration(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequenceDuration",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->runAnimationsForSequenceNamed(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "runAnimationsForSequenceNamed",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getSequenceId(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceId'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        int ret = cobj->getSequenceId(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSequenceId",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getSequenceId'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getDocumentCallbackNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentCallbackNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_setSequences(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_setSequences'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vector<cocosbuilder::CCBSequence *> arg0;
        ok &= luaval_to_ccvector(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setSequences(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSequences",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_setSequences'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_debug(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_debug'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->debug();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "debug",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_debug'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBAnimationManager",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getDocumentControllerName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDocumentControllerName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBAnimationManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBAnimationManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocosbuilder::CCBAnimationManager();
        cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
        if (nullptr != dynObject) 
        {
            dynObject->autorelease();
            int ID =  (int)dynObject->_ID ;
            int* luaID =  &dynObject->_luaID ;
            toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBAnimationManager");
        }
        else
        {
            tolua_pushusertype(tolua_S,(void*)cobj,"CCBAnimationManager");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        }
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CCBAnimationManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBAnimationManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_CCBAnimationManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CCBAnimationManager)");
    return 0;
}

int lua_register_cocos2dx_extension_CCBAnimationManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"CCBAnimationManager");
    tolua_cclass(tolua_S,"CCBAnimationManager","CCBAnimationManager","",NULL);

    tolua_beginmodule(tolua_S,"CCBAnimationManager");
        tolua_function(tolua_S,"moveAnimationsFromNode",lua_cocos2dx_extension_CCBAnimationManager_moveAnimationsFromNode);
        tolua_function(tolua_S,"setAutoPlaySequenceId",lua_cocos2dx_extension_CCBAnimationManager_setAutoPlaySequenceId);
        tolua_function(tolua_S,"getDocumentCallbackNames",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNames);
        tolua_function(tolua_S,"actionForSoundChannel",lua_cocos2dx_extension_CCBAnimationManager_actionForSoundChannel);
        tolua_function(tolua_S,"setBaseValue",lua_cocos2dx_extension_CCBAnimationManager_setBaseValue);
        tolua_function(tolua_S,"getDocumentOutletNodes",lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNodes);
        tolua_function(tolua_S,"getLastCompletedSequenceName",lua_cocos2dx_extension_CCBAnimationManager_getLastCompletedSequenceName);
        tolua_function(tolua_S,"setRootNode",lua_cocos2dx_extension_CCBAnimationManager_setRootNode);
        tolua_function(tolua_S,"runAnimationsForSequenceNamedTweenDuration",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration);
        tolua_function(tolua_S,"addDocumentOutletName",lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletName);
        tolua_function(tolua_S,"getSequences",lua_cocos2dx_extension_CCBAnimationManager_getSequences);
        tolua_function(tolua_S,"getRootContainerSize",lua_cocos2dx_extension_CCBAnimationManager_getRootContainerSize);
        tolua_function(tolua_S,"setDocumentControllerName",lua_cocos2dx_extension_CCBAnimationManager_setDocumentControllerName);
        tolua_function(tolua_S,"setObject",lua_cocos2dx_extension_CCBAnimationManager_setObject);
        tolua_function(tolua_S,"getContainerSize",lua_cocos2dx_extension_CCBAnimationManager_getContainerSize);
        tolua_function(tolua_S,"actionForCallbackChannel",lua_cocos2dx_extension_CCBAnimationManager_actionForCallbackChannel);
        tolua_function(tolua_S,"getDocumentOutletNames",lua_cocos2dx_extension_CCBAnimationManager_getDocumentOutletNames);
        tolua_function(tolua_S,"addDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackControlEvents);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_CCBAnimationManager_init);
        tolua_function(tolua_S,"getKeyframeCallbacks",lua_cocos2dx_extension_CCBAnimationManager_getKeyframeCallbacks);
        tolua_function(tolua_S,"getDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackControlEvents);
        tolua_function(tolua_S,"setRootContainerSize",lua_cocos2dx_extension_CCBAnimationManager_setRootContainerSize);
        tolua_function(tolua_S,"runAnimationsForSequenceIdTweenDuration",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration);
        tolua_function(tolua_S,"getRunningSequenceName",lua_cocos2dx_extension_CCBAnimationManager_getRunningSequenceName);
        tolua_function(tolua_S,"getAutoPlaySequenceId",lua_cocos2dx_extension_CCBAnimationManager_getAutoPlaySequenceId);
        tolua_function(tolua_S,"addDocumentCallbackName",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackName);
        tolua_function(tolua_S,"getRootNode",lua_cocos2dx_extension_CCBAnimationManager_getRootNode);
        tolua_function(tolua_S,"addDocumentOutletNode",lua_cocos2dx_extension_CCBAnimationManager_addDocumentOutletNode);
        tolua_function(tolua_S,"getSequenceDuration",lua_cocos2dx_extension_CCBAnimationManager_getSequenceDuration);
        tolua_function(tolua_S,"addDocumentCallbackNode",lua_cocos2dx_extension_CCBAnimationManager_addDocumentCallbackNode);
        tolua_function(tolua_S,"runAnimationsForSequenceNamed",lua_cocos2dx_extension_CCBAnimationManager_runAnimationsForSequenceNamed);
        tolua_function(tolua_S,"getSequenceId",lua_cocos2dx_extension_CCBAnimationManager_getSequenceId);
        tolua_function(tolua_S,"getDocumentCallbackNodes",lua_cocos2dx_extension_CCBAnimationManager_getDocumentCallbackNodes);
        tolua_function(tolua_S,"setSequences",lua_cocos2dx_extension_CCBAnimationManager_setSequences);
        tolua_function(tolua_S,"debug",lua_cocos2dx_extension_CCBAnimationManager_debug);
        tolua_function(tolua_S,"getDocumentControllerName",lua_cocos2dx_extension_CCBAnimationManager_getDocumentControllerName);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_CCBAnimationManager_constructor);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocosbuilder::CCBAnimationManager).name();
    g_luaType[typeName] = "CCBAnimationManager";
    return 1;
}

int lua_cocos2dx_extension_CCBReader_addOwnerOutletName(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->addOwnerOutletName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerOutletName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector ret = cobj->getOwnerCallbackNames();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addDocumentCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addDocumentCallbackControlEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_setCCBRootPath(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_setCCBRootPath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setCCBRootPath(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCCBRootPath",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setCCBRootPath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_addOwnerOutletNode(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"Node",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocos2d::Node*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->addOwnerOutletNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerOutletNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerOutletNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getOwnerCallbackNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequence* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequence",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequence*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->readSoundKeyframesForSeq(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readSoundKeyframesForSeq",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getCCBRootPath(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getCCBRootPath'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getCCBRootPath();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCCBRootPath",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getCCBRootPath'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector& ret = cobj->getOwnerCallbackControlEvents();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerCallbackControlEvents",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getOwnerOutletNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerOutletNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_readUTF8(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readUTF8'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->readUTF8();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readUTF8",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readUTF8'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->addOwnerCallbackControlEvents(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addOwnerCallbackControlEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getOwnerOutletNames(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNames'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ValueVector ret = cobj->getOwnerOutletNames();
        ccvaluevector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getOwnerOutletNames",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getOwnerOutletNames'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_setAnimationManager(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_setAnimationManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBAnimationManager* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBAnimationManager",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBAnimationManager*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        cobj->setAnimationManager(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAnimationManager",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setAnimationManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocosbuilder::CCBSequence* arg0;
        do {
				if (!luaval_is_usertype(tolua_S,2,"CCBSequence",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBSequence*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);
        if(!ok)
            return 0;
        bool ret = cobj->readCallbackKeyframesForSeq(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "readCallbackKeyframesForSeq",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocosbuilder::CCBAnimationManager *>& ret = cobj->getAnimationManagersForNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationManagersForNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getNodesWithAnimationManagers();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodesWithAnimationManagers",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_getAnimationManager(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_CCBReader_getAnimationManager'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocosbuilder::CCBAnimationManager* ret = cobj->getAnimationManager();
        do {
			if (NULL != ret){
				std::string hashName = typeid(*ret).name();
				auto iter = g_luaType.find(hashName);
				std::string className = "";
				if(iter != g_luaType.end()){
					className = iter->second.c_str();
				} else {
					className = "CCBAnimationManager";
				}
				cocos2d::Object *dynObject = dynamic_cast<cocos2d::Object *>((cocosbuilder::CCBAnimationManager*)ret);
				if (NULL != dynObject) {
					int ID = ret ? (int)(dynObject->_ID) : -1;
					int* luaID = ret ? &(dynObject->_luaID) : NULL;
					toluafix_pushusertype_ccobject(tolua_S,ID, luaID, (void*)ret,className.c_str());
				} else {
					 tolua_pushusertype(tolua_S,(void*)ret,className.c_str());
			}} else {
				lua_pushnil(tolua_S);
			}
		} while (0);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAnimationManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_getAnimationManager'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_CCBReader_setResolutionScale(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"CCBReader",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        double arg0;
        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cocosbuilder::CCBReader::setResolutionScale(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "setResolutionScale",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_setResolutionScale'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_CCBReader_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocosbuilder::CCBReader* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocosbuilder::CCBReader* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"CCBReader",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::CCBReader*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj = new cocosbuilder::CCBReader(arg0);
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj = new cocosbuilder::CCBReader(arg0);
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1);
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::CCBSelectorResolver* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"CCBSelectorResolver",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocosbuilder::CCBSelectorResolver*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2);
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            cocosbuilder::NodeLoaderLibrary* arg0;
            do {
				if (!luaval_is_usertype(tolua_S,2,"NodeLoaderLibrary",0)){
					ok = false;
					break;
				}
				if (ok){
					arg0 = (cocosbuilder::NodeLoaderLibrary*)tolua_tousertype(tolua_S,2,0);
					if (nullptr == arg0){
						LUA_PRECONDITION( arg0, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::CCBMemberVariableAssigner* arg1;
            do {
				if (!luaval_is_usertype(tolua_S,3,"CCBMemberVariableAssigner",0)){
					ok = false;
					break;
				}
				if (ok){
					arg1 = (cocosbuilder::CCBMemberVariableAssigner*)tolua_tousertype(tolua_S,3,0);
					if (nullptr == arg1){
						LUA_PRECONDITION( arg1, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::CCBSelectorResolver* arg2;
            do {
				if (!luaval_is_usertype(tolua_S,4,"CCBSelectorResolver",0)){
					ok = false;
					break;
				}
				if (ok){
					arg2 = (cocosbuilder::CCBSelectorResolver*)tolua_tousertype(tolua_S,4,0);
					if (nullptr == arg2){
						LUA_PRECONDITION( arg2, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cocosbuilder::NodeLoaderListener* arg3;
            do {
				if (!luaval_is_usertype(tolua_S,5,"NodeLoaderListener",0)){
					ok = false;
					break;
				}
				if (ok){
					arg3 = (cocosbuilder::NodeLoaderListener*)tolua_tousertype(tolua_S,5,0);
					if (nullptr == arg3){
						LUA_PRECONDITION( arg3, "Invalid Native Object");
			}}} while (0);

            if (!ok) { break; }
            cobj = new cocosbuilder::CCBReader(arg0, arg1, arg2, arg3);
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj = new cocosbuilder::CCBReader();
            cocos2d::Object* dynObject = dynamic_cast<cocos2d::Object *>(cobj);
            if (NULL != dynObject) 
            {
                dynObject->autorelease();
                int ID =  (int)dynObject->_ID ;
                int* luaID =  &dynObject->_luaID ;
                toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"CCBReader");
            }
            else
            {
                tolua_pushusertype(tolua_S,(void*)cobj,"CCBReader");
                tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            }
            return 1;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CCBReader",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_CCBReader_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_CCBReader_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CCBReader)");
    return 0;
}

int lua_register_cocos2dx_extension_CCBReader(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"CCBReader");
    tolua_cclass(tolua_S,"CCBReader","CCBReader","",NULL);

    tolua_beginmodule(tolua_S,"CCBReader");
        tolua_function(tolua_S,"addOwnerOutletName",lua_cocos2dx_extension_CCBReader_addOwnerOutletName);
        tolua_function(tolua_S,"getOwnerCallbackNames",lua_cocos2dx_extension_CCBReader_getOwnerCallbackNames);
        tolua_function(tolua_S,"addDocumentCallbackControlEvents",lua_cocos2dx_extension_CCBReader_addDocumentCallbackControlEvents);
        tolua_function(tolua_S,"setCCBRootPath",lua_cocos2dx_extension_CCBReader_setCCBRootPath);
        tolua_function(tolua_S,"addOwnerOutletNode",lua_cocos2dx_extension_CCBReader_addOwnerOutletNode);
        tolua_function(tolua_S,"getOwnerCallbackNodes",lua_cocos2dx_extension_CCBReader_getOwnerCallbackNodes);
        tolua_function(tolua_S,"readSoundKeyframesForSeq",lua_cocos2dx_extension_CCBReader_readSoundKeyframesForSeq);
        tolua_function(tolua_S,"getCCBRootPath",lua_cocos2dx_extension_CCBReader_getCCBRootPath);
        tolua_function(tolua_S,"getOwnerCallbackControlEvents",lua_cocos2dx_extension_CCBReader_getOwnerCallbackControlEvents);
        tolua_function(tolua_S,"getOwnerOutletNodes",lua_cocos2dx_extension_CCBReader_getOwnerOutletNodes);
        tolua_function(tolua_S,"readUTF8",lua_cocos2dx_extension_CCBReader_readUTF8);
        tolua_function(tolua_S,"addOwnerCallbackControlEvents",lua_cocos2dx_extension_CCBReader_addOwnerCallbackControlEvents);
        tolua_function(tolua_S,"getOwnerOutletNames",lua_cocos2dx_extension_CCBReader_getOwnerOutletNames);
        tolua_function(tolua_S,"setActionManager",lua_cocos2dx_extension_CCBReader_setAnimationManager);
        tolua_function(tolua_S,"readCallbackKeyframesForSeq",lua_cocos2dx_extension_CCBReader_readCallbackKeyframesForSeq);
        tolua_function(tolua_S,"getAnimationManagersForNodes",lua_cocos2dx_extension_CCBReader_getAnimationManagersForNodes);
        tolua_function(tolua_S,"getNodesWithAnimationManagers",lua_cocos2dx_extension_CCBReader_getNodesWithAnimationManagers);
        tolua_function(tolua_S,"getActionManager",lua_cocos2dx_extension_CCBReader_getAnimationManager);
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_CCBReader_constructor);
        tolua_function(tolua_S,"setResolutionScale", lua_cocos2dx_extension_CCBReader_setResolutionScale);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocosbuilder::CCBReader).name();
    g_luaType[typeName] = "CCBReader";
    return 1;
}
TOLUA_API int register_all_cocos2dx_extension(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_cocos2dx_extension_Control(tolua_S);
	lua_register_cocos2dx_extension_Scale9Sprite(tolua_S);
	lua_register_cocos2dx_extension_ControlSwitch(tolua_S);
	lua_register_cocos2dx_extension_ControlButton(tolua_S);
	lua_register_cocos2dx_extension_EditBox(tolua_S);
	lua_register_cocos2dx_extension_ControlSlider(tolua_S);
	lua_register_cocos2dx_extension_ControlStepper(tolua_S);
	lua_register_cocos2dx_extension_CCBReader(tolua_S);
	lua_register_cocos2dx_extension_ControlSaturationBrightnessPicker(tolua_S);
	lua_register_cocos2dx_extension_ControlColourPicker(tolua_S);
	lua_register_cocos2dx_extension_ControlPotentiometer(tolua_S);
	lua_register_cocos2dx_extension_CCBAnimationManager(tolua_S);
	lua_register_cocos2dx_extension_ControlHuePicker(tolua_S);
	lua_register_cocos2dx_extension_AssetsManager(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

