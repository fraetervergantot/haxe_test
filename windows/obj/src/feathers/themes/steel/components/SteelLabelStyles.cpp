#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
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
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
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
#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelLabelStyles
#include <feathers/themes/steel/components/SteelLabelStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_0e8cfe2d622940b4_23_initialize,"feathers.themes.steel.components.SteelLabelStyles","initialize",0x480f2ca4,"feathers.themes.steel.components.SteelLabelStyles.initialize","feathers/themes/steel/components/SteelLabelStyles.hx",23,0x3c40fae4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e8cfe2d622940b4_33_initialize,"feathers.themes.steel.components.SteelLabelStyles","initialize",0x480f2ca4,"feathers.themes.steel.components.SteelLabelStyles.initialize","feathers/themes/steel/components/SteelLabelStyles.hx",33,0x3c40fae4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e8cfe2d622940b4_43_initialize,"feathers.themes.steel.components.SteelLabelStyles","initialize",0x480f2ca4,"feathers.themes.steel.components.SteelLabelStyles.initialize","feathers/themes/steel/components/SteelLabelStyles.hx",43,0x3c40fae4)
HX_LOCAL_STACK_FRAME(_hx_pos_0e8cfe2d622940b4_53_initialize,"feathers.themes.steel.components.SteelLabelStyles","initialize",0x480f2ca4,"feathers.themes.steel.components.SteelLabelStyles.initialize","feathers/themes/steel/components/SteelLabelStyles.hx",53,0x3c40fae4)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelLabelStyles_obj::__construct() { }

Dynamic SteelLabelStyles_obj::__CreateEmpty() { return new SteelLabelStyles_obj; }

void *SteelLabelStyles_obj::_hx_vtable = 0;

Dynamic SteelLabelStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelLabelStyles_obj > _hx_result = new SteelLabelStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelLabelStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a0b3776;
}

void SteelLabelStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_0e8cfe2d622940b4_23_initialize)
HXDLIN(  23)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  24)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  25)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  27)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  28)			return;
            		}
HXLINE(  31)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  32)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Label label){
            				HX_STACKFRAME(&_hx_pos_0e8cfe2d622940b4_33_initialize)
HXLINE(  34)				if (::hx::IsNull( label->get_textFormat() )) {
HXLINE(  35)					label->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getTextFormat(null()));
            				}
HXLINE(  37)				if (::hx::IsNull( label->get_disabledTextFormat() )) {
HXLINE(  38)					label->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledTextFormat(null()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  33)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
HXLINE(  42)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),::feathers::controls::Label_obj::VARIANT_HEADING) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Label label){
            				HX_STACKFRAME(&_hx_pos_0e8cfe2d622940b4_43_initialize)
HXLINE(  44)				if (::hx::IsNull( label->get_textFormat() )) {
HXLINE(  45)					label->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getHeaderTextFormat(null()));
            				}
HXLINE(  47)				if (::hx::IsNull( label->get_disabledTextFormat() )) {
HXLINE(  48)					label->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledHeaderTextFormat(null()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  43)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),::feathers::controls::Label_obj::VARIANT_HEADING, ::Dynamic(new _hx_Closure_1(theme1)));
            		}
HXLINE(  52)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),::feathers::controls::Label_obj::VARIANT_DETAIL) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Label label){
            				HX_STACKFRAME(&_hx_pos_0e8cfe2d622940b4_53_initialize)
HXLINE(  54)				if (::hx::IsNull( label->get_textFormat() )) {
HXLINE(  55)					label->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDetailTextFormat(null()));
            				}
HXLINE(  57)				if (::hx::IsNull( label->get_disabledTextFormat() )) {
HXLINE(  58)					label->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledDetailTextFormat(null()));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  53)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Label >(),::feathers::controls::Label_obj::VARIANT_DETAIL, ::Dynamic(new _hx_Closure_2(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelLabelStyles_obj,initialize,(void))


SteelLabelStyles_obj::SteelLabelStyles_obj()
{
}

bool SteelLabelStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelLabelStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelLabelStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelLabelStyles_obj::__mClass;

static ::String SteelLabelStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelLabelStyles_obj::__register()
{
	SteelLabelStyles_obj _hx_dummy;
	SteelLabelStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelLabelStyles",9a,bc,cc,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelLabelStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelLabelStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelLabelStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelLabelStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelLabelStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
