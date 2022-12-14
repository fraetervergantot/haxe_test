#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f183fb2214172dbe_53_new,"motion.actuators.SimpleActuator","new",0x6db9da29,"motion.actuators.SimpleActuator.new","motion/actuators/SimpleActuator.hx",53,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_feathers_motion_effects_actuate_SimpleEffectActuator_T,"motion.actuators.SimpleActuator","setField_feathers_motion_effects_actuate_SimpleEffectActuator_T",0xa1db2508,"motion.actuators.SimpleActuator.setField_feathers_motion_effects_actuate_SimpleEffectActuator_T","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_flash_geom_Transform,"motion.actuators.SimpleActuator","setField_flash_geom_Transform",0x75a605e8,"motion.actuators.SimpleActuator.setField_flash_geom_Transform","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_TransformActuator_T,"motion.actuators.SimpleActuator","setField_motion_actuators_TransformActuator_T",0x5d31773c,"motion.actuators.SimpleActuator.setField_motion_actuators_TransformActuator_T","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_MotionPathActuator_T,"motion.actuators.SimpleActuator","setField_motion_actuators_MotionPathActuator_T",0xa626cf07,"motion.actuators.SimpleActuator.setField_motion_actuators_MotionPathActuator_T","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_flash_display_DisplayObject,"motion.actuators.SimpleActuator","setField_flash_display_DisplayObject",0x38514b45,"motion.actuators.SimpleActuator.setField_flash_display_DisplayObject","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_feathers_motion_effects_actuate_MethodEffectActuator_T,"motion.actuators.SimpleActuator","setField_feathers_motion_effects_actuate_MethodEffectActuator_T",0x99e7a5b7,"motion.actuators.SimpleActuator.setField_feathers_motion_effects_actuate_MethodEffectActuator_T","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_SimpleActuator_T,"motion.actuators.SimpleActuator","setField_motion_actuators_SimpleActuator_T",0xdcd18bfe,"motion.actuators.SimpleActuator.setField_motion_actuators_SimpleActuator_T","motion/actuators/SimpleActuator.hx",347,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_103_apply,"motion.actuators.SimpleActuator","apply",0x3e8e5377,"motion.actuators.SimpleActuator.apply","motion/actuators/SimpleActuator.hx",103,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_123_autoVisible,"motion.actuators.SimpleActuator","autoVisible",0xe8aa978c,"motion.actuators.SimpleActuator.autoVisible","motion/actuators/SimpleActuator.hx",123,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_153_delay,"motion.actuators.SimpleActuator","delay",0xf179a58c,"motion.actuators.SimpleActuator.delay","motion/actuators/SimpleActuator.hx",153,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_163_getField,"motion.actuators.SimpleActuator","getField",0x353f81db,"motion.actuators.SimpleActuator.getField","motion/actuators/SimpleActuator.hx",163,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_194_initialize,"motion.actuators.SimpleActuator","initialize",0x46b3e2a7,"motion.actuators.SimpleActuator.initialize","motion/actuators/SimpleActuator.hx",194,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_244_move,"motion.actuators.SimpleActuator","move",0x94436928,"motion.actuators.SimpleActuator.move","motion/actuators/SimpleActuator.hx",244,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_270_onUpdate,"motion.actuators.SimpleActuator","onUpdate",0x3b875a1f,"motion.actuators.SimpleActuator.onUpdate","motion/actuators/SimpleActuator.hx",270,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_293_pause,"motion.actuators.SimpleActuator","pause",0xd7aaa4ff,"motion.actuators.SimpleActuator.pause","motion/actuators/SimpleActuator.hx",293,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_320_resume,"motion.actuators.SimpleActuator","resume",0xf6a5e384,"motion.actuators.SimpleActuator.resume","motion/actuators/SimpleActuator.hx",320,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_368_setProperty,"motion.actuators.SimpleActuator","setProperty",0x3c3b8ce0,"motion.actuators.SimpleActuator.setProperty","motion/actuators/SimpleActuator.hx",368,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_389_stop,"motion.actuators.SimpleActuator","stop",0x983e7619,"motion.actuators.SimpleActuator.stop","motion/actuators/SimpleActuator.hx",389,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_432_update,"motion.actuators.SimpleActuator","update",0x7526ffe0,"motion.actuators.SimpleActuator.update","motion/actuators/SimpleActuator.hx",432,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_580_stage_onEnterFrame,"motion.actuators.SimpleActuator","stage_onEnterFrame",0x3adccfac,"motion.actuators.SimpleActuator.stage_onEnterFrame","motion/actuators/SimpleActuator.hx",580,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_32_boot,"motion.actuators.SimpleActuator","boot",0x8cfe0a49,"motion.actuators.SimpleActuator.boot","motion/actuators/SimpleActuator.hx",32,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_33_boot,"motion.actuators.SimpleActuator","boot",0x8cfe0a49,"motion.actuators.SimpleActuator.boot","motion/actuators/SimpleActuator.hx",33,0x731927e5)
HX_LOCAL_STACK_FRAME(_hx_pos_f183fb2214172dbe_34_boot,"motion.actuators.SimpleActuator","boot",0x8cfe0a49,"motion.actuators.SimpleActuator.boot","motion/actuators/SimpleActuator.hx",34,0x731927e5)
namespace motion{
namespace actuators{

void SimpleActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_53_new)
HXLINE(  55)		this->active = true;
HXLINE(  56)		this->propertyDetails = ::Array_obj< ::Dynamic>::__new();
HXLINE(  57)		this->sendChange = false;
HXLINE(  58)		this->paused = false;
HXLINE(  59)		this->cacheVisible = false;
HXLINE(  60)		this->initialized = false;
HXLINE(  61)		this->setVisible = false;
HXLINE(  62)		this->toggleVisible = false;
HXLINE(  66)		this->startTime = (( (Float)(::openfl::Lib_obj::getTimer()) ) / ( (Float)(1000) ));
HXLINE(  78)		super::__construct(target,duration,properties);
HXLINE(  80)		if (!(::motion::actuators::SimpleActuator_obj::addedEvent)) {
HXLINE(  82)			::motion::actuators::SimpleActuator_obj::addedEvent = true;
HXLINE(  85)			::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),::motion::actuators::SimpleActuator_obj::stage_onEnterFrame_dyn(),null(),null(),null());
            		}
            	}

