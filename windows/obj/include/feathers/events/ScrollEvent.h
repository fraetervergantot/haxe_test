#ifndef INCLUDED_feathers_events_ScrollEvent
#define INCLUDED_feathers_events_ScrollEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,events,ScrollEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ScrollEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ScrollEvent_obj OBJ_;
		ScrollEvent_obj();

	public:
		enum { _hx_ClassId = 0x4b8ce2c4 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.ScrollEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.ScrollEvent"); }
		static ::hx::ObjectPtr< ScrollEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< ScrollEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollEvent",ad,a8,d4,a3); }

		static void __boot();
		static ::String SCROLL_START;
		static ::String SCROLL_COMPLETE;
		static ::String SCROLL;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type,::hx::Null< bool >  bubbles,::hx::Null< bool >  cancelable);
		static ::Dynamic dispatch_dyn();

		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_ScrollEvent */ 
