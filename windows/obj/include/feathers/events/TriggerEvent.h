#ifndef INCLUDED_feathers_events_TriggerEvent
#define INCLUDED_feathers_events_TriggerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,events,TriggerEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TriggerEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TriggerEvent_obj OBJ_;
		TriggerEvent_obj();

	public:
		enum { _hx_ClassId = 0x67fffeb3 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.TriggerEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.TriggerEvent"); }
		static ::hx::ObjectPtr< TriggerEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey);
		static ::hx::ObjectPtr< TriggerEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriggerEvent_obj();

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
		::String __ToString() const { return HX_("TriggerEvent",e2,43,6d,bc); }

		static void __boot();
		static ::String TRIGGER;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatchFromMouseEvent(::Dynamic dispatcher, ::openfl::events::MouseEvent mouseEvent);
		static ::Dynamic dispatchFromMouseEvent_dyn();

		static bool dispatchFromTouchEvent(::Dynamic dispatcher, ::openfl::events::TouchEvent touchEvent);
		static ::Dynamic dispatchFromTouchEvent_dyn();

		static  ::feathers::events::TriggerEvent fromMouseEvent( ::openfl::events::MouseEvent event, ::feathers::events::TriggerEvent existing);
		static ::Dynamic fromMouseEvent_dyn();

		static  ::feathers::events::TriggerEvent fromTouchEvent( ::openfl::events::TouchEvent event, ::feathers::events::TriggerEvent existing);
		static ::Dynamic fromTouchEvent_dyn();

		int touchPointID;
		bool isPrimaryTouchPoint;
		bool altKey;
		bool commandKey;
		bool ctrlKey;
		bool controlKey;
		bool shiftKey;
		Float localX;
		Float localY;
		Float sizeX;
		Float sizeY;
		Float pressure;
		Float stageX;
		Float stageY;
		 ::openfl::display::InteractiveObject relatedObject;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_TriggerEvent */ 
