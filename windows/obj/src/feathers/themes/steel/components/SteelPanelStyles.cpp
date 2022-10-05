#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
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
#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_RectangleSkin
#include <feathers/skins/RectangleSkin.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelPanelStyles
#include <feathers/themes/steel/components/SteelPanelStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_DeviceUtil
#include <feathers/utils/DeviceUtil.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_ad9ffd05751fa5f6_25_initialize,"feathers.themes.steel.components.SteelPanelStyles","initialize",0x26000d94,"feathers.themes.steel.components.SteelPanelStyles.initialize","feathers/themes/steel/components/SteelPanelStyles.hx",25,0x5bef6bd4)
HX_LOCAL_STACK_FRAME(_hx_pos_ad9ffd05751fa5f6_35_initialize,"feathers.themes.steel.components.SteelPanelStyles","initialize",0x26000d94,"feathers.themes.steel.components.SteelPanelStyles.initialize","feathers/themes/steel/components/SteelPanelStyles.hx",35,0x5bef6bd4)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelPanelStyles_obj::__construct() { }

Dynamic SteelPanelStyles_obj::__CreateEmpty() { return new SteelPanelStyles_obj; }

void *SteelPanelStyles_obj::_hx_vtable = 0;

Dynamic SteelPanelStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelPanelStyles_obj > _hx_result = new SteelPanelStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelPanelStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7298546a;
}

void SteelPanelStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_ad9ffd05751fa5f6_25_initialize)
HXDLIN(  25)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  26)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  27)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Panel >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Panel panel){
            				HX_GC_STACKFRAME(&_hx_pos_ad9ffd05751fa5f6_35_initialize)
HXLINE(  36)				bool isDesktop = ::feathers::utils::DeviceUtil_obj::isDesktop();
HXLINE(  38)				panel->set_autoHideScrollBars(!(isDesktop));
HXLINE(  39)				panel->set_fixedScrollBars(isDesktop);
HXLINE(  41)				if (::hx::IsNull( panel->get_backgroundSkin() )) {
HXLINE(  42)					 ::feathers::skins::RectangleSkin backgroundSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  43)					backgroundSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getContainerFill());
HXLINE(  44)					panel->set_backgroundSkin(backgroundSkin);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Panel >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelPanelStyles_obj,initialize,(void))


SteelPanelStyles_obj::SteelPanelStyles_obj()
{
}

bool SteelPanelStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelPanelStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelPanelStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelPanelStyles_obj::__mClass;

static ::String SteelPanelStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelPanelStyles_obj::__register()
{
	SteelPanelStyles_obj _hx_dummy;
	SteelPanelStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelPanelStyles",aa,55,97,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelPanelStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelPanelStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelPanelStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelPanelStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelPanelStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
