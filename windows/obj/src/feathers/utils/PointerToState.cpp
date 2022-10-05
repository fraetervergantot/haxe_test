#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_utils_PointerToState
#include <feathers/utils/PointerToState.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_327df24975973c0d_26_new,"feathers.utils.PointerToState","new",0x7972d446,"feathers.utils.PointerToState.new","feathers/utils/PointerToState.hx",26,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_58_get_target,"feathers.utils.PointerToState","get_target",0xeade47f4,"feathers.utils.PointerToState.get_target","feathers/utils/PointerToState.hx",58,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_61_set_target,"feathers.utils.PointerToState","set_target",0xee5be668,"feathers.utils.PointerToState.set_target","feathers/utils/PointerToState.hx",61,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_92_get_stateContext,"feathers.utils.PointerToState","get_stateContext",0xcae48cc1,"feathers.utils.PointerToState.get_stateContext","feathers/utils/PointerToState.hx",92,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_95_set_stateContext,"feathers.utils.PointerToState","set_stateContext",0x21267a35,"feathers.utils.PointerToState.set_stateContext","feathers/utils/PointerToState.hx",95,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_119_get_callback,"feathers.utils.PointerToState","get_callback",0xc1709d28,"feathers.utils.PointerToState.get_callback","feathers/utils/PointerToState.hx",119,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_122_set_callback,"feathers.utils.PointerToState","set_callback",0xd669c09c,"feathers.utils.PointerToState.set_callback","feathers/utils/PointerToState.hx",122,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_144_get_currentState,"feathers.utils.PointerToState","get_currentState",0xbeea4bfb,"feathers.utils.PointerToState.get_currentState","feathers/utils/PointerToState.hx",144,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_157_get_upState,"feathers.utils.PointerToState","get_upState",0xefb94fb3,"feathers.utils.PointerToState.get_upState","feathers/utils/PointerToState.hx",157,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_160_set_upState,"feathers.utils.PointerToState","set_upState",0xfa2656bf,"feathers.utils.PointerToState.set_upState","feathers/utils/PointerToState.hx",160,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_175_get_downState,"feathers.utils.PointerToState","get_downState",0x747a3d8c,"feathers.utils.PointerToState.get_downState","feathers/utils/PointerToState.hx",175,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_178_set_downState,"feathers.utils.PointerToState","set_downState",0xb9801f98,"feathers.utils.PointerToState.set_downState","feathers/utils/PointerToState.hx",178,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_193_get_hoverState,"feathers.utils.PointerToState","get_hoverState",0x398998d8,"feathers.utils.PointerToState.get_hoverState","feathers/utils/PointerToState.hx",193,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_196_set_hoverState,"feathers.utils.PointerToState","set_hoverState",0x59a9814c,"feathers.utils.PointerToState.set_hoverState","feathers/utils/PointerToState.hx",196,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_214_get_enabled,"feathers.utils.PointerToState","get_enabled",0x8d69be7e,"feathers.utils.PointerToState.get_enabled","feathers/utils/PointerToState.hx",214,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_217_set_enabled,"feathers.utils.PointerToState","set_enabled",0x97d6c58a,"feathers.utils.PointerToState.set_enabled","feathers/utils/PointerToState.hx",217,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_237_get_keepDownStateOnRollOut,"feathers.utils.PointerToState","get_keepDownStateOnRollOut",0x3a5089eb,"feathers.utils.PointerToState.get_keepDownStateOnRollOut","feathers/utils/PointerToState.hx",237,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_240_set_keepDownStateOnRollOut,"feathers.utils.PointerToState","set_keepDownStateOnRollOut",0x99e5505f,"feathers.utils.PointerToState.set_keepDownStateOnRollOut","feathers/utils/PointerToState.hx",240,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_262_get_customHitTest,"feathers.utils.PointerToState","get_customHitTest",0xf14d9e51,"feathers.utils.PointerToState.get_customHitTest","feathers/utils/PointerToState.hx",262,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_265_set_customHitTest,"feathers.utils.PointerToState","set_customHitTest",0x14bb765d,"feathers.utils.PointerToState.set_customHitTest","feathers/utils/PointerToState.hx",265,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_274_changeState,"feathers.utils.PointerToState","changeState",0x330f7867,"feathers.utils.PointerToState.changeState","feathers/utils/PointerToState.hx",274,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_292_resetTouchState,"feathers.utils.PointerToState","resetTouchState",0x5d8be567,"feathers.utils.PointerToState.resetTouchState","feathers/utils/PointerToState.hx",292,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_297_pointerToState_target_removedFromStageHandler,"feathers.utils.PointerToState","pointerToState_target_removedFromStageHandler",0x712a7b94,"feathers.utils.PointerToState.pointerToState_target_removedFromStageHandler","feathers/utils/PointerToState.hx",297,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_306_pointerToState_target_rollOverHandler,"feathers.utils.PointerToState","pointerToState_target_rollOverHandler",0xf2db94f7,"feathers.utils.PointerToState.pointerToState_target_rollOverHandler","feathers/utils/PointerToState.hx",306,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_321_pointerToState_target_rollOutHandler,"feathers.utils.PointerToState","pointerToState_target_rollOutHandler",0x9cec67db,"feathers.utils.PointerToState.pointerToState_target_rollOutHandler","feathers/utils/PointerToState.hx",321,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_333_pointerToState_target_mouseDownHandler,"feathers.utils.PointerToState","pointerToState_target_mouseDownHandler",0x7e518b05,"feathers.utils.PointerToState.pointerToState_target_mouseDownHandler","feathers/utils/PointerToState.hx",333,0xd86da4e8)
HX_LOCAL_STACK_FRAME(_hx_pos_327df24975973c0d_345_pointerToState_stage_mouseUpHandler,"feathers.utils.PointerToState","pointerToState_stage_mouseUpHandler",0xe13ab937,"feathers.utils.PointerToState.pointerToState_stage_mouseUpHandler","feathers/utils/PointerToState.hx",345,0xd86da4e8)
namespace feathers{
namespace utils{

void PointerToState_obj::__construct( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_26_new)
HXLINE( 272)		this->_down = false;
HXLINE( 270)		this->_hoverBeforeDown = false;
HXLINE( 222)		this->_keepDownStateOnRollOut = false;
HXLINE( 201)		this->_enabled = true;
HXLINE( 183)		this->_hoverState = null();
HXLINE( 165)		this->_downState = null();
HXLINE( 147)		this->_upState = null();
HXLINE( 103)		this->_callback = null();
HXLINE(  82)		this->_stateContext = null();
HXLINE(  47)		this->_target = null();
HXLINE(  33)		this->set_target(target);
HXLINE(  34)		if (::hx::IsNotNull( upState )) {
HXLINE(  35)			this->set_upState(upState);
            		}
HXLINE(  37)		if (::hx::IsNotNull( downState )) {
HXLINE(  38)			this->set_downState(downState);
            		}
HXLINE(  40)		if (::hx::IsNotNull( hoverState )) {
HXLINE(  41)			this->set_hoverState(hoverState);
            		}
HXLINE(  43)		this->_currentState = this->_upState;
HXLINE(  44)		this->set_callback(callback);
            	}

Dynamic PointerToState_obj::__CreateEmpty() { return new PointerToState_obj; }

void *PointerToState_obj::_hx_vtable = 0;

Dynamic PointerToState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PointerToState_obj > _hx_result = new PointerToState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool PointerToState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x17437032;
}

 ::openfl::display::InteractiveObject PointerToState_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_58_get_target)
