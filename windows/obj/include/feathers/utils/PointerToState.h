#ifndef INCLUDED_feathers_utils_PointerToState
#define INCLUDED_feathers_utils_PointerToState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,utils,PointerToState)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES PointerToState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PointerToState_obj OBJ_;
		PointerToState_obj();

	public:
		enum { _hx_ClassId = 0x17437032 };

		void __construct( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.PointerToState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.PointerToState"); }
		static ::hx::ObjectPtr< PointerToState_obj > __new( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState);
		static ::hx::ObjectPtr< PointerToState_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState, ::Dynamic hoverState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PointerToState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PointerToState",79,ff,0a,5d); }

		 ::openfl::display::InteractiveObject _target;
		 ::openfl::display::InteractiveObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::InteractiveObject set_target( ::openfl::display::InteractiveObject value);
		::Dynamic set_target_dyn();

		::Dynamic _stateContext;
		::Dynamic get_stateContext();
		::Dynamic get_stateContext_dyn();

		::Dynamic set_stateContext(::Dynamic value);
		::Dynamic set_stateContext_dyn();

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

		 ::Dynamic _hoverState;
		 ::Dynamic get_hoverState();
		::Dynamic get_hoverState_dyn();

		 ::Dynamic set_hoverState( ::Dynamic value);
		::Dynamic set_hoverState_dyn();

		bool _enabled;
		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		bool _keepDownStateOnRollOut;
		bool get_keepDownStateOnRollOut();
		::Dynamic get_keepDownStateOnRollOut_dyn();

		bool set_keepDownStateOnRollOut(bool value);
		::Dynamic set_keepDownStateOnRollOut_dyn();

		 ::Dynamic _customHitTest;
		Dynamic _customHitTest_dyn() { return _customHitTest;}
		 ::Dynamic get_customHitTest();
		::Dynamic get_customHitTest_dyn();

		 ::Dynamic set_customHitTest( ::Dynamic value);
		::Dynamic set_customHitTest_dyn();

		bool _hoverBeforeDown;
		bool _down;
		void changeState( ::Dynamic value);
		::Dynamic changeState_dyn();

		void resetTouchState();
		::Dynamic resetTouchState_dyn();

		void pointerToState_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic pointerToState_target_removedFromStageHandler_dyn();

		void pointerToState_target_rollOverHandler( ::openfl::events::MouseEvent event);
		::Dynamic pointerToState_target_rollOverHandler_dyn();

		void pointerToState_target_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic pointerToState_target_rollOutHandler_dyn();

		void pointerToState_target_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic pointerToState_target_mouseDownHandler_dyn();

		void pointerToState_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic pointerToState_stage_mouseUpHandler_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_PointerToState */ 
