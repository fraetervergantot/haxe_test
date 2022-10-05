#ifndef INCLUDED_feathers_events_ButtonBarEvent
#define INCLUDED_feathers_events_ButtonBarEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,data,ButtonBarItemState)
HX_DECLARE_CLASS2(feathers,events,ButtonBarEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ButtonBarEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ButtonBarEvent_obj OBJ_;
		ButtonBarEvent_obj();

	public:
		enum { _hx_ClassId = 0x254cce8a };

		void __construct(::String type, ::feathers::data::ButtonBarItemState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.ButtonBarEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.ButtonBarEvent"); }
		static ::hx::ObjectPtr< ButtonBarEvent_obj > __new(::String type, ::feathers::data::ButtonBarItemState state);
		static ::hx::ObjectPtr< ButtonBarEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::feathers::data::ButtonBarItemState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonBarEvent_obj();

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
		::String __ToString() const { return HX_("ButtonBarEvent",79,fd,78,63); }

		static void __boot();
		static ::String ITEM_TRIGGER;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type, ::feathers::data::ButtonBarItemState state);
		static ::Dynamic dispatch_dyn();

		 ::feathers::data::ButtonBarItemState state;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_ButtonBarEvent */ 
