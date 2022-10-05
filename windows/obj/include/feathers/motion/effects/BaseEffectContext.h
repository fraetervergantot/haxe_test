#ifndef INCLUDED_feathers_motion_effects_BaseEffectContext
#define INCLUDED_feathers_motion_effects_BaseEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,BaseEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES BaseEffectContext_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef BaseEffectContext_obj OBJ_;
		BaseEffectContext_obj();

	public:
		enum { _hx_ClassId = 0x30a87a91 };

		void __construct( ::Dynamic target,Float duration,::Dynamic ease);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.BaseEffectContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.BaseEffectContext"); }
		static ::hx::ObjectPtr< BaseEffectContext_obj > __new( ::Dynamic target,Float duration,::Dynamic ease);
		static ::hx::ObjectPtr< BaseEffectContext_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration,::Dynamic ease);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseEffectContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseEffectContext",6d,f8,ad,91); }

		 ::Dynamic _target;
		 ::Dynamic get_target();
		::Dynamic get_target_dyn();

		Float _duration;
		Float get_duration();
		::Dynamic get_duration_dyn();

		Float _position;
		Float get_position();
		::Dynamic get_position_dyn();

		Float set_position(Float value);
		::Dynamic set_position_dyn();

		::Dynamic _ease;
		::Dynamic get_ease();
		::Dynamic get_ease_dyn();

		bool _playing;
		bool _reversed;
		::Dynamic _animatePlayback;
		void play();
		::Dynamic play_dyn();

		void playReverse();
		::Dynamic playReverse_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		void toEnd();
		::Dynamic toEnd_dyn();

		virtual void interrupt();
		::Dynamic interrupt_dyn();

		void prepareEffect();
		::Dynamic prepareEffect_dyn();

		virtual void updateEffect();
		::Dynamic updateEffect_dyn();

		virtual void cleanupEffect();
		::Dynamic cleanupEffect_dyn();

		void animatePlayback_onComplete();
		::Dynamic animatePlayback_onComplete_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_BaseEffectContext */ 
