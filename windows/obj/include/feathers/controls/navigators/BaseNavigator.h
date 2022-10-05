#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#define INCLUDED_feathers_controls_navigators_BaseNavigator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
HX_DECLARE_CLASS3(feathers,controls,navigators,BaseNavigator)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,AutoSizeMode)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace navigators{


class HXCPP_CLASS_ATTRIBUTES BaseNavigator_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef BaseNavigator_obj OBJ_;
		BaseNavigator_obj();

	public:
		enum { _hx_ClassId = 0x2035dd84 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.navigators.BaseNavigator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.navigators.BaseNavigator"); }
		static ::hx::ObjectPtr< BaseNavigator_obj > __new();
		static ::hx::ObjectPtr< BaseNavigator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseNavigator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseNavigator",66,12,39,4d); }

		static ::Dynamic defaultTransition( ::openfl::display::DisplayObject oldView, ::openfl::display::DisplayObject newView);
		static ::Dynamic defaultTransition_dyn();

		::String _activeItemID;
		::String get_activeItemID();
		::Dynamic get_activeItemID_dyn();

		 ::openfl::display::DisplayObject _activeItemView;
		 ::openfl::display::DisplayObject get_activeItemView();
		::Dynamic get_activeItemView_dyn();

		bool _transitionActive;
		bool get_transitionActive();
		::Dynamic get_transitionActive_dyn();

		bool get_tabEnabled();

		bool _childFocusEnabled;
		bool get_childFocusEnabled();
		::Dynamic get_childFocusEnabled_dyn();

		bool set_childFocusEnabled(bool value);
		::Dynamic set_childFocusEnabled_dyn();

		 ::openfl::display::DisplayObjectContainer _viewsContainer;
		 ::feathers::layout::Measurements _activeViewMeasurements;
		::Array< ::String > _addedItemIDs;
		 ::haxe::ds::StringMap _addedItems;
		 ::openfl::display::DisplayObject _previousViewInTransition;
		::String _previousViewInTransitionID;
		 ::openfl::display::DisplayObject _nextViewInTransition;
		::String _nextViewInTransitionID;
		::String _pendingItemID;
		 ::Dynamic _pendingItemTransition;
		Dynamic _pendingItemTransition_dyn() { return _pendingItemTransition;}
		bool _clearAfterTransition;
		 ::Dynamic _delayedTransition;
		Dynamic _delayedTransition_dyn() { return _delayedTransition;}
		bool _waitingForDelayedTransition;
		 ::Dynamic _waitingTransition;
		Dynamic _waitingTransition_dyn() { return _waitingTransition;}
		int _waitingForTransitionFrameCount;
		 ::feathers::layout::AutoSizeMode _autoSizeMode;
		 ::feathers::layout::AutoSizeMode get_autoSizeMode();
		::Dynamic get_autoSizeMode_dyn();

		 ::feathers::layout::AutoSizeMode set_autoSizeMode( ::feathers::layout::AutoSizeMode value);
		::Dynamic set_autoSizeMode_dyn();

		Float topContentOffset;
		Float rightContentOffset;
		Float bottomContentOffset;
		Float leftContentOffset;
		void removeAllItems();
		::Dynamic removeAllItems_dyn();

		bool hasItem(::String id);
		::Dynamic hasItem_dyn();

		::Array< ::String > getItemIDs(::Array< ::String > result);
		::Dynamic getItemIDs_dyn();

		virtual void update();

		virtual bool measure();
		::Dynamic measure_dyn();

		virtual void layoutContent();
		::Dynamic layoutContent_dyn();

		virtual  ::openfl::display::DisplayObject getView(::String id);
		::Dynamic getView_dyn();

		virtual void disposeView(::String id, ::openfl::display::DisplayObject view);
		::Dynamic disposeView_dyn();

		void transitionComplete();
		::Dynamic transitionComplete_dyn();

		void transitionCancel();
		::Dynamic transitionCancel_dyn();

		void addItemInternal(::String id, ::Dynamic item);
		::Dynamic addItemInternal_dyn();

		 ::Dynamic removeItemInternal(::String id);
		::Dynamic removeItemInternal_dyn();

		void clearFocusFromPreviousView();
		::Dynamic clearFocusFromPreviousView_dyn();

		 ::openfl::display::DisplayObject showItemInternal(::String id, ::Dynamic transition);
		::Dynamic showItemInternal_dyn();

		void clearActiveItemInternal( ::Dynamic transition);
		::Dynamic clearActiveItemInternal_dyn();

		void startTransition( ::Dynamic transition);
		::Dynamic startTransition_dyn();

		void startWaitingTransition();
		::Dynamic startWaitingTransition_dyn();

		void baseNavigator_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic baseNavigator_addedToStageHandler_dyn();

		void baseNavigator_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic baseNavigator_removedFromStageHandler_dyn();

		void baseNavigator_transitionWait_enterFrameHandler( ::openfl::events::Event event);
		::Dynamic baseNavigator_transitionWait_enterFrameHandler_dyn();

		void baseNavigator_stage_resizeHandler( ::openfl::events::Event event);
		::Dynamic baseNavigator_stage_resizeHandler_dyn();

		void activeItemView_resizeHandler( ::openfl::events::Event event);
		::Dynamic activeItemView_resizeHandler_dyn();

		void transition_completeHandler( ::openfl::events::Event event);
		::Dynamic transition_completeHandler_dyn();

		void transition_cancelHandler( ::openfl::events::Event event);
		::Dynamic transition_cancelHandler_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace navigators

#endif /* INCLUDED_feathers_controls_navigators_BaseNavigator */ 
