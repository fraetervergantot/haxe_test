#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_DefaultSteelTheme
#include <feathers/themes/steel/DefaultSteelTheme.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9244fde0854ce9e_27_new,"feathers.themes.steel.DefaultSteelTheme","new",0x57d36468,"feathers.themes.steel.DefaultSteelTheme.new","feathers/themes/steel/DefaultSteelTheme.hx",27,0x5ee920a9)
namespace feathers{
namespace themes{
namespace steel{

void DefaultSteelTheme_obj::__construct( ::Dynamic themeColor, ::Dynamic darkThemeColor){
            	HX_STACKFRAME(&_hx_pos_e9244fde0854ce9e_27_new)
HXDLIN(  27)		super::__construct(themeColor,darkThemeColor);
            	}

Dynamic DefaultSteelTheme_obj::__CreateEmpty() { return new DefaultSteelTheme_obj; }

void *DefaultSteelTheme_obj::_hx_vtable = 0;

Dynamic DefaultSteelTheme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultSteelTheme_obj > _hx_result = new DefaultSteelTheme_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DefaultSteelTheme_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3b64ba0e) {
		if (inClassId<=(int)0x2da0fa7a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2da0fa7a;
		} else {
			return inClassId==(int)0x3b64ba0e;
		}
	} else {
		return inClassId==(int)0x5c3db93c;
	}
}


::hx::ObjectPtr< DefaultSteelTheme_obj > DefaultSteelTheme_obj::__new( ::Dynamic themeColor, ::Dynamic darkThemeColor) {
	::hx::ObjectPtr< DefaultSteelTheme_obj > __this = new DefaultSteelTheme_obj();
	__this->__construct(themeColor,darkThemeColor);
	return __this;
}

::hx::ObjectPtr< DefaultSteelTheme_obj > DefaultSteelTheme_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic themeColor, ::Dynamic darkThemeColor) {
	DefaultSteelTheme_obj *__this = (DefaultSteelTheme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultSteelTheme_obj), true, "feathers.themes.steel.DefaultSteelTheme"));
	*(void **)__this = DefaultSteelTheme_obj::_hx_vtable;
	__this->__construct(themeColor,darkThemeColor);
	return __this;
}

DefaultSteelTheme_obj::DefaultSteelTheme_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DefaultSteelTheme_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DefaultSteelTheme_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DefaultSteelTheme_obj::__mClass;

void DefaultSteelTheme_obj::__register()
{
	DefaultSteelTheme_obj _hx_dummy;
	DefaultSteelTheme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.DefaultSteelTheme",76,50,e7,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DefaultSteelTheme_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultSteelTheme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultSteelTheme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