Dynamic SimpleActuator_obj::__CreateEmpty() { return new SimpleActuator_obj; }

void *SimpleActuator_obj::_hx_vtable = 0;

Dynamic SimpleActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleActuator_obj > _hx_result = new SimpleActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SimpleActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05603dab) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
	} else {
		return inClassId==(int)0x172f0ab4;
	}
}

void SimpleActuator_obj::setField_feathers_motion_effects_actuate_SimpleEffectActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_feathers_motion_effects_actuate_SimpleEffectActuator_T)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_feathers_motion_effects_actuate_SimpleEffectActuator_T,(void))

void SimpleActuator_obj::setField_flash_geom_Transform( ::openfl::geom::Transform target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_flash_geom_Transform)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_flash_geom_Transform,(void))

void SimpleActuator_obj::setField_motion_actuators_TransformActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_TransformActuator_T)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_TransformActuator_T,(void))

void SimpleActuator_obj::setField_motion_actuators_MotionPathActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_MotionPathActuator_T)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_MotionPathActuator_T,(void))

void SimpleActuator_obj::setField_flash_display_DisplayObject( ::openfl::display::DisplayObject target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_flash_display_DisplayObject)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_flash_display_DisplayObject,(void))

void SimpleActuator_obj::setField_feathers_motion_effects_actuate_MethodEffectActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_feathers_motion_effects_actuate_MethodEffectActuator_T)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_feathers_motion_effects_actuate_MethodEffectActuator_T,(void))

void SimpleActuator_obj::setField_motion_actuators_SimpleActuator_T( ::Dynamic target,::String propertyName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_347_setField_motion_actuators_SimpleActuator_T)
HXDLIN( 347)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 352)			::Reflect_obj::setField(target,propertyName,value);
            		}
            		else {
HXLINE( 358)			::Reflect_obj::setProperty(target,propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_SimpleActuator_T,(void))

void SimpleActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_103_apply)
HXLINE( 105)		this->super::apply();
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (this->toggleVisible) {
HXLINE( 107)			_hx_tmp = ::Reflect_obj::hasField(this->properties,HX_("alpha",5e,a7,96,21));
            		}
            		else {
HXLINE( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 109)			 ::Dynamic target = this->target;
HXDLIN( 109)			 ::Dynamic value = null();
HXDLIN( 109)			if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 109)				value = ::Reflect_obj::field(target,HX_("visible",72,78,24,a3));
            			}
            			else {
HXLINE( 109)				value = ::Reflect_obj::getProperty(target,HX_("visible",72,78,24,a3));
            			}
