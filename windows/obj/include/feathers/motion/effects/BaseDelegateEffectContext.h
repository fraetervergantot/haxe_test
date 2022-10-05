#ifndef INCLUDED_feathers_motion_effects_BaseDelegateEffectContext
#define INCLUDED_feathers_motion_effects_BaseDelegateEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,BaseDelegateEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES BaseDelegateEffectContext_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef BaseDelegateEffectContext_obj OBJ_;
		BaseDelegateEffectContext_obj();

	public:
		enum { _hx_ClassId = 0x30414938 };

		void __construct(::Dynamic context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.BaseDelegateEffectContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.BaseDelegateEffectContext"); }
		static ::hx::ObjectPtr< BaseDelegateEffectContext_obj > __new(::Dynamic context);
		static ::hx::ObjectPtr< BaseDelegateEffectContext_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseDelegateEffectContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseDelegateEffectContext",e8,90,b6,2e); }

		::Dynamic _context;
		::Dynamic get_context();
		::Dynamic get_context_dyn();

		 ::Dynamic get_target();
		::Dynamic get_target_dyn();

		Float get_duration();
		::Dynamic get_duration_dyn();

		Float get_position();
		::Dynamic get_position_dyn();

		Float set_position(Float value);
		::Dynamic set_position_dyn();

		virtual void play();
		::Dynamic play_dyn();

		virtual void playReverse();
		::Dynamic playReverse_dyn();

		virtual void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		void toEnd();
		::Dynamic toEnd_dyn();

		void interrupt();
		::Dynamic interrupt_dyn();

		void baseDelegateEffectContext_context_changeHandler( ::openfl::events::Event event);
		::Dynamic baseDelegateEffectContext_context_changeHandler_dyn();

		void baseDelegateEffectContext_context_completeHandler( ::openfl::events::Event event);
		::Dynamic baseDelegateEffectContext_context_completeHandler_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_BaseDelegateEffectContext */ 
