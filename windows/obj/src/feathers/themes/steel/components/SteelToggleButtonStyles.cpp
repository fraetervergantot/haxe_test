#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicToggleButton
#include <feathers/controls/BasicToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_ToggleButton
#include <feathers/controls/ToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls_ToggleButtonState
#include <feathers/controls/ToggleButtonState.h>
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
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
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
#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelToggleButtonStyles
#include <feathers/themes/steel/components/SteelToggleButtonStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_ca1d737e3f3fecf4_25_initialize,"feathers.themes.steel.components.SteelToggleButtonStyles","initialize",0xfe2916fa,"feathers.themes.steel.components.SteelToggleButtonStyles.initialize","feathers/themes/steel/components/SteelToggleButtonStyles.hx",25,0x71257e3a)
HX_LOCAL_STACK_FRAME(_hx_pos_ca1d737e3f3fecf4_35_initialize,"feathers.themes.steel.components.SteelToggleButtonStyles","initialize",0xfe2916fa,"feathers.themes.steel.components.SteelToggleButtonStyles.initialize","feathers/themes/steel/components/SteelToggleButtonStyles.hx",35,0x71257e3a)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelToggleButtonStyles_obj::__construct() { }

Dynamic SteelToggleButtonStyles_obj::__CreateEmpty() { return new SteelToggleButtonStyles_obj; }

void *SteelToggleButtonStyles_obj::_hx_vtable = 0;

Dynamic SteelToggleButtonStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelToggleButtonStyles_obj > _hx_result = new SteelToggleButtonStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelToggleButtonStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d2d036c;
}

void SteelToggleButtonStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_ca1d737e3f3fecf4_25_initialize)
HXDLIN(  25)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  26)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  27)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::ToggleButton >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::ToggleButton button){
            				HX_GC_STACKFRAME(&_hx_pos_ca1d737e3f3fecf4_35_initialize)
HXLINE(  36)				if (::hx::IsNull( button->get_backgroundSkin() )) {
HXLINE(  37)					 ::feathers::skins::RectangleSkin skin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  38)					skin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonFill());
HXLINE(  39)					skin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonDisabledFill());
HXLINE(  40)					skin->set_selectedFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getThemeFill());
HXLINE(  41)					skin->setFillForState(::feathers::controls::ToggleButtonState_obj::DOWN(false),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getReversedActiveThemeFill());
HXLINE(  42)					skin->setFillForState(::feathers::controls::ToggleButtonState_obj::DOWN(false),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getReversedActiveThemeFill());
HXLINE(  43)					skin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonBorder(null()));
HXLINE(  44)					skin->set_selectedBorder(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getSelectedBorder(null()));
HXLINE(  45)					skin->setBorderForState(::feathers::controls::ToggleButtonState_obj::DOWN(false),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getActiveFillBorder(null()));
HXLINE(  46)					skin->setBorderForState(::feathers::controls::ToggleButtonState_obj::DOWN(true),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getActiveFillBorder(null()));
HXLINE(  47)					skin->set_cornerRadius(((Float)3.0));
HXLINE(  48)					button->set_backgroundSkin(skin);
            				}
HXLINE(  51)				if (::hx::IsNull( button->get_focusRectSkin() )) {
HXLINE(  52)					 ::feathers::skins::RectangleSkin focusRectSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  53)					focusRectSkin->set_fill(null());
HXLINE(  54)					focusRectSkin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getFocusBorder(null()));
HXLINE(  55)					focusRectSkin->set_cornerRadius(((Float)3.0));
HXLINE(  56)					button->set_focusRectSkin(focusRectSkin);
            				}
HXLINE(  59)				if (::hx::IsNull( button->get_textFormat() )) {
HXLINE(  60)					button->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getTextFormat(null()));
            				}
HXLINE(  62)				if (::hx::IsNull( button->get_disabledTextFormat() )) {
HXLINE(  63)					button->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledTextFormat(null()));
            				}
HXLINE(  66)				button->set_paddingTop(((Float)4.0));
HXLINE(  67)				button->set_paddingRight(((Float)10.0));
HXLINE(  68)				button->set_paddingBottom(((Float)4.0));
HXLINE(  69)				button->set_paddingLeft(((Float)10.0));
HXLINE(  70)				button->set_gap(((Float)4.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::ToggleButton >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelToggleButtonStyles_obj,initialize,(void))


SteelToggleButtonStyles_obj::SteelToggleButtonStyles_obj()
{
}

bool SteelToggleButtonStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelToggleButtonStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelToggleButtonStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelToggleButtonStyles_obj::__mClass;

static ::String SteelToggleButtonStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelToggleButtonStyles_obj::__register()
{
	SteelToggleButtonStyles_obj _hx_dummy;
	SteelToggleButtonStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelToggleButtonStyles",84,a6,33,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelToggleButtonStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelToggleButtonStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelToggleButtonStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelToggleButtonStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelToggleButtonStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
