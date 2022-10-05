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
#ifndef INCLUDED_feathers_layout_HorizontalDistributedLayout
#include <feathers/layout/HorizontalDistributedLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_31_new,"feathers.layout.HorizontalDistributedLayout","new",0x0f81acf5,"feathers.layout.HorizontalDistributedLayout.new","feathers/layout/HorizontalDistributedLayout.hx",31,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_60_get_paddingTop,"feathers.layout.HorizontalDistributedLayout","get_paddingTop",0x0c8df718,"feathers.layout.HorizontalDistributedLayout.get_paddingTop","feathers/layout/HorizontalDistributedLayout.hx",60,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_63_set_paddingTop,"feathers.layout.HorizontalDistributedLayout","set_paddingTop",0x2caddf8c,"feathers.layout.HorizontalDistributedLayout.set_paddingTop","feathers/layout/HorizontalDistributedLayout.hx",63,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_91_get_paddingRight,"feathers.layout.HorizontalDistributedLayout","get_paddingRight",0x9a81031f,"feathers.layout.HorizontalDistributedLayout.get_paddingRight","feathers/layout/HorizontalDistributedLayout.hx",91,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_94_set_paddingRight,"feathers.layout.HorizontalDistributedLayout","set_paddingRight",0xf0c2f093,"feathers.layout.HorizontalDistributedLayout.set_paddingRight","feathers/layout/HorizontalDistributedLayout.hx",94,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_122_get_paddingBottom,"feathers.layout.HorizontalDistributedLayout","get_paddingBottom",0xadb44a48,"feathers.layout.HorizontalDistributedLayout.get_paddingBottom","feathers/layout/HorizontalDistributedLayout.hx",122,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_125_set_paddingBottom,"feathers.layout.HorizontalDistributedLayout","set_paddingBottom",0xd1222254,"feathers.layout.HorizontalDistributedLayout.set_paddingBottom","feathers/layout/HorizontalDistributedLayout.hx",125,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_153_get_paddingLeft,"feathers.layout.HorizontalDistributedLayout","get_paddingLeft",0xea58ea24,"feathers.layout.HorizontalDistributedLayout.get_paddingLeft","feathers/layout/HorizontalDistributedLayout.hx",153,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_156_set_paddingLeft,"feathers.layout.HorizontalDistributedLayout","set_paddingLeft",0xe6246730,"feathers.layout.HorizontalDistributedLayout.set_paddingLeft","feathers/layout/HorizontalDistributedLayout.hx",156,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_183_get_gap,"feathers.layout.HorizontalDistributedLayout","get_gap",0xc2c390c2,"feathers.layout.HorizontalDistributedLayout.get_gap","feathers/layout/HorizontalDistributedLayout.hx",183,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_186_set_gap,"feathers.layout.HorizontalDistributedLayout","set_gap",0xb5c521ce,"feathers.layout.HorizontalDistributedLayout.set_gap","feathers/layout/HorizontalDistributedLayout.hx",186,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_212_get_maxItemWidth,"feathers.layout.HorizontalDistributedLayout","get_maxItemWidth",0xe1aa9383,"feathers.layout.HorizontalDistributedLayout.get_maxItemWidth","feathers/layout/HorizontalDistributedLayout.hx",212,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_215_set_maxItemWidth,"feathers.layout.HorizontalDistributedLayout","set_maxItemWidth",0x37ec80f7,"feathers.layout.HorizontalDistributedLayout.set_maxItemWidth","feathers/layout/HorizontalDistributedLayout.hx",215,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_241_get_minItemWidth,"feathers.layout.HorizontalDistributedLayout","get_minItemWidth",0x65b53ed5,"feathers.layout.HorizontalDistributedLayout.get_minItemWidth","feathers/layout/HorizontalDistributedLayout.hx",241,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_244_set_minItemWidth,"feathers.layout.HorizontalDistributedLayout","set_minItemWidth",0xbbf72c49,"feathers.layout.HorizontalDistributedLayout.set_minItemWidth","feathers/layout/HorizontalDistributedLayout.hx",244,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_277_get_verticalAlign,"feathers.layout.HorizontalDistributedLayout","get_verticalAlign",0x4297011b,"feathers.layout.HorizontalDistributedLayout.get_verticalAlign","feathers/layout/HorizontalDistributedLayout.hx",277,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_280_set_verticalAlign,"feathers.layout.HorizontalDistributedLayout","set_verticalAlign",0x6604d927,"feathers.layout.HorizontalDistributedLayout.set_verticalAlign","feathers/layout/HorizontalDistributedLayout.hx",280,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_299_setPadding,"feathers.layout.HorizontalDistributedLayout","setPadding",0xa83e8e5a,"feathers.layout.HorizontalDistributedLayout.setPadding","feathers/layout/HorizontalDistributedLayout.hx",299,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_309_layout,"feathers.layout.HorizontalDistributedLayout","layout",0x11191d35,"feathers.layout.HorizontalDistributedLayout.layout","feathers/layout/HorizontalDistributedLayout.hx",309,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_380_applyDistributedWidth,"feathers.layout.HorizontalDistributedLayout","applyDistributedWidth",0xee03a646,"feathers.layout.HorizontalDistributedLayout.applyDistributedWidth","feathers/layout/HorizontalDistributedLayout.hx",380,0x8066123b)
HX_LOCAL_STACK_FRAME(_hx_pos_389f4cc4c4acc66e_447_applyVerticalAlign,"feathers.layout.HorizontalDistributedLayout","applyVerticalAlign",0xcfed2f2c,"feathers.layout.HorizontalDistributedLayout.applyVerticalAlign","feathers/layout/HorizontalDistributedLayout.hx",447,0x8066123b)
namespace feathers{
namespace layout{

void HorizontalDistributedLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_31_new)
HXLINE( 253)		this->_verticalAlign = ::feathers::layout::VerticalAlign_obj::TOP_dyn();
HXLINE( 224)		this->_minItemWidth = ((Float)0.0);
HXLINE( 195)		this->_maxItemWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 165)		this->_gap = ((Float)0.0);
HXLINE( 134)		this->_paddingLeft = ((Float)0.0);
HXLINE( 103)		this->_paddingBottom = ((Float)0.0);
HXLINE(  72)		this->_paddingRight = ((Float)0.0);
HXLINE(  41)		this->_paddingTop = ((Float)0.0);
HXLINE(  38)		super::__construct(null());
            	}