HXDLIN( 109)			if (::hx::IsNotNull( value )) {
HXLINE( 111)				 ::Dynamic target = this->target;
HXDLIN( 111)				 ::Dynamic value = ::hx::IsGreater( ::Reflect_obj::field(this->properties,HX_("alpha",5e,a7,96,21)),0 );
HXDLIN( 111)				if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 111)					::Reflect_obj::setField(target,HX_("visible",72,78,24,a3),value);
            				}
            				else {
HXLINE( 111)					::Reflect_obj::setProperty(target,HX_("visible",72,78,24,a3),value);
            				}
            			}
            		}
            	}


 ::motion::actuators::GenericActuator SimpleActuator_obj::autoVisible( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_123_autoVisible)
HXLINE( 125)		if (::hx::IsNull( value )) {
HXLINE( 127)			value = true;
            		}
HXLINE( 131)		this->_autoVisible = ( (bool)(value) );
HXLINE( 133)		if (!(( (bool)(value) ))) {
HXLINE( 135)			this->toggleVisible = false;
HXLINE( 137)			if (this->setVisible) {
HXLINE( 139)				 ::Dynamic target = this->target;
HXDLIN( 139)				 ::Dynamic value = this->cacheVisible;
HXDLIN( 139)				if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 139)					::Reflect_obj::setField(target,HX_("visible",72,78,24,a3),value);
            				}
            				else {
HXLINE( 139)					::Reflect_obj::setProperty(target,HX_("visible",72,78,24,a3),value);
            				}
            			}
            		}
HXLINE( 145)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::motion::actuators::GenericActuator SimpleActuator_obj::delay(Float duration){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_153_delay)
HXLINE( 155)		this->_delay = duration;
HXLINE( 156)		this->timeOffset = (this->startTime + duration);
HXLINE( 158)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::Dynamic SimpleActuator_obj::getField( ::Dynamic target,::String propertyName){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_163_getField)
HXLINE( 167)		 ::Dynamic value = null();
HXLINE( 169)		if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 174)			value = ::Reflect_obj::field(target,propertyName);
            		}
            		else {
HXLINE( 179)			value = ::Reflect_obj::getProperty(target,propertyName);
            		}
HXLINE( 183)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

void SimpleActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_f183fb2214172dbe_194_initialize)
HXLINE( 196)		 ::motion::actuators::PropertyDetails details;
HXLINE( 197)		 ::Dynamic start;
HXLINE( 199)		{
HXLINE( 199)			int _g = 0;
HXDLIN( 199)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN( 199)			while((_g < _g1->length)){
HXLINE( 199)				::String i = _g1->__get(_g);
HXDLIN( 199)				_g = (_g + 1);
HXLINE( 201)				bool isField = true;
HXLINE( 205)				if (::Reflect_obj::hasField(this->target,i)) {
HXLINE( 207)					start = ::Reflect_obj::field(this->target,i);
            				}
            				else {
HXLINE( 211)					isField = false;
HXLINE( 212)					start = ::Reflect_obj::getProperty(this->target,i);
            				}
HXLINE( 222)				if (::Std_obj::isOfType(start,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ))) {
HXLINE( 224)					 ::Dynamic target = this->properties;
HXDLIN( 224)					 ::Dynamic value = null();
HXDLIN( 224)					if (::Reflect_obj::hasField(target,i)) {
HXLINE( 224)						value = ::Reflect_obj::field(target,i);
            					}
            					else {
HXLINE( 224)						value = ::Reflect_obj::getProperty(target,i);
            					}
HXDLIN( 224)					 ::Dynamic value1 = value;
HXLINE( 231)					details =  ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,this->target,i,( (Float)(start) ),(( (Float)(value1) ) - ( (Float)(start) )),isField);
HXLINE( 232)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE( 238)		this->detailsLength = this->propertyDetails->length;
HXLINE( 239)		this->initialized = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

void SimpleActuator_obj::move(){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_244_move)
HXLINE( 247)		bool _hx_tmp;
HXDLIN( 247)		if (::Reflect_obj::hasField(this->properties,HX_("alpha",5e,a7,96,21))) {
HXLINE( 247)			_hx_tmp = ::Std_obj::isOfType(this->target,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::DisplayObject >()) ));
            		}
            		else {
HXLINE( 247)			_hx_tmp = false;
            		}
HXDLIN( 247)		this->toggleVisible = _hx_tmp;
HXLINE( 252)		bool _hx_tmp1;
HXDLIN( 252)		bool _hx_tmp2;
HXDLIN( 252)		if (this->toggleVisible) {
HXLINE( 252)			_hx_tmp2 = ::hx::IsNotEq( this->properties->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic),0 );
            		}
            		else {
HXLINE( 252)			_hx_tmp2 = false;
            		}
HXDLIN( 252)		if (_hx_tmp2) {
HXLINE( 252)			 ::Dynamic target = this->target;
HXDLIN( 252)			 ::Dynamic value = null();
HXDLIN( 252)			if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 252)				value = ::Reflect_obj::field(target,HX_("visible",72,78,24,a3));
            			}
            			else {
HXLINE( 252)				value = ::Reflect_obj::getProperty(target,HX_("visible",72,78,24,a3));
            			}
HXDLIN( 252)			_hx_tmp1 = !(( (bool)(value) ));
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = false;
            		}
HXDLIN( 252)		if (_hx_tmp1) {
HXLINE( 254)			this->setVisible = true;
HXLINE( 255)			 ::Dynamic target = this->target;
HXDLIN( 255)			 ::Dynamic value = null();
HXDLIN( 255)			if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 255)				value = ::Reflect_obj::field(target,HX_("visible",72,78,24,a3));
            			}
            			else {
HXLINE( 255)				value = ::Reflect_obj::getProperty(target,HX_("visible",72,78,24,a3));
            			}
HXDLIN( 255)			this->cacheVisible = ( (bool)(value) );
HXLINE( 256)			{
HXLINE( 256)				 ::Dynamic target1 = this->target;
HXDLIN( 256)				 ::Dynamic value1 = true;
HXDLIN( 256)				if (::Reflect_obj::hasField(target1,HX_("visible",72,78,24,a3))) {
HXLINE( 256)					::Reflect_obj::setField(target1,HX_("visible",72,78,24,a3),value1);
            				}
            				else {
HXLINE( 256)					::Reflect_obj::setProperty(target1,HX_("visible",72,78,24,a3),value1);
            				}
            			}
            		}
HXLINE( 260)		this->timeOffset = this->startTime;
HXLINE( 261)		::motion::actuators::SimpleActuator_obj::actuators->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 262)		++::motion::actuators::SimpleActuator_obj::actuatorsLength;
            	}


 ::motion::actuators::GenericActuator SimpleActuator_obj::onUpdate( ::Dynamic handler,::cpp::VirtualArray parameters){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_270_onUpdate)
HXLINE( 272)		this->_onUpdate = handler;
HXLINE( 274)		if (::hx::IsNull( parameters )) {
HXLINE( 276)			this->_onUpdateParams = ::cpp::VirtualArray_obj::__new(0);
            		}
            		else {
HXLINE( 280)			this->_onUpdateParams = parameters;
            		}
HXLINE( 284)		this->sendChange = true;
HXLINE( 286)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void SimpleActuator_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_293_pause)
HXDLIN( 293)		if (!(this->paused)) {
HXLINE( 295)			this->paused = true;
HXLINE( 297)			this->super::pause();
HXLINE( 301)			this->pauseTime = ( (Float)(::openfl::Lib_obj::getTimer()) );
            		}
            	}


void SimpleActuator_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_320_resume)
HXDLIN( 320)		if (this->paused) {
HXLINE( 322)			this->paused = false;
HXLINE( 326)			 ::motion::actuators::SimpleActuator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 326)			Float _hx_tmp1 = _hx_tmp->timeOffset;
HXDLIN( 326)			int _hx_tmp2 = ::openfl::Lib_obj::getTimer();
HXDLIN( 326)			_hx_tmp->timeOffset = (_hx_tmp1 + ((( (Float)(_hx_tmp2) ) - this->pauseTime) / ( (Float)(1000) )));
HXLINE( 338)			this->super::resume();
            		}
            	}


void SimpleActuator_obj::setProperty( ::motion::actuators::PropertyDetails details, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_368_setProperty)
HXDLIN( 368)		if (details->isField) {
HXLINE( 373)			::Reflect_obj::setField(details->target,details->propertyName,value);
            		}
            		else {
HXLINE( 379)			::Reflect_obj::setProperty(details->target,details->propertyName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

void SimpleActuator_obj::stop( ::Dynamic properties,bool complete,bool sendEvent){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_389_stop)
HXDLIN( 389)		if (this->active) {
HXLINE( 391)			if (::hx::IsNull( properties )) {
HXLINE( 393)				this->active = false;
HXLINE( 395)				if (complete) {
HXLINE( 397)					this->apply();
            				}
HXLINE( 401)				this->complete(sendEvent);
HXLINE( 402)				return;
            			}
HXLINE( 406)			{
HXLINE( 406)				int _g = 0;
HXDLIN( 406)				::Array< ::String > _g1 = ::Reflect_obj::fields(properties);
HXDLIN( 406)				while((_g < _g1->length)){
HXLINE( 406)					::String i = _g1->__get(_g);
HXDLIN( 406)					_g = (_g + 1);
HXLINE( 408)					if (::Reflect_obj::hasField(this->properties,i)) {
HXLINE( 410)						this->active = false;
HXLINE( 412)						if (complete) {
HXLINE( 414)							this->apply();
            						}
HXLINE( 418)						this->complete(sendEvent);
HXLINE( 419)						return;
            					}
            				}
            			}
            		}
            	}


void SimpleActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_432_update)
HXDLIN( 432)		if (!(this->paused)) {
HXLINE( 434)			 ::motion::actuators::PropertyDetails details;
HXLINE( 435)			Float easing;
HXLINE( 436)			int i;
HXLINE( 438)			Float tweenPosition = ((currentTime - this->timeOffset) / this->duration);
HXLINE( 440)			if ((tweenPosition > 1)) {
HXLINE( 442)				tweenPosition = ( (Float)(1) );
            			}
HXLINE( 446)			if (!(this->initialized)) {
HXLINE( 448)				this->initialize();
            			}
HXLINE( 452)			if (!(this->special)) {
HXLINE( 454)				easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
HXLINE( 456)				{
HXLINE( 456)					int _g = 0;
HXDLIN( 456)					int _g1 = this->detailsLength;
HXDLIN( 456)					while((_g < _g1)){
HXLINE( 456)						_g = (_g + 1);
HXDLIN( 456)						int i = (_g - 1);
HXLINE( 458)						details = this->propertyDetails->__get(i).StaticCast<  ::motion::actuators::PropertyDetails >();
HXLINE( 459)						{
HXLINE( 459)							 ::Dynamic value = (details->start + (details->change * easing));
HXDLIN( 459)							if (details->isField) {
HXLINE( 459)								::Reflect_obj::setField(details->target,details->propertyName,value);
            							}
            							else {
HXLINE( 459)								::Reflect_obj::setProperty(details->target,details->propertyName,value);
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 465)				if (!(this->_reverse)) {
HXLINE( 467)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
            				}
            				else {
HXLINE( 471)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,(( (Float)(1) ) - tweenPosition));
            				}
HXLINE( 475)				Float endValue;
HXLINE( 477)				{
HXLINE( 477)					int _g = 0;
HXDLIN( 477)					int _g1 = this->detailsLength;
HXDLIN( 477)					while((_g < _g1)){
HXLINE( 477)						_g = (_g + 1);
HXDLIN( 477)						int i = (_g - 1);
HXLINE( 479)						details = this->propertyDetails->__get(i).StaticCast<  ::motion::actuators::PropertyDetails >();
HXLINE( 481)						bool _hx_tmp;
HXDLIN( 481)						if (this->_smartRotation) {
HXLINE( 481)							bool _hx_tmp1;
HXDLIN( 481)							bool _hx_tmp2;
HXDLIN( 481)							if ((details->propertyName != HX_("rotation",3e,3d,86,08))) {
HXLINE( 481)								_hx_tmp2 = (details->propertyName == HX_("rotationX",5a,59,ef,6c));
            							}
            							else {
HXLINE( 481)								_hx_tmp2 = true;
            							}
HXDLIN( 481)							if (!(_hx_tmp2)) {
HXLINE( 481)								_hx_tmp1 = (details->propertyName == HX_("rotationY",5b,59,ef,6c));
            							}
            							else {
HXLINE( 481)								_hx_tmp1 = true;
            							}
HXDLIN( 481)							if (!(_hx_tmp1)) {
HXLINE( 481)								_hx_tmp = (details->propertyName == HX_("rotationZ",5c,59,ef,6c));
            							}
            							else {
HXLINE( 481)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 481)							_hx_tmp = false;
            						}
HXDLIN( 481)						if (_hx_tmp) {
HXLINE( 483)							Float rotation = ::hx::Mod(details->change,360);
HXLINE( 485)							if ((rotation > 180)) {
HXLINE( 487)								rotation = (rotation - ( (Float)(360) ));
            							}
            							else {
HXLINE( 489)								if ((rotation < -180)) {
HXLINE( 491)									rotation = (rotation + 360);
            								}
            							}
HXLINE( 495)							endValue = (details->start + (rotation * easing));
            						}
            						else {
HXLINE( 499)							endValue = (details->start + (details->change * easing));
            						}
HXLINE( 503)						if (!(this->_snapping)) {
HXLINE( 505)							 ::Dynamic value = endValue;
HXDLIN( 505)							if (details->isField) {
HXLINE( 505)								::Reflect_obj::setField(details->target,details->propertyName,value);
            							}
            							else {
HXLINE( 505)								::Reflect_obj::setProperty(details->target,details->propertyName,value);
            							}
            						}
            						else {
HXLINE( 509)							 ::Dynamic value = ::Math_obj::round(endValue);
HXDLIN( 509)							if (details->isField) {
HXLINE( 509)								::Reflect_obj::setField(details->target,details->propertyName,value);
            							}
            							else {
HXLINE( 509)								::Reflect_obj::setProperty(details->target,details->propertyName,value);
            							}
            						}
            					}
            				}
            			}
HXLINE( 517)			if ((tweenPosition == 1)) {
HXLINE( 519)				if ((this->_repeat == 0)) {
HXLINE( 521)					this->active = false;
HXLINE( 523)					bool _hx_tmp;
HXDLIN( 523)					if (this->toggleVisible) {
HXLINE( 523)						 ::Dynamic target = this->target;
HXDLIN( 523)						 ::Dynamic value = null();
HXDLIN( 523)						if (::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21))) {
HXLINE( 523)							value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            						}
            						else {
HXLINE( 523)							value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            						}
HXDLIN( 523)						_hx_tmp = ::hx::IsEq( value,0 );
            					}
            					else {
HXLINE( 523)						_hx_tmp = false;
            					}
HXDLIN( 523)					if (_hx_tmp) {
HXLINE( 525)						 ::Dynamic target = this->target;
HXDLIN( 525)						 ::Dynamic value = false;
HXDLIN( 525)						if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 525)							::Reflect_obj::setField(target,HX_("visible",72,78,24,a3),value);
            						}
            						else {
HXLINE( 525)							::Reflect_obj::setProperty(target,HX_("visible",72,78,24,a3),value);
            						}
            					}
HXLINE( 529)					this->complete(true);
HXLINE( 530)					return;
            				}
            				else {
HXLINE( 534)					if (::hx::IsNotNull( this->_onRepeat )) {
HXLINE( 536)						 ::Dynamic method = this->_onRepeat;
HXDLIN( 536)						::cpp::VirtualArray params = this->_onRepeatParams;
HXDLIN( 536)						if (::hx::IsNull( params )) {
HXLINE( 536)							params = ::cpp::VirtualArray_obj::__new(0);
            						}
HXDLIN( 536)						::Reflect_obj::callMethod(method,method,params);
            					}
HXLINE( 540)					if (this->_reflect) {
HXLINE( 542)						this->_reverse = !(this->_reverse);
            					}
HXLINE( 546)					this->startTime = currentTime;
HXLINE( 547)					this->timeOffset = (this->startTime + this->_delay);
HXLINE( 549)					if ((this->_repeat > 0)) {
HXLINE( 551)						this->_repeat--;
            					}
            				}
            			}
HXLINE( 559)			if (this->sendChange) {
HXLINE( 561)				this->change();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

::Array< ::Dynamic> SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

void SimpleActuator_obj::stage_onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_580_stage_onEnterFrame)
HXLINE( 583)		Float currentTime = (( (Float)(::openfl::Lib_obj::getTimer()) ) / ( (Float)(1000) ));
HXLINE( 595)		 ::motion::actuators::SimpleActuator actuator;
HXLINE( 597)		int j = 0;
HXLINE( 598)		bool cleanup = false;
HXLINE( 600)		{
HXLINE( 600)			int _g = 0;
HXDLIN( 600)			int _g1 = ::motion::actuators::SimpleActuator_obj::actuatorsLength;
HXDLIN( 600)			while((_g < _g1)){
HXLINE( 600)				_g = (_g + 1);
HXDLIN( 600)				int i = (_g - 1);
HXLINE( 602)				actuator = ::motion::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast<  ::motion::actuators::SimpleActuator >();
HXLINE( 604)				bool _hx_tmp;
HXDLIN( 604)				if (::hx::IsNotNull( actuator )) {
HXLINE( 604)					_hx_tmp = actuator->active;
            				}
            				else {
HXLINE( 604)					_hx_tmp = false;
            				}
HXDLIN( 604)				if (_hx_tmp) {
HXLINE( 606)					if ((currentTime >= actuator->timeOffset)) {
HXLINE( 608)						actuator->update(currentTime);
            					}
HXLINE( 612)					j = (j + 1);
            				}
            				else {
HXLINE( 616)					::motion::actuators::SimpleActuator_obj::actuators->removeRange(j,1);
HXLINE( 617)					--::motion::actuators::SimpleActuator_obj::actuatorsLength;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,stage_onEnterFrame,(void))


::hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< SimpleActuator_obj > __this = new SimpleActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	SimpleActuator_obj *__this = (SimpleActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleActuator_obj), true, "motion.actuators.SimpleActuator"));
	*(void **)__this = SimpleActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	 ::motion::actuators::GenericActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	 ::motion::actuators::GenericActuator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SimpleActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getField") ) { return ::hx::Val( getField_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return ::hx::Val( pauseTime ); }
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return ::hx::Val( timeOffset ); }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return ::hx::Val( sendChange ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return ::hx::Val( setVisible ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return ::hx::Val( initialized ); }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return ::hx::Val( autoVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return ::hx::Val( cacheVisible ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return ::hx::Val( detailsLength ); }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return ::hx::Val( toggleVisible ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return ::hx::Val( propertyDetails ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setField_flash_geom_Transform") ) { return ::hx::Val( setField_flash_geom_Transform_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setField_flash_display_DisplayObject") ) { return ::hx::Val( setField_flash_display_DisplayObject_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_SimpleActuator_T") ) { return ::hx::Val( setField_motion_actuators_SimpleActuator_T_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_TransformActuator_T") ) { return ::hx::Val( setField_motion_actuators_TransformActuator_T_dyn() ); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_MotionPathActuator_T") ) { return ::hx::Val( setField_motion_actuators_MotionPathActuator_T_dyn() ); }
		break;
	case 63:
		if (HX_FIELD_EQ(inName,"setField_feathers_motion_effects_actuate_SimpleEffectActuator_T") ) { return ::hx::Val( setField_feathers_motion_effects_actuate_SimpleEffectActuator_T_dyn() ); }
		if (HX_FIELD_EQ(inName,"setField_feathers_motion_effects_actuate_MethodEffectActuator_T") ) { return ::hx::Val( setField_feathers_motion_effects_actuate_MethodEffectActuator_T_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleActuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { outValue = ( actuators ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { outValue = ( addedEvent ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { outValue = ( actuatorsLength ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onEnterFrame") ) { outValue = stage_onEnterFrame_dyn(); return true; }
	}
	return false;
}

::hx::Val SimpleActuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleActuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("timeOffset",80,df,08,fe));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("cacheVisible",50,b2,89,51));
	outFields->push(HX_("detailsLength",48,e3,c3,98));
	outFields->push(HX_("initialized",14,f5,0f,37));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("pauseTime",23,82,63,51));
	outFields->push(HX_("propertyDetails",ed,a0,48,71));
	outFields->push(HX_("sendChange",d8,b8,c8,58));
	outFields->push(HX_("setVisible",f0,9c,03,f6));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("toggleVisible",3e,bb,e1,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleActuator_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SimpleActuator_obj,timeOffset),HX_("timeOffset",80,df,08,fe)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,cacheVisible),HX_("cacheVisible",50,b2,89,51)},
	{::hx::fsInt,(int)offsetof(SimpleActuator_obj,detailsLength),HX_("detailsLength",48,e3,c3,98)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,initialized),HX_("initialized",14,f5,0f,37)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(SimpleActuator_obj,pauseTime),HX_("pauseTime",23,82,63,51)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SimpleActuator_obj,propertyDetails),HX_("propertyDetails",ed,a0,48,71)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,sendChange),HX_("sendChange",d8,b8,c8,58)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,setVisible),HX_("setVisible",f0,9c,03,f6)},
	{::hx::fsFloat,(int)offsetof(SimpleActuator_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsBool,(int)offsetof(SimpleActuator_obj,toggleVisible),HX_("toggleVisible",3e,bb,e1,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SimpleActuator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &SimpleActuator_obj::actuators,HX_("actuators",1a,95,55,d2)},
	{::hx::fsInt,(void *) &SimpleActuator_obj::actuatorsLength,HX_("actuatorsLength",a0,6d,fd,ca)},
	{::hx::fsBool,(void *) &SimpleActuator_obj::addedEvent,HX_("addedEvent",3a,2b,d3,06)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SimpleActuator_obj_sMemberFields[] = {
	HX_("setField_feathers_motion_effects_actuate_SimpleEffectActuator_T",bf,6b,66,a0),
	HX_("setField_flash_geom_Transform",df,24,98,52),
	HX_("setField_motion_actuators_TransformActuator_T",33,34,ff,a9),
	HX_("setField_motion_actuators_MotionPathActuator_T",30,6a,5e,8d),
	HX_("setField_flash_display_DisplayObject",2e,09,ab,d6),
	HX_("setField_feathers_motion_effects_actuate_MethodEffectActuator_T",6e,ec,72,98),
	HX_("setField_motion_actuators_SimpleActuator_T",a7,1e,a0,75),
	HX_("timeOffset",80,df,08,fe),
	HX_("active",c6,41,46,16),
	HX_("cacheVisible",50,b2,89,51),
	HX_("detailsLength",48,e3,c3,98),
	HX_("initialized",14,f5,0f,37),
	HX_("paused",ae,40,84,ef),
	HX_("pauseTime",23,82,63,51),
	HX_("propertyDetails",ed,a0,48,71),
	HX_("sendChange",d8,b8,c8,58),
	HX_("setVisible",f0,9c,03,f6),
	HX_("startTime",8f,45,f0,05),
	HX_("toggleVisible",3e,bb,e1,53),
	HX_("apply",6e,85,3b,24),
	HX_("autoVisible",c3,1c,08,89),
	HX_("delay",83,d7,26,d7),
	HX_("getField",44,a4,6a,60),
	HX_("initialize",50,31,bb,ec),
	HX_("move",11,e3,60,48),
	HX_("onUpdate",88,7c,b2,66),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("setProperty",17,12,99,dc),
	HX_("stop",02,f0,5b,4c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void SimpleActuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SimpleActuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#endif

::hx::Class SimpleActuator_obj::__mClass;

static ::String SimpleActuator_obj_sStaticFields[] = {
	HX_("actuators",1a,95,55,d2),
	HX_("actuatorsLength",a0,6d,fd,ca),
	HX_("addedEvent",3a,2b,d3,06),
	HX_("stage_onEnterFrame",55,6f,40,8f),
	::String(null())
};

void SimpleActuator_obj::__register()
{
	SimpleActuator_obj _hx_dummy;
	SimpleActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.SimpleActuator",b7,91,0d,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleActuator_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleActuator_obj::__SetStatic;
	__mClass->mMarkFunc = SimpleActuator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SimpleActuator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SimpleActuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SimpleActuator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_32_boot)
HXDLIN(  32)		actuators = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_33_boot)
HXDLIN(  33)		actuatorsLength = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f183fb2214172dbe_34_boot)
HXDLIN(  34)		addedEvent = false;
            	}
}

} // end namespace motion
} // end namespace actuators
