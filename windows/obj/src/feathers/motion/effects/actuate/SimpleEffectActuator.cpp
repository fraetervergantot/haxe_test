#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_SimpleEffectActuator
#include <feathers/motion/effects/actuate/SimpleEffectActuator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_28_new,"feathers.motion.effects.actuate.SimpleEffectActuator","new",0xf5c413f3,"feathers.motion.effects.actuate.SimpleEffectActuator.new","feathers/motion/effects/actuate/SimpleEffectActuator.hx",28,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_35_getTarget,"feathers.motion.effects.actuate.SimpleEffectActuator","getTarget",0xab9b305a,"feathers.motion.effects.actuate.SimpleEffectActuator.getTarget","feathers/motion/effects/actuate/SimpleEffectActuator.hx",35,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_42_getDuration,"feathers.motion.effects.actuate.SimpleEffectActuator","getDuration",0x6f0c609d,"feathers.motion.effects.actuate.SimpleEffectActuator.getDuration","feathers/motion/effects/actuate/SimpleEffectActuator.hx",42,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_49_getEase,"feathers.motion.effects.actuate.SimpleEffectActuator","getEase",0xffc444b7,"feathers.motion.effects.actuate.SimpleEffectActuator.getEase","feathers/motion/effects/actuate/SimpleEffectActuator.hx",49,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_56_getAutoVisible,"feathers.motion.effects.actuate.SimpleEffectActuator","getAutoVisible",0x0bd2ff1a,"feathers.motion.effects.actuate.SimpleEffectActuator.getAutoVisible","feathers/motion/effects/actuate/SimpleEffectActuator.hx",56,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_63_getDelay,"feathers.motion.effects.actuate.SimpleEffectActuator","getDelay",0x3b30ce9a,"feathers.motion.effects.actuate.SimpleEffectActuator.getDelay","feathers/motion/effects/actuate/SimpleEffectActuator.hx",63,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_70_getReflect,"feathers.motion.effects.actuate.SimpleEffectActuator","getReflect",0xdcf0af14,"feathers.motion.effects.actuate.SimpleEffectActuator.getReflect","feathers/motion/effects/actuate/SimpleEffectActuator.hx",70,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_77_getRepeat,"feathers.motion.effects.actuate.SimpleEffectActuator","getRepeat",0x2b2ad464,"feathers.motion.effects.actuate.SimpleEffectActuator.getRepeat","feathers/motion/effects/actuate/SimpleEffectActuator.hx",77,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_84_getReverse,"feathers.motion.effects.actuate.SimpleEffectActuator","getReverse",0x0ec363f9,"feathers.motion.effects.actuate.SimpleEffectActuator.getReverse","feathers/motion/effects/actuate/SimpleEffectActuator.hx",84,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_91_getSmartRotation,"feathers.motion.effects.actuate.SimpleEffectActuator","getSmartRotation",0x360f067e,"feathers.motion.effects.actuate.SimpleEffectActuator.getSmartRotation","feathers/motion/effects/actuate/SimpleEffectActuator.hx",91,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_98_getSnapping,"feathers.motion.effects.actuate.SimpleEffectActuator","getSnapping",0x7a378705,"feathers.motion.effects.actuate.SimpleEffectActuator.getSnapping","feathers/motion/effects/actuate/SimpleEffectActuator.hx",98,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_105_getOnComplete,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnComplete",0x112aca81,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnComplete","feathers/motion/effects/actuate/SimpleEffectActuator.hx",105,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_112_getOnCompleteParams,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnCompleteParams",0x52be90a7,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnCompleteParams","feathers/motion/effects/actuate/SimpleEffectActuator.hx",112,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_119_getOnRepeat,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnRepeat",0x40a7df23,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnRepeat","feathers/motion/effects/actuate/SimpleEffectActuator.hx",119,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_126_getOnRepeatParams,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnRepeatParams",0xbbd7cac9,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnRepeatParams","feathers/motion/effects/actuate/SimpleEffectActuator.hx",126,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_133_getOnUpdate,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnUpdate",0xc130cdd1,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnUpdate","feathers/motion/effects/actuate/SimpleEffectActuator.hx",133,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_140_getOnUpdateParams,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnUpdateParams",0x8a5deff7,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnUpdateParams","feathers/motion/effects/actuate/SimpleEffectActuator.hx",140,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_147_getOnPause,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnPause",0x475ca02e,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnPause","feathers/motion/effects/actuate/SimpleEffectActuator.hx",147,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_154_getOnPauseParams,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnPauseParams",0x397f6614,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnPauseParams","feathers/motion/effects/actuate/SimpleEffectActuator.hx",154,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_161_getOnResume,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnResume",0x42afb175,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnResume","feathers/motion/effects/actuate/SimpleEffectActuator.hx",161,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_168_getOnResumeParams,"feathers.motion.effects.actuate.SimpleEffectActuator","getOnResumeParams",0x6a69269b,"feathers.motion.effects.actuate.SimpleEffectActuator.getOnResumeParams","feathers/motion/effects/actuate/SimpleEffectActuator.hx",168,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_174_goto,"feathers.motion.effects.actuate.SimpleEffectActuator","goto",0x113476b0,"feathers.motion.effects.actuate.SimpleEffectActuator.goto","feathers/motion/effects/actuate/SimpleEffectActuator.hx",174,0x7844f3fb)
HX_LOCAL_STACK_FRAME(_hx_pos_5963b17f3e8e25fa_228_update,"feathers.motion.effects.actuate.SimpleEffectActuator","update",0x420b8056,"feathers.motion.effects.actuate.SimpleEffectActuator.update","feathers/motion/effects/actuate/SimpleEffectActuator.hx",228,0x7844f3fb)
namespace feathers{
namespace motion{
namespace effects{
namespace actuate{

void SimpleEffectActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_28_new)
HXDLIN(  28)		super::__construct(target,duration,properties);
            	}

Dynamic SimpleEffectActuator_obj::__CreateEmpty() { return new SimpleEffectActuator_obj; }

void *SimpleEffectActuator_obj::_hx_vtable = 0;

Dynamic SimpleEffectActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleEffectActuator_obj > _hx_result = new SimpleEffectActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SimpleEffectActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x172f0ab4) {
		if (inClassId<=(int)0x05603dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
		} else {
			return inClassId==(int)0x172f0ab4;
		}
	} else {
		return inClassId==(int)0x712f7c0f;
	}
}