Dynamic HorizontalDistributedLayout_obj::__CreateEmpty() { return new HorizontalDistributedLayout_obj; }

void *HorizontalDistributedLayout_obj::_hx_vtable = 0;

Dynamic HorizontalDistributedLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalDistributedLayout_obj > _hx_result = new HorizontalDistributedLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalDistributedLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x4e8ffd6f;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_layout_HorizontalDistributedLayout__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalDistributedLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalDistributedLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalDistributedLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalDistributedLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalDistributedLayout_obj::willTrigger,
};

static ::feathers::layout::ILayout_obj _hx_feathers_layout_HorizontalDistributedLayout__hx_feathers_layout_ILayout= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalDistributedLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalDistributedLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalDistributedLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalDistributedLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalDistributedLayout_obj::willTrigger,
	(  ::feathers::layout::LayoutBoundsResult (::hx::Object::*)(::Array< ::Dynamic>, ::feathers::layout::Measurements, ::feathers::layout::LayoutBoundsResult))&::feathers::layout::HorizontalDistributedLayout_obj::layout,
};

void *HorizontalDistributedLayout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_layout_HorizontalDistributedLayout__hx_openfl_events_IEventDispatcher;
		case (int)0x3e135379: return &_hx_feathers_layout_HorizontalDistributedLayout__hx_feathers_layout_ILayout;
	}
	return super::_hx_getInterface(inHash);
}

Float HorizontalDistributedLayout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_60_get_paddingTop)
HXDLIN(  60)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_paddingTop,return )

Float HorizontalDistributedLayout_obj::set_paddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_63_set_paddingTop)
HXLINE(  64)		if ((this->_paddingTop == value)) {
HXLINE(  65)			return this->_paddingTop;
            		}
HXLINE(  67)		this->_paddingTop = value;
HXLINE(  68)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  69)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_paddingTop,return )

Float HorizontalDistributedLayout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_91_get_paddingRight)
HXDLIN(  91)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_paddingRight,return )

Float HorizontalDistributedLayout_obj::set_paddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_94_set_paddingRight)
HXLINE(  95)		if ((this->_paddingRight == value)) {
HXLINE(  96)			return this->_paddingRight;
            		}
