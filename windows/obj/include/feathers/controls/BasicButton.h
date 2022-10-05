#ifndef INCLUDED_feathers_controls_BasicButton
#define INCLUDED_feathers_controls_BasicButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,BasicButton)
HX_DECLARE_CLASS2(feathers,controls,ButtonState)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,TriggerEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,KeyToState)
HX_DECLARE_CLASS2(feathers,utils,PointerToState)
HX_DECLARE_CLASS2(feathers,utils,PointerTrigger)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES BasicButton_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef BasicButton_obj OBJ_;
		BasicButton_obj();

	public:
		enum { _hx_ClassId = 0x1085bfba };

		void __construct( ::Dynamic triggerListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.BasicButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.BasicButton"); }
		static ::hx::ObjectPtr< BasicButton_obj > __new( ::Dynamic triggerListener);
		static ::hx::ObjectPtr< BasicButton_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic triggerListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BasicButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic get_currentState_2aa2127b();
		::String __ToString() const { return HX_("BasicButton",20,cf,f3,70); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::feathers::controls::ButtonState _currentState;
		 ::feathers::controls::ButtonState get_currentState();
		::Dynamic get_currentState_dyn();

		bool set_enabled(bool value);

		 ::feathers::utils::PointerToState _pointerToState;
		 ::feathers::utils::KeyToState _keyToState;
		 ::feathers::utils::PointerTrigger _pointerTrigger;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::haxe::ds::EnumValueMap _stateToSkin;
		 ::openfl::display::DisplayObject getSkinForState( ::feathers::controls::ButtonState state);
		::Dynamic getSkinForState_dyn();

		void setSkinForState( ::feathers::controls::ButtonState state, ::openfl::display::DisplayObject skin);
		::Dynamic setSkinForState_dyn();

		virtual void initialize();

		void update();

		virtual void commitChanges();
		::Dynamic commitChanges_dyn();

		virtual void layoutContent();
		::Dynamic layoutContent_dyn();

		void refreshInteractivity();
		::Dynamic refreshInteractivity_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		virtual bool measure();
		::Dynamic measure_dyn();

		void layoutBackgroundSkin();
		::Dynamic layoutBackgroundSkin_dyn();

		void changeState( ::feathers::controls::ButtonState state);
		::Dynamic changeState_dyn();

		void basicButton_clickHandler( ::openfl::events::MouseEvent event);
		::Dynamic basicButton_clickHandler_dyn();

		void basicButton_touchTapHandler( ::openfl::events::TouchEvent event);
		::Dynamic basicButton_touchTapHandler_dyn();

		bool _hx___keepDownStateOnRollOut;
		bool get_keepDownStateOnRollOut();
		::Dynamic get_keepDownStateOnRollOut_dyn();

		bool set_keepDownStateOnRollOut(bool value);
		::Dynamic set_keepDownStateOnRollOut_dyn();

		bool clearStyle_keepDownStateOnRollOut();
		::Dynamic clearStyle_keepDownStateOnRollOut_dyn();

		 ::openfl::display::DisplayObject _hx___backgroundSkin;
		 ::openfl::display::DisplayObject get_backgroundSkin();
		::Dynamic get_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_backgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_backgroundSkin();
		::Dynamic clearStyle_backgroundSkin_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_BasicButton */ 