static ::feathers::motion::effects::actuate::IGotoActuator_obj _hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_feathers_motion_effects_actuate_IGotoActuator= {
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::autoVisible_881a854a,
	( ::Dynamic (::hx::Object::*)(Float))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::delay_145ae511,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::ease_02a46974,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onComplete_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onRepeat_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onUpdate_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reflect_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::repeat_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reverse_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::smartRotation_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::snapping_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onPause_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onResume_782808ef,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::apply,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::move,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::resume,
	( void (::hx::Object::*)( ::Dynamic,bool,bool))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::stop,
	( void (::hx::Object::*)(Float))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::_hx_goto,
};

static ::motion::actuators::IGenericActuator_obj _hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_motion_actuators_IGenericActuator= {
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::autoVisible_881a854a,
	( ::Dynamic (::hx::Object::*)(Float))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::delay_145ae511,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::ease_02a46974,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onComplete_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onRepeat_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onUpdate_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reflect_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::repeat_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reverse_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::smartRotation_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::snapping_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onPause_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onResume_782808ef,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::apply,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::move,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::resume,
	( void (::hx::Object::*)( ::Dynamic,bool,bool))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::stop,
};

static ::feathers::motion::effects::actuate::IReadableGenericActuator_obj _hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_feathers_motion_effects_actuate_IReadableGenericActuator= {
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::autoVisible_881a854a,
	( ::Dynamic (::hx::Object::*)(Float))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::delay_145ae511,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::ease_02a46974,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onComplete_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onRepeat_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onUpdate_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reflect_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::repeat_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::reverse_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::smartRotation_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::snapping_881a854a,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onPause_782808ef,
	( ::Dynamic (::hx::Object::*)( ::Dynamic,::cpp::VirtualArray))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::onResume_782808ef,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::apply,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::move,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::resume,
	( void (::hx::Object::*)( ::Dynamic,bool,bool))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::stop,
	( void (::hx::Object::*)(Float))&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::_hx_goto,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getTarget,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getDuration_2aa2127b,
	( bool (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getAutoVisible,
	( Float (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getDelay,
	( ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getEase,
	( bool (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getReflect,
	( int (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getRepeat,
	( bool (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getReverse,
	( bool (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getSmartRotation,
	( bool (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getSnapping,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnComplete,
	( ::cpp::VirtualArray (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnCompleteParams,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnRepeat,
	( ::cpp::VirtualArray (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnRepeatParams,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnUpdate,
	( ::cpp::VirtualArray (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnUpdateParams,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnPause,
	( ::cpp::VirtualArray (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnPauseParams,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnResume,
	( ::cpp::VirtualArray (::hx::Object::*)())&::feathers::motion::effects::actuate::SimpleEffectActuator_obj::getOnResumeParams,
};

 ::Dynamic SimpleEffectActuator_obj::getDuration_2aa2127b() {
			return getDuration();
}

::Dynamic SimpleEffectActuator_obj::onResume_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onResume(handler,parameters);
}

::Dynamic SimpleEffectActuator_obj::onPause_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onPause(handler,parameters);
}

::Dynamic SimpleEffectActuator_obj::snapping_881a854a( ::Dynamic value) {
			return snapping(value);
}

::Dynamic SimpleEffectActuator_obj::smartRotation_881a854a( ::Dynamic value) {
			return smartRotation(value);
}

::Dynamic SimpleEffectActuator_obj::reverse_881a854a( ::Dynamic value) {
			return reverse(value);
}

::Dynamic SimpleEffectActuator_obj::repeat_881a854a( ::Dynamic times) {
			return repeat(times);
}

::Dynamic SimpleEffectActuator_obj::reflect_881a854a( ::Dynamic value) {
			return reflect(value);
}

::Dynamic SimpleEffectActuator_obj::onUpdate_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onUpdate(handler,parameters);
}

::Dynamic SimpleEffectActuator_obj::onRepeat_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onRepeat(handler,parameters);
}

::Dynamic SimpleEffectActuator_obj::onComplete_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters) {
			return onComplete(handler,parameters);
}

::Dynamic SimpleEffectActuator_obj::ease_02a46974(::Dynamic easing) {
			return ease(easing);
}

::Dynamic SimpleEffectActuator_obj::delay_145ae511(Float duration) {
			return delay(duration);
}

::Dynamic SimpleEffectActuator_obj::autoVisible_881a854a( ::Dynamic value) {
			return autoVisible(value);
}
void *SimpleEffectActuator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x02676f12: return &_hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_feathers_motion_effects_actuate_IGotoActuator;
		case (int)0x586a3bcb: return &_hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_motion_actuators_IGenericActuator;
		case (int)0x07c53f0a: return &_hx_feathers_motion_effects_actuate_SimpleEffectActuator__hx_feathers_motion_effects_actuate_IReadableGenericActuator;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic SimpleEffectActuator_obj::getTarget(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_35_getTarget)
HXDLIN(  35)		return this->target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getTarget,return )

Float SimpleEffectActuator_obj::getDuration(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_42_getDuration)
HXDLIN(  42)		return this->duration;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getDuration,return )

::Dynamic SimpleEffectActuator_obj::getEase(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_49_getEase)
HXDLIN(  49)		return this->_ease;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getEase,return )

bool SimpleEffectActuator_obj::getAutoVisible(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_56_getAutoVisible)
HXDLIN(  56)		return this->_autoVisible;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getAutoVisible,return )

Float SimpleEffectActuator_obj::getDelay(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_63_getDelay)
HXDLIN(  63)		return this->_delay;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getDelay,return )

bool SimpleEffectActuator_obj::getReflect(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_70_getReflect)
HXDLIN(  70)		return this->_reflect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getReflect,return )

int SimpleEffectActuator_obj::getRepeat(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_77_getRepeat)
HXDLIN(  77)		return this->_repeat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getRepeat,return )

bool SimpleEffectActuator_obj::getReverse(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_84_getReverse)
HXDLIN(  84)		return this->_reverse;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getReverse,return )

bool SimpleEffectActuator_obj::getSmartRotation(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_91_getSmartRotation)
HXDLIN(  91)		return this->_smartRotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getSmartRotation,return )

bool SimpleEffectActuator_obj::getSnapping(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_98_getSnapping)
HXDLIN(  98)		return this->_snapping;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getSnapping,return )

 ::Dynamic SimpleEffectActuator_obj::getOnComplete(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_105_getOnComplete)
HXDLIN( 105)		return this->_onComplete;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnComplete,return )

::cpp::VirtualArray SimpleEffectActuator_obj::getOnCompleteParams(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_112_getOnCompleteParams)
HXDLIN( 112)		return this->_onCompleteParams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnCompleteParams,return )

 ::Dynamic SimpleEffectActuator_obj::getOnRepeat(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_119_getOnRepeat)
HXDLIN( 119)		return this->_onRepeat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnRepeat,return )

::cpp::VirtualArray SimpleEffectActuator_obj::getOnRepeatParams(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_126_getOnRepeatParams)
HXDLIN( 126)		return this->_onRepeatParams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnRepeatParams,return )

 ::Dynamic SimpleEffectActuator_obj::getOnUpdate(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_133_getOnUpdate)
HXDLIN( 133)		return this->_onUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnUpdate,return )

::cpp::VirtualArray SimpleEffectActuator_obj::getOnUpdateParams(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_140_getOnUpdateParams)
HXDLIN( 140)		return this->_onUpdateParams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnUpdateParams,return )

 ::Dynamic SimpleEffectActuator_obj::getOnPause(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_147_getOnPause)
HXDLIN( 147)		return this->_onPause;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnPause,return )

::cpp::VirtualArray SimpleEffectActuator_obj::getOnPauseParams(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_154_getOnPauseParams)
HXDLIN( 154)		return this->_onPauseParams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnPauseParams,return )

 ::Dynamic SimpleEffectActuator_obj::getOnResume(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_161_getOnResume)
