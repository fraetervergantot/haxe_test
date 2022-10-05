#ifndef INCLUDED_feathers_events_FlatCollectionEvent
#define INCLUDED_feathers_events_FlatCollectionEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,events,FlatCollectionEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES FlatCollectionEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef FlatCollectionEvent_obj OBJ_;
		FlatCollectionEvent_obj();

	public:
		enum { _hx_ClassId = 0x0455d252 };

		void __construct(::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.FlatCollectionEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.FlatCollectionEvent"); }
		static ::hx::ObjectPtr< FlatCollectionEvent_obj > __new(::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< FlatCollectionEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlatCollectionEvent_obj();

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
		::String __ToString() const { return HX_("FlatCollectionEvent",03,21,8e,e0); }

		static void __boot();
		static ::String ADD_ITEM;
		static ::String REMOVE_ITEM;
		static ::String REPLACE_ITEM;
		static ::String UPDATE_ITEM;
		static ::String UPDATE_ALL;
		static ::String RESET;
		static ::String REMOVE_ALL;
		static ::String FILTER_CHANGE;
		static ::String SORT_CHANGE;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  bubbles,::hx::Null< bool >  cancelable);
		static ::Dynamic dispatch_dyn();

		int index;
		 ::Dynamic addedItem;
		 ::Dynamic removedItem;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_FlatCollectionEvent */ 
