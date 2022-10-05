#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_LayoutViewPort
#include <feathers/controls/supportClasses/LayoutViewPort.h>
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
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_IScrollLayout
#include <feathers/layout/IScrollLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ISnapLayout
#include <feathers/layout/ISnapLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#include <feathers/layout/LayoutBoundsResult.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9ed2bf495b014af7_23_new,"feathers.controls.supportClasses.LayoutViewPort","new",0xdb5accdf,"feathers.controls.supportClasses.LayoutViewPort.new","feathers/controls/supportClasses/LayoutViewPort.hx",23,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_54_get_minVisibleWidth,"feathers.controls.supportClasses.LayoutViewPort","get_minVisibleWidth",0x94a93a7c,"feathers.controls.supportClasses.LayoutViewPort.get_minVisibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",54,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_61_set_minVisibleWidth,"feathers.controls.supportClasses.LayoutViewPort","set_minVisibleWidth",0xd1462d88,"feathers.controls.supportClasses.LayoutViewPort.set_minVisibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",61,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_88_get_maxVisibleWidth,"feathers.controls.supportClasses.LayoutViewPort","get_maxVisibleWidth",0x38c3868e,"feathers.controls.supportClasses.LayoutViewPort.get_maxVisibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",88,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_91_set_maxVisibleWidth,"feathers.controls.supportClasses.LayoutViewPort","set_maxVisibleWidth",0x7560799a,"feathers.controls.supportClasses.LayoutViewPort.set_maxVisibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",91,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_115_get_visibleWidth,"feathers.controls.supportClasses.LayoutViewPort","get_visibleWidth",0xafce9cde,"feathers.controls.supportClasses.LayoutViewPort.get_visibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",115,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_122_set_visibleWidth,"feathers.controls.supportClasses.LayoutViewPort","set_visibleWidth",0x06108a52,"feathers.controls.supportClasses.LayoutViewPort.set_visibleWidth","feathers/controls/supportClasses/LayoutViewPort.hx",122,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_141_get_minVisibleHeight,"feathers.controls.supportClasses.LayoutViewPort","get_minVisibleHeight",0x35b96ab1,"feathers.controls.supportClasses.LayoutViewPort.get_minVisibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",141,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_148_set_minVisibleHeight,"feathers.controls.supportClasses.LayoutViewPort","set_minVisibleHeight",0x02712225,"feathers.controls.supportClasses.LayoutViewPort.set_minVisibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",148,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_175_get_maxVisibleHeight,"feathers.controls.supportClasses.LayoutViewPort","get_maxVisibleHeight",0x28a1ae5f,"feathers.controls.supportClasses.LayoutViewPort.get_maxVisibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",175,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_178_set_maxVisibleHeight,"feathers.controls.supportClasses.LayoutViewPort","set_maxVisibleHeight",0xf55965d3,"feathers.controls.supportClasses.LayoutViewPort.set_maxVisibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",178,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_202_get_visibleHeight,"feathers.controls.supportClasses.LayoutViewPort","get_visibleHeight",0xdb4a1e0f,"feathers.controls.supportClasses.LayoutViewPort.get_visibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",202,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_209_set_visibleHeight,"feathers.controls.supportClasses.LayoutViewPort","set_visibleHeight",0xfeb7f61b,"feathers.controls.supportClasses.LayoutViewPort.set_visibleHeight","feathers/controls/supportClasses/LayoutViewPort.hx",209,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_228_get_scrollX,"feathers.controls.supportClasses.LayoutViewPort","get_scrollX",0x50f8a741,"feathers.controls.supportClasses.LayoutViewPort.get_scrollX","feathers/controls/supportClasses/LayoutViewPort.hx",228,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_231_set_scrollX,"feathers.controls.supportClasses.LayoutViewPort","set_scrollX",0x5b65ae4d,"feathers.controls.supportClasses.LayoutViewPort.set_scrollX","feathers/controls/supportClasses/LayoutViewPort.hx",231,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_250_get_scrollY,"feathers.controls.supportClasses.LayoutViewPort","get_scrollY",0x50f8a742,"feathers.controls.supportClasses.LayoutViewPort.get_scrollY","feathers/controls/supportClasses/LayoutViewPort.hx",250,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_253_set_scrollY,"feathers.controls.supportClasses.LayoutViewPort","set_scrollY",0x5b65ae4e,"feathers.controls.supportClasses.LayoutViewPort.set_scrollY","feathers/controls/supportClasses/LayoutViewPort.hx",253,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_276_get_snapPositionsX,"feathers.controls.supportClasses.LayoutViewPort","get_snapPositionsX",0x7630e782,"feathers.controls.supportClasses.LayoutViewPort.get_snapPositionsX","feathers/controls/supportClasses/LayoutViewPort.hx",276,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_291_get_snapPositionsY,"feathers.controls.supportClasses.LayoutViewPort","get_snapPositionsY",0x7630e783,"feathers.controls.supportClasses.LayoutViewPort.get_snapPositionsY","feathers/controls/supportClasses/LayoutViewPort.hx",291,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_294_refreshViewPortBounds,"feathers.controls.supportClasses.LayoutViewPort","refreshViewPortBounds",0x2bab7b15,"feathers.controls.supportClasses.LayoutViewPort.refreshViewPortBounds","feathers/controls/supportClasses/LayoutViewPort.hx",294,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_363_handleCustomLayout,"feathers.controls.supportClasses.LayoutViewPort","handleCustomLayout",0x5b899b64,"feathers.controls.supportClasses.LayoutViewPort.handleCustomLayout","feathers/controls/supportClasses/LayoutViewPort.hx",363,0x44a09a30)
HX_LOCAL_STACK_FRAME(_hx_pos_9ed2bf495b014af7_375_handleLayoutResult,"feathers.controls.supportClasses.LayoutViewPort","handleLayoutResult",0x26fc7d50,"feathers.controls.supportClasses.LayoutViewPort.handleLayoutResult","feathers/controls/supportClasses/LayoutViewPort.hx",375,0x44a09a30)
namespace feathers{
namespace controls{
namespace supportClasses{

void LayoutViewPort_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9ed2bf495b014af7_23_new)
HXLINE( 279)		this->_snapPositionsY = null();
HXLINE( 264)		this->_snapPositionsX = null();
HXLINE( 242)		this->_scrollY = ((Float)0.0);
HXLINE( 220)		this->_scrollX = ((Float)0.0);
HXLINE( 195)		this->_explicitVisibleHeight = null();
HXLINE( 194)		this->_actualVisibleHeight = ((Float)0.0);
HXLINE( 167)		this->_maxVisibleHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 133)		this->_actualMinVisibleHeight = ((Float)0.0);
HXLINE( 108)		this->_explicitVisibleWidth = null();
HXLINE( 107)		this->_actualVisibleWidth = ((Float)0.0);
HXLINE(  80)		this->_maxVisibleWidth = ::hx::DivByZero(((Float)1.0));
HXLINE(  47)		this->_explicitMinVisibleWidth = null();
HXLINE(  46)		this->_actualMinVisibleWidth = ((Float)0.0);
HXLINE(  30)		super::__construct();
HXLINE(  34)		this->_viewPortBackground =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  35)		this->_viewPortBackground->get_graphics()->beginFill(16711935,((Float)0.0));
HXLINE(  36)		this->_viewPortBackground->get_graphics()->drawRect(((Float)0.0),((Float)0.0),((Float)1.0),((Float)1.0));
HXLINE(  37)		this->_viewPortBackground->get_graphics()->endFill();
HXLINE(  41)		this->_addChildAt(this->_viewPortBackground,0);
            	}

