#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonState
#include <feathers/controls/ButtonState.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelButtonStyles
#include <feathers/themes/steel/components/SteelButtonStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_902e882462534ed5_25_initialize,"feathers.themes.steel.components.SteelButtonStyles","initialize",0x7ad7d92e,"feathers.themes.steel.components.SteelButtonStyles.initialize","feathers/themes/steel/components/SteelButtonStyles.hx",25,0x24564c6e)
HX_LOCAL_STACK_FRAME(_hx_pos_902e882462534ed5_35_initialize,"feathers.themes.steel.components.SteelButtonStyles","initialize",0x7ad7d92e,"feathers.themes.steel.components.SteelButtonStyles.initialize","feathers/themes/steel/components/SteelButtonStyles.hx",35,0x24564c6e)
HX_LOCAL_STACK_FRAME(_hx_pos_902e882462534ed5_70_initialize,"feathers.themes.steel.components.SteelButtonStyles","initialize",0x7ad7d92e,"feathers.themes.steel.components.SteelButtonStyles.initialize","feathers/themes/steel/components/SteelButtonStyles.hx",70,0x24564c6e)
HX_LOCAL_STACK_FRAME(_hx_pos_902e882462534ed5_105_initialize,"feathers.themes.steel.components.SteelButtonStyles","initialize",0x7ad7d92e,"feathers.themes.steel.components.SteelButtonStyles.initialize","feathers/themes/steel/components/SteelButtonStyles.hx",105,0x24564c6e)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelButtonStyles_obj::__construct() { }

Dynamic SteelButtonStyles_obj::__CreateEmpty() { return new SteelButtonStyles_obj; }

void *SteelButtonStyles_obj::_hx_vtable = 0;

Dynamic SteelButtonStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelButtonStyles_obj > _hx_result = new SteelButtonStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelButtonStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00534eb8;
}

void SteelButtonStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_902e882462534ed5_25_initialize)
HXDLIN(  25)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  26)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  27)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  29)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  30)			return;
            		}
HXLINE(  33)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Button button){
            				HX_GC_STACKFRAME(&_hx_pos_902e882462534ed5_35_initialize)
HXLINE(  36)				if (::hx::IsNull( button->get_backgroundSkin() )) {
HXLINE(  37)					 ::feathers::skins::RectangleSkin skin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  38)					skin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonFill());
HXLINE(  39)					skin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonDisabledFill());
HXLINE(  40)					skin->setFillForState(::feathers::controls::ButtonState_obj::DOWN_dyn(),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getReversedActiveThemeFill());
HXLINE(  41)					skin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonBorder(null()));
HXLINE(  42)					skin->setBorderForState(::feathers::controls::ButtonState_obj::DOWN_dyn(),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getActiveFillBorder(null()));
HXLINE(  43)					skin->set_cornerRadius(((Float)3.0));
HXLINE(  44)					button->set_backgroundSkin(skin);
            				}
HXLINE(  47)				if (::hx::IsNull( button->get_focusRectSkin() )) {
HXLINE(  48)					 ::feathers::skins::RectangleSkin focusRectSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)					focusRectSkin->set_fill(null());
HXLINE(  50)					focusRectSkin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getFocusBorder(null()));
HXLINE(  51)					focusRectSkin->set_cornerRadius(((Float)3.0));
HXLINE(  52)					button->set_focusRectSkin(focusRectSkin);
            				}
HXLINE(  55)				if (::hx::IsNull( button->get_textFormat() )) {
HXLINE(  56)					button->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getTextFormat(null()));
            				}
HXLINE(  58)				if (::hx::IsNull( button->get_disabledTextFormat() )) {
HXLINE(  59)					button->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledTextFormat(null()));
            				}
HXLINE(  62)				button->set_paddingTop(((Float)4.0));
HXLINE(  63)				button->set_paddingRight(((Float)10.0));
HXLINE(  64)				button->set_paddingBottom(((Float)4.0));
HXLINE(  65)				button->set_paddingLeft(((Float)10.0));
HXLINE(  66)				button->set_gap(((Float)4.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
HXLINE(  69)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),::feathers::controls::Button_obj::VARIANT_PRIMARY) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Button button){
            				HX_GC_STACKFRAME(&_hx_pos_902e882462534ed5_70_initialize)
HXLINE(  71)				if (::hx::IsNull( button->get_backgroundSkin() )) {
HXLINE(  72)					 ::feathers::skins::RectangleSkin skin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  73)					skin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getActiveThemeFill());
HXLINE(  74)					skin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonDisabledFill());
HXLINE(  75)					skin->setFillForState(::feathers::controls::ButtonState_obj::DOWN_dyn(),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getReversedActiveThemeFill());
HXLINE(  76)					skin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getActiveFillBorder(null()));
HXLINE(  77)					skin->set_disabledBorder(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonBorder(null()));
HXLINE(  78)					skin->set_cornerRadius(((Float)3.0));
HXLINE(  79)					button->set_backgroundSkin(skin);
            				}
