#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_174_new,"feathers.events.TriggerEvent","new",0x737dc94b,"feathers.events.TriggerEvent.new","feathers/events/TriggerEvent.hx",174,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_307_clone,"feathers.events.TriggerEvent","clone",0x54ad5d08,"feathers.events.TriggerEvent.clone","feathers/events/TriggerEvent.hx",307,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_61_dispatchFromMouseEvent,"feathers.events.TriggerEvent","dispatchFromMouseEvent",0x9d6a280e,"feathers.events.TriggerEvent.dispatchFromMouseEvent","feathers/events/TriggerEvent.hx",61,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_83_dispatchFromTouchEvent,"feathers.events.TriggerEvent","dispatchFromTouchEvent",0x792e1834,"feathers.events.TriggerEvent.dispatchFromTouchEvent","feathers/events/TriggerEvent.hx",83,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_100_fromMouseEvent,"feathers.events.TriggerEvent","fromMouseEvent",0x5420b6b4,"feathers.events.TriggerEvent.fromMouseEvent","feathers/events/TriggerEvent.hx",100,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_138_fromTouchEvent,"feathers.events.TriggerEvent","fromTouchEvent",0x2fe4a6da,"feathers.events.TriggerEvent.fromTouchEvent","feathers/events/TriggerEvent.hx",138,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_39_boot,"feathers.events.TriggerEvent","boot",0x92ab58e7,"feathers.events.TriggerEvent.boot","feathers/events/TriggerEvent.hx",39,0x10cd1a65)
HX_LOCAL_STACK_FRAME(_hx_pos_9ff7555387fc5f6c_42_boot,"feathers.events.TriggerEvent","boot",0x92ab58e7,"feathers.events.TriggerEvent.boot","feathers/events/TriggerEvent.hx",42,0x10cd1a65)
namespace feathers{
namespace events{

void TriggerEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		int touchPointID = __o_touchPointID.Default(0);
            		bool isPrimaryTouchPoint = __o_isPrimaryTouchPoint.Default(false);
            		Float localX = __o_localX.Default(((Float)0.0));
            		Float localY = __o_localY.Default(((Float)0.0));
            		Float sizeX = __o_sizeX.Default(((Float)0.0));
            		Float sizeY = __o_sizeY.Default(((Float)0.0));
            		Float pressure = __o_pressure.Default(((Float)1.0));
            		bool ctrlKey = __o_ctrlKey.Default(false);
            		bool altKey = __o_altKey.Default(false);
            		bool shiftKey = __o_shiftKey.Default(false);
            		bool commandKey = __o_commandKey.Default(false);
            	HX_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_174_new)
HXLINE( 175)		super::__construct(type,bubbles,cancelable);
HXLINE( 176)		this->touchPointID = touchPointID;
HXLINE( 177)		this->isPrimaryTouchPoint = isPrimaryTouchPoint;
HXLINE( 178)		this->localX = localX;
HXLINE( 179)		this->localY = localY;
HXLINE( 180)		this->stageX = ::Math_obj::NaN;
HXLINE( 181)		this->stageY = ::Math_obj::NaN;
HXLINE( 182)		this->sizeX = sizeX;
HXLINE( 183)		this->sizeY = sizeY;
HXLINE( 184)		this->pressure = pressure;
HXLINE( 185)		this->relatedObject = relatedObject;
HXLINE( 186)		this->ctrlKey = ctrlKey;
HXLINE( 187)		this->altKey = altKey;
HXLINE( 188)		this->shiftKey = shiftKey;
HXLINE( 189)		this->commandKey = commandKey;
            	}

Dynamic TriggerEvent_obj::__CreateEmpty() { return new TriggerEvent_obj; }

void *TriggerEvent_obj::_hx_vtable = 0;

Dynamic TriggerEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TriggerEvent_obj > _hx_result = new TriggerEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return _hx_result;
}

bool TriggerEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x67fffeb3;
	}
}

 ::openfl::events::Event TriggerEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_307_clone)
HXLINE( 308)		 ::feathers::events::TriggerEvent result =  ::feathers::events::TriggerEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->touchPointID,this->isPrimaryTouchPoint,this->localX,this->localY,this->sizeX,this->sizeY,this->pressure,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->commandKey);
HXLINE( 310)		result->stageX = this->stageX;
HXLINE( 311)		result->stageY = this->stageY;
HXLINE( 312)		return result;
            	}


::String TriggerEvent_obj::TRIGGER;

 ::lime::utils::ObjectPool TriggerEvent_obj::_pool;

bool TriggerEvent_obj::dispatchFromMouseEvent(::Dynamic dispatcher, ::openfl::events::MouseEvent mouseEvent){
            	HX_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_61_dispatchFromMouseEvent)
HXLINE(  66)		 ::feathers::events::TriggerEvent event = ::feathers::events::TriggerEvent_obj::_pool->get().StaticCast<  ::feathers::events::TriggerEvent >();
HXLINE(  67)		event = ::feathers::events::TriggerEvent_obj::fromMouseEvent(mouseEvent,event);
HXLINE(  68)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  69)		::feathers::events::TriggerEvent_obj::_pool->release(event);
HXLINE(  70)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TriggerEvent_obj,dispatchFromMouseEvent,return )

bool TriggerEvent_obj::dispatchFromTouchEvent(::Dynamic dispatcher, ::openfl::events::TouchEvent touchEvent){
            	HX_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_83_dispatchFromTouchEvent)
HXLINE(  88)		 ::feathers::events::TriggerEvent event = ::feathers::events::TriggerEvent_obj::_pool->get().StaticCast<  ::feathers::events::TriggerEvent >();
HXLINE(  89)		event = ::feathers::events::TriggerEvent_obj::fromTouchEvent(touchEvent,event);
HXLINE(  90)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  91)		::feathers::events::TriggerEvent_obj::_pool->release(event);
HXLINE(  92)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TriggerEvent_obj,dispatchFromTouchEvent,return )

 ::feathers::events::TriggerEvent TriggerEvent_obj::fromMouseEvent( ::openfl::events::MouseEvent event, ::feathers::events::TriggerEvent existing){
            	HX_GC_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_100_fromMouseEvent)
HXLINE( 101)		if ((event->type != HX_("click",48,7c,5e,48))) {
HXLINE( 102)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("TriggerEvent.fromMouseEvent() requires MouseEvent.CLICK",2d,e1,42,4f)));
            		}
HXLINE( 105)		if (::hx::IsNotNull( existing )) {
HXLINE( 106)			existing->type = HX_("trigger",38,55,df,25);
HXLINE( 107)			existing->bubbles = false;
HXLINE( 108)			existing->cancelable = event->cancelable;
HXLINE( 109)			existing->touchPointID = -1;
HXLINE( 110)			existing->isPrimaryTouchPoint = false;
HXLINE( 111)			existing->localX = event->localX;
HXLINE( 112)			existing->localY = event->localY;
HXLINE( 113)			existing->stageX = event->stageX;
HXLINE( 114)			existing->stageY = event->stageY;
HXLINE( 115)			existing->sizeX = ((Float)0.0);
HXLINE( 116)			existing->sizeY = ((Float)0.0);
HXLINE( 117)			existing->pressure = ((Float)1.0);
HXLINE( 118)			existing->relatedObject = event->relatedObject;
HXLINE( 119)			existing->ctrlKey = event->ctrlKey;
HXLINE( 120)			existing->altKey = event->altKey;
HXLINE( 121)			existing->shiftKey = event->shiftKey;
HXLINE( 122)			existing->commandKey = event->commandKey;
HXLINE( 123)			return existing;
            		}
HXLINE( 126)		bool event1 = event->cancelable;
HXDLIN( 126)		Float event2 = event->localX;
HXDLIN( 126)		Float event3 = event->localY;
HXLINE( 127)		 ::openfl::display::InteractiveObject event4 = event->relatedObject;
HXDLIN( 127)		bool event5 = event->ctrlKey;
HXDLIN( 127)		bool event6 = event->altKey;
HXDLIN( 127)		bool event7 = event->shiftKey;
HXLINE( 128)		bool result;
HXDLIN( 128)		if (::Reflect_obj::hasField(event,HX_("commandKey",14,71,9b,43))) {
HXLINE( 128)			result = ( (bool)(::Reflect_obj::field(event,HX_("commandKey",14,71,9b,43))) );
            		}
            		else {
HXLINE( 128)			result = false;
            		}
HXLINE( 126)		 ::feathers::events::TriggerEvent result1 =  ::feathers::events::TriggerEvent_obj::__alloc( HX_CTX ,HX_("trigger",38,55,df,25),false,event1,-1,false,event2,event3,((Float)0.0),((Float)0.0),((Float)1.0),event4,event5,event6,event7,result);
HXLINE( 129)		result1->stageX = event->stageX;
HXLINE( 130)		result1->stageY = event->stageY;
HXLINE( 131)		return result1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TriggerEvent_obj,fromMouseEvent,return )

 ::feathers::events::TriggerEvent TriggerEvent_obj::fromTouchEvent( ::openfl::events::TouchEvent event, ::feathers::events::TriggerEvent existing){
            	HX_GC_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_138_fromTouchEvent)
HXLINE( 139)		if ((event->type != HX_("touchTap",e4,1b,15,00))) {
HXLINE( 140)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("TriggerEvent.fromTouchEvent() requires TouchEvent.TOUCH_TAP",b4,fd,59,ee)));
            		}
HXLINE( 143)		if (::hx::IsNotNull( existing )) {
HXLINE( 144)			existing->type = HX_("trigger",38,55,df,25);
HXLINE( 145)			existing->bubbles = false;
HXLINE( 146)			existing->cancelable = event->cancelable;
HXLINE( 147)			existing->touchPointID = event->touchPointID;
HXLINE( 148)			existing->isPrimaryTouchPoint = event->isPrimaryTouchPoint;
HXLINE( 149)			existing->localX = event->localX;
HXLINE( 150)			existing->localY = event->localY;
HXLINE( 151)			existing->stageX = event->stageX;
HXLINE( 152)			existing->stageY = event->stageY;
HXLINE( 153)			existing->sizeX = event->sizeX;
HXLINE( 154)			existing->sizeY = event->sizeY;
HXLINE( 155)			existing->pressure = event->pressure;
HXLINE( 156)			existing->relatedObject = event->relatedObject;
HXLINE( 157)			existing->ctrlKey = event->ctrlKey;
HXLINE( 158)			existing->altKey = event->altKey;
HXLINE( 159)			existing->shiftKey = event->shiftKey;
HXLINE( 160)			existing->commandKey = event->commandKey;
HXLINE( 161)			return existing;
            		}
HXLINE( 164)		bool event1 = event->cancelable;
HXDLIN( 164)		int event2 = event->touchPointID;
HXDLIN( 164)		bool event3 = event->isPrimaryTouchPoint;
HXDLIN( 164)		Float event4 = event->localX;
HXLINE( 165)		Float event5 = event->localY;
HXDLIN( 165)		Float event6 = event->sizeX;
HXDLIN( 165)		Float event7 = event->sizeY;
HXDLIN( 165)		Float event8 = event->pressure;
HXDLIN( 165)		 ::openfl::display::InteractiveObject event9 = event->relatedObject;
HXDLIN( 165)		bool event10 = event->ctrlKey;
HXDLIN( 165)		bool event11 = event->altKey;
HXDLIN( 165)		bool event12 = event->shiftKey;
HXLINE( 166)		bool result;
HXDLIN( 166)		if (::Reflect_obj::hasField(event,HX_("commandKey",14,71,9b,43))) {
HXLINE( 166)			result = ( (bool)(::Reflect_obj::field(event,HX_("commandKey",14,71,9b,43))) );
            		}
            		else {
HXLINE( 166)			result = false;
            		}
HXLINE( 164)		 ::feathers::events::TriggerEvent result1 =  ::feathers::events::TriggerEvent_obj::__alloc( HX_CTX ,HX_("trigger",38,55,df,25),false,event1,event2,event3,event4,event5,event6,event7,event8,event9,event10,event11,event12,result);
HXLINE( 167)		result1->stageX = event->stageX;
HXLINE( 168)		result1->stageY = event->stageY;
HXLINE( 169)		return result1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TriggerEvent_obj,fromTouchEvent,return )


::hx::ObjectPtr< TriggerEvent_obj > TriggerEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey) {
	::hx::ObjectPtr< TriggerEvent_obj > __this = new TriggerEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey);
	return __this;
}

::hx::ObjectPtr< TriggerEvent_obj > TriggerEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey) {
	TriggerEvent_obj *__this = (TriggerEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TriggerEvent_obj), true, "feathers.events.TriggerEvent"));
	*(void **)__this = TriggerEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey);
	return __this;
}

TriggerEvent_obj::TriggerEvent_obj()
{
}

void TriggerEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TriggerEvent);
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	HX_MARK_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(sizeX,"sizeX");
	HX_MARK_MEMBER_NAME(sizeY,"sizeY");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TriggerEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	HX_VISIT_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(sizeX,"sizeX");
	HX_VISIT_MEMBER_NAME(sizeY,"sizeY");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TriggerEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { return ::hx::Val( sizeX ); }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return ::hx::Val( sizeY ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return ::hx::Val( altKey ); }
		if (HX_FIELD_EQ(inName,"localX") ) { return ::hx::Val( localX ); }
		if (HX_FIELD_EQ(inName,"localY") ) { return ::hx::Val( localY ); }
		if (HX_FIELD_EQ(inName,"stageX") ) { return ::hx::Val( stageX ); }
		if (HX_FIELD_EQ(inName,"stageY") ) { return ::hx::Val( stageY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ::hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		if (HX_FIELD_EQ(inName,"pressure") ) { return ::hx::Val( pressure ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return ::hx::Val( commandKey ); }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return ::hx::Val( controlKey ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return ::hx::Val( touchPointID ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return ::hx::Val( relatedObject ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return ::hx::Val( isPrimaryTouchPoint ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TriggerEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromMouseEvent") ) { outValue = fromMouseEvent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromTouchEvent") ) { outValue = fromTouchEvent_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dispatchFromMouseEvent") ) { outValue = dispatchFromMouseEvent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dispatchFromTouchEvent") ) { outValue = dispatchFromTouchEvent_dyn(); return true; }
	}
	return false;
}

::hx::Val TriggerEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TriggerEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void TriggerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	outFields->push(HX_("isPrimaryTouchPoint",29,3f,07,49));
	outFields->push(HX_("altKey",f6,a7,ca,44));
	outFields->push(HX_("commandKey",14,71,9b,43));
	outFields->push(HX_("ctrlKey",b4,35,7d,61));
	outFields->push(HX_("controlKey",42,8e,a5,04));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	outFields->push(HX_("localX",8d,74,bf,59));
	outFields->push(HX_("localY",8e,74,bf,59));
	outFields->push(HX_("sizeX",77,08,d9,7c));
	outFields->push(HX_("sizeY",78,08,d9,7c));
	outFields->push(HX_("pressure",c5,ab,1d,70));
	outFields->push(HX_("stageX",da,fb,f1,05));
	outFields->push(HX_("stageY",db,fb,f1,05));
	outFields->push(HX_("relatedObject",0a,bf,cb,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TriggerEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TriggerEvent_obj,touchPointID),HX_("touchPointID",2c,be,83,7b)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,isPrimaryTouchPoint),HX_("isPrimaryTouchPoint",29,3f,07,49)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,altKey),HX_("altKey",f6,a7,ca,44)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,commandKey),HX_("commandKey",14,71,9b,43)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,controlKey),HX_("controlKey",42,8e,a5,04)},
	{::hx::fsBool,(int)offsetof(TriggerEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,localX),HX_("localX",8d,74,bf,59)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,localY),HX_("localY",8e,74,bf,59)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,sizeX),HX_("sizeX",77,08,d9,7c)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,sizeY),HX_("sizeY",78,08,d9,7c)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,pressure),HX_("pressure",c5,ab,1d,70)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,stageX),HX_("stageX",da,fb,f1,05)},
	{::hx::fsFloat,(int)offsetof(TriggerEvent_obj,stageY),HX_("stageY",db,fb,f1,05)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(TriggerEvent_obj,relatedObject),HX_("relatedObject",0a,bf,cb,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TriggerEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TriggerEvent_obj::TRIGGER,HX_("TRIGGER",18,29,b3,a5)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &TriggerEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TriggerEvent_obj_sMemberFields[] = {
	HX_("touchPointID",2c,be,83,7b),
	HX_("isPrimaryTouchPoint",29,3f,07,49),
	HX_("altKey",f6,a7,ca,44),
	HX_("commandKey",14,71,9b,43),
	HX_("ctrlKey",b4,35,7d,61),
	HX_("controlKey",42,8e,a5,04),
	HX_("shiftKey",3d,92,9f,99),
	HX_("localX",8d,74,bf,59),
	HX_("localY",8e,74,bf,59),
	HX_("sizeX",77,08,d9,7c),
	HX_("sizeY",78,08,d9,7c),
	HX_("pressure",c5,ab,1d,70),
	HX_("stageX",da,fb,f1,05),
	HX_("stageY",db,fb,f1,05),
	HX_("relatedObject",0a,bf,cb,e8),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void TriggerEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TriggerEvent_obj::TRIGGER,"TRIGGER");
	HX_MARK_MEMBER_NAME(TriggerEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TriggerEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TriggerEvent_obj::TRIGGER,"TRIGGER");
	HX_VISIT_MEMBER_NAME(TriggerEvent_obj::_pool,"_pool");
};

#endif

::hx::Class TriggerEvent_obj::__mClass;

static ::String TriggerEvent_obj_sStaticFields[] = {
	HX_("TRIGGER",18,29,b3,a5),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatchFromMouseEvent",19,02,16,55),
	HX_("dispatchFromTouchEvent",3f,f2,d9,30),
	HX_("fromMouseEvent",bf,0d,be,8b),
	HX_("fromTouchEvent",e5,fd,81,67),
	::String(null())
};

void TriggerEvent_obj::__register()
{
	TriggerEvent_obj _hx_dummy;
	TriggerEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.TriggerEvent",d9,c7,5e,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TriggerEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TriggerEvent_obj::__SetStatic;
	__mClass->mMarkFunc = TriggerEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TriggerEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TriggerEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TriggerEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TriggerEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TriggerEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TriggerEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TriggerEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_39_boot)
HXDLIN(  39)		TRIGGER = HX_("trigger",38,55,df,25);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::TriggerEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_42_boot)
HXDLIN(  42)			return  ::feathers::events::TriggerEvent_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::TriggerEvent event){
            			HX_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_42_boot)
HXLINE(  43)			event->target = null();
HXLINE(  44)			event->currentTarget = null();
HXLINE(  45)			event->_hx___preventDefault = false;
HXLINE(  46)			event->_hx___isCanceled = false;
HXLINE(  47)			event->_hx___isCanceledNow = false;
HXLINE(  48)			event->relatedObject = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_9ff7555387fc5f6c_42_boot)
HXDLIN(  42)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
