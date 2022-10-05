#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ScreenDensityScaleManager
#include <feathers/core/ScreenDensityScaleManager.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_ClassVariantStyleProvider
#include <feathers/style/ClassVariantStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_Theme
#include <feathers/style/Theme.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelApplicationStyles
#include <feathers/themes/steel/components/SteelApplicationStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_ScreenDensityScaleCalculator
#include <feathers/utils/ScreenDensityScaleCalculator.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cf10983a4cb092f5_25_initialize,"feathers.themes.steel.components.SteelApplicationStyles","initialize",0xc08984c8,"feathers.themes.steel.components.SteelApplicationStyles.initialize","feathers/themes/steel/components/SteelApplicationStyles.hx",25,0x0a71ef08)
HX_LOCAL_STACK_FRAME(_hx_pos_cf10983a4cb092f5_36_initialize,"feathers.themes.steel.components.SteelApplicationStyles","initialize",0xc08984c8,"feathers.themes.steel.components.SteelApplicationStyles.initialize","feathers/themes/steel/components/SteelApplicationStyles.hx",36,0x0a71ef08)
HX_LOCAL_STACK_FRAME(_hx_pos_cf10983a4cb092f5_46_refreshStageColor,"feathers.themes.steel.components.SteelApplicationStyles","refreshStageColor",0x7d452f08,"feathers.themes.steel.components.SteelApplicationStyles.refreshStageColor","feathers/themes/steel/components/SteelApplicationStyles.hx",46,0x0a71ef08)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelApplicationStyles_obj::__construct() { }

Dynamic SteelApplicationStyles_obj::__CreateEmpty() { return new SteelApplicationStyles_obj; }

void *SteelApplicationStyles_obj::_hx_vtable = 0;

Dynamic SteelApplicationStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelApplicationStyles_obj > _hx_result = new SteelApplicationStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelApplicationStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x62eaa20e;
}

void SteelApplicationStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_cf10983a4cb092f5_25_initialize)
HXLINE(  26)		if (::hx::IsNull( theme )) {
HXLINE(  27)			theme = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Application >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::feathers::controls::Application app){
            				HX_GC_STACKFRAME(&_hx_pos_cf10983a4cb092f5_36_initialize)
HXLINE(  36)				if (::hx::IsNull( app->get_scaleManager() )) {
HXLINE(  37)					app->set_scaleManager( ::feathers::core::ScreenDensityScaleManager_obj::__alloc( HX_CTX ,null()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Application >(),null(), ::Dynamic(new _hx_Closure_0()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelApplicationStyles_obj,initialize,(void))

void SteelApplicationStyles_obj::refreshStageColor( ::openfl::display::Stage stage, ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_cf10983a4cb092f5_46_refreshStageColor)
HXLINE(  47)		if (::hx::IsNull( stage )) {
HXLINE(  48)			return;
            		}
HXLINE(  50)		stage->set_color(theme->rootFillColor);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SteelApplicationStyles_obj,refreshStageColor,(void))


SteelApplicationStyles_obj::SteelApplicationStyles_obj()
{
}

bool SteelApplicationStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"refreshStageColor") ) { outValue = refreshStageColor_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelApplicationStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelApplicationStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelApplicationStyles_obj::__mClass;

static ::String SteelApplicationStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	HX_("refreshStageColor",80,a3,ad,f0),
	::String(null())
};

void SteelApplicationStyles_obj::__register()
{
	SteelApplicationStyles_obj _hx_dummy;
	SteelApplicationStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelApplicationStyles",f6,e9,22,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelApplicationStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelApplicationStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelApplicationStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelApplicationStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelApplicationStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
