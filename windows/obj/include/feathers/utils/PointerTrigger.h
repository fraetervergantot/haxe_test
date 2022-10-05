#ifndef INCLUDED_feathers_utils_PointerTrigger
#define INCLUDED_feathers_utils_PointerTrigger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,PointerTrigger)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES PointerTrigger_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PointerTrigger_obj OBJ_;
		PointerTrigger_obj();

	public:
		enum { _hx_ClassId = 0x0e1549f0 };

		void __construct( ::openfl::display::InteractiveObject target, ::Dynamic eventFactory);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.PointerTrigger")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.PointerTrigger"); }
		static ::hx::ObjectPtr< PointerTrigger_obj > __new( ::openfl::display::InteractiveObject target, ::Dynamic eventFactory);
		static ::hx::ObjectPtr< PointerTrigger_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic eventFactory);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PointerTrigger_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PointerTrigger",1b,92,5a,32); }

		 ::openfl::display::InteractiveObject _target;
		 ::openfl::display::InteractiveObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::InteractiveObject set_target( ::openfl::display::InteractiveObject value);
		::Dynamic set_target_dyn();

		 ::Dynamic _eventFactory;
		Dynamic _eventFactory_dyn() { return _eventFactory;}
		 ::Dynamic get_eventFactory();
		::Dynamic get_eventFactory_dyn();

		 ::Dynamic set_eventFactory( ::Dynamic value);
		::Dynamic set_eventFactory_dyn();

		bool _enabled;
		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		 ::Dynamic _customHitTest;
		Dynamic _customHitTest_dyn() { return _customHitTest;}
		 ::Dynamic get_customHitTest();
		::Dynamic get_customHitTest_dyn();

		 ::Dynamic set_customHitTest( ::Dynamic value);
		::Dynamic set_customHitTest_dyn();

		void pointerTrigger_target_clickHandler( ::openfl::events::MouseEvent event);
		::Dynamic pointerTrigger_target_clickHandler_dyn();

		void pointerTrigger_target_touchTapHandler( ::openfl::events::TouchEvent event);
		::Dynamic pointerTrigger_target_touchTapHandler_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_PointerTrigger */ 
