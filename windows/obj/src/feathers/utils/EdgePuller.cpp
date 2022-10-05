#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayUtil
#include <feathers/utils/DisplayUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_EdgePuller
#include <feathers/utils/EdgePuller.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_59_new,"feathers.utils.EdgePuller","new",0x5b26c9fc,"feathers.utils.EdgePuller.new","feathers/utils/EdgePuller.hx",59,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_94_get_active,"feathers.utils.EdgePuller","get_active",0x75f96373,"feathers.utils.EdgePuller.get_active","feathers/utils/EdgePuller.hx",94,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_107_get_dragging,"feathers.utils.EdgePuller","get_dragging",0x438ce3bc,"feathers.utils.EdgePuller.get_dragging","feathers/utils/EdgePuller.hx",107,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_148_get_target,"feathers.utils.EdgePuller","get_target",0xe6a014fe,"feathers.utils.EdgePuller.get_target","feathers/utils/EdgePuller.hx",148,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_151_set_target,"feathers.utils.EdgePuller","set_target",0xea1db372,"feathers.utils.EdgePuller.set_target","feathers/utils/EdgePuller.hx",151,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_192_get_maxPullDistance,"feathers.utils.EdgePuller","get_maxPullDistance",0xd725a591,"feathers.utils.EdgePuller.get_maxPullDistance","feathers/utils/EdgePuller.hx",192,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_195_set_maxPullDistance,"feathers.utils.EdgePuller","set_maxPullDistance",0x13c2989d,"feathers.utils.EdgePuller.set_maxPullDistance","feathers/utils/EdgePuller.hx",195,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_216_get_pullDistance,"feathers.utils.EdgePuller","get_pullDistance",0x12984987,"feathers.utils.EdgePuller.get_pullDistance","feathers/utils/EdgePuller.hx",216,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_231_get_activeBorderSize,"feathers.utils.EdgePuller","get_activeBorderSize",0xec3c5520,"feathers.utils.EdgePuller.get_activeBorderSize","feathers/utils/EdgePuller.hx",231,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_234_set_activeBorderSize,"feathers.utils.EdgePuller","set_activeBorderSize",0xb8f40c94,"feathers.utils.EdgePuller.set_activeBorderSize","feathers/utils/EdgePuller.hx",234,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_254_get_pullableEdge,"feathers.utils.EdgePuller","get_pullableEdge",0xe82d3129,"feathers.utils.EdgePuller.get_pullableEdge","feathers/utils/EdgePuller.hx",254,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_257_set_pullableEdge,"feathers.utils.EdgePuller","set_pullableEdge",0x3e6f1e9d,"feathers.utils.EdgePuller.set_pullableEdge","feathers/utils/EdgePuller.hx",257,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_276_get_opened,"feathers.utils.EdgePuller","get_opened",0x81478456,"feathers.utils.EdgePuller.get_opened","feathers/utils/EdgePuller.hx",276,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_283_set_opened,"feathers.utils.EdgePuller","set_opened",0x84c522ca,"feathers.utils.EdgePuller.set_opened","feathers/utils/EdgePuller.hx",283,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_310_get_snapDuration,"feathers.utils.EdgePuller","get_snapDuration",0x02e89d2b,"feathers.utils.EdgePuller.get_snapDuration","feathers/utils/EdgePuller.hx",310,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_313_set_snapDuration,"feathers.utils.EdgePuller","set_snapDuration",0x592a8a9f,"feathers.utils.EdgePuller.set_snapDuration","feathers/utils/EdgePuller.hx",313,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_337_get_touchPointID,"feathers.utils.EdgePuller","get_touchPointID",0x81c6df99,"feathers.utils.EdgePuller.get_touchPointID","feathers/utils/EdgePuller.hx",337,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_354_get_touchPointIsSimulated,"feathers.utils.EdgePuller","get_touchPointIsSimulated",0xf42a3f58,"feathers.utils.EdgePuller.get_touchPointIsSimulated","feathers/utils/EdgePuller.hx",354,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_364_setOpened,"feathers.utils.EdgePuller","setOpened",0x7d23ee87,"feathers.utils.EdgePuller.setOpened","feathers/utils/EdgePuller.hx",364,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_378_setPullDistance,"feathers.utils.EdgePuller","setPullDistance",0x343bee78,"feathers.utils.EdgePuller.setPullDistance","feathers/utils/EdgePuller.hx",378,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_387_getMaxPullDistance,"feathers.utils.EdgePuller","getMaxPullDistance",0x46fdbacc,"feathers.utils.EdgePuller.getMaxPullDistance","feathers/utils/EdgePuller.hx",387,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_402_getTouchPosition,"feathers.utils.EdgePuller","getTouchPosition",0x2230a9f6,"feathers.utils.EdgePuller.getTouchPosition","feathers/utils/EdgePuller.hx",402,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_413_getTouchScale,"feathers.utils.EdgePuller","getTouchScale",0x81ffa31d,"feathers.utils.EdgePuller.getTouchScale","feathers/utils/EdgePuller.hx",413,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_423_isInActiveBorder,"feathers.utils.EdgePuller","isInActiveBorder",0xa9d87145,"feathers.utils.EdgePuller.isInActiveBorder","feathers/utils/EdgePuller.hx",423,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_436_checkMinDrag,"feathers.utils.EdgePuller","checkMinDrag",0x77e745a2,"feathers.utils.EdgePuller.checkMinDrag","feathers/utils/EdgePuller.hx",436,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_457_touchBegin,"feathers.utils.EdgePuller","touchBegin",0x19127fce,"feathers.utils.EdgePuller.touchBegin","feathers/utils/EdgePuller.hx",457,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_505_touchMove,"feathers.utils.EdgePuller","touchMove",0x09b5890c,"feathers.utils.EdgePuller.touchMove","feathers/utils/EdgePuller.hx",505,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_560_touchEnd,"feathers.utils.EdgePuller","touchEnd",0x687c7640,"feathers.utils.EdgePuller.touchEnd","feathers/utils/EdgePuller.hx",560,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_604_startPull,"feathers.utils.EdgePuller","startPull",0xff3c9be3,"feathers.utils.EdgePuller.startPull","feathers/utils/EdgePuller.hx",604,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_631_completeDrag,"feathers.utils.EdgePuller","completeDrag",0x0d199c31,"feathers.utils.EdgePuller.completeDrag","feathers/utils/EdgePuller.hx",631,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_636_completePull,"feathers.utils.EdgePuller","completePull",0x150a7c02,"feathers.utils.EdgePuller.completePull","feathers/utils/EdgePuller.hx",636,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_653_addStageEvents,"feathers.utils.EdgePuller","addStageEvents",0xd3ef4bba,"feathers.utils.EdgePuller.addStageEvents","feathers/utils/EdgePuller.hx",653,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_661_removeStageEvents,"feathers.utils.EdgePuller","removeStageEvents",0x51be7d2f,"feathers.utils.EdgePuller.removeStageEvents","feathers/utils/EdgePuller.hx",661,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_669_cleanupAfterDrag,"feathers.utils.EdgePuller","cleanupAfterDrag",0xca5b6050,"feathers.utils.EdgePuller.cleanupAfterDrag","feathers/utils/EdgePuller.hx",669,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_683_throwWithVelocity,"feathers.utils.EdgePuller","throwWithVelocity",0xdd8d8725,"feathers.utils.EdgePuller.throwWithVelocity","feathers/utils/EdgePuller.hx",683,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_694_throwTo,"feathers.utils.EdgePuller","throwTo",0x1f04b3dd,"feathers.utils.EdgePuller.throwTo","feathers/utils/EdgePuller.hx",694,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_710_throwTo,"feathers.utils.EdgePuller","throwTo",0x1f04b3dd,"feathers.utils.EdgePuller.throwTo","feathers/utils/EdgePuller.hx",710,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_728_animatePull_onComplete,"feathers.utils.EdgePuller","animatePull_onComplete",0x5f3c14b5,"feathers.utils.EdgePuller.animatePull_onComplete","feathers/utils/EdgePuller.hx",728,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_734_edgePuller_target_addedToStageHandler,"feathers.utils.EdgePuller","edgePuller_target_addedToStageHandler",0x4356bb05,"feathers.utils.EdgePuller.edgePuller_target_addedToStageHandler","feathers/utils/EdgePuller.hx",734,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_737_edgePuller_target_removedFromStageHandler,"feathers.utils.EdgePuller","edgePuller_target_removedFromStageHandler",0x6dd8af54,"feathers.utils.EdgePuller.edgePuller_target_removedFromStageHandler","feathers/utils/EdgePuller.hx",737,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_742_edgePuller_target_touchBeginCaptureHandler,"feathers.utils.EdgePuller","edgePuller_target_touchBeginCaptureHandler",0x85a25350,"feathers.utils.EdgePuller.edgePuller_target_touchBeginCaptureHandler","feathers/utils/EdgePuller.hx",742,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_750_edgePuller_target_touchBeginHandler,"feathers.utils.EdgePuller","edgePuller_target_touchBeginHandler",0xead86ade,"feathers.utils.EdgePuller.edgePuller_target_touchBeginHandler","feathers/utils/EdgePuller.hx",750,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_758_edgePuller_target_mouseDownCaptureHandler,"feathers.utils.EdgePuller","edgePuller_target_mouseDownCaptureHandler",0x44eac9c9,"feathers.utils.EdgePuller.edgePuller_target_mouseDownCaptureHandler","feathers/utils/EdgePuller.hx",758,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_766_edgePuller_target_mouseDownHandler,"feathers.utils.EdgePuller","edgePuller_target_mouseDownHandler",0x02c25f45,"feathers.utils.EdgePuller.edgePuller_target_mouseDownHandler","feathers/utils/EdgePuller.hx",766,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_778_edgePuller_target_stage_touchMoveHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_touchMoveHandler",0x7af06c7d,"feathers.utils.EdgePuller.edgePuller_target_stage_touchMoveHandler","feathers/utils/EdgePuller.hx",778,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_781_edgePuller_target_stage_mouseMoveHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_mouseMoveHandler",0x9f68dbd7,"feathers.utils.EdgePuller.edgePuller_target_stage_mouseMoveHandler","feathers/utils/EdgePuller.hx",781,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_787_edgePuller_target_stage_touchEndHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_touchEndHandler",0x15b5f5eb,"feathers.utils.EdgePuller.edgePuller_target_stage_touchEndHandler","feathers/utils/EdgePuller.hx",787,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_791_edgePuller_target_stage_mouseUpHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_mouseUpHandler",0x50fb124d,"feathers.utils.EdgePuller.edgePuller_target_stage_mouseUpHandler","feathers/utils/EdgePuller.hx",791,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_794_edgePuller_target_stage_touchBeginHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_touchBeginHandler",0x3aeb3c5d,"feathers.utils.EdgePuller.edgePuller_target_stage_touchBeginHandler","feathers/utils/EdgePuller.hx",794,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_809_edgePuller_target_stage_touchMoveHandler2,"feathers.utils.EdgePuller","edgePuller_target_stage_touchMoveHandler2",0x176e8115,"feathers.utils.EdgePuller.edgePuller_target_stage_touchMoveHandler2","feathers/utils/EdgePuller.hx",809,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_844_edgePuller_target_stage_touchEndHandler2,"feathers.utils.EdgePuller","edgePuller_target_stage_touchEndHandler2",0xe98137e7,"feathers.utils.EdgePuller.edgePuller_target_stage_touchEndHandler2","feathers/utils/EdgePuller.hx",844,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_855_edgePuller_target_stage_mouseDownHandler,"feathers.utils.EdgePuller","edgePuller_target_stage_mouseDownHandler",0xed4e82a6,"feathers.utils.EdgePuller.edgePuller_target_stage_mouseDownHandler","feathers/utils/EdgePuller.hx",855,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_871_edgePuller_target_stage_mouseMoveHandler2,"feathers.utils.EdgePuller","edgePuller_target_stage_mouseMoveHandler2",0xdc57807b,"feathers.utils.EdgePuller.edgePuller_target_stage_mouseMoveHandler2","feathers/utils/EdgePuller.hx",871,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_906_edgePuller_target_stage_mouseUpHandler2,"feathers.utils.EdgePuller","edgePuller_target_stage_mouseUpHandler2",0x8ab4f145,"feathers.utils.EdgePuller.edgePuller_target_stage_mouseUpHandler2","feathers/utils/EdgePuller.hx",906,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_60_boot,"feathers.utils.EdgePuller","boot",0x5ee2f316,"feathers.utils.EdgePuller.boot","feathers/utils/EdgePuller.hx",60,0x0cc780f2)
HX_LOCAL_STACK_FRAME(_hx_pos_3cdf8e029ad100d8_63_boot,"feathers.utils.EdgePuller","boot",0x5ee2f316,"feathers.utils.EdgePuller.boot","feathers/utils/EdgePuller.hx",63,0x0cc780f2)
namespace feathers{
namespace utils{

void EdgePuller_obj::__construct( ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance){
            		 ::feathers::layout::RelativePosition pullableEdge = __o_pullableEdge;
            		if (::hx::IsNull(__o_pullableEdge)) pullableEdge = ::feathers::layout::RelativePosition_obj::LEFT_dyn();
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_59_new)
HXLINE( 362)		this->_animatePull = null();
HXLINE( 361)		this->_savedTouchMoves = ::Array_obj< Float >::__new(0);
HXLINE( 360)		this->_targetPullDistance = ((Float)0.0);
HXLINE( 359)		this->_startPullDistance = ((Float)0.0);
HXLINE( 358)		this->_startTouch = ((Float)0.0);
HXLINE( 357)		this->_restoreMouseChildren = false;
HXLINE( 340)		this->_touchPointIsSimulated = false;
HXLINE( 321)		this->_touchPointID = null();
HXLINE( 300)		this->_snapDuration = ((Float)0.5);
HXLINE( 267)		this->_opened = false;
HXLINE( 265)		this->_pendingOpened = null();
HXLINE( 242)		this->_pullableEdge = ::feathers::layout::RelativePosition_obj::LEFT_dyn();
HXLINE( 219)		this->_activeBorderSize = null();
HXLINE( 203)		this->_pullDistance = ((Float)0.0);
HXLINE( 178)		this->_maxPullDistance = null();
HXLINE( 136)		this->simulateTouch = false;
HXLINE( 127)		this->ease = ::motion::easing::Quart_obj::easeOut;
HXLINE( 118)		this->minDragDistance = ((Float)6.0);
HXLINE(  97)		this->_dragging = false;
HXLINE(  84)		this->_active = false;
HXLINE(  82)		this->enabled = true;
HXLINE(  71)		super::__construct(null());
HXLINE(  72)		this->set_target(target);
HXLINE(  73)		this->set_pullableEdge(pullableEdge);
HXLINE(  74)		this->set_maxPullDistance(maxPullDistance);
            	}

Dynamic EdgePuller_obj::__CreateEmpty() { return new EdgePuller_obj; }

void *EdgePuller_obj::_hx_vtable = 0;

Dynamic EdgePuller_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EdgePuller_obj > _hx_result = new EdgePuller_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool EdgePuller_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b5579b0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b5579b0;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

bool EdgePuller_obj::get_active(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_94_get_active)
HXDLIN(  94)		return this->_active;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_active,return )

bool EdgePuller_obj::get_dragging(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_107_get_dragging)
HXDLIN( 107)		return this->_dragging;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_dragging,return )

 ::openfl::display::InteractiveObject EdgePuller_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_148_get_target)
HXDLIN( 148)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_target,return )

 ::openfl::display::InteractiveObject EdgePuller_obj::set_target( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_151_set_target)
HXLINE( 152)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE( 153)			return this->_target;
            		}
HXLINE( 155)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 156)			this->cleanupAfterDrag();
HXLINE( 157)			this->_target->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_mouseDownHandler_dyn(),null());
HXLINE( 158)			this->_target->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_mouseDownCaptureHandler_dyn(),true);
HXLINE( 159)			this->_target->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_touchBeginHandler_dyn(),null());
HXLINE( 160)			this->_target->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_touchBeginCaptureHandler_dyn(),true);
HXLINE( 161)			this->_target->removeEventListener(HX_("addedToStage",63,22,55,0c),this->edgePuller_target_addedToStageHandler_dyn(),null());
HXLINE( 162)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->edgePuller_target_removedFromStageHandler_dyn(),null());
HXLINE( 163)			this->removeStageEvents();
            		}
HXLINE( 165)		this->_target = value;
HXLINE( 166)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 167)			this->_target->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_mouseDownHandler_dyn(),false,0,true);
HXLINE( 168)			this->_target->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_mouseDownCaptureHandler_dyn(),true,0,true);
HXLINE( 169)			this->_target->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_touchBeginHandler_dyn(),false,0,true);
HXLINE( 170)			this->_target->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_touchBeginCaptureHandler_dyn(),true,0,true);
HXLINE( 171)			this->_target->addEventListener(HX_("addedToStage",63,22,55,0c),this->edgePuller_target_addedToStageHandler_dyn(),false,0,true);
HXLINE( 172)			this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->edgePuller_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE( 173)			this->addStageEvents();
            		}
HXLINE( 175)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_target,return )

 ::Dynamic EdgePuller_obj::get_maxPullDistance(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_192_get_maxPullDistance)
HXDLIN( 192)		return this->_maxPullDistance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_maxPullDistance,return )

 ::Dynamic EdgePuller_obj::set_maxPullDistance( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_195_set_maxPullDistance)
HXLINE( 196)		if (::hx::IsEq( this->_maxPullDistance,value )) {
HXLINE( 197)			return this->_maxPullDistance;
            		}
HXLINE( 199)		this->_maxPullDistance = value;
HXLINE( 200)		return this->_maxPullDistance;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_maxPullDistance,return )

Float EdgePuller_obj::get_pullDistance(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_216_get_pullDistance)
HXDLIN( 216)		return this->_pullDistance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_pullDistance,return )

 ::Dynamic EdgePuller_obj::get_activeBorderSize(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_231_get_activeBorderSize)
HXDLIN( 231)		return this->_activeBorderSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_activeBorderSize,return )

 ::Dynamic EdgePuller_obj::set_activeBorderSize( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_234_set_activeBorderSize)
HXLINE( 235)		if (::hx::IsEq( this->_activeBorderSize,value )) {
HXLINE( 236)			return this->_activeBorderSize;
            		}
HXLINE( 238)		this->_activeBorderSize = value;
HXLINE( 239)		return this->_activeBorderSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_activeBorderSize,return )

 ::feathers::layout::RelativePosition EdgePuller_obj::get_pullableEdge(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_254_get_pullableEdge)
HXDLIN( 254)		return this->_pullableEdge;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_pullableEdge,return )

 ::feathers::layout::RelativePosition EdgePuller_obj::set_pullableEdge( ::feathers::layout::RelativePosition value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_257_set_pullableEdge)
HXLINE( 258)		if (::hx::IsPointerEq( this->_pullableEdge,value )) {
HXLINE( 259)			return this->_pullableEdge;
            		}
HXLINE( 261)		this->_pullableEdge = value;
HXLINE( 262)		return this->_pullableEdge;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_pullableEdge,return )

bool EdgePuller_obj::get_opened(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_276_get_opened)
HXLINE( 277)		if (::hx::IsNotNull( this->_pendingOpened )) {
HXLINE( 278)			return ( (bool)(this->_pendingOpened) );
            		}
HXLINE( 280)		return this->_opened;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_opened,return )

bool EdgePuller_obj::set_opened(bool value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_283_set_opened)
HXLINE( 284)		if (::hx::IsNotNull( this->_pendingOpened )) {
HXLINE( 285)			if (::hx::IsEq( this->_pendingOpened,value )) {
HXLINE( 286)				return ( (bool)(this->_pendingOpened) );
            			}
            		}
            		else {
HXLINE( 288)			if ((this->_opened == value)) {
HXLINE( 289)				return this->_opened;
            			}
            		}
HXLINE( 291)		this->_pendingOpened = value;
HXLINE( 292)		if (( (bool)(this->_pendingOpened) )) {
HXLINE( 293)			this->throwTo(this->getMaxPullDistance());
            		}
            		else {
HXLINE( 295)			this->throwTo(((Float)0.0));
            		}
HXLINE( 297)		return ( (bool)(this->_pendingOpened) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_opened,return )

Float EdgePuller_obj::get_snapDuration(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_310_get_snapDuration)
HXDLIN( 310)		return this->_snapDuration;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_snapDuration,return )

Float EdgePuller_obj::set_snapDuration(Float value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_313_set_snapDuration)
HXLINE( 314)		if ((this->_snapDuration == value)) {
HXLINE( 315)			return this->_snapDuration;
            		}
HXLINE( 317)		this->_snapDuration = value;
HXLINE( 318)		return this->_snapDuration;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,set_snapDuration,return )

 ::Dynamic EdgePuller_obj::get_touchPointID(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_337_get_touchPointID)
HXDLIN( 337)		return this->_touchPointID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_touchPointID,return )

bool EdgePuller_obj::get_touchPointIsSimulated(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_354_get_touchPointIsSimulated)
HXDLIN( 354)		return this->_touchPointIsSimulated;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,get_touchPointIsSimulated,return )

bool EdgePuller_obj::setOpened(bool value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_364_setOpened)
HXLINE( 365)		this->_pendingOpened = null();
HXLINE( 366)		if ((this->_opened == value)) {
HXLINE( 367)			return this->_opened;
            		}
HXLINE( 369)		this->_opened = value;
HXLINE( 370)		if (this->_opened) {
HXLINE( 371)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("open",ca,03,b4,49),null(),null());
            		}
            		else {
HXLINE( 373)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("close",b8,17,63,48),null(),null());
            		}
HXLINE( 375)		return this->_opened;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,setOpened,return )

Float EdgePuller_obj::setPullDistance(Float value){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_378_setPullDistance)
HXLINE( 379)		if ((this->_pullDistance == value)) {
HXLINE( 380)			return this->_pullDistance;
            		}
HXLINE( 382)		this->_pullDistance = value;
HXLINE( 383)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 384)		return this->_pullDistance;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,setPullDistance,return )

Float EdgePuller_obj::getMaxPullDistance(){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_387_getMaxPullDistance)
HXLINE( 388)		if (::hx::IsNotNull( this->_maxPullDistance )) {
HXLINE( 389)			return ( (Float)(this->_maxPullDistance) );
            		}
HXLINE( 391)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 392)				return this->_target->get_height();
            			}
            			break;
            			case (int)1: {
HXLINE( 393)				return this->_target->get_width();
            			}
            			break;
            			case (int)2: {
HXLINE( 394)				return this->_target->get_height();
            			}
            			break;
            			case (int)3: {
HXLINE( 395)				return this->_target->get_width();
            			}
            			break;
            			default:{
HXLINE( 397)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 391)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,getMaxPullDistance,return )

Float EdgePuller_obj::getTouchPosition(Float stageX,Float stageY){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_402_getTouchPosition)
HXDLIN( 402)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 403)				return stageY;
            			}
            			break;
            			case (int)1: {
HXLINE( 404)				return stageX;
            			}
            			break;
            			case (int)2: {
HXLINE( 405)				return stageY;
            			}
            			break;
            			case (int)3: {
HXLINE( 406)				return stageX;
            			}
            			break;
            			default:{
HXLINE( 408)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 402)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(EdgePuller_obj,getTouchPosition,return )

Float EdgePuller_obj::getTouchScale(){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_413_getTouchScale)
HXDLIN( 413)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 414)				return ::feathers::utils::DisplayUtil_obj::getConcatenatedScaleY(this->_target);
            			}
            			break;
            			case (int)1: {
HXLINE( 415)				return ::feathers::utils::DisplayUtil_obj::getConcatenatedScaleX(this->_target);
            			}
            			break;
            			case (int)2: {
HXLINE( 416)				return ::feathers::utils::DisplayUtil_obj::getConcatenatedScaleY(this->_target);
            			}
            			break;
            			case (int)3: {
HXLINE( 417)				return ::feathers::utils::DisplayUtil_obj::getConcatenatedScaleX(this->_target);
            			}
            			break;
            			default:{
HXLINE( 419)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 413)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,getTouchScale,return )

bool EdgePuller_obj::isInActiveBorder(Float stageX,Float stageY,Float activeBorderSize){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_423_isInActiveBorder)
HXLINE( 424)		 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,stageX,stageY);
HXLINE( 425)		point = this->_target->globalToLocal(point);
HXLINE( 426)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 427)				if ((point->y >= ((Float)0.0))) {
HXLINE( 427)					return (point->y < activeBorderSize);
            				}
            				else {
HXLINE( 427)					return false;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 428)				Float point1 = point->x;
HXDLIN( 428)				if ((point1 >= (this->_target->get_width() - activeBorderSize))) {
HXLINE( 428)					Float point1 = point->x;
HXDLIN( 428)					return (point1 < this->_target->get_width());
            				}
            				else {
HXLINE( 428)					return false;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 429)				Float point1 = point->y;
HXDLIN( 429)				if ((point1 >= (this->_target->get_height() - activeBorderSize))) {
HXLINE( 429)					Float point1 = point->y;
HXDLIN( 429)					return (point1 < this->_target->get_height());
            				}
            				else {
HXLINE( 429)					return false;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 430)				if ((point->x >= ((Float)0.0))) {
HXLINE( 430)					return (point->x < activeBorderSize);
            				}
            				else {
HXLINE( 430)					return false;
            				}
            			}
            			break;
            			default:{
HXLINE( 432)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 426)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(EdgePuller_obj,isInActiveBorder,return )

bool EdgePuller_obj::checkMinDrag(Float touchOffset){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_436_checkMinDrag)
HXLINE( 437)		if (this->_opened) {
HXLINE( 438)			switch((int)(this->_pullableEdge->_hx_getIndex())){
            				case (int)0: {
HXLINE( 439)					return (touchOffset < -(this->minDragDistance));
            				}
            				break;
            				case (int)1: {
HXLINE( 440)					return (touchOffset > this->minDragDistance);
            				}
            				break;
            				case (int)2: {
HXLINE( 441)					return (touchOffset > this->minDragDistance);
            				}
            				break;
            				case (int)3: {
HXLINE( 442)					return (touchOffset < -(this->minDragDistance));
            				}
            				break;
            				default:{
HXLINE( 444)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            				}
            			}
            		}
HXLINE( 447)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 448)				return (touchOffset > this->minDragDistance);
            			}
            			break;
            			case (int)1: {
HXLINE( 449)				return (touchOffset < -(this->minDragDistance));
            			}
            			break;
            			case (int)2: {
HXLINE( 450)				return (touchOffset < -(this->minDragDistance));
            			}
            			break;
            			case (int)3: {
HXLINE( 451)				return (touchOffset > this->minDragDistance);
            			}
            			break;
            			default:{
HXLINE( 453)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 447)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,checkMinDrag,return )

void EdgePuller_obj::touchBegin(int touchPointID,bool simulatedTouch,Float stageX,Float stageY){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_457_touchBegin)
HXLINE( 458)		if (!(this->enabled)) {
HXLINE( 459)			return;
            		}
HXLINE( 461)		bool _hx_tmp;
HXDLIN( 461)		if (simulatedTouch) {
HXLINE( 461)			_hx_tmp = !(this->simulateTouch);
            		}
            		else {
HXLINE( 461)			_hx_tmp = false;
            		}
HXDLIN( 461)		if (_hx_tmp) {
HXLINE( 462)			return;
            		}
HXLINE( 464)		if (::hx::IsNotNull( this->_touchPointID )) {
HXLINE( 466)			return;
            		}
HXLINE( 469)		bool _hx_tmp1;
HXDLIN( 469)		if (!(this->_opened)) {
HXLINE( 469)			_hx_tmp1 = ::hx::IsNotNull( this->_activeBorderSize );
            		}
            		else {
HXLINE( 469)			_hx_tmp1 = false;
            		}
HXDLIN( 469)		if (_hx_tmp1) {
HXLINE( 470)			if (!(this->isInActiveBorder(stageX,stageY,( (Float)(this->_activeBorderSize) )))) {
HXLINE( 471)				return;
            			}
            		}
HXLINE( 476)		if (::hx::IsNotNull( this->_animatePull )) {
HXLINE( 477)			::motion::Actuate_obj::stop(this->_animatePull,null(),false,false);
HXLINE( 478)			this->_animatePull = null();
            		}
HXLINE( 481)		this->_target->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->edgePuller_target_stage_mouseMoveHandler_dyn(),false,0,true);
HXLINE( 482)		this->_target->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->edgePuller_target_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 483)		this->_target->stage->addEventListener(HX_("touchMove",70,72,cd,0d),this->edgePuller_target_stage_touchMoveHandler_dyn(),false,0,true);
HXLINE( 484)		this->_target->stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->edgePuller_target_stage_touchEndHandler_dyn(),false,0,true);
HXLINE( 485)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 486)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE( 489)			if (this->_active) {
HXLINE( 490)				container->mouseChildren = false;
            			}
            		}
HXLINE( 493)		this->_pendingOpened = null();
HXLINE( 494)		this->_touchPointID = touchPointID;
HXLINE( 495)		this->_touchPointIsSimulated = simulatedTouch;
HXLINE( 496)		this->_startTouch = this->getTouchPosition(stageX,stageY);
HXLINE( 497)		this->_startPullDistance = this->_pullDistance;
HXLINE( 501)		this->_savedTouchMoves->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC4(EdgePuller_obj,touchBegin,(void))

void EdgePuller_obj::touchMove(int touchPointID,bool simulatedTouch,Float stageX,Float stageY){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_505_touchMove)
HXLINE( 506)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE( 508)			return;
            		}
HXLINE( 510)		if (::hx::IsNotEq( this->_touchPointID,touchPointID )) {
HXLINE( 512)			return;
            		}
HXLINE( 514)		if ((this->_touchPointIsSimulated != simulatedTouch)) {
HXLINE( 516)			return;
            		}
HXLINE( 519)		Float touchPosition = this->getTouchPosition(stageX,stageY);
HXLINE( 520)		Float touchOffset = (touchPosition - this->_startTouch);
HXLINE( 521)		Float touchScale = this->getTouchScale();
HXLINE( 522)		touchOffset = (touchOffset * touchScale);
HXLINE( 524)		bool _hx_tmp;
HXDLIN( 524)		bool _hx_tmp1;
HXDLIN( 524)		if (!(this->_dragging)) {
HXLINE( 524)			_hx_tmp1 = this->enabled;
            		}
            		else {
HXLINE( 524)			_hx_tmp1 = false;
            		}
HXDLIN( 524)		if (_hx_tmp1) {
HXLINE( 524)			_hx_tmp = this->checkMinDrag(touchOffset);
            		}
            		else {
HXLINE( 524)			_hx_tmp = false;
            		}