HXDLIN( 161)		return this->_onResume;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnResume,return )

::cpp::VirtualArray SimpleEffectActuator_obj::getOnResumeParams(){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_168_getOnResumeParams)
HXDLIN( 168)		return this->_onResumeParams;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleEffectActuator_obj,getOnResumeParams,return )

void SimpleEffectActuator_obj::_hx_goto(Float tweenPosition){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_174_goto)
HXLINE( 175)		 ::motion::actuators::PropertyDetails details;
HXLINE( 176)		Float easing;
HXLINE( 177)		int i;
HXLINE( 179)		if (!(this->initialized)) {
HXLINE( 180)			this->initialize();
            		}
HXLINE( 183)		if (!(this->special)) {
HXLINE( 184)			easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
HXLINE( 186)			{
HXLINE( 186)				int _g = 0;
HXDLIN( 186)				int _g1 = this->detailsLength;
HXDLIN( 186)				while((_g < _g1)){
HXLINE( 186)					_g = (_g + 1);
HXDLIN( 186)					int i = (_g - 1);
HXLINE( 187)					details = this->propertyDetails->__get(i).StaticCast<  ::motion::actuators::PropertyDetails >();
HXLINE( 188)					{
HXLINE( 188)						 ::Dynamic value = (details->start + (details->change * easing));
HXDLIN( 188)						if (details->isField) {
HXLINE( 188)							::Reflect_obj::setField(details->target,details->propertyName,value);
            						}
            						else {
HXLINE( 188)							::Reflect_obj::setProperty(details->target,details->propertyName,value);
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 191)			if (!(this->_reverse)) {
HXLINE( 192)				easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
            			}
            			else {
HXLINE( 194)				easing = ::motion::easing::IEasing_obj::calculate(this->_ease,(( (Float)(1) ) - tweenPosition));
            			}
HXLINE( 197)			Float endValue;
HXLINE( 199)			{
HXLINE( 199)				int _g = 0;
HXDLIN( 199)				int _g1 = this->detailsLength;
HXDLIN( 199)				while((_g < _g1)){
HXLINE( 199)					_g = (_g + 1);
HXDLIN( 199)					int i = (_g - 1);
HXLINE( 200)					details = this->propertyDetails->__get(i).StaticCast<  ::motion::actuators::PropertyDetails >();
HXLINE( 202)					bool _hx_tmp;
HXDLIN( 202)					if (this->_smartRotation) {
HXLINE( 203)						bool _hx_tmp1;
HXDLIN( 203)						bool _hx_tmp2;
HXDLIN( 203)						if ((details->propertyName != HX_("rotation",3e,3d,86,08))) {
HXLINE( 203)							_hx_tmp2 = (details->propertyName == HX_("rotationX",5a,59,ef,6c));
            						}
            						else {
HXLINE( 203)							_hx_tmp2 = true;
            						}
HXDLIN( 203)						if (!(_hx_tmp2)) {
HXLINE( 203)							_hx_tmp1 = (details->propertyName == HX_("rotationY",5b,59,ef,6c));
            						}
            						else {
HXLINE( 203)							_hx_tmp1 = true;
            						}
HXDLIN( 203)						if (!(_hx_tmp1)) {
HXLINE( 202)							_hx_tmp = (details->propertyName == HX_("rotationZ",5c,59,ef,6c));
            						}
            						else {
HXLINE( 202)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 202)						_hx_tmp = false;
            					}
HXDLIN( 202)					if (_hx_tmp) {
HXLINE( 205)						Float rotation = ::hx::Mod(details->change,360);
HXLINE( 207)						if ((rotation > 180)) {
HXLINE( 208)							rotation = (rotation - ( (Float)(360) ));
            						}
            						else {
HXLINE( 209)							if ((rotation < -180)) {
HXLINE( 210)								rotation = (rotation + 360);
            							}
            						}
HXLINE( 213)						endValue = (details->start + (rotation * easing));
            					}
            					else {
HXLINE( 215)						endValue = (details->start + (details->change * easing));
            					}
HXLINE( 218)					if (!(this->_snapping)) {
HXLINE( 219)						 ::Dynamic value = endValue;
HXDLIN( 219)						if (details->isField) {
HXLINE( 219)							::Reflect_obj::setField(details->target,details->propertyName,value);
            						}
            						else {
HXLINE( 219)							::Reflect_obj::setProperty(details->target,details->propertyName,value);
            						}
            					}
            					else {
HXLINE( 221)						 ::Dynamic value = ::Math_obj::round(endValue);
HXDLIN( 221)						if (details->isField) {
HXLINE( 221)							::Reflect_obj::setField(details->target,details->propertyName,value);
            						}
            						else {
HXLINE( 221)							::Reflect_obj::setProperty(details->target,details->propertyName,value);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleEffectActuator_obj,_hx_goto,(void))

void SimpleEffectActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_5963b17f3e8e25fa_228_update)
HXDLIN( 228)		if (!(this->paused)) {
HXLINE( 229)			Float tweenPosition = ((currentTime - this->timeOffset) / this->duration);
HXLINE( 231)			if ((tweenPosition > 1)) {
HXLINE( 232)				tweenPosition = ( (Float)(1) );
            			}
HXLINE( 235)			this->_hx_goto(tweenPosition);
HXLINE( 237)			if ((tweenPosition == 1)) {
HXLINE( 238)				if ((this->_repeat == 0)) {
HXLINE( 239)					this->active = false;
HXLINE( 241)					bool _hx_tmp;
HXDLIN( 241)					if (this->toggleVisible) {
HXLINE( 241)						 ::Dynamic target = this->target;
HXDLIN( 241)						 ::Dynamic value = null();
HXDLIN( 241)						if (::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21))) {
HXLINE( 241)							value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            						}
            						else {
HXLINE( 241)							value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            						}
HXDLIN( 241)						_hx_tmp = ::hx::IsEq( value,0 );
            					}
            					else {
HXLINE( 241)						_hx_tmp = false;
            					}
HXDLIN( 241)					if (_hx_tmp) {
HXLINE( 242)						 ::Dynamic target = this->target;
HXDLIN( 242)						 ::Dynamic value = false;
HXDLIN( 242)						if (::Reflect_obj::hasField(target,HX_("visible",72,78,24,a3))) {
HXLINE( 242)							::Reflect_obj::setField(target,HX_("visible",72,78,24,a3),value);
            						}
            						else {
HXLINE( 242)							::Reflect_obj::setProperty(target,HX_("visible",72,78,24,a3),value);
            						}
            					}
HXLINE( 245)					this->complete(true);
HXLINE( 246)					return;
            				}
            				else {
HXLINE( 248)					if (::hx::IsNotNull( this->_onRepeat )) {
HXLINE( 249)						 ::Dynamic method = this->_onRepeat;
HXDLIN( 249)						::cpp::VirtualArray params = this->_onRepeatParams;
HXDLIN( 249)						if (::hx::IsNull( params )) {
HXLINE( 249)							params = ::cpp::VirtualArray_obj::__new(0);
            						}
HXDLIN( 249)						::Reflect_obj::callMethod(method,method,params);
            					}
HXLINE( 252)					if (this->_reflect) {
HXLINE( 253)						this->_reverse = !(this->_reverse);
            					}
HXLINE( 256)					this->startTime = currentTime;
HXLINE( 257)					this->timeOffset = (this->startTime + this->_delay);
HXLINE( 259)					if ((this->_repeat > 0)) {
HXLINE( 260)						this->_repeat--;
            					}
            				}
            			}
HXLINE( 265)			if (this->sendChange) {
HXLINE( 266)				this->change();
            			}
            		}
            	}



::hx::ObjectPtr< SimpleEffectActuator_obj > SimpleEffectActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< SimpleEffectActuator_obj > __this = new SimpleEffectActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< SimpleEffectActuator_obj > SimpleEffectActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	SimpleEffectActuator_obj *__this = (SimpleEffectActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleEffectActuator_obj), true, "feathers.motion.effects.actuate.SimpleEffectActuator"));
	*(void **)__this = SimpleEffectActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

SimpleEffectActuator_obj::SimpleEffectActuator_obj()
{
}

::hx::Val SimpleEffectActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goto") ) { return ::hx::Val( _hx_goto_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getEase") ) { return ::hx::Val( getEase_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getDelay") ) { return ::hx::Val( getDelay_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getTarget") ) { return ::hx::Val( getTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRepeat") ) { return ::hx::Val( getRepeat_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getReflect") ) { return ::hx::Val( getReflect_dyn() ); }
		if (HX_FIELD_EQ(inName,"getReverse") ) { return ::hx::Val( getReverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnPause") ) { return ::hx::Val( getOnPause_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDuration") ) { return ::hx::Val( getDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSnapping") ) { return ::hx::Val( getSnapping_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnRepeat") ) { return ::hx::Val( getOnRepeat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnUpdate") ) { return ::hx::Val( getOnUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnResume") ) { return ::hx::Val( getOnResume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getOnComplete") ) { return ::hx::Val( getOnComplete_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAutoVisible") ) { return ::hx::Val( getAutoVisible_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getSmartRotation") ) { return ::hx::Val( getSmartRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnPauseParams") ) { return ::hx::Val( getOnPauseParams_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getOnRepeatParams") ) { return ::hx::Val( getOnRepeatParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnUpdateParams") ) { return ::hx::Val( getOnUpdateParams_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOnResumeParams") ) { return ::hx::Val( getOnResumeParams_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getOnCompleteParams") ) { return ::hx::Val( getOnCompleteParams_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SimpleEffectActuator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SimpleEffectActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleEffectActuator_obj_sMemberFields[] = {
	HX_("getTarget",87,7c,43,03),
	HX_("getDuration",0a,d2,81,3a),
	HX_("getEase",a4,3b,8f,15),
	HX_("getAutoVisible",cd,6f,a6,10),
	HX_("getDelay",0d,e7,fd,36),
	HX_("getReflect",47,0a,8b,38),
	HX_("getRepeat",91,20,d3,82),
	HX_("getReverse",2c,bf,5d,6a),
	HX_("getSmartRotation",f1,49,26,ab),
	HX_("getSnapping",72,f8,ac,45),
	HX_("getOnComplete",2e,31,f1,b9),
	HX_("getOnCompleteParams",14,b7,56,7b),
	HX_("getOnRepeat",90,50,1d,0c),
	HX_("getOnRepeatParams",f6,8b,1b,bb),
	HX_("getOnUpdate",3e,3f,a6,8c),
	HX_("getOnUpdateParams",24,b1,a1,89),
	HX_("getOnPause",61,fb,f6,a2),
	HX_("getOnPauseParams",87,a9,96,ae),
	HX_("getOnResume",e2,22,25,0e),
	HX_("getOnResumeParams",c8,e7,ac,69),
	HX_("goto",a3,99,69,44),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class SimpleEffectActuator_obj::__mClass;

void SimpleEffectActuator_obj::__register()
{
	SimpleEffectActuator_obj _hx_dummy;
	SimpleEffectActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.actuate.SimpleEffectActuator",81,9e,b0,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleEffectActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleEffectActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleEffectActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleEffectActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate
