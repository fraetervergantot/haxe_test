#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_BaseEffectContext
#include <feathers/motion/effects/BaseEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_EffectInterruptBehavior
#include <feathers/motion/effects/EffectInterruptBehavior.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateEffectContext
#include <feathers/motion/effects/actuate/ActuateEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8cd008643003e509_47_new,"feathers.motion.effects.actuate.ActuateEffectContext","new",0x7e1ea186,"feathers.motion.effects.actuate.ActuateEffectContext.new","feathers/motion/effects/actuate/ActuateEffectContext.hx",47,0xef1f79c8)
HX_LOCAL_STACK_FRAME(_hx_pos_8cd008643003e509_80_get_actuator,"feathers.motion.effects.actuate.ActuateEffectContext","get_actuator",0x45a28b5c,"feathers.motion.effects.actuate.ActuateEffectContext.get_actuator","feathers/motion/effects/actuate/ActuateEffectContext.hx",80,0xef1f79c8)
HX_LOCAL_STACK_FRAME(_hx_pos_8cd008643003e509_101_interrupt,"feathers.motion.effects.actuate.ActuateEffectContext","interrupt",0x65452b49,"feathers.motion.effects.actuate.ActuateEffectContext.interrupt","feathers/motion/effects/actuate/ActuateEffectContext.hx",101,0xef1f79c8)
HX_LOCAL_STACK_FRAME(_hx_pos_8cd008643003e509_110_updateEffect,"feathers.motion.effects.actuate.ActuateEffectContext","updateEffect",0x3047db94,"feathers.motion.effects.actuate.ActuateEffectContext.updateEffect","feathers/motion/effects/actuate/ActuateEffectContext.hx",110,0xef1f79c8)
HX_LOCAL_STACK_FRAME(_hx_pos_8cd008643003e509_114_cleanupEffect,"feathers.motion.effects.actuate.ActuateEffectContext","cleanupEffect",0x0d6d8a7b,"feathers.motion.effects.actuate.ActuateEffectContext.cleanupEffect","feathers/motion/effects/actuate/ActuateEffectContext.hx",114,0xef1f79c8)
namespace feathers{
namespace motion{
namespace effects{
namespace actuate{

void ActuateEffectContext_obj::__construct( ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior){
            		 ::feathers::motion::effects::EffectInterruptBehavior interruptBehavior = __o_interruptBehavior;
            		if (::hx::IsNull(__o_interruptBehavior)) interruptBehavior = ::feathers::motion::effects::EffectInterruptBehavior_obj::END_dyn();
            	HX_STACKFRAME(&_hx_pos_8cd008643003e509_47_new)
HXLINE(  48)		this->_actuator = actuator;
HXLINE(  49)		this->interruptBehavior = interruptBehavior;
HXLINE(  51)		::Dynamic originalEase = ::feathers::motion::effects::actuate::IReadableGenericActuator_obj::getEase(this->_actuator);
HXLINE(  55)		::Dynamic _hx_tmp = this->_actuator;
HXDLIN(  55)		::motion::actuators::IGenericActuator_obj::ease(_hx_tmp,::motion::easing::Linear_obj::get_easeNone());
HXLINE(  57)		this->_onComplete = ::feathers::motion::effects::actuate::IReadableGenericActuator_obj::getOnComplete(this->_actuator);
HXLINE(  58)		this->_onCompleteParams = ::feathers::motion::effects::actuate::IReadableGenericActuator_obj::getOnCompleteParams(this->_actuator);
HXLINE(  59)		::motion::actuators::IGenericActuator_obj::onComplete(this->_actuator,null(),null());
HXLINE(  61)		if (::hx::IsNull( target )) {
HXLINE(  62)			target = ::feathers::motion::effects::actuate::IReadableGenericActuator_obj::getTarget(this->_actuator);
            		}
HXLINE(  65)		super::__construct(target,::feathers::motion::effects::actuate::IReadableGenericActuator_obj::getDuration(this->_actuator),originalEase);
            	}

Dynamic ActuateEffectContext_obj::__CreateEmpty() { return new ActuateEffectContext_obj; }

void *ActuateEffectContext_obj::_hx_vtable = 0;

Dynamic ActuateEffectContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActuateEffectContext_obj > _hx_result = new ActuateEffectContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ActuateEffectContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x30a87a91) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x30a87a91;
		}
	} else {
		return inClassId==(int)0x64f0f9b2;
	}
}

::Dynamic ActuateEffectContext_obj::get_actuator(){
            	HX_STACKFRAME(&_hx_pos_8cd008643003e509_80_get_actuator)
HXDLIN(  80)		return this->_actuator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ActuateEffectContext_obj,get_actuator,return )

void ActuateEffectContext_obj::interrupt(){
            	HX_STACKFRAME(&_hx_pos_8cd008643003e509_101_interrupt)
HXLINE( 102)		if (::hx::IsPointerEq( this->interruptBehavior,::feathers::motion::effects::EffectInterruptBehavior_obj::STOP_dyn() )) {
HXLINE( 103)			this->stop();
HXLINE( 104)			return;
            		}
HXLINE( 106)		this->toEnd();
            	}


void ActuateEffectContext_obj::updateEffect(){
            	HX_STACKFRAME(&_hx_pos_8cd008643003e509_110_updateEffect)
HXDLIN( 110)		::Dynamic _hx_tmp = this->_actuator;
HXDLIN( 110)		::feathers::motion::effects::actuate::IGotoActuator_obj::_hx_goto(_hx_tmp,this->get_position());
            	}


void ActuateEffectContext_obj::cleanupEffect(){
            	HX_STACKFRAME(&_hx_pos_8cd008643003e509_114_cleanupEffect)
HXDLIN( 114)		if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 115)			::cpp::VirtualArray params = this->_onCompleteParams;
HXLINE( 116)			if (::hx::IsNull( params )) {
HXLINE( 117)				params = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 119)			::Reflect_obj::callMethod(this->_onComplete,this->_onComplete,params);
            		}
            	}



::hx::ObjectPtr< ActuateEffectContext_obj > ActuateEffectContext_obj::__new( ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior) {
	::hx::ObjectPtr< ActuateEffectContext_obj > __this = new ActuateEffectContext_obj();
	__this->__construct(target,actuator,__o_interruptBehavior);
	return __this;
}

::hx::ObjectPtr< ActuateEffectContext_obj > ActuateEffectContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior) {
	ActuateEffectContext_obj *__this = (ActuateEffectContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActuateEffectContext_obj), true, "feathers.motion.effects.actuate.ActuateEffectContext"));
	*(void **)__this = ActuateEffectContext_obj::_hx_vtable;
	__this->__construct(target,actuator,__o_interruptBehavior);
	return __this;
}

ActuateEffectContext_obj::ActuateEffectContext_obj()
{
}

void ActuateEffectContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActuateEffectContext);
	HX_MARK_MEMBER_NAME(_actuator,"_actuator");
	HX_MARK_MEMBER_NAME(interruptBehavior,"interruptBehavior");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	 ::feathers::motion::effects::BaseEffectContext_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActuateEffectContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_actuator,"_actuator");
	HX_VISIT_MEMBER_NAME(interruptBehavior,"interruptBehavior");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	 ::feathers::motion::effects::BaseEffectContext_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ActuateEffectContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"actuator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_actuator() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_actuator") ) { return ::hx::Val( _actuator ); }
		if (HX_FIELD_EQ(inName,"interrupt") ) { return ::hx::Val( interrupt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_actuator") ) { return ::hx::Val( get_actuator_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateEffect") ) { return ::hx::Val( updateEffect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cleanupEffect") ) { return ::hx::Val( cleanupEffect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interruptBehavior") ) { return ::hx::Val( interruptBehavior ); }
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return ::hx::Val( _onCompleteParams ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ActuateEffectContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_actuator") ) { _actuator=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"interruptBehavior") ) { interruptBehavior=inValue.Cast<  ::feathers::motion::effects::EffectInterruptBehavior >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActuateEffectContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_actuator",98,f4,3d,08));
	outFields->push(HX_("actuator",39,fd,a7,c0));
	outFields->push(HX_("interruptBehavior",55,21,f3,73));
	outFields->push(HX_("_onComplete",17,a2,08,30));
	outFields->push(HX_("_onCompleteParams",bd,3c,ab,59));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActuateEffectContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ActuateEffectContext_obj,_actuator),HX_("_actuator",98,f4,3d,08)},
	{::hx::fsObject /*  ::feathers::motion::effects::EffectInterruptBehavior */ ,(int)offsetof(ActuateEffectContext_obj,interruptBehavior),HX_("interruptBehavior",55,21,f3,73)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ActuateEffectContext_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ActuateEffectContext_obj,_onCompleteParams),HX_("_onCompleteParams",bd,3c,ab,59)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ActuateEffectContext_obj_sStaticStorageInfo = 0;
#endif

static ::String ActuateEffectContext_obj_sMemberFields[] = {
	HX_("_actuator",98,f4,3d,08),
	HX_("get_actuator",42,b1,c1,75),
	HX_("interruptBehavior",55,21,f3,73),
	HX_("_onComplete",17,a2,08,30),
	HX_("_onCompleteParams",bd,3c,ab,59),
	HX_("interrupt",a3,f9,d7,41),
	HX_("updateEffect",7a,01,67,60),
	HX_("cleanupEffect",d5,8d,8f,f8),
	::String(null()) };

::hx::Class ActuateEffectContext_obj::__mClass;

void ActuateEffectContext_obj::__register()
{
	ActuateEffectContext_obj _hx_dummy;
	ActuateEffectContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.actuate.ActuateEffectContext",94,26,0a,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActuateEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActuateEffectContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActuateEffectContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActuateEffectContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate
