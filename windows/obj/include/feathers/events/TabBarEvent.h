#ifndef INCLUDED_feathers_events_TabBarEvent
#define INCLUDED_feathers_events_TabBarEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,data,TabBarItemState)
HX_DECLARE_CLASS2(feathers,events,TabBarEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TabBarEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TabBarEvent_obj OBJ_;
		TabBarEvent_obj();

	public:
		enum { _hx_ClassId = 0x7efad233 };

		void __construct(::String type, ::feathers::data::TabBarItemState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.TabBarEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.TabBarEvent"); }
		static ::hx::ObjectPtr< TabBarEvent_obj > __new(::String type, ::feathers::data::TabBarItemState state);
		static ::hx::ObjectPtr< TabBarEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::feathers::data::TabBarItemState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabBarEvent_obj();

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
		::String __ToString() const { return HX_("TabBarEvent",9c,94,e1,03); }

		static void __boot();
		static ::String ITEM_TRIGGER;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type, ::feathers::data::TabBarItemState state);
		static ::Dynamic dispatch_dyn();

		 ::feathers::data::TabBarItemState state;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_TabBarEvent */ 
