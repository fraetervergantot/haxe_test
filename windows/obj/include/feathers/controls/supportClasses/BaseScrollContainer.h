#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#define INCLUDED_feathers_controls_supportClasses_BaseScrollContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IRange)
HX_DECLARE_CLASS2(feathers,controls,IScrollBar)
HX_DECLARE_CLASS2(feathers,controls,ScrollMode)
HX_DECLARE_CLASS2(feathers,controls,ScrollPolicy)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,ScrollEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,Scroller)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES BaseScrollContainer_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef BaseScrollContainer_obj OBJ_;
		BaseScrollContainer_obj();

	public:
		enum { _hx_ClassId = 0x0498edf2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.supportClasses.BaseScrollContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.supportClasses.BaseScrollContainer"); }
		static ::hx::ObjectPtr< BaseScrollContainer_obj > __new();
		static ::hx::ObjectPtr< BaseScrollContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseScrollContainer_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseScrollContainer",43,e6,9e,b5); }

		static void __boot();
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_SCROLLER_FACTORY;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_SCROLL_BAR_FACTORY;
		static  ::feathers::utils::DisplayObjectFactory defaultScrollBarXFactory;
		static  ::feathers::utils::DisplayObjectFactory defaultScrollBarYFactory;
		::Dynamic _viewPort;
		::Dynamic get_viewPort();
		::Dynamic get_viewPort_dyn();

		::Dynamic set_viewPort(::Dynamic value);
		::Dynamic set_viewPort_dyn();

		 ::feathers::utils::Scroller scroller;
		bool _scrollerDraggingX;
		bool _scrollerDraggingY;
		bool _scrollBarXHover;
		bool _scrollBarYHover;
		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		 ::openfl::display::DisplayObject _currentMaskSkin;
		 ::openfl::display::DisplayObject _currentViewPortMaskSkin;
		 ::openfl::display::DisplayObject _fallbackViewPortMaskSkin;
		Float topViewPortOffset;
		Float rightViewPortOffset;
		Float bottomViewPortOffset;
		Float leftViewPortOffset;
		Float chromeMeasuredWidth;
		Float chromeMeasuredMinWidth;
		Float chromeMeasuredMaxWidth;
		Float chromeMeasuredHeight;
		Float chromeMeasuredMinHeight;
		Float chromeMeasuredMaxHeight;
		bool get_tabEnabled();

		::Dynamic scrollBarX;
		::Dynamic scrollBarY;
		bool _ignoreScrollBarXChange;
		bool _ignoreScrollBarYChange;
		bool showScrollBarX;
		bool showScrollBarY;
		 ::feathers::utils::DisplayObjectFactory _oldScrollBarXFactory;
		 ::feathers::utils::DisplayObjectFactory _scrollBarXFactory;
		 ::feathers::utils::DisplayObjectFactory get_scrollBarXFactory();
		::Dynamic get_scrollBarXFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_scrollBarXFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_scrollBarXFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory _oldScrollBarYFactory;
		 ::feathers::utils::DisplayObjectFactory _scrollBarYFactory;
		 ::feathers::utils::DisplayObjectFactory get_scrollBarYFactory();
		::Dynamic get_scrollBarYFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_scrollBarYFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_scrollBarYFactory_dyn();

		 ::Dynamic _scrollerFactory;
		Dynamic _scrollerFactory_dyn() { return _scrollerFactory;}
		 ::Dynamic get_scrollerFactory();
		::Dynamic get_scrollerFactory_dyn();

		 ::Dynamic set_scrollerFactory( ::Dynamic value);
		::Dynamic set_scrollerFactory_dyn();

		 ::Dynamic _temporaryScrollX;
		 ::Dynamic _temporaryRestrictedScrollX;
		Float get_scrollX();
		::Dynamic get_scrollX_dyn();

		Float set_scrollX(Float value);
		::Dynamic set_scrollX_dyn();

		Float get_restrictedScrollX();
		::Dynamic get_restrictedScrollX_dyn();

		Float set_restrictedScrollX(Float value);
		::Dynamic set_restrictedScrollX_dyn();

		 ::Dynamic _temporaryScrollY;
		 ::Dynamic _temporaryRestrictedScrollY;
		Float get_scrollY();
		::Dynamic get_scrollY_dyn();

		Float set_scrollY(Float value);
		::Dynamic set_scrollY_dyn();

		Float get_restrictedScrollY();
		::Dynamic get_restrictedScrollY_dyn();

		Float set_restrictedScrollY(Float value);
		::Dynamic set_restrictedScrollY_dyn();

		Float get_minScrollX();
		::Dynamic get_minScrollX_dyn();

		Float get_minScrollY();
		::Dynamic get_minScrollY_dyn();

		Float get_maxScrollX();
		::Dynamic get_maxScrollX_dyn();

		Float get_maxScrollY();
		::Dynamic get_maxScrollY_dyn();

		Float _scrollStepX;
		Float get_scrollStepX();
		::Dynamic get_scrollStepX_dyn();

		Float set_scrollStepX(Float value);
		::Dynamic set_scrollStepX_dyn();

		Float _scrollStepY;
		Float get_scrollStepY();
		::Dynamic get_scrollStepY_dyn();

		Float set_scrollStepY(Float value);
		::Dynamic set_scrollStepY_dyn();

		 ::feathers::controls::ScrollPolicy _scrollPolicyX;
		 ::feathers::controls::ScrollPolicy get_scrollPolicyX();
		::Dynamic get_scrollPolicyX_dyn();

		 ::feathers::controls::ScrollPolicy set_scrollPolicyX( ::feathers::controls::ScrollPolicy value);
		::Dynamic set_scrollPolicyX_dyn();

		 ::feathers::controls::ScrollPolicy _scrollPolicyY;
		 ::feathers::controls::ScrollPolicy get_scrollPolicyY();
		::Dynamic get_scrollPolicyY_dyn();

		 ::feathers::controls::ScrollPolicy set_scrollPolicyY( ::feathers::controls::ScrollPolicy value);
		::Dynamic set_scrollPolicyY_dyn();

		int _scrollBarXRevealTime;
		int _scrollBarYRevealTime;
		 ::motion::actuators::SimpleActuator _hideScrollBarX;
		 ::motion::actuators::SimpleActuator _hideScrollBarY;
		Float _prevMinScrollX;
		Float _prevMaxScrollX;
		Float _prevMinScrollY;
		Float _prevMaxScrollY;
		 ::openfl::geom::Rectangle _currentScrollRect;
		 ::openfl::geom::Rectangle _scrollRect1;
		 ::openfl::geom::Rectangle _scrollRect2;
		bool _ignoreScrollerChanges;
		bool _settingScrollerDimensions;
		bool _viewPortBoundsChanged;
		bool _ignoreViewPortResizing;
		Float _previousViewPortWidth;
		Float _previousViewPortHeight;
		bool get_measureViewPort();
		::Dynamic get_measureViewPort_dyn();

		 ::feathers::controls::ScrollMode _scrollMode;
		 ::feathers::controls::ScrollMode get_scrollMode();
		::Dynamic get_scrollMode_dyn();

		 ::feathers::controls::ScrollMode set_scrollMode( ::feathers::controls::ScrollMode value);
		::Dynamic set_scrollMode_dyn();

		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		 ::openfl::geom::Rectangle getViewPortVisibleBounds( ::openfl::geom::Rectangle result);
		::Dynamic getViewPortVisibleBounds_dyn();

		virtual void update();

		void applyTemporaryScrollPositions();
		::Dynamic applyTemporaryScrollPositions_dyn();

		bool needsMeasurement();
		::Dynamic needsMeasurement_dyn();

		virtual bool needsScrollMeasurement();
		::Dynamic needsScrollMeasurement_dyn();

		void createScroller();
		::Dynamic createScroller_dyn();

		void createScrollBars();
		::Dynamic createScrollBars_dyn();

		void refreshEnabled();
		::Dynamic refreshEnabled_dyn();

		void restrictScrollAfterRefreshViewPort();
		::Dynamic restrictScrollAfterRefreshViewPort_dyn();

		void refreshViewPort();
		::Dynamic refreshViewPort_dyn();

		void resetViewPortOffsets();
		::Dynamic resetViewPortOffsets_dyn();

		virtual void calculateViewPortOffsets(bool forceScrollBars,bool useActualBounds);
		::Dynamic calculateViewPortOffsets_dyn();

		void calculateViewPortOffsetsForFixedScrollBarX(bool forceScrollBars,bool useActualBounds);
		::Dynamic calculateViewPortOffsetsForFixedScrollBarX_dyn();

		void calculateViewPortOffsetsForFixedScrollBarY(bool forceScrollBars,bool useActualBounds);
		::Dynamic calculateViewPortOffsetsForFixedScrollBarY_dyn();

		virtual void refreshViewPortBoundsForMeasurement();
		::Dynamic refreshViewPortBoundsForMeasurement_dyn();

		virtual void refreshViewPortBoundsForLayout();
		::Dynamic refreshViewPortBoundsForLayout_dyn();

		virtual void refreshScrollerValues();
		::Dynamic refreshScrollerValues_dyn();

		void refreshScrollBarValues();
		::Dynamic refreshScrollBarValues_dyn();

		virtual bool measure();
		::Dynamic measure_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		void refreshMaskSkin();
		::Dynamic refreshMaskSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentMaskSkin();
		::Dynamic getCurrentMaskSkin_dyn();

		void addCurrentMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentMaskSkin_dyn();

		void removeCurrentMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentMaskSkin_dyn();

		void refreshViewPortMaskSkin();
		::Dynamic refreshViewPortMaskSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentViewPortMaskSkin();
		::Dynamic getCurrentViewPortMaskSkin_dyn();

		void addCurrentViewPortMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentViewPortMaskSkin_dyn();

		void removeCurrentViewPortMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentViewPortMaskSkin_dyn();

		void layoutChildren();
		::Dynamic layoutChildren_dyn();

		void layoutBackgroundSkin();
		::Dynamic layoutBackgroundSkin_dyn();

		void layoutMaskSkin();
		::Dynamic layoutMaskSkin_dyn();

		void layoutViewPortMaskSkin();
		::Dynamic layoutViewPortMaskSkin_dyn();

		void layoutScrollBars();
		::Dynamic layoutScrollBars_dyn();

		void refreshScrollRect();
		::Dynamic refreshScrollRect_dyn();

		void revealScrollBarX();
		::Dynamic revealScrollBarX_dyn();

		void revealScrollBarY();
		::Dynamic revealScrollBarY_dyn();

		void hideScrollBarX();
		::Dynamic hideScrollBarX_dyn();

		void hideScrollBarY();
		::Dynamic hideScrollBarY_dyn();

		void checkForRevealScrollBars();
		::Dynamic checkForRevealScrollBars_dyn();

		void scrollWithKeyboard( ::openfl::events::KeyboardEvent event);
		::Dynamic scrollWithKeyboard_dyn();

		void baseScrollContainer_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic baseScrollContainer_addedToStageHandler_dyn();

		void baseScrollContainer_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic baseScrollContainer_removedFromStageHandler_dyn();

		void baseScrollContainer_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic baseScrollContainer_keyDownHandler_dyn();

		void baseScrollContainer_scroller_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic baseScrollContainer_scroller_scrollStartHandler_dyn();

		void baseScrollContainer_scroller_scrollHandler( ::openfl::events::Event event);
		::Dynamic baseScrollContainer_scroller_scrollHandler_dyn();

		void baseScrollContainer_scroller_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic baseScrollContainer_scroller_scrollCompleteHandler_dyn();

		void reclaimMouse();
		::Dynamic reclaimMouse_dyn();

		void reclaimTouch(int touchPointID);
		::Dynamic reclaimTouch_dyn();

		void baseScrollContainer_viewPort_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic baseScrollContainer_viewPort_mouseDownHandler_dyn();

		void baseScrollContainer_viewPort_touchBeginHandler( ::openfl::events::TouchEvent event);
		::Dynamic baseScrollContainer_viewPort_touchBeginHandler_dyn();

		void scrollBarX_changeHandler( ::openfl::events::Event event);
		::Dynamic scrollBarX_changeHandler_dyn();

		void scrollBarY_changeHandler( ::openfl::events::Event event);
		::Dynamic scrollBarY_changeHandler_dyn();

		void scrollBarX_rollOverHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarX_rollOverHandler_dyn();

		void scrollBarX_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarX_rollOutHandler_dyn();

		void scrollBarY_rollOverHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarY_rollOverHandler_dyn();

		void scrollBarY_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic scrollBarY_rollOutHandler_dyn();

		void scrollBarX_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarX_scrollStartHandler_dyn();

		void scrollBarX_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarX_scrollCompleteHandler_dyn();

		void scrollBarY_scrollStartHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarY_scrollStartHandler_dyn();

		void scrollBarY_scrollCompleteHandler( ::feathers::events::ScrollEvent event);
		::Dynamic scrollBarY_scrollCompleteHandler_dyn();

		void hideScrollBarX_onComplete();
		::Dynamic hideScrollBarX_onComplete_dyn();

		void hideScrollBarY_onComplete();
		::Dynamic hideScrollBarY_onComplete_dyn();

		void viewPort_resizeHandler( ::openfl::events::Event event);
		::Dynamic viewPort_resizeHandler_dyn();

		Float _hx___paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float clearStyle_paddingTop();
		::Dynamic clearStyle_paddingTop_dyn();

		Float _hx___paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float clearStyle_paddingRight();
		::Dynamic clearStyle_paddingRight_dyn();

		Float _hx___paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float clearStyle_paddingBottom();
		::Dynamic clearStyle_paddingBottom_dyn();

		Float _hx___paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float clearStyle_paddingLeft();
		::Dynamic clearStyle_paddingLeft_dyn();

		 ::openfl::display::DisplayObject _hx___backgroundSkin;
		 ::openfl::display::DisplayObject get_backgroundSkin();
		::Dynamic get_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_backgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_backgroundSkin();
		::Dynamic clearStyle_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject _hx___disabledBackgroundSkin;
		 ::openfl::display::DisplayObject get_disabledBackgroundSkin();
		::Dynamic get_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_disabledBackgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_disabledBackgroundSkin();
		::Dynamic clearStyle_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject _hx___maskSkin;
		 ::openfl::display::DisplayObject get_maskSkin();
		::Dynamic get_maskSkin_dyn();

		 ::openfl::display::DisplayObject set_maskSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_maskSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_maskSkin();
		::Dynamic clearStyle_maskSkin_dyn();

		 ::openfl::display::DisplayObject _hx___viewPortMaskSkin;
		 ::openfl::display::DisplayObject get_viewPortMaskSkin();
		::Dynamic get_viewPortMaskSkin_dyn();

		 ::openfl::display::DisplayObject set_viewPortMaskSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_viewPortMaskSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_viewPortMaskSkin();
		::Dynamic clearStyle_viewPortMaskSkin_dyn();

		bool _hx___fixedScrollBars;
		bool get_fixedScrollBars();
		::Dynamic get_fixedScrollBars_dyn();

		bool set_fixedScrollBars(bool value);
		::Dynamic set_fixedScrollBars_dyn();

		bool clearStyle_fixedScrollBars();
		::Dynamic clearStyle_fixedScrollBars_dyn();

		bool _hx___showScrollBars;
		bool get_showScrollBars();
		::Dynamic get_showScrollBars_dyn();

		bool set_showScrollBars(bool value);
		::Dynamic set_showScrollBars_dyn();

		bool clearStyle_showScrollBars();
		::Dynamic clearStyle_showScrollBars_dyn();

		bool _hx___autoHideScrollBars;
		bool get_autoHideScrollBars();
		::Dynamic get_autoHideScrollBars_dyn();

		bool set_autoHideScrollBars(bool value);
		::Dynamic set_autoHideScrollBars_dyn();

		bool clearStyle_autoHideScrollBars();
		::Dynamic clearStyle_autoHideScrollBars_dyn();

		 ::feathers::layout::RelativePosition _hx___scrollBarXPosition;
		 ::feathers::layout::RelativePosition get_scrollBarXPosition();
		::Dynamic get_scrollBarXPosition_dyn();

		 ::feathers::layout::RelativePosition set_scrollBarXPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_scrollBarXPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_scrollBarXPosition();
		::Dynamic clearStyle_scrollBarXPosition_dyn();

		 ::feathers::layout::RelativePosition _hx___scrollBarYPosition;
		 ::feathers::layout::RelativePosition get_scrollBarYPosition();
		::Dynamic get_scrollBarYPosition_dyn();

		 ::feathers::layout::RelativePosition set_scrollBarYPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_scrollBarYPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_scrollBarYPosition();
		::Dynamic clearStyle_scrollBarYPosition_dyn();

		Float _hx___showScrollBarMinimumDuration;
		Float get_showScrollBarMinimumDuration();
		::Dynamic get_showScrollBarMinimumDuration_dyn();

		Float set_showScrollBarMinimumDuration(Float value);
		::Dynamic set_showScrollBarMinimumDuration_dyn();

		Float clearStyle_showScrollBarMinimumDuration();
		::Dynamic clearStyle_showScrollBarMinimumDuration_dyn();

		Float _hx___hideScrollBarDuration;
		Float get_hideScrollBarDuration();
		::Dynamic get_hideScrollBarDuration_dyn();

		Float set_hideScrollBarDuration(Float value);
		::Dynamic set_hideScrollBarDuration_dyn();

		Float clearStyle_hideScrollBarDuration();
		::Dynamic clearStyle_hideScrollBarDuration_dyn();

		::Dynamic _hx___hideScrollBarEase;
		::Dynamic get_hideScrollBarEase();
		::Dynamic get_hideScrollBarEase_dyn();

		::Dynamic set_hideScrollBarEase(::Dynamic value);
		::Dynamic set_hideScrollBarEase_dyn();

		::Dynamic clearStyle_hideScrollBarEase();
		::Dynamic clearStyle_hideScrollBarEase_dyn();

		bool _hx___scrollPixelSnapping;
		bool get_scrollPixelSnapping();
		::Dynamic get_scrollPixelSnapping_dyn();

		bool set_scrollPixelSnapping(bool value);
		::Dynamic set_scrollPixelSnapping_dyn();

		bool clearStyle_scrollPixelSnapping();
		::Dynamic clearStyle_scrollPixelSnapping_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_BaseScrollContainer */ 
