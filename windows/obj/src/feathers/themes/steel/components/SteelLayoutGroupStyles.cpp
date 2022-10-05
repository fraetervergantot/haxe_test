#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_feathers_layout_HorizontalAlign
#include <feathers/layout/HorizontalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayout
#include <feathers/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelLayoutGroupStyles
#include <feathers/themes/steel/components/SteelLayoutGroupStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_e8a7c28920cedf2b_25_initialize,"feathers.themes.steel.components.SteelLayoutGroupStyles","initialize",0xea02d243,"feathers.themes.steel.components.SteelLayoutGroupStyles.initialize","feathers/themes/steel/components/SteelLayoutGroupStyles.hx",25,0x4d83c983)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a7c28920cedf2b_35_initialize,"feathers.themes.steel.components.SteelLayoutGroupStyles","initialize",0xea02d243,"feathers.themes.steel.components.SteelLayoutGroupStyles.initialize","feathers/themes/steel/components/SteelLayoutGroupStyles.hx",35,0x4d83c983)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelLayoutGroupStyles_obj::__construct() { }

Dynamic SteelLayoutGroupStyles_obj::__CreateEmpty() { return new SteelLayoutGroupStyles_obj; }

void *SteelLayoutGroupStyles_obj::_hx_vtable = 0;

Dynamic SteelLayoutGroupStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelLayoutGroupStyles_obj > _hx_result = new SteelLayoutGroupStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelLayoutGroupStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2fe0b5cf;
}

void SteelLayoutGroupStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_e8a7c28920cedf2b_25_initialize)
HXDLIN(  25)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  26)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  27)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::LayoutGroup >(),::feathers::controls::LayoutGroup_obj::VARIANT_TOOL_BAR) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::LayoutGroup group){
            				HX_GC_STACKFRAME(&_hx_pos_e8a7c28920cedf2b_35_initialize)
HXLINE(  36)				if (::hx::IsNull( group->get_backgroundSkin() )) {
HXLINE(  37)					 ::feathers::skins::RectangleSkin backgroundSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  38)					backgroundSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getHeaderFill());
HXLINE(  39)					backgroundSkin->set_width(((Float)44.0));
HXLINE(  40)					backgroundSkin->set_height(((Float)44.0));
HXLINE(  41)					backgroundSkin->set_minHeight(((Float)44.0));
HXLINE(  42)					group->set_backgroundSkin(backgroundSkin);
            				}
HXLINE(  44)				if (::hx::IsNull( group->get_layout() )) {
HXLINE(  45)					 ::feathers::layout::HorizontalLayout layout =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  46)					layout->set_horizontalAlign(::feathers::layout::HorizontalAlign_obj::LEFT_dyn());
HXLINE(  47)					layout->set_verticalAlign(::feathers::layout::VerticalAlign_obj::MIDDLE_dyn());
HXLINE(  48)					layout->set_paddingTop(((Float)4.0));
HXLINE(  49)					layout->set_paddingRight(((Float)10.0));
HXLINE(  50)					layout->set_paddingBottom(((Float)4.0));
HXLINE(  51)					layout->set_paddingLeft(((Float)10.0));
HXLINE(  52)					layout->set_gap(((Float)4.0));
HXLINE(  53)					group->set_layout(layout);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::LayoutGroup >(),::feathers::controls::LayoutGroup_obj::VARIANT_TOOL_BAR, ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelLayoutGroupStyles_obj,initialize,(void))


SteelLayoutGroupStyles_obj::SteelLayoutGroupStyles_obj()
{
}

bool SteelLayoutGroupStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelLayoutGroupStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelLayoutGroupStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelLayoutGroupStyles_obj::__mClass;

static ::String SteelLayoutGroupStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelLayoutGroupStyles_obj::__register()
{
	SteelLayoutGroupStyles_obj _hx_dummy;
	SteelLayoutGroupStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelLayoutGroupStyles",9b,84,3d,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelLayoutGroupStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelLayoutGroupStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelLayoutGroupStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelLayoutGroupStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelLayoutGroupStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
