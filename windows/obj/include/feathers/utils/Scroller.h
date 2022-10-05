#ifndef INCLUDED_feathers_utils_Scroller
#define INCLUDED_feathers_utils_Scroller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,utils,Scroller)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
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


class HXCPP_CLASS_ATTRIBUTES Scroller_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Scroller_obj OBJ_;
		Scroller_obj();

	public:
		enum { _hx_ClassId = 0x26c5e59b };

		void __construct( ::openfl::display::InteractiveObject target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.Scroller")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.Scroller"); }
		static ::hx::ObjectPtr< Scroller_obj > __new( ::openfl::display::InteractiveObject target);
		static ::hx::ObjectPtr< Scroller_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Scroller_obj();

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
		::String __ToString() const { return HX_("Scroller",da,c9,06,66); }

		static void __boot();
		static Float MINIMUM_VELOCITY;
		static int POINTER_ID_MOUSE;
		bool enabledX;
		bool enabledY;
		Float _scrollX;
		Float get_scrollX();
		::Dynamic get_scrollX_dyn();

		Float set_scrollX(Float value);
		::Dynamic set_scrollX_dyn();

		Float _scrollY;
		Float get_scrollY();
		::Dynamic get_scrollY_dyn();

		Float set_scrollY(Float value);
		::Dynamic set_scrollY_dyn();

		Float get_restrictedScrollX();
		::Dynamic get_restrictedScrollX_dyn();

		Float set_restrictedScrollX(Float value);
		::Dynamic set_restrictedScrollX_dyn();

		Float get_restrictedScrollY();
		::Dynamic get_restrictedScrollY_dyn();

		Float set_restrictedScrollY(Float value);
		::Dynamic set_restrictedScrollY_dyn();

		Float _minScrollX;
		Float get_minScrollX();
		::Dynamic get_minScrollX_dyn();

		Float _minScrollY;
		Float get_minScrollY();
		::Dynamic get_minScrollY_dyn();

		Float _maxScrollX;
		Float get_maxScrollX();
		::Dynamic get_maxScrollX_dyn();

		Float _maxScrollY;
		Float get_maxScrollY();
		::Dynamic get_maxScrollY_dyn();

		Float _visibleWidth;
		Float get_visibleWidth();
		::Dynamic get_visibleWidth_dyn();

		Float _visibleHeight;
		Float get_visibleHeight();
		::Dynamic get_visibleHeight_dyn();

		Float _contentWidth;
		Float get_contentWidth();
		::Dynamic get_contentWidth_dyn();

		Float _contentHeight;
		Float get_contentHeight();
		::Dynamic get_contentHeight_dyn();

		bool _scrolling;
		bool get_scrolling();
		::Dynamic get_scrolling_dyn();

		bool _draggingX;
		bool get_draggingX();
		::Dynamic get_draggingX_dyn();

		bool _draggingY;
		bool get_draggingY();
		::Dynamic get_draggingY_dyn();

		Float minDragDistance;
		bool elasticEdges;
		bool forceElasticTop;
		bool forceElasticRight;
		bool forceElasticBottom;
		bool forceElasticLeft;
		Float elasticity;
		Float throwElasticity;
		Float elasticSnapDuration;
		::Dynamic ease;
		::Dynamic bounceEase;
		Float mouseWheelDeltaX;
		Float mouseWheelDeltaY;
		bool mouseWheelYScrollsX;
		int _mouseWheelDeltaMode;
		Float mouseWheelDuration;
		bool simulateTouch;
		Float _decelerationRate;
		Float get_decelerationRate();
		::Dynamic get_decelerationRate_dyn();

		Float set_decelerationRate(Float value);
		::Dynamic set_decelerationRate_dyn();

		::Array< Float > snapPositionsX;
		::Array< Float > snapPositionsY;
		Float _logDecelerationRate;
		Float _fixedThrowDuration;
		bool restoreMouseChildren;
		Float startTouchX;
		Float startTouchY;
		Float startScrollX;
		Float startScrollY;
		::Array< Float > savedScrollMoves;
		 ::motion::actuators::SimpleActuator animateScrollX;
		 ::motion::actuators::SimpleActuator animateScrollY;
		::Dynamic _animateScrollXEase;
		::Dynamic _animateScrollYEase;
		Float animateScrollXEndRatio;
		Float animateScrollYEndRatio;
		Float targetScrollX;
		Float targetScrollY;
		bool snappingToEdge;
		 ::openfl::display::InteractiveObject _target;
		 ::openfl::display::InteractiveObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::InteractiveObject set_target( ::openfl::display::InteractiveObject value);
		::Dynamic set_target_dyn();

		 ::Dynamic _previousTouchPointID;
		 ::Dynamic _touchPointID;
		 ::Dynamic get_touchPointID();
		::Dynamic get_touchPointID_dyn();

		bool _touchPointIsSimulated;
		bool get_touchPointIsSimulated();
		::Dynamic get_touchPointIsSimulated_dyn();

		void setDimensions( ::Dynamic visibleWidth, ::Dynamic visibleHeight, ::Dynamic contentWidth, ::Dynamic contentHeight);
		::Dynamic setDimensions_dyn();

		void applyScrollRestrictions();
		::Dynamic applyScrollRestrictions_dyn();

		void stop();
		::Dynamic stop_dyn();

		void throwTo( ::Dynamic scrollX, ::Dynamic scrollY, ::Dynamic duration,::Dynamic ease);
		::Dynamic throwTo_dyn();

		void throwWithVelocity( ::Dynamic velocityX, ::Dynamic velocityY);
		::Dynamic throwWithVelocity_dyn();

		Float calculateDistanceFromVelocity(Float velocity);
		::Dynamic calculateDistanceFromVelocity_dyn();

		void refreshAnimateScrollXEndRatio();
		::Dynamic refreshAnimateScrollXEndRatio_dyn();

		void refreshAnimateScrollYEndRatio();
		::Dynamic refreshAnimateScrollYEndRatio_dyn();

		void calculateMinAndMax();
		::Dynamic calculateMinAndMax_dyn();

		void startScroll();
		::Dynamic startScroll_dyn();

		void completeScroll();
		::Dynamic completeScroll_dyn();

		void finishScrollX();
		::Dynamic finishScrollX_dyn();

		void finishScrollY();
		::Dynamic finishScrollY_dyn();

		void animateScrollX_endRatio_onUpdate();
		::Dynamic animateScrollX_endRatio_onUpdate_dyn();

		void animateScrollX_onComplete();
		::Dynamic animateScrollX_onComplete_dyn();

		void animateScrollY_endRatio_onUpdate();
		::Dynamic animateScrollY_endRatio_onUpdate_dyn();

		void animateScrollY_onComplete();
		::Dynamic animateScrollY_onComplete_dyn();

		void cleanupAfterDrag();
		::Dynamic cleanupAfterDrag_dyn();

		void scroller_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic scroller_target_removedFromStageHandler_dyn();

		void touchBegin(int touchPointID,bool simulatedTouch,Float stageX,Float stageY);
		::Dynamic touchBegin_dyn();

		void touchMove(int touchPointID,bool simulatedTouch,Float stageX,Float stageY);
		::Dynamic touchMove_dyn();

		void touchEnd(int touchPointID,bool simulatedTouch);
		::Dynamic touchEnd_dyn();

		bool canDragX();
		::Dynamic canDragX_dyn();

		bool canDragY();
		::Dynamic canDragY_dyn();

		void scroller_target_touchBeginCaptureHandler( ::openfl::events::TouchEvent event);
		::Dynamic scroller_target_touchBeginCaptureHandler_dyn();

		void scroller_target_touchBeginHandler( ::openfl::events::TouchEvent event);
		::Dynamic scroller_target_touchBeginHandler_dyn();

		void scroller_target_mouseDownCaptureHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_mouseDownCaptureHandler_dyn();

		void scroller_target_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_mouseDownHandler_dyn();

		void scroller_target_stage_touchMoveHandler( ::openfl::events::TouchEvent event);
		::Dynamic scroller_target_stage_touchMoveHandler_dyn();

		void scroller_target_stage_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_stage_mouseMoveHandler_dyn();

		void scroller_target_stage_touchEndHandler( ::openfl::events::TouchEvent event);
		::Dynamic scroller_target_stage_touchEndHandler_dyn();

		void scroller_target_clickCaptureHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_clickCaptureHandler_dyn();

		void scroller_target_touchTapCaptureHandler( ::openfl::events::TouchEvent event);
		::Dynamic scroller_target_touchTapCaptureHandler_dyn();

		void scroller_target_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_stage_mouseUpHandler_dyn();

		void scroller_target_mouseWheelHandler( ::openfl::events::MouseEvent event);
		::Dynamic scroller_target_mouseWheelHandler_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_Scroller */ 
