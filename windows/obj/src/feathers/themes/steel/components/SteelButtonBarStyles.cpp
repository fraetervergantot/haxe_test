#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonBar
#include <feathers/controls/ButtonBar.h>
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
#ifndef INCLUDED_feathers_layout_HorizontalLayout
#include <feathers/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelButtonBarStyles
#include <feathers/themes/steel/components/SteelButtonBarStyles.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_afd50f57f4a2cc88_24_initialize,"feathers.themes.steel.components.SteelButtonBarStyles","initialize",0x1be52ef7,"feathers.themes.steel.components.SteelButtonBarStyles.initialize","feathers/themes/steel/components/SteelButtonBarStyles.hx",24,0xd0b93237)
HX_LOCAL_STACK_FRAME(_hx_pos_afd50f57f4a2cc88_36_initialize,"feathers.themes.steel.components.SteelButtonBarStyles","initialize",0x1be52ef7,"feathers.themes.steel.components.SteelButtonBarStyles.initialize","feathers/themes/steel/components/SteelButtonBarStyles.hx",36,0xd0b93237)
namespace feathers{
namespace themes{
namespace steel{
namespace components{

void SteelButtonBarStyles_obj::__construct() { }

Dynamic SteelButtonBarStyles_obj::__CreateEmpty() { return new SteelButtonBarStyles_obj; }

void *SteelButtonBarStyles_obj::_hx_vtable = 0;

Dynamic SteelButtonBarStyles_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SteelButtonBarStyles_obj > _hx_result = new SteelButtonBarStyles_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SteelButtonBarStyles_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0254457f;
}

void SteelButtonBarStyles_obj::initialize( ::feathers::themes::steel::BaseSteelTheme theme){
            	HX_STACKFRAME(&_hx_pos_afd50f57f4a2cc88_24_initialize)
HXLINE(  25)		if (::hx::IsNull( theme )) {
HXLINE(  26)			theme = ( ( ::feathers::themes::steel::BaseSteelTheme)(::Std_obj::downcast(::feathers::style::Theme_obj::get_fallbackTheme(),::hx::ClassOf< ::feathers::themes::steel::BaseSteelTheme >())) );
            		}
HXLINE(  28)		if (::hx::IsNull( theme )) {
HXLINE(  29)			return;
            		}
HXLINE(  32)		 ::feathers::style::ClassVariantStyleProvider styleProvider = theme->styleProvider;
HXLINE(  34)		if (::hx::IsNull( styleProvider->getStyleFunction(::hx::ClassOf< ::feathers::controls::ButtonBar >(),null()) )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::feathers::controls::ButtonBar tabBar){
            				HX_GC_STACKFRAME(&_hx_pos_afd50f57f4a2cc88_36_initialize)
HXLINE(  36)				if (::hx::IsNull( tabBar->get_layout() )) {
HXLINE(  37)					 ::feathers::layout::HorizontalLayout layout =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  38)					layout->set_gap(((Float)6.0));
HXLINE(  39)					tabBar->set_layout(layout);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  35)			styleProvider->setStyleFunction(::hx::ClassOf< ::feathers::controls::ButtonBar >(),null(), ::Dynamic(new _hx_Closure_0()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SteelButtonBarStyles_obj,initialize,(void))


SteelButtonBarStyles_obj::SteelButtonBarStyles_obj()
{
}

bool SteelButtonBarStyles_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SteelButtonBarStyles_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SteelButtonBarStyles_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SteelButtonBarStyles_obj::__mClass;

static ::String SteelButtonBarStyles_obj_sStaticFields[] = {
	HX_("initialize",50,31,bb,ec),
	::String(null())
};

void SteelButtonBarStyles_obj::__register()
{
	SteelButtonBarStyles_obj _hx_dummy;
	SteelButtonBarStyles_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.components.SteelButtonBarStyles",67,43,63,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SteelButtonBarStyles_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SteelButtonBarStyles_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SteelButtonBarStyles_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SteelButtonBarStyles_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SteelButtonBarStyles_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components