HXLINE(  82)				if (::hx::IsNull( button->get_focusRectSkin() )) {
HXLINE(  83)					 ::feathers::skins::RectangleSkin focusRectSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  84)					focusRectSkin->set_fill(null());
HXLINE(  85)					focusRectSkin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getFocusBorder(null()));
HXLINE(  86)					focusRectSkin->set_cornerRadius(((Float)3.0));
HXLINE(  87)					button->set_focusRectSkin(focusRectSkin);
            				}
HXLINE(  90)				if (::hx::IsNull( button->get_textFormat() )) {
HXLINE(  91)					button->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getTextFormat(null()));
            				}
HXLINE(  93)				if (::hx::IsNull( button->get_disabledTextFormat() )) {
HXLINE(  94)					button->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledTextFormat(null()));
            				}
HXLINE(  97)				button->set_paddingTop(((Float)4.0));
HXLINE(  98)				button->set_paddingRight(((Float)10.0));
HXLINE(  99)				button->set_paddingBottom(((Float)4.0));
HXLINE( 100)				button->set_paddingLeft(((Float)10.0));
HXLINE( 101)				button->set_gap(((Float)4.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  70)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),::feathers::controls::Button_obj::VARIANT_PRIMARY, ::Dynamic(new _hx_Closure_1(theme1)));
            		}
HXLINE( 104)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),::feathers::controls::Button_obj::VARIANT_DANGER) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Button button){
            				HX_GC_STACKFRAME(&_hx_pos_902e882462534ed5_105_initialize)
HXLINE( 106)				if (::hx::IsNull( button->get_backgroundSkin() )) {
HXLINE( 107)					 ::feathers::skins::RectangleSkin skin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 108)					skin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDangerFill());
HXLINE( 109)					skin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonDisabledFill());
HXLINE( 110)					skin->setFillForState(::feathers::controls::ButtonState_obj::DOWN_dyn(),theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getReversedDangerFill());
HXLINE( 111)					skin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDangerBorder(null()));
HXLINE( 112)					skin->set_disabledBorder(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getButtonBorder(null()));
HXLINE( 113)					skin->set_cornerRadius(((Float)3.0));
HXLINE( 114)					button->set_backgroundSkin(skin);
            				}
HXLINE( 117)				if (::hx::IsNull( button->get_focusRectSkin() )) {
HXLINE( 118)					 ::feathers::skins::RectangleSkin focusRectSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 119)					focusRectSkin->set_fill(null());
HXLINE( 120)					focusRectSkin->set_border(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getFocusBorder(null()));
HXLINE( 121)					focusRectSkin->set_cornerRadius(((Float)3.0));
HXLINE( 122)					button->set_focusRectSkin(focusRectSkin);
            				}
HXLINE( 125)				if (::hx::IsNull( button->get_textFormat() )) {
HXLINE( 126)					button->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getTextFormat(null()));
            				}
HXLINE( 128)				if (::hx::IsNull( button->get_disabledTextFormat() )) {
HXLINE( 129)					button->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledTextFormat(null()));
            				}
HXLINE( 132)				button->set_paddingTop(((Float)4.0));
HXLINE( 133)				button->set_paddingRight(((Float)10.0));
HXLINE( 134)				button->set_paddingBottom(((Float)4.0));
HXLINE( 135)				button->set_paddingLeft(((Float)10.0));
HXLINE( 136)				button->set_gap(((Float)4.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 105)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Button >(),::feathers::controls::Button_obj::VARIANT_DANGER, ::Dynamic(new _hx_Closure_2(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelButtonStyles_obj,initialize,(void))


SteelButtonStyles_obj::SteelButtonStyles_obj()
{
}

bool SteelButtonStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelButtonStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelButtonStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelButtonStyles_obj::__mClass;

static ::String SteelButtonStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelButtonStyles_obj::__register()
{
	SteelButtonStyles_obj _hx_dummy;
	SteelButtonStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelButtonStyles",d0,0f,d0,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelButtonStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelButtonStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelButtonStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelButtonStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelButtonStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