HXLINE(  98)		this->_paddingRight = value;
HXLINE(  99)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 100)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_paddingRight,return )

Float HorizontalDistributedLayout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_122_get_paddingBottom)
HXDLIN( 122)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_paddingBottom,return )

Float HorizontalDistributedLayout_obj::set_paddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_125_set_paddingBottom)
HXLINE( 126)		if ((this->_paddingBottom == value)) {
HXLINE( 127)			return this->_paddingBottom;
            		}
HXLINE( 129)		this->_paddingBottom = value;
HXLINE( 130)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 131)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_paddingBottom,return )

Float HorizontalDistributedLayout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_153_get_paddingLeft)
HXDLIN( 153)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_paddingLeft,return )

Float HorizontalDistributedLayout_obj::set_paddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_156_set_paddingLeft)
HXLINE( 157)		if ((this->_paddingLeft == value)) {
HXLINE( 158)			return this->_paddingLeft;
            		}
HXLINE( 160)		this->_paddingLeft = value;
HXLINE( 161)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 162)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_paddingLeft,return )

Float HorizontalDistributedLayout_obj::get_gap(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_183_get_gap)
HXDLIN( 183)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_gap,return )

Float HorizontalDistributedLayout_obj::set_gap(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_186_set_gap)
HXLINE( 187)		if ((this->_gap == value)) {
HXLINE( 188)			return this->_gap;
            		}
HXLINE( 190)		this->_gap = value;
HXLINE( 191)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 192)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_gap,return )

Float HorizontalDistributedLayout_obj::get_maxItemWidth(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_212_get_maxItemWidth)
HXDLIN( 212)		return this->_maxItemWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_maxItemWidth,return )

Float HorizontalDistributedLayout_obj::set_maxItemWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_215_set_maxItemWidth)
HXLINE( 216)		if ((this->_maxItemWidth == value)) {
HXLINE( 217)			return this->_maxItemWidth;
            		}
HXLINE( 219)		this->_maxItemWidth = value;
HXLINE( 220)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 221)		return this->_maxItemWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_maxItemWidth,return )

Float HorizontalDistributedLayout_obj::get_minItemWidth(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_241_get_minItemWidth)
HXDLIN( 241)		return this->_minItemWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_minItemWidth,return )

Float HorizontalDistributedLayout_obj::set_minItemWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_244_set_minItemWidth)
HXLINE( 245)		if ((this->_minItemWidth == value)) {
HXLINE( 246)			return this->_minItemWidth;
            		}
HXLINE( 248)		this->_minItemWidth = value;
HXLINE( 249)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 250)		return this->_minItemWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_minItemWidth,return )

 ::feathers::layout::VerticalAlign HorizontalDistributedLayout_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_277_get_verticalAlign)
HXDLIN( 277)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalDistributedLayout_obj,get_verticalAlign,return )

 ::feathers::layout::VerticalAlign HorizontalDistributedLayout_obj::set_verticalAlign( ::feathers::layout::VerticalAlign value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_280_set_verticalAlign)
HXLINE( 281)		if (::hx::IsPointerEq( this->_verticalAlign,value )) {
HXLINE( 282)			return this->_verticalAlign;
            		}
HXLINE( 284)		this->_verticalAlign = value;
HXLINE( 285)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 286)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,set_verticalAlign,return )

void HorizontalDistributedLayout_obj::setPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_299_setPadding)
HXLINE( 300)		this->set_paddingTop(value);
HXLINE( 301)		this->set_paddingRight(value);
HXLINE( 302)		this->set_paddingBottom(value);
HXLINE( 303)		this->set_paddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalDistributedLayout_obj,setPadding,(void))

 ::feathers::layout::LayoutBoundsResult HorizontalDistributedLayout_obj::layout(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result){
            	HX_GC_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_309_layout)
HXLINE( 310)		this->applyDistributedWidth(items,measurements->width,measurements->minWidth,measurements->maxWidth);
HXLINE( 312)		Float contentWidth = this->_paddingLeft;
HXLINE( 313)		Float contentHeight = ((Float)0.0);
HXLINE( 314)		{
HXLINE( 314)			int _g = 0;
HXDLIN( 314)			while((_g < items->length)){
HXLINE( 314)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 314)				_g = (_g + 1);
HXLINE( 315)				::Dynamic layoutObject = null();
HXLINE( 316)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 317)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 318)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 319)						continue;
            					}
            				}