Dynamic LayoutViewPort_obj::__CreateEmpty() { return new LayoutViewPort_obj; }

void *LayoutViewPort_obj::_hx_vtable = 0;

Dynamic LayoutViewPort_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutViewPort_obj > _hx_result = new LayoutViewPort_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutViewPort_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x11a722e7 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x5c64c42d || inClassId==(int)0x6b353933;
		}
	}
}

static ::feathers::controls::supportClasses::IViewPort_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_controls_supportClasses_IViewPort= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::LayoutViewPort_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMaxHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visibleWidth,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visibleWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visibleHeight,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visibleHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minVisibleWidth,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minVisibleWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minVisibleHeight,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minVisibleHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxVisibleWidth,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxVisibleWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxVisibleHeight,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxVisibleHeight,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scrollX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scrollX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scrollY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scrollY,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::LayoutViewPort_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::willTrigger,
};

static ::feathers::core::IMeasureObject_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IMeasureObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::LayoutViewPort_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::resetMaxHeight,
};

static ::feathers::core::IValidating_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IValidating= {
	( int (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_depth,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::validateNow,
};

static ::feathers::core::IUIControl_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::LayoutViewPort_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::initializeNow,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::LayoutViewPort_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::LayoutViewPort_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::LayoutViewPort_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::LayoutViewPort_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::LayoutViewPort_obj::set_visible,
};

void *LayoutViewPort_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd5cd7712: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_controls_supportClasses_IViewPort;
		case (int)0x87530281: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_openfl_events_IEventDispatcher;
		case (int)0xcfc32883: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IMeasureObject;
		case (int)0x64d4b3cd: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IValidating;
		case (int)0x2696a04f: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IUIControl;
		case (int)0x3a979a67: return &_hx_feathers_controls_supportClasses_LayoutViewPort__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic LayoutViewPort_obj::get_minVisibleWidth(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_54_get_minVisibleWidth)
HXLINE(  55)		if (::hx::IsNull( this->_explicitMinVisibleWidth )) {
HXLINE(  56)			return this->_actualMinVisibleWidth;
            		}
HXLINE(  58)		return this->_explicitMinVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_minVisibleWidth,return )

 ::Dynamic LayoutViewPort_obj::set_minVisibleWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_61_set_minVisibleWidth)
HXLINE(  62)		if (::hx::IsEq( this->_explicitMinVisibleWidth,value )) {
HXLINE(  63)			return this->_explicitMinVisibleWidth;
            		}
