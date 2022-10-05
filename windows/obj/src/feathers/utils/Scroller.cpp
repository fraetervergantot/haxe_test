#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_events_ScrollEvent
#include <feathers/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_feathers_utils_Scroller
#include <feathers/utils/Scroller.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_502d7772405dfa7d_50_new,"feathers.utils.Scroller","new",0xe12a9ce7,"feathers.utils.Scroller.new","feathers/utils/Scroller.hx",50,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_96_get_scrollX,"feathers.utils.Scroller","get_scrollX",0xfaa3bf49,"feathers.utils.Scroller.get_scrollX","feathers/utils/Scroller.hx",96,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_99_set_scrollX,"feathers.utils.Scroller","set_scrollX",0x0510c655,"feathers.utils.Scroller.set_scrollX","feathers/utils/Scroller.hx",99,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_124_get_scrollY,"feathers.utils.Scroller","get_scrollY",0xfaa3bf4a,"feathers.utils.Scroller.get_scrollY","feathers/utils/Scroller.hx",124,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_127_set_scrollY,"feathers.utils.Scroller","set_scrollY",0x0510c656,"feathers.utils.Scroller.set_scrollY","feathers/utils/Scroller.hx",127,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_145_get_restrictedScrollX,"feathers.utils.Scroller","get_restrictedScrollX",0xfb4dc76e,"feathers.utils.Scroller.get_restrictedScrollX","feathers/utils/Scroller.hx",145,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_148_set_restrictedScrollX,"feathers.utils.Scroller","set_restrictedScrollX",0x4f56957a,"feathers.utils.Scroller.set_restrictedScrollX","feathers/utils/Scroller.hx",148,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_171_get_restrictedScrollY,"feathers.utils.Scroller","get_restrictedScrollY",0xfb4dc76f,"feathers.utils.Scroller.get_restrictedScrollY","feathers/utils/Scroller.hx",171,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_174_set_restrictedScrollY,"feathers.utils.Scroller","set_restrictedScrollY",0x4f56957b,"feathers.utils.Scroller.set_restrictedScrollY","feathers/utils/Scroller.hx",174,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_198_get_minScrollX,"feathers.utils.Scroller","get_minScrollX",0x66bc8b5b,"feathers.utils.Scroller.get_minScrollX","feathers/utils/Scroller.hx",198,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_211_get_minScrollY,"feathers.utils.Scroller","get_minScrollY",0x66bc8b5c,"feathers.utils.Scroller.get_minScrollY","feathers/utils/Scroller.hx",211,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_224_get_maxScrollX,"feathers.utils.Scroller","get_maxScrollX",0x0b29b889,"feathers.utils.Scroller.get_maxScrollX","feathers/utils/Scroller.hx",224,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_237_get_maxScrollY,"feathers.utils.Scroller","get_maxScrollY",0x0b29b88a,"feathers.utils.Scroller.get_maxScrollY","feathers/utils/Scroller.hx",237,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_252_get_visibleWidth,"feathers.utils.Scroller","get_visibleWidth",0xddc767d6,"feathers.utils.Scroller.get_visibleWidth","feathers/utils/Scroller.hx",252,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_267_get_visibleHeight,"feathers.utils.Scroller","get_visibleHeight",0xe702ec17,"feathers.utils.Scroller.get_visibleHeight","feathers/utils/Scroller.hx",267,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_283_get_contentWidth,"feathers.utils.Scroller","get_contentWidth",0x4ed0a1af,"feathers.utils.Scroller.get_contentWidth","feathers/utils/Scroller.hx",283,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_299_get_contentHeight,"feathers.utils.Scroller","get_contentHeight",0x5e0c501e,"feathers.utils.Scroller.get_contentHeight","feathers/utils/Scroller.hx",299,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_312_get_scrolling,"feathers.utils.Scroller","get_scrolling",0xba962a13,"feathers.utils.Scroller.get_scrolling","feathers/utils/Scroller.hx",312,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_325_get_draggingX,"feathers.utils.Scroller","get_draggingX",0xdfa527c7,"feathers.utils.Scroller.get_draggingX","feathers/utils/Scroller.hx",325,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_338_get_draggingY,"feathers.utils.Scroller","get_draggingY",0xdfa527c8,"feathers.utils.Scroller.get_draggingY","feathers/utils/Scroller.hx",338,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_548_get_decelerationRate,"feathers.utils.Scroller","get_decelerationRate",0xb06c6ac1,"feathers.utils.Scroller.get_decelerationRate","feathers/utils/Scroller.hx",548,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_551_set_decelerationRate,"feathers.utils.Scroller","set_decelerationRate",0x7d242235,"feathers.utils.Scroller.set_decelerationRate","feathers/utils/Scroller.hx",551,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_608_get_target,"feathers.utils.Scroller","get_target",0x59e94573,"feathers.utils.Scroller.get_target","feathers/utils/Scroller.hx",608,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_611_set_target,"feathers.utils.Scroller","set_target",0x5d66e3e7,"feathers.utils.Scroller.set_target","feathers/utils/Scroller.hx",611,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_666_get_touchPointID,"feathers.utils.Scroller","get_touchPointID",0x196355ce,"feathers.utils.Scroller.get_touchPointID","feathers/utils/Scroller.hx",666,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_683_get_touchPointIsSimulated,"feathers.utils.Scroller","get_touchPointIsSimulated",0xabb9da83,"feathers.utils.Scroller.get_touchPointIsSimulated","feathers/utils/Scroller.hx",683,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_691_setDimensions,"feathers.utils.Scroller","setDimensions",0x393057d6,"feathers.utils.Scroller.setDimensions","feathers/utils/Scroller.hx",691,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_706_applyScrollRestrictions,"feathers.utils.Scroller","applyScrollRestrictions",0x9cd215a9,"feathers.utils.Scroller.applyScrollRestrictions","feathers/utils/Scroller.hx",706,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_732_stop,"feathers.utils.Scroller","stop",0x2778199b,"feathers.utils.Scroller.stop","feathers/utils/Scroller.hx",732,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_756_throwTo,"feathers.utils.Scroller","throwTo",0xd783d848,"feathers.utils.Scroller.throwTo","feathers/utils/Scroller.hx",756,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_780_throwTo,"feathers.utils.Scroller","throwTo",0xd783d848,"feathers.utils.Scroller.throwTo","feathers/utils/Scroller.hx",780,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_813_throwTo,"feathers.utils.Scroller","throwTo",0xd783d848,"feathers.utils.Scroller.throwTo","feathers/utils/Scroller.hx",813,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_835_throwWithVelocity,"feathers.utils.Scroller","throwWithVelocity",0xeed87f50,"feathers.utils.Scroller.throwWithVelocity","feathers/utils/Scroller.hx",835,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_888_calculateDistanceFromVelocity,"feathers.utils.Scroller","calculateDistanceFromVelocity",0x9cb22a49,"feathers.utils.Scroller.calculateDistanceFromVelocity","feathers/utils/Scroller.hx",888,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_891_refreshAnimateScrollXEndRatio,"feathers.utils.Scroller","refreshAnimateScrollXEndRatio",0x8337c7dc,"feathers.utils.Scroller.refreshAnimateScrollXEndRatio","feathers/utils/Scroller.hx",891,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_917_refreshAnimateScrollYEndRatio,"feathers.utils.Scroller","refreshAnimateScrollYEndRatio",0x562930dd,"feathers.utils.Scroller.refreshAnimateScrollYEndRatio","feathers/utils/Scroller.hx",917,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_943_calculateMinAndMax,"feathers.utils.Scroller","calculateMinAndMax",0x39fbb852,"feathers.utils.Scroller.calculateMinAndMax","feathers/utils/Scroller.hx",943,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_960_startScroll,"feathers.utils.Scroller","startScroll",0x031c6196,"feathers.utils.Scroller.startScroll","feathers/utils/Scroller.hx",960,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_973_completeScroll,"feathers.utils.Scroller","completeScroll",0x08fba07f,"feathers.utils.Scroller.completeScroll","feathers/utils/Scroller.hx",973,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_985_finishScrollX,"feathers.utils.Scroller","finishScrollX",0xb88576df,"feathers.utils.Scroller.finishScrollX","feathers/utils/Scroller.hx",985,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1016_finishScrollY,"feathers.utils.Scroller","finishScrollY",0xb88576e0,"feathers.utils.Scroller.finishScrollY","feathers/utils/Scroller.hx",1016,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1047_animateScrollX_endRatio_onUpdate,"feathers.utils.Scroller","animateScrollX_endRatio_onUpdate",0x654e2a1b,"feathers.utils.Scroller.animateScrollX_endRatio_onUpdate","feathers/utils/Scroller.hx",1047,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1073_animateScrollX_onComplete,"feathers.utils.Scroller","animateScrollX_onComplete",0x51446d14,"feathers.utils.Scroller.animateScrollX_onComplete","feathers/utils/Scroller.hx",1073,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1079_animateScrollY_endRatio_onUpdate,"feathers.utils.Scroller","animateScrollY_endRatio_onUpdate",0x6a5b3e5c,"feathers.utils.Scroller.animateScrollY_endRatio_onUpdate","feathers/utils/Scroller.hx",1079,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1105_animateScrollY_onComplete,"feathers.utils.Scroller","animateScrollY_onComplete",0x9303dab3,"feathers.utils.Scroller.animateScrollY_onComplete","feathers/utils/Scroller.hx",1105,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1111_cleanupAfterDrag,"feathers.utils.Scroller","cleanupAfterDrag",0x61f7d685,"feathers.utils.Scroller.cleanupAfterDrag","feathers/utils/Scroller.hx",1111,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1128_scroller_target_removedFromStageHandler,"feathers.utils.Scroller","scroller_target_removedFromStageHandler",0xa3d07cf4,"feathers.utils.Scroller.scroller_target_removedFromStageHandler","feathers/utils/Scroller.hx",1128,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1131_touchBegin,"feathers.utils.Scroller","touchBegin",0x8c5bb043,"feathers.utils.Scroller.touchBegin","feathers/utils/Scroller.hx",1131,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1178_touchMove,"feathers.utils.Scroller","touchMove",0x3b96de37,"feathers.utils.Scroller.touchMove","feathers/utils/Scroller.hx",1178,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1324_touchEnd,"feathers.utils.Scroller","touchEnd",0x1f3d2f75,"feathers.utils.Scroller.touchEnd","feathers/utils/Scroller.hx",1324,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1408_canDragX,"feathers.utils.Scroller","canDragX",0x6d7cf5cd,"feathers.utils.Scroller.canDragX","feathers/utils/Scroller.hx",1408,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1412_canDragY,"feathers.utils.Scroller","canDragY",0x6d7cf5ce,"feathers.utils.Scroller.canDragY","feathers/utils/Scroller.hx",1412,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1415_scroller_target_touchBeginCaptureHandler,"feathers.utils.Scroller","scroller_target_touchBeginCaptureHandler",0x887e71b0,"feathers.utils.Scroller.scroller_target_touchBeginCaptureHandler","feathers/utils/Scroller.hx",1415,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1423_scroller_target_touchBeginHandler,"feathers.utils.Scroller","scroller_target_touchBeginHandler",0x9e58407e,"feathers.utils.Scroller.scroller_target_touchBeginHandler","feathers/utils/Scroller.hx",1423,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1431_scroller_target_mouseDownCaptureHandler,"feathers.utils.Scroller","scroller_target_mouseDownCaptureHandler",0x7ae29769,"feathers.utils.Scroller.scroller_target_mouseDownCaptureHandler","feathers/utils/Scroller.hx",1431,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1439_scroller_target_mouseDownHandler,"feathers.utils.Scroller","scroller_target_mouseDownHandler",0xe9291da5,"feathers.utils.Scroller.scroller_target_mouseDownHandler","feathers/utils/Scroller.hx",1439,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1448_scroller_target_stage_touchMoveHandler,"feathers.utils.Scroller","scroller_target_stage_touchMoveHandler",0xb80632dd,"feathers.utils.Scroller.scroller_target_stage_touchMoveHandler","feathers/utils/Scroller.hx",1448,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1451_scroller_target_stage_mouseMoveHandler,"feathers.utils.Scroller","scroller_target_stage_mouseMoveHandler",0xdc7ea237,"feathers.utils.Scroller.scroller_target_stage_mouseMoveHandler","feathers/utils/Scroller.hx",1451,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1457_scroller_target_stage_touchEndHandler,"feathers.utils.Scroller","scroller_target_stage_touchEndHandler",0x6e611b8b,"feathers.utils.Scroller.scroller_target_stage_touchEndHandler","feathers/utils/Scroller.hx",1457,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1460_scroller_target_clickCaptureHandler,"feathers.utils.Scroller","scroller_target_clickCaptureHandler",0x3203e34a,"feathers.utils.Scroller.scroller_target_clickCaptureHandler","feathers/utils/Scroller.hx",1460,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1468_scroller_target_touchTapCaptureHandler,"feathers.utils.Scroller","scroller_target_touchTapCaptureHandler",0xa73a0caa,"feathers.utils.Scroller.scroller_target_touchTapCaptureHandler","feathers/utils/Scroller.hx",1468,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1482_scroller_target_stage_mouseUpHandler,"feathers.utils.Scroller","scroller_target_stage_mouseUpHandler",0xcb1080ad,"feathers.utils.Scroller.scroller_target_stage_mouseUpHandler","feathers/utils/Scroller.hx",1482,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_1491_scroller_target_mouseWheelHandler,"feathers.utils.Scroller","scroller_target_mouseWheelHandler",0x0bd107b2,"feathers.utils.Scroller.scroller_target_mouseWheelHandler","feathers/utils/Scroller.hx",1491,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_51_boot,"feathers.utils.Scroller","boot",0x1c37adcb,"feathers.utils.Scroller.boot","feathers/utils/Scroller.hx",51,0x79e218e7)
HX_LOCAL_STACK_FRAME(_hx_pos_502d7772405dfa7d_54_boot,"feathers.utils.Scroller","boot",0x1c37adcb,"feathers.utils.Scroller.boot","feathers/utils/Scroller.hx",54,0x79e218e7)
namespace feathers{
namespace utils{

void Scroller_obj::__construct( ::openfl::display::InteractiveObject target){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_50_new)
HXLINE( 669)		this->_touchPointIsSimulated = false;
HXLINE( 650)		this->_touchPointID = null();
HXLINE( 649)		this->_previousTouchPointID = null();
HXLINE( 596)		this->snappingToEdge = false;
HXLINE( 595)		this->targetScrollY = ((Float)0.0);
HXLINE( 594)		this->targetScrollX = ((Float)0.0);
HXLINE( 593)		this->animateScrollYEndRatio = ((Float)1.0);
HXLINE( 592)		this->animateScrollXEndRatio = ((Float)1.0);
HXLINE( 591)		this->_animateScrollYEase = null();
HXLINE( 590)		this->_animateScrollXEase = null();
HXLINE( 589)		this->animateScrollY = null();
HXLINE( 588)		this->animateScrollX = null();
HXLINE( 587)		this->savedScrollMoves = ::Array_obj< Float >::__new(0);
HXLINE( 586)		this->startScrollY = ((Float)0.0);
HXLINE( 585)		this->startScrollX = ((Float)0.0);
HXLINE( 584)		this->startTouchY = ((Float)0.0);
HXLINE( 583)		this->startTouchX = ((Float)0.0);
HXLINE( 582)		this->restoreMouseChildren = false;
HXLINE( 581)		this->_fixedThrowDuration = ((Float)2.996998998998728);
HXLINE( 580)		this->_logDecelerationRate = ((Float)-0.0020020026706730793);
HXLINE( 577)		this->snapPositionsY = null();
HXLINE( 568)		this->snapPositionsX = null();
HXLINE( 534)		this->_decelerationRate = ((Float)0.998);
HXLINE( 532)		this->simulateTouch = false;
HXLINE( 523)		this->mouseWheelDuration = ((Float)0.0);
HXLINE( 513)		this->_mouseWheelDeltaMode = 1;
HXLINE( 511)		this->mouseWheelYScrollsX = false;
HXLINE( 503)		this->mouseWheelDeltaY = ((Float)10.0);
HXLINE( 494)		this->mouseWheelDeltaX = ((Float)10.0);
HXLINE( 485)		this->bounceEase = null();
HXLINE( 475)		this->ease = ::motion::easing::Quart_obj::easeOut;
HXLINE( 466)		this->elasticSnapDuration = ((Float)0.5);
HXLINE( 454)		this->throwElasticity = ((Float)0.05);
HXLINE( 435)		this->elasticity = ((Float)0.33);
HXLINE( 417)		this->forceElasticLeft = false;
HXLINE( 403)		this->forceElasticBottom = false;
HXLINE( 389)		this->forceElasticRight = false;
HXLINE( 375)		this->forceElasticTop = false;
HXLINE( 361)		this->elasticEdges = true;
HXLINE( 349)		this->minDragDistance = ((Float)6.0);
HXLINE( 328)		this->_draggingY = false;
HXLINE( 315)		this->_draggingX = false;
HXLINE( 302)		this->_scrolling = false;
HXLINE( 286)		this->_contentHeight = ((Float)0.0);
HXLINE( 270)		this->_contentWidth = ((Float)0.0);
HXLINE( 255)		this->_visibleHeight = ((Float)0.0);
HXLINE( 240)		this->_visibleWidth = ((Float)0.0);
HXLINE( 227)		this->_maxScrollY = ((Float)0.0);
HXLINE( 214)		this->_maxScrollX = ((Float)0.0);
HXLINE( 201)		this->_minScrollY = ((Float)0.0);
HXLINE( 188)		this->_minScrollX = ((Float)0.0);
HXLINE( 108)		this->_scrollY = ((Float)0.0);
HXLINE(  80)		this->_scrollX = ((Float)0.0);
HXLINE(  78)		this->enabledY = true;
HXLINE(  71)		this->enabledX = true;
HXLINE(  62)		super::__construct(null());
HXLINE(  63)		this->set_target(target);
            	}

Dynamic Scroller_obj::__CreateEmpty() { return new Scroller_obj; }

void *Scroller_obj::_hx_vtable = 0;

Dynamic Scroller_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scroller_obj > _hx_result = new Scroller_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Scroller_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x26c5e59b;
	}
}