HXDLIN(  58)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_target,return )

 ::openfl::display::InteractiveObject PointerToState_obj::set_target( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_61_set_target)
HXLINE(  62)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE(  63)			return this->_target;
            		}
HXLINE(  65)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  66)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->pointerToState_target_removedFromStageHandler_dyn(),null());
HXLINE(  67)			this->_target->removeEventListener(HX_("rollOver",71,ab,a8,12),this->pointerToState_target_rollOverHandler_dyn(),null());
HXLINE(  68)			this->_target->removeEventListener(HX_("rollOut",11,f9,11,5d),this->pointerToState_target_rollOutHandler_dyn(),null());
HXLINE(  69)			this->_target->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->pointerToState_target_mouseDownHandler_dyn(),null());
            		}
HXLINE(  71)		this->_target = value;
HXLINE(  72)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  73)			this->_currentState = this->_upState;
HXLINE(  74)			this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->pointerToState_target_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE(  75)			this->_target->addEventListener(HX_("rollOver",71,ab,a8,12),this->pointerToState_target_rollOverHandler_dyn(),null(),null(),null());
HXLINE(  76)			this->_target->addEventListener(HX_("rollOut",11,f9,11,5d),this->pointerToState_target_rollOutHandler_dyn(),null(),null(),null());
HXLINE(  77)			this->_target->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->pointerToState_target_mouseDownHandler_dyn(),null(),null(),null());
            		}
HXLINE(  79)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_target,return )

::Dynamic PointerToState_obj::get_stateContext(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_92_get_stateContext)
HXDLIN(  92)		return this->_stateContext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_stateContext,return )

::Dynamic PointerToState_obj::set_stateContext(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_95_set_stateContext)
HXLINE(  96)		if (::hx::IsInstanceEq( this->_stateContext,value )) {
HXLINE(  97)			return this->_stateContext;
            		}
HXLINE(  99)		this->_stateContext = value;
HXLINE( 100)		return this->_stateContext;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_stateContext,return )

 ::Dynamic PointerToState_obj::get_callback(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_119_get_callback)
HXDLIN( 119)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_callback,return )

 ::Dynamic PointerToState_obj::set_callback( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_122_set_callback)
HXLINE( 123)		if (::hx::IsEq( this->_callback,value )) {
HXLINE( 124)			return this->_callback;
            		}
HXLINE( 126)		this->_callback = value;
HXLINE( 127)		if (::hx::IsNotNull( this->_callback )) {
HXLINE( 128)			this->_callback(this->_currentState);
            		}
HXLINE( 130)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_callback,return )

 ::Dynamic PointerToState_obj::get_currentState(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_144_get_currentState)
HXDLIN( 144)		return this->_currentState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_currentState,return )

 ::Dynamic PointerToState_obj::get_upState(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_157_get_upState)
HXDLIN( 157)		return this->_upState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_upState,return )

 ::Dynamic PointerToState_obj::set_upState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_160_set_upState)
HXLINE( 161)		this->_upState = value;
HXLINE( 162)		return this->_upState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_upState,return )

 ::Dynamic PointerToState_obj::get_downState(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_175_get_downState)
HXDLIN( 175)		return this->_downState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_downState,return )

 ::Dynamic PointerToState_obj::set_downState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_178_set_downState)
HXLINE( 179)		this->_downState = value;
HXLINE( 180)		return this->_downState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_downState,return )

 ::Dynamic PointerToState_obj::get_hoverState(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_193_get_hoverState)
HXDLIN( 193)		return this->_hoverState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_hoverState,return )

 ::Dynamic PointerToState_obj::set_hoverState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_196_set_hoverState)
HXLINE( 197)		this->_hoverState = value;
HXLINE( 198)		return this->_hoverState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_hoverState,return )

bool PointerToState_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_214_get_enabled)
HXDLIN( 214)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_enabled,return )

bool PointerToState_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_217_set_enabled)
HXLINE( 218)		this->_enabled = value;
HXLINE( 219)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_enabled,return )

bool PointerToState_obj::get_keepDownStateOnRollOut(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_237_get_keepDownStateOnRollOut)
HXDLIN( 237)		return this->_keepDownStateOnRollOut;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_keepDownStateOnRollOut,return )

bool PointerToState_obj::set_keepDownStateOnRollOut(bool value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_240_set_keepDownStateOnRollOut)
HXLINE( 241)		this->_keepDownStateOnRollOut = value;
HXLINE( 242)		return this->_keepDownStateOnRollOut;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_keepDownStateOnRollOut,return )

 ::Dynamic PointerToState_obj::get_customHitTest(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_262_get_customHitTest)
HXDLIN( 262)		return this->_customHitTest;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,get_customHitTest,return )

 ::Dynamic PointerToState_obj::set_customHitTest( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_265_set_customHitTest)
HXLINE( 266)		this->_customHitTest = value;
HXLINE( 267)		return this->_customHitTest;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,set_customHitTest,return )

void PointerToState_obj::changeState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_274_changeState)
HXLINE( 275)		 ::Dynamic oldState = this->_currentState;
HXLINE( 276)		::Dynamic targetStateContext = this->_stateContext;
HXLINE( 277)		bool _hx_tmp;
HXDLIN( 277)		if (::hx::IsNull( targetStateContext )) {
HXLINE( 277)			_hx_tmp = ::Std_obj::isOfType(this->_target,::hx::ClassOf< ::feathers::core::IStateContext >());
            		}
            		else {
HXLINE( 277)			_hx_tmp = false;
            		}
HXDLIN( 277)		if (_hx_tmp) {
HXLINE( 278)			targetStateContext = this->_target;
            		}
HXLINE( 280)		if (::hx::IsNotNull( targetStateContext )) {
HXLINE( 281)			oldState = ::feathers::core::IStateContext_obj::get_currentState(targetStateContext);
            		}
HXLINE( 283)		this->_currentState = value;
HXLINE( 284)		if (::hx::IsEq( oldState,value )) {
HXLINE( 285)			return;
            		}
HXLINE( 287)		if (::hx::IsNotNull( this->_callback )) {
HXLINE( 288)			this->_callback(value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,changeState,(void))

void PointerToState_obj::resetTouchState(){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_292_resetTouchState)
HXLINE( 293)		this->_hoverBeforeDown = false;
HXLINE( 294)		this->changeState(this->_upState);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerToState_obj,resetTouchState,(void))

void PointerToState_obj::pointerToState_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_297_pointerToState_target_removedFromStageHandler)
HXLINE( 300)		if (::hx::IsNotNull( this->_target->stage )) {
HXLINE( 301)			this->_target->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->pointerToState_stage_mouseUpHandler_dyn(),null());
            		}
HXLINE( 303)		this->resetTouchState();
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,pointerToState_target_removedFromStageHandler,(void))

void PointerToState_obj::pointerToState_target_rollOverHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_306_pointerToState_target_rollOverHandler)
HXLINE( 307)		if (!(this->_enabled)) {
HXLINE( 308)			return;
            		}
HXLINE( 310)		bool _hx_tmp;
HXDLIN( 310)		if (::hx::IsNotNull( this->_customHitTest )) {
HXLINE( 310)			_hx_tmp = !(( (bool)(this->_customHitTest(event->stageX,event->stageY)) ));
            		}
            		else {
HXLINE( 310)			_hx_tmp = false;
            		}
HXDLIN( 310)		if (_hx_tmp) {
HXLINE( 311)			return;
            		}
HXLINE( 313)		this->_hoverBeforeDown = true;
HXLINE( 314)		if (this->_down) {
HXLINE( 315)			this->changeState(this->_downState);
            		}
            		else {
HXLINE( 317)			this->changeState(this->_hoverState);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,pointerToState_target_rollOverHandler,(void))

void PointerToState_obj::pointerToState_target_rollOutHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_321_pointerToState_target_rollOutHandler)
HXLINE( 322)		if (!(this->_enabled)) {
HXLINE( 323)			return;
            		}
HXLINE( 325)		this->_hoverBeforeDown = false;
HXLINE( 326)		bool _hx_tmp;
HXDLIN( 326)		if (this->_keepDownStateOnRollOut) {
HXLINE( 326)			_hx_tmp = this->_down;
            		}
            		else {
HXLINE( 326)			_hx_tmp = false;
            		}
HXDLIN( 326)		if (_hx_tmp) {
HXLINE( 327)			this->changeState(this->_downState);
HXLINE( 328)			return;
            		}
HXLINE( 330)		this->changeState(this->_upState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,pointerToState_target_rollOutHandler,(void))

void PointerToState_obj::pointerToState_target_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_333_pointerToState_target_mouseDownHandler)
HXLINE( 334)		bool _hx_tmp;
HXDLIN( 334)		if (this->_enabled) {
HXLINE( 334)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 334)			_hx_tmp = true;
            		}
HXDLIN( 334)		if (_hx_tmp) {
HXLINE( 335)			return;
            		}
HXLINE( 337)		bool _hx_tmp1;
HXDLIN( 337)		if (::hx::IsNotNull( this->_customHitTest )) {
HXLINE( 337)			_hx_tmp1 = !(( (bool)(this->_customHitTest(event->stageX,event->stageY)) ));
            		}
            		else {
HXLINE( 337)			_hx_tmp1 = false;
            		}
HXDLIN( 337)		if (_hx_tmp1) {
HXLINE( 338)			return;
            		}
HXLINE( 340)		this->_down = true;
HXLINE( 341)		this->_target->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->pointerToState_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 342)		this->changeState(this->_downState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,pointerToState_target_mouseDownHandler,(void))

void PointerToState_obj::pointerToState_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_327df24975973c0d_345_pointerToState_stage_mouseUpHandler)
HXLINE( 346)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 347)		this->_down = false;
HXLINE( 348)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->pointerToState_stage_mouseUpHandler_dyn(),null());
HXLINE( 349)		bool _hx_tmp;
HXDLIN( 349)		if (this->_hoverBeforeDown) {
HXLINE( 349)			_hx_tmp = this->_target->hitTestPoint(event->stageX,event->stageY,null());
            		}
            		else {
HXLINE( 349)			_hx_tmp = false;
            		}
HXDLIN( 349)		if (_hx_tmp) {
HXLINE( 350)			this->changeState(this->_hoverState);
            		}
            		else {
HXLINE( 352)			this->resetTouchState();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerToState_obj,pointerToState_stage_mouseUpHandler,(void))


::hx::ObjectPtr< PointerToState_obj > PointerToState_obj::__new( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState) {
	::hx::ObjectPtr< PointerToState_obj > __this = new PointerToState_obj();
	__this->__construct(target,callback,upState,downState,hoverState);
	return __this;
}

::hx::ObjectPtr< PointerToState_obj > PointerToState_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState) {
	PointerToState_obj *__this = (PointerToState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PointerToState_obj), true, "feathers.utils.PointerToState"));
	*(void **)__this = PointerToState_obj::_hx_vtable;
	__this->__construct(target,callback,upState,downState,hoverState);
	return __this;
}

PointerToState_obj::PointerToState_obj()
{
}

void PointerToState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointerToState);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_stateContext,"_stateContext");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_currentState,"_currentState");
	HX_MARK_MEMBER_NAME(_upState,"_upState");
	HX_MARK_MEMBER_NAME(_downState,"_downState");
	HX_MARK_MEMBER_NAME(_hoverState,"_hoverState");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_keepDownStateOnRollOut,"_keepDownStateOnRollOut");
	HX_MARK_MEMBER_NAME(_customHitTest,"_customHitTest");
	HX_MARK_MEMBER_NAME(_hoverBeforeDown,"_hoverBeforeDown");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_END_CLASS();
}

void PointerToState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_stateContext,"_stateContext");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_currentState,"_currentState");
	HX_VISIT_MEMBER_NAME(_upState,"_upState");
	HX_VISIT_MEMBER_NAME(_downState,"_downState");
	HX_VISIT_MEMBER_NAME(_hoverState,"_hoverState");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_keepDownStateOnRollOut,"_keepDownStateOnRollOut");
	HX_VISIT_MEMBER_NAME(_customHitTest,"_customHitTest");
	HX_VISIT_MEMBER_NAME(_hoverBeforeDown,"_hoverBeforeDown");
	HX_VISIT_MEMBER_NAME(_down,"_down");
}

::hx::Val PointerToState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upState() ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_callback() ); }
		if (HX_FIELD_EQ(inName,"_upState") ) { return ::hx::Val( _upState ); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_downState() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"_downState") ) { return ::hx::Val( _downState ); }
		if (HX_FIELD_EQ(inName,"hoverState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hoverState() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_upState") ) { return ::hx::Val( get_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return ::hx::Val( set_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hoverState") ) { return ::hx::Val( _hoverState ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeState") ) { return ::hx::Val( changeState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stateContext() ); }
		if (HX_FIELD_EQ(inName,"get_callback") ) { return ::hx::Val( get_callback_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_callback") ) { return ::hx::Val( set_callback_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentState() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stateContext") ) { return ::hx::Val( _stateContext ); }
		if (HX_FIELD_EQ(inName,"_currentState") ) { return ::hx::Val( _currentState ); }
		if (HX_FIELD_EQ(inName,"get_downState") ) { return ::hx::Val( get_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return ::hx::Val( set_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"customHitTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customHitTest() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hoverState") ) { return ::hx::Val( get_hoverState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hoverState") ) { return ::hx::Val( set_hoverState_dyn() ); }
		if (HX_FIELD_EQ(inName,"_customHitTest") ) { return ::hx::Val( _customHitTest ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resetTouchState") ) { return ::hx::Val( resetTouchState_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_stateContext") ) { return ::hx::Val( get_stateContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_stateContext") ) { return ::hx::Val( set_stateContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentState") ) { return ::hx::Val( get_currentState_dyn() ); }
		if (HX_FIELD_EQ(inName,"_hoverBeforeDown") ) { return ::hx::Val( _hoverBeforeDown ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_customHitTest") ) { return ::hx::Val( get_customHitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customHitTest") ) { return ::hx::Val( set_customHitTest_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"keepDownStateOnRollOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_keepDownStateOnRollOut() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_keepDownStateOnRollOut") ) { return ::hx::Val( _keepDownStateOnRollOut ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_keepDownStateOnRollOut") ) { return ::hx::Val( get_keepDownStateOnRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_keepDownStateOnRollOut") ) { return ::hx::Val( set_keepDownStateOnRollOut_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"pointerToState_stage_mouseUpHandler") ) { return ::hx::Val( pointerToState_stage_mouseUpHandler_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"pointerToState_target_rollOutHandler") ) { return ::hx::Val( pointerToState_target_rollOutHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"pointerToState_target_rollOverHandler") ) { return ::hx::Val( pointerToState_target_rollOverHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"pointerToState_target_mouseDownHandler") ) { return ::hx::Val( pointerToState_target_mouseDownHandler_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"pointerToState_target_removedFromStageHandler") ) { return ::hx::Val( pointerToState_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PointerToState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_upState(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_callback(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_upState") ) { _upState=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_downState(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_downState") ) { _downState=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hoverState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hoverState(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hoverState") ) { _hoverState=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stateContext(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stateContext") ) { _stateContext=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentState") ) { _currentState=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customHitTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customHitTest(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_customHitTest") ) { _customHitTest=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_hoverBeforeDown") ) { _hoverBeforeDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"keepDownStateOnRollOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_keepDownStateOnRollOut(inValue.Cast< bool >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_keepDownStateOnRollOut") ) { _keepDownStateOnRollOut=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointerToState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_stateContext",bd,2e,80,b9));
	outFields->push(HX_("stateContext",de,9b,11,d7));
	outFields->push(HX_("_currentState",f7,ed,85,ad));
	outFields->push(HX_("currentState",18,5b,17,cb));
	outFields->push(HX_("_upState",37,ef,38,1a));
	outFields->push(HX_("upState",b6,95,80,e0));
	outFields->push(HX_("_downState",10,c6,c3,f5));
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("_hoverState",d4,83,97,d8));
	outFields->push(HX_("hoverState",b5,b6,0d,06));
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("_keepDownStateOnRollOut",e7,fe,10,55));
	outFields->push(HX_("keepDownStateOnRollOut",48,7f,38,c2));
	outFields->push(HX_("_hoverBeforeDown",de,53,53,dc));
	outFields->push(HX_("_down",41,14,7f,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PointerToState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(PointerToState_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(PointerToState_obj,_stateContext),HX_("_stateContext",bd,2e,80,b9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_currentState),HX_("_currentState",f7,ed,85,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_upState),HX_("_upState",37,ef,38,1a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_downState),HX_("_downState",10,c6,c3,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_hoverState),HX_("_hoverState",d4,83,97,d8)},
	{::hx::fsBool,(int)offsetof(PointerToState_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{::hx::fsBool,(int)offsetof(PointerToState_obj,_keepDownStateOnRollOut),HX_("_keepDownStateOnRollOut",e7,fe,10,55)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerToState_obj,_customHitTest),HX_("_customHitTest",d5,b8,df,ca)},
	{::hx::fsBool,(int)offsetof(PointerToState_obj,_hoverBeforeDown),HX_("_hoverBeforeDown",de,53,53,dc)},
	{::hx::fsBool,(int)offsetof(PointerToState_obj,_down),HX_("_down",41,14,7f,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PointerToState_obj_sStaticStorageInfo = 0;
#endif

static ::String PointerToState_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_stateContext",bd,2e,80,b9),
	HX_("get_stateContext",67,88,b0,db),
	HX_("set_stateContext",db,75,f2,31),
	HX_("_callback",24,91,9c,c6),
	HX_("get_callback",ce,4d,20,34),
	HX_("set_callback",42,71,19,49),
	HX_("_currentState",f7,ed,85,ad),
	HX_("get_currentState",a1,47,b6,cf),
	HX_("_upState",37,ef,38,1a),
	HX_("get_upState",cd,f5,7a,66),
	HX_("set_upState",d9,fc,e7,70),
	HX_("_downState",10,c6,c3,f5),
	HX_("get_downState",26,1e,85,5b),
	HX_("set_downState",32,00,8b,a0),
	HX_("_hoverState",d4,83,97,d8),
	HX_("get_hoverState",fe,3e,03,7c),
	HX_("set_hoverState",72,27,23,9c),
	HX_("_enabled",02,5e,e9,b7),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_keepDownStateOnRollOut",e7,fe,10,55),
	HX_("get_keepDownStateOnRollOut",11,d1,3d,fa),
	HX_("set_keepDownStateOnRollOut",85,97,d2,59),
	HX_("_customHitTest",d5,b8,df,ca),
	HX_("get_customHitTest",eb,d3,fd,92),
	HX_("set_customHitTest",f7,ab,6b,b6),
	HX_("_hoverBeforeDown",de,53,53,dc),
	HX_("_down",41,14,7f,f5),
	HX_("changeState",81,1e,d1,a9),
	HX_("resetTouchState",81,a0,83,45),
	HX_("pointerToState_target_removedFromStageHandler",2e,04,f6,95),
	HX_("pointerToState_target_rollOverHandler",91,f3,df,e9),
	HX_("pointerToState_target_rollOutHandler",81,5a,dc,37),
	HX_("pointerToState_target_mouseDownHandler",2b,f3,1f,ab),
	HX_("pointerToState_stage_mouseUpHandler",51,5d,fa,6d),
	::String(null()) };

::hx::Class PointerToState_obj::__mClass;

void PointerToState_obj::__register()
{
	PointerToState_obj _hx_dummy;
	PointerToState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.PointerToState",54,f9,1d,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PointerToState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PointerToState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PointerToState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PointerToState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
