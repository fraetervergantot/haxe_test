#ifndef INCLUDED_feathers_motion_effects_NoOpEffectContext
#define INCLUDED_feathers_motion_effects_NoOpEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,NoOpEffectContext)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES NoOpEffectContext_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NoOpEffectContext_obj OBJ_;
		NoOpEffectContext_obj();

	public:
		enum { _hx_ClassId = 0x79c0166c };

		void __construct( ::Dynamic target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.NoOpEffectContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.NoOpEffectContext"); }
		static ::hx::ObjectPtr< NoOpEffectContext_obj > __new( ::Dynamic target);
		static ::hx::ObjectPtr< NoOpEffectContext_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NoOpEffectContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("NoOpEffectContext",1c,2e,ce,03); }

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

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void playReverse();
		::Dynamic playReverse_dyn();

		void stop();
		::Dynamic stop_dyn();

		void toEnd();
		::Dynamic toEnd_dyn();

		void interrupt();
		::Dynamic interrupt_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_NoOpEffectContext */ 