HXLINE( 322)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 323)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 325)				if ((contentHeight < item->get_height())) {
HXLINE( 326)					contentHeight = item->get_height();
            				}
HXLINE( 328)				item->set_x(contentWidth);
HXLINE( 329)				Float contentWidth1 = item->get_width();
HXDLIN( 329)				contentWidth = (contentWidth + (contentWidth1 + this->_gap));
            			}
            		}
HXLINE( 331)		contentWidth = (contentWidth + this->_paddingRight);
HXLINE( 332)		if ((items->length > 0)) {
HXLINE( 333)			contentWidth = (contentWidth - this->_gap);
            		}
HXLINE( 335)		contentHeight = (contentHeight + (this->_paddingTop + this->_paddingBottom));
HXLINE( 337)		Float viewPortWidth = contentWidth;
HXLINE( 338)		if (::hx::IsNotNull( measurements->width )) {
HXLINE( 339)			viewPortWidth = ( (Float)(measurements->width) );
            		}
            		else {
HXLINE( 341)			bool _hx_tmp;
HXDLIN( 341)			if (::hx::IsNotNull( measurements->minWidth )) {
HXLINE( 341)				_hx_tmp = ::hx::IsLess( viewPortWidth,measurements->minWidth );
            			}
            			else {
HXLINE( 341)				_hx_tmp = false;
            			}
HXDLIN( 341)			if (_hx_tmp) {
HXLINE( 342)				viewPortWidth = ( (Float)(measurements->minWidth) );
            			}
            			else {
HXLINE( 343)				bool _hx_tmp;
HXDLIN( 343)				if (::hx::IsNotNull( measurements->maxWidth )) {
HXLINE( 343)					_hx_tmp = ::hx::IsGreater( viewPortWidth,measurements->maxWidth );
            				}
            				else {
HXLINE( 343)					_hx_tmp = false;
            				}
HXDLIN( 343)				if (_hx_tmp) {
HXLINE( 344)					viewPortWidth = ( (Float)(measurements->maxWidth) );
            				}
            			}
            		}
HXLINE( 347)		Float viewPortHeight = contentHeight;
HXLINE( 348)		if (::hx::IsNotNull( measurements->height )) {
HXLINE( 349)			viewPortHeight = ( (Float)(measurements->height) );
            		}
            		else {
HXLINE( 351)			bool _hx_tmp;
HXDLIN( 351)			if (::hx::IsNotNull( measurements->minHeight )) {
HXLINE( 351)				_hx_tmp = ::hx::IsLess( viewPortHeight,measurements->minHeight );
            			}
            			else {
HXLINE( 351)				_hx_tmp = false;
            			}
HXDLIN( 351)			if (_hx_tmp) {
HXLINE( 352)				viewPortHeight = ( (Float)(measurements->minHeight) );
            			}
            			else {
HXLINE( 353)				bool _hx_tmp;
HXDLIN( 353)				if (::hx::IsNotNull( measurements->maxHeight )) {
HXLINE( 353)					_hx_tmp = ::hx::IsGreater( viewPortHeight,measurements->maxHeight );
            				}
            				else {
HXLINE( 353)					_hx_tmp = false;
            				}
HXDLIN( 353)				if (_hx_tmp) {
HXLINE( 354)					viewPortHeight = ( (Float)(measurements->maxHeight) );
            				}
            			}
            		}
HXLINE( 358)		{
HXLINE( 358)			int _g1 = 0;
HXDLIN( 358)			while((_g1 < items->length)){
HXLINE( 358)				 ::openfl::display::DisplayObject item = items->__get(_g1).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 358)				_g1 = (_g1 + 1);
HXDLIN( 358)				::Dynamic layoutObject = null();
HXDLIN( 358)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 358)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 358)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 358)						continue;
            					}
            				}
