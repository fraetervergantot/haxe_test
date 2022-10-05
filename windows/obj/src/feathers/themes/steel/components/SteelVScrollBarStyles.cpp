#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_VScrollBar
#include <feathers/controls/VScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
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
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
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
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelVScrollBarStyles
#include <feathers/themes/steel/components/SteelVScrollBarStyles.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_73b4a56d5b1562aa_26_initialize,"feathers.themes.steel.components.SteelVScrollBarStyles","initialize",0x64f016f0,"feathers.themes.steel.components.SteelVScrollBarStyles.initialize","feathers/themes/steel/components/SteelVScrollBarStyles.hx",26,0xec9bb830)
HX_LOCAL_STACK_FRAME(_hx_pos_73b4a56d5b1562aa_36_initialize,"feathers.themes.steel.components.SteelVScrollBarStyles","initialize",0x64f016f0,"feathers.themes.steel.components.SteelVScrollBarStyles.initialize","feathers/themes/steel/components/SteelVScrollBarStyles.hx",36,0xec9bb830)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelVScrollBarStyles_obj::__construct() { }

Dynamic SteelVScrollBarStyles_obj::__CreateEmpty() { return new SteelVScrollBarStyles_obj; }

void *SteelVScrollBarStyles_obj::_hx_vtable = 0;

Dynamic SteelVScrollBarStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelVScrollBarStyles_obj > _hx_result = new SteelVScrollBarStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelVScrollBarStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4df0481a;
}

void SteelVScrollBarStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_73b4a56d5b1562aa_26_initialize)
HXDLIN(  26)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  27)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  28)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  30)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  31)			return;
            		}
HXLINE(  34)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  35)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::VScrollBar >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::VScrollBar scrollBar){
            				HX_GC_STACKFRAME(&_hx_pos_73b4a56d5b1562aa_36_initialize)
HXLINE(  37)				bool isDesktop = ::feathers::utils::DeviceUtil_obj::isDesktop();
HXLINE(  39)				if (::hx::IsNull( scrollBar->get_thumbSkin() )) {
HXLINE(  40)					 ::feathers::skins::RectangleSkin thumbSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  41)					thumbSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getScrollBarThumbFill());
HXLINE(  42)					thumbSkin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getScrollBarThumbDisabledFill());
HXLINE(  43)					Float size;
HXDLIN(  43)					if (isDesktop) {
HXLINE(  43)						size = ((Float)6.0);
            					}
            					else {
HXLINE(  43)						size = ((Float)4.0);
            					}
HXLINE(  44)					thumbSkin->set_width(size);
HXLINE(  45)					thumbSkin->set_height(size);
HXLINE(  46)					thumbSkin->set_minWidth(size);
HXLINE(  47)					thumbSkin->set_minHeight(size);
HXLINE(  48)					thumbSkin->set_cornerRadius((size / ((Float)2.0)));
HXLINE(  50)					 ::feathers::controls::BasicButton thumb =  ::feathers::controls::BasicButton_obj::__alloc( HX_CTX ,null());
HXLINE(  51)					thumb->set_keepDownStateOnRollOut(true);
HXLINE(  52)					thumb->set_backgroundSkin(thumbSkin);
HXLINE(  53)					scrollBar->set_thumbSkin(thumb);
            				}
HXLINE(  56)				bool _hx_tmp;
HXDLIN(  56)				if (isDesktop) {
HXLINE(  56)					_hx_tmp = ::hx::IsNull( scrollBar->get_trackSkin() );
            				}
            				else {
HXLINE(  56)					_hx_tmp = false;
            				}
HXDLIN(  56)				if (_hx_tmp) {
HXLINE(  57)					 ::feathers::skins::RectangleSkin trackSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  58)					trackSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getControlFill());
HXLINE(  59)					trackSkin->set_disabledFill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getControlDisabledFill());
HXLINE(  60)					trackSkin->set_width(((Float)12.0));
HXLINE(  61)					trackSkin->set_height(((Float)12.0));
HXLINE(  62)					trackSkin->set_minWidth(((Float)12.0));
HXLINE(  63)					trackSkin->set_minHeight(((Float)12.0));
HXLINE(  64)					scrollBar->set_trackSkin(trackSkin);
            				}
HXLINE(  67)				scrollBar->set_paddingTop(((Float)2.0));
HXLINE(  68)				scrollBar->set_paddingRight(((Float)2.0));
HXLINE(  69)				scrollBar->set_paddingBottom(((Float)2.0));
HXLINE(  70)				scrollBar->set_paddingLeft(((Float)2.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  36)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::VScrollBar >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelVScrollBarStyles_obj,initialize,(void))


SteelVScrollBarStyles_obj::SteelVScrollBarStyles_obj()
{
}

bool SteelVScrollBarStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelVScrollBarStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelVScrollBarStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelVScrollBarStyles_obj::__mClass;

static ::String SteelVScrollBarStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelVScrollBarStyles_obj::__register()
{
	SteelVScrollBarStyles_obj _hx_dummy;
	SteelVScrollBarStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelVScrollBarStyles",ce,56,a0,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelVScrollBarStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelVScrollBarStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelVScrollBarStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelVScrollBarStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelVScrollBarStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
