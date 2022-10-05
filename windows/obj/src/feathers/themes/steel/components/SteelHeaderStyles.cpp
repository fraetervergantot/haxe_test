#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Header
#include <feathers/controls/Header.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelHeaderStyles
#include <feathers/themes/steel/components/SteelHeaderStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_3753cc1b6e3ba766_24_initialize,"feathers.themes.steel.components.SteelHeaderStyles","initialize",0x382df333,"feathers.themes.steel.components.SteelHeaderStyles.initialize","feathers/themes/steel/components/SteelHeaderStyles.hx",24,0x26a05973)
HX_LOCAL_STACK_FRAME(_hx_pos_3753cc1b6e3ba766_34_initialize,"feathers.themes.steel.components.SteelHeaderStyles","initialize",0x382df333,"feathers.themes.steel.components.SteelHeaderStyles.initialize","feathers/themes/steel/components/SteelHeaderStyles.hx",34,0x26a05973)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelHeaderStyles_obj::__construct() { }

Dynamic SteelHeaderStyles_obj::__CreateEmpty() { return new SteelHeaderStyles_obj; }

void *SteelHeaderStyles_obj::_hx_vtable = 0;

Dynamic SteelHeaderStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelHeaderStyles_obj > _hx_result = new SteelHeaderStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelHeaderStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72a91c93;
}

void SteelHeaderStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_3753cc1b6e3ba766_24_initialize)
HXDLIN(  24)		::Array< ::Dynamic> theme1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,theme);
HXLINE(  25)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  26)			theme1[0] = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  28)		if (::hx::IsNull( theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >() )) {
HXLINE(  29)			return;
            		}
HXLINE(  32)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->styleProvider;
HXLINE(  33)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::Header >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,theme1) HXARGC(1)
            			void _hx_run( ::feathers::controls::Header header){
            				HX_GC_STACKFRAME(&_hx_pos_3753cc1b6e3ba766_34_initialize)
HXLINE(  35)				if (::hx::IsNull( header->get_backgroundSkin() )) {
HXLINE(  36)					 ::feathers::skins::RectangleSkin backgroundSkin =  ::feathers::skins::RectangleSkin_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  37)					backgroundSkin->set_fill(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getHeaderFill());
HXLINE(  38)					backgroundSkin->set_width(((Float)44.0));
HXLINE(  39)					backgroundSkin->set_height(((Float)44.0));
HXLINE(  40)					backgroundSkin->set_minHeight(((Float)44.0));
HXLINE(  41)					header->set_backgroundSkin(backgroundSkin);
            				}
HXLINE(  43)				if (::hx::IsNull( header->get_textFormat() )) {
HXLINE(  44)					header->set_textFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getHeaderTextFormat(null()));
            				}
HXLINE(  46)				if (::hx::IsNull( header->get_disabledTextFormat() )) {
HXLINE(  47)					header->set_disabledTextFormat(theme1->__get(0).StaticCast<  ::feathers::themes::steel::BaseSteelTheme >()->getDisabledHeaderTextFormat(null()));
            				}
HXLINE(  50)				header->set_paddingTop(((Float)10.0));
HXLINE(  51)				header->set_paddingRight(((Float)10.0));
HXLINE(  52)				header->set_paddingBottom(((Float)10.0));
HXLINE(  53)				header->set_paddingLeft(((Float)10.0));
HXLINE(  54)				header->set_minGap(((Float)10.0));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  34)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::Header >(),null(), ::Dynamic(new _hx_Closure_0(theme1)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelHeaderStyles_obj,initialize,(void))


SteelHeaderStyles_obj::SteelHeaderStyles_obj()
{
}

bool SteelHeaderStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelHeaderStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelHeaderStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelHeaderStyles_obj::__mClass;

static ::String SteelHeaderStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelHeaderStyles_obj::__register()
{
	SteelHeaderStyles_obj _hx_dummy;
	SteelHeaderStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelHeaderStyles",ab,dd,25,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelHeaderStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelHeaderStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelHeaderStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelHeaderStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelHeaderStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