HXDLIN( 358)				switch((int)(this->_verticalAlign->_hx_getIndex())){
            					case (int)0: {
HXLINE( 358)						item->set_y(this->_paddingTop);
            					}
            					break;
            					case (int)1: {
HXLINE( 358)						Float _hx_tmp = this->_paddingTop;
HXDLIN( 358)						Float _hx_tmp1 = this->_paddingTop;
HXDLIN( 358)						Float _hx_tmp2 = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 358)						item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_height()) / ((Float)2.0)))));
            					}
            					break;
            					case (int)2: {
HXLINE( 358)						Float _hx_tmp = this->_paddingTop;
HXDLIN( 358)						Float _hx_tmp1 = (this->_paddingTop + ((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
HXDLIN( 358)						item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_height())));
            					}
            					break;
            					case (int)3: {
HXLINE( 358)						item->set_y(this->_paddingTop);
HXDLIN( 358)						item->set_height(((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
            					}
            					break;
            				}
            			}
            		}
HXLINE( 360)		if ((contentWidth < viewPortWidth)) {
HXLINE( 361)			contentWidth = viewPortWidth;
            		}
HXLINE( 363)		if ((contentHeight < viewPortHeight)) {
HXLINE( 364)			contentHeight = viewPortHeight;
            		}
HXLINE( 367)		if (::hx::IsNull( result )) {
HXLINE( 368)			result =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
            		}
HXLINE( 370)		result->contentX = ((Float)0.0);
HXLINE( 371)		result->contentY = ((Float)0.0);
HXLINE( 372)		result->contentWidth = contentWidth;
HXLINE( 373)		result->contentHeight = contentHeight;
HXLINE( 374)		result->viewPortWidth = viewPortWidth;
HXLINE( 375)		result->viewPortHeight = viewPortHeight;
HXLINE( 376)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(HorizontalDistributedLayout_obj,layout,return )

void HorizontalDistributedLayout_obj::applyDistributedWidth(::Array< ::Dynamic> items, ::Dynamic explicitWidth, ::Dynamic explicitMinWidth, ::Dynamic explicitMaxWidth){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_380_applyDistributedWidth)
HXLINE( 381)		Float maxMinWidth = ((Float)0.0);
HXLINE( 382)		Float totalPercentWidth = ((Float)0.0);
HXLINE( 383)		int itemsInLayoutCount = 0;
HXLINE( 384)		{
HXLINE( 384)			int _g = 0;
HXDLIN( 384)			while((_g < items->length)){
HXLINE( 384)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 384)				_g = (_g + 1);
HXLINE( 385)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 386)					::Dynamic layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 387)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 388)						continue;
            					}
            				}
HXLINE( 391)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 392)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 394)				Float itemMinWidth = ((Float)0.0);
HXLINE( 395)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 396)					::Dynamic measureItem =  ::hx::interface_check(item,0xcfc32883);
HXLINE( 397)					itemMinWidth = ::feathers::core::IMeasureObject_obj::get_minWidth(measureItem);
            				}
            				else {
HXLINE( 399)					itemMinWidth = item->get_width();
            				}
HXLINE( 401)				if ((maxMinWidth < itemMinWidth)) {
HXLINE( 402)					maxMinWidth = itemMinWidth;
            				}
HXLINE( 404)				totalPercentWidth = (totalPercentWidth + ((Float)100.0));
HXLINE( 405)				itemsInLayoutCount = (itemsInLayoutCount + 1);
            			}
            		}
HXLINE( 407)		Float remainingWidth = ((Float)0.0);
HXLINE( 408)		if (::hx::IsNotNull( explicitWidth )) {
HXLINE( 409)			remainingWidth = ( (Float)(explicitWidth) );
            		}
            		else {
HXLINE( 411)			remainingWidth = (((this->_paddingLeft + this->_paddingRight) + ((maxMinWidth + this->_gap) * ( (Float)(itemsInLayoutCount) ))) - this->_gap);
HXLINE( 412)			bool _hx_tmp;
HXDLIN( 412)			if (::hx::IsNotNull( explicitMinWidth )) {
HXLINE( 412)				_hx_tmp = ::hx::IsLess( remainingWidth,explicitMinWidth );
            			}
            			else {
HXLINE( 412)				_hx_tmp = false;
            			}
HXDLIN( 412)			if (_hx_tmp) {
HXLINE( 413)				remainingWidth = ( (Float)(explicitMinWidth) );
            			}
            			else {
HXLINE( 414)				bool _hx_tmp;
HXDLIN( 414)				if (::hx::IsNotNull( explicitMaxWidth )) {
HXLINE( 414)					_hx_tmp = ::hx::IsGreater( remainingWidth,explicitMaxWidth );
            				}
            				else {
HXLINE( 414)					_hx_tmp = false;
            				}
HXDLIN( 414)				if (_hx_tmp) {
HXLINE( 415)					remainingWidth = ( (Float)(explicitMaxWidth) );
            				}
            			}
            		}
