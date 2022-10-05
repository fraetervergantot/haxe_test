#ifndef INCLUDED_feathers_motion_effects_EventToPositionEffectContext
#define INCLUDED_feathers_motion_effects_EventToPositionEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_motion_effects_BaseDelegateEffectContext
#include <feathers/motion/effects/BaseDelegateEffectContext.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,BaseDelegateEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,EventToPositionEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES EventToPositionEffectContext_obj : public  ::feathers::motion::effects::BaseDelegateEffectContext_obj
{
	public:
		typedef  ::feathers::motion::effects::BaseDelegateEffectContext_obj super;
		typedef EventToPositionEffectContext_obj OBJ_;
		EventToPositionEffectContext_obj();

	public:
		enum { _hx_ClassId = 0x0d67fefc };

		void __construct(::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.effects.EventToPositionEffectContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.effects.EventToPositionEffectContext"); }
		static ::hx::ObjectPtr< EventToPositionEffectContext_obj > __new(::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback);
		static ::hx::ObjectPtr< EventToPositionEffectContext_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventToPositionEffectContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventToPositionEffectContext",a0,d6,8b,69); }

		::Dynamic _dispatcher;
		::Dynamic get_dispatcher();
		::Dynamic get_dispatcher_dyn();

		::Dynamic set_dispatcher(::Dynamic value);
		::Dynamic set_dispatcher_dyn();

		::String _eventType;
		::String get_eventType();
		::Dynamic get_eventType_dyn();

		::String set_eventType(::String value);
		::Dynamic set_eventType_dyn();

		 ::Dynamic _callback;
		Dynamic _callback_dyn() { return _callback;}
		 ::Dynamic get_callback();
		::Dynamic get_callback_dyn();

		 ::Dynamic set_callback( ::Dynamic value);
		::Dynamic set_callback_dyn();

		bool _paused;
		void play();

		void playReverse();

		void pause();

		void clearEvent();
		::Dynamic clearEvent_dyn();

		void updateEvent();
		::Dynamic updateEvent_dyn();

		void eventToPositionEffectContext_dispatcher_eventHandler( ::openfl::events::Event event);
		::Dynamic eventToPositionEffectContext_dispatcher_eventHandler_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_EventToPositionEffectContext */ 