HXDLIN( 524)		if (_hx_tmp) {
HXLINE( 525)			this->_startTouch = touchPosition;
HXLINE( 526)			touchOffset = ((Float)0.0);
HXLINE( 527)			this->_dragging = this->startPull();
            		}
HXLINE( 533)		if (!(this->_dragging)) {
HXLINE( 534)			return;
            		}
HXLINE( 537)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 538)		Float pullDistance = this->_startPullDistance;
HXLINE( 539)		bool _hx_tmp2;
HXDLIN( 539)		if (::hx::IsPointerNotEq( this->_pullableEdge,::feathers::layout::RelativePosition_obj::RIGHT_dyn() )) {
HXLINE( 539)			_hx_tmp2 = ::hx::IsPointerEq( this->_pullableEdge,::feathers::layout::RelativePosition_obj::BOTTOM_dyn() );
            		}
            		else {
HXLINE( 539)			_hx_tmp2 = true;
            		}
HXDLIN( 539)		if (_hx_tmp2) {
HXLINE( 540)			pullDistance = (pullDistance - touchOffset);
            		}
            		else {
HXLINE( 542)			pullDistance = (pullDistance + touchOffset);
            		}
HXLINE( 544)		if ((pullDistance < ((Float)0.0))) {
HXLINE( 545)			pullDistance = ((Float)0.0);
            		}
            		else {
HXLINE( 546)			if ((pullDistance > maxPullDistance)) {
HXLINE( 547)				pullDistance = maxPullDistance;
            			}
            		}
HXLINE( 550)		this->setPullDistance(pullDistance);
HXLINE( 552)		if ((this->_savedTouchMoves->length > 60)) {
HXLINE( 553)			this->_savedTouchMoves->resize(30);
            		}
HXLINE( 556)		this->_savedTouchMoves->push(pullDistance);
HXLINE( 557)		::Array< Float > _hx_tmp3 = this->_savedTouchMoves;
HXDLIN( 557)		_hx_tmp3->push(::openfl::Lib_obj::getTimer());
            	}


HX_DEFINE_DYNAMIC_FUNC4(EdgePuller_obj,touchMove,(void))

void EdgePuller_obj::touchEnd(int touchPointID,bool simulatedTouch){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_560_touchEnd)
HXLINE( 561)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE( 563)			return;
            		}
HXLINE( 565)		if (::hx::IsNotEq( this->_touchPointID,touchPointID )) {
HXLINE( 567)			return;
            		}
HXLINE( 569)		if ((this->_touchPointIsSimulated != simulatedTouch)) {
HXLINE( 571)			return;
            		}
HXLINE( 574)		this->cleanupAfterDrag();
HXLINE( 576)		if (!(this->_dragging)) {
HXLINE( 577)			return;
            		}
HXLINE( 581)		int targetTime = (::openfl::Lib_obj::getTimer() - 100);
HXLINE( 582)		int endIndex = (this->_savedTouchMoves->length - 1);
HXLINE( 583)		int startIndex = endIndex;
HXLINE( 584)		int i = endIndex;
HXLINE( 585)		while(true){
HXLINE( 585)			bool _hx_tmp;
HXDLIN( 585)			if ((endIndex > 0)) {
HXLINE( 585)				_hx_tmp = (this->_savedTouchMoves->__get(i) > targetTime);
            			}
            			else {
HXLINE( 585)				_hx_tmp = false;
            			}
HXDLIN( 585)			if (!(_hx_tmp)) {
HXLINE( 585)				goto _hx_goto_27;
            			}
HXLINE( 586)			startIndex = i;
HXLINE( 587)			i = (i - 2);
            		}
            		_hx_goto_27:;
HXLINE( 590)		Float velocity = ((Float)0.0);
HXLINE( 591)		bool _hx_tmp;
HXDLIN( 591)		if (this->_dragging) {
HXLINE( 591)			_hx_tmp = (startIndex != endIndex);
            		}
            		else {
HXLINE( 591)			_hx_tmp = false;
            		}
HXDLIN( 591)		if (_hx_tmp) {
HXLINE( 592)			Float timeOffset = (this->_savedTouchMoves->__get(endIndex) - this->_savedTouchMoves->__get(startIndex));
HXLINE( 593)			Float moved = (this->_pullDistance - this->_savedTouchMoves->__get((startIndex - 1)));
HXLINE( 594)			velocity = (moved / timeOffset);
            		}
HXLINE( 597)		bool _hx_tmp1;
HXDLIN( 597)		if ((velocity == ((Float)0.0))) {
HXLINE( 597)			_hx_tmp1 = this->_dragging;
            		}
            		else {
HXLINE( 597)			_hx_tmp1 = true;
            		}
HXDLIN( 597)		if (_hx_tmp1) {
HXLINE( 598)			this->throwWithVelocity(velocity);
            		}
            		else {
HXLINE( 600)			this->completeDrag();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(EdgePuller_obj,touchEnd,(void))

bool EdgePuller_obj::startPull(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_604_startPull)
HXLINE( 605)		if (this->_active) {
HXLINE( 607)			return true;
            		}
HXLINE( 609)		this->_active = true;
HXLINE( 610)		bool result = true;
HXLINE( 611)		if (this->_opened) {
HXLINE( 612)			result = ::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("closing",f5,de,25,79),false,true);
            		}
            		else {
HXLINE( 614)			result = ::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("opening",58,03,45,40),false,true);
            		}
HXLINE( 616)		if (!(result)) {
HXLINE( 617)			this->_active = false;
HXLINE( 618)			this->_dragging = false;
HXLINE( 619)			this->cleanupAfterDrag();
HXLINE( 620)			return false;
            		}
HXLINE( 622)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 623)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE( 624)			this->_restoreMouseChildren = container->mouseChildren;
HXLINE( 625)			container->mouseChildren = false;
            		}
HXLINE( 627)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 628)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,startPull,return )

void EdgePuller_obj::completeDrag(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_631_completeDrag)
HXLINE( 632)		this->_dragging = false;
HXLINE( 633)		this->completePull();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,completeDrag,(void))

void EdgePuller_obj::completePull(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_636_completePull)
HXLINE( 637)		bool _hx_tmp;
HXDLIN( 637)		bool _hx_tmp1;
HXDLIN( 637)		if (this->_active) {
HXLINE( 637)			_hx_tmp1 = this->_dragging;
            		}
            		else {
HXLINE( 637)			_hx_tmp1 = true;
            		}
HXDLIN( 637)		if (!(_hx_tmp1)) {
HXLINE( 637)			_hx_tmp = ::hx::IsNotNull( this->_animatePull );
            		}
            		else {
HXLINE( 637)			_hx_tmp = true;
            		}
HXDLIN( 637)		if (_hx_tmp) {
HXLINE( 638)			return;
            		}
HXLINE( 640)		this->_active = false;
HXLINE( 641)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 642)			 ::openfl::display::DisplayObjectContainer container = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_target);
HXLINE( 643)			container->mouseChildren = this->_restoreMouseChildren;
            		}
HXLINE( 645)		bool oldOpened = this->_opened;
HXLINE( 646)		bool newOpened = (this->_pullDistance != ((Float)0.0));
HXLINE( 647)		this->setOpened(newOpened);
HXLINE( 648)		if ((newOpened == oldOpened)) {
HXLINE( 649)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("cancel",7a,ed,33,b8),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,completePull,(void))

void EdgePuller_obj::addStageEvents(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_653_addStageEvents)
HXLINE( 654)		bool _hx_tmp;
HXDLIN( 654)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 654)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 654)			_hx_tmp = true;
            		}
HXDLIN( 654)		if (_hx_tmp) {
HXLINE( 655)			return;
            		}
HXLINE( 657)		this->_target->stage->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_stage_touchBeginHandler_dyn(),false,0,true);
HXLINE( 658)		this->_target->stage->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_stage_mouseDownHandler_dyn(),false,0,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,addStageEvents,(void))

void EdgePuller_obj::removeStageEvents(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_661_removeStageEvents)
HXLINE( 662)		bool _hx_tmp;
HXDLIN( 662)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 662)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 662)			_hx_tmp = true;
            		}
HXDLIN( 662)		if (_hx_tmp) {
HXLINE( 663)			return;
            		}
HXLINE( 665)		this->_target->stage->removeEventListener(HX_("touchBegin",ea,cd,e6,a9),this->edgePuller_target_stage_touchBeginHandler_dyn(),null());
HXLINE( 666)		this->_target->stage->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->edgePuller_target_stage_mouseDownHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,removeStageEvents,(void))

void EdgePuller_obj::cleanupAfterDrag(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_669_cleanupAfterDrag)
HXLINE( 670)		if (::hx::IsNull( this->_touchPointID )) {
HXLINE( 671)			return;
            		}
HXLINE( 673)		this->_touchPointID = null();
HXLINE( 674)		this->_touchPointIsSimulated = false;
HXLINE( 675)		if (::hx::IsNotNull( this->_target->stage )) {
HXLINE( 676)			this->_target->stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->edgePuller_target_stage_mouseMoveHandler_dyn(),null());
HXLINE( 677)			this->_target->stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->edgePuller_target_stage_mouseUpHandler_dyn(),null());
HXLINE( 678)			this->_target->stage->removeEventListener(HX_("touchMove",70,72,cd,0d),this->edgePuller_target_stage_touchMoveHandler_dyn(),null());
HXLINE( 679)			this->_target->stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->edgePuller_target_stage_touchEndHandler_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,cleanupAfterDrag,(void))

void EdgePuller_obj::throwWithVelocity(Float velocity){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_683_throwWithVelocity)
HXLINE( 684)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 685)		Float targetPosition = ((Float)0.0);
HXLINE( 686)		if ((::Math_obj::abs(velocity) <= ::feathers::utils::EdgePuller_obj::MINIMUM_VELOCITY)) {
HXLINE( 687)			if ((this->_pullDistance < (maxPullDistance / ((Float)2.0)))) {
HXLINE( 687)				targetPosition = ((Float)0.0);
            			}
            			else {
HXLINE( 687)				targetPosition = maxPullDistance;
            			}
            		}
            		else {
HXLINE( 689)			if ((velocity < ((Float)0.0))) {
HXLINE( 689)				targetPosition = ((Float)0.0);
            			}
            			else {
HXLINE( 689)				targetPosition = maxPullDistance;
            			}
            		}