Float Scroller_obj::get_scrollX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_96_get_scrollX)
HXDLIN(  96)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_scrollX,return )

Float Scroller_obj::set_scrollX(Float value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_99_set_scrollX)
HXLINE( 100)		if ((this->_scrollX == value)) {
HXLINE( 101)			return this->_scrollX;
            		}
HXLINE( 103)		this->_scrollX = value;
HXLINE( 104)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scroll",0d,d8,64,47),null(),null());
HXLINE( 105)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_scrollX,return )

Float Scroller_obj::get_scrollY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_124_get_scrollY)
HXDLIN( 124)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_scrollY,return )

Float Scroller_obj::set_scrollY(Float value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_127_set_scrollY)
HXLINE( 128)		if ((this->_scrollY == value)) {
HXLINE( 129)			return this->_scrollY;
            		}
HXLINE( 131)		this->_scrollY = value;
HXLINE( 132)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scroll",0d,d8,64,47),null(),null());
HXLINE( 133)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_scrollY,return )

Float Scroller_obj::get_restrictedScrollX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_145_get_restrictedScrollX)
HXDLIN( 145)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_restrictedScrollX,return )

Float Scroller_obj::set_restrictedScrollX(Float value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_148_set_restrictedScrollX)
HXLINE( 149)		if ((value < this->_minScrollX)) {
HXLINE( 150)			value = this->_minScrollX;
            		}
            		else {
HXLINE( 151)			if ((value > this->_maxScrollX)) {
HXLINE( 152)				value = this->_maxScrollX;
            			}
            		}
HXLINE( 154)		if ((this->_scrollX == value)) {
HXLINE( 155)			return this->_scrollX;
            		}
HXLINE( 157)		this->_scrollX = value;
HXLINE( 158)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scroll",0d,d8,64,47),null(),null());
HXLINE( 159)		return this->_scrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_restrictedScrollX,return )

Float Scroller_obj::get_restrictedScrollY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_171_get_restrictedScrollY)
HXDLIN( 171)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_restrictedScrollY,return )

Float Scroller_obj::set_restrictedScrollY(Float value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_174_set_restrictedScrollY)
HXLINE( 175)		if ((value < this->_minScrollY)) {
HXLINE( 176)			value = this->_minScrollY;
            		}
            		else {
HXLINE( 177)			if ((value > this->_maxScrollY)) {
HXLINE( 178)				value = this->_maxScrollY;
            			}
            		}
HXLINE( 180)		if ((this->_scrollY == value)) {
HXLINE( 181)			return this->_scrollY;
            		}
HXLINE( 183)		this->_scrollY = value;
HXLINE( 184)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scroll",0d,d8,64,47),null(),null());
HXLINE( 185)		return this->_scrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_restrictedScrollY,return )

Float Scroller_obj::get_minScrollX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_198_get_minScrollX)
HXDLIN( 198)		return this->_minScrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_minScrollX,return )

Float Scroller_obj::get_minScrollY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_211_get_minScrollY)
HXDLIN( 211)		return this->_minScrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_minScrollY,return )

Float Scroller_obj::get_maxScrollX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_224_get_maxScrollX)
HXDLIN( 224)		return this->_maxScrollX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_maxScrollX,return )

Float Scroller_obj::get_maxScrollY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_237_get_maxScrollY)
HXDLIN( 237)		return this->_maxScrollY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_maxScrollY,return )

Float Scroller_obj::get_visibleWidth(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_252_get_visibleWidth)
HXDLIN( 252)		return this->_visibleWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_visibleWidth,return )

Float Scroller_obj::get_visibleHeight(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_267_get_visibleHeight)
HXDLIN( 267)		return this->_visibleHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_visibleHeight,return )

Float Scroller_obj::get_contentWidth(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_283_get_contentWidth)
HXDLIN( 283)		return this->_contentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_contentWidth,return )

Float Scroller_obj::get_contentHeight(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_299_get_contentHeight)
HXDLIN( 299)		return this->_contentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_contentHeight,return )

bool Scroller_obj::get_scrolling(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_312_get_scrolling)
HXDLIN( 312)		return this->_scrolling;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_scrolling,return )

bool Scroller_obj::get_draggingX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_325_get_draggingX)
HXDLIN( 325)		return this->_draggingX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_draggingX,return )

bool Scroller_obj::get_draggingY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_338_get_draggingY)
HXDLIN( 338)		return this->_draggingY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_draggingY,return )

Float Scroller_obj::get_decelerationRate(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_548_get_decelerationRate)
HXDLIN( 548)		return this->_decelerationRate;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_decelerationRate,return )

Float Scroller_obj::set_decelerationRate(Float value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_551_set_decelerationRate)
HXLINE( 552)		if ((this->_decelerationRate == value)) {
HXLINE( 553)			return this->_decelerationRate;
            		}
HXLINE( 555)		this->_decelerationRate = value;
HXLINE( 556)		this->_logDecelerationRate = ::Math_obj::log(this->_decelerationRate);
HXLINE( 557)		this->_fixedThrowDuration = (((Float)-0.1) / ::Math_obj::log(::Math_obj::pow(this->_decelerationRate,((Float)16.666666666666668))));
HXLINE( 558)		return this->_decelerationRate;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_decelerationRate,return )

 ::openfl::display::InteractiveObject Scroller_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_608_get_target)
HXDLIN( 608)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_target,return )

 ::openfl::display::InteractiveObject Scroller_obj::set_target( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_611_set_target)
HXLINE( 612)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE( 613)			return this->_target;
            		}
HXLINE( 615)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 616)			this->cleanupAfterDrag();
HXLINE( 617)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->scroller_target_removedFromStageHandler_dyn(),null());
HXLINE( 618)			this->_target->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->scroller_target_mouseDownHandler_dyn(),null());
HXLINE( 619)			this->_target->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->scroller_target_mouseDownCaptureHandler_dyn(),true);
HXLINE( 620)			this->_target->removeEventListener(HX_("mouseWheel",36,28,87,e7),this->scroller_target_mouseWheelHandler_dyn(),null());
HXLINE( 625)			this->_target->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->scroller_target_touchBeginHandler_dyn(),null());
HXLINE( 626)			this->_target->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->scroller_target_touchBeginCaptureHandler_dyn(),true);
HXLINE( 627)			this->_target->removeEventListener(HX_("click",48,7c,5e,48),this->scroller_target_clickCaptureHandler_dyn(),true);
HXLINE( 628)			this->_target->removeEventListener(HX_("touchTap",e4,1b,15,00),this->scroller_target_touchTapCaptureHandler_dyn(),true);
            		}
HXLINE( 630)		this->_target = value;
HXLINE( 631)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 632)			this->_target->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->scroller_target_mouseDownHandler_dyn(),false,0,true);
HXLINE( 633)			this->_target->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->scroller_target_mouseDownCaptureHandler_dyn(),true,0,true);
HXLINE( 634)			this->_target->addEventListener(HX_("mouseWheel",36,28,87,e7),this->scroller_target_mouseWheelHandler_dyn(),false,0,true);
HXLINE( 639)			this->_target->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->scroller_target_touchBeginHandler_dyn(),false,0,true);
HXLINE( 640)			this->_target->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->scroller_target_touchBeginCaptureHandler_dyn(),true,0,true);
HXLINE( 641)			this->_target->addEventListener(HX_("click",48,7c,5e,48),this->scroller_target_clickCaptureHandler_dyn(),true,0,true);
HXLINE( 643)			this->_target->addEventListener(HX_("touchTap",e4,1b,15,00),this->scroller_target_touchTapCaptureHandler_dyn(),true,0,true);
            		}
HXLINE( 646)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,set_target,return )

 ::Dynamic Scroller_obj::get_touchPointID(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_666_get_touchPointID)
HXDLIN( 666)		return this->_touchPointID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_touchPointID,return )

bool Scroller_obj::get_touchPointIsSimulated(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_683_get_touchPointIsSimulated)
HXDLIN( 683)		return this->_touchPointIsSimulated;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,get_touchPointIsSimulated,return )

void Scroller_obj::setDimensions( ::Dynamic visibleWidth, ::Dynamic visibleHeight, ::Dynamic contentWidth, ::Dynamic contentHeight){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_691_setDimensions)
HXLINE( 692)		Float _hx_tmp;
HXDLIN( 692)		if (::hx::IsNotNull( visibleWidth )) {
HXLINE( 692)			_hx_tmp = ( (Float)(visibleWidth) );
            		}
            		else {
HXLINE( 692)			_hx_tmp = ((Float)0.0);
            		}
HXDLIN( 692)		this->_visibleWidth = _hx_tmp;
HXLINE( 693)		Float _hx_tmp1;
HXDLIN( 693)		if (::hx::IsNotNull( visibleHeight )) {
HXLINE( 693)			_hx_tmp1 = ( (Float)(visibleHeight) );
            		}
            		else {
HXLINE( 693)			_hx_tmp1 = ((Float)0.0);
            		}
HXDLIN( 693)		this->_visibleHeight = _hx_tmp1;
HXLINE( 694)		Float _hx_tmp2;
HXDLIN( 694)		if (::hx::IsNotNull( contentWidth )) {
HXLINE( 694)			_hx_tmp2 = ( (Float)(contentWidth) );
            		}
            		else {
HXLINE( 694)			_hx_tmp2 = ((Float)0.0);
            		}
HXDLIN( 694)		this->_contentWidth = _hx_tmp2;
HXLINE( 695)		Float _hx_tmp3;
HXDLIN( 695)		if (::hx::IsNotNull( contentHeight )) {
HXLINE( 695)			_hx_tmp3 = ( (Float)(contentHeight) );
            		}
            		else {
HXLINE( 695)			_hx_tmp3 = ((Float)0.0);
            		}
HXDLIN( 695)		this->_contentHeight = _hx_tmp3;
HXLINE( 696)		this->calculateMinAndMax();
            	}


HX_DEFINE_DYNAMIC_FUNC4(Scroller_obj,setDimensions,(void))

void Scroller_obj::applyScrollRestrictions(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_706_applyScrollRestrictions)
HXLINE( 707)		bool scrollChanged = false;
HXLINE( 708)		if ((this->_scrollX < this->_minScrollX)) {
HXLINE( 709)			this->_scrollX = this->_minScrollX;
HXLINE( 710)			scrollChanged = true;
            		}
            		else {
HXLINE( 711)			if ((this->_scrollX > this->_maxScrollX)) {
HXLINE( 712)				this->_scrollX = this->_maxScrollX;
HXLINE( 713)				scrollChanged = true;
            			}
            		}
HXLINE( 715)		if ((this->_scrollY < this->_minScrollY)) {
HXLINE( 716)			this->_scrollY = this->_minScrollY;
HXLINE( 717)			scrollChanged = true;
            		}
            		else {
HXLINE( 718)			if ((this->_scrollY > this->_maxScrollY)) {
HXLINE( 719)				this->_scrollY = this->_maxScrollY;
HXLINE( 720)				scrollChanged = true;
            			}
            		}
HXLINE( 722)		if (scrollChanged) {
HXLINE( 723)			::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scroll",0d,d8,64,47),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,applyScrollRestrictions,(void))

void Scroller_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_732_stop)
HXLINE( 733)		if (::hx::IsNotNull( this->animateScrollX )) {
HXLINE( 734)			::motion::Actuate_obj::stop(this->animateScrollX,null(),false,false);
HXLINE( 735)			this->animateScrollX = null();
HXLINE( 736)			this->_animateScrollXEase = null();
            		}
HXLINE( 738)		if (::hx::IsNotNull( this->animateScrollY )) {
HXLINE( 739)			::motion::Actuate_obj::stop(this->animateScrollY,null(),false,false);
HXLINE( 740)			this->animateScrollY = null();
HXLINE( 741)			this->_animateScrollYEase = null();
            		}
HXLINE( 743)		this->cleanupAfterDrag();
HXLINE( 744)		this->_draggingX = false;
HXLINE( 745)		this->_draggingY = false;
HXLINE( 746)		this->completeScroll();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,stop,(void))

void Scroller_obj::throwTo( ::Dynamic scrollX, ::Dynamic scrollY, ::Dynamic duration,::Dynamic ease){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_756_throwTo)
HXDLIN( 756)		 ::feathers::utils::Scroller _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 757)		if (::hx::IsNull( duration )) {
HXLINE( 758)			duration = this->_fixedThrowDuration;
            		}
HXLINE( 760)		if (::hx::IsNull( ease )) {
HXLINE( 761)			ease = this->ease;
            		}
HXLINE( 763)		bool scrollChanged = false;
HXLINE( 764)		if (::hx::IsNotNull( scrollX )) {
HXLINE( 765)			if (::hx::IsNotNull( this->animateScrollX )) {
HXLINE( 766)				::motion::Actuate_obj::stop(this->animateScrollX,null(),false,false);
HXLINE( 767)				this->animateScrollX = null();
HXLINE( 768)				this->_animateScrollXEase = null();
            			}
HXLINE( 770)			if (::hx::IsNotEq( this->_scrollX,scrollX )) {
HXLINE( 771)				scrollChanged = true;
HXLINE( 772)				this->startScroll();
HXLINE( 773)				if (::hx::IsEq( duration,((Float)0.0) )) {
HXLINE( 775)					this->set_scrollX(( (Float)(scrollX) ));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::utils::Scroller,_gthis) HXARGC(1)
            					Float _hx_run( ::Dynamic scrollX){
            						HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_780_throwTo)
HXLINE( 781)						if (::hx::IsNull( scrollX )) {
HXLINE( 783)							scrollX = _gthis->targetScrollX;
            						}
HXLINE( 786)						return _gthis->set_scrollX(( (Float)(scrollX) ));
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 777)					this->startScrollX = this->_scrollX;
HXLINE( 778)					this->targetScrollX = ( (Float)(scrollX) );
HXLINE( 779)					this->_animateScrollXEase = ease;
HXLINE( 780)					 ::motion::actuators::GenericActuator tween = ::motion::Actuate_obj::update( ::Dynamic(new _hx_Closure_0(_gthis)),( (Float)(duration) ),::cpp::VirtualArray_obj::__new(1)->init(0,this->_scrollX),::cpp::VirtualArray_obj::__new(1)->init(0,this->targetScrollX),true);
HXLINE( 788)					this->animateScrollX = ::hx::TCast<  ::motion::actuators::SimpleActuator >::cast(tween);
HXLINE( 789)					this->animateScrollX->ease(this->_animateScrollXEase);
HXLINE( 790)					this->animateScrollX->onComplete(this->animateScrollX_onComplete_dyn(),null());
HXLINE( 791)					this->refreshAnimateScrollXEndRatio();
            				}
            			}
            			else {
HXLINE( 794)				this->finishScrollX();
            			}
            		}
HXLINE( 797)		if (::hx::IsNotNull( scrollY )) {
HXLINE( 798)			if (::hx::IsNotNull( this->animateScrollY )) {
HXLINE( 799)				::motion::Actuate_obj::stop(this->animateScrollY,null(),false,false);
HXLINE( 800)				this->animateScrollY = null();
HXLINE( 801)				this->_animateScrollYEase = null();
            			}
HXLINE( 803)			if (::hx::IsNotEq( this->_scrollY,scrollY )) {
HXLINE( 804)				scrollChanged = true;
HXLINE( 805)				this->startScroll();
HXLINE( 806)				if (::hx::IsEq( duration,((Float)0.0) )) {
HXLINE( 808)					this->set_scrollY(( (Float)(scrollY) ));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::feathers::utils::Scroller,_gthis) HXARGC(1)
            					Float _hx_run( ::Dynamic scrollY){
            						HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_813_throwTo)
HXLINE( 814)						if (::hx::IsNull( scrollY )) {
HXLINE( 816)							scrollY = _gthis->targetScrollY;
            						}
HXLINE( 819)						return _gthis->set_scrollY(( (Float)(scrollY) ));
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 810)					this->startScrollY = this->_scrollY;
HXLINE( 811)					this->targetScrollY = ( (Float)(scrollY) );
HXLINE( 812)					this->_animateScrollYEase = ease;
HXLINE( 813)					 ::motion::actuators::GenericActuator tween = ::motion::Actuate_obj::update( ::Dynamic(new _hx_Closure_1(_gthis)),( (Float)(duration) ),::cpp::VirtualArray_obj::__new(1)->init(0,this->_scrollY),::cpp::VirtualArray_obj::__new(1)->init(0,this->targetScrollY),true);
HXLINE( 821)					this->animateScrollY = ::hx::TCast<  ::motion::actuators::SimpleActuator >::cast(tween);
HXLINE( 822)					this->animateScrollY->ease(this->_animateScrollYEase);
HXLINE( 823)					this->animateScrollY->onComplete(this->animateScrollY_onComplete_dyn(),null());
HXLINE( 824)					this->refreshAnimateScrollYEndRatio();
            				}
            			}
            			else {
HXLINE( 827)				this->finishScrollY();
            			}
            		}
HXLINE( 830)		bool _hx_tmp;
HXDLIN( 830)		if (scrollChanged) {
HXLINE( 830)			_hx_tmp = ::hx::IsEq( duration,((Float)0.0) );
            		}
            		else {
HXLINE( 830)			_hx_tmp = false;
            		}
HXDLIN( 830)		if (_hx_tmp) {
HXLINE( 831)			this->completeScroll();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Scroller_obj,throwTo,(void))

void Scroller_obj::throwWithVelocity( ::Dynamic velocityX, ::Dynamic velocityY){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_835_throwWithVelocity)
HXLINE( 836)		 ::Dynamic targetX = null();
HXLINE( 837)		 ::Dynamic targetY = null();
HXLINE( 838)		if (::hx::IsNotNull( velocityX )) {
HXLINE( 839)			if ((::Math_obj::abs(( (Float)(velocityX) )) <= ::feathers::utils::Scroller_obj::MINIMUM_VELOCITY)) {
HXLINE( 840)				this->finishScrollX();
            			}
            			else {
HXLINE( 841)				if (::hx::IsNotNull( this->snapPositionsX )) {
HXLINE( 842)					int _g = 0;
HXDLIN( 842)					int _g1 = this->snapPositionsX->length;
HXDLIN( 842)					while((_g < _g1)){
HXLINE( 842)						_g = (_g + 1);
HXDLIN( 842)						int i = (_g - 1);
HXLINE( 843)						Float posX = this->snapPositionsX->__get(i);
HXLINE( 844)						if (::hx::IsLess( velocityX,((Float)0.0) )) {
HXLINE( 845)							targetX = posX;
HXLINE( 846)							if ((posX > this->_scrollX)) {
HXLINE( 847)								goto _hx_goto_32;
            							}
            						}
HXLINE( 850)						if (::hx::IsGreater( velocityX,((Float)0.0) )) {
HXLINE( 851)							if ((i == 0)) {
HXLINE( 851)								targetX = posX;
            							}
            							else {
HXLINE( 851)								targetX = this->snapPositionsX->__get((i - 1));
            							}
HXLINE( 852)							if ((posX >= this->_scrollX)) {
HXLINE( 853)								goto _hx_goto_32;
            							}
            						}
            					}
            					_hx_goto_32:;
            				}
            				else {
HXLINE( 858)					Float targetX1 = this->_scrollX;
HXDLIN( 858)					targetX = (targetX1 + this->calculateDistanceFromVelocity(( (Float)(velocityX) )));
            				}
            			}
            		}
HXLINE( 861)		if (::hx::IsNotNull( velocityY )) {
HXLINE( 862)			if ((::Math_obj::abs(( (Float)(velocityY) )) <= ::feathers::utils::Scroller_obj::MINIMUM_VELOCITY)) {
HXLINE( 863)				this->finishScrollY();
            			}
            			else {
HXLINE( 864)				if (::hx::IsNotNull( this->snapPositionsY )) {
HXLINE( 865)					int _g = 0;
HXDLIN( 865)					int _g1 = this->snapPositionsY->length;
HXDLIN( 865)					while((_g < _g1)){
HXLINE( 865)						_g = (_g + 1);
HXDLIN( 865)						int i = (_g - 1);
HXLINE( 866)						Float posY = this->snapPositionsY->__get(i);
HXLINE( 867)						if (::hx::IsLess( velocityY,((Float)0.0) )) {
HXLINE( 868)							targetY = posY;
HXLINE( 869)							if ((posY > this->_scrollY)) {
HXLINE( 870)								goto _hx_goto_33;
            							}
            						}
HXLINE( 873)						if (::hx::IsGreater( velocityY,((Float)0.0) )) {
HXLINE( 874)							if ((i == 0)) {
HXLINE( 874)								targetY = posY;
            							}
            							else {
HXLINE( 874)								targetY = this->snapPositionsY->__get((i - 1));
            							}
HXLINE( 875)							if ((posY >= this->_scrollY)) {
HXLINE( 876)								goto _hx_goto_33;
            							}
            						}
            					}
            					_hx_goto_33:;
            				}
            				else {
HXLINE( 881)					Float targetY1 = this->_scrollY;
HXDLIN( 881)					targetY = (targetY1 + this->calculateDistanceFromVelocity(( (Float)(velocityY) )));
            				}
            			}
            		}
HXLINE( 884)		this->throwTo(targetX,targetY,this->_fixedThrowDuration,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scroller_obj,throwWithVelocity,(void))

Float Scroller_obj::calculateDistanceFromVelocity(Float velocity){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_888_calculateDistanceFromVelocity)
HXDLIN( 888)		return ((velocity - ::feathers::utils::Scroller_obj::MINIMUM_VELOCITY) / this->_logDecelerationRate);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,calculateDistanceFromVelocity,return )

void Scroller_obj::refreshAnimateScrollXEndRatio(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_891_refreshAnimateScrollXEndRatio)
HXLINE( 892)		Float distance = ::Math_obj::abs((this->targetScrollX - this->startScrollX));
HXLINE( 893)		Float ratioOutOfBounds = ((Float)0.0);
HXLINE( 894)		if ((this->targetScrollX > this->_maxScrollX)) {
HXLINE( 895)			ratioOutOfBounds = ((this->targetScrollX - this->_maxScrollX) / distance);
            		}
            		else {
HXLINE( 896)			if ((this->targetScrollX < this->_minScrollX)) {
HXLINE( 897)				ratioOutOfBounds = ((this->_minScrollX - this->targetScrollX) / distance);
            			}
            		}
HXLINE( 899)		if ((ratioOutOfBounds > ((Float)0.0))) {
HXLINE( 900)			if (this->elasticEdges) {
HXLINE( 901)				this->animateScrollXEndRatio = ((((Float)1.0) - ratioOutOfBounds) + (ratioOutOfBounds * this->throwElasticity));
            			}
            			else {
HXLINE( 903)				this->animateScrollXEndRatio = (((Float)1.0) - ratioOutOfBounds);
            			}
            		}
            		else {
HXLINE( 906)			this->animateScrollXEndRatio = ((Float)1.0);
            		}
HXLINE( 908)		if (::hx::IsNotNull( this->animateScrollX )) {
HXLINE( 909)			if ((this->animateScrollXEndRatio < ((Float)1.0))) {
HXLINE( 910)				this->animateScrollX->onUpdate(this->animateScrollX_endRatio_onUpdate_dyn(),null());
            			}
            			else {
HXLINE( 912)				this->animateScrollX->onUpdate(null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,refreshAnimateScrollXEndRatio,(void))

void Scroller_obj::refreshAnimateScrollYEndRatio(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_917_refreshAnimateScrollYEndRatio)
HXLINE( 918)		Float distance = ::Math_obj::abs((this->targetScrollY - this->startScrollY));
HXLINE( 919)		Float ratioOutOfBounds = ((Float)0.0);
HXLINE( 920)		if ((this->targetScrollY > this->_maxScrollY)) {
HXLINE( 921)			ratioOutOfBounds = ((this->targetScrollY - this->_maxScrollY) / distance);
            		}
            		else {
HXLINE( 922)			if ((this->targetScrollY < this->_minScrollY)) {
HXLINE( 923)				ratioOutOfBounds = ((this->_minScrollY - this->targetScrollY) / distance);
            			}
            		}
HXLINE( 925)		if ((ratioOutOfBounds > ((Float)0.0))) {
HXLINE( 926)			if (this->elasticEdges) {
HXLINE( 927)				this->animateScrollYEndRatio = ((((Float)1.0) - ratioOutOfBounds) + (ratioOutOfBounds * this->throwElasticity));
            			}
            			else {
HXLINE( 929)				this->animateScrollYEndRatio = (((Float)1.0) - ratioOutOfBounds);
            			}
            		}
            		else {
HXLINE( 932)			this->animateScrollYEndRatio = ((Float)1.0);
            		}
HXLINE( 934)		if (::hx::IsNotNull( this->animateScrollY )) {
HXLINE( 935)			if ((this->animateScrollYEndRatio < ((Float)1.0))) {
HXLINE( 936)				this->animateScrollY->onUpdate(this->animateScrollY_endRatio_onUpdate_dyn(),null());
            			}
            			else {
HXLINE( 938)				this->animateScrollY->onUpdate(null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,refreshAnimateScrollYEndRatio,(void))

void Scroller_obj::calculateMinAndMax(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_943_calculateMinAndMax)
HXLINE( 944)		Float oldMinScrollX = this->_minScrollX;
HXLINE( 945)		Float oldMaxScrollX = this->_maxScrollX;
HXLINE( 946)		Float oldMinScrollY = this->_minScrollY;
HXLINE( 947)		Float oldMaxScrollY = this->_maxScrollY;
HXLINE( 948)		this->_minScrollX = ((Float)0.0);
HXLINE( 949)		this->_minScrollY = ((Float)0.0);
HXLINE( 950)		this->_maxScrollX = (::Math_obj::max(this->_contentWidth,this->_visibleWidth) - this->_visibleWidth);
HXLINE( 951)		this->_maxScrollY = (::Math_obj::max(this->_contentHeight,this->_visibleHeight) - this->_visibleHeight);
HXLINE( 952)		bool _hx_tmp;
HXDLIN( 952)		if ((oldMinScrollX == this->_minScrollX)) {
HXLINE( 952)			_hx_tmp = (oldMaxScrollX != this->_maxScrollX);
            		}
            		else {
HXLINE( 952)			_hx_tmp = true;
            		}
HXDLIN( 952)		if (_hx_tmp) {
HXLINE( 953)			this->refreshAnimateScrollXEndRatio();
            		}
HXLINE( 955)		bool _hx_tmp1;
HXDLIN( 955)		if ((oldMinScrollY == this->_minScrollY)) {
HXLINE( 955)			_hx_tmp1 = (oldMaxScrollY != this->_maxScrollY);
            		}
            		else {
HXLINE( 955)			_hx_tmp1 = true;
            		}
HXDLIN( 955)		if (_hx_tmp1) {
HXLINE( 956)			this->refreshAnimateScrollYEndRatio();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,calculateMinAndMax,(void))

void Scroller_obj::startScroll(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_960_startScroll)
HXLINE( 961)		if (this->_scrolling) {
HXLINE( 962)			return;
            		}
HXLINE( 964)		this->_scrolling = true;
HXLINE( 965)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 966)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE( 967)			this->restoreMouseChildren = container->mouseChildren;
HXLINE( 968)			container->mouseChildren = false;
            		}
HXLINE( 970)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollStart",15,bd,e8,cd),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,startScroll,(void))

void Scroller_obj::completeScroll(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_973_completeScroll)
HXLINE( 974)		bool _hx_tmp;
HXDLIN( 974)		bool _hx_tmp1;
HXDLIN( 974)		bool _hx_tmp2;
HXDLIN( 974)		bool _hx_tmp3;
HXDLIN( 974)		if (this->_scrolling) {
HXLINE( 974)			_hx_tmp3 = this->_draggingX;
            		}
            		else {
HXLINE( 974)			_hx_tmp3 = true;
            		}
HXDLIN( 974)		if (!(_hx_tmp3)) {
HXLINE( 974)			_hx_tmp2 = this->_draggingY;
            		}
            		else {
HXLINE( 974)			_hx_tmp2 = true;
            		}
HXDLIN( 974)		if (!(_hx_tmp2)) {
HXLINE( 974)			_hx_tmp1 = ::hx::IsNotNull( this->animateScrollX );
            		}
            		else {
HXLINE( 974)			_hx_tmp1 = true;
            		}
HXDLIN( 974)		if (!(_hx_tmp1)) {
HXLINE( 974)			_hx_tmp = ::hx::IsNotNull( this->animateScrollY );
            		}
            		else {
HXLINE( 974)			_hx_tmp = true;
            		}
HXDLIN( 974)		if (_hx_tmp) {
HXLINE( 975)			return;
            		}
HXLINE( 977)		this->_scrolling = false;
HXLINE( 978)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 979)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE( 980)			container->mouseChildren = this->restoreMouseChildren;
            		}
HXLINE( 982)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollComplete",e6,e9,b8,0b),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,completeScroll,(void))

void Scroller_obj::finishScrollX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_985_finishScrollX)
HXLINE( 986)		this->_draggingX = false;
HXLINE( 988)		 ::Dynamic targetScrollX = null();
HXLINE( 989)		if (::hx::IsNotNull( this->snapPositionsX )) {
HXLINE( 990)			Float minOffsetX = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 991)			{
HXLINE( 991)				int _g = 0;
HXDLIN( 991)				::Array< Float > _g1 = this->snapPositionsX;
HXDLIN( 991)				while((_g < _g1->length)){
HXLINE( 991)					Float snapX = _g1->__get(_g);
HXDLIN( 991)					_g = (_g + 1);
HXLINE( 992)					Float offsetX = ::Math_obj::abs((snapX - this->_scrollX));
HXLINE( 993)					if ((minOffsetX > offsetX)) {
HXLINE( 994)						minOffsetX = offsetX;
HXLINE( 995)						targetScrollX = snapX;
            					}
            				}
            			}
HXLINE( 998)			if (::hx::IsEq( targetScrollX,this->_scrollX )) {
HXLINE( 999)				targetScrollX = null();
            			}
            		}
HXLINE(1002)		if ((this->_scrollX < this->_minScrollX)) {
HXLINE(1003)			targetScrollX = this->_minScrollX;
            		}
            		else {
HXLINE(1004)			if ((this->_scrollX > this->_maxScrollX)) {
HXLINE(1005)				targetScrollX = this->_maxScrollX;
            			}
            		}
HXLINE(1008)		if (::hx::IsNull( targetScrollX )) {
HXLINE(1009)			this->completeScroll();
            		}
            		else {
HXLINE(1011)			Float duration;
HXDLIN(1011)			if ((::Math_obj::abs((this->_scrollX - ( (Float)(targetScrollX) ))) >= ((Float)1.0))) {
HXLINE(1011)				duration = this->elasticSnapDuration;
            			}
            			else {
HXLINE(1011)				duration = ((Float)0.0);
            			}
HXLINE(1012)			this->throwTo(targetScrollX,null(),duration,this->bounceEase);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,finishScrollX,(void))

void Scroller_obj::finishScrollY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1016_finishScrollY)
HXLINE(1017)		this->_draggingY = false;
HXLINE(1019)		 ::Dynamic targetScrollY = null();
HXLINE(1020)		if (::hx::IsNotNull( this->snapPositionsY )) {
HXLINE(1021)			Float minOffsetY = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1022)			{
HXLINE(1022)				int _g = 0;
HXDLIN(1022)				::Array< Float > _g1 = this->snapPositionsY;
HXDLIN(1022)				while((_g < _g1->length)){
HXLINE(1022)					Float snapY = _g1->__get(_g);
HXDLIN(1022)					_g = (_g + 1);
HXLINE(1023)					Float offsetY = ::Math_obj::abs((snapY - this->_scrollY));
HXLINE(1024)					if ((minOffsetY > offsetY)) {
HXLINE(1025)						minOffsetY = offsetY;
HXLINE(1026)						targetScrollY = snapY;
            					}
            				}
            			}
HXLINE(1029)			if (::hx::IsEq( targetScrollY,this->_scrollY )) {
HXLINE(1030)				targetScrollY = null();
            			}
            		}
HXLINE(1033)		if ((this->_scrollY < this->_minScrollY)) {
HXLINE(1034)			targetScrollY = this->_minScrollY;
            		}
            		else {
HXLINE(1035)			if ((this->_scrollY > this->_maxScrollY)) {
HXLINE(1036)				targetScrollY = this->_maxScrollY;
            			}
            		}
HXLINE(1039)		if (::hx::IsNull( targetScrollY )) {
HXLINE(1040)			this->completeScroll();
            		}
            		else {
HXLINE(1042)			Float duration;
HXDLIN(1042)			if ((::Math_obj::abs((this->_scrollY - ( (Float)(targetScrollY) ))) >= ((Float)1.0))) {
HXLINE(1042)				duration = this->elasticSnapDuration;
            			}
            			else {
HXLINE(1042)				duration = ((Float)0.0);
            			}
HXLINE(1043)			this->throwTo(null(),targetScrollY,duration,this->bounceEase);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,finishScrollY,(void))

void Scroller_obj::animateScrollX_endRatio_onUpdate(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1047_animateScrollX_endRatio_onUpdate)
HXLINE(1048)		Float time = (( (Float)(::openfl::Lib_obj::getTimer()) ) / ((Float)1000.0));
HXLINE(1049)		Float currentTime = (time - this->animateScrollX->startTime);
HXLINE(1050)		Float ratio = (currentTime / this->animateScrollX->duration);
HXLINE(1051)		ratio = ::motion::easing::IEasing_obj::calculate(this->_animateScrollXEase,ratio);
HXLINE(1052)		bool _hx_tmp;
HXDLIN(1052)		if ((ratio >= this->animateScrollXEndRatio)) {
HXLINE(1052)			_hx_tmp = (currentTime < this->animateScrollX->duration);
            		}
            		else {
HXLINE(1052)			_hx_tmp = false;
            		}
HXDLIN(1052)		if (_hx_tmp) {
HXLINE(1056)			if (!(this->elasticEdges)) {
HXLINE(1057)				if ((this->_scrollX < this->_minScrollX)) {
HXLINE(1059)					this->set_scrollX(this->_minScrollX);
            				}
            				else {
HXLINE(1060)					if ((this->_scrollX > this->_maxScrollX)) {
HXLINE(1062)						this->set_scrollX(this->_maxScrollX);
            					}
            				}
            			}
HXLINE(1065)			::motion::Actuate_obj::stop(this->animateScrollX,null(),false,false);
HXLINE(1066)			this->animateScrollX = null();
HXLINE(1067)			this->_animateScrollXEase = null();
HXLINE(1068)			this->finishScrollX();
HXLINE(1069)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,animateScrollX_endRatio_onUpdate,(void))

void Scroller_obj::animateScrollX_onComplete(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1073_animateScrollX_onComplete)
HXLINE(1074)		this->animateScrollX = null();
HXLINE(1075)		this->_animateScrollXEase = null();
HXLINE(1076)		this->finishScrollX();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,animateScrollX_onComplete,(void))

void Scroller_obj::animateScrollY_endRatio_onUpdate(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1079_animateScrollY_endRatio_onUpdate)
HXLINE(1080)		Float time = (( (Float)(::openfl::Lib_obj::getTimer()) ) / ((Float)1000.0));
HXLINE(1081)		Float currentTime = (time - this->animateScrollY->startTime);
HXLINE(1082)		Float ratio = (currentTime / this->animateScrollY->duration);
HXLINE(1083)		ratio = ::motion::easing::IEasing_obj::calculate(this->_animateScrollYEase,ratio);
HXLINE(1084)		bool _hx_tmp;
HXDLIN(1084)		if ((ratio >= this->animateScrollYEndRatio)) {
HXLINE(1084)			_hx_tmp = (currentTime < this->animateScrollY->duration);
            		}
            		else {
HXLINE(1084)			_hx_tmp = false;
            		}
HXDLIN(1084)		if (_hx_tmp) {
HXLINE(1088)			if (!(this->elasticEdges)) {
HXLINE(1089)				if ((this->_scrollY < this->_minScrollY)) {
HXLINE(1091)					this->set_scrollY(this->_minScrollY);
            				}
            				else {
HXLINE(1092)					if ((this->_scrollY > this->_maxScrollY)) {
HXLINE(1094)						this->set_scrollY(this->_maxScrollY);
            					}
            				}
            			}
HXLINE(1097)			::motion::Actuate_obj::stop(this->animateScrollY,null(),false,false);
HXLINE(1098)			this->animateScrollY = null();
HXLINE(1099)			this->_animateScrollYEase = null();
HXLINE(1100)			this->finishScrollY();
HXLINE(1101)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,animateScrollY_endRatio_onUpdate,(void))

void Scroller_obj::animateScrollY_onComplete(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1105_animateScrollY_onComplete)
HXLINE(1106)		this->animateScrollY = null();
HXLINE(1107)		this->_animateScrollYEase = null();
HXLINE(1108)		this->finishScrollY();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,animateScrollY_onComplete,(void))

void Scroller_obj::cleanupAfterDrag(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1111_cleanupAfterDrag)
HXLINE(1112)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE(1113)			return;
            		}
HXLINE(1115)		 ::Dynamic _hx_tmp;
HXDLIN(1115)		if (this->_scrolling) {
HXLINE(1115)			_hx_tmp = this->_touchPointID;
            		}
            		else {
HXLINE(1115)			_hx_tmp = null();
            		}
HXDLIN(1115)		this->_previousTouchPointID = _hx_tmp;
HXLINE(1116)		this->_touchPointID = null();
HXLINE(1117)		this->_touchPointIsSimulated = false;
HXLINE(1118)		this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->scroller_target_removedFromStageHandler_dyn(),null());
HXLINE(1119)		if (::hx::IsNotNull( this->_target->stage )) {
HXLINE(1120)			this->_target->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->scroller_target_stage_mouseMoveHandler_dyn(),null());
HXLINE(1121)			this->_target->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->scroller_target_stage_mouseUpHandler_dyn(),null());
HXLINE(1122)			this->_target->stage->removeEventListener(HX_("touchMove",70,72,cd,0d),this->scroller_target_stage_touchMoveHandler_dyn(),null());
HXLINE(1123)			this->_target->stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->scroller_target_stage_touchEndHandler_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,cleanupAfterDrag,(void))

void Scroller_obj::scroller_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1128_scroller_target_removedFromStageHandler)
HXDLIN(1128)		this->cleanupAfterDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_removedFromStageHandler,(void))

void Scroller_obj::touchBegin(int touchPointID,bool simulatedTouch,Float stageX,Float stageY){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1131_touchBegin)
HXLINE(1132)		bool _hx_tmp;
HXDLIN(1132)		if (simulatedTouch) {
HXLINE(1132)			_hx_tmp = !(this->simulateTouch);
            		}
            		else {
HXLINE(1132)			_hx_tmp = false;
            		}
HXDLIN(1132)		if (_hx_tmp) {
HXLINE(1133)			return;
            		}
HXLINE(1135)		if (::hx::IsNotNull( this->_touchPointID )) {
HXLINE(1137)			return;
            		}
HXLINE(1140)		if (::hx::IsNotNull( this->animateScrollX )) {
HXLINE(1141)			::motion::Actuate_obj::stop(this->animateScrollX,null(),false,false);
HXLINE(1142)			this->animateScrollX = null();
HXLINE(1143)			this->_animateScrollXEase = null();
            		}
HXLINE(1145)		if (::hx::IsNotNull( this->animateScrollY )) {
HXLINE(1146)			::motion::Actuate_obj::stop(this->animateScrollY,null(),false,false);
HXLINE(1147)			this->animateScrollY = null();
HXLINE(1148)			this->_animateScrollYEase = null();
            		}
HXLINE(1151)		this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->scroller_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE(1152)		this->_target->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->scroller_target_stage_mouseMoveHandler_dyn(),false,0,true);
HXLINE(1153)		this->_target->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->scroller_target_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE(1154)		this->_target->stage->addEventListener(HX_("touchMove",70,72,cd,0d),this->scroller_target_stage_touchMoveHandler_dyn(),false,0,true);
HXLINE(1155)		this->_target->stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->scroller_target_stage_touchEndHandler_dyn(),false,0,true);
HXLINE(1156)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE(1157)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE(1160)			if (this->_scrolling) {
HXLINE(1161)				container->mouseChildren = false;
            			}
            		}
HXLINE(1164)		this->_previousTouchPointID = null();
HXLINE(1165)		this->_touchPointID = touchPointID;
HXLINE(1166)		this->_touchPointIsSimulated = simulatedTouch;
HXLINE(1167)		this->startTouchX = stageX;
HXLINE(1168)		this->startTouchY = stageY;
HXLINE(1169)		this->startScrollX = this->_scrollX;
HXLINE(1170)		this->startScrollY = this->_scrollY;
HXLINE(1174)		this->savedScrollMoves->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Scroller_obj,touchBegin,(void))

void Scroller_obj::touchMove(int touchPointID,bool simulatedTouch,Float stageX,Float stageY){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1178_touchMove)
HXLINE(1179)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE(1181)			return;
            		}
HXLINE(1183)		if (::hx::IsNotEq( this->_touchPointID,touchPointID )) {
HXLINE(1185)			return;
            		}
HXLINE(1187)		if ((this->_touchPointIsSimulated != simulatedTouch)) {
HXLINE(1189)			return;
            		}
HXLINE(1192)		Float touchOffsetX = (stageX - this->startTouchX);
HXLINE(1193)		Float touchOffsetY = (stageY - this->startTouchY);
HXLINE(1194)		Float scaleX = ((Float)1.0);
HXLINE(1195)		Float scaleY = ((Float)1.0);
HXLINE(1196)		 ::openfl::display::InteractiveObject current = this->_target;
HXLINE(1197)		while(::hx::IsInstanceNotEq( current,current->stage )){
HXLINE(1198)			scaleX = (scaleX / current->get_scaleX());
HXLINE(1199)			scaleY = (scaleY / current->get_scaleY());
HXLINE(1200)			current = current->parent;
            		}
HXLINE(1202)		touchOffsetX = (touchOffsetX * scaleX);
HXLINE(1203)		touchOffsetY = (touchOffsetY * scaleY);
HXLINE(1205)		bool canDragX = this->canDragX();
HXLINE(1206)		bool canDragY = this->canDragY();
HXLINE(1207)		bool _hx_tmp;
HXDLIN(1207)		bool _hx_tmp1;
HXDLIN(1207)		if (!(this->_draggingX)) {
HXLINE(1207)			_hx_tmp1 = canDragX;
            		}
            		else {
HXLINE(1207)			_hx_tmp1 = false;
            		}
HXDLIN(1207)		if (_hx_tmp1) {
HXLINE(1207)			_hx_tmp = (::Math_obj::abs(touchOffsetX) > this->minDragDistance);
            		}
            		else {
HXLINE(1207)			_hx_tmp = false;
            		}
HXDLIN(1207)		if (_hx_tmp) {
HXLINE(1208)			this->startTouchX = stageX;
HXLINE(1209)			touchOffsetX = ((Float)0.0);
HXLINE(1210)			this->_draggingX = true;
HXLINE(1214)			if (!(this->_draggingY)) {
HXLINE(1215)				this->startScroll();
HXLINE(1216)				if (::hx::IsNull( this->_touchPointID )) {
HXLINE(1218)					return;
            				}
            			}
            		}
HXLINE(1222)		bool _hx_tmp2;
HXDLIN(1222)		bool _hx_tmp3;
HXDLIN(1222)		if (!(this->_draggingY)) {
HXLINE(1222)			_hx_tmp3 = canDragY;
            		}
            		else {
HXLINE(1222)			_hx_tmp3 = false;
            		}
HXDLIN(1222)		if (_hx_tmp3) {
HXLINE(1222)			_hx_tmp2 = (::Math_obj::abs(touchOffsetY) > this->minDragDistance);
            		}
            		else {
HXLINE(1222)			_hx_tmp2 = false;
            		}
HXDLIN(1222)		if (_hx_tmp2) {
HXLINE(1223)			this->startTouchY = stageY;
HXLINE(1224)			touchOffsetY = ((Float)0.0);
HXLINE(1225)			this->_draggingY = true;
HXLINE(1226)			if (!(this->_draggingX)) {
HXLINE(1227)				this->startScroll();
HXLINE(1228)				if (::hx::IsNull( this->_touchPointID )) {
HXLINE(1230)					return;
            				}
            			}
            		}
HXLINE(1235)		bool _hx_tmp4;
HXDLIN(1235)		if (!(this->_draggingX)) {
HXLINE(1235)			_hx_tmp4 = !(this->_draggingY);
            		}
            		else {
HXLINE(1235)			_hx_tmp4 = false;
            		}
HXDLIN(1235)		if (_hx_tmp4) {
HXLINE(1236)			return;
            		}
HXLINE(1239)		Float scrollX = this->startScrollX;
HXLINE(1240)		if (canDragX) {
HXLINE(1241)			scrollX = (scrollX - touchOffsetX);
HXLINE(1242)			if (this->elasticEdges) {
HXLINE(1243)				Float minElasticScrollX = this->_minScrollX;
HXLINE(1244)				if ((minElasticScrollX > this->startScrollX)) {
HXLINE(1245)					minElasticScrollX = this->startScrollX;
            				}
HXLINE(1247)				Float maxElasticScrollX = this->_maxScrollX;
HXLINE(1248)				if ((maxElasticScrollX < this->startScrollX)) {
HXLINE(1249)					maxElasticScrollX = this->startScrollX;
            				}
HXLINE(1251)				if ((scrollX < this->_minScrollX)) {
HXLINE(1252)					bool _hx_tmp;
HXDLIN(1252)					if (!((this->_maxScrollX > this->_minScrollX))) {
HXLINE(1252)						_hx_tmp = this->forceElasticLeft;
            					}
            					else {
HXLINE(1252)						_hx_tmp = true;
            					}
HXDLIN(1252)					if (_hx_tmp) {
HXLINE(1253)						scrollX = (scrollX - ((scrollX - minElasticScrollX) * (((Float)1.0) - this->elasticity)));
            					}
            					else {
HXLINE(1256)						scrollX = this->_minScrollX;
            					}
            				}
            				else {
HXLINE(1258)					if ((scrollX > this->_maxScrollX)) {
HXLINE(1259)						bool _hx_tmp;
HXDLIN(1259)						if (!((this->_maxScrollX > this->_minScrollX))) {
HXLINE(1259)							_hx_tmp = this->forceElasticRight;
            						}
            						else {
HXLINE(1259)							_hx_tmp = true;
            						}
HXDLIN(1259)						if (_hx_tmp) {
HXLINE(1260)							scrollX = (scrollX - ((scrollX - maxElasticScrollX) * (((Float)1.0) - this->elasticity)));
            						}
            						else {
HXLINE(1263)							scrollX = this->_maxScrollX;
            						}
            					}
            				}
            			}
            			else {
HXLINE(1268)				if ((scrollX < this->_minScrollX)) {
HXLINE(1269)					scrollX = this->_minScrollX;
            				}
            				else {
HXLINE(1270)					if ((scrollX > this->_maxScrollX)) {
HXLINE(1271)						scrollX = this->_maxScrollX;
            					}
            				}
            			}
            		}
