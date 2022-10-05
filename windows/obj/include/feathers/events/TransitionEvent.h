#ifndef INCLUDED_feathers_events_TransitionEvent
#define INCLUDED_feathers_events_TransitionEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,events,TransitionEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TransitionEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TransitionEvent_obj OBJ_;
		TransitionEvent_obj();

	public:
		enum { _hx_ClassId = 0x7b10e7bc };

		void __construct(::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.TransitionEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.TransitionEvent"); }
		static ::hx::ObjectPtr< TransitionEvent_obj > __new(::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView);
		static ::hx::ObjectPtr< TransitionEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransitionEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransitionEvent",25,56,7c,1b); }

		static void __boot();
		static ::String TRANSITION_START;
		static ::String TRANSITION_COMPLETE;
		static ::String TRANSITION_CANCEL;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView);
		static ::Dynamic dispatch_dyn();

		 ::openfl::display::DisplayObject previousView;
		::String previousViewID;
		 ::openfl::display::DisplayObject nextView;
		::String nextViewID;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_TransitionEvent */ 