HXLINE(  65)		 ::Dynamic oldValue = this->_explicitMinVisibleWidth;
HXLINE(  66)		this->_explicitMinVisibleWidth = value;
HXLINE(  67)		if (::hx::IsNull( value )) {
HXLINE(  68)			this->_actualMinVisibleWidth = ((Float)0.0);
HXLINE(  69)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE(  71)			this->_actualMinVisibleWidth = ( (Float)(value) );
HXLINE(  72)			bool _hx_tmp;
HXDLIN(  72)			if (::hx::IsNull( this->_explicitVisibleWidth )) {
HXLINE(  72)				if (!(::hx::IsLess( this->_actualVisibleWidth,value ))) {
HXLINE(  72)					_hx_tmp = ::hx::IsEq( this->_actualVisibleWidth,oldValue );
            				}
            				else {
HXLINE(  72)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(  72)				_hx_tmp = false;
            			}
HXDLIN(  72)			if (_hx_tmp) {
HXLINE(  74)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE(  77)		return this->_explicitMinVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_minVisibleWidth,return )

 ::Dynamic LayoutViewPort_obj::get_maxVisibleWidth(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_88_get_maxVisibleWidth)
HXDLIN(  88)		return this->_maxVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_maxVisibleWidth,return )

 ::Dynamic LayoutViewPort_obj::set_maxVisibleWidth( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9ed2bf495b014af7_91_set_maxVisibleWidth)
HXLINE(  92)		if (::hx::IsEq( this->_maxVisibleWidth,value )) {
HXLINE(  93)			return this->_maxVisibleWidth;
            		}
HXLINE(  95)		if (::hx::IsNull( value )) {
HXLINE(  96)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("maxVisibleWidth cannot be null",0f,a6,fe,b9)));
            		}
HXLINE(  98)		 ::Dynamic oldValue = this->_maxVisibleWidth;
HXLINE(  99)		this->_maxVisibleWidth = value;
HXLINE( 100)		bool _hx_tmp;
HXDLIN( 100)		if (::hx::IsNull( this->_explicitVisibleWidth )) {
HXLINE( 100)			if (!(::hx::IsGreater( this->_actualVisibleWidth,value ))) {
HXLINE( 100)				_hx_tmp = ::hx::IsEq( this->_actualVisibleWidth,oldValue );
            			}
            			else {
HXLINE( 100)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		if (_hx_tmp) {
HXLINE( 102)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
HXLINE( 104)		return this->_maxVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_maxVisibleWidth,return )

 ::Dynamic LayoutViewPort_obj::get_visibleWidth(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_115_get_visibleWidth)
HXLINE( 116)		if (::hx::IsNull( this->_explicitVisibleWidth )) {
HXLINE( 117)			return this->_actualVisibleWidth;
            		}
HXLINE( 119)		return this->_explicitVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_visibleWidth,return )

 ::Dynamic LayoutViewPort_obj::set_visibleWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_122_set_visibleWidth)
HXLINE( 123)		if (::hx::IsEq( this->_explicitVisibleWidth,value )) {
HXLINE( 124)			return this->_explicitVisibleWidth;
            		}
HXLINE( 126)		this->_explicitVisibleWidth = value;
HXLINE( 127)		if (::hx::IsNotEq( this->_actualVisibleWidth,value )) {
HXLINE( 128)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
HXLINE( 130)		return this->_explicitVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_visibleWidth,return )

 ::Dynamic LayoutViewPort_obj::get_minVisibleHeight(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_141_get_minVisibleHeight)
HXLINE( 142)		if (::hx::IsNull( this->_explicitMinVisibleHeight )) {
HXLINE( 143)			return this->_actualMinVisibleHeight;
            		}
HXLINE( 145)		return this->_explicitMinVisibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_minVisibleHeight,return )

 ::Dynamic LayoutViewPort_obj::set_minVisibleHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_148_set_minVisibleHeight)
HXLINE( 149)		if (::hx::IsEq( this->_explicitMinVisibleHeight,value )) {
HXLINE( 150)			return this->_explicitMinVisibleHeight;
            		}
HXLINE( 152)		 ::Dynamic oldValue = this->_explicitMinVisibleHeight;
HXLINE( 153)		this->_explicitMinVisibleHeight = value;
HXLINE( 154)		if (::hx::IsNull( value )) {
HXLINE( 155)			this->_actualMinVisibleHeight = ((Float)0.0);
HXLINE( 156)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 158)			this->_actualMinVisibleHeight = ( (Float)(value) );
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if (::hx::IsNull( this->_explicitVisibleHeight )) {
HXLINE( 159)				if (!(::hx::IsLess( this->_actualVisibleHeight,value ))) {
HXLINE( 159)					_hx_tmp = ::hx::IsEq( this->_actualVisibleHeight,oldValue );
            				}
            				else {
HXLINE( 159)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 161)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 164)		return this->_explicitMinVisibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_minVisibleHeight,return )

 ::Dynamic LayoutViewPort_obj::get_maxVisibleHeight(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_175_get_maxVisibleHeight)
HXDLIN( 175)		return this->_maxVisibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_maxVisibleHeight,return )

 ::Dynamic LayoutViewPort_obj::set_maxVisibleHeight( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_9ed2bf495b014af7_178_set_maxVisibleHeight)
HXLINE( 179)		if (::hx::IsEq( this->_maxVisibleHeight,value )) {
HXLINE( 180)			return this->_maxVisibleHeight;
            		}
HXLINE( 182)		if (::hx::IsNull( value )) {
HXLINE( 183)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("maxVisibleHeight cannot be null",f2,2a,d1,66)));
            		}
HXLINE( 185)		 ::Dynamic oldValue = this->_maxVisibleHeight;
HXLINE( 186)		this->_maxVisibleHeight = value;
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (::hx::IsNull( this->_explicitVisibleHeight )) {
HXLINE( 187)			if (!(::hx::IsGreater( this->_actualVisibleHeight,value ))) {
HXLINE( 187)				_hx_tmp = ::hx::IsEq( this->_actualVisibleHeight,oldValue );
            			}
            			else {
HXLINE( 187)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 187)			_hx_tmp = false;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 189)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
HXLINE( 191)		return this->_maxVisibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_maxVisibleHeight,return )

 ::Dynamic LayoutViewPort_obj::get_visibleHeight(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_202_get_visibleHeight)
HXLINE( 203)		if (::hx::IsNull( this->_explicitVisibleHeight )) {
HXLINE( 204)			return this->_actualVisibleHeight;
            		}
HXLINE( 206)		return this->_explicitVisibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_visibleHeight,return )

 ::Dynamic LayoutViewPort_obj::set_visibleHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_209_set_visibleHeight)
HXLINE( 210)		if (::hx::IsEq( this->_explicitVisibleHeight,value )) {
HXLINE( 211)			return this->_explicitVisibleHeight;
            		}
HXLINE( 213)		this->_explicitVisibleHeight = value;
HXLINE( 214)		if (::hx::IsNotEq( this->_actualVisibleHeight,value )) {
HXLINE( 215)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
HXLINE( 217)		return this->_explicitVisibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_visibleHeight,return )

Float LayoutViewPort_obj::get_scrollX(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_228_get_scrollX)
HXDLIN( 228)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_scrollX,return )

Float LayoutViewPort_obj::set_scrollX(Float value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_231_set_scrollX)
HXLINE( 232)		if ((this->_scrollX == value)) {
HXLINE( 233)			return this->_scrollX;
            		}
HXLINE( 235)		this->_scrollX = value;
HXLINE( 236)		if (::Std_obj::isOfType(this->_currentLayout,::hx::ClassOf< ::feathers::layout::IScrollLayout >())) {
HXLINE( 237)			this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            		}
HXLINE( 239)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_scrollX,return )

Float LayoutViewPort_obj::get_scrollY(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_250_get_scrollY)
HXDLIN( 250)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_scrollY,return )

Float LayoutViewPort_obj::set_scrollY(Float value){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_253_set_scrollY)
HXLINE( 254)		if ((this->_scrollY == value)) {
HXLINE( 255)			return this->_scrollY;
            		}
HXLINE( 257)		this->_scrollY = value;
HXLINE( 258)		if (::Std_obj::isOfType(this->_currentLayout,::hx::ClassOf< ::feathers::layout::IScrollLayout >())) {
HXLINE( 259)			this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            		}
HXLINE( 261)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutViewPort_obj,set_scrollY,return )

::Array< Float > LayoutViewPort_obj::get_snapPositionsX(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_276_get_snapPositionsX)
HXDLIN( 276)		return this->_snapPositionsX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_snapPositionsX,return )

::Array< Float > LayoutViewPort_obj::get_snapPositionsY(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_291_get_snapPositionsY)
HXDLIN( 291)		return this->_snapPositionsY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutViewPort_obj,get_snapPositionsY,return )

void LayoutViewPort_obj::refreshViewPortBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_9ed2bf495b014af7_294_refreshViewPortBounds)
HXLINE( 295)		bool needsWidth = ::hx::IsNull( this->_explicitVisibleWidth );
HXLINE( 296)		bool needsHeight = ::hx::IsNull( this->_explicitVisibleHeight );
HXLINE( 297)		bool needsMinWidth = ::hx::IsNull( this->_explicitMinVisibleWidth );
HXLINE( 298)		bool needsMinHeight = ::hx::IsNull( this->_explicitMinVisibleHeight );
HXLINE( 299)		bool needsMaxWidth = ::hx::IsNull( this->_maxVisibleWidth );
HXLINE( 300)		bool needsMaxHeight = ::hx::IsNull( this->_maxVisibleHeight );
HXLINE( 302)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 303)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 306)		bool needsToMeasureContent;
HXDLIN( 306)		if (::hx::IsPointerNotEq( this->get_autoSizeMode(),::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 306)			needsToMeasureContent = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 306)			needsToMeasureContent = true;
            		}
HXLINE( 307)		Float stageWidth = ((Float)0.0);
HXLINE( 308)		Float stageHeight = ((Float)0.0);
HXLINE( 309)		if (!(needsToMeasureContent)) {
HXLINE( 311)			 ::openfl::geom::Point topLeft = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 312)			 ::openfl::geom::Point bottomRight = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->stage->stageWidth,this->stage->stageHeight));
HXLINE( 313)			stageWidth = (bottomRight->x - topLeft->x);
HXLINE( 314)			stageHeight = (bottomRight->y - topLeft->y);
            		}
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (needsWidth) {
HXLINE( 317)			_hx_tmp = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 317)			_hx_tmp = false;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 318)			this->_layoutMeasurements->width = stageWidth;
            		}
            		else {
HXLINE( 320)			this->_layoutMeasurements->width = this->_explicitVisibleWidth;
            		}
HXLINE( 323)		bool _hx_tmp1;
HXDLIN( 323)		if (needsHeight) {
HXLINE( 323)			_hx_tmp1 = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 323)			_hx_tmp1 = false;
            		}
HXDLIN( 323)		if (_hx_tmp1) {
HXLINE( 324)			this->_layoutMeasurements->height = stageHeight;
            		}
            		else {
HXLINE( 326)			this->_layoutMeasurements->height = this->_explicitVisibleHeight;
            		}
HXLINE( 329)		 ::Dynamic viewPortMinWidth = this->_explicitMinVisibleWidth;
HXLINE( 330)		if (needsMinWidth) {
HXLINE( 331)			viewPortMinWidth = ((Float)0.0);
            		}
HXLINE( 333)		 ::Dynamic viewPortMinHeight = this->_explicitMinVisibleHeight;
HXLINE( 334)		if (needsMinHeight) {
HXLINE( 335)			viewPortMinHeight = ((Float)0.0);
            		}
HXLINE( 337)		 ::Dynamic viewPortMaxWidth = this->_maxVisibleWidth;
HXLINE( 338)		if (needsMaxWidth) {
HXLINE( 339)			viewPortMaxWidth = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 341)		 ::Dynamic viewPortMaxHeight = this->_maxVisibleHeight;
HXLINE( 342)		if (needsMaxHeight) {
HXLINE( 343)			viewPortMaxHeight = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 345)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 350)			if (::hx::IsGreater( this->_currentBackgroundSkin->get_width(),viewPortMinWidth )) {
HXLINE( 351)				viewPortMinWidth = this->_currentBackgroundSkin->get_width();
            			}
HXLINE( 353)			if (::hx::IsGreater( this->_currentBackgroundSkin->get_height(),viewPortMinHeight )) {
HXLINE( 354)				viewPortMinHeight = this->_currentBackgroundSkin->get_height();
            			}
            		}
HXLINE( 357)		this->_layoutMeasurements->minWidth = viewPortMinWidth;
HXLINE( 358)		this->_layoutMeasurements->minHeight = viewPortMinHeight;
HXLINE( 359)		this->_layoutMeasurements->maxWidth = viewPortMaxWidth;
HXLINE( 360)		this->_layoutMeasurements->maxHeight = viewPortMaxHeight;
            	}


void LayoutViewPort_obj::handleCustomLayout(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_363_handleCustomLayout)
HXLINE( 364)		bool oldIgnoreLayoutChanges = this->_ignoreLayoutChanges;
HXLINE( 365)		this->_ignoreLayoutChanges = true;
HXLINE( 366)		if (::Std_obj::isOfType(this->_currentLayout,::hx::ClassOf< ::feathers::layout::IScrollLayout >())) {
HXLINE( 367)			::Dynamic scrollLayout = this->_currentLayout;
HXLINE( 368)			::feathers::layout::IScrollLayout_obj::set_scrollX(scrollLayout,this->_scrollX);
HXLINE( 369)			::feathers::layout::IScrollLayout_obj::set_scrollY(scrollLayout,this->_scrollY);
            		}
HXLINE( 371)		this->_ignoreLayoutChanges = oldIgnoreLayoutChanges;
HXLINE( 372)		this->super::handleCustomLayout();
            	}


void LayoutViewPort_obj::handleLayoutResult(){
            	HX_STACKFRAME(&_hx_pos_9ed2bf495b014af7_375_handleLayoutResult)
HXLINE( 376)		this->saveMeasurements(this->_layoutResult->contentWidth,this->_layoutResult->contentHeight,this->_layoutResult->contentMinWidth,this->_layoutResult->contentMinHeight,null(),null());
HXLINE( 378)		Float viewPortWidth = this->_layoutResult->viewPortWidth;
HXLINE( 379)		Float viewPortHeight = this->_layoutResult->viewPortHeight;
HXLINE( 380)		this->_actualVisibleWidth = viewPortWidth;
HXLINE( 381)		this->_actualVisibleHeight = viewPortHeight;
HXLINE( 382)		this->_actualMinVisibleWidth = this->_layoutResult->contentMinWidth;
HXLINE( 383)		this->_actualMinVisibleHeight = this->_layoutResult->contentMinHeight;
HXLINE( 385)		 ::openfl::display::Sprite _hx_tmp = this->_viewPortBackground;
HXDLIN( 385)		_hx_tmp->set_x(::Math_obj::min(this->get_scrollX(),((Float)0.0)));
HXLINE( 386)		 ::openfl::display::Sprite _hx_tmp1 = this->_viewPortBackground;
HXDLIN( 386)		_hx_tmp1->set_y(::Math_obj::min(this->get_scrollY(),((Float)0.0)));
HXLINE( 387)		this->_viewPortBackground->set_width(::Math_obj::max(this->actualWidth,this->_actualVisibleWidth));
HXLINE( 388)		this->_viewPortBackground->set_height(::Math_obj::max(this->actualHeight,this->_actualVisibleHeight));
HXLINE( 390)		if (::Std_obj::isOfType(this->get_layout(),::hx::ClassOf< ::feathers::layout::ISnapLayout >())) {
HXLINE( 391)			::Dynamic snapLayout = this->get_layout();
HXLINE( 392)			this->_snapPositionsX = ::feathers::layout::ISnapLayout_obj::getSnapPositionsX(snapLayout,this->items,this->_actualVisibleWidth,this->_actualVisibleHeight,this->_snapPositionsX);
HXLINE( 393)			this->_snapPositionsY = ::feathers::layout::ISnapLayout_obj::getSnapPositionsY(snapLayout,this->items,this->_actualVisibleWidth,this->_actualVisibleHeight,this->_snapPositionsY);
            		}
            		else {
HXLINE( 395)			this->_snapPositionsX = null();
HXLINE( 396)			this->_snapPositionsY = null();
            		}
            	}



::hx::ObjectPtr< LayoutViewPort_obj > LayoutViewPort_obj::__new() {
	::hx::ObjectPtr< LayoutViewPort_obj > __this = new LayoutViewPort_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LayoutViewPort_obj > LayoutViewPort_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LayoutViewPort_obj *__this = (LayoutViewPort_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutViewPort_obj), true, "feathers.controls.supportClasses.LayoutViewPort"));
	*(void **)__this = LayoutViewPort_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LayoutViewPort_obj::LayoutViewPort_obj()
{
}

void LayoutViewPort_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayoutViewPort);
	HX_MARK_MEMBER_NAME(_viewPortBackground,"_viewPortBackground");
	HX_MARK_MEMBER_NAME(_actualMinVisibleWidth,"_actualMinVisibleWidth");
	HX_MARK_MEMBER_NAME(_explicitMinVisibleWidth,"_explicitMinVisibleWidth");
	HX_MARK_MEMBER_NAME(_maxVisibleWidth,"_maxVisibleWidth");
	HX_MARK_MEMBER_NAME(_actualVisibleWidth,"_actualVisibleWidth");
	HX_MARK_MEMBER_NAME(_explicitVisibleWidth,"_explicitVisibleWidth");
	HX_MARK_MEMBER_NAME(_actualMinVisibleHeight,"_actualMinVisibleHeight");
	HX_MARK_MEMBER_NAME(_explicitMinVisibleHeight,"_explicitMinVisibleHeight");
	HX_MARK_MEMBER_NAME(_maxVisibleHeight,"_maxVisibleHeight");
	HX_MARK_MEMBER_NAME(_actualVisibleHeight,"_actualVisibleHeight");
	HX_MARK_MEMBER_NAME(_explicitVisibleHeight,"_explicitVisibleHeight");
	HX_MARK_MEMBER_NAME(_scrollX,"_scrollX");
	HX_MARK_MEMBER_NAME(_scrollY,"_scrollY");
	HX_MARK_MEMBER_NAME(_snapPositionsX,"_snapPositionsX");
	HX_MARK_MEMBER_NAME(_snapPositionsY,"_snapPositionsY");
	 ::feathers::controls::LayoutGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayoutViewPort_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_viewPortBackground,"_viewPortBackground");
	HX_VISIT_MEMBER_NAME(_actualMinVisibleWidth,"_actualMinVisibleWidth");
	HX_VISIT_MEMBER_NAME(_explicitMinVisibleWidth,"_explicitMinVisibleWidth");
	HX_VISIT_MEMBER_NAME(_maxVisibleWidth,"_maxVisibleWidth");
	HX_VISIT_MEMBER_NAME(_actualVisibleWidth,"_actualVisibleWidth");
	HX_VISIT_MEMBER_NAME(_explicitVisibleWidth,"_explicitVisibleWidth");
	HX_VISIT_MEMBER_NAME(_actualMinVisibleHeight,"_actualMinVisibleHeight");
	HX_VISIT_MEMBER_NAME(_explicitMinVisibleHeight,"_explicitMinVisibleHeight");
	HX_VISIT_MEMBER_NAME(_maxVisibleHeight,"_maxVisibleHeight");
	HX_VISIT_MEMBER_NAME(_actualVisibleHeight,"_actualVisibleHeight");
	HX_VISIT_MEMBER_NAME(_explicitVisibleHeight,"_explicitVisibleHeight");
	HX_VISIT_MEMBER_NAME(_scrollX,"_scrollX");
	HX_VISIT_MEMBER_NAME(_scrollY,"_scrollY");
	HX_VISIT_MEMBER_NAME(_snapPositionsX,"_snapPositionsX");
	HX_VISIT_MEMBER_NAME(_snapPositionsY,"_snapPositionsY");
	 ::feathers::controls::LayoutGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LayoutViewPort_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollX() ); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollY() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollX") ) { return ::hx::Val( _scrollX ); }
		if (HX_FIELD_EQ(inName,"_scrollY") ) { return ::hx::Val( _scrollY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_scrollX") ) { return ::hx::Val( get_scrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollX") ) { return ::hx::Val( set_scrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollY") ) { return ::hx::Val( get_scrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollY") ) { return ::hx::Val( set_scrollY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visibleWidth() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visibleHeight() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snapPositionsX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_snapPositionsX() ); }
		if (HX_FIELD_EQ(inName,"snapPositionsY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_snapPositionsY() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minVisibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minVisibleWidth() ); }
		if (HX_FIELD_EQ(inName,"maxVisibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxVisibleWidth() ); }
		if (HX_FIELD_EQ(inName,"_snapPositionsX") ) { return ::hx::Val( _snapPositionsX ); }
		if (HX_FIELD_EQ(inName,"_snapPositionsY") ) { return ::hx::Val( _snapPositionsY ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxVisibleWidth") ) { return ::hx::Val( _maxVisibleWidth ); }
		if (HX_FIELD_EQ(inName,"get_visibleWidth") ) { return ::hx::Val( get_visibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visibleWidth") ) { return ::hx::Val( set_visibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"minVisibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minVisibleHeight() ); }
		if (HX_FIELD_EQ(inName,"maxVisibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxVisibleHeight() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_maxVisibleHeight") ) { return ::hx::Val( _maxVisibleHeight ); }
		if (HX_FIELD_EQ(inName,"get_visibleHeight") ) { return ::hx::Val( get_visibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visibleHeight") ) { return ::hx::Val( set_visibleHeight_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_snapPositionsX") ) { return ::hx::Val( get_snapPositionsX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_snapPositionsY") ) { return ::hx::Val( get_snapPositionsY_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleCustomLayout") ) { return ::hx::Val( handleCustomLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleLayoutResult") ) { return ::hx::Val( handleLayoutResult_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_viewPortBackground") ) { return ::hx::Val( _viewPortBackground ); }
		if (HX_FIELD_EQ(inName,"get_minVisibleWidth") ) { return ::hx::Val( get_minVisibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minVisibleWidth") ) { return ::hx::Val( set_minVisibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxVisibleWidth") ) { return ::hx::Val( get_maxVisibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxVisibleWidth") ) { return ::hx::Val( set_maxVisibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_actualVisibleWidth") ) { return ::hx::Val( _actualVisibleWidth ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_minVisibleHeight") ) { return ::hx::Val( get_minVisibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minVisibleHeight") ) { return ::hx::Val( set_minVisibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxVisibleHeight") ) { return ::hx::Val( get_maxVisibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxVisibleHeight") ) { return ::hx::Val( set_maxVisibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_actualVisibleHeight") ) { return ::hx::Val( _actualVisibleHeight ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_explicitVisibleWidth") ) { return ::hx::Val( _explicitVisibleWidth ); }
		if (HX_FIELD_EQ(inName,"refreshViewPortBounds") ) { return ::hx::Val( refreshViewPortBounds_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_actualMinVisibleWidth") ) { return ::hx::Val( _actualMinVisibleWidth ); }
		if (HX_FIELD_EQ(inName,"_explicitVisibleHeight") ) { return ::hx::Val( _explicitVisibleHeight ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_actualMinVisibleHeight") ) { return ::hx::Val( _actualMinVisibleHeight ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_explicitMinVisibleWidth") ) { return ::hx::Val( _explicitMinVisibleWidth ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_explicitMinVisibleHeight") ) { return ::hx::Val( _explicitMinVisibleHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LayoutViewPort_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollY(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollX") ) { _scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollY") ) { _scrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visibleWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"visibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visibleHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minVisibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minVisibleWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"maxVisibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxVisibleWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_snapPositionsX") ) { _snapPositionsX=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapPositionsY") ) { _snapPositionsY=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxVisibleWidth") ) { _maxVisibleWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minVisibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minVisibleHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"maxVisibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxVisibleHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_maxVisibleHeight") ) { _maxVisibleHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_viewPortBackground") ) { _viewPortBackground=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_actualVisibleWidth") ) { _actualVisibleWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_actualVisibleHeight") ) { _actualVisibleHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_explicitVisibleWidth") ) { _explicitVisibleWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_actualMinVisibleWidth") ) { _actualMinVisibleWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitVisibleHeight") ) { _explicitVisibleHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_actualMinVisibleHeight") ) { _actualMinVisibleHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_explicitMinVisibleWidth") ) { _explicitMinVisibleWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_explicitMinVisibleHeight") ) { _explicitMinVisibleHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayoutViewPort_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_viewPortBackground",33,b8,59,c4));
	outFields->push(HX_("_actualMinVisibleWidth",39,a7,ae,c5));
	outFields->push(HX_("_explicitMinVisibleWidth",d3,43,12,41));
	outFields->push(HX_("minVisibleWidth",e6,40,ea,48));
	outFields->push(HX_("_maxVisibleWidth",79,cf,e3,d7));
	outFields->push(HX_("maxVisibleWidth",f8,8c,04,ed));
	outFields->push(HX_("_actualVisibleWidth",01,88,b0,0d));
	outFields->push(HX_("_explicitVisibleWidth",27,67,60,49));
	outFields->push(HX_("visibleWidth",34,d0,e7,3f));
	outFields->push(HX_("_actualMinVisibleHeight",54,23,73,e9));
	outFields->push(HX_("_explicitMinVisibleHeight",7a,8d,38,65));
	outFields->push(HX_("minVisibleHeight",07,01,5e,3a));
	outFields->push(HX_("_maxVisibleHeight",14,33,c1,c5));
	outFields->push(HX_("maxVisibleHeight",b5,44,46,2d));
	outFields->push(HX_("_actualVisibleHeight",8c,f1,15,a3));
	outFields->push(HX_("_explicitVisibleHeight",a6,53,49,a1));
	outFields->push(HX_("visibleHeight",f9,d5,3d,61));
	outFields->push(HX_("_scrollX",2c,8d,90,6a));
	outFields->push(HX_("scrollX",ab,33,d8,30));
	outFields->push(HX_("_scrollY",2d,8d,90,6a));
	outFields->push(HX_("scrollY",ac,33,d8,30));
	outFields->push(HX_("_snapPositionsX",f7,64,de,6e));
	outFields->push(HX_("snapPositionsX",58,1c,7e,25));
	outFields->push(HX_("_snapPositionsY",f8,64,de,6e));
	outFields->push(HX_("snapPositionsY",59,1c,7e,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LayoutViewPort_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(LayoutViewPort_obj,_viewPortBackground),HX_("_viewPortBackground",33,b8,59,c4)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_actualMinVisibleWidth),HX_("_actualMinVisibleWidth",39,a7,ae,c5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_explicitMinVisibleWidth),HX_("_explicitMinVisibleWidth",d3,43,12,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_maxVisibleWidth),HX_("_maxVisibleWidth",79,cf,e3,d7)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_actualVisibleWidth),HX_("_actualVisibleWidth",01,88,b0,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_explicitVisibleWidth),HX_("_explicitVisibleWidth",27,67,60,49)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_actualMinVisibleHeight),HX_("_actualMinVisibleHeight",54,23,73,e9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_explicitMinVisibleHeight),HX_("_explicitMinVisibleHeight",7a,8d,38,65)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_maxVisibleHeight),HX_("_maxVisibleHeight",14,33,c1,c5)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_actualVisibleHeight),HX_("_actualVisibleHeight",8c,f1,15,a3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LayoutViewPort_obj,_explicitVisibleHeight),HX_("_explicitVisibleHeight",a6,53,49,a1)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_scrollX),HX_("_scrollX",2c,8d,90,6a)},
	{::hx::fsFloat,(int)offsetof(LayoutViewPort_obj,_scrollY),HX_("_scrollY",2d,8d,90,6a)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LayoutViewPort_obj,_snapPositionsX),HX_("_snapPositionsX",f7,64,de,6e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LayoutViewPort_obj,_snapPositionsY),HX_("_snapPositionsY",f8,64,de,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LayoutViewPort_obj_sStaticStorageInfo = 0;
#endif

static ::String LayoutViewPort_obj_sMemberFields[] = {
	HX_("_viewPortBackground",33,b8,59,c4),
	HX_("_actualMinVisibleWidth",39,a7,ae,c5),
	HX_("_explicitMinVisibleWidth",d3,43,12,41),
	HX_("get_minVisibleWidth",fd,0f,f5,d3),
	HX_("set_minVisibleWidth",09,03,92,10),
	HX_("_maxVisibleWidth",79,cf,e3,d7),
	HX_("get_maxVisibleWidth",0f,5c,0f,78),
	HX_("set_maxVisibleWidth",1b,4f,ac,b4),
	HX_("_actualVisibleWidth",01,88,b0,0d),
	HX_("_explicitVisibleWidth",27,67,60,49),
	HX_("get_visibleWidth",bd,bc,86,44),
	HX_("set_visibleWidth",31,aa,c8,9a),
	HX_("_actualMinVisibleHeight",54,23,73,e9),
	HX_("_explicitMinVisibleHeight",7a,8d,38,65),
	HX_("get_minVisibleHeight",10,66,c8,58),
	HX_("set_minVisibleHeight",84,1d,80,25),
	HX_("_maxVisibleHeight",14,33,c1,c5),
	HX_("get_maxVisibleHeight",be,a9,b0,4b),
	HX_("set_maxVisibleHeight",32,61,68,18),
	HX_("_actualVisibleHeight",8c,f1,15,a3),
	HX_("_explicitVisibleHeight",a6,53,49,a1),
	HX_("get_visibleHeight",50,e1,ad,67),
	HX_("set_visibleHeight",5c,b9,1b,8b),
	HX_("_scrollX",2c,8d,90,6a),
	HX_("get_scrollX",c2,93,d2,b6),
	HX_("set_scrollX",ce,9a,3f,c1),
	HX_("_scrollY",2d,8d,90,6a),
	HX_("get_scrollY",c3,93,d2,b6),
	HX_("set_scrollY",cf,9a,3f,c1),
	HX_("_snapPositionsX",f7,64,de,6e),
	HX_("get_snapPositionsX",21,fd,17,c1),
	HX_("_snapPositionsY",f8,64,de,6e),
	HX_("get_snapPositionsY",22,fd,17,c1),
	HX_("refreshViewPortBounds",d6,72,b8,b5),
	HX_("handleCustomLayout",03,b1,70,a6),
	HX_("handleLayoutResult",ef,92,e3,71),
	::String(null()) };

::hx::Class LayoutViewPort_obj::__mClass;

void LayoutViewPort_obj::__register()
{
	LayoutViewPort_obj _hx_dummy;
	LayoutViewPort_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.supportClasses.LayoutViewPort",6d,71,e5,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LayoutViewPort_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LayoutViewPort_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutViewPort_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutViewPort_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses
