#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelScrollContainerStyles
#include <feathers/themes/steel/components/SteelScrollContainerStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_6b4e46bb4fd1c264_25_initialize,"feathers.themes.steel.components.SteelScrollContainerStyles","initialize",0xdf477224,"feathers.themes.steel.components.SteelScrollContainerStyles.initialize","feathers/themes/steel/components/SteelScrollContainerStyles.hx",25,0xaebb6064)
HX_LOCAL_STACK_FRAME(_hx_pos_6b4e46bb4fd1c264_35_initialize,"feathers.themes.steel.components.SteelScrollContainerStyles","initialize",0xdf477224,"feathers.themes.steel.components.SteelScrollContainerStyles.initialize","feathers/themes/steel/components/SteelScrollContainerStyles.hx",35,0xaebb6064)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelScrollContainerStyles_obj::__construct() { }

Dynamic SteelScrollContainerStyles_obj::__CreateEmpty() { return new SteelScrollContainerStyles_obj; }

void *SteelScrollContainerStyles_obj::_hx_vtable = 0;

Dynamic SteelScrollContainerStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelScrollContainerStyles_obj > _hx_result = new SteelScrollContainerStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelScrollContainerStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fb5996a;
}

void SteelScrollContainerStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_6b4e46bb4fd1c264_25_initialize)
HXDLIN(  25)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  26)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  27)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::ScrollContainer >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::ScrollContainer container){
            				HX_GC_STACKFRAME(&_hx_pos_6b4e46bb4fd1c264_35_initialize)
HXLINE(  36)				bool isDesktop = ::feathers::utils::DeviceUtil_obj::isDesktop();
HXLINE(  38)				container->set_autoHideScrollBars(!(isDesktop));
HXLINE(  39)				container->set_fixedScrollBars(isDesktop);
HXLINE(  41)				if (::hx::IsNull( container->get_backgroundSkin() )) {
HXLINE(  42)					 ::feathers::skins::RectangleSkin backgroundSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  43)					backgroundSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getContainerFill());
HXLINE(  44)					container->set_backgroundSkin(backgroundSkin);
            				}
HXLINE(  47)				if (::hx::IsNull( container->get_focusRectSkin() )) {
HXLINE(  48)					 ::feathers::skins::RectangleSkin focusRectSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)					focusRectSkin->set_fill(null());
HXLINE(  50)					focusRectSkin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getFocusBorder(null()));
HXLINE(  51)					container->set_focusRectSkin(focusRectSkin);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::ScrollContainer >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelScrollContainerStyles_obj,initialize,(void))


SteelScrollContainerStyles_obj::SteelScrollContainerStyles_obj()
{
}

bool SteelScrollContainerStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelScrollContainerStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelScrollContainerStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelScrollContainerStyles_obj::__mClass;

static ::String SteelScrollContainerStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelScrollContainerStyles_obj::__register()
{
	SteelScrollContainerStyles_obj _hx_dummy;
	SteelScrollContainerStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelScrollContainerStyles",1a,87,8b,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelScrollContainerStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelScrollContainerStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelScrollContainerStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelScrollContainerStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelScrollContainerStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
