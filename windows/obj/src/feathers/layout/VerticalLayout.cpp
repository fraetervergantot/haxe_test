#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalAlign
#include <feathers/layout/HorizontalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#include <feathers/layout/LayoutBoundsResult.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayout
#include <feathers/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayoutData
#include <feathers/layout/VerticalLayoutData.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5975719ac55134c6_31_new,"feathers.layout.VerticalLayout","new",0x7288d718,"feathers.layout.VerticalLayout.new","feathers/layout/VerticalLayout.hx",31,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_60_get_paddingTop,"feathers.layout.VerticalLayout","get_paddingTop",0xee0f09d5,"feathers.layout.VerticalLayout.get_paddingTop","feathers/layout/VerticalLayout.hx",60,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_63_set_paddingTop,"feathers.layout.VerticalLayout","set_paddingTop",0x0e2ef249,"feathers.layout.VerticalLayout.set_paddingTop","feathers/layout/VerticalLayout.hx",63,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_91_get_paddingRight,"feathers.layout.VerticalLayout","get_paddingRight",0xac79ff1c,"feathers.layout.VerticalLayout.get_paddingRight","feathers/layout/VerticalLayout.hx",91,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_94_set_paddingRight,"feathers.layout.VerticalLayout","set_paddingRight",0x02bbec90,"feathers.layout.VerticalLayout.set_paddingRight","feathers/layout/VerticalLayout.hx",94,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_122_get_paddingBottom,"feathers.layout.VerticalLayout","get_paddingBottom",0x5597cbab,"feathers.layout.VerticalLayout.get_paddingBottom","feathers/layout/VerticalLayout.hx",122,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_125_set_paddingBottom,"feathers.layout.VerticalLayout","set_paddingBottom",0x7905a3b7,"feathers.layout.VerticalLayout.set_paddingBottom","feathers/layout/VerticalLayout.hx",125,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_153_get_paddingLeft,"feathers.layout.VerticalLayout","get_paddingLeft",0x59c83cc7,"feathers.layout.VerticalLayout.get_paddingLeft","feathers/layout/VerticalLayout.hx",153,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_156_set_paddingLeft,"feathers.layout.VerticalLayout","set_paddingLeft",0x5593b9d3,"feathers.layout.VerticalLayout.set_paddingLeft","feathers/layout/VerticalLayout.hx",156,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_187_get_gap,"feathers.layout.VerticalLayout","get_gap",0xb0ae0865,"feathers.layout.VerticalLayout.get_gap","feathers/layout/VerticalLayout.hx",187,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_190_set_gap,"feathers.layout.VerticalLayout","set_gap",0xa3af9971,"feathers.layout.VerticalLayout.set_gap","feathers/layout/VerticalLayout.hx",190,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_221_get_minGap,"feathers.layout.VerticalLayout","get_minGap",0xfcc61ab5,"feathers.layout.VerticalLayout.get_minGap","feathers/layout/VerticalLayout.hx",221,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_224_set_minGap,"feathers.layout.VerticalLayout","set_minGap",0x0043b929,"feathers.layout.VerticalLayout.set_minGap","feathers/layout/VerticalLayout.hx",224,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_257_get_horizontalAlign,"feathers.layout.VerticalLayout","get_horizontalAlign",0x41d25510,"feathers.layout.VerticalLayout.get_horizontalAlign","feathers/layout/VerticalLayout.hx",257,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_260_set_horizontalAlign,"feathers.layout.VerticalLayout","set_horizontalAlign",0x7e6f481c,"feathers.layout.VerticalLayout.set_horizontalAlign","feathers/layout/VerticalLayout.hx",260,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_297_get_verticalAlign,"feathers.layout.VerticalLayout","get_verticalAlign",0xea7a827e,"feathers.layout.VerticalLayout.get_verticalAlign","feathers/layout/VerticalLayout.hx",297,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_300_set_verticalAlign,"feathers.layout.VerticalLayout","set_verticalAlign",0x0de85a8a,"feathers.layout.VerticalLayout.set_verticalAlign","feathers/layout/VerticalLayout.hx",300,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_323_get_justifyResetEnabled,"feathers.layout.VerticalLayout","get_justifyResetEnabled",0x5b748731,"feathers.layout.VerticalLayout.get_justifyResetEnabled","feathers/layout/VerticalLayout.hx",323,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_326_set_justifyResetEnabled,"feathers.layout.VerticalLayout","set_justifyResetEnabled",0x5dd5f03d,"feathers.layout.VerticalLayout.set_justifyResetEnabled","feathers/layout/VerticalLayout.hx",326,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_353_get_percentWidthResetEnabled,"feathers.layout.VerticalLayout","get_percentWidthResetEnabled",0x9ffe6d64,"feathers.layout.VerticalLayout.get_percentWidthResetEnabled","feathers/layout/VerticalLayout.hx",353,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_356_set_percentWidthResetEnabled,"feathers.layout.VerticalLayout","set_percentWidthResetEnabled",0xa328b8d8,"feathers.layout.VerticalLayout.set_percentWidthResetEnabled","feathers/layout/VerticalLayout.hx",356,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_383_get_percentHeightResetEnabled,"feathers.layout.VerticalLayout","get_percentHeightResetEnabled",0x8038ffad,"feathers.layout.VerticalLayout.get_percentHeightResetEnabled","feathers/layout/VerticalLayout.hx",383,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_386_set_percentHeightResetEnabled,"feathers.layout.VerticalLayout","set_percentHeightResetEnabled",0x4210b9b9,"feathers.layout.VerticalLayout.set_percentHeightResetEnabled","feathers/layout/VerticalLayout.hx",386,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_405_setPadding,"feathers.layout.VerticalLayout","setPadding",0xdcb63e97,"feathers.layout.VerticalLayout.setPadding","feathers/layout/VerticalLayout.hx",405,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_415_layout,"feathers.layout.VerticalLayout","layout",0xe68aaaf2,"feathers.layout.VerticalLayout.layout","feathers/layout/VerticalLayout.hx",415,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_495_validateItems,"feathers.layout.VerticalLayout","validateItems",0xeae20842,"feathers.layout.VerticalLayout.validateItems","feathers/layout/VerticalLayout.hx",495,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_556_applyHorizontalAlign,"feathers.layout.VerticalLayout","applyHorizontalAlign",0x18bf47bb,"feathers.layout.VerticalLayout.applyHorizontalAlign","feathers/layout/VerticalLayout.hx",556,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_580_applyVerticalAlign,"feathers.layout.VerticalLayout","applyVerticalAlign",0x0f1ae469,"feathers.layout.VerticalLayout.applyVerticalAlign","feathers/layout/VerticalLayout.hx",580,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_622_applyPercentWidth,"feathers.layout.VerticalLayout","applyPercentWidth",0xd060e847,"feathers.layout.VerticalLayout.applyPercentWidth","feathers/layout/VerticalLayout.hx",622,0xd5e7bd38)
HX_LOCAL_STACK_FRAME(_hx_pos_5975719ac55134c6_669_applyPercentHeight,"feathers.layout.VerticalLayout","applyPercentHeight",0x3ab9ce86,"feathers.layout.VerticalLayout.applyPercentHeight","feathers/layout/VerticalLayout.hx",669,0xd5e7bd38)
namespace feathers{
namespace layout{

void VerticalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_31_new)
HXLINE( 365)		this->_percentHeightResetEnabled = false;
HXLINE( 335)		this->_percentWidthResetEnabled = false;
HXLINE( 309)		this->_justifyResetEnabled = false;
HXLINE( 269)		this->_verticalAlign = ::feathers::layout::VerticalAlign_obj::TOP_dyn();
HXLINE( 233)		this->_horizontalAlign = ::feathers::layout::HorizontalAlign_obj::LEFT_dyn();
HXLINE( 199)		this->_minGap = ((Float)0.0);
HXLINE( 165)		this->_gap = ((Float)0.0);
HXLINE( 134)		this->_paddingLeft = ((Float)0.0);
HXLINE( 103)		this->_paddingBottom = ((Float)0.0);
HXLINE(  72)		this->_paddingRight = ((Float)0.0);
HXLINE(  41)		this->_paddingTop = ((Float)0.0);
HXLINE(  38)		super::__construct(null());
            	}

Dynamic VerticalLayout_obj::__CreateEmpty() { return new VerticalLayout_obj; }

void *VerticalLayout_obj::_hx_vtable = 0;

Dynamic VerticalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalLayout_obj > _hx_result = new VerticalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x253843e6;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_layout_VerticalLayout__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::VerticalLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::VerticalLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::VerticalLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayout_obj::willTrigger,
};

static ::feathers::layout::ILayout_obj _hx_feathers_layout_VerticalLayout__hx_feathers_layout_ILayout= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::VerticalLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::VerticalLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::VerticalLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayout_obj::willTrigger,
	(  ::feathers::layout::LayoutBoundsResult (::hx::Object::*)(::Array< ::Dynamic>, ::feathers::layout::Measurements, ::feathers::layout::LayoutBoundsResult))&::feathers::layout::VerticalLayout_obj::layout,
};

void *VerticalLayout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_layout_VerticalLayout__hx_openfl_events_IEventDispatcher;
		case (int)0x3e135379: return &_hx_feathers_layout_VerticalLayout__hx_feathers_layout_ILayout;
	}
	return super::_hx_getInterface(inHash);
}

Float VerticalLayout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_60_get_paddingTop)
HXDLIN(  60)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_paddingTop,return )

Float VerticalLayout_obj::set_paddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_63_set_paddingTop)
HXLINE(  64)		if ((this->_paddingTop == value)) {
HXLINE(  65)			return this->_paddingTop;
            		}
HXLINE(  67)		this->_paddingTop = value;
HXLINE(  68)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  69)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_paddingTop,return )

Float VerticalLayout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_91_get_paddingRight)
HXDLIN(  91)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_paddingRight,return )

Float VerticalLayout_obj::set_paddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_94_set_paddingRight)
HXLINE(  95)		if ((this->_paddingRight == value)) {
HXLINE(  96)			return this->_paddingRight;
            		}
HXLINE(  98)		this->_paddingRight = value;
HXLINE(  99)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 100)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_paddingRight,return )

Float VerticalLayout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_122_get_paddingBottom)
HXDLIN( 122)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_paddingBottom,return )

Float VerticalLayout_obj::set_paddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_125_set_paddingBottom)
HXLINE( 126)		if ((this->_paddingBottom == value)) {
HXLINE( 127)			return this->_paddingBottom;
            		}
HXLINE( 129)		this->_paddingBottom = value;
HXLINE( 130)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 131)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_paddingBottom,return )

Float VerticalLayout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_153_get_paddingLeft)
HXDLIN( 153)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_paddingLeft,return )

Float VerticalLayout_obj::set_paddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_156_set_paddingLeft)
HXLINE( 157)		if ((this->_paddingLeft == value)) {
HXLINE( 158)			return this->_paddingLeft;
            		}
HXLINE( 160)		this->_paddingLeft = value;
HXLINE( 161)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 162)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_paddingLeft,return )

Float VerticalLayout_obj::get_gap(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_187_get_gap)
HXDLIN( 187)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_gap,return )

Float VerticalLayout_obj::set_gap(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_190_set_gap)
HXLINE( 191)		if ((this->_gap == value)) {
HXLINE( 192)			return this->_gap;
            		}
HXLINE( 194)		this->_gap = value;
HXLINE( 195)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 196)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_gap,return )

Float VerticalLayout_obj::get_minGap(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_221_get_minGap)
HXDLIN( 221)		return this->_minGap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_minGap,return )

Float VerticalLayout_obj::set_minGap(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_224_set_minGap)
HXLINE( 225)		if ((this->_minGap == value)) {
HXLINE( 226)			return this->_minGap;
            		}
HXLINE( 228)		this->_minGap = value;
HXLINE( 229)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 230)		return this->_minGap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_minGap,return )

 ::feathers::layout::HorizontalAlign VerticalLayout_obj::get_horizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_257_get_horizontalAlign)
HXDLIN( 257)		return this->_horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_horizontalAlign,return )

 ::feathers::layout::HorizontalAlign VerticalLayout_obj::set_horizontalAlign( ::feathers::layout::HorizontalAlign value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_260_set_horizontalAlign)
HXLINE( 261)		if (::hx::IsPointerEq( this->_horizontalAlign,value )) {
HXLINE( 262)			return this->_horizontalAlign;
            		}
HXLINE( 264)		this->_horizontalAlign = value;
HXLINE( 265)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 266)		return this->_horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_horizontalAlign,return )

 ::feathers::layout::VerticalAlign VerticalLayout_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_297_get_verticalAlign)
HXDLIN( 297)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_verticalAlign,return )

 ::feathers::layout::VerticalAlign VerticalLayout_obj::set_verticalAlign( ::feathers::layout::VerticalAlign value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_300_set_verticalAlign)
HXLINE( 301)		if (::hx::IsPointerEq( this->_verticalAlign,value )) {
HXLINE( 302)			return this->_verticalAlign;
            		}
HXLINE( 304)		this->_verticalAlign = value;
HXLINE( 305)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 306)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_verticalAlign,return )

bool VerticalLayout_obj::get_justifyResetEnabled(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_323_get_justifyResetEnabled)
HXDLIN( 323)		return this->_justifyResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_justifyResetEnabled,return )

bool VerticalLayout_obj::set_justifyResetEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_326_set_justifyResetEnabled)
HXLINE( 327)		if ((this->_justifyResetEnabled == value)) {
HXLINE( 328)			return this->_justifyResetEnabled;
            		}
HXLINE( 330)		this->_justifyResetEnabled = value;
HXLINE( 331)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 332)		return this->_justifyResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_justifyResetEnabled,return )

bool VerticalLayout_obj::get_percentWidthResetEnabled(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_353_get_percentWidthResetEnabled)
HXDLIN( 353)		return this->_percentWidthResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_percentWidthResetEnabled,return )

bool VerticalLayout_obj::set_percentWidthResetEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_356_set_percentWidthResetEnabled)
HXLINE( 357)		if ((this->_percentWidthResetEnabled == value)) {
HXLINE( 358)			return this->_percentWidthResetEnabled;
            		}
HXLINE( 360)		this->_percentWidthResetEnabled = value;
HXLINE( 361)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 362)		return this->_percentWidthResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_percentWidthResetEnabled,return )

bool VerticalLayout_obj::get_percentHeightResetEnabled(){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_383_get_percentHeightResetEnabled)
HXDLIN( 383)		return this->_percentHeightResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayout_obj,get_percentHeightResetEnabled,return )

bool VerticalLayout_obj::set_percentHeightResetEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_386_set_percentHeightResetEnabled)
HXLINE( 387)		if ((this->_percentHeightResetEnabled == value)) {
HXLINE( 388)			return this->_percentHeightResetEnabled;
            		}
HXLINE( 390)		this->_percentHeightResetEnabled = value;
HXLINE( 391)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 392)		return this->_percentHeightResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,set_percentHeightResetEnabled,return )

void VerticalLayout_obj::setPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_405_setPadding)
HXLINE( 406)		this->set_paddingTop(value);
HXLINE( 407)		this->set_paddingRight(value);
HXLINE( 408)		this->set_paddingBottom(value);
HXLINE( 409)		this->set_paddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayout_obj,setPadding,(void))

 ::feathers::layout::LayoutBoundsResult VerticalLayout_obj::layout(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result){
            	HX_GC_STACKFRAME(&_hx_pos_5975719ac55134c6_415_layout)
HXLINE( 416)		Float adjustedGap = this->_gap;
HXLINE( 417)		bool hasFlexGap = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXLINE( 418)		if (hasFlexGap) {
HXLINE( 419)			adjustedGap = this->_minGap;
            		}
HXLINE( 422)		{
HXLINE( 422)			bool isJustified = ::hx::IsPointerEq( this->_horizontalAlign,::feathers::layout::HorizontalAlign_obj::JUSTIFY_dyn() );
HXDLIN( 422)			 ::Dynamic explicitContentWidth = measurements->width;
HXDLIN( 422)			if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 422)				explicitContentWidth = (explicitContentWidth - (this->_paddingLeft + this->_paddingRight));
            			}
HXDLIN( 422)			 ::Dynamic explicitContentHeight = measurements->height;
HXDLIN( 422)			if (::hx::IsNotNull( explicitContentHeight )) {
HXLINE( 422)				explicitContentHeight = (explicitContentHeight - (this->_paddingTop + this->_paddingBottom));
            			}
HXDLIN( 422)			{
HXLINE( 422)				int _g = 0;
HXDLIN( 422)				while((_g < items->length)){
HXLINE( 422)					 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 422)					_g = (_g + 1);
HXDLIN( 422)					 ::Dynamic percentWidth = null();
HXDLIN( 422)					 ::Dynamic percentHeight = null();
HXDLIN( 422)					if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 422)						::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 422)						if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 422)							continue;
            						}
HXDLIN( 422)						 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXDLIN( 422)						if (::hx::IsNotNull( layoutData )) {
HXLINE( 422)							percentWidth = layoutData->get_percentWidth();
HXDLIN( 422)							percentHeight = layoutData->get_percentHeight();
            						}
            					}
HXDLIN( 422)					if (isJustified) {
HXLINE( 422)						if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 422)							item->set_width(( (Float)(explicitContentWidth) ));
            						}
            						else {
HXLINE( 422)							bool _hx_tmp;
HXDLIN( 422)							if (this->_justifyResetEnabled) {
HXLINE( 422)								_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            							}
            							else {
HXLINE( 422)								_hx_tmp = false;
            							}
HXDLIN( 422)							if (_hx_tmp) {
HXLINE( 422)								::feathers::core::IMeasureObject_obj::resetWidth( ::hx::interface_check(item,0xcfc32883));
            							}
            						}
            					}
            					else {
HXLINE( 422)						if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 422)							if (::hx::IsNotNull( percentWidth )) {
HXLINE( 422)								if (::hx::IsLess( percentWidth,((Float)0.0) )) {
HXLINE( 422)									percentWidth = ((Float)0.0);
            								}
            								else {
HXLINE( 422)									if (::hx::IsGreater( percentWidth,((Float)100.0) )) {
HXLINE( 422)										percentWidth = ((Float)100.0);
            									}
            								}
HXDLIN( 422)								item->set_width((( (Float)(explicitContentWidth) ) * (( (Float)(percentWidth) ) / ((Float)100.0))));
            							}
            						}
            						else {
HXLINE( 422)							bool _hx_tmp;
HXDLIN( 422)							bool _hx_tmp1;
HXDLIN( 422)							if (::hx::IsNotNull( percentWidth )) {
HXLINE( 422)								_hx_tmp1 = this->_percentWidthResetEnabled;
            							}
            							else {
HXLINE( 422)								_hx_tmp1 = false;
            							}
HXDLIN( 422)							if (_hx_tmp1) {
HXLINE( 422)								_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            							}
            							else {
HXLINE( 422)								_hx_tmp = false;
            							}
HXDLIN( 422)							if (_hx_tmp) {
HXLINE( 422)								::feathers::core::IMeasureObject_obj::resetWidth( ::hx::interface_check(item,0xcfc32883));
            							}
            						}
            					}
HXDLIN( 422)					bool _hx_tmp;
HXDLIN( 422)					bool _hx_tmp1;
HXDLIN( 422)					bool _hx_tmp2;
HXDLIN( 422)					if (::hx::IsNotNull( percentHeight )) {
HXLINE( 422)						_hx_tmp2 = this->_percentHeightResetEnabled;
            					}
            					else {
HXLINE( 422)						_hx_tmp2 = false;
            					}
HXDLIN( 422)					if (_hx_tmp2) {
HXLINE( 422)						_hx_tmp1 = ::hx::IsNull( explicitContentHeight );
            					}
            					else {
HXLINE( 422)						_hx_tmp1 = false;
            					}
HXDLIN( 422)					if (_hx_tmp1) {
HXLINE( 422)						_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            					}
            					else {
HXLINE( 422)						_hx_tmp = false;
            					}
HXDLIN( 422)					if (_hx_tmp) {
HXLINE( 422)						::feathers::core::IMeasureObject_obj::resetHeight( ::hx::interface_check(item,0xcfc32883));
            					}
HXDLIN( 422)					if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 422)						::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            					}
HXDLIN( 422)					bool _hx_tmp3;
HXDLIN( 422)					bool _hx_tmp4;
HXDLIN( 422)					if (isJustified) {
HXLINE( 422)						_hx_tmp4 = ::hx::IsNull( explicitContentWidth );
            					}
            					else {
HXLINE( 422)						_hx_tmp4 = false;
            					}
HXDLIN( 422)					if (_hx_tmp4) {
HXLINE( 422)						_hx_tmp3 = ::hx::IsNotNull( measurements->maxWidth );
            					}
            					else {
HXLINE( 422)						_hx_tmp3 = false;
            					}
HXDLIN( 422)					if (_hx_tmp3) {
HXLINE( 422)						Float maxExplicitContentWidth = ((( (Float)(measurements->maxWidth) ) - this->_paddingLeft) - this->_paddingRight);
HXDLIN( 422)						if ((item->get_width() > maxExplicitContentWidth)) {
HXLINE( 422)							item->set_width(maxExplicitContentWidth);
HXDLIN( 422)							if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 422)								::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 423)		this->applyPercentHeight(items,measurements->height,measurements->minHeight,measurements->maxHeight,adjustedGap);
HXLINE( 425)		Float contentWidth = ((Float)0.0);
HXLINE( 426)		Float contentHeight = this->_paddingTop;
HXLINE( 427)		{
HXLINE( 427)			int _g1 = 0;
HXDLIN( 427)			while((_g1 < items->length)){
HXLINE( 427)				 ::openfl::display::DisplayObject item = items->__get(_g1).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 427)				_g1 = (_g1 + 1);
HXLINE( 428)				::Dynamic layoutObject = null();
HXLINE( 429)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 430)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 431)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 432)						continue;
            					}
            				}
HXLINE( 435)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 436)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 438)				if ((contentWidth < item->get_width())) {
HXLINE( 439)					contentWidth = item->get_width();
            				}
HXLINE( 441)				item->set_y(contentHeight);
HXLINE( 442)				contentHeight = (contentHeight + (item->get_height() + adjustedGap));
            			}
            		}
HXLINE( 444)		Float maxItemWidth = contentWidth;
HXLINE( 445)		contentWidth = (contentWidth + (this->_paddingLeft + this->_paddingRight));
HXLINE( 446)		contentHeight = (contentHeight + this->_paddingBottom);
HXLINE( 447)		if ((items->length > 0)) {
HXLINE( 448)			contentHeight = (contentHeight - adjustedGap);
            		}
HXLINE( 451)		Float viewPortWidth = contentWidth;
HXLINE( 452)		if (::hx::IsNotNull( measurements->width )) {
HXLINE( 453)			viewPortWidth = ( (Float)(measurements->width) );
            		}
            		else {
HXLINE( 455)			bool _hx_tmp;
HXDLIN( 455)			if (::hx::IsNotNull( measurements->minWidth )) {
HXLINE( 455)				_hx_tmp = ::hx::IsLess( viewPortWidth,measurements->minWidth );
            			}
            			else {
HXLINE( 455)				_hx_tmp = false;
            			}
HXDLIN( 455)			if (_hx_tmp) {
HXLINE( 456)				viewPortWidth = ( (Float)(measurements->minWidth) );
            			}
            			else {
HXLINE( 457)				bool _hx_tmp;
HXDLIN( 457)				if (::hx::IsNotNull( measurements->maxWidth )) {
HXLINE( 457)					_hx_tmp = ::hx::IsGreater( viewPortWidth,measurements->maxWidth );
            				}
            				else {
HXLINE( 457)					_hx_tmp = false;
            				}
HXDLIN( 457)				if (_hx_tmp) {
HXLINE( 458)					viewPortWidth = ( (Float)(measurements->maxWidth) );
            				}
            			}
            		}
HXLINE( 461)		Float viewPortHeight = contentHeight;
HXLINE( 462)		if (::hx::IsNotNull( measurements->height )) {
HXLINE( 463)			viewPortHeight = ( (Float)(measurements->height) );
            		}
            		else {
HXLINE( 465)			bool _hx_tmp;
HXDLIN( 465)			if (::hx::IsNotNull( measurements->minHeight )) {
HXLINE( 465)				_hx_tmp = ::hx::IsLess( viewPortHeight,measurements->minHeight );
            			}
            			else {
HXLINE( 465)				_hx_tmp = false;
            			}
HXDLIN( 465)			if (_hx_tmp) {
HXLINE( 466)				viewPortHeight = ( (Float)(measurements->minHeight) );
            			}
            			else {
HXLINE( 467)				bool _hx_tmp;
HXDLIN( 467)				if (::hx::IsNotNull( measurements->maxHeight )) {
HXLINE( 467)					_hx_tmp = ::hx::IsGreater( viewPortHeight,measurements->maxHeight );
            				}
            				else {
HXLINE( 467)					_hx_tmp = false;
            				}
HXDLIN( 467)				if (_hx_tmp) {
HXLINE( 468)					viewPortHeight = ( (Float)(measurements->maxHeight) );
            				}
            			}
            		}
HXLINE( 472)		this->applyPercentWidth(items,viewPortWidth);
HXLINE( 473)		{
HXLINE( 473)			int _g2 = 0;
HXDLIN( 473)			while((_g2 < items->length)){
HXLINE( 473)				 ::openfl::display::DisplayObject item = items->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 473)				_g2 = (_g2 + 1);
HXDLIN( 473)				::Dynamic layoutObject = null();
HXDLIN( 473)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 473)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 473)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 473)						continue;
            					}
            				}
HXDLIN( 473)				switch((int)(this->_horizontalAlign->_hx_getIndex())){
            					case (int)0: {
HXLINE( 473)						item->set_x(this->_paddingLeft);
            					}
            					break;
            					case (int)1: {
HXLINE( 473)						Float _hx_tmp = this->_paddingLeft;
HXDLIN( 473)						Float _hx_tmp1 = this->_paddingLeft;
HXDLIN( 473)						Float _hx_tmp2 = ((viewPortWidth - this->_paddingLeft) - this->_paddingRight);
HXDLIN( 473)						item->set_x(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_width()) / ((Float)2.0)))));
            					}
            					break;
            					case (int)2: {
HXLINE( 473)						Float _hx_tmp = this->_paddingLeft;
HXDLIN( 473)						Float _hx_tmp1 = (this->_paddingLeft + ((viewPortWidth - this->_paddingLeft) - this->_paddingRight));
HXDLIN( 473)						item->set_x(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_width())));
            					}
            					break;
            					case (int)3: {
HXLINE( 473)						item->set_x(this->_paddingLeft);
HXDLIN( 473)						item->set_width(((viewPortWidth - this->_paddingLeft) - this->_paddingRight));
            					}
            					break;
            				}
            			}
            		}
HXLINE( 474)		{
HXLINE( 474)			Float contentHeight1 = ((contentHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 474)			Float alignOffset = ((Float)0.0);
HXDLIN( 474)			Float gapOffset = ((Float)0.0);
HXDLIN( 474)			Float maxAlignmentHeight = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 474)			Float adjustedGap1 = this->_gap;
HXDLIN( 474)			bool hasFlexGap1 = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXDLIN( 474)			if (hasFlexGap1) {
HXLINE( 474)				adjustedGap1 = this->_minGap;
HXDLIN( 474)				bool _hx_tmp;
HXDLIN( 474)				if ((items->length > 1)) {
HXLINE( 474)					_hx_tmp = (maxAlignmentHeight > contentHeight1);
            				}
            				else {
HXLINE( 474)					_hx_tmp = false;
            				}
HXDLIN( 474)				if (_hx_tmp) {
HXLINE( 474)					adjustedGap1 = (adjustedGap1 + ((maxAlignmentHeight - contentHeight1) / ( (Float)((items->length - 1)) )));
            				}
HXDLIN( 474)				gapOffset = (adjustedGap1 - this->_minGap);
            			}
            			else {
HXLINE( 474)				switch((int)(this->_verticalAlign->_hx_getIndex())){
            					case (int)0: {
HXLINE( 474)						alignOffset = ((Float)0.0);
            					}
            					break;
            					case (int)1: {
HXLINE( 474)						alignOffset = ((maxAlignmentHeight - contentHeight1) / ((Float)2.0));
            					}
            					break;
            					case (int)2: {
HXLINE( 474)						alignOffset = (maxAlignmentHeight - contentHeight1);
            					}
            					break;
            					default:{
HXLINE( 474)						HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown vertical align: ",77,68,f9,89) + ::Std_obj::string(this->_verticalAlign))));
            					}
            				}
HXDLIN( 474)				if ((alignOffset < ((Float)0.0))) {
HXLINE( 474)					alignOffset = ((Float)0.0);
            				}
            			}
HXDLIN( 474)			bool _hx_tmp;
HXDLIN( 474)			if ((alignOffset == ((Float)0.0))) {
HXLINE( 474)				_hx_tmp = (gapOffset == ((Float)0.0));
            			}
            			else {
HXLINE( 474)				_hx_tmp = false;
            			}
HXDLIN( 474)			if (!(_hx_tmp)) {
HXLINE( 474)				Float totalOffset = alignOffset;
HXDLIN( 474)				{
HXLINE( 474)					int _g = 0;
HXDLIN( 474)					while((_g < items->length)){
HXLINE( 474)						 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 474)						_g = (_g + 1);
HXDLIN( 474)						::Dynamic layoutObject = null();
HXDLIN( 474)						if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 474)							layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 474)							if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 474)								continue;
            							}
            						}
HXDLIN( 474)						Float _hx_tmp = this->_paddingTop;
HXDLIN( 474)						item->set_y(::Math_obj::max(_hx_tmp,(item->get_y() + totalOffset)));
HXDLIN( 474)						totalOffset = (totalOffset + gapOffset);
            					}
            				}
            			}
            		}
HXLINE( 476)		if ((contentWidth < viewPortWidth)) {
HXLINE( 477)			contentWidth = viewPortWidth;
            		}
HXLINE( 479)		if ((contentHeight < viewPortHeight)) {
HXLINE( 480)			contentHeight = viewPortHeight;
            		}
HXLINE( 483)		if (::hx::IsNull( result )) {
HXLINE( 484)			result =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
            		}
HXLINE( 486)		result->contentX = ((Float)0.0);
HXLINE( 487)		result->contentY = ((Float)0.0);
HXLINE( 488)		result->contentWidth = contentWidth;
HXLINE( 489)		result->contentHeight = contentHeight;
HXLINE( 490)		result->viewPortWidth = viewPortWidth;
HXLINE( 491)		result->viewPortHeight = viewPortHeight;
HXLINE( 492)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(VerticalLayout_obj,layout,return )

void VerticalLayout_obj::validateItems(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_495_validateItems)
HXLINE( 496)		bool isJustified = ::hx::IsPointerEq( this->_horizontalAlign,::feathers::layout::HorizontalAlign_obj::JUSTIFY_dyn() );
HXLINE( 497)		 ::Dynamic explicitContentWidth = measurements->width;
HXLINE( 498)		if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 499)			explicitContentWidth = (explicitContentWidth - (this->_paddingLeft + this->_paddingRight));
            		}
HXLINE( 501)		 ::Dynamic explicitContentHeight = measurements->height;
HXLINE( 502)		if (::hx::IsNotNull( explicitContentHeight )) {
HXLINE( 503)			explicitContentHeight = (explicitContentHeight - (this->_paddingTop + this->_paddingBottom));
            		}
HXLINE( 505)		{
HXLINE( 505)			int _g = 0;
HXDLIN( 505)			while((_g < items->length)){
HXLINE( 505)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 505)				_g = (_g + 1);
HXLINE( 506)				 ::Dynamic percentWidth = null();
HXLINE( 507)				 ::Dynamic percentHeight = null();
HXLINE( 508)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 509)					::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 510)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 511)						continue;
            					}
HXLINE( 513)					 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXLINE( 514)					if (::hx::IsNotNull( layoutData )) {
HXLINE( 515)						percentWidth = layoutData->get_percentWidth();
HXLINE( 516)						percentHeight = layoutData->get_percentHeight();
            					}
            				}
HXLINE( 519)				if (isJustified) {
HXLINE( 520)					if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 521)						item->set_width(( (Float)(explicitContentWidth) ));
            					}
            					else {
HXLINE( 522)						bool _hx_tmp;
HXDLIN( 522)						if (this->_justifyResetEnabled) {
HXLINE( 522)							_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            						}
            						else {
HXLINE( 522)							_hx_tmp = false;
            						}
HXDLIN( 522)						if (_hx_tmp) {
HXLINE( 523)							::feathers::core::IMeasureObject_obj::resetWidth( ::hx::interface_check(item,0xcfc32883));
            						}
            					}
            				}
            				else {
HXLINE( 525)					if (::hx::IsNotNull( explicitContentWidth )) {
HXLINE( 526)						if (::hx::IsNotNull( percentWidth )) {
HXLINE( 527)							if (::hx::IsLess( percentWidth,((Float)0.0) )) {
HXLINE( 528)								percentWidth = ((Float)0.0);
            							}
            							else {
HXLINE( 529)								if (::hx::IsGreater( percentWidth,((Float)100.0) )) {
HXLINE( 530)									percentWidth = ((Float)100.0);
            								}
            							}
HXLINE( 532)							item->set_width((( (Float)(explicitContentWidth) ) * (( (Float)(percentWidth) ) / ((Float)100.0))));
            						}
            					}
            					else {
HXLINE( 534)						bool _hx_tmp;
HXDLIN( 534)						bool _hx_tmp1;
HXDLIN( 534)						if (::hx::IsNotNull( percentWidth )) {
HXLINE( 534)							_hx_tmp1 = this->_percentWidthResetEnabled;
            						}
            						else {
HXLINE( 534)							_hx_tmp1 = false;
            						}
HXDLIN( 534)						if (_hx_tmp1) {
HXLINE( 534)							_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            						}
            						else {
HXLINE( 534)							_hx_tmp = false;
            						}
HXDLIN( 534)						if (_hx_tmp) {
HXLINE( 535)							::feathers::core::IMeasureObject_obj::resetWidth( ::hx::interface_check(item,0xcfc32883));
            						}
            					}
            				}
HXLINE( 537)				bool _hx_tmp;
HXDLIN( 537)				bool _hx_tmp1;
HXDLIN( 537)				bool _hx_tmp2;
HXDLIN( 537)				if (::hx::IsNotNull( percentHeight )) {
HXLINE( 537)					_hx_tmp2 = this->_percentHeightResetEnabled;
            				}
            				else {
HXLINE( 537)					_hx_tmp2 = false;
            				}
HXDLIN( 537)				if (_hx_tmp2) {
HXLINE( 537)					_hx_tmp1 = ::hx::IsNull( explicitContentHeight );
            				}
            				else {
HXLINE( 537)					_hx_tmp1 = false;
            				}
HXDLIN( 537)				if (_hx_tmp1) {
HXLINE( 537)					_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            				}
            				else {
HXLINE( 537)					_hx_tmp = false;
            				}
HXDLIN( 537)				if (_hx_tmp) {
HXLINE( 538)					::feathers::core::IMeasureObject_obj::resetHeight( ::hx::interface_check(item,0xcfc32883));
            				}
HXLINE( 540)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 541)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 543)				bool _hx_tmp3;
HXDLIN( 543)				bool _hx_tmp4;
HXDLIN( 543)				if (isJustified) {
HXLINE( 543)					_hx_tmp4 = ::hx::IsNull( explicitContentWidth );
            				}
            				else {
HXLINE( 543)					_hx_tmp4 = false;
            				}
HXDLIN( 543)				if (_hx_tmp4) {
HXLINE( 543)					_hx_tmp3 = ::hx::IsNotNull( measurements->maxWidth );
            				}
            				else {
HXLINE( 543)					_hx_tmp3 = false;
            				}
HXDLIN( 543)				if (_hx_tmp3) {
HXLINE( 544)					Float maxExplicitContentWidth = ((( (Float)(measurements->maxWidth) ) - this->_paddingLeft) - this->_paddingRight);
HXLINE( 545)					if ((item->get_width() > maxExplicitContentWidth)) {
HXLINE( 546)						item->set_width(maxExplicitContentWidth);
HXLINE( 547)						if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 548)							::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalLayout_obj,validateItems,(void))

void VerticalLayout_obj::applyHorizontalAlign(::Array< ::Dynamic> items,Float maxItemWidth,Float viewPortWidth){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_556_applyHorizontalAlign)
HXDLIN( 556)		int _g = 0;
HXDLIN( 556)		while((_g < items->length)){
HXDLIN( 556)			 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 556)			_g = (_g + 1);
HXLINE( 557)			::Dynamic layoutObject = null();
HXLINE( 558)			if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 559)				layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 560)				if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 561)					continue;
            				}
            			}
HXLINE( 564)			switch((int)(this->_horizontalAlign->_hx_getIndex())){
            				case (int)0: {
HXLINE( 570)					item->set_x(this->_paddingLeft);
            				}
            				break;
            				case (int)1: {
HXLINE( 568)					Float _hx_tmp = this->_paddingLeft;
HXDLIN( 568)					Float _hx_tmp1 = this->_paddingLeft;
HXDLIN( 568)					Float _hx_tmp2 = ((viewPortWidth - this->_paddingLeft) - this->_paddingRight);
HXDLIN( 568)					item->set_x(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_width()) / ((Float)2.0)))));
            				}
            				break;
            				case (int)2: {
HXLINE( 566)					Float _hx_tmp = this->_paddingLeft;
HXDLIN( 566)					Float _hx_tmp1 = (this->_paddingLeft + ((viewPortWidth - this->_paddingLeft) - this->_paddingRight));
HXDLIN( 566)					item->set_x(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_width())));
            				}
            				break;
            				case (int)3: {
HXLINE( 572)					item->set_x(this->_paddingLeft);
HXLINE( 573)					item->set_width(((viewPortWidth - this->_paddingLeft) - this->_paddingRight));
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VerticalLayout_obj,applyHorizontalAlign,(void))

void VerticalLayout_obj::applyVerticalAlign(::Array< ::Dynamic> items,Float contentHeight,Float viewPortHeight){
            	HX_GC_STACKFRAME(&_hx_pos_5975719ac55134c6_580_applyVerticalAlign)
HXLINE( 581)		Float alignOffset = ((Float)0.0);
HXLINE( 582)		Float gapOffset = ((Float)0.0);
HXLINE( 583)		Float maxAlignmentHeight = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXLINE( 584)		Float adjustedGap = this->_gap;
HXLINE( 585)		bool hasFlexGap = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXLINE( 586)		if (hasFlexGap) {
HXLINE( 587)			adjustedGap = this->_minGap;
HXLINE( 588)			bool _hx_tmp;
HXDLIN( 588)			if ((items->length > 1)) {
HXLINE( 588)				_hx_tmp = (maxAlignmentHeight > contentHeight);
            			}
            			else {
HXLINE( 588)				_hx_tmp = false;
            			}
HXDLIN( 588)			if (_hx_tmp) {
HXLINE( 589)				adjustedGap = (adjustedGap + ((maxAlignmentHeight - contentHeight) / ( (Float)((items->length - 1)) )));
            			}
HXLINE( 591)			gapOffset = (adjustedGap - this->_minGap);
            		}
            		else {
HXLINE( 593)			switch((int)(this->_verticalAlign->_hx_getIndex())){
            				case (int)0: {
HXLINE( 594)					alignOffset = ((Float)0.0);
            				}
            				break;
            				case (int)1: {
HXLINE( 596)					alignOffset = ((maxAlignmentHeight - contentHeight) / ((Float)2.0));
            				}
            				break;
            				case (int)2: {
HXLINE( 595)					alignOffset = (maxAlignmentHeight - contentHeight);
            				}
            				break;
            				default:{
HXLINE( 598)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown vertical align: ",77,68,f9,89) + ::Std_obj::string(this->_verticalAlign))));
            				}
            			}
HXLINE( 600)			if ((alignOffset < ((Float)0.0))) {
HXLINE( 601)				alignOffset = ((Float)0.0);
            			}
            		}
HXLINE( 604)		bool _hx_tmp;
HXDLIN( 604)		if ((alignOffset == ((Float)0.0))) {
HXLINE( 604)			_hx_tmp = (gapOffset == ((Float)0.0));
            		}
            		else {
HXLINE( 604)			_hx_tmp = false;
            		}
HXDLIN( 604)		if (_hx_tmp) {
HXLINE( 605)			return;
            		}
HXLINE( 608)		Float totalOffset = alignOffset;
HXLINE( 609)		{
HXLINE( 609)			int _g = 0;
HXDLIN( 609)			while((_g < items->length)){
HXLINE( 609)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 609)				_g = (_g + 1);
HXLINE( 610)				::Dynamic layoutObject = null();
HXLINE( 611)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 612)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 613)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 614)						continue;
            					}
            				}
HXLINE( 617)				Float _hx_tmp = this->_paddingTop;
HXDLIN( 617)				item->set_y(::Math_obj::max(_hx_tmp,(item->get_y() + totalOffset)));
HXLINE( 618)				totalOffset = (totalOffset + gapOffset);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VerticalLayout_obj,applyVerticalAlign,(void))

void VerticalLayout_obj::applyPercentWidth(::Array< ::Dynamic> items,Float viewPortWidth){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_622_applyPercentWidth)
HXLINE( 623)		Float availableWidth = ((viewPortWidth - this->_paddingLeft) - this->_paddingRight);
HXLINE( 624)		{
HXLINE( 624)			int _g = 0;
HXDLIN( 624)			while((_g < items->length)){
HXLINE( 624)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 624)				_g = (_g + 1);
HXLINE( 625)				if (!(::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >()))) {
HXLINE( 626)					continue;
            				}
HXLINE( 628)				::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 629)				if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 630)					continue;
            				}
HXLINE( 632)				 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXLINE( 633)				if (::hx::IsNull( layoutData )) {
HXLINE( 634)					continue;
            				}
HXLINE( 636)				 ::Dynamic percentWidth = layoutData->get_percentWidth();
HXLINE( 637)				if (::hx::IsNull( percentWidth )) {
HXLINE( 638)					continue;
            				}
HXLINE( 640)				if (::hx::IsLess( percentWidth,((Float)0.0) )) {
HXLINE( 641)					percentWidth = ((Float)0.0);
            				}
            				else {
HXLINE( 642)					if (::hx::IsGreater( percentWidth,((Float)100.0) )) {
HXLINE( 643)						percentWidth = ((Float)100.0);
            					}
            				}
HXLINE( 645)				Float itemWidth = ((availableWidth * ( (Float)(percentWidth) )) / ((Float)100.0));
HXLINE( 646)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 647)					::Dynamic measureItem =  ::hx::interface_check(item,0xcfc32883);
HXLINE( 648)					 ::Dynamic itemMinWidth = ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureItem);
HXLINE( 649)					if (::hx::IsNotNull( itemMinWidth )) {
HXLINE( 652)						if (::hx::IsGreater( itemMinWidth,availableWidth )) {
HXLINE( 653)							itemMinWidth = availableWidth;
            						}
HXLINE( 655)						if (::hx::IsLess( itemWidth,itemMinWidth )) {
HXLINE( 656)							itemWidth = ( (Float)(itemMinWidth) );
            						}
            					}
HXLINE( 659)					 ::Dynamic itemMaxWidth = ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(measureItem);
HXLINE( 660)					bool _hx_tmp;
HXDLIN( 660)					if (::hx::IsNotNull( itemMaxWidth )) {
HXLINE( 660)						_hx_tmp = ::hx::IsGreater( itemWidth,itemMaxWidth );
            					}
            					else {
HXLINE( 660)						_hx_tmp = false;
            					}
HXDLIN( 660)					if (_hx_tmp) {
HXLINE( 661)						itemWidth = ( (Float)(itemMaxWidth) );
            					}
            				}
HXLINE( 664)				item->set_width(itemWidth);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalLayout_obj,applyPercentWidth,(void))

void VerticalLayout_obj::applyPercentHeight(::Array< ::Dynamic> items, ::Dynamic explicitHeight, ::Dynamic explicitMinHeight, ::Dynamic explicitMaxHeight,Float adjustedGap){
            	HX_STACKFRAME(&_hx_pos_5975719ac55134c6_669_applyPercentHeight)
HXLINE( 670)		::Array< ::Dynamic> pendingItems = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 671)		Float totalMeasuredHeight = ((Float)0.0);
HXLINE( 672)		Float totalMinHeight = ((Float)0.0);
HXLINE( 673)		Float totalPercentHeight = ((Float)0.0);
HXLINE( 674)		{
HXLINE( 674)			int _g = 0;
HXDLIN( 674)			while((_g < items->length)){
HXLINE( 674)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 674)				_g = (_g + 1);
HXLINE( 675)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 676)					::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 677)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 678)						continue;
            					}
HXLINE( 680)					 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXLINE( 681)					if (::hx::IsNotNull( layoutData )) {
HXLINE( 682)						 ::Dynamic percentHeight = layoutData->get_percentHeight();
HXLINE( 683)						if (::hx::IsNotNull( percentHeight )) {
HXLINE( 684)							if (::hx::IsLess( percentHeight,((Float)0.0) )) {
HXLINE( 685)								percentHeight = ((Float)0.0);
            							}
HXLINE( 687)							if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 688)								::Dynamic measureItem = layoutItem;
HXLINE( 689)								totalMinHeight = (totalMinHeight + ::feathers::core::IMeasureObject_obj::get_minHeight(measureItem));
            							}
HXLINE( 691)							totalPercentHeight = (totalPercentHeight + percentHeight);
HXLINE( 692)							totalMeasuredHeight = (totalMeasuredHeight + adjustedGap);
HXLINE( 693)							pendingItems->push(layoutItem);
HXLINE( 694)							continue;
            						}
            					}
            				}
HXLINE( 698)				totalMeasuredHeight = (totalMeasuredHeight + (item->get_height() + adjustedGap));
            			}
            		}
HXLINE( 700)		totalMeasuredHeight = (totalMeasuredHeight - adjustedGap);
HXLINE( 701)		totalMeasuredHeight = (totalMeasuredHeight + (this->_paddingTop + this->_paddingBottom));
HXLINE( 702)		if ((totalPercentHeight < ((Float)100.0))) {
HXLINE( 703)			totalPercentHeight = ((Float)100.0);
            		}
HXLINE( 705)		Float remainingHeight = ((Float)0.0);
HXLINE( 706)		if (::hx::IsNotNull( explicitHeight )) {
HXLINE( 707)			remainingHeight = ( (Float)(explicitHeight) );
            		}
            		else {
HXLINE( 709)			remainingHeight = (totalMeasuredHeight + totalMinHeight);
HXLINE( 710)			bool _hx_tmp;
HXDLIN( 710)			if (::hx::IsNotNull( explicitMinHeight )) {
HXLINE( 710)				_hx_tmp = ::hx::IsLess( remainingHeight,explicitMinHeight );
            			}
            			else {
HXLINE( 710)				_hx_tmp = false;
            			}
HXDLIN( 710)			if (_hx_tmp) {
HXLINE( 711)				remainingHeight = ( (Float)(explicitMinHeight) );
            			}
            			else {
HXLINE( 712)				bool _hx_tmp;
HXDLIN( 712)				if (::hx::IsNotNull( explicitMaxHeight )) {
HXLINE( 712)					_hx_tmp = ::hx::IsGreater( remainingHeight,explicitMaxHeight );
            				}
            				else {
HXLINE( 712)					_hx_tmp = false;
            				}
HXDLIN( 712)				if (_hx_tmp) {
HXLINE( 713)					remainingHeight = ( (Float)(explicitMaxHeight) );
            				}
            			}
            		}
HXLINE( 716)		remainingHeight = (remainingHeight - totalMeasuredHeight);
HXLINE( 717)		if ((remainingHeight < ((Float)0.0))) {
HXLINE( 718)			remainingHeight = ((Float)0.0);
            		}
HXLINE( 720)		bool needsAnotherPass = true;
HXLINE( 721)		while(needsAnotherPass){
HXLINE( 722)			needsAnotherPass = false;
HXLINE( 723)			Float percentToPixels = (remainingHeight / totalPercentHeight);
HXLINE( 724)			{
HXLINE( 724)				int _g = 0;
HXDLIN( 724)				while((_g < pendingItems->length)){
HXLINE( 724)					::Dynamic layoutItem = pendingItems->__get(_g);
HXDLIN( 724)					_g = (_g + 1);
HXLINE( 725)					 ::feathers::layout::VerticalLayoutData layoutData = ::hx::TCast<  ::feathers::layout::VerticalLayoutData >::cast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem));
HXLINE( 726)					 ::Dynamic percentHeight = layoutData->get_percentHeight();
HXLINE( 727)					if (::hx::IsLess( percentHeight,((Float)0.0) )) {
HXLINE( 728)						percentHeight = ((Float)0.0);
            					}
HXLINE( 730)					Float itemHeight = (percentToPixels * ( (Float)(percentHeight) ));
HXLINE( 731)					if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 732)						::Dynamic measureItem = layoutItem;
HXLINE( 733)						 ::Dynamic itemMinHeight = ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureItem);
HXLINE( 734)						bool _hx_tmp;
HXDLIN( 734)						if (::hx::IsNotNull( itemMinHeight )) {
HXLINE( 734)							_hx_tmp = ::hx::IsGreater( itemMinHeight,remainingHeight );
            						}
            						else {
HXLINE( 734)							_hx_tmp = false;
            						}
HXDLIN( 734)						if (_hx_tmp) {
HXLINE( 738)							itemMinHeight = remainingHeight;
            						}
HXLINE( 740)						if (::hx::IsLess( itemHeight,itemMinHeight )) {
HXLINE( 741)							itemHeight = ( (Float)(itemMinHeight) );
HXLINE( 742)							remainingHeight = (remainingHeight - itemHeight);
HXLINE( 743)							totalPercentHeight = (totalPercentHeight - ( (Float)(percentHeight) ));
HXLINE( 744)							pendingItems->remove(layoutItem);
HXLINE( 745)							needsAnotherPass = true;
            						}
            					}
HXLINE( 751)					::hx::TCast<  ::openfl::display::DisplayObject >::cast(layoutItem)->set_height(itemHeight);
HXLINE( 752)					if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 756)						::feathers::core::IValidating_obj::validateNow(layoutItem);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(VerticalLayout_obj,applyPercentHeight,(void))


::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new() {
	::hx::ObjectPtr< VerticalLayout_obj > __this = new VerticalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalLayout_obj *__this = (VerticalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalLayout_obj), true, "feathers.layout.VerticalLayout"));
	*(void **)__this = VerticalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalLayout_obj::VerticalLayout_obj()
{
}

void VerticalLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VerticalLayout);
	HX_MARK_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_MARK_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_MARK_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_MARK_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_MARK_MEMBER_NAME(_gap,"_gap");
	HX_MARK_MEMBER_NAME(_minGap,"_minGap");
	HX_MARK_MEMBER_NAME(_horizontalAlign,"_horizontalAlign");
	HX_MARK_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	HX_MARK_MEMBER_NAME(_justifyResetEnabled,"_justifyResetEnabled");
	HX_MARK_MEMBER_NAME(_percentWidthResetEnabled,"_percentWidthResetEnabled");
	HX_MARK_MEMBER_NAME(_percentHeightResetEnabled,"_percentHeightResetEnabled");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VerticalLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_VISIT_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_VISIT_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_VISIT_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_VISIT_MEMBER_NAME(_gap,"_gap");
	HX_VISIT_MEMBER_NAME(_minGap,"_minGap");
	HX_VISIT_MEMBER_NAME(_horizontalAlign,"_horizontalAlign");
	HX_VISIT_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	HX_VISIT_MEMBER_NAME(_justifyResetEnabled,"_justifyResetEnabled");
	HX_VISIT_MEMBER_NAME(_percentWidthResetEnabled,"_percentWidthResetEnabled");
	HX_VISIT_MEMBER_NAME(_percentHeightResetEnabled,"_percentHeightResetEnabled");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VerticalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gap() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { return ::hx::Val( _gap ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"minGap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minGap() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_gap") ) { return ::hx::Val( get_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gap") ) { return ::hx::Val( set_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"_minGap") ) { return ::hx::Val( _minGap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"get_minGap") ) { return ::hx::Val( get_minGap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minGap") ) { return ::hx::Val( set_minGap_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { return ::hx::Val( _paddingTop ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { return ::hx::Val( _paddingLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { return ::hx::Val( _paddingRight ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		if (HX_FIELD_EQ(inName,"validateItems") ) { return ::hx::Val( validateItems_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { return ::hx::Val( _paddingBottom ); }
		if (HX_FIELD_EQ(inName,"_verticalAlign") ) { return ::hx::Val( _verticalAlign ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalAlign() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_horizontalAlign") ) { return ::hx::Val( _horizontalAlign ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPercentWidth") ) { return ::hx::Val( applyPercentWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyVerticalAlign") ) { return ::hx::Val( applyVerticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPercentHeight") ) { return ::hx::Val( applyPercentHeight_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return ::hx::Val( get_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return ::hx::Val( set_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"justifyResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justifyResetEnabled() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justifyResetEnabled") ) { return ::hx::Val( _justifyResetEnabled ); }
		if (HX_FIELD_EQ(inName,"applyHorizontalAlign") ) { return ::hx::Val( applyHorizontalAlign_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_justifyResetEnabled") ) { return ::hx::Val( get_justifyResetEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_justifyResetEnabled") ) { return ::hx::Val( set_justifyResetEnabled_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"percentWidthResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentWidthResetEnabled() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_percentWidthResetEnabled") ) { return ::hx::Val( _percentWidthResetEnabled ); }
		if (HX_FIELD_EQ(inName,"percentHeightResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentHeightResetEnabled() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_percentHeightResetEnabled") ) { return ::hx::Val( _percentHeightResetEnabled ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_percentWidthResetEnabled") ) { return ::hx::Val( get_percentWidthResetEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentWidthResetEnabled") ) { return ::hx::Val( set_percentWidthResetEnabled_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_percentHeightResetEnabled") ) { return ::hx::Val( get_percentHeightResetEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentHeightResetEnabled") ) { return ::hx::Val( set_percentHeightResetEnabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VerticalLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gap(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { _gap=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"minGap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minGap(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_minGap") ) { _minGap=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { _paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { _paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { _paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast<  ::feathers::layout::VerticalAlign >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { _paddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_verticalAlign") ) { _verticalAlign=inValue.Cast<  ::feathers::layout::VerticalAlign >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalAlign(inValue.Cast<  ::feathers::layout::HorizontalAlign >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_horizontalAlign") ) { _horizontalAlign=inValue.Cast<  ::feathers::layout::HorizontalAlign >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justifyResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_justifyResetEnabled(inValue.Cast< bool >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justifyResetEnabled") ) { _justifyResetEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"percentWidthResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentWidthResetEnabled(inValue.Cast< bool >()) ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_percentWidthResetEnabled") ) { _percentWidthResetEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeightResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentHeightResetEnabled(inValue.Cast< bool >()) ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_percentHeightResetEnabled") ) { _percentHeightResetEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_paddingTop",63,ca,8f,0c));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("_paddingRight",2a,7f,16,fd));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("_paddingBottom",dd,57,eb,8d));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("_paddingLeft",79,f8,ef,eb));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("_gap",17,c2,19,3f));
	outFields->push(HX_("gap",16,7d,4e,00));
	outFields->push(HX_("_minGap",43,fc,5b,c1));
	outFields->push(HX_("minGap",a4,ea,e4,52));
	outFields->push(HX_("_horizontalAlign",c2,d1,46,df));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("_verticalAlign",b0,0e,ce,22));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	outFields->push(HX_("_justifyResetEnabled",e3,44,2a,f0));
	outFields->push(HX_("justifyResetEnabled",e2,2d,d1,f0));
	outFields->push(HX_("_percentWidthResetEnabled",72,ca,e1,79));
	outFields->push(HX_("percentWidthResetEnabled",13,e5,32,20));
	outFields->push(HX_("_percentHeightResetEnabled",df,0e,47,4d));
	outFields->push(HX_("percentHeightResetEnabled",1e,41,ed,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VerticalLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_paddingTop),HX_("_paddingTop",63,ca,8f,0c)},
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_paddingRight),HX_("_paddingRight",2a,7f,16,fd)},
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_paddingBottom),HX_("_paddingBottom",dd,57,eb,8d)},
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_paddingLeft),HX_("_paddingLeft",79,f8,ef,eb)},
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_gap),HX_("_gap",17,c2,19,3f)},
	{::hx::fsFloat,(int)offsetof(VerticalLayout_obj,_minGap),HX_("_minGap",43,fc,5b,c1)},
	{::hx::fsObject /*  ::feathers::layout::HorizontalAlign */ ,(int)offsetof(VerticalLayout_obj,_horizontalAlign),HX_("_horizontalAlign",c2,d1,46,df)},
	{::hx::fsObject /*  ::feathers::layout::VerticalAlign */ ,(int)offsetof(VerticalLayout_obj,_verticalAlign),HX_("_verticalAlign",b0,0e,ce,22)},
	{::hx::fsBool,(int)offsetof(VerticalLayout_obj,_justifyResetEnabled),HX_("_justifyResetEnabled",e3,44,2a,f0)},
	{::hx::fsBool,(int)offsetof(VerticalLayout_obj,_percentWidthResetEnabled),HX_("_percentWidthResetEnabled",72,ca,e1,79)},
	{::hx::fsBool,(int)offsetof(VerticalLayout_obj,_percentHeightResetEnabled),HX_("_percentHeightResetEnabled",df,0e,47,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VerticalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalLayout_obj_sMemberFields[] = {
	HX_("_paddingTop",63,ca,8f,0c),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("_paddingRight",2a,7f,16,fd),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("_paddingBottom",dd,57,eb,8d),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("_paddingLeft",79,f8,ef,eb),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("_gap",17,c2,19,3f),
	HX_("get_gap",ad,45,c3,26),
	HX_("set_gap",b9,d6,c4,19),
	HX_("_minGap",43,fc,5b,c1),
	HX_("get_minGap",6d,5a,6c,43),
	HX_("set_minGap",e1,f8,e9,46),
	HX_("_horizontalAlign",c2,d1,46,df),
	HX_("get_horizontalAlign",58,5e,72,7f),
	HX_("set_horizontalAlign",64,51,0f,bc),
	HX_("_verticalAlign",b0,0e,ce,22),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("_justifyResetEnabled",e3,44,2a,f0),
	HX_("get_justifyResetEnabled",79,d4,26,f9),
	HX_("set_justifyResetEnabled",85,3d,88,fb),
	HX_("_percentWidthResetEnabled",72,ca,e1,79),
	HX_("get_percentWidthResetEnabled",1c,fb,86,61),
	HX_("set_percentWidthResetEnabled",90,46,b1,64),
	HX_("_percentHeightResetEnabled",df,0e,47,4d),
	HX_("get_percentHeightResetEnabled",f5,72,2c,16),
	HX_("set_percentHeightResetEnabled",01,2d,04,d8),
	HX_("setPadding",4f,7e,5c,23),
	HX_("layout",aa,ae,b8,58),
	HX_("validateItems",8a,6b,0c,ee),
	HX_("applyHorizontalAlign",73,5d,27,c7),
	HX_("applyVerticalAlign",21,9c,1b,72),
	HX_("applyPercentWidth",8f,8f,d2,d0),
	HX_("applyPercentHeight",3e,86,ba,9d),
	::String(null()) };

::hx::Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	VerticalLayout_obj _hx_dummy;
	VerticalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.VerticalLayout",26,ab,e1,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
