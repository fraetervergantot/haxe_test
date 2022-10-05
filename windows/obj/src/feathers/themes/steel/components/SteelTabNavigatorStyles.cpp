#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabNavigator
#include <feathers/controls/navigators/TabNavigator.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_transitions_SlideTransitionBuilder
#include <feathers/motion/transitions/SlideTransitionBuilder.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelTabNavigatorStyles
#include <feathers/themes/steel/components/SteelTabNavigatorStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_DeviceUtil
#include <feathers/utils/DeviceUtil.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_292d528c518f95e9_25_initialize,"feathers.themes.steel.components.SteelTabNavigatorStyles","initialize",0xc99e6c5e,"feathers.themes.steel.components.SteelTabNavigatorStyles.initialize","feathers/themes/steel/components/SteelTabNavigatorStyles.hx",25,0x6d14cf9e)
HX_LOCAL_STACK_FRAME(_hx_pos_292d528c518f95e9_36_initialize,"feathers.themes.steel.components.SteelTabNavigatorStyles","initialize",0xc99e6c5e,"feathers.themes.steel.components.SteelTabNavigatorStyles.initialize","feathers/themes/steel/components/SteelTabNavigatorStyles.hx",36,0x6d14cf9e)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelTabNavigatorStyles_obj::__construct() { }

Dynamic SteelTabNavigatorStyles_obj::__CreateEmpty() { return new SteelTabNavigatorStyles_obj; }

void *SteelTabNavigatorStyles_obj::_hx_vtable = 0;

Dynamic SteelTabNavigatorStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelTabNavigatorStyles_obj > _hx_result = new SteelTabNavigatorStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelTabNavigatorStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7078ab88;
}

void SteelTabNavigatorStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_292d528c518f95e9_25_initialize)
HXLINE(  26)		if (::hx::IsNull( theme )) {
HXLINE(  27)			theme = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme->styleProvider;
HXLINE(  35)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::navigators::TabNavigator >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::feathers::controls::navigators::TabNavigator navigator){
            				HX_GC_STACKFRAME(&_hx_pos_292d528c518f95e9_36_initialize)
HXLINE(  37)				bool isDesktop = ::feathers::utils::DeviceUtil_obj::isDesktop();
HXLINE(  39)				 ::feathers::layout::RelativePosition _hx_tmp;
HXDLIN(  39)				if (isDesktop) {
HXLINE(  39)					_hx_tmp = ::feathers::layout::RelativePosition_obj::TOP_dyn();
            				}
            				else {
HXLINE(  39)					_hx_tmp = ::feathers::layout::RelativePosition_obj::BOTTOM_dyn();
            				}
HXDLIN(  39)				navigator->set_tabBarPosition(_hx_tmp);
HXLINE(  41)				if (!(isDesktop)) {
HXLINE(  42)					navigator->set_previousTransition( ::feathers::motion::transitions::SlideTransitionBuilder_obj::__alloc( HX_CTX ,null(),null(),null())->setRight()->build());
HXLINE(  43)					navigator->set_nextTransition( ::feathers::motion::transitions::SlideTransitionBuilder_obj::__alloc( HX_CTX ,null(),null(),null())->setLeft()->build());
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  36)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::navigators::TabNavigator >(),null(), ::Dynamic(new _hx_Closure_0()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelTabNavigatorStyles_obj,initialize,(void))


SteelTabNavigatorStyles_obj::SteelTabNavigatorStyles_obj()
{
}

bool SteelTabNavigatorStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelTabNavigatorStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelTabNavigatorStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelTabNavigatorStyles_obj::__mClass;

static ::String SteelTabNavigatorStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelTabNavigatorStyles_obj::__register()
{
	SteelTabNavigatorStyles_obj _hx_dummy;
	SteelTabNavigatorStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelTabNavigatorStyles",a0,4e,7f,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelTabNavigatorStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelTabNavigatorStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelTabNavigatorStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelTabNavigatorStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelTabNavigatorStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
