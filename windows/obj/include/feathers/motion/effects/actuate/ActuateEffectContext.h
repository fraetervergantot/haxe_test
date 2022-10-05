#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateEffectContext
#define INCLUDED_feathers_motion_effects_actuate_ActuateEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_motion_effects_BaseEffectContext
#include <feathers/motion/effects/BaseEffectContext.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,BaseEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,EffectInterruptBehavior)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,ActuateEffectContext)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IGotoActuator)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IReadableGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


class HXCPP_CLASS_ATTRIBUTES ActuateEffectContext_obj : public  ::feathers::motion::effects::BaseEffectContext_obj
{
	public:
		typedef  ::feathers::motion::effects::BaseEffectContext_obj super;
		typedef ActuateEffectContext_obj OBJ_;
		ActuateEffectContext_obj();

	public:
		enum { _hx_ClassId = 0x64f0f9b2 };

		void __construct( ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.actuate.ActuateEffectContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.actuate.ActuateEffectContext"); }
		static ::hx::ObjectPtr< ActuateEffectContext_obj > __new( ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior);
		static ::hx::ObjectPtr< ActuateEffectContext_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::Dynamic actuator, ::feathers::motion::effects::EffectInterruptBehavior __o_interruptBehavior);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActuateEffectContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ActuateEffectContext",ef,4c,21,86); }

		::Dynamic _actuator;
		::Dynamic get_actuator();
		::Dynamic get_actuator_dyn();

		 ::feathers::motion::effects::EffectInterruptBehavior interruptBehavior;
		 ::Dynamic _onComplete;
		::cpp::VirtualArray _onCompleteParams;
		void interrupt();

		void updateEffect();

		void cleanupEffect();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate

#endif /* INCLUDED_feathers_motion_effects_actuate_ActuateEffectContext */ 