HXLINE(1275)		Float scrollY = this->startScrollY;
HXLINE(1276)		if (canDragY) {
HXLINE(1277)			scrollY = (scrollY - touchOffsetY);
HXLINE(1278)			if (this->elasticEdges) {
HXLINE(1279)				Float minElasticScrollY = this->_minScrollY;
HXLINE(1280)				if ((minElasticScrollY > this->startScrollY)) {
HXLINE(1281)					minElasticScrollY = this->startScrollY;
            				}
HXLINE(1283)				Float maxElasticScrollY = this->_maxScrollY;
HXLINE(1284)				if ((maxElasticScrollY < this->startScrollY)) {
HXLINE(1285)					maxElasticScrollY = this->startScrollY;
            				}
HXLINE(1287)				if ((scrollY < this->_minScrollY)) {
HXLINE(1288)					bool _hx_tmp;
HXDLIN(1288)					if (!((this->_maxScrollY > this->_minScrollY))) {
HXLINE(1288)						_hx_tmp = this->forceElasticTop;
            					}
            					else {
HXLINE(1288)						_hx_tmp = true;
            					}
HXDLIN(1288)					if (_hx_tmp) {
HXLINE(1289)						scrollY = (scrollY - ((scrollY - minElasticScrollY) * (((Float)1.0) - this->elasticity)));
            					}
            					else {
HXLINE(1292)						scrollY = this->_minScrollY;
            					}
            				}
            				else {
HXLINE(1294)					if ((scrollY > this->_maxScrollY)) {
HXLINE(1295)						bool _hx_tmp;
HXDLIN(1295)						if (!((this->_maxScrollY > this->_minScrollY))) {
HXLINE(1295)							_hx_tmp = this->forceElasticBottom;
            						}
            						else {
HXLINE(1295)							_hx_tmp = true;
            						}
HXDLIN(1295)						if (_hx_tmp) {
HXLINE(1296)							scrollY = (scrollY - ((scrollY - maxElasticScrollY) * (((Float)1.0) - this->elasticity)));
            						}
            						else {
HXLINE(1299)							scrollY = this->_maxScrollY;
            						}
            					}
            				}
            			}
            			else {
HXLINE(1304)				if ((scrollY < this->_minScrollY)) {
HXLINE(1305)					scrollY = this->_minScrollY;
            				}
            				else {
HXLINE(1306)					if ((scrollY > this->_maxScrollY)) {
HXLINE(1307)						scrollY = this->_maxScrollY;
            					}
            				}
            			}
            		}
HXLINE(1312)		this->set_scrollX(scrollX);
HXLINE(1313)		this->set_scrollY(scrollY);
HXLINE(1315)		if ((this->savedScrollMoves->length > 60)) {
HXLINE(1316)			this->savedScrollMoves->resize(30);
            		}
HXLINE(1319)		this->savedScrollMoves->push(scrollX);
HXLINE(1320)		this->savedScrollMoves->push(scrollY);
HXLINE(1321)		::Array< Float > _hx_tmp5 = this->savedScrollMoves;
HXDLIN(1321)		_hx_tmp5->push(::openfl::Lib_obj::getTimer());
            	}


HX_DEFINE_DYNAMIC_FUNC4(Scroller_obj,touchMove,(void))

void Scroller_obj::touchEnd(int touchPointID,bool simulatedTouch){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1324_touchEnd)
HXLINE(1325)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE(1327)			return;
            		}
HXLINE(1329)		if (::hx::IsNotEq( this->_touchPointID,touchPointID )) {
HXLINE(1331)			return;
            		}
HXLINE(1333)		if ((this->_touchPointIsSimulated != simulatedTouch)) {
HXLINE(1335)			return;
            		}
HXLINE(1338)		this->cleanupAfterDrag();
HXLINE(1340)		bool finishingX = !(this->canDragX());
HXLINE(1341)		bool finishingY = !(this->canDragY());
HXLINE(1342)		bool _hx_tmp;
HXDLIN(1342)		if (!((this->_scrollX < this->_minScrollX))) {
HXLINE(1342)			_hx_tmp = (this->_scrollX > this->_maxScrollX);
            		}
            		else {
HXLINE(1342)			_hx_tmp = true;
            		}
HXDLIN(1342)		if (_hx_tmp) {
HXLINE(1343)			finishingX = true;
HXLINE(1344)			this->finishScrollX();
            		}
HXLINE(1346)		bool _hx_tmp1;
HXDLIN(1346)		if (!((this->_scrollY < this->_minScrollY))) {
HXLINE(1346)			_hx_tmp1 = (this->_scrollY > this->_maxScrollY);
            		}
            		else {
HXLINE(1346)			_hx_tmp1 = true;
            		}
HXDLIN(1346)		if (_hx_tmp1) {
HXLINE(1347)			finishingY = true;
HXLINE(1348)			this->finishScrollY();
            		}
HXLINE(1351)		bool _hx_tmp2;
HXDLIN(1351)		if (finishingX) {
HXLINE(1351)			_hx_tmp2 = finishingY;
            		}
            		else {
HXLINE(1351)			_hx_tmp2 = false;
            		}
HXDLIN(1351)		if (_hx_tmp2) {
HXLINE(1352)			return;
            		}
HXLINE(1355)		bool _hx_tmp3;
HXDLIN(1355)		if (!(this->_draggingX)) {
HXLINE(1355)			_hx_tmp3 = !(this->_draggingY);
            		}
            		else {
HXLINE(1355)			_hx_tmp3 = false;
            		}
HXDLIN(1355)		if (_hx_tmp3) {
HXLINE(1356)			return;
            		}
HXLINE(1360)		int targetTime = (::openfl::Lib_obj::getTimer() - 100);
HXLINE(1361)		int endIndex = (this->savedScrollMoves->length - 1);
HXLINE(1362)		int startIndex = endIndex;
HXLINE(1363)		int i = endIndex;
HXLINE(1364)		while(true){
HXLINE(1364)			bool _hx_tmp;
HXDLIN(1364)			if ((endIndex > 0)) {
HXLINE(1364)				_hx_tmp = (this->savedScrollMoves->__get(i) > targetTime);
            			}
            			else {
HXLINE(1364)				_hx_tmp = false;
            			}
HXDLIN(1364)			if (!(_hx_tmp)) {
HXLINE(1364)				goto _hx_goto_54;
            			}
HXLINE(1365)			startIndex = i;
HXLINE(1366)			i = (i - 3);
            		}
            		_hx_goto_54:;
HXLINE(1370)		if ((startIndex == endIndex)) {
HXLINE(1371)			bool _hx_tmp;
HXDLIN(1371)			if (!(finishingX)) {
HXLINE(1371)				_hx_tmp = this->_draggingX;
            			}
            			else {
HXLINE(1371)				_hx_tmp = false;
            			}
HXDLIN(1371)			if (_hx_tmp) {
HXLINE(1372)				this->finishScrollX();
            			}
HXLINE(1374)			bool _hx_tmp1;
HXDLIN(1374)			if (!(finishingY)) {
HXLINE(1374)				_hx_tmp1 = this->_draggingY;
            			}
            			else {
HXLINE(1374)				_hx_tmp1 = false;
            			}
HXDLIN(1374)			if (_hx_tmp1) {
HXLINE(1375)				this->finishScrollY();
            			}
HXLINE(1377)			return;
            		}
HXLINE(1380)		Float timeOffset = (this->savedScrollMoves->__get(endIndex) - this->savedScrollMoves->__get(startIndex));
HXLINE(1381)		 ::Dynamic velocityX = null();
HXLINE(1382)		 ::Dynamic velocityY = null();
HXLINE(1386)		if ((timeOffset > ((Float)0.0))) {
HXLINE(1387)			bool _hx_tmp;
HXDLIN(1387)			if (!(finishingX)) {
HXLINE(1387)				_hx_tmp = this->_draggingX;
            			}
            			else {
HXLINE(1387)				_hx_tmp = false;
            			}
HXDLIN(1387)			if (_hx_tmp) {
HXLINE(1388)				Float movedX = (this->_scrollX - this->savedScrollMoves->__get((startIndex - 2)));
HXLINE(1389)				velocityX = (-(movedX) / timeOffset);
            			}
HXLINE(1391)			bool _hx_tmp1;
HXDLIN(1391)			if (!(finishingY)) {
HXLINE(1391)				_hx_tmp1 = this->_draggingY;
            			}
            			else {
HXLINE(1391)				_hx_tmp1 = false;
            			}
HXDLIN(1391)			if (_hx_tmp1) {
HXLINE(1392)				Float movedY = (this->_scrollY - this->savedScrollMoves->__get((startIndex - 1)));
HXLINE(1393)				velocityY = (-(movedY) / timeOffset);
            			}
            		}
HXLINE(1396)		bool _hx_tmp4;
HXDLIN(1396)		if (::hx::IsNull( velocityX )) {
HXLINE(1396)			_hx_tmp4 = ::hx::IsNotNull( velocityY );
            		}
            		else {
HXLINE(1396)			_hx_tmp4 = true;
            		}
HXDLIN(1396)		if (_hx_tmp4) {
HXLINE(1397)			this->throwWithVelocity(velocityX,velocityY);
            		}
HXLINE(1399)		bool _hx_tmp5;
HXDLIN(1399)		if (::hx::IsNull( velocityX )) {
HXLINE(1399)			_hx_tmp5 = this->_draggingX;
            		}
            		else {
HXLINE(1399)			_hx_tmp5 = false;
            		}
HXDLIN(1399)		if (_hx_tmp5) {
HXLINE(1400)			this->finishScrollX();
            		}
HXLINE(1402)		bool _hx_tmp6;
HXDLIN(1402)		if (::hx::IsNull( velocityY )) {
HXLINE(1402)			_hx_tmp6 = this->_draggingY;
            		}
            		else {
HXLINE(1402)			_hx_tmp6 = false;
            		}
HXDLIN(1402)		if (_hx_tmp6) {
HXLINE(1403)			this->finishScrollY();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scroller_obj,touchEnd,(void))

bool Scroller_obj::canDragX(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1408_canDragX)
HXDLIN(1408)		if (this->enabledX) {
HXDLIN(1408)			bool _hx_tmp;
HXDLIN(1408)			if (!((this->_maxScrollX > this->_minScrollX))) {
HXDLIN(1408)				_hx_tmp = this->forceElasticLeft;
            			}
            			else {
HXDLIN(1408)				_hx_tmp = true;
            			}
HXDLIN(1408)			if (!(_hx_tmp)) {
HXDLIN(1408)				return this->forceElasticRight;
            			}
            			else {
HXDLIN(1408)				return true;
            			}
            		}
            		else {
HXDLIN(1408)			return false;
            		}
HXDLIN(1408)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,canDragX,return )

bool Scroller_obj::canDragY(){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1412_canDragY)
HXDLIN(1412)		if (this->enabledY) {
HXDLIN(1412)			bool _hx_tmp;
HXDLIN(1412)			if (!((this->_maxScrollY > this->_minScrollY))) {
HXDLIN(1412)				_hx_tmp = this->forceElasticTop;
            			}
            			else {
HXDLIN(1412)				_hx_tmp = true;
            			}
HXDLIN(1412)			if (!(_hx_tmp)) {
HXDLIN(1412)				return this->forceElasticBottom;
            			}
            			else {
HXDLIN(1412)				return true;
            			}
            		}
            		else {
HXDLIN(1412)			return false;
            		}
HXDLIN(1412)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroller_obj,canDragY,return )

void Scroller_obj::scroller_target_touchBeginCaptureHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1415_scroller_target_touchBeginCaptureHandler)
HXLINE(1416)		if (!(this->_scrolling)) {
HXLINE(1417)			return;
            		}
HXLINE(1419)		event->stopImmediatePropagation();
HXLINE(1420)		this->scroller_target_touchBeginHandler(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_touchBeginCaptureHandler,(void))

void Scroller_obj::scroller_target_touchBeginHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1423_scroller_target_touchBeginHandler)
HXLINE(1424)		bool _hx_tmp;
HXDLIN(1424)		if (this->simulateTouch) {
HXLINE(1424)			_hx_tmp = event->isPrimaryTouchPoint;
            		}
            		else {
HXLINE(1424)			_hx_tmp = false;
            		}
HXDLIN(1424)		if (_hx_tmp) {
HXLINE(1426)			return;
            		}
HXLINE(1428)		this->touchBegin(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_touchBeginHandler,(void))

void Scroller_obj::scroller_target_mouseDownCaptureHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1431_scroller_target_mouseDownCaptureHandler)
HXLINE(1432)		if (!(this->_scrolling)) {
HXLINE(1433)			return;
            		}
HXLINE(1435)		event->stopImmediatePropagation();
HXLINE(1436)		this->scroller_target_mouseDownHandler(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_mouseDownCaptureHandler,(void))

void Scroller_obj::scroller_target_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1439_scroller_target_mouseDownHandler)
HXLINE(1440)		 ::openfl::display::Stage stage = this->_target->stage;
HXLINE(1441)		if (::hx::IsNull( stage )) {
HXLINE(1442)			return;
            		}
HXLINE(1444)		Float _hx_tmp = stage->get_mouseX();
HXDLIN(1444)		this->touchBegin(::feathers::utils::Scroller_obj::POINTER_ID_MOUSE,true,_hx_tmp,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_mouseDownHandler,(void))

void Scroller_obj::scroller_target_stage_touchMoveHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1448_scroller_target_stage_touchMoveHandler)
HXDLIN(1448)		this->touchMove(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_stage_touchMoveHandler,(void))

void Scroller_obj::scroller_target_stage_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1451_scroller_target_stage_mouseMoveHandler)
HXLINE(1452)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE(1453)		Float _hx_tmp = stage->get_mouseX();
HXDLIN(1453)		this->touchMove(::feathers::utils::Scroller_obj::POINTER_ID_MOUSE,true,_hx_tmp,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_stage_mouseMoveHandler,(void))

void Scroller_obj::scroller_target_stage_touchEndHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1457_scroller_target_stage_touchEndHandler)
HXDLIN(1457)		this->touchEnd(event->touchPointID,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_stage_touchEndHandler,(void))

void Scroller_obj::scroller_target_clickCaptureHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1460_scroller_target_clickCaptureHandler)
HXLINE(1461)		if (::hx::IsNull( this->_previousTouchPointID )) {
HXLINE(1462)			return;
            		}
HXLINE(1464)		this->_previousTouchPointID = null();
HXLINE(1465)		event->stopImmediatePropagation();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_clickCaptureHandler,(void))

void Scroller_obj::scroller_target_touchTapCaptureHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1468_scroller_target_touchTapCaptureHandler)
HXLINE(1469)		bool _hx_tmp;
HXDLIN(1469)		if (::hx::IsNotNull( this->_previousTouchPointID )) {
HXLINE(1469)			_hx_tmp = ::hx::IsNotEq( this->_previousTouchPointID,event->touchPointID );
            		}
            		else {
HXLINE(1469)			_hx_tmp = true;
            		}
HXDLIN(1469)		if (_hx_tmp) {
HXLINE(1470)			return;
            		}
HXLINE(1472)		if (event->isPrimaryTouchPoint) {
HXLINE(1474)			this->_previousTouchPointID = ::feathers::utils::Scroller_obj::POINTER_ID_MOUSE;
HXLINE(1475)			return;
            		}
HXLINE(1477)		this->_previousTouchPointID = null();
HXLINE(1478)		event->stopImmediatePropagation();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_touchTapCaptureHandler,(void))

void Scroller_obj::scroller_target_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1482_scroller_target_stage_mouseUpHandler)
HXDLIN(1482)		this->touchEnd(::feathers::utils::Scroller_obj::POINTER_ID_MOUSE,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_stage_mouseUpHandler,(void))

void Scroller_obj::scroller_target_mouseWheelHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_1491_scroller_target_mouseWheelHandler)
HXLINE(1492)		if (this->_scrolling) {
HXLINE(1497)			event->stopImmediatePropagation();
HXLINE(1498)			this->stop();
            		}
HXLINE(1500)		int deltaLines = event->delta;
HXLINE(1501)		switch((int)(this->_mouseWheelDeltaMode)){
            			case (int)0: {
HXLINE(1503)				deltaLines = ::Std_obj::_hx_int((( (Float)(deltaLines) ) / ( (Float)(40) )));
            			}
            			break;
            			case (int)2: {
HXLINE(1505)				deltaLines = (deltaLines * 16);
            			}
            			break;
            		}
HXLINE(1507)		 ::Dynamic newScrollX = null();
HXLINE(1508)		 ::Dynamic newScrollY = null();
HXLINE(1509)		if (this->mouseWheelYScrollsX) {
HXLINE(1510)			Float targetScrollX = this->_scrollX;
HXLINE(1511)			if (::hx::IsNotNull( this->animateScrollX )) {
HXLINE(1512)				targetScrollX = this->targetScrollX;
            			}
HXLINE(1514)			newScrollX = (targetScrollX - (( (Float)(deltaLines) ) * this->mouseWheelDeltaX));
HXLINE(1515)			if (::hx::IsLess( newScrollX,this->_minScrollX )) {
HXLINE(1516)				newScrollX = this->_minScrollX;
            			}
            			else {
HXLINE(1517)				if (::hx::IsGreater( newScrollX,this->_maxScrollX )) {
HXLINE(1518)					newScrollX = this->_maxScrollX;
            				}
            			}
            		}
            		else {
HXLINE(1521)			Float targetScrollY = this->_scrollY;
HXLINE(1522)			if (::hx::IsNotNull( this->animateScrollY )) {
HXLINE(1523)				targetScrollY = this->targetScrollY;
            			}
HXLINE(1525)			newScrollY = (targetScrollY - (( (Float)(deltaLines) ) * this->mouseWheelDeltaY));
HXLINE(1526)			if (::hx::IsLess( newScrollY,this->_minScrollY )) {
HXLINE(1527)				newScrollY = this->_minScrollY;
            			}
            			else {
HXLINE(1528)				if (::hx::IsGreater( newScrollY,this->_maxScrollY )) {
HXLINE(1529)					newScrollY = this->_maxScrollY;
            				}
            			}
            		}
HXLINE(1532)		bool _hx_tmp;
HXDLIN(1532)		bool _hx_tmp1;
HXDLIN(1532)		if (::hx::IsNotNull( newScrollX )) {
HXLINE(1532)			_hx_tmp1 = ::hx::IsEq( newScrollX,this->_scrollX );
            		}
            		else {
HXLINE(1532)			_hx_tmp1 = true;
            		}
HXDLIN(1532)		if (_hx_tmp1) {
HXLINE(1532)			if (::hx::IsNotNull( newScrollY )) {
HXLINE(1532)				_hx_tmp = ::hx::IsEq( newScrollY,this->_scrollY );
            			}
            			else {
HXLINE(1532)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(1532)			_hx_tmp = false;
            		}
HXDLIN(1532)		if (_hx_tmp) {
HXLINE(1533)			return;
            		}
HXLINE(1535)		if (!(this->_scrolling)) {
HXLINE(1537)			event->stopImmediatePropagation();
HXLINE(1538)			this->stop();
            		}
HXLINE(1540)		if (::hx::IsNotNull( newScrollX )) {
HXLINE(1541)			this->_draggingX = true;
            		}
HXLINE(1543)		if (::hx::IsNotNull( newScrollY )) {
HXLINE(1544)			this->_draggingY = true;
            		}
HXLINE(1546)		if ((this->mouseWheelDuration > ((Float)0.0))) {
HXLINE(1547)			this->throwTo(newScrollX,newScrollY,this->mouseWheelDuration,this->ease);
            		}
            		else {
HXLINE(1549)			this->startScroll();
HXLINE(1551)			if (::hx::IsNotNull( newScrollX )) {
HXLINE(1552)				this->set_scrollX(( (Float)(newScrollX) ));
            			}
HXLINE(1554)			if (::hx::IsNotNull( newScrollY )) {
HXLINE(1555)				this->set_scrollY(( (Float)(newScrollY) ));
            			}
HXLINE(1557)			this->_draggingX = false;
HXLINE(1558)			this->_draggingY = false;
HXLINE(1559)			this->completeScroll();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroller_obj,scroller_target_mouseWheelHandler,(void))

Float Scroller_obj::MINIMUM_VELOCITY;

int Scroller_obj::POINTER_ID_MOUSE;


::hx::ObjectPtr< Scroller_obj > Scroller_obj::__new( ::openfl::display::InteractiveObject target) {
	::hx::ObjectPtr< Scroller_obj > __this = new Scroller_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Scroller_obj > Scroller_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target) {
	Scroller_obj *__this = (Scroller_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scroller_obj), true, "feathers.utils.Scroller"));
	*(void **)__this = Scroller_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Scroller_obj::Scroller_obj()
{
}

void Scroller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroller);
	HX_MARK_MEMBER_NAME(enabledX,"enabledX");
	HX_MARK_MEMBER_NAME(enabledY,"enabledY");
	HX_MARK_MEMBER_NAME(_scrollX,"_scrollX");
	HX_MARK_MEMBER_NAME(_scrollY,"_scrollY");
	HX_MARK_MEMBER_NAME(_minScrollX,"_minScrollX");
	HX_MARK_MEMBER_NAME(_minScrollY,"_minScrollY");
	HX_MARK_MEMBER_NAME(_maxScrollX,"_maxScrollX");
	HX_MARK_MEMBER_NAME(_maxScrollY,"_maxScrollY");
	HX_MARK_MEMBER_NAME(_visibleWidth,"_visibleWidth");
	HX_MARK_MEMBER_NAME(_visibleHeight,"_visibleHeight");
	HX_MARK_MEMBER_NAME(_contentWidth,"_contentWidth");
	HX_MARK_MEMBER_NAME(_contentHeight,"_contentHeight");
	HX_MARK_MEMBER_NAME(_scrolling,"_scrolling");
	HX_MARK_MEMBER_NAME(_draggingX,"_draggingX");
	HX_MARK_MEMBER_NAME(_draggingY,"_draggingY");
	HX_MARK_MEMBER_NAME(minDragDistance,"minDragDistance");
	HX_MARK_MEMBER_NAME(elasticEdges,"elasticEdges");
	HX_MARK_MEMBER_NAME(forceElasticTop,"forceElasticTop");
	HX_MARK_MEMBER_NAME(forceElasticRight,"forceElasticRight");
	HX_MARK_MEMBER_NAME(forceElasticBottom,"forceElasticBottom");
	HX_MARK_MEMBER_NAME(forceElasticLeft,"forceElasticLeft");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(throwElasticity,"throwElasticity");
	HX_MARK_MEMBER_NAME(elasticSnapDuration,"elasticSnapDuration");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(bounceEase,"bounceEase");
	HX_MARK_MEMBER_NAME(mouseWheelDeltaX,"mouseWheelDeltaX");
	HX_MARK_MEMBER_NAME(mouseWheelDeltaY,"mouseWheelDeltaY");
	HX_MARK_MEMBER_NAME(mouseWheelYScrollsX,"mouseWheelYScrollsX");
	HX_MARK_MEMBER_NAME(_mouseWheelDeltaMode,"_mouseWheelDeltaMode");
	HX_MARK_MEMBER_NAME(mouseWheelDuration,"mouseWheelDuration");
	HX_MARK_MEMBER_NAME(simulateTouch,"simulateTouch");
	HX_MARK_MEMBER_NAME(_decelerationRate,"_decelerationRate");
	HX_MARK_MEMBER_NAME(snapPositionsX,"snapPositionsX");
	HX_MARK_MEMBER_NAME(snapPositionsY,"snapPositionsY");
	HX_MARK_MEMBER_NAME(_logDecelerationRate,"_logDecelerationRate");
	HX_MARK_MEMBER_NAME(_fixedThrowDuration,"_fixedThrowDuration");
	HX_MARK_MEMBER_NAME(restoreMouseChildren,"restoreMouseChildren");
	HX_MARK_MEMBER_NAME(startTouchX,"startTouchX");
	HX_MARK_MEMBER_NAME(startTouchY,"startTouchY");
	HX_MARK_MEMBER_NAME(startScrollX,"startScrollX");
	HX_MARK_MEMBER_NAME(startScrollY,"startScrollY");
	HX_MARK_MEMBER_NAME(savedScrollMoves,"savedScrollMoves");
	HX_MARK_MEMBER_NAME(animateScrollX,"animateScrollX");
	HX_MARK_MEMBER_NAME(animateScrollY,"animateScrollY");
	HX_MARK_MEMBER_NAME(_animateScrollXEase,"_animateScrollXEase");
	HX_MARK_MEMBER_NAME(_animateScrollYEase,"_animateScrollYEase");
	HX_MARK_MEMBER_NAME(animateScrollXEndRatio,"animateScrollXEndRatio");
	HX_MARK_MEMBER_NAME(animateScrollYEndRatio,"animateScrollYEndRatio");
	HX_MARK_MEMBER_NAME(targetScrollX,"targetScrollX");
	HX_MARK_MEMBER_NAME(targetScrollY,"targetScrollY");
	HX_MARK_MEMBER_NAME(snappingToEdge,"snappingToEdge");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_previousTouchPointID,"_previousTouchPointID");
	HX_MARK_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_MARK_MEMBER_NAME(_touchPointIsSimulated,"_touchPointIsSimulated");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabledX,"enabledX");
	HX_VISIT_MEMBER_NAME(enabledY,"enabledY");
	HX_VISIT_MEMBER_NAME(_scrollX,"_scrollX");
	HX_VISIT_MEMBER_NAME(_scrollY,"_scrollY");
	HX_VISIT_MEMBER_NAME(_minScrollX,"_minScrollX");
	HX_VISIT_MEMBER_NAME(_minScrollY,"_minScrollY");
	HX_VISIT_MEMBER_NAME(_maxScrollX,"_maxScrollX");
	HX_VISIT_MEMBER_NAME(_maxScrollY,"_maxScrollY");
	HX_VISIT_MEMBER_NAME(_visibleWidth,"_visibleWidth");
	HX_VISIT_MEMBER_NAME(_visibleHeight,"_visibleHeight");
	HX_VISIT_MEMBER_NAME(_contentWidth,"_contentWidth");
	HX_VISIT_MEMBER_NAME(_contentHeight,"_contentHeight");
	HX_VISIT_MEMBER_NAME(_scrolling,"_scrolling");
	HX_VISIT_MEMBER_NAME(_draggingX,"_draggingX");
	HX_VISIT_MEMBER_NAME(_draggingY,"_draggingY");
	HX_VISIT_MEMBER_NAME(minDragDistance,"minDragDistance");
	HX_VISIT_MEMBER_NAME(elasticEdges,"elasticEdges");
	HX_VISIT_MEMBER_NAME(forceElasticTop,"forceElasticTop");
	HX_VISIT_MEMBER_NAME(forceElasticRight,"forceElasticRight");
	HX_VISIT_MEMBER_NAME(forceElasticBottom,"forceElasticBottom");
	HX_VISIT_MEMBER_NAME(forceElasticLeft,"forceElasticLeft");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(throwElasticity,"throwElasticity");
	HX_VISIT_MEMBER_NAME(elasticSnapDuration,"elasticSnapDuration");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(bounceEase,"bounceEase");
	HX_VISIT_MEMBER_NAME(mouseWheelDeltaX,"mouseWheelDeltaX");
	HX_VISIT_MEMBER_NAME(mouseWheelDeltaY,"mouseWheelDeltaY");
	HX_VISIT_MEMBER_NAME(mouseWheelYScrollsX,"mouseWheelYScrollsX");
	HX_VISIT_MEMBER_NAME(_mouseWheelDeltaMode,"_mouseWheelDeltaMode");
	HX_VISIT_MEMBER_NAME(mouseWheelDuration,"mouseWheelDuration");
	HX_VISIT_MEMBER_NAME(simulateTouch,"simulateTouch");
	HX_VISIT_MEMBER_NAME(_decelerationRate,"_decelerationRate");
	HX_VISIT_MEMBER_NAME(snapPositionsX,"snapPositionsX");
	HX_VISIT_MEMBER_NAME(snapPositionsY,"snapPositionsY");
	HX_VISIT_MEMBER_NAME(_logDecelerationRate,"_logDecelerationRate");
	HX_VISIT_MEMBER_NAME(_fixedThrowDuration,"_fixedThrowDuration");
	HX_VISIT_MEMBER_NAME(restoreMouseChildren,"restoreMouseChildren");
	HX_VISIT_MEMBER_NAME(startTouchX,"startTouchX");
	HX_VISIT_MEMBER_NAME(startTouchY,"startTouchY");
	HX_VISIT_MEMBER_NAME(startScrollX,"startScrollX");
	HX_VISIT_MEMBER_NAME(startScrollY,"startScrollY");
	HX_VISIT_MEMBER_NAME(savedScrollMoves,"savedScrollMoves");
	HX_VISIT_MEMBER_NAME(animateScrollX,"animateScrollX");
	HX_VISIT_MEMBER_NAME(animateScrollY,"animateScrollY");
	HX_VISIT_MEMBER_NAME(_animateScrollXEase,"_animateScrollXEase");
	HX_VISIT_MEMBER_NAME(_animateScrollYEase,"_animateScrollYEase");
	HX_VISIT_MEMBER_NAME(animateScrollXEndRatio,"animateScrollXEndRatio");
	HX_VISIT_MEMBER_NAME(animateScrollYEndRatio,"animateScrollYEndRatio");
	HX_VISIT_MEMBER_NAME(targetScrollX,"targetScrollX");
	HX_VISIT_MEMBER_NAME(targetScrollY,"targetScrollY");
	HX_VISIT_MEMBER_NAME(snappingToEdge,"snappingToEdge");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_previousTouchPointID,"_previousTouchPointID");
	HX_VISIT_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_VISIT_MEMBER_NAME(_touchPointIsSimulated,"_touchPointIsSimulated");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Scroller_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollX() ); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrollY() ); }
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"throwTo") ) { return ::hx::Val( throwTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enabledX") ) { return ::hx::Val( enabledX ); }
		if (HX_FIELD_EQ(inName,"enabledY") ) { return ::hx::Val( enabledY ); }
		if (HX_FIELD_EQ(inName,"_scrollX") ) { return ::hx::Val( _scrollX ); }
		if (HX_FIELD_EQ(inName,"_scrollY") ) { return ::hx::Val( _scrollY ); }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { return ::hx::Val( touchEnd_dyn() ); }
		if (HX_FIELD_EQ(inName,"canDragX") ) { return ::hx::Val( canDragX_dyn() ); }
		if (HX_FIELD_EQ(inName,"canDragY") ) { return ::hx::Val( canDragY_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scrolling") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scrolling() ); }
		if (HX_FIELD_EQ(inName,"draggingX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_draggingX() ); }
		if (HX_FIELD_EQ(inName,"draggingY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_draggingY() ); }
		if (HX_FIELD_EQ(inName,"touchMove") ) { return ::hx::Val( touchMove_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minScrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minScrollX() ); }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minScrollY() ); }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollX() ); }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxScrollY() ); }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { return ::hx::Val( _scrolling ); }
		if (HX_FIELD_EQ(inName,"_draggingX") ) { return ::hx::Val( _draggingX ); }
		if (HX_FIELD_EQ(inName,"_draggingY") ) { return ::hx::Val( _draggingY ); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return ::hx::Val( elasticity ); }
		if (HX_FIELD_EQ(inName,"bounceEase") ) { return ::hx::Val( bounceEase ); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return ::hx::Val( touchBegin_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_scrollX") ) { return ::hx::Val( get_scrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollX") ) { return ::hx::Val( set_scrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scrollY") ) { return ::hx::Val( get_scrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollY") ) { return ::hx::Val( set_scrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"_minScrollX") ) { return ::hx::Val( _minScrollX ); }
		if (HX_FIELD_EQ(inName,"_minScrollY") ) { return ::hx::Val( _minScrollY ); }
		if (HX_FIELD_EQ(inName,"_maxScrollX") ) { return ::hx::Val( _maxScrollX ); }
		if (HX_FIELD_EQ(inName,"_maxScrollY") ) { return ::hx::Val( _maxScrollY ); }
		if (HX_FIELD_EQ(inName,"startTouchX") ) { return ::hx::Val( startTouchX ); }
		if (HX_FIELD_EQ(inName,"startTouchY") ) { return ::hx::Val( startTouchY ); }
		if (HX_FIELD_EQ(inName,"startScroll") ) { return ::hx::Val( startScroll_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"visibleWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visibleWidth() ); }
		if (HX_FIELD_EQ(inName,"contentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentWidth() ); }
		if (HX_FIELD_EQ(inName,"elasticEdges") ) { return ::hx::Val( elasticEdges ); }
		if (HX_FIELD_EQ(inName,"startScrollX") ) { return ::hx::Val( startScrollX ); }
		if (HX_FIELD_EQ(inName,"startScrollY") ) { return ::hx::Val( startScrollY ); }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPointID() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_visibleWidth") ) { return ::hx::Val( _visibleWidth ); }
		if (HX_FIELD_EQ(inName,"visibleHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visibleHeight() ); }
		if (HX_FIELD_EQ(inName,"_contentWidth") ) { return ::hx::Val( _contentWidth ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_contentHeight() ); }
		if (HX_FIELD_EQ(inName,"get_scrolling") ) { return ::hx::Val( get_scrolling_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_draggingX") ) { return ::hx::Val( get_draggingX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_draggingY") ) { return ::hx::Val( get_draggingY_dyn() ); }
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { return ::hx::Val( simulateTouch ); }
		if (HX_FIELD_EQ(inName,"targetScrollX") ) { return ::hx::Val( targetScrollX ); }
		if (HX_FIELD_EQ(inName,"targetScrollY") ) { return ::hx::Val( targetScrollY ); }
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { return ::hx::Val( _touchPointID ); }
		if (HX_FIELD_EQ(inName,"setDimensions") ) { return ::hx::Val( setDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishScrollX") ) { return ::hx::Val( finishScrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishScrollY") ) { return ::hx::Val( finishScrollY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_minScrollX") ) { return ::hx::Val( get_minScrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_minScrollY") ) { return ::hx::Val( get_minScrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollX") ) { return ::hx::Val( get_maxScrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxScrollY") ) { return ::hx::Val( get_maxScrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"_visibleHeight") ) { return ::hx::Val( _visibleHeight ); }
		if (HX_FIELD_EQ(inName,"_contentHeight") ) { return ::hx::Val( _contentHeight ); }
		if (HX_FIELD_EQ(inName,"snapPositionsX") ) { return ::hx::Val( snapPositionsX ); }
		if (HX_FIELD_EQ(inName,"snapPositionsY") ) { return ::hx::Val( snapPositionsY ); }
		if (HX_FIELD_EQ(inName,"animateScrollX") ) { return ::hx::Val( animateScrollX ); }
		if (HX_FIELD_EQ(inName,"animateScrollY") ) { return ::hx::Val( animateScrollY ); }
		if (HX_FIELD_EQ(inName,"snappingToEdge") ) { return ::hx::Val( snappingToEdge ); }
		if (HX_FIELD_EQ(inName,"completeScroll") ) { return ::hx::Val( completeScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minDragDistance") ) { return ::hx::Val( minDragDistance ); }
		if (HX_FIELD_EQ(inName,"forceElasticTop") ) { return ::hx::Val( forceElasticTop ); }
		if (HX_FIELD_EQ(inName,"throwElasticity") ) { return ::hx::Val( throwElasticity ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_visibleWidth") ) { return ::hx::Val( get_visibleWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return ::hx::Val( get_contentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"forceElasticLeft") ) { return ::hx::Val( forceElasticLeft ); }
		if (HX_FIELD_EQ(inName,"mouseWheelDeltaX") ) { return ::hx::Val( mouseWheelDeltaX ); }
		if (HX_FIELD_EQ(inName,"mouseWheelDeltaY") ) { return ::hx::Val( mouseWheelDeltaY ); }
		if (HX_FIELD_EQ(inName,"decelerationRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_decelerationRate() ); }
		if (HX_FIELD_EQ(inName,"savedScrollMoves") ) { return ::hx::Val( savedScrollMoves ); }
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return ::hx::Val( get_touchPointID_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupAfterDrag") ) { return ::hx::Val( cleanupAfterDrag_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"restrictedScrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrictedScrollX() ); }
		if (HX_FIELD_EQ(inName,"restrictedScrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_restrictedScrollY() ); }
		if (HX_FIELD_EQ(inName,"get_visibleHeight") ) { return ::hx::Val( get_visibleHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return ::hx::Val( get_contentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"forceElasticRight") ) { return ::hx::Val( forceElasticRight ); }
		if (HX_FIELD_EQ(inName,"_decelerationRate") ) { return ::hx::Val( _decelerationRate ); }
		if (HX_FIELD_EQ(inName,"throwWithVelocity") ) { return ::hx::Val( throwWithVelocity_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceElasticBottom") ) { return ::hx::Val( forceElasticBottom ); }
		if (HX_FIELD_EQ(inName,"mouseWheelDuration") ) { return ::hx::Val( mouseWheelDuration ); }
		if (HX_FIELD_EQ(inName,"calculateMinAndMax") ) { return ::hx::Val( calculateMinAndMax_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"elasticSnapDuration") ) { return ::hx::Val( elasticSnapDuration ); }
		if (HX_FIELD_EQ(inName,"mouseWheelYScrollsX") ) { return ::hx::Val( mouseWheelYScrollsX ); }
		if (HX_FIELD_EQ(inName,"_fixedThrowDuration") ) { return ::hx::Val( _fixedThrowDuration ); }
		if (HX_FIELD_EQ(inName,"_animateScrollXEase") ) { return ::hx::Val( _animateScrollXEase ); }
		if (HX_FIELD_EQ(inName,"_animateScrollYEase") ) { return ::hx::Val( _animateScrollYEase ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_mouseWheelDeltaMode") ) { return ::hx::Val( _mouseWheelDeltaMode ); }
		if (HX_FIELD_EQ(inName,"get_decelerationRate") ) { return ::hx::Val( get_decelerationRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_decelerationRate") ) { return ::hx::Val( set_decelerationRate_dyn() ); }
		if (HX_FIELD_EQ(inName,"_logDecelerationRate") ) { return ::hx::Val( _logDecelerationRate ); }
		if (HX_FIELD_EQ(inName,"restoreMouseChildren") ) { return ::hx::Val( restoreMouseChildren ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_restrictedScrollX") ) { return ::hx::Val( get_restrictedScrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrictedScrollX") ) { return ::hx::Val( set_restrictedScrollX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_restrictedScrollY") ) { return ::hx::Val( get_restrictedScrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrictedScrollY") ) { return ::hx::Val( set_restrictedScrollY_dyn() ); }
		if (HX_FIELD_EQ(inName,"_previousTouchPointID") ) { return ::hx::Val( _previousTouchPointID ); }
		if (HX_FIELD_EQ(inName,"touchPointIsSimulated") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPointIsSimulated() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"animateScrollXEndRatio") ) { return ::hx::Val( animateScrollXEndRatio ); }
		if (HX_FIELD_EQ(inName,"animateScrollYEndRatio") ) { return ::hx::Val( animateScrollYEndRatio ); }
		if (HX_FIELD_EQ(inName,"_touchPointIsSimulated") ) { return ::hx::Val( _touchPointIsSimulated ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyScrollRestrictions") ) { return ::hx::Val( applyScrollRestrictions_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_touchPointIsSimulated") ) { return ::hx::Val( get_touchPointIsSimulated_dyn() ); }
		if (HX_FIELD_EQ(inName,"animateScrollX_onComplete") ) { return ::hx::Val( animateScrollX_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"animateScrollY_onComplete") ) { return ::hx::Val( animateScrollY_onComplete_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"calculateDistanceFromVelocity") ) { return ::hx::Val( calculateDistanceFromVelocity_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshAnimateScrollXEndRatio") ) { return ::hx::Val( refreshAnimateScrollXEndRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshAnimateScrollYEndRatio") ) { return ::hx::Val( refreshAnimateScrollYEndRatio_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"animateScrollX_endRatio_onUpdate") ) { return ::hx::Val( animateScrollX_endRatio_onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"animateScrollY_endRatio_onUpdate") ) { return ::hx::Val( animateScrollY_endRatio_onUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroller_target_mouseDownHandler") ) { return ::hx::Val( scroller_target_mouseDownHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"scroller_target_touchBeginHandler") ) { return ::hx::Val( scroller_target_touchBeginHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroller_target_mouseWheelHandler") ) { return ::hx::Val( scroller_target_mouseWheelHandler_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"scroller_target_clickCaptureHandler") ) { return ::hx::Val( scroller_target_clickCaptureHandler_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"scroller_target_stage_mouseUpHandler") ) { return ::hx::Val( scroller_target_stage_mouseUpHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"scroller_target_stage_touchEndHandler") ) { return ::hx::Val( scroller_target_stage_touchEndHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"scroller_target_stage_touchMoveHandler") ) { return ::hx::Val( scroller_target_stage_touchMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroller_target_stage_mouseMoveHandler") ) { return ::hx::Val( scroller_target_stage_mouseMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroller_target_touchTapCaptureHandler") ) { return ::hx::Val( scroller_target_touchTapCaptureHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"scroller_target_removedFromStageHandler") ) { return ::hx::Val( scroller_target_removedFromStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scroller_target_mouseDownCaptureHandler") ) { return ::hx::Val( scroller_target_mouseDownCaptureHandler_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"scroller_target_touchBeginCaptureHandler") ) { return ::hx::Val( scroller_target_touchBeginCaptureHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Scroller_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MINIMUM_VELOCITY") ) { outValue = ( MINIMUM_VELOCITY ); return true; }
		if (HX_FIELD_EQ(inName,"POINTER_ID_MOUSE") ) { outValue = ( POINTER_ID_MOUSE ); return true; }
	}
	return false;
}

::hx::Val Scroller_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"scrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"enabledX") ) { enabledX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabledY") ) { enabledY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollX") ) { _scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollY") ) { _scrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scrolling") ) { _scrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_draggingX") ) { _draggingX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_draggingY") ) { _draggingY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounceEase") ) { bounceEase=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_minScrollX") ) { _minScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minScrollY") ) { _minScrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxScrollX") ) { _maxScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxScrollY") ) { _maxScrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTouchX") ) { startTouchX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTouchY") ) { startTouchY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticEdges") ) { elasticEdges=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScrollX") ) { startScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScrollY") ) { startScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_visibleWidth") ) { _visibleWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contentWidth") ) { _contentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { simulateTouch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetScrollX") ) { targetScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetScrollY") ) { targetScrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { _touchPointID=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_visibleHeight") ) { _visibleHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_contentHeight") ) { _contentHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snapPositionsX") ) { snapPositionsX=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snapPositionsY") ) { snapPositionsY=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animateScrollX") ) { animateScrollX=inValue.Cast<  ::motion::actuators::SimpleActuator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animateScrollY") ) { animateScrollY=inValue.Cast<  ::motion::actuators::SimpleActuator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snappingToEdge") ) { snappingToEdge=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minDragDistance") ) { minDragDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceElasticTop") ) { forceElasticTop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throwElasticity") ) { throwElasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"forceElasticLeft") ) { forceElasticLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseWheelDeltaX") ) { mouseWheelDeltaX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseWheelDeltaY") ) { mouseWheelDeltaY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decelerationRate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_decelerationRate(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"savedScrollMoves") ) { savedScrollMoves=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"restrictedScrollX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrictedScrollX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"restrictedScrollY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrictedScrollY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"forceElasticRight") ) { forceElasticRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_decelerationRate") ) { _decelerationRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceElasticBottom") ) { forceElasticBottom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseWheelDuration") ) { mouseWheelDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"elasticSnapDuration") ) { elasticSnapDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseWheelYScrollsX") ) { mouseWheelYScrollsX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fixedThrowDuration") ) { _fixedThrowDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateScrollXEase") ) { _animateScrollXEase=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animateScrollYEase") ) { _animateScrollYEase=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_mouseWheelDeltaMode") ) { _mouseWheelDeltaMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logDecelerationRate") ) { _logDecelerationRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restoreMouseChildren") ) { restoreMouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_previousTouchPointID") ) { _previousTouchPointID=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"animateScrollXEndRatio") ) { animateScrollXEndRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animateScrollYEndRatio") ) { animateScrollYEndRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPointIsSimulated") ) { _touchPointIsSimulated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scroller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MINIMUM_VELOCITY") ) { MINIMUM_VELOCITY=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"POINTER_ID_MOUSE") ) { POINTER_ID_MOUSE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Scroller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabledX",b7,ec,b2,ec));
	outFields->push(HX_("enabledY",b8,ec,b2,ec));
	outFields->push(HX_("_scrollX",2c,8d,90,6a));
	outFields->push(HX_("scrollX",ab,33,d8,30));
	outFields->push(HX_("_scrollY",2d,8d,90,6a));
	outFields->push(HX_("scrollY",ac,33,d8,30));
	outFields->push(HX_("restrictedScrollX",50,4a,40,98));
	outFields->push(HX_("restrictedScrollY",51,4a,40,98));
	outFields->push(HX_("_minScrollX",58,4d,19,c9));
	outFields->push(HX_("minScrollX",39,80,8f,f6));
	outFields->push(HX_("_minScrollY",59,4d,19,c9));
	outFields->push(HX_("minScrollY",3a,80,8f,f6));
	outFields->push(HX_("_maxScrollX",86,7a,86,6d));
	outFields->push(HX_("maxScrollX",67,ad,fc,9a));
	outFields->push(HX_("_maxScrollY",87,7a,86,6d));
	outFields->push(HX_("maxScrollY",68,ad,fc,9a));
	outFields->push(HX_("_visibleWidth",13,63,56,22));
	outFields->push(HX_("visibleWidth",34,d0,e7,3f));
	outFields->push(HX_("_visibleHeight",3a,c6,8f,9f));
	outFields->push(HX_("visibleHeight",f9,d5,3d,61));
	outFields->push(HX_("_contentWidth",ec,9c,5f,93));
	outFields->push(HX_("contentWidth",0d,0a,f1,b0));
	outFields->push(HX_("_contentHeight",41,2a,99,16));
	outFields->push(HX_("contentHeight",00,3a,47,d8));
	outFields->push(HX_("_scrolling",b6,76,bc,99));
	outFields->push(HX_("scrolling",f5,fa,19,3e));
	outFields->push(HX_("_draggingX",6a,74,cb,be));
	outFields->push(HX_("draggingX",a9,f8,28,63));
	outFields->push(HX_("_draggingY",6b,74,cb,be));
	outFields->push(HX_("draggingY",aa,f8,28,63));
	outFields->push(HX_("minDragDistance",fb,ff,d8,1b));
	outFields->push(HX_("elasticEdges",81,17,91,78));
	outFields->push(HX_("forceElasticTop",8b,99,3d,5e));
	outFields->push(HX_("forceElasticRight",52,68,34,71));
	outFields->push(HX_("forceElasticBottom",b5,71,f9,b3));
	outFields->push(HX_("forceElasticLeft",51,6c,57,12));
	outFields->push(HX_("elasticity",79,23,b4,4d));
	outFields->push(HX_("throwElasticity",3f,b0,ef,55));
	outFields->push(HX_("elasticSnapDuration",33,b5,9a,f2));
	outFields->push(HX_("ease",ee,8b,0c,43));
	outFields->push(HX_("bounceEase",96,a1,28,00));
	outFields->push(HX_("mouseWheelDeltaX",36,ba,54,86));
	outFields->push(HX_("mouseWheelDeltaY",37,ba,54,86));
	outFields->push(HX_("mouseWheelYScrollsX",55,78,fd,5d));
	outFields->push(HX_("_mouseWheelDeltaMode",66,5b,f5,33));
	outFields->push(HX_("mouseWheelDuration",aa,19,1b,6c));
	outFields->push(HX_("simulateTouch",7b,1d,d4,98));
	outFields->push(HX_("_decelerationRate",7e,48,06,07));
	outFields->push(HX_("decelerationRate",1f,5a,8b,6e));
	outFields->push(HX_("snapPositionsX",58,1c,7e,25));
	outFields->push(HX_("snapPositionsY",59,1c,7e,25));
	outFields->push(HX_("_logDecelerationRate",c4,e9,d1,52));
	outFields->push(HX_("_fixedThrowDuration",a5,c0,f5,73));
	outFields->push(HX_("restoreMouseChildren",56,08,06,fc));
	outFields->push(HX_("startTouchX",bb,0d,68,10));
	outFields->push(HX_("startTouchY",bc,0d,68,10));
	outFields->push(HX_("startScrollX",69,17,84,a2));
	outFields->push(HX_("startScrollY",6a,17,84,a2));
	outFields->push(HX_("savedScrollMoves",ae,71,0c,18));
	outFields->push(HX_("animateScrollX",0a,87,45,93));
	outFields->push(HX_("animateScrollY",0b,87,45,93));
	outFields->push(HX_("_animateScrollXEase",37,10,d7,01));
	outFields->push(HX_("_animateScrollYEase",b8,a4,3d,95));
	outFields->push(HX_("animateScrollXEndRatio",5a,24,e6,27));
	outFields->push(HX_("animateScrollYEndRatio",5b,8d,d7,fa));
	outFields->push(HX_("targetScrollX",5a,e4,06,68));
	outFields->push(HX_("targetScrollY",5b,e4,06,68));
	outFields->push(HX_("snappingToEdge",34,d2,2e,59));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_previousTouchPointID",e2,c6,66,f6));
	outFields->push(HX_("_touchPointID",0b,51,f2,5d));
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	outFields->push(HX_("_touchPointIsSimulated",a6,0f,b2,3a));
	outFields->push(HX_("touchPointIsSimulated",65,76,a4,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Scroller_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Scroller_obj,enabledX),HX_("enabledX",b7,ec,b2,ec)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,enabledY),HX_("enabledY",b8,ec,b2,ec)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_scrollX),HX_("_scrollX",2c,8d,90,6a)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_scrollY),HX_("_scrollY",2d,8d,90,6a)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_minScrollX),HX_("_minScrollX",58,4d,19,c9)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_minScrollY),HX_("_minScrollY",59,4d,19,c9)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_maxScrollX),HX_("_maxScrollX",86,7a,86,6d)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_maxScrollY),HX_("_maxScrollY",87,7a,86,6d)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_visibleWidth),HX_("_visibleWidth",13,63,56,22)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_visibleHeight),HX_("_visibleHeight",3a,c6,8f,9f)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_contentWidth),HX_("_contentWidth",ec,9c,5f,93)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_contentHeight),HX_("_contentHeight",41,2a,99,16)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,_scrolling),HX_("_scrolling",b6,76,bc,99)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,_draggingX),HX_("_draggingX",6a,74,cb,be)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,_draggingY),HX_("_draggingY",6b,74,cb,be)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,minDragDistance),HX_("minDragDistance",fb,ff,d8,1b)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,elasticEdges),HX_("elasticEdges",81,17,91,78)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,forceElasticTop),HX_("forceElasticTop",8b,99,3d,5e)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,forceElasticRight),HX_("forceElasticRight",52,68,34,71)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,forceElasticBottom),HX_("forceElasticBottom",b5,71,f9,b3)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,forceElasticLeft),HX_("forceElasticLeft",51,6c,57,12)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,elasticity),HX_("elasticity",79,23,b4,4d)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,throwElasticity),HX_("throwElasticity",3f,b0,ef,55)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,elasticSnapDuration),HX_("elasticSnapDuration",33,b5,9a,f2)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Scroller_obj,ease),HX_("ease",ee,8b,0c,43)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Scroller_obj,bounceEase),HX_("bounceEase",96,a1,28,00)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,mouseWheelDeltaX),HX_("mouseWheelDeltaX",36,ba,54,86)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,mouseWheelDeltaY),HX_("mouseWheelDeltaY",37,ba,54,86)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,mouseWheelYScrollsX),HX_("mouseWheelYScrollsX",55,78,fd,5d)},
	{::hx::fsInt,(int)offsetof(Scroller_obj,_mouseWheelDeltaMode),HX_("_mouseWheelDeltaMode",66,5b,f5,33)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,mouseWheelDuration),HX_("mouseWheelDuration",aa,19,1b,6c)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,simulateTouch),HX_("simulateTouch",7b,1d,d4,98)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_decelerationRate),HX_("_decelerationRate",7e,48,06,07)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Scroller_obj,snapPositionsX),HX_("snapPositionsX",58,1c,7e,25)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Scroller_obj,snapPositionsY),HX_("snapPositionsY",59,1c,7e,25)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_logDecelerationRate),HX_("_logDecelerationRate",c4,e9,d1,52)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,_fixedThrowDuration),HX_("_fixedThrowDuration",a5,c0,f5,73)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,restoreMouseChildren),HX_("restoreMouseChildren",56,08,06,fc)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,startTouchX),HX_("startTouchX",bb,0d,68,10)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,startTouchY),HX_("startTouchY",bc,0d,68,10)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,startScrollX),HX_("startScrollX",69,17,84,a2)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,startScrollY),HX_("startScrollY",6a,17,84,a2)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Scroller_obj,savedScrollMoves),HX_("savedScrollMoves",ae,71,0c,18)},
	{::hx::fsObject /*  ::motion::actuators::SimpleActuator */ ,(int)offsetof(Scroller_obj,animateScrollX),HX_("animateScrollX",0a,87,45,93)},
	{::hx::fsObject /*  ::motion::actuators::SimpleActuator */ ,(int)offsetof(Scroller_obj,animateScrollY),HX_("animateScrollY",0b,87,45,93)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Scroller_obj,_animateScrollXEase),HX_("_animateScrollXEase",37,10,d7,01)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Scroller_obj,_animateScrollYEase),HX_("_animateScrollYEase",b8,a4,3d,95)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,animateScrollXEndRatio),HX_("animateScrollXEndRatio",5a,24,e6,27)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,animateScrollYEndRatio),HX_("animateScrollYEndRatio",5b,8d,d7,fa)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,targetScrollX),HX_("targetScrollX",5a,e4,06,68)},
	{::hx::fsFloat,(int)offsetof(Scroller_obj,targetScrollY),HX_("targetScrollY",5b,e4,06,68)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,snappingToEdge),HX_("snappingToEdge",34,d2,2e,59)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(Scroller_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Scroller_obj,_previousTouchPointID),HX_("_previousTouchPointID",e2,c6,66,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Scroller_obj,_touchPointID),HX_("_touchPointID",0b,51,f2,5d)},
	{::hx::fsBool,(int)offsetof(Scroller_obj,_touchPointIsSimulated),HX_("_touchPointIsSimulated",a6,0f,b2,3a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Scroller_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Scroller_obj::MINIMUM_VELOCITY,HX_("MINIMUM_VELOCITY",0e,4a,dd,c0)},
	{::hx::fsInt,(void *) &Scroller_obj::POINTER_ID_MOUSE,HX_("POINTER_ID_MOUSE",83,12,4a,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Scroller_obj_sMemberFields[] = {
	HX_("enabledX",b7,ec,b2,ec),
	HX_("enabledY",b8,ec,b2,ec),
	HX_("_scrollX",2c,8d,90,6a),
	HX_("get_scrollX",c2,93,d2,b6),
	HX_("set_scrollX",ce,9a,3f,c1),
	HX_("_scrollY",2d,8d,90,6a),
	HX_("get_scrollY",c3,93,d2,b6),
	HX_("set_scrollY",cf,9a,3f,c1),
	HX_("get_restrictedScrollX",27,4d,ee,16),
	HX_("set_restrictedScrollX",33,1b,f7,6a),
	HX_("get_restrictedScrollY",28,4d,ee,16),
	HX_("set_restrictedScrollY",34,1b,f7,6a),
	HX_("_minScrollX",58,4d,19,c9),
	HX_("get_minScrollX",82,08,85,6c),
	HX_("_minScrollY",59,4d,19,c9),
	HX_("get_minScrollY",83,08,85,6c),
	HX_("_maxScrollX",86,7a,86,6d),
	HX_("get_maxScrollX",b0,35,f2,10),
	HX_("_maxScrollY",87,7a,86,6d),
	HX_("get_maxScrollY",b1,35,f2,10),
	HX_("_visibleWidth",13,63,56,22),
	HX_("get_visibleWidth",bd,bc,86,44),
	HX_("_visibleHeight",3a,c6,8f,9f),
	HX_("get_visibleHeight",50,e1,ad,67),
	HX_("_contentWidth",ec,9c,5f,93),
	HX_("get_contentWidth",96,f6,8f,b5),
	HX_("_contentHeight",41,2a,99,16),
	HX_("get_contentHeight",57,45,b7,de),
	HX_("_scrolling",b6,76,bc,99),
	HX_("get_scrolling",cc,ce,7d,ff),
	HX_("_draggingX",6a,74,cb,be),
	HX_("get_draggingX",80,cc,8c,24),
	HX_("_draggingY",6b,74,cb,be),
	HX_("get_draggingY",81,cc,8c,24),
	HX_("minDragDistance",fb,ff,d8,1b),
	HX_("elasticEdges",81,17,91,78),
	HX_("forceElasticTop",8b,99,3d,5e),
	HX_("forceElasticRight",52,68,34,71),
	HX_("forceElasticBottom",b5,71,f9,b3),
	HX_("forceElasticLeft",51,6c,57,12),
	HX_("elasticity",79,23,b4,4d),
	HX_("throwElasticity",3f,b0,ef,55),
	HX_("elasticSnapDuration",33,b5,9a,f2),
	HX_("ease",ee,8b,0c,43),
	HX_("bounceEase",96,a1,28,00),
	HX_("mouseWheelDeltaX",36,ba,54,86),
	HX_("mouseWheelDeltaY",37,ba,54,86),
	HX_("mouseWheelYScrollsX",55,78,fd,5d),
	HX_("_mouseWheelDeltaMode",66,5b,f5,33),
	HX_("mouseWheelDuration",aa,19,1b,6c),
	HX_("simulateTouch",7b,1d,d4,98),
	HX_("_decelerationRate",7e,48,06,07),
	HX_("get_decelerationRate",28,bf,f5,8c),
	HX_("set_decelerationRate",9c,76,ad,59),
	HX_("snapPositionsX",58,1c,7e,25),
	HX_("snapPositionsY",59,1c,7e,25),
	HX_("_logDecelerationRate",c4,e9,d1,52),
	HX_("_fixedThrowDuration",a5,c0,f5,73),
	HX_("restoreMouseChildren",56,08,06,fc),
	HX_("startTouchX",bb,0d,68,10),
	HX_("startTouchY",bc,0d,68,10),
	HX_("startScrollX",69,17,84,a2),
	HX_("startScrollY",6a,17,84,a2),
	HX_("savedScrollMoves",ae,71,0c,18),
	HX_("animateScrollX",0a,87,45,93),
	HX_("animateScrollY",0b,87,45,93),
	HX_("_animateScrollXEase",37,10,d7,01),
	HX_("_animateScrollYEase",b8,a4,3d,95),
	HX_("animateScrollXEndRatio",5a,24,e6,27),
	HX_("animateScrollYEndRatio",5b,8d,d7,fa),
	HX_("targetScrollX",5a,e4,06,68),
	HX_("targetScrollY",5b,e4,06,68),
	HX_("snappingToEdge",34,d2,2e,59),
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_previousTouchPointID",e2,c6,66,f6),
	HX_("_touchPointID",0b,51,f2,5d),
	HX_("get_touchPointID",b5,aa,22,80),
	HX_("_touchPointIsSimulated",a6,0f,b2,3a),
	HX_("get_touchPointIsSimulated",bc,30,a2,e7),
	HX_("setDimensions",8f,fc,17,7e),
	HX_("applyScrollRestrictions",a2,3b,ea,45),
	HX_("stop",02,f0,5b,4c),
	HX_("throwTo",41,bc,3e,5a),
	HX_("throwWithVelocity",89,74,83,6f),
	HX_("calculateDistanceFromVelocity",02,91,54,34),
	HX_("refreshAnimateScrollXEndRatio",95,2e,da,1a),
	HX_("refreshAnimateScrollYEndRatio",96,97,cb,ed),
	HX_("calculateMinAndMax",f9,54,e7,4e),
	HX_("startScroll",0f,36,4b,bf),
	HX_("completeScroll",a6,1d,c4,0e),
	HX_("finishScrollX",98,1b,6d,fd),
	HX_("finishScrollY",99,1b,6d,fd),
	HX_("animateScrollX_endRatio_onUpdate",02,fd,f7,a4),
	HX_("animateScrollX_onComplete",4d,c3,2c,8d),
	HX_("animateScrollY_endRatio_onUpdate",43,11,05,aa),
	HX_("animateScrollY_onComplete",ec,30,ec,ce),
	HX_("cleanupAfterDrag",6c,2b,b7,c8),
	HX_("scroller_target_removedFromStageHandler",ed,e4,69,99),
	HX_("touchBegin",ea,cd,e6,a9),
	HX_("touchMove",70,72,cd,0d),
	HX_("touchEnd",5c,c5,09,00),
	HX_("canDragX",b4,8b,49,4e),
	HX_("canDragY",b5,8b,49,4e),
	HX_("scroller_target_touchBeginCaptureHandler",97,03,20,79),
	HX_("scroller_target_touchBeginHandler",b7,f7,46,13),
	HX_("scroller_target_mouseDownCaptureHandler",62,ff,7b,70),
	HX_("scroller_target_mouseDownHandler",8c,f0,d2,28),
	HX_("scroller_target_stage_touchMoveHandler",04,ad,b7,bd),
	HX_("scroller_target_stage_mouseMoveHandler",5e,1c,30,e2),
	HX_("scroller_target_stage_touchEndHandler",44,63,4e,18),
	HX_("scroller_target_clickCaptureHandler",c3,9a,79,c9),
	HX_("scroller_target_touchTapCaptureHandler",d1,86,eb,ac),
	HX_("scroller_target_stage_mouseUpHandler",14,53,9b,ba),
	HX_("scroller_target_mouseWheelHandler",eb,be,bf,80),
	::String(null()) };

static void Scroller_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroller_obj::MINIMUM_VELOCITY,"MINIMUM_VELOCITY");
	HX_MARK_MEMBER_NAME(Scroller_obj::POINTER_ID_MOUSE,"POINTER_ID_MOUSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Scroller_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroller_obj::MINIMUM_VELOCITY,"MINIMUM_VELOCITY");
	HX_VISIT_MEMBER_NAME(Scroller_obj::POINTER_ID_MOUSE,"POINTER_ID_MOUSE");
};

#endif

::hx::Class Scroller_obj::__mClass;

static ::String Scroller_obj_sStaticFields[] = {
	HX_("MINIMUM_VELOCITY",0e,4a,dd,c0),
	HX_("POINTER_ID_MOUSE",83,12,4a,0c),
	::String(null())
};

void Scroller_obj::__register()
{
	Scroller_obj _hx_dummy;
	Scroller_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.Scroller",75,9d,7a,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scroller_obj::__GetStatic;
	__mClass->mSetStaticField = &Scroller_obj::__SetStatic;
	__mClass->mMarkFunc = Scroller_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Scroller_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scroller_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scroller_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Scroller_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scroller_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scroller_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Scroller_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_51_boot)
HXDLIN(  51)		MINIMUM_VELOCITY = ((Float)0.02);
            	}
{
            	HX_STACKFRAME(&_hx_pos_502d7772405dfa7d_54_boot)
HXDLIN(  54)		POINTER_ID_MOUSE = -1000;
            	}
}

} // end namespace feathers
} // end namespace utils
