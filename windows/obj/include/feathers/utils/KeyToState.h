#ifndef INCLUDED_feathers_utils_KeyToState
#define INCLUDED_feathers_utils_KeyToState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,KeyToState)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES KeyToState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KeyToState_obj OBJ_;
		KeyToState_obj();

	public:
		enum { _hx_ClassId = 0x7956b4d8 };

		void __construct( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.KeyToState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.KeyToState"); }
		static ::hx::ObjectPtr< KeyToState_obj > __new( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState);
		static ::hx::ObjectPtr< KeyToState_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyToState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyToState",d7,66,c8,b5); }

		 ::openfl::display::InteractiveObject _target;
		 ::openfl::display::InteractiveObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::InteractiveObject set_target( ::openfl::display::InteractiveObject value);
		::Dynamic set_target_dyn();

		 ::Dynamic _callback;
		Dynamic _callback_dyn() { return _callback;}
		 ::Dynamic get_callback();
		::Dynamic get_callback_dyn();

		 ::Dynamic set_callback( ::Dynamic value);
		::Dynamic set_callback_dyn();

		 ::Dynamic _currentState;
		 ::Dynamic get_currentState();
		::Dynamic get_currentState_dyn();

		 ::Dynamic _upState;
		 ::Dynamic get_upState();
		::Dynamic get_upState_dyn();

		 ::Dynamic set_upState( ::Dynamic value);
		::Dynamic set_upState_dyn();

		 ::Dynamic _downState;
		 ::Dynamic get_downState();
		::Dynamic get_downState_dyn();

		 ::Dynamic set_downState( ::Dynamic value);
		::Dynamic set_downState_dyn();

		bool _enabled;
		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		 ::Dynamic _downKeyCode;
		void changeState( ::Dynamic value);
		::Dynamic changeState_dyn();

		void resetKeyState();
		::Dynamic resetKeyState_dyn();

		void keyToState_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic keyToState_target_removedFromStageHandler_dyn();

		void keyToState_target_focusOutHandler( ::openfl::events::FocusEvent event);
		::Dynamic keyToState_target_focusOutHandler_dyn();

		void keyToState_target_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic keyToState_target_keyDownHandler_dyn();

		void keyToState_target_keyUpHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic keyToState_target_keyUpHandler_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_KeyToState */ 