HXLINE( 691)		this->throwTo(targetPosition);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,throwWithVelocity,(void))

void EdgePuller_obj::throwTo( ::Dynamic targetPosition){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_694_throwTo)
HXDLIN( 694)		 ::feathers::utils::EdgePuller _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 695)		bool pullChanged = false;
HXLINE( 696)		if (::hx::IsNotNull( targetPosition )) {
HXLINE( 697)			if (::hx::IsNotNull( this->_animatePull )) {
HXLINE( 698)				::motion::Actuate_obj::stop(this->_animatePull,null(),false,false);
HXLINE( 699)				this->_animatePull = null();
            			}
HXLINE( 701)			if (::hx::IsNotEq( this->_pullDistance,targetPosition )) {
HXLINE( 702)				pullChanged = true;
HXLINE( 703)				if (!(this->startPull())) {
HXLINE( 705)					return;
            				}
HXLINE( 707)				this->_startPullDistance = this->_pullDistance;
HXLINE( 708)				this->_targetPullDistance = ( (Float)(targetPosition) );
HXLINE( 709)				if ((this->_snapDuration > ((Float)0.0))) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::utils::EdgePuller,_gthis) HXARGC(1)
            					Float _hx_run(Float pullDistance){
            						HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_710_throwTo)
HXLINE( 710)						return _gthis->setPullDistance(pullDistance);
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 710)					 ::motion::actuators::GenericActuator tween = ::motion::Actuate_obj::update( ::Dynamic(new _hx_Closure_0(_gthis)),this->_snapDuration,::cpp::VirtualArray_obj::__new(1)->init(0,this->_startPullDistance),::cpp::VirtualArray_obj::__new(1)->init(0,this->_targetPullDistance),true);
HXLINE( 715)					this->_animatePull = ::hx::TCast<  ::motion::actuators::SimpleActuator >::cast(tween);
HXLINE( 716)					this->_animatePull->ease(this->ease);
HXLINE( 717)					this->_animatePull->onComplete(this->animatePull_onComplete_dyn(),null());
            				}
            				else {
HXLINE( 719)					this->setPullDistance(this->_targetPullDistance);
HXLINE( 720)					this->completeDrag();
            				}
            			}
            			else {
HXLINE( 723)				this->completeDrag();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,throwTo,(void))

void EdgePuller_obj::animatePull_onComplete(){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_728_animatePull_onComplete)
HXLINE( 729)		this->_animatePull = null();
HXLINE( 730)		this->completeDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EdgePuller_obj,animatePull_onComplete,(void))

void EdgePuller_obj::edgePuller_target_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_734_edgePuller_target_addedToStageHandler)
HXDLIN( 734)		this->addStageEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_addedToStageHandler,(void))

void EdgePuller_obj::edgePuller_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_737_edgePuller_target_removedFromStageHandler)
HXLINE( 738)		this->removeStageEvents();
HXLINE( 739)		this->cleanupAfterDrag();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_removedFromStageHandler,(void))

void EdgePuller_obj::edgePuller_target_touchBeginCaptureHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_742_edgePuller_target_touchBeginCaptureHandler)
HXLINE( 743)		if (!(this->_active)) {
HXLINE( 744)			return;
            		}
HXLINE( 746)		event->stopImmediatePropagation();
HXLINE( 747)		this->edgePuller_target_touchBeginHandler(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_touchBeginCaptureHandler,(void))

void EdgePuller_obj::edgePuller_target_touchBeginHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_750_edgePuller_target_touchBeginHandler)
HXLINE( 751)		bool _hx_tmp;
HXDLIN( 751)		if (this->simulateTouch) {
HXLINE( 751)			_hx_tmp = event->isPrimaryTouchPoint;
            		}
            		else {
HXLINE( 751)			_hx_tmp = false;
            		}
HXDLIN( 751)		if (_hx_tmp) {
HXLINE( 753)			return;
            		}
HXLINE( 755)		this->touchBegin(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_touchBeginHandler,(void))

void EdgePuller_obj::edgePuller_target_mouseDownCaptureHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_758_edgePuller_target_mouseDownCaptureHandler)
HXLINE( 759)		if (!(this->_active)) {
HXLINE( 760)			return;
            		}
HXLINE( 762)		event->stopImmediatePropagation();
HXLINE( 763)		this->edgePuller_target_mouseDownHandler(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_mouseDownCaptureHandler,(void))

void EdgePuller_obj::edgePuller_target_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_766_edgePuller_target_mouseDownHandler)
HXLINE( 767)		if (this->_opened) {
HXLINE( 768)			return;
            		}
HXLINE( 770)		 ::openfl::display::Stage stage = this->_target->stage;
HXLINE( 771)		if (::hx::IsNull( stage )) {
HXLINE( 772)			return;
            		}
HXLINE( 774)		Float _hx_tmp = stage->get_mouseX();
HXDLIN( 774)		this->touchBegin(::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,true,_hx_tmp,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_mouseDownHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_touchMoveHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_778_edgePuller_target_stage_touchMoveHandler)
HXDLIN( 778)		this->touchMove(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_touchMoveHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_781_edgePuller_target_stage_mouseMoveHandler)
HXLINE( 782)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 783)		Float _hx_tmp = stage->get_mouseX();
HXDLIN( 783)		this->touchMove(::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,true,_hx_tmp,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_mouseMoveHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_touchEndHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_787_edgePuller_target_stage_touchEndHandler)
HXDLIN( 787)		this->touchEnd(event->touchPointID,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_touchEndHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_791_edgePuller_target_stage_mouseUpHandler)
HXDLIN( 791)		this->touchEnd(::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_mouseUpHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_touchBeginHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_794_edgePuller_target_stage_touchBeginHandler)
HXLINE( 795)		bool _hx_tmp;
HXDLIN( 795)		bool _hx_tmp1;
HXDLIN( 795)		if (this->_opened) {
HXLINE( 795)			_hx_tmp1 = !(this->enabled);
            		}
            		else {
HXLINE( 795)			_hx_tmp1 = true;
            		}
HXDLIN( 795)		if (!(_hx_tmp1)) {
HXLINE( 795)			_hx_tmp = ::hx::IsNotNull( this->_touchPointID );
            		}
            		else {
HXLINE( 795)			_hx_tmp = true;
            		}
HXDLIN( 795)		if (_hx_tmp) {
HXLINE( 796)			return;
            		}
HXLINE( 798)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 799)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 800)		if (!(this->isInActiveBorder(event->stageX,event->stageY,maxPullDistance))) {
HXLINE( 801)			this->_touchPointID = event->touchPointID;
HXLINE( 802)			stage->addEventListener(HX_("touchMove",70,72,cd,0d),this->edgePuller_target_stage_touchMoveHandler2_dyn(),false,0,true);
HXLINE( 803)			stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->edgePuller_target_stage_touchEndHandler2_dyn(),false,0,true);
HXLINE( 804)			return;
            		}
HXLINE( 806)		this->touchBegin(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_touchBeginHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_touchMoveHandler2( ::openfl::events::TouchEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_809_edgePuller_target_stage_touchMoveHandler2)
HXLINE( 810)		bool _hx_tmp;
HXDLIN( 810)		if (::hx::IsNotNull( this->_touchPointID )) {
HXLINE( 810)			_hx_tmp = ::hx::IsNotEq( event->touchPointID,this->_touchPointID );
            		}
            		else {
HXLINE( 810)			_hx_tmp = true;
            		}
HXDLIN( 810)		if (_hx_tmp) {
HXLINE( 811)			return;
            		}
HXLINE( 813)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 814)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 815)		 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,event->stageX,event->stageY);
HXLINE( 816)		point = this->_target->globalToLocal(point);
HXLINE( 817)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 819)				bool _hx_tmp;
HXDLIN( 819)				if (!((point->y > maxPullDistance))) {
HXLINE( 819)					_hx_tmp = (point->y < ((Float)0.0));
            				}
            				else {
HXLINE( 819)					_hx_tmp = true;
            				}
HXDLIN( 819)				if (_hx_tmp) {
HXLINE( 820)					return;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 823)				bool _hx_tmp;
HXDLIN( 823)				Float point1 = point->x;
HXDLIN( 823)				if (!((point1 < (this->_target->get_width() - maxPullDistance)))) {
HXLINE( 823)					Float point1 = point->x;
HXDLIN( 823)					_hx_tmp = (point1 > this->_target->get_width());
            				}
            				else {
HXLINE( 823)					_hx_tmp = true;
            				}
HXDLIN( 823)				if (_hx_tmp) {
HXLINE( 824)					return;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 827)				bool _hx_tmp;
HXDLIN( 827)				Float point1 = point->y;
HXDLIN( 827)				if (!((point1 < (this->_target->get_height() - maxPullDistance)))) {
HXLINE( 827)					Float point1 = point->y;
HXDLIN( 827)					_hx_tmp = (point1 > this->_target->get_height());
            				}
            				else {
HXLINE( 827)					_hx_tmp = true;
            				}
HXDLIN( 827)				if (_hx_tmp) {
HXLINE( 828)					return;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 831)				bool _hx_tmp;
HXDLIN( 831)				if (!((point->x > maxPullDistance))) {
HXLINE( 831)					_hx_tmp = (point->x < ((Float)0.0));
            				}
            				else {
HXLINE( 831)					_hx_tmp = true;
            				}
HXDLIN( 831)				if (_hx_tmp) {
HXLINE( 832)					return;
            				}
            			}
            			break;
            			default:{
HXLINE( 835)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 837)		stage->removeEventListener(HX_("touchMove",70,72,cd,0d),this->edgePuller_target_stage_touchMoveHandler2_dyn(),null());
HXLINE( 838)		stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->edgePuller_target_stage_touchEndHandler2_dyn(),null());
HXLINE( 839)		this->_touchPointID = null();
HXLINE( 840)		this->_touchPointIsSimulated = false;
HXLINE( 841)		this->touchBegin(event->touchPointID,false,event->stageX,event->stageY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_touchMoveHandler2,(void))

void EdgePuller_obj::edgePuller_target_stage_touchEndHandler2( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_844_edgePuller_target_stage_touchEndHandler2)
HXLINE( 845)		bool _hx_tmp;
HXDLIN( 845)		if (::hx::IsNotNull( this->_touchPointID )) {
HXLINE( 845)			_hx_tmp = ::hx::IsNotEq( event->touchPointID,this->_touchPointID );
            		}
            		else {
HXLINE( 845)			_hx_tmp = true;
            		}
HXDLIN( 845)		if (_hx_tmp) {
HXLINE( 846)			return;
            		}
HXLINE( 848)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 849)		stage->removeEventListener(HX_("touchMove",70,72,cd,0d),this->edgePuller_target_stage_touchMoveHandler2_dyn(),null());
HXLINE( 850)		stage->removeEventListener(HX_("touchEnd",5c,c5,09,00),this->edgePuller_target_stage_touchEndHandler2_dyn(),null());
HXLINE( 851)		this->_touchPointID = null();
HXLINE( 852)		this->_touchPointIsSimulated = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_touchEndHandler2,(void))

void EdgePuller_obj::edgePuller_target_stage_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_855_edgePuller_target_stage_mouseDownHandler)
HXLINE( 856)		bool _hx_tmp;
HXDLIN( 856)		bool _hx_tmp1;
HXDLIN( 856)		bool _hx_tmp2;
HXDLIN( 856)		if (this->_opened) {
HXLINE( 856)			_hx_tmp2 = !(this->enabled);
            		}
            		else {
HXLINE( 856)			_hx_tmp2 = true;
            		}
HXDLIN( 856)		if (!(_hx_tmp2)) {
HXLINE( 856)			_hx_tmp1 = ::hx::IsNotNull( this->_touchPointID );
            		}
            		else {
HXLINE( 856)			_hx_tmp1 = true;
            		}
HXDLIN( 856)		if (!(_hx_tmp1)) {
HXLINE( 856)			_hx_tmp = !(this->simulateTouch);
            		}
            		else {
HXLINE( 856)			_hx_tmp = true;
            		}
HXDLIN( 856)		if (_hx_tmp) {
HXLINE( 857)			return;
            		}
HXLINE( 859)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 860)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 861)		Float _hx_tmp3 = stage->get_mouseX();
HXDLIN( 861)		if (!(this->isInActiveBorder(_hx_tmp3,stage->get_mouseY(),maxPullDistance))) {
HXLINE( 862)			this->_touchPointID = ::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE;
HXLINE( 863)			this->_touchPointIsSimulated = true;
HXLINE( 864)			stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->edgePuller_target_stage_mouseMoveHandler2_dyn(),false,0,true);
HXLINE( 865)			stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->edgePuller_target_stage_mouseUpHandler2_dyn(),false,0,true);
HXLINE( 866)			return;
            		}
HXLINE( 868)		Float _hx_tmp4 = stage->get_mouseX();
HXDLIN( 868)		this->touchBegin(::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,true,_hx_tmp4,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_mouseDownHandler,(void))

void EdgePuller_obj::edgePuller_target_stage_mouseMoveHandler2( ::openfl::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_871_edgePuller_target_stage_mouseMoveHandler2)
HXLINE( 872)		bool _hx_tmp;
HXDLIN( 872)		bool _hx_tmp1;
HXDLIN( 872)		if (this->_touchPointIsSimulated) {
HXLINE( 872)			_hx_tmp1 = ::hx::IsNull( this->_touchPointID );
            		}
            		else {
HXLINE( 872)			_hx_tmp1 = true;
            		}
HXDLIN( 872)		if (!(_hx_tmp1)) {
HXLINE( 872)			_hx_tmp = ::hx::IsNotEq( ::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,this->_touchPointID );
            		}
            		else {
HXLINE( 872)			_hx_tmp = true;
            		}
HXDLIN( 872)		if (_hx_tmp) {
HXLINE( 873)			return;
            		}
HXLINE( 875)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 876)		Float maxPullDistance = this->getMaxPullDistance();
HXLINE( 877)		Float point = stage->get_mouseX();
HXDLIN( 877)		 ::openfl::geom::Point point1 =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,point,stage->get_mouseY());
HXLINE( 878)		point1 = this->_target->globalToLocal(point1);
HXLINE( 879)		switch((int)(this->_pullableEdge->_hx_getIndex())){
            			case (int)0: {
HXLINE( 881)				bool _hx_tmp;
HXDLIN( 881)				if (!((point1->y > maxPullDistance))) {
HXLINE( 881)					_hx_tmp = (point1->y < ((Float)0.0));
            				}
            				else {
HXLINE( 881)					_hx_tmp = true;
            				}
HXDLIN( 881)				if (_hx_tmp) {
HXLINE( 882)					return;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 885)				bool _hx_tmp;
HXDLIN( 885)				Float point = point1->x;
HXDLIN( 885)				if (!((point < (this->_target->get_width() - maxPullDistance)))) {
HXLINE( 885)					Float point = point1->x;
HXDLIN( 885)					_hx_tmp = (point > this->_target->get_width());
            				}
            				else {
HXLINE( 885)					_hx_tmp = true;
            				}
HXDLIN( 885)				if (_hx_tmp) {
HXLINE( 886)					return;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 889)				bool _hx_tmp;
HXDLIN( 889)				Float point = point1->y;
HXDLIN( 889)				if (!((point < (this->_target->get_height() - maxPullDistance)))) {
HXLINE( 889)					Float point = point1->y;
HXDLIN( 889)					_hx_tmp = (point > this->_target->get_height());
            				}
            				else {
HXLINE( 889)					_hx_tmp = true;
            				}
HXDLIN( 889)				if (_hx_tmp) {
HXLINE( 890)					return;
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 893)				bool _hx_tmp;
HXDLIN( 893)				if (!((point1->x > maxPullDistance))) {
HXLINE( 893)					_hx_tmp = (point1->x < ((Float)0.0));
            				}
            				else {
HXLINE( 893)					_hx_tmp = true;
            				}
HXDLIN( 893)				if (_hx_tmp) {
HXLINE( 894)					return;
            				}
            			}
            			break;
            			default:{
HXLINE( 897)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown pullable edge position: ",c7,03,ec,0f) + ::Std_obj::string(this->_pullableEdge))));
            			}
            		}
HXLINE( 899)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->edgePuller_target_stage_mouseMoveHandler2_dyn(),null());
HXLINE( 900)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->edgePuller_target_stage_mouseUpHandler2_dyn(),null());
HXLINE( 901)		this->_touchPointID = null();
HXLINE( 902)		this->_touchPointIsSimulated = false;
HXLINE( 903)		Float _hx_tmp2 = stage->get_mouseX();
HXDLIN( 903)		this->touchBegin(::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,true,_hx_tmp2,stage->get_mouseY());
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_mouseMoveHandler2,(void))

void EdgePuller_obj::edgePuller_target_stage_mouseUpHandler2( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_906_edgePuller_target_stage_mouseUpHandler2)
HXLINE( 907)		bool _hx_tmp;
HXDLIN( 907)		bool _hx_tmp1;
HXDLIN( 907)		if (this->_touchPointIsSimulated) {
HXLINE( 907)			_hx_tmp1 = ::hx::IsNull( this->_touchPointID );
            		}
            		else {
HXLINE( 907)			_hx_tmp1 = true;
            		}
HXDLIN( 907)		if (!(_hx_tmp1)) {
HXLINE( 907)			_hx_tmp = ::hx::IsNotEq( ::feathers::utils::EdgePuller_obj::POINTER_ID_MOUSE,this->_touchPointID );
            		}
            		else {
HXLINE( 907)			_hx_tmp = true;
            		}
HXDLIN( 907)		if (_hx_tmp) {
HXLINE( 908)			return;
            		}
HXLINE( 910)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 911)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->edgePuller_target_stage_mouseMoveHandler2_dyn(),null());
HXLINE( 912)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->edgePuller_target_stage_mouseUpHandler2_dyn(),null());
HXLINE( 913)		this->_touchPointID = null();
HXLINE( 914)		this->_touchPointIsSimulated = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EdgePuller_obj,edgePuller_target_stage_mouseUpHandler2,(void))

Float EdgePuller_obj::MINIMUM_VELOCITY;

int EdgePuller_obj::POINTER_ID_MOUSE;


::hx::ObjectPtr< EdgePuller_obj > EdgePuller_obj::__new( ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance) {
	::hx::ObjectPtr< EdgePuller_obj > __this = new EdgePuller_obj();
	__this->__construct(target,__o_pullableEdge,maxPullDistance);
	return __this;
}

::hx::ObjectPtr< EdgePuller_obj > EdgePuller_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::feathers::layout::RelativePosition __o_pullableEdge, ::Dynamic maxPullDistance) {
	EdgePuller_obj *__this = (EdgePuller_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EdgePuller_obj), true, "feathers.utils.EdgePuller"));
	*(void **)__this = EdgePuller_obj::_hx_vtable;
	__this->__construct(target,__o_pullableEdge,maxPullDistance);
	return __this;
}

EdgePuller_obj::EdgePuller_obj()
{
}