HXLINE( 418)		remainingWidth = (remainingWidth - ((this->_paddingLeft + this->_paddingRight) + (this->_gap * ( (Float)((itemsInLayoutCount - 1)) ))));
HXLINE( 419)		if ((remainingWidth < ((Float)0.0))) {
HXLINE( 420)			remainingWidth = ((Float)0.0);
            		}
HXLINE( 422)		Float percentToPixels = (remainingWidth / totalPercentWidth);
HXLINE( 423)		{
HXLINE( 423)			int _g1 = 0;
HXDLIN( 423)			while((_g1 < items->length)){
HXLINE( 423)				 ::openfl::display::DisplayObject item = items->__get(_g1).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 423)				_g1 = (_g1 + 1);
HXLINE( 424)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 425)					::Dynamic layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 426)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 427)						continue;
            					}
            				}
HXLINE( 430)				Float itemWidth = (percentToPixels * ((Float)100.0));
HXLINE( 431)				if ((itemWidth < this->_minItemWidth)) {
HXLINE( 432)					itemWidth = this->_minItemWidth;
            				}
            				else {
HXLINE( 433)					if ((itemWidth > this->_maxItemWidth)) {
HXLINE( 434)						itemWidth = this->_maxItemWidth;
            					}
            				}
HXLINE( 436)				item->set_width(itemWidth);
HXLINE( 437)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 441)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(HorizontalDistributedLayout_obj,applyDistributedWidth,(void))

void HorizontalDistributedLayout_obj::applyVerticalAlign(::Array< ::Dynamic> items,Float viewPortHeight){
            	HX_STACKFRAME(&_hx_pos_389f4cc4c4acc66e_447_applyVerticalAlign)
HXDLIN( 447)		int _g = 0;
HXDLIN( 447)		while((_g < items->length)){
HXDLIN( 447)			 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 447)			_g = (_g + 1);
HXLINE( 448)			::Dynamic layoutObject = null();
HXLINE( 449)			if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 450)				layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 451)				if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 452)					continue;
            				}
            			}
HXLINE( 455)			switch((int)(this->_verticalAlign->_hx_getIndex())){
            				case (int)0: {
HXLINE( 461)					item->set_y(this->_paddingTop);
            				}
            				break;
            				case (int)1: {
HXLINE( 459)					Float _hx_tmp = this->_paddingTop;
HXDLIN( 459)					Float _hx_tmp1 = this->_paddingTop;
HXDLIN( 459)					Float _hx_tmp2 = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 459)					item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_height()) / ((Float)2.0)))));
            				}
            				break;
            				case (int)2: {
HXLINE( 457)					Float _hx_tmp = this->_paddingTop;
HXDLIN( 457)					Float _hx_tmp1 = (this->_paddingTop + ((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
HXDLIN( 457)					item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_height())));
            				}
            				break;
            				case (int)3: {
HXLINE( 463)					item->set_y(this->_paddingTop);
HXLINE( 464)					item->set_height(((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalDistributedLayout_obj,applyVerticalAlign,(void))


::hx::ObjectPtr< HorizontalDistributedLayout_obj > HorizontalDistributedLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalDistributedLayout_obj > __this = new HorizontalDistributedLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalDistributedLayout_obj > HorizontalDistributedLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalDistributedLayout_obj *__this = (HorizontalDistributedLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalDistributedLayout_obj), true, "feathers.layout.HorizontalDistributedLayout"));
	*(void **)__this = HorizontalDistributedLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalDistributedLayout_obj::HorizontalDistributedLayout_obj()
{
}

void HorizontalDistributedLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HorizontalDistributedLayout);
	HX_MARK_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_MARK_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_MARK_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_MARK_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_MARK_MEMBER_NAME(_gap,"_gap");
	HX_MARK_MEMBER_NAME(_maxItemWidth,"_maxItemWidth");
	HX_MARK_MEMBER_NAME(_minItemWidth,"_minItemWidth");
	HX_MARK_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HorizontalDistributedLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_VISIT_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_VISIT_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_VISIT_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_VISIT_MEMBER_NAME(_gap,"_gap");
	HX_VISIT_MEMBER_NAME(_maxItemWidth,"_maxItemWidth");
	HX_VISIT_MEMBER_NAME(_minItemWidth,"_minItemWidth");
	HX_VISIT_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HorizontalDistributedLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gap() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { return ::hx::Val( _gap ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_gap") ) { return ::hx::Val( get_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gap") ) { return ::hx::Val( set_gap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { return ::hx::Val( _paddingTop ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { return ::hx::Val( _paddingLeft ); }
		if (HX_FIELD_EQ(inName,"maxItemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxItemWidth() ); }
		if (HX_FIELD_EQ(inName,"minItemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minItemWidth() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { return ::hx::Val( _paddingRight ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"_maxItemWidth") ) { return ::hx::Val( _maxItemWidth ); }
		if (HX_FIELD_EQ(inName,"_minItemWidth") ) { return ::hx::Val( _minItemWidth ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
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
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxItemWidth") ) { return ::hx::Val( get_maxItemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxItemWidth") ) { return ::hx::Val( set_maxItemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minItemWidth") ) { return ::hx::Val( get_minItemWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minItemWidth") ) { return ::hx::Val( set_minItemWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyVerticalAlign") ) { return ::hx::Val( applyVerticalAlign_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"applyDistributedWidth") ) { return ::hx::Val( applyDistributedWidth_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HorizontalDistributedLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gap(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { _gap=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"maxItemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxItemWidth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"minItemWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minItemWidth(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { _paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_maxItemWidth") ) { _maxItemWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minItemWidth") ) { _minItemWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast<  ::feathers::layout::VerticalAlign >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { _paddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_verticalAlign") ) { _verticalAlign=inValue.Cast<  ::feathers::layout::VerticalAlign >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalDistributedLayout_obj::__GetFields(Array< ::String> &outFields)
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
	outFields->push(HX_("_maxItemWidth",8e,0f,40,44));
	outFields->push(HX_("maxItemWidth",af,7c,d1,61));
	outFields->push(HX_("_minItemWidth",e0,ba,4a,c8));
	outFields->push(HX_("minItemWidth",01,28,dc,e5));
	outFields->push(HX_("_verticalAlign",b0,0e,ce,22));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HorizontalDistributedLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_paddingTop),HX_("_paddingTop",63,ca,8f,0c)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_paddingRight),HX_("_paddingRight",2a,7f,16,fd)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_paddingBottom),HX_("_paddingBottom",dd,57,eb,8d)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_paddingLeft),HX_("_paddingLeft",79,f8,ef,eb)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_gap),HX_("_gap",17,c2,19,3f)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_maxItemWidth),HX_("_maxItemWidth",8e,0f,40,44)},
	{::hx::fsFloat,(int)offsetof(HorizontalDistributedLayout_obj,_minItemWidth),HX_("_minItemWidth",e0,ba,4a,c8)},
	{::hx::fsObject /*  ::feathers::layout::VerticalAlign */ ,(int)offsetof(HorizontalDistributedLayout_obj,_verticalAlign),HX_("_verticalAlign",b0,0e,ce,22)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HorizontalDistributedLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalDistributedLayout_obj_sMemberFields[] = {
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
	HX_("_maxItemWidth",8e,0f,40,44),
	HX_("get_maxItemWidth",38,69,70,66),
	HX_("set_maxItemWidth",ac,56,b2,bc),
	HX_("_minItemWidth",e0,ba,4a,c8),
	HX_("get_minItemWidth",8a,14,7b,ea),
	HX_("set_minItemWidth",fe,01,bd,40),
	HX_("_verticalAlign",b0,0e,ce,22),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("setPadding",4f,7e,5c,23),
	HX_("layout",aa,ae,b8,58),
	HX_("applyDistributedWidth",71,00,92,61),
	HX_("applyVerticalAlign",21,9c,1b,72),
	::String(null()) };

::hx::Class HorizontalDistributedLayout_obj::__mClass;

void HorizontalDistributedLayout_obj::__register()
{
	HorizontalDistributedLayout_obj _hx_dummy;
	HorizontalDistributedLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.HorizontalDistributedLayout",83,0e,a9,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalDistributedLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalDistributedLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalDistributedLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalDistributedLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
