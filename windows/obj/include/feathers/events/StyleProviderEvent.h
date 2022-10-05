#ifndef INCLUDED_feathers_events_StyleProviderEvent
#define INCLUDED_feathers_events_StyleProviderEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,events,StyleProviderEvent)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES StyleProviderEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef StyleProviderEvent_obj OBJ_;
		StyleProviderEvent_obj();

	public:
		enum { _hx_ClassId = 0x64554021 };

		void __construct(::String type, ::Dynamic affectsTarget);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.StyleProviderEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.StyleProviderEvent"); }
		static ::hx::ObjectPtr< StyleProviderEvent_obj > __new(::String type, ::Dynamic affectsTarget);
		static ::hx::ObjectPtr< StyleProviderEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic affectsTarget);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleProviderEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleProviderEvent",58,f9,a9,93); }

		static void __boot();
		static ::String STYLES_CHANGE;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type, ::Dynamic affectsTarget);
		static ::Dynamic dispatch_dyn();

		static bool defaultAffectsTarget(::Dynamic value);
		static ::Dynamic defaultAffectsTarget_dyn();

		 ::Dynamic affectsTarget;
		Dynamic affectsTarget_dyn() { return affectsTarget;}
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_StyleProviderEvent */ 
