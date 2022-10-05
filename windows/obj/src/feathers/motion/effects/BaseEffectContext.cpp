#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_BaseEffectContext
#include <feathers/motion/effects/BaseEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f314fcaef2849992_33_new,"feathers.motion.effects.BaseEffectContext","new",0x06bea739,"feathers.motion.effects.BaseEffectContext.new","feathers/motion/effects/BaseEffectContext.hx",33,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_52_get_target,"feathers.motion.effects.BaseEffectContext","get_target",0x19730961,"feathers.motion.effects.BaseEffectContext.get_target","feathers/motion/effects/BaseEffectContext.hx",52,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_65_get_duration,"feathers.motion.effects.BaseEffectContext","get_duration",0xe551c964,"feathers.motion.effects.BaseEffectContext.get_duration","feathers/motion/effects/BaseEffectContext.hx",65,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_80_get_position,"feathers.motion.effects.BaseEffectContext","get_position",0x9bbe5ab9,"feathers.motion.effects.BaseEffectContext.get_position","feathers/motion/effects/BaseEffectContext.hx",80,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_83_set_position,"feathers.motion.effects.BaseEffectContext","set_position",0xb0b77e2d,"feathers.motion.effects.BaseEffectContext.set_position","feathers/motion/effects/BaseEffectContext.hx",83,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_103_get_ease,"feathers.motion.effects.BaseEffectContext","get_ease",0x5ec5fdfe,"feathers.motion.effects.BaseEffectContext.get_ease","feathers/motion/effects/BaseEffectContext.hx",103,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_131_play,"feathers.motion.effects.BaseEffectContext","play",0xe16b54fb,"feathers.motion.effects.BaseEffectContext.play","feathers/motion/effects/BaseEffectContext.hx",131,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_115_play,"feathers.motion.effects.BaseEffectContext","play",0xe16b54fb,"feathers.motion.effects.BaseEffectContext.play","feathers/motion/effects/BaseEffectContext.hx",115,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_159_playReverse,"feathers.motion.effects.BaseEffectContext","playReverse",0x7c2a7167,"feathers.motion.effects.BaseEffectContext.playReverse","feathers/motion/effects/BaseEffectContext.hx",159,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_143_playReverse,"feathers.motion.effects.BaseEffectContext","playReverse",0x7c2a7167,"feathers.motion.effects.BaseEffectContext.playReverse","feathers/motion/effects/BaseEffectContext.hx",143,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_170_pause,"feathers.motion.effects.BaseEffectContext","pause",0x5548d60f,"feathers.motion.effects.BaseEffectContext.pause","feathers/motion/effects/BaseEffectContext.hx",170,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_190_stop,"feathers.motion.effects.BaseEffectContext","stop",0xe36d1709,"feathers.motion.effects.BaseEffectContext.stop","feathers/motion/effects/BaseEffectContext.hx",190,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_204_toEnd,"feathers.motion.effects.BaseEffectContext","toEnd",0xabffb439,"feathers.motion.effects.BaseEffectContext.toEnd","feathers/motion/effects/BaseEffectContext.hx",204,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_224_interrupt,"feathers.motion.effects.BaseEffectContext","interrupt",0x24b8f93c,"feathers.motion.effects.BaseEffectContext.interrupt","feathers/motion/effects/BaseEffectContext.hx",224,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_234_prepareEffect,"feathers.motion.effects.BaseEffectContext","prepareEffect",0x4004ff91,"feathers.motion.effects.BaseEffectContext.prepareEffect","feathers/motion/effects/BaseEffectContext.hx",234,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_243_updateEffect,"feathers.motion.effects.BaseEffectContext","updateEffect",0x7c110781,"feathers.motion.effects.BaseEffectContext.updateEffect","feathers/motion/effects/BaseEffectContext.hx",243,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_252_cleanupEffect,"feathers.motion.effects.BaseEffectContext","cleanupEffect",0x11aacdee,"feathers.motion.effects.BaseEffectContext.cleanupEffect","feathers/motion/effects/BaseEffectContext.hx",252,0xa7daaaf8)
HX_LOCAL_STACK_FRAME(_hx_pos_f314fcaef2849992_254_animatePlayback_onComplete,"feathers.motion.effects.BaseEffectContext","animatePlayback_onComplete",0xb359aa02,"feathers.motion.effects.BaseEffectContext.animatePlayback_onComplete","feathers/motion/effects/BaseEffectContext.hx",254,0xa7daaaf8)
namespace feathers{
namespace motion{
namespace effects{

void BaseEffectContext_obj::__construct( ::Dynamic target,Float duration,::Dynamic ease){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_33_new)
HXLINE( 107)		this->_reversed = false;
HXLINE( 106)		this->_playing = false;
HXLINE(  68)		this->_position = ((Float)0.0);
HXLINE(  55)		this->_duration = ((Float)0.0);
HXLINE(  35)		super::__construct(null());
HXLINE(  36)		this->_target = target;
HXLINE(  37)		this->_duration = duration;
HXLINE(  38)		this->_ease = ease;
            	}

Dynamic BaseEffectContext_obj::__CreateEmpty() { return new BaseEffectContext_obj; }

void *BaseEffectContext_obj::_hx_vtable = 0;

Dynamic BaseEffectContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseEffectContext_obj > _hx_result = new BaseEffectContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BaseEffectContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x30a87a91;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_motion_effects_BaseEffectContext__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::BaseEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::BaseEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::BaseEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseEffectContext_obj::willTrigger,
};

static ::feathers::motion::effects::IEffectContext_obj _hx_feathers_motion_effects_BaseEffectContext__hx_feathers_motion_effects_IEffectContext= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::BaseEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::BaseEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::BaseEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseEffectContext_obj::willTrigger,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::get_target,
	( Float (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::get_duration,
	( Float (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::get_position,
	( Float (::hx::Object::*)(Float))&::feathers::motion::effects::BaseEffectContext_obj::set_position,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::play,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::playReverse,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::stop,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::toEnd,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseEffectContext_obj::interrupt,
};

void *BaseEffectContext_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_motion_effects_BaseEffectContext__hx_openfl_events_IEventDispatcher;
		case (int)0xa2226771: return &_hx_feathers_motion_effects_BaseEffectContext__hx_feathers_motion_effects_IEffectContext;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic BaseEffectContext_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_52_get_target)
HXDLIN(  52)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,get_target,return )

Float BaseEffectContext_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_65_get_duration)
HXDLIN(  65)		return this->_duration;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,get_duration,return )

Float BaseEffectContext_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_80_get_position)
HXDLIN(  80)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,get_position,return )

Float BaseEffectContext_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_83_set_position)
HXLINE(  84)		if ((this->_position == value)) {
HXLINE(  85)			return this->_position;
            		}
HXLINE(  87)		this->_position = value;
HXLINE(  88)		this->updateEffect();
HXLINE(  89)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  90)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseEffectContext_obj,set_position,return )

::Dynamic BaseEffectContext_obj::get_ease(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_103_get_ease)
HXDLIN( 103)		return this->_ease;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,get_ease,return )

void BaseEffectContext_obj::play(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::motion::effects::BaseEffectContext,_gthis) HXARGC(1)
            		void _hx_run(Float value){
            			HX_STACKFRAME(&_hx_pos_f314fcaef2849992_131_play)
HXLINE( 131)			_gthis->set_position(value);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_115_play)
HXDLIN( 115)		 ::feathers::motion::effects::BaseEffectContext _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 116)		bool _hx_tmp;
HXDLIN( 116)		if (this->_playing) {
HXLINE( 116)			_hx_tmp = !(this->_reversed);
            		}
            		else {
HXLINE( 116)			_hx_tmp = false;
            		}
HXDLIN( 116)		if (_hx_tmp) {
HXLINE( 118)			return;
            		}
HXLINE( 120)		if (::hx::IsNotNull( this->_animatePlayback )) {
HXLINE( 121)			::motion::Actuate_obj::stop(this->_animatePlayback,null(),false,false);
HXLINE( 122)			this->_animatePlayback = null();
            		}
HXLINE( 124)		this->_playing = true;
HXLINE( 125)		this->_reversed = false;
HXLINE( 127)		Float duration = (this->_duration * (((Float)1.0) - this->_position));
HXLINE( 130)		this->_animatePlayback = ::motion::Actuate_obj::update( ::Dynamic(new _hx_Closure_0(_gthis)),duration,::cpp::VirtualArray_obj::__new(1)->init(0,this->_position),::cpp::VirtualArray_obj::__new(1)->init(0,((Float)1.0)),null());
HXLINE( 133)		::motion::actuators::IGenericActuator_obj::ease(this->_animatePlayback,this->_ease);
HXLINE( 134)		::motion::actuators::IGenericActuator_obj::onComplete(this->_animatePlayback,this->animatePlayback_onComplete_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,play,(void))

void BaseEffectContext_obj::playReverse(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::motion::effects::BaseEffectContext,_gthis) HXARGC(1)
            		void _hx_run(Float value){
            			HX_STACKFRAME(&_hx_pos_f314fcaef2849992_159_playReverse)
HXLINE( 159)			_gthis->set_position(value);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_143_playReverse)
HXDLIN( 143)		 ::feathers::motion::effects::BaseEffectContext _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (this->_playing) {
HXLINE( 144)			_hx_tmp = this->_reversed;
            		}
            		else {
HXLINE( 144)			_hx_tmp = false;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 146)			return;
            		}
HXLINE( 148)		if (::hx::IsNotNull( this->_animatePlayback )) {
HXLINE( 149)			::motion::Actuate_obj::stop(this->_animatePlayback,null(),false,false);
HXLINE( 150)			this->_animatePlayback = null();
            		}
HXLINE( 152)		this->_playing = true;
HXLINE( 153)		this->_reversed = true;
HXLINE( 155)		Float duration = (this->_duration * this->_position);
HXLINE( 158)		this->_animatePlayback = ::motion::Actuate_obj::update( ::Dynamic(new _hx_Closure_0(_gthis)),duration,::cpp::VirtualArray_obj::__new(1)->init(0,this->_position),::cpp::VirtualArray_obj::__new(1)->init(0,((Float)0.0)),null());
HXLINE( 161)		::motion::actuators::IGenericActuator_obj::ease(this->_animatePlayback,this->_ease);
HXLINE( 162)		::motion::actuators::IGenericActuator_obj::onComplete(this->_animatePlayback,this->animatePlayback_onComplete_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,playReverse,(void))

void BaseEffectContext_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_170_pause)
HXLINE( 171)		if (!(this->_playing)) {
HXLINE( 173)			return;
            		}
HXLINE( 175)		if (::hx::IsNotNull( this->_animatePlayback )) {
HXLINE( 176)			::motion::Actuate_obj::stop(this->_animatePlayback,null(),false,false);
HXLINE( 177)			this->_animatePlayback = null();
            		}
HXLINE( 179)		this->_playing = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,pause,(void))

void BaseEffectContext_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_190_stop)
HXLINE( 191)		this->pause();
HXLINE( 192)		this->cleanupEffect();
HXLINE( 193)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("complete",b9,00,c8,7f),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,stop,(void))

void BaseEffectContext_obj::toEnd(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_204_toEnd)
HXLINE( 205)		this->pause();
HXLINE( 206)		this->_position = ((Float)1.0);
HXLINE( 207)		this->cleanupEffect();
HXLINE( 208)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("complete",b9,00,c8,7f),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,toEnd,(void))

void BaseEffectContext_obj::interrupt(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_224_interrupt)
HXDLIN( 224)		this->toEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,interrupt,(void))

void BaseEffectContext_obj::prepareEffect(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_234_prepareEffect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,prepareEffect,(void))

void BaseEffectContext_obj::updateEffect(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_243_updateEffect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,updateEffect,(void))

void BaseEffectContext_obj::cleanupEffect(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_252_cleanupEffect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,cleanupEffect,(void))

void BaseEffectContext_obj::animatePlayback_onComplete(){
            	HX_STACKFRAME(&_hx_pos_f314fcaef2849992_254_animatePlayback_onComplete)
HXLINE( 255)		this->_animatePlayback = null();
HXLINE( 256)		this->cleanupEffect();
HXLINE( 257)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("complete",b9,00,c8,7f),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseEffectContext_obj,animatePlayback_onComplete,(void))


::hx::ObjectPtr< BaseEffectContext_obj > BaseEffectContext_obj::__new( ::Dynamic target,Float duration,::Dynamic ease) {
	::hx::ObjectPtr< BaseEffectContext_obj > __this = new BaseEffectContext_obj();
	__this->__construct(target,duration,ease);
	return __this;
}

::hx::ObjectPtr< BaseEffectContext_obj > BaseEffectContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration,::Dynamic ease) {
	BaseEffectContext_obj *__this = (BaseEffectContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseEffectContext_obj), true, "feathers.motion.effects.BaseEffectContext"));
	*(void **)__this = BaseEffectContext_obj::_hx_vtable;
	__this->__construct(target,duration,ease);
	return __this;
}

BaseEffectContext_obj::BaseEffectContext_obj()
{
}

void BaseEffectContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseEffectContext);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_playing,"_playing");
	HX_MARK_MEMBER_NAME(_reversed,"_reversed");
	HX_MARK_MEMBER_NAME(_animatePlayback,"_animatePlayback");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseEffectContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_playing,"_playing");
	HX_VISIT_MEMBER_NAME(_reversed,"_reversed");
	HX_VISIT_MEMBER_NAME(_animatePlayback,"_animatePlayback");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseEffectContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ease() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return ::hx::Val( _ease ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"toEnd") ) { return ::hx::Val( toEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"get_ease") ) { return ::hx::Val( get_ease_dyn() ); }
		if (HX_FIELD_EQ(inName,"_playing") ) { return ::hx::Val( _playing ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { return ::hx::Val( _duration ); }
		if (HX_FIELD_EQ(inName,"_position") ) { return ::hx::Val( _position ); }
		if (HX_FIELD_EQ(inName,"_reversed") ) { return ::hx::Val( _reversed ); }
		if (HX_FIELD_EQ(inName,"interrupt") ) { return ::hx::Val( interrupt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playReverse") ) { return ::hx::Val( playReverse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateEffect") ) { return ::hx::Val( updateEffect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareEffect") ) { return ::hx::Val( prepareEffect_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupEffect") ) { return ::hx::Val( cleanupEffect_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_animatePlayback") ) { return ::hx::Val( _animatePlayback ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"animatePlayback_onComplete") ) { return ::hx::Val( animatePlayback_onComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseEffectContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_playing") ) { _playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reversed") ) { _reversed=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_animatePlayback") ) { _animatePlayback=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseEffectContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_duration",b3,06,24,5c));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("_position",08,98,90,12));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("_ease",cd,a7,1d,f6));
	outFields->push(HX_("ease",ee,8b,0c,43));
	outFields->push(HX_("_playing",ef,68,d0,c3));
	outFields->push(HX_("_reversed",61,bc,4b,c9));
	outFields->push(HX_("_animatePlayback",5d,f4,65,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseEffectContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseEffectContext_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(BaseEffectContext_obj,_duration),HX_("_duration",b3,06,24,5c)},
	{::hx::fsFloat,(int)offsetof(BaseEffectContext_obj,_position),HX_("_position",08,98,90,12)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(BaseEffectContext_obj,_ease),HX_("_ease",cd,a7,1d,f6)},
	{::hx::fsBool,(int)offsetof(BaseEffectContext_obj,_playing),HX_("_playing",ef,68,d0,c3)},
	{::hx::fsBool,(int)offsetof(BaseEffectContext_obj,_reversed),HX_("_reversed",61,bc,4b,c9)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(BaseEffectContext_obj,_animatePlayback),HX_("_animatePlayback",5d,f4,65,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseEffectContext_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseEffectContext_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("_duration",b3,06,24,5c),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("_position",08,98,90,12),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("_ease",cd,a7,1d,f6),
	HX_("get_ease",77,47,c7,c2),
	HX_("_playing",ef,68,d0,c3),
	HX_("_reversed",61,bc,4b,c9),
	HX_("_animatePlayback",5d,f4,65,ee),
	HX_("play",f4,2d,5a,4a),
	HX_("playReverse",8e,99,57,5f),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("toEnd",20,b5,0e,14),
	HX_("interrupt",a3,f9,d7,41),
	HX_("prepareEffect",78,bf,e9,26),
	HX_("updateEffect",7a,01,67,60),
	HX_("cleanupEffect",d5,8d,8f,f8),
	HX_("animatePlayback_onComplete",bb,c5,8f,49),
	::String(null()) };

::hx::Class BaseEffectContext_obj::__mClass;

void BaseEffectContext_obj::__register()
{
	BaseEffectContext_obj _hx_dummy;
	BaseEffectContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.BaseEffectContext",c7,96,42,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseEffectContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseEffectContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseEffectContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
