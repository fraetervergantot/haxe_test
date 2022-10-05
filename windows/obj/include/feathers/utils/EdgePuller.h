#ifndef INCLUDED_feathers_utils_EdgePuller
#define INCLUDED_feathers_utils_EdgePuller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,utils,EdgePuller)
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


class HXCPP_CLASS_ATTRIBUTES EdgePuller_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef EdgePuller_obj OBJ_;
		EdgePuller_obj();

	public:
		enum { _hx_ClassId = 0x0b5579b0 };

		void __construct( ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.EdgePuller")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.EdgePuller"); }
		static ::hx::ObjectPtr< EdgePuller_obj > __new( ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance);
		static ::hx::ObjectPtr< EdgePuller_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EdgePuller_obj();

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
		::String __ToString() const { return HX_("EdgePuller",af,2b,c7,47); }

		static void __boot();
		static Float MINIMUM_VELOCITY;
		static int POINTER_ID_MOUSE;
		bool enabled;
		bool _active;
		bool get_active();
		::Dynamic get_active_dyn();

		bool _dragging;
		bool get_dragging();
		::Dynamic get_dragging_dyn();

		Float minDragDistance;
		::Dynamic ease;
		bool simulateTouch;
		 ::openfl::display::InteractiveObject _target;
		 ::openfl::display::InteractiveObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::InteractiveObject set_target( ::openfl::display::InteractiveObject value);
		::Dynamic set_target_dyn();

		 ::Dynamic _maxPullDistance;
		 ::Dynamic get_maxPullDistance();
		::Dynamic get_maxPullDistance_dyn();

		 ::Dynamic set_maxPullDistance( ::Dynamic value);
		::Dynamic set_maxPullDistance_dyn();

		Float _pullDistance;
		Float get_pullDistance();
		::Dynamic get_pullDistance_dyn();

		 ::Dynamic _activeBorderSize;
		 ::Dynamic get_activeBorderSize();
		::Dynamic get_activeBorderSize_dyn();

		 ::Dynamic set_activeBorderSize( ::Dynamic value);
		::Dynamic set_activeBorderSize_dyn();

		 ::feathers::layout::RelativePosition _pullableEdge;
		 ::feathers::layout::RelativePosition get_pullableEdge();
		::Dynamic get_pullableEdge_dyn();

		 ::feathers::layout::RelativePosition set_pullableEdge( ::feathers::layout::RelativePosition value);
		::Dynamic set_pullableEdge_dyn();

		 ::Dynamic _pendingOpened;
		bool _opened;
		bool get_opened();
		::Dynamic get_opened_dyn();

		bool set_opened(bool value);
		::Dynamic set_opened_dyn();

		Float _snapDuration;
		Float get_snapDuration();
		::Dynamic get_snapDuration_dyn();

		Float set_snapDuration(Float value);
		::Dynamic set_snapDuration_dyn();

		 ::Dynamic _touchPointID;
		 ::Dynamic get_touchPointID();
		::Dynamic get_touchPointID_dyn();

		bool _touchPointIsSimulated;
		bool get_touchPointIsSimulated();
		::Dynamic get_touchPointIsSimulated_dyn();

		bool _restoreMouseChildren;
		Float _startTouch;
		Float _startPullDistance;
		Float _targetPullDistance;
		::Array< Float > _savedTouchMoves;
		 ::motion::actuators::SimpleActuator _animatePull;
		bool setOpened(bool value);
		::Dynamic setOpened_dyn();

		Float setPullDistance(Float value);
		::Dynamic setPullDistance_dyn();

		Float getMaxPullDistance();
		::Dynamic getMaxPullDistance_dyn();

		Float getTouchPosition(Float stageX,Float stageY);
		::Dynamic getTouchPosition_dyn();

		Float getTouchScale();
		::Dynamic getTouchScale_dyn();

		bool isInActiveBorder(Float stageX,Float stageY,Float activeBorderSize);
		::Dynamic isInActiveBorder_dyn();

		bool checkMinDrag(Float touchOffset);
		::Dynamic checkMinDrag_dyn();

		void touchBegin(int touchPointID,bool simulatedTouch,Float stageX,Float stageY);
		::Dynamic touchBegin_dyn();

		void touchMove(int touchPointID,bool simulatedTouch,Float stageX,Float stageY);
		::Dynamic touchMove_dyn();

		void touchEnd(int touchPointID,bool simulatedTouch);
		::Dynamic touchEnd_dyn();

		bool startPull();
		::Dynamic startPull_dyn();

		void completeDrag();
		::Dynamic completeDrag_dyn();

		void completePull();
		::Dynamic completePull_dyn();

		void addStageEvents();
		::Dynamic addStageEvents_dyn();

		void removeStageEvents();
		::Dynamic removeStageEvents_dyn();

		void cleanupAfterDrag();
		::Dynamic cleanupAfterDrag_dyn();

		void throwWithVelocity(Float velocity);
		::Dynamic throwWithVelocity_dyn();

		void throwTo( ::Dynamic targetPosition);
		::Dynamic throwTo_dyn();

		void animatePull_onComplete();
		::Dynamic animatePull_onComplete_dyn();

		void edgePuller_target_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic edgePuller_target_addedToStageHandler_dyn();

		void edgePuller_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic edgePuller_target_removedFromStageHandler_dyn();

		void edgePuller_target_touchBeginCaptureHandler( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_touchBeginCaptureHandler_dyn();

		void edgePuller_target_touchBeginHandler( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_touchBeginHandler_dyn();

		void edgePuller_target_mouseDownCaptureHandler( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_mouseDownCaptureHandler_dyn();

		void edgePuller_target_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_mouseDownHandler_dyn();

		void edgePuller_target_stage_touchMoveHandler( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_stage_touchMoveHandler_dyn();

		void edgePuller_target_stage_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_stage_mouseMoveHandler_dyn();

		void edgePuller_target_stage_touchEndHandler( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_stage_touchEndHandler_dyn();

		void edgePuller_target_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_stage_mouseUpHandler_dyn();

		void edgePuller_target_stage_touchBeginHandler( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_stage_touchBeginHandler_dyn();

		void edgePuller_target_stage_touchMoveHandler2( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_stage_touchMoveHandler2_dyn();

		void edgePuller_target_stage_touchEndHandler2( ::openfl::events::TouchEvent event);
		::Dynamic edgePuller_target_stage_touchEndHandler2_dyn();

		void edgePuller_target_stage_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_stage_mouseDownHandler_dyn();

		void edgePuller_target_stage_mouseMoveHandler2( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_stage_mouseMoveHandler2_dyn();

		void edgePuller_target_stage_mouseUpHandler2( ::openfl::events::MouseEvent event);
		::Dynamic edgePuller_target_stage_mouseUpHandler2_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_EdgePuller */ 