void EdgePuller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EdgePuller);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(_active,"_active");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(minDragDistance,"minDragDistance");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(simulateTouch,"simulateTouch");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_maxPullDistance,"_maxPullDistance");
	HX_MARK_MEMBER_NAME(_pullDistance,"_pullDistance");
	HX_MARK_MEMBER_NAME(_activeBorderSize,"_activeBorderSize");
	HX_MARK_MEMBER_NAME(_pullableEdge,"_pullableEdge");
	HX_MARK_MEMBER_NAME(_pendingOpened,"_pendingOpened");
	HX_MARK_MEMBER_NAME(_opened,"_opened");
	HX_MARK_MEMBER_NAME(_snapDuration,"_snapDuration");
	HX_MARK_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_MARK_MEMBER_NAME(_touchPointIsSimulated,"_touchPointIsSimulated");
	HX_MARK_MEMBER_NAME(_restoreMouseChildren,"_restoreMouseChildren");
	HX_MARK_MEMBER_NAME(_startTouch,"_startTouch");
	HX_MARK_MEMBER_NAME(_startPullDistance,"_startPullDistance");
	HX_MARK_MEMBER_NAME(_targetPullDistance,"_targetPullDistance");
	HX_MARK_MEMBER_NAME(_savedTouchMoves,"_savedTouchMoves");
	HX_MARK_MEMBER_NAME(_animatePull,"_animatePull");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EdgePuller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(_active,"_active");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(minDragDistance,"minDragDistance");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(simulateTouch,"simulateTouch");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_maxPullDistance,"_maxPullDistance");
	HX_VISIT_MEMBER_NAME(_pullDistance,"_pullDistance");
	HX_VISIT_MEMBER_NAME(_activeBorderSize,"_activeBorderSize");
	HX_VISIT_MEMBER_NAME(_pullableEdge,"_pullableEdge");
	HX_VISIT_MEMBER_NAME(_pendingOpened,"_pendingOpened");
	HX_VISIT_MEMBER_NAME(_opened,"_opened");
	HX_VISIT_MEMBER_NAME(_snapDuration,"_snapDuration");
	HX_VISIT_MEMBER_NAME(_touchPointID,"_touchPointID");
	HX_VISIT_MEMBER_NAME(_touchPointIsSimulated,"_touchPointIsSimulated");
	HX_VISIT_MEMBER_NAME(_restoreMouseChildren,"_restoreMouseChildren");
	HX_VISIT_MEMBER_NAME(_startTouch,"_startTouch");
	HX_VISIT_MEMBER_NAME(_startPullDistance,"_startPullDistance");
	HX_VISIT_MEMBER_NAME(_targetPullDistance,"_targetPullDistance");
	HX_VISIT_MEMBER_NAME(_savedTouchMoves,"_savedTouchMoves");
	HX_VISIT_MEMBER_NAME(_animatePull,"_animatePull");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EdgePuller_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_active() ); }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		if (HX_FIELD_EQ(inName,"opened") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_opened() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"_active") ) { return ::hx::Val( _active ); }
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"_opened") ) { return ::hx::Val( _opened ); }
		if (HX_FIELD_EQ(inName,"throwTo") ) { return ::hx::Val( throwTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragging") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dragging() ); }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { return ::hx::Val( touchEnd_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return ::hx::Val( _dragging ); }
		if (HX_FIELD_EQ(inName,"setOpened") ) { return ::hx::Val( setOpened_dyn() ); }
		if (HX_FIELD_EQ(inName,"touchMove") ) { return ::hx::Val( touchMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"startPull") ) { return ::hx::Val( startPull_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_active") ) { return ::hx::Val( get_active_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_opened") ) { return ::hx::Val( get_opened_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_opened") ) { return ::hx::Val( set_opened_dyn() ); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return ::hx::Val( touchBegin_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startTouch") ) { return ::hx::Val( _startTouch ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_dragging") ) { return ::hx::Val( get_dragging_dyn() ); }
		if (HX_FIELD_EQ(inName,"pullDistance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pullDistance() ); }
		if (HX_FIELD_EQ(inName,"pullableEdge") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pullableEdge() ); }
		if (HX_FIELD_EQ(inName,"snapDuration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_snapDuration() ); }
		if (HX_FIELD_EQ(inName,"touchPointID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPointID() ); }
		if (HX_FIELD_EQ(inName,"_animatePull") ) { return ::hx::Val( _animatePull ); }
		if (HX_FIELD_EQ(inName,"checkMinDrag") ) { return ::hx::Val( checkMinDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"completeDrag") ) { return ::hx::Val( completeDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"completePull") ) { return ::hx::Val( completePull_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { return ::hx::Val( simulateTouch ); }
		if (HX_FIELD_EQ(inName,"_pullDistance") ) { return ::hx::Val( _pullDistance ); }
		if (HX_FIELD_EQ(inName,"_pullableEdge") ) { return ::hx::Val( _pullableEdge ); }
		if (HX_FIELD_EQ(inName,"_snapDuration") ) { return ::hx::Val( _snapDuration ); }
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { return ::hx::Val( _touchPointID ); }
		if (HX_FIELD_EQ(inName,"getTouchScale") ) { return ::hx::Val( getTouchScale_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pendingOpened") ) { return ::hx::Val( _pendingOpened ); }
		if (HX_FIELD_EQ(inName,"addStageEvents") ) { return ::hx::Val( addStageEvents_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minDragDistance") ) { return ::hx::Val( minDragDistance ); }
		if (HX_FIELD_EQ(inName,"maxPullDistance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxPullDistance() ); }
		if (HX_FIELD_EQ(inName,"setPullDistance") ) { return ::hx::Val( setPullDistance_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxPullDistance") ) { return ::hx::Val( _maxPullDistance ); }
		if (HX_FIELD_EQ(inName,"get_pullDistance") ) { return ::hx::Val( get_pullDistance_dyn() ); }
		if (HX_FIELD_EQ(inName,"activeBorderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeBorderSize() ); }
		if (HX_FIELD_EQ(inName,"get_pullableEdge") ) { return ::hx::Val( get_pullableEdge_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pullableEdge") ) { return ::hx::Val( set_pullableEdge_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_snapDuration") ) { return ::hx::Val( get_snapDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_snapDuration") ) { return ::hx::Val( set_snapDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return ::hx::Val( get_touchPointID_dyn() ); }
		if (HX_FIELD_EQ(inName,"_savedTouchMoves") ) { return ::hx::Val( _savedTouchMoves ); }
		if (HX_FIELD_EQ(inName,"getTouchPosition") ) { return ::hx::Val( getTouchPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"isInActiveBorder") ) { return ::hx::Val( isInActiveBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupAfterDrag") ) { return ::hx::Val( cleanupAfterDrag_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_activeBorderSize") ) { return ::hx::Val( _activeBorderSize ); }
		if (HX_FIELD_EQ(inName,"removeStageEvents") ) { return ::hx::Val( removeStageEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"throwWithVelocity") ) { return ::hx::Val( throwWithVelocity_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_startPullDistance") ) { return ::hx::Val( _startPullDistance ); }
		if (HX_FIELD_EQ(inName,"getMaxPullDistance") ) { return ::hx::Val( getMaxPullDistance_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_maxPullDistance") ) { return ::hx::Val( get_maxPullDistance_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxPullDistance") ) { return ::hx::Val( set_maxPullDistance_dyn() ); }
		if (HX_FIELD_EQ(inName,"_targetPullDistance") ) { return ::hx::Val( _targetPullDistance ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_activeBorderSize") ) { return ::hx::Val( get_activeBorderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_activeBorderSize") ) { return ::hx::Val( set_activeBorderSize_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"touchPointIsSimulated") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_touchPointIsSimulated() ); }
		if (HX_FIELD_EQ(inName,"_restoreMouseChildren") ) { return ::hx::Val( _restoreMouseChildren ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_touchPointIsSimulated") ) { return ::hx::Val( _touchPointIsSimulated ); }
		if (HX_FIELD_EQ(inName,"animatePull_onComplete") ) { return ::hx::Val( animatePull_onComplete_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_touchPointIsSimulated") ) { return ::hx::Val( get_touchPointIsSimulated_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"edgePuller_target_mouseDownHandler") ) { return ::hx::Val( edgePuller_target_mouseDownHandler_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"edgePuller_target_touchBeginHandler") ) { return ::hx::Val( edgePuller_target_touchBeginHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"edgePuller_target_addedToStageHandler") ) { return ::hx::Val( edgePuller_target_addedToStageHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_mouseUpHandler") ) { return ::hx::Val( edgePuller_target_stage_mouseUpHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_touchEndHandler") ) { return ::hx::Val( edgePuller_target_stage_touchEndHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_mouseUpHandler2") ) { return ::hx::Val( edgePuller_target_stage_mouseUpHandler2_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_touchMoveHandler") ) { return ::hx::Val( edgePuller_target_stage_touchMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_mouseMoveHandler") ) { return ::hx::Val( edgePuller_target_stage_mouseMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_touchEndHandler2") ) { return ::hx::Val( edgePuller_target_stage_touchEndHandler2_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_mouseDownHandler") ) { return ::hx::Val( edgePuller_target_stage_mouseDownHandler_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"edgePuller_target_removedFromStageHandler") ) { return ::hx::Val( edgePuller_target_removedFromStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_mouseDownCaptureHandler") ) { return ::hx::Val( edgePuller_target_mouseDownCaptureHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_touchBeginHandler") ) { return ::hx::Val( edgePuller_target_stage_touchBeginHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_touchMoveHandler2") ) { return ::hx::Val( edgePuller_target_stage_touchMoveHandler2_dyn() ); }
		if (HX_FIELD_EQ(inName,"edgePuller_target_stage_mouseMoveHandler2") ) { return ::hx::Val( edgePuller_target_stage_mouseMoveHandler2_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"edgePuller_target_touchBeginCaptureHandler") ) { return ::hx::Val( edgePuller_target_touchBeginCaptureHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool EdgePuller_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MINIMUM_VELOCITY") ) { outValue = ( MINIMUM_VELOCITY ); return true; }
		if (HX_FIELD_EQ(inName,"POINTER_ID_MOUSE") ) { outValue = ( POINTER_ID_MOUSE ); return true; }
	}
	return false;
}

::hx::Val EdgePuller_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		if (HX_FIELD_EQ(inName,"opened") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_opened(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_active") ) { _active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opened") ) { _opened=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_startTouch") ) { _startTouch=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pullableEdge") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pullableEdge(inValue.Cast<  ::feathers::layout::RelativePosition >()) ); }
		if (HX_FIELD_EQ(inName,"snapDuration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_snapDuration(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_animatePull") ) { _animatePull=inValue.Cast<  ::motion::actuators::SimpleActuator >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { simulateTouch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pullDistance") ) { _pullDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pullableEdge") ) { _pullableEdge=inValue.Cast<  ::feathers::layout::RelativePosition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapDuration") ) { _snapDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchPointID") ) { _touchPointID=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pendingOpened") ) { _pendingOpened=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"minDragDistance") ) { minDragDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxPullDistance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxPullDistance(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_maxPullDistance") ) { _maxPullDistance=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeBorderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_activeBorderSize(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_savedTouchMoves") ) { _savedTouchMoves=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_activeBorderSize") ) { _activeBorderSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_startPullDistance") ) { _startPullDistance=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_targetPullDistance") ) { _targetPullDistance=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_restoreMouseChildren") ) { _restoreMouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_touchPointIsSimulated") ) { _touchPointIsSimulated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EdgePuller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"MINIMUM_VELOCITY") ) { MINIMUM_VELOCITY=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"POINTER_ID_MOUSE") ) { POINTER_ID_MOUSE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void EdgePuller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("_active",65,53,bd,84));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("_dragging",2e,34,22,7f));
	outFields->push(HX_("dragging",cf,3c,8c,37));
	outFields->push(HX_("minDragDistance",fb,ff,d8,1b));
	outFields->push(HX_("ease",ee,8b,0c,43));
	outFields->push(HX_("simulateTouch",7b,1d,d4,98));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_maxPullDistance",5f,27,51,a4));
	outFields->push(HX_("maxPullDistance",de,e4,71,b9));
	outFields->push(HX_("_pullDistance",f9,ba,c3,ee));
	outFields->push(HX_("pullDistance",1a,28,55,0c));
	outFields->push(HX_("_activeBorderSize",92,67,22,a5));
	outFields->push(HX_("activeBorderSize",33,79,a7,0c));
	outFields->push(HX_("_pullableEdge",9b,a2,58,c4));
	outFields->push(HX_("pullableEdge",bc,0f,ea,e1));
	outFields->push(HX_("_pendingOpened",a1,ba,b4,59));
	outFields->push(HX_("_opened",48,74,0b,90));
	outFields->push(HX_("opened",a9,62,94,21));
	outFields->push(HX_("_snapDuration",9d,0e,14,df));
	outFields->push(HX_("snapDuration",be,7b,a5,fc));
	outFields->push(HX_("_touchPointID",0b,51,f2,5d));
	outFields->push(HX_("touchPointID",2c,be,83,7b));
	outFields->push(HX_("_touchPointIsSimulated",a6,0f,b2,3a));
	outFields->push(HX_("touchPointIsSimulated",65,76,a4,e1));
	outFields->push(HX_("_restoreMouseChildren",35,12,a1,6a));
	outFields->push(HX_("_startTouch",1c,bd,d3,02));
	outFields->push(HX_("_startPullDistance",5d,98,96,7c));
	outFields->push(HX_("_targetPullDistance",2a,21,37,b6));
	outFields->push(HX_("_savedTouchMoves",eb,4f,5e,06));
	outFields->push(HX_("_animatePull",07,25,89,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EdgePuller_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,_active),HX_("_active",65,53,bd,84)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,_dragging),HX_("_dragging",2e,34,22,7f)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,minDragDistance),HX_("minDragDistance",fb,ff,d8,1b)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(EdgePuller_obj,ease),HX_("ease",ee,8b,0c,43)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,simulateTouch),HX_("simulateTouch",7b,1d,d4,98)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(EdgePuller_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EdgePuller_obj,_maxPullDistance),HX_("_maxPullDistance",5f,27,51,a4)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,_pullDistance),HX_("_pullDistance",f9,ba,c3,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EdgePuller_obj,_activeBorderSize),HX_("_activeBorderSize",92,67,22,a5)},
	{::hx::fsObject /*  ::feathers::layout::RelativePosition */ ,(int)offsetof(EdgePuller_obj,_pullableEdge),HX_("_pullableEdge",9b,a2,58,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EdgePuller_obj,_pendingOpened),HX_("_pendingOpened",a1,ba,b4,59)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,_opened),HX_("_opened",48,74,0b,90)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,_snapDuration),HX_("_snapDuration",9d,0e,14,df)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EdgePuller_obj,_touchPointID),HX_("_touchPointID",0b,51,f2,5d)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,_touchPointIsSimulated),HX_("_touchPointIsSimulated",a6,0f,b2,3a)},
	{::hx::fsBool,(int)offsetof(EdgePuller_obj,_restoreMouseChildren),HX_("_restoreMouseChildren",35,12,a1,6a)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,_startTouch),HX_("_startTouch",1c,bd,d3,02)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,_startPullDistance),HX_("_startPullDistance",5d,98,96,7c)},
	{::hx::fsFloat,(int)offsetof(EdgePuller_obj,_targetPullDistance),HX_("_targetPullDistance",2a,21,37,b6)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(EdgePuller_obj,_savedTouchMoves),HX_("_savedTouchMoves",eb,4f,5e,06)},
	{::hx::fsObject /*  ::motion::actuators::SimpleActuator */ ,(int)offsetof(EdgePuller_obj,_animatePull),HX_("_animatePull",07,25,89,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo EdgePuller_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &EdgePuller_obj::MINIMUM_VELOCITY,HX_("MINIMUM_VELOCITY",0e,4a,dd,c0)},
	{::hx::fsInt,(void *) &EdgePuller_obj::POINTER_ID_MOUSE,HX_("POINTER_ID_MOUSE",83,12,4a,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String EdgePuller_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("_active",65,53,bd,84),
	HX_("get_active",8f,b1,cd,06),
	HX_("_dragging",2e,34,22,7f),
	HX_("get_dragging",d8,f0,a5,ec),
	HX_("minDragDistance",fb,ff,d8,1b),
	HX_("ease",ee,8b,0c,43),
	HX_("simulateTouch",7b,1d,d4,98),
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_maxPullDistance",5f,27,51,a4),
	HX_("get_maxPullDistance",f5,b3,7c,44),
	HX_("set_maxPullDistance",01,a7,19,81),
	HX_("_pullDistance",f9,ba,c3,ee),
	HX_("get_pullDistance",a3,14,f4,10),
	HX_("_activeBorderSize",92,67,22,a5),
	HX_("get_activeBorderSize",3c,de,11,2b),
	HX_("set_activeBorderSize",b0,95,c9,f7),
	HX_("_pullableEdge",9b,a2,58,c4),
	HX_("get_pullableEdge",45,fc,88,e6),
	HX_("set_pullableEdge",b9,e9,ca,3c),
	HX_("_pendingOpened",a1,ba,b4,59),
	HX_("_opened",48,74,0b,90),
	HX_("get_opened",72,d2,1b,12),
	HX_("set_opened",e6,70,99,15),
	HX_("_snapDuration",9d,0e,14,df),
	HX_("get_snapDuration",47,68,44,01),
	HX_("set_snapDuration",bb,55,86,57),
	HX_("_touchPointID",0b,51,f2,5d),
	HX_("get_touchPointID",b5,aa,22,80),
	HX_("_touchPointIsSimulated",a6,0f,b2,3a),
	HX_("get_touchPointIsSimulated",bc,30,a2,e7),
	HX_("_restoreMouseChildren",35,12,a1,6a),
	HX_("_startTouch",1c,bd,d3,02),
	HX_("_startPullDistance",5d,98,96,7c),
	HX_("_targetPullDistance",2a,21,37,b6),
	HX_("_savedTouchMoves",eb,4f,5e,06),
	HX_("_animatePull",07,25,89,39),
	HX_("setOpened",eb,d7,3b,81),
	HX_("setPullDistance",dc,fa,0a,2b),
	HX_("getMaxPullDistance",e8,84,37,6c),
	HX_("getTouchPosition",12,75,8c,20),
	HX_("getTouchScale",81,0e,d2,ce),
	HX_("isInActiveBorder",61,3c,34,a8),
	HX_("checkMinDrag",be,52,00,21),
	HX_("touchBegin",ea,cd,e6,a9),
	HX_("touchMove",70,72,cd,0d),
	HX_("touchEnd",5c,c5,09,00),
	HX_("startPull",47,85,54,03),
	HX_("completeDrag",4d,a9,32,b6),
	HX_("completePull",1e,89,23,be),
	HX_("addStageEvents",d6,d7,3a,bf),
	HX_("removeStageEvents",93,6a,b4,e3),
	HX_("cleanupAfterDrag",6c,2b,b7,c8),
	HX_("throwWithVelocity",89,74,83,6f),
	HX_("throwTo",41,bc,3e,5a),
	HX_("animatePull_onComplete",d1,1c,5b,25),
	HX_("edgePuller_target_addedToStageHandler",69,32,a5,82),
	HX_("edgePuller_target_removedFromStageHandler",b8,a8,40,af),
	HX_("edgePuller_target_touchBeginCaptureHandler",6c,91,34,7f),
	HX_("edgePuller_target_touchBeginHandler",42,81,e9,32),
	HX_("edgePuller_target_mouseDownCaptureHandler",2d,c3,52,86),
	HX_("edgePuller_target_mouseDownHandler",61,21,5b,a0),
	HX_("edgePuller_target_stage_touchMoveHandler",99,ab,df,2a),
	HX_("edgePuller_target_stage_mouseMoveHandler",f3,1a,58,4f),
	HX_("edgePuller_target_stage_touchEndHandler",4f,0e,1c,9f),
	HX_("edgePuller_target_stage_mouseUpHandler",69,12,55,76),
	HX_("edgePuller_target_stage_touchBeginHandler",c1,35,53,7c),
	HX_("edgePuller_target_stage_touchMoveHandler2",79,7a,d6,58),
	HX_("edgePuller_target_stage_touchEndHandler2",03,77,70,99),
	HX_("edgePuller_target_stage_mouseDownHandler",c2,c1,3d,9d),
	HX_("edgePuller_target_stage_mouseMoveHandler2",df,79,bf,1d),
	HX_("edgePuller_target_stage_mouseUpHandler2",a9,09,1b,14),
	::String(null()) };

static void EdgePuller_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EdgePuller_obj::MINIMUM_VELOCITY,"MINIMUM_VELOCITY");
	HX_MARK_MEMBER_NAME(EdgePuller_obj::POINTER_ID_MOUSE,"POINTER_ID_MOUSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EdgePuller_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EdgePuller_obj::MINIMUM_VELOCITY,"MINIMUM_VELOCITY");
	HX_VISIT_MEMBER_NAME(EdgePuller_obj::POINTER_ID_MOUSE,"POINTER_ID_MOUSE");
};

#endif

::hx::Class EdgePuller_obj::__mClass;

static ::String EdgePuller_obj_sStaticFields[] = {
	HX_("MINIMUM_VELOCITY",0e,4a,dd,c0),
	HX_("POINTER_ID_MOUSE",83,12,4a,0c),
	::String(null())
};

void EdgePuller_obj::__register()
{
	EdgePuller_obj _hx_dummy;
	EdgePuller_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.EdgePuller",0a,5c,8b,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EdgePuller_obj::__GetStatic;
	__mClass->mSetStaticField = &EdgePuller_obj::__SetStatic;
	__mClass->mMarkFunc = EdgePuller_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EdgePuller_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EdgePuller_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EdgePuller_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EdgePuller_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EdgePuller_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EdgePuller_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EdgePuller_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_60_boot)
HXDLIN(  60)		MINIMUM_VELOCITY = ((Float)0.02);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3cdf8e029ad100d8_63_boot)
HXDLIN(  63)		POINTER_ID_MOUSE = -1000;
            	}
}

} // end namespace feathers
} // end namespace utils
