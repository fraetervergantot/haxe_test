#ifndef INCLUDED_feathers_motion_effects_actuate_SimpleEffectActuator
#define INCLUDED_feathers_motion_effects_actuate_SimpleEffectActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IGotoActuator)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IReadableGenericActuator)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,SimpleEffectActuator)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


class HXCPP_CLASS_ATTRIBUTES SimpleEffectActuator_obj : public  ::motion::actuators::SimpleActuator_obj
{
	public:
		typedef  ::motion::actuators::SimpleActuator_obj super;
		typedef SimpleEffectActuator_obj OBJ_;
		SimpleEffectActuator_obj();

	public:
		enum { _hx_ClassId = 0x712f7c0f };

		void __construct( ::Dynamic target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.actuate.SimpleEffectActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.actuate.SimpleEffectActuator"); }
		static ::hx::ObjectPtr< SimpleEffectActuator_obj > __new( ::Dynamic target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< SimpleEffectActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleEffectActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic getDuration_2aa2127b();

		::Dynamic onResume_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onPause_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic snapping_881a854a( ::Dynamic value);

		::Dynamic smartRotation_881a854a( ::Dynamic value);

		::Dynamic reverse_881a854a( ::Dynamic value);

		::Dynamic repeat_881a854a( ::Dynamic times);

		::Dynamic reflect_881a854a( ::Dynamic value);

		::Dynamic onUpdate_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onRepeat_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic onComplete_782808ef( ::Dynamic handler,::cpp::VirtualArray parameters);

		::Dynamic ease_02a46974(::Dynamic easing);

		::Dynamic delay_145ae511(Float duration);

		::Dynamic autoVisible_881a854a( ::Dynamic value);
		::String __ToString() const { return HX_("SimpleEffectActuator",dc,c4,c7,0d); }

		 ::Dynamic getTarget();
		::Dynamic getTarget_dyn();

		Float getDuration();
		::Dynamic getDuration_dyn();

		::Dynamic getEase();
		::Dynamic getEase_dyn();

		bool getAutoVisible();
		::Dynamic getAutoVisible_dyn();

		Float getDelay();
		::Dynamic getDelay_dyn();

		bool getReflect();
		::Dynamic getReflect_dyn();

		int getRepeat();
		::Dynamic getRepeat_dyn();

		bool getReverse();
		::Dynamic getReverse_dyn();

		bool getSmartRotation();
		::Dynamic getSmartRotation_dyn();

		bool getSnapping();
		::Dynamic getSnapping_dyn();

		 ::Dynamic getOnComplete();
		::Dynamic getOnComplete_dyn();

		::cpp::VirtualArray getOnCompleteParams();
		::Dynamic getOnCompleteParams_dyn();

		 ::Dynamic getOnRepeat();
		::Dynamic getOnRepeat_dyn();

		::cpp::VirtualArray getOnRepeatParams();
		::Dynamic getOnRepeatParams_dyn();

		 ::Dynamic getOnUpdate();
		::Dynamic getOnUpdate_dyn();

		::cpp::VirtualArray getOnUpdateParams();
		::Dynamic getOnUpdateParams_dyn();

		 ::Dynamic getOnPause();
		::Dynamic getOnPause_dyn();

		::cpp::VirtualArray getOnPauseParams();
		::Dynamic getOnPauseParams_dyn();

		 ::Dynamic getOnResume();
		::Dynamic getOnResume_dyn();

		::cpp::VirtualArray getOnResumeParams();
		::Dynamic getOnResumeParams_dyn();

		void _hx_goto(Float tweenPosition);
		::Dynamic _hx_goto_dyn();

		void update(Float currentTime);

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate

#endif /* INCLUDED_feathers_motion_effects_actuate_SimpleEffectActuator */ 
