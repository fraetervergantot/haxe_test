#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManager
#include <feathers/core/IFocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidationQueue
#include <feathers/core/ValidationQueue.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_TransitionEvent
#include <feathers/events/TransitionEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_NoOpEffectContext
#include <feathers/motion/effects/NoOpEffectContext.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9fa22fe7890299d6_57_new,"feathers.controls.navigators.BaseNavigator","new",0xcb570020,"feathers.controls.navigators.BaseNavigator.new","feathers/controls/navigators/BaseNavigator.hx",57,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_79_get_activeItemID,"feathers.controls.navigators.BaseNavigator","get_activeItemID",0x912de2dd,"feathers.controls.navigators.BaseNavigator.get_activeItemID","feathers/controls/navigators/BaseNavigator.hx",79,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_93_get_activeItemView,"feathers.controls.navigators.BaseNavigator","get_activeItemView",0xab464607,"feathers.controls.navigators.BaseNavigator.get_activeItemView","feathers/controls/navigators/BaseNavigator.hx",93,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_107_get_transitionActive,"feathers.controls.navigators.BaseNavigator","get_transitionActive",0x3b059e84,"feathers.controls.navigators.BaseNavigator.get_transitionActive","feathers/controls/navigators/BaseNavigator.hx",107,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_112_get_tabEnabled,"feathers.controls.navigators.BaseNavigator","get_tabEnabled",0x888de735,"feathers.controls.navigators.BaseNavigator.get_tabEnabled","feathers/controls/navigators/BaseNavigator.hx",112,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_123_get_childFocusEnabled,"feathers.controls.navigators.BaseNavigator","get_childFocusEnabled",0x1f6d09dc,"feathers.controls.navigators.BaseNavigator.get_childFocusEnabled","feathers/controls/navigators/BaseNavigator.hx",123,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_126_set_childFocusEnabled,"feathers.controls.navigators.BaseNavigator","set_childFocusEnabled",0x7375d7e8,"feathers.controls.navigators.BaseNavigator.set_childFocusEnabled","feathers/controls/navigators/BaseNavigator.hx",126,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_173_get_autoSizeMode,"feathers.controls.navigators.BaseNavigator","get_autoSizeMode",0x4b889c1c,"feathers.controls.navigators.BaseNavigator.get_autoSizeMode","feathers/controls/navigators/BaseNavigator.hx",173,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_176_set_autoSizeMode,"feathers.controls.navigators.BaseNavigator","set_autoSizeMode",0xa1ca8990,"feathers.controls.navigators.BaseNavigator.set_autoSizeMode","feathers/controls/navigators/BaseNavigator.hx",176,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_213_removeAllItems,"feathers.controls.navigators.BaseNavigator","removeAllItems",0x57d60fc3,"feathers.controls.navigators.BaseNavigator.removeAllItems","feathers/controls/navigators/BaseNavigator.hx",213,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_238_hasItem,"feathers.controls.navigators.BaseNavigator","hasItem",0x7fb9f54d,"feathers.controls.navigators.BaseNavigator.hasItem","feathers/controls/navigators/BaseNavigator.hx",238,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_247_getItemIDs,"feathers.controls.navigators.BaseNavigator","getItemIDs",0x42f7d74f,"feathers.controls.navigators.BaseNavigator.getItemIDs","feathers/controls/navigators/BaseNavigator.hx",247,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_257_update,"feathers.controls.navigators.BaseNavigator","update",0xcfd2ae49,"feathers.controls.navigators.BaseNavigator.update","feathers/controls/navigators/BaseNavigator.hx",257,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_268_measure,"feathers.controls.navigators.BaseNavigator","measure",0xa7a00b1e,"feathers.controls.navigators.BaseNavigator.measure","feathers/controls/navigators/BaseNavigator.hx",268,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_411_layoutContent,"feathers.controls.navigators.BaseNavigator","layoutContent",0x2365ef6f,"feathers.controls.navigators.BaseNavigator.layoutContent","feathers/controls/navigators/BaseNavigator.hx",411,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_453_getView,"feathers.controls.navigators.BaseNavigator","getView",0x8b87f1db,"feathers.controls.navigators.BaseNavigator.getView","feathers/controls/navigators/BaseNavigator.hx",453,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_463_disposeView,"feathers.controls.navigators.BaseNavigator","disposeView",0xeec40a64,"feathers.controls.navigators.BaseNavigator.disposeView","feathers/controls/navigators/BaseNavigator.hx",463,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_473_transitionComplete,"feathers.controls.navigators.BaseNavigator","transitionComplete",0x8288efae,"feathers.controls.navigators.BaseNavigator.transitionComplete","feathers/controls/navigators/BaseNavigator.hx",473,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_482_transitionCancel,"feathers.controls.navigators.BaseNavigator","transitionCancel",0x1c87c52f,"feathers.controls.navigators.BaseNavigator.transitionCancel","feathers/controls/navigators/BaseNavigator.hx",482,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_484_addItemInternal,"feathers.controls.navigators.BaseNavigator","addItemInternal",0xfddaeef1,"feathers.controls.navigators.BaseNavigator.addItemInternal","feathers/controls/navigators/BaseNavigator.hx",484,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_492_removeItemInternal,"feathers.controls.navigators.BaseNavigator","removeItemInternal",0xa4de7a14,"feathers.controls.navigators.BaseNavigator.removeItemInternal","feathers/controls/navigators/BaseNavigator.hx",492,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_511_clearFocusFromPreviousView,"feathers.controls.navigators.BaseNavigator","clearFocusFromPreviousView",0xb7feb431,"feathers.controls.navigators.BaseNavigator.clearFocusFromPreviousView","feathers/controls/navigators/BaseNavigator.hx",511,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_539_showItemInternal,"feathers.controls.navigators.BaseNavigator","showItemInternal",0xce98d44d,"feathers.controls.navigators.BaseNavigator.showItemInternal","feathers/controls/navigators/BaseNavigator.hx",539,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_603_clearActiveItemInternal,"feathers.controls.navigators.BaseNavigator","clearActiveItemInternal",0x025a5f03,"feathers.controls.navigators.BaseNavigator.clearActiveItemInternal","feathers/controls/navigators/BaseNavigator.hx",603,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_630_startTransition,"feathers.controls.navigators.BaseNavigator","startTransition",0xf7d5e457,"feathers.controls.navigators.BaseNavigator.startTransition","feathers/controls/navigators/BaseNavigator.hx",630,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_657_startWaitingTransition,"feathers.controls.navigators.BaseNavigator","startWaitingTransition",0x2b91b300,"feathers.controls.navigators.BaseNavigator.startWaitingTransition","feathers/controls/navigators/BaseNavigator.hx",657,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_674_baseNavigator_addedToStageHandler,"feathers.controls.navigators.BaseNavigator","baseNavigator_addedToStageHandler",0x57fd57ee,"feathers.controls.navigators.BaseNavigator.baseNavigator_addedToStageHandler","feathers/controls/navigators/BaseNavigator.hx",674,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_684_baseNavigator_removedFromStageHandler,"feathers.controls.navigators.BaseNavigator","baseNavigator_removedFromStageHandler",0x785a74bd,"feathers.controls.navigators.BaseNavigator.baseNavigator_removedFromStageHandler","feathers/controls/navigators/BaseNavigator.hx",684,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_689_baseNavigator_transitionWait_enterFrameHandler,"feathers.controls.navigators.BaseNavigator","baseNavigator_transitionWait_enterFrameHandler",0xddc4e599,"feathers.controls.navigators.BaseNavigator.baseNavigator_transitionWait_enterFrameHandler","feathers/controls/navigators/BaseNavigator.hx",689,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_703_baseNavigator_stage_resizeHandler,"feathers.controls.navigators.BaseNavigator","baseNavigator_stage_resizeHandler",0x6b320ffc,"feathers.controls.navigators.BaseNavigator.baseNavigator_stage_resizeHandler","feathers/controls/navigators/BaseNavigator.hx",703,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_706_activeItemView_resizeHandler,"feathers.controls.navigators.BaseNavigator","activeItemView_resizeHandler",0xfc920a35,"feathers.controls.navigators.BaseNavigator.activeItemView_resizeHandler","feathers/controls/navigators/BaseNavigator.hx",706,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_713_transition_completeHandler,"feathers.controls.navigators.BaseNavigator","transition_completeHandler",0xd6202267,"feathers.controls.navigators.BaseNavigator.transition_completeHandler","feathers/controls/navigators/BaseNavigator.hx",713,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_770_transition_cancelHandler,"feathers.controls.navigators.BaseNavigator","transition_cancelHandler",0xf4335e46,"feathers.controls.navigators.BaseNavigator.transition_cancelHandler","feathers/controls/navigators/BaseNavigator.hx",770,0xdb454971)
HX_LOCAL_STACK_FRAME(_hx_pos_9fa22fe7890299d6_59_defaultTransition,"feathers.controls.navigators.BaseNavigator","defaultTransition",0x08608576,"feathers.controls.navigators.BaseNavigator.defaultTransition","feathers/controls/navigators/BaseNavigator.hx",59,0xdb454971)
namespace feathers{
namespace controls{
namespace navigators{

void BaseNavigator_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_57_new)
HXLINE( 206)		this->leftContentOffset = ((Float)0.0);
HXLINE( 205)		this->bottomContentOffset = ((Float)0.0);
HXLINE( 204)		this->rightContentOffset = ((Float)0.0);
HXLINE( 203)		this->topContentOffset = ((Float)0.0);
HXLINE( 150)		this->_autoSizeMode = ::feathers::layout::AutoSizeMode_obj::STAGE_dyn();
HXLINE( 148)		this->_waitingForTransitionFrameCount = 0;
HXLINE( 146)		this->_waitingForDelayedTransition = false;
HXLINE( 144)		this->_clearAfterTransition = false;
HXLINE( 137)		this->_addedItems =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 136)		this->_addedItemIDs = ::Array_obj< ::String >::__new(0);
HXLINE( 135)		this->_activeViewMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,null());
HXLINE( 115)		this->_childFocusEnabled = true;
HXLINE(  63)		super::__construct();
HXLINE(  64)		this->_viewsContainer = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  65)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->baseNavigator_addedToStageHandler_dyn(),null(),null(),null());
            	}

Dynamic BaseNavigator_obj::__CreateEmpty() { return new BaseNavigator_obj; }

void *BaseNavigator_obj::_hx_vtable = 0;

Dynamic BaseNavigator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseNavigator_obj > _hx_result = new BaseNavigator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseNavigator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2035dd84) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2035dd84;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_navigators_BaseNavigator__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::navigators::BaseNavigator_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::willTrigger,
};

static ::feathers::core::IFocusContainer_obj _hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusContainer= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::navigators::BaseNavigator_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::navigators::BaseNavigator_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::showFocus,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_childFocusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_childFocusEnabled,
};

static ::feathers::core::IFocusObject_obj _hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::navigators::BaseNavigator_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::navigators::BaseNavigator_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::showFocus,
};

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::navigators::BaseNavigator_obj::set_focusManager,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::navigators::BaseNavigator_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::navigators::BaseNavigator_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::navigators::BaseNavigator_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::navigators::BaseNavigator_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::navigators::BaseNavigator_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::navigators::BaseNavigator_obj::set_visible,
};

void *BaseNavigator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_controls_navigators_BaseNavigator__hx_openfl_events_IEventDispatcher;
		case (int)0xf7aca7c3: return &_hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusContainer;
		case (int)0x701686fd: return &_hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusObject;
		case (int)0x7031642f: return &_hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IFocusManagerAware;
		case (int)0x3a979a67: return &_hx_feathers_controls_navigators_BaseNavigator__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

::String BaseNavigator_obj::get_activeItemID(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_79_get_activeItemID)
HXDLIN(  79)		return this->_activeItemID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,get_activeItemID,return )

 ::openfl::display::DisplayObject BaseNavigator_obj::get_activeItemView(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_93_get_activeItemView)
HXDLIN(  93)		return this->_activeItemView;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,get_activeItemView,return )

bool BaseNavigator_obj::get_transitionActive(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_107_get_transitionActive)
HXDLIN( 107)		return this->_transitionActive;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,get_transitionActive,return )

bool BaseNavigator_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_112_get_tabEnabled)
HXDLIN( 112)		return false;
            	}


bool BaseNavigator_obj::get_childFocusEnabled(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_123_get_childFocusEnabled)
HXDLIN( 123)		bool _hx_tmp;
HXDLIN( 123)		if (this->_enabled) {
HXDLIN( 123)			_hx_tmp = !(this->_transitionActive);
            		}
            		else {
HXDLIN( 123)			_hx_tmp = false;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXDLIN( 123)			return this->_childFocusEnabled;
            		}
            		else {
HXDLIN( 123)			return false;
            		}
HXDLIN( 123)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,get_childFocusEnabled,return )

bool BaseNavigator_obj::set_childFocusEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_126_set_childFocusEnabled)
HXLINE( 127)		if ((this->_childFocusEnabled == value)) {
HXLINE( 128)			return this->_childFocusEnabled;
            		}
HXLINE( 130)		this->_childFocusEnabled = value;
HXLINE( 131)		return this->_childFocusEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,set_childFocusEnabled,return )

 ::feathers::layout::AutoSizeMode BaseNavigator_obj::get_autoSizeMode(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_173_get_autoSizeMode)
HXDLIN( 173)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,get_autoSizeMode,return )

 ::feathers::layout::AutoSizeMode BaseNavigator_obj::set_autoSizeMode( ::feathers::layout::AutoSizeMode value){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_176_set_autoSizeMode)
HXLINE( 177)		if (::hx::IsPointerEq( this->_autoSizeMode,value )) {
HXLINE( 178)			return this->_autoSizeMode;
            		}
HXLINE( 180)		this->_autoSizeMode = value;
HXLINE( 181)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 182)		if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 183)			if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 184)				this->_activeItemView->removeEventListener(HX_("resize",f4,59,7b,08),this->activeItemView_resizeHandler_dyn(),null());
            			}
            			else {
HXLINE( 187)				this->_activeItemView->addEventListener(HX_("resize",f4,59,7b,08),this->activeItemView_resizeHandler_dyn(),null(),null(),null());
            			}
            		}
HXLINE( 190)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 191)			if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 192)				this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->baseNavigator_stage_resizeHandler_dyn(),null(),null(),null());
HXLINE( 193)				this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->baseNavigator_removedFromStageHandler_dyn(),null(),null(),null());
            			}
            			else {
HXLINE( 196)				this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->baseNavigator_stage_resizeHandler_dyn(),null());
HXLINE( 197)				this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->baseNavigator_removedFromStageHandler_dyn(),null());
            			}
            		}
HXLINE( 200)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,set_autoSizeMode,return )

void BaseNavigator_obj::removeAllItems(){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_213_removeAllItems)
HXLINE( 214)		if (this->_transitionActive) {
HXLINE( 215)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot remove all items while a transition is active.",91,a7,34,d4)));
            		}
HXLINE( 217)		if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 220)			this->clearActiveItemInternal(null());
HXLINE( 221)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("clear",8d,71,5b,48),null(),null());
            		}
HXLINE( 223)		this->_addedItems->clear();
HXLINE( 227)		this->_addedItemIDs->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,removeAllItems,(void))

bool BaseNavigator_obj::hasItem(::String id){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_238_hasItem)
HXDLIN( 238)		return this->_addedItems->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,hasItem,return )

::Array< ::String > BaseNavigator_obj::getItemIDs(::Array< ::String > result){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_247_getItemIDs)
HXLINE( 248)		if (::hx::IsNull( result )) {
HXLINE( 249)			result = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 251)		{
HXLINE( 251)			 ::Dynamic id = this->_addedItems->keys();
HXDLIN( 251)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 251)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 252)				result->push(id1);
            			}
            		}
HXLINE( 254)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,getItemIDs,return )

void BaseNavigator_obj::update(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_257_update)
HXLINE( 258)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 260)		this->topContentOffset = ((Float)0.0);
HXLINE( 261)		this->rightContentOffset = ((Float)0.0);
HXLINE( 262)		this->bottomContentOffset = ((Float)0.0);
HXLINE( 263)		this->leftContentOffset = ((Float)0.0);
HXLINE( 264)		if (this->measure()) {
HXLINE( 264)			sizeInvalid = true;
            		}
HXLINE( 265)		this->layoutContent();
            	}


bool BaseNavigator_obj::measure(){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_268_measure)
HXLINE( 269)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 270)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 271)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 272)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 273)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 274)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 275)		bool _hx_tmp;
HXDLIN( 275)		bool _hx_tmp1;
HXDLIN( 275)		bool _hx_tmp2;
HXDLIN( 275)		bool _hx_tmp3;
HXDLIN( 275)		bool _hx_tmp4;
HXDLIN( 275)		if (!(needsWidth)) {
HXLINE( 275)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 275)			_hx_tmp4 = false;
            		}
HXDLIN( 275)		if (_hx_tmp4) {
HXLINE( 275)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 275)			_hx_tmp3 = false;
            		}
HXDLIN( 275)		if (_hx_tmp3) {
HXLINE( 275)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 275)			_hx_tmp2 = false;
            		}
HXDLIN( 275)		if (_hx_tmp2) {
HXLINE( 275)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 275)			_hx_tmp1 = false;
            		}
HXDLIN( 275)		if (_hx_tmp1) {
HXLINE( 275)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 275)			_hx_tmp = false;
            		}
HXDLIN( 275)		if (_hx_tmp) {
HXLINE( 276)			return false;
            		}
HXLINE( 279)		bool needsToMeasureContent;
HXDLIN( 279)		if (::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 279)			needsToMeasureContent = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 279)			needsToMeasureContent = true;
            		}
HXLINE( 280)		Float stageWidth = ((Float)0.0);
HXLINE( 281)		Float stageHeight = ((Float)0.0);
HXLINE( 282)		if (!(needsToMeasureContent)) {
HXLINE( 284)			 ::openfl::geom::Point topLeft = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 285)			 ::openfl::geom::Point bottomRight = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->stage->stageWidth,this->stage->stageHeight));
HXLINE( 286)			stageWidth = (bottomRight->x - topLeft->x);
HXLINE( 287)			stageHeight = (bottomRight->y - topLeft->y);
            		}
HXLINE( 290)		::Dynamic measureView = null();
HXLINE( 291)		if (::Std_obj::isOfType(this->_activeItemView,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 292)			measureView =  ::hx::interface_check(this->_activeItemView,0xcfc32883);
            		}
HXLINE( 295)		if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 296)			if (needsToMeasureContent) {
HXLINE( 297)				::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_activeViewMeasurements,this->_activeItemView,::hx::ObjectPtr<OBJ_>(this));
            			}
HXLINE( 301)			bool _hx_tmp;
HXDLIN( 301)			if (!(needsWidth)) {
HXLINE( 301)				Float _hx_tmp1 = this->_activeItemView->get_width();
HXDLIN( 301)				_hx_tmp = ::hx::IsNotEq( _hx_tmp1,this->get_explicitWidth() );
            			}
            			else {
HXLINE( 301)				_hx_tmp = false;
            			}
HXDLIN( 301)			if (_hx_tmp) {
HXLINE( 302)				 ::openfl::display::DisplayObject _hx_tmp = this->_activeItemView;
HXDLIN( 302)				_hx_tmp->set_width(( (Float)(this->get_explicitWidth()) ));
            			}
            			else {
HXLINE( 303)				bool _hx_tmp;
HXDLIN( 303)				if (!(needsToMeasureContent)) {
HXLINE( 303)					_hx_tmp = (this->_activeItemView->get_width() != stageWidth);
            				}
            				else {
HXLINE( 303)					_hx_tmp = false;
            				}
HXDLIN( 303)				if (_hx_tmp) {
HXLINE( 304)					this->_activeItemView->set_width(stageWidth);
            				}
            			}
HXLINE( 306)			bool _hx_tmp1;
HXDLIN( 306)			if (!(needsHeight)) {
HXLINE( 306)				Float _hx_tmp = this->_activeItemView->get_height();
HXDLIN( 306)				_hx_tmp1 = ::hx::IsNotEq( _hx_tmp,this->get_explicitHeight() );
            			}
            			else {
HXLINE( 306)				_hx_tmp1 = false;
            			}
HXDLIN( 306)			if (_hx_tmp1) {
HXLINE( 307)				 ::openfl::display::DisplayObject _hx_tmp = this->_activeItemView;
HXDLIN( 307)				_hx_tmp->set_height(( (Float)(this->get_explicitHeight()) ));
            			}
            			else {
HXLINE( 308)				bool _hx_tmp;
HXDLIN( 308)				if (!(needsToMeasureContent)) {
HXLINE( 308)					_hx_tmp = (this->_activeItemView->get_height() != stageHeight);
            				}
            				else {
HXLINE( 308)					_hx_tmp = false;
            				}
HXDLIN( 308)				if (_hx_tmp) {
HXLINE( 309)					this->_activeItemView->set_height(stageHeight);
            				}
            			}
            		}
HXLINE( 313)		if (::Std_obj::isOfType(this->_activeItemView,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 314)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_activeItemView,0x64d4b3cd));
            		}
HXLINE( 317)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 318)		if (needsWidth) {
HXLINE( 319)			if (needsToMeasureContent) {
HXLINE( 320)				if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 321)					newWidth = this->_activeItemView->get_width();
            				}
            				else {
HXLINE( 323)					newWidth = ((Float)0.0);
            				}
HXLINE( 325)				newWidth = (newWidth + (this->rightContentOffset + this->leftContentOffset));
            			}
            			else {
HXLINE( 327)				newWidth = stageWidth;
            			}
            		}
HXLINE( 331)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 332)		if (needsHeight) {
HXLINE( 333)			if (needsToMeasureContent) {
HXLINE( 334)				if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 335)					newHeight = this->_activeItemView->get_height();
            				}
            				else {
HXLINE( 337)					newHeight = ((Float)0.0);
            				}
HXLINE( 339)				newHeight = (newHeight + (this->topContentOffset + this->bottomContentOffset));
            			}
            			else {
HXLINE( 341)				newHeight = stageHeight;
            			}
            		}
HXLINE( 345)		 ::Dynamic newMinWidth = this->get_explicitMinWidth();
HXLINE( 346)		if (needsMinWidth) {
HXLINE( 347)			if (needsToMeasureContent) {
HXLINE( 348)				if (::hx::IsNotNull( measureView )) {
HXLINE( 349)					newMinWidth = ::feathers::core::IMeasureObject_obj::get_minWidth(measureView);
            				}
            				else {
HXLINE( 350)					if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 351)						newMinWidth = this->_activeItemView->get_width();
            					}
            					else {
HXLINE( 353)						newMinWidth = ((Float)0.0);
            					}
            				}
HXLINE( 355)				newMinWidth = (newMinWidth + (this->rightContentOffset + this->leftContentOffset));
            			}
            			else {
HXLINE( 357)				newMinWidth = stageWidth;
            			}
            		}
HXLINE( 361)		 ::Dynamic newMinHeight = this->get_explicitMinHeight();
HXLINE( 362)		if (needsMinHeight) {
HXLINE( 363)			if (needsToMeasureContent) {
HXLINE( 364)				if (::hx::IsNotNull( measureView )) {
HXLINE( 365)					newMinHeight = ::feathers::core::IMeasureObject_obj::get_minHeight(measureView);
            				}
            				else {
HXLINE( 366)					if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 367)						newMinHeight = this->_activeItemView->get_height();
            					}
            					else {
HXLINE( 369)						newMinHeight = ((Float)0.0);
            					}
            				}
HXLINE( 371)				newMinHeight = (newMinHeight + (this->topContentOffset + this->bottomContentOffset));
            			}
            			else {
HXLINE( 373)				newMinHeight = stageHeight;
            			}
            		}
HXLINE( 377)		 ::Dynamic newMaxWidth = this->get_explicitMaxWidth();
HXLINE( 378)		if (needsMaxWidth) {
HXLINE( 379)			if (needsToMeasureContent) {
HXLINE( 380)				if (::hx::IsNotNull( measureView )) {
HXLINE( 381)					newMaxWidth = ::feathers::core::IMeasureObject_obj::get_maxWidth(measureView);
            				}
            				else {
HXLINE( 382)					if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 383)						newMaxWidth = this->_activeItemView->get_width();
            					}
            					else {
HXLINE( 385)						newMaxWidth = ::hx::DivByZero(((Float)1.0));
            					}
            				}
HXLINE( 387)				newMaxWidth = (newMaxWidth + (this->rightContentOffset + this->leftContentOffset));
            			}
            			else {
HXLINE( 389)				newMaxWidth = stageWidth;
            			}
            		}
HXLINE( 393)		 ::Dynamic newMaxHeight = this->get_explicitMaxHeight();
HXLINE( 394)		if (needsMaxHeight) {
HXLINE( 395)			if (needsToMeasureContent) {
HXLINE( 396)				if (::hx::IsNotNull( measureView )) {
HXLINE( 397)					newMaxHeight = ::feathers::core::IMeasureObject_obj::get_maxHeight(measureView);
            				}
            				else {
HXLINE( 398)					if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 399)						newMaxHeight = this->_activeItemView->get_height();
            					}
            					else {
HXLINE( 401)						newMaxHeight = ::hx::DivByZero(((Float)1.0));
            					}
            				}
HXLINE( 403)				newMaxHeight = (newMaxHeight + (this->topContentOffset + this->bottomContentOffset));
            			}
            			else {
HXLINE( 405)				newMaxHeight = stageHeight;
            			}
            		}
HXLINE( 408)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,newMaxHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,measure,return )

void BaseNavigator_obj::layoutContent(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_411_layoutContent)
HXLINE( 412)		if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 413)			this->_activeItemView->set_x(((Float)0.0));
HXLINE( 414)			this->_activeItemView->set_y(((Float)0.0));
HXLINE( 418)			Float _hx_tmp = this->_activeItemView->get_width();
HXDLIN( 418)			if ((_hx_tmp != this->actualWidth)) {
HXLINE( 419)				this->_activeItemView->set_width(this->actualWidth);
            			}
HXLINE( 421)			Float _hx_tmp1 = this->_activeItemView->get_height();
HXDLIN( 421)			if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 422)				this->_activeItemView->set_height(this->actualHeight);
            			}
HXLINE( 424)			if (::Std_obj::isOfType(this->_activeItemView,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 425)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_activeItemView,0x64d4b3cd));
            			}
            		}
HXLINE( 428)		if (::hx::IsNotNull( this->_nextViewInTransition )) {
HXLINE( 429)			this->_nextViewInTransition->set_x(((Float)0.0));
HXLINE( 430)			this->_nextViewInTransition->set_y(((Float)0.0));
HXLINE( 431)			Float _hx_tmp = this->_nextViewInTransition->get_width();
HXDLIN( 431)			if ((_hx_tmp != this->actualWidth)) {
HXLINE( 432)				this->_nextViewInTransition->set_width(this->actualWidth);
            			}
HXLINE( 434)			Float _hx_tmp1 = this->_nextViewInTransition->get_height();
HXDLIN( 434)			if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 435)				this->_nextViewInTransition->set_height(this->actualHeight);
            			}
HXLINE( 437)			if (::Std_obj::isOfType(this->_nextViewInTransition,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 438)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_nextViewInTransition,0x64d4b3cd));
            			}
            		}
HXLINE( 441)		bool _hx_tmp;
HXDLIN( 441)		if (::hx::IsInstanceNotEq( this->_viewsContainer,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 441)			_hx_tmp = ::Std_obj::isOfType(this->_viewsContainer,::hx::ClassOf< ::feathers::core::IValidating >());
            		}
            		else {
HXLINE( 441)			_hx_tmp = false;
            		}
HXDLIN( 441)		if (_hx_tmp) {
HXLINE( 442)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_viewsContainer,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,layoutContent,(void))

 ::openfl::display::DisplayObject BaseNavigator_obj::getView(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_453_getView)
HXDLIN( 453)		HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Missing override of BaseNavigator.getView()",45,b3,5b,97)));
HXDLIN( 453)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,getView,return )

void BaseNavigator_obj::disposeView(::String id, ::openfl::display::DisplayObject view){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_463_disposeView)
HXDLIN( 463)		HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Missing override of BaseNavigator.disposeView()",8e,48,da,38)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseNavigator_obj,disposeView,(void))

void BaseNavigator_obj::transitionComplete(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_473_transitionComplete)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,transitionComplete,(void))

void BaseNavigator_obj::transitionCancel(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_482_transitionCancel)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,transitionCancel,(void))

void BaseNavigator_obj::addItemInternal(::String id, ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_484_addItemInternal)
HXLINE( 485)		if (this->_addedItems->exists(id)) {
HXLINE( 486)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,((HX_("Item with id '",cf,73,74,9a) + id) + HX_("' already defined. Cannot add two items with the same id.",ec,aa,ad,81))));
            		}
HXLINE( 488)		this->_addedItems->set(id,item);
HXLINE( 489)		this->_addedItemIDs->push(id);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseNavigator_obj,addItemInternal,(void))

 ::Dynamic BaseNavigator_obj::removeItemInternal(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_492_removeItemInternal)
HXLINE( 493)		if (!(this->_addedItems->exists(id))) {
HXLINE( 494)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,((HX_("Item with id '",cf,73,74,9a) + id) + HX_("' cannot be removed because this id has not been added.",99,b9,4b,0d))));
            		}
HXLINE( 496)		bool _hx_tmp;
HXDLIN( 496)		if (this->_transitionActive) {
HXLINE( 496)			if ((id != this->_previousViewInTransitionID)) {
HXLINE( 496)				_hx_tmp = (id == this->_activeItemID);
            			}
            			else {
HXLINE( 496)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 496)			_hx_tmp = false;
            		}
HXDLIN( 496)		if (_hx_tmp) {
HXLINE( 497)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot remove an item while it is transitioning in or out.",7e,1b,8b,d0)));
            		}
HXLINE( 499)		if ((id == this->_activeItemID)) {
HXLINE( 502)			this->clearActiveItemInternal(null());
HXLINE( 503)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("clear",8d,71,5b,48),null(),null());
            		}
HXLINE( 505)		 ::Dynamic item = this->_addedItems->get(id);
HXLINE( 506)		this->_addedItems->remove(id);
HXLINE( 507)		this->_addedItemIDs->remove(id);
HXLINE( 508)		return item;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,removeItemInternal,return )

void BaseNavigator_obj::clearFocusFromPreviousView(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_511_clearFocusFromPreviousView)
HXLINE( 512)		if (::hx::IsNull( this->_previousViewInTransition )) {
HXLINE( 513)			return;
            		}
HXLINE( 516)		if (::hx::IsNotNull( this->_focusManager )) {
HXLINE( 517)			if (::hx::IsNull( ::feathers::core::IFocusManager_obj::get_focus(this->_focusManager) )) {
HXLINE( 518)				return;
            			}
HXLINE( 520)			bool _hx_tmp;
HXDLIN( 520)			if (::Std_obj::isOfType(this->_previousViewInTransition,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 521)				::Dynamic _hx_tmp1 = ::feathers::core::IFocusManager_obj::get_focus(this->_focusManager);
HXLINE( 520)				_hx_tmp = ::hx::IsInstanceEq( _hx_tmp1, ::hx::interface_check(this->_previousViewInTransition,0x701686fd) );
            			}
            			else {
HXLINE( 520)				_hx_tmp = false;
            			}
HXDLIN( 520)			if (_hx_tmp) {
HXLINE( 522)				::feathers::core::IFocusManager_obj::set_focus(this->_focusManager,null());
            			}
            			else {
HXLINE( 523)				bool _hx_tmp;
HXDLIN( 523)				if (::Std_obj::isOfType(this->_previousViewInTransition,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 524)					 ::openfl::display::DisplayObjectContainer _hx_tmp1 = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_previousViewInTransition);
HXLINE( 523)					_hx_tmp = _hx_tmp1->contains(::hx::TCast<  ::openfl::display::DisplayObject >::cast(::feathers::core::IFocusManager_obj::get_focus(this->_focusManager)));
            				}
            				else {
HXLINE( 523)					_hx_tmp = false;
            				}
HXDLIN( 523)				if (_hx_tmp) {
HXLINE( 525)					::feathers::core::IFocusManager_obj::set_focus(this->_focusManager,null());
            				}
            			}
            		}
HXLINE( 529)		if (::hx::IsNull( this->stage->get_focus() )) {
HXLINE( 530)			return;
            		}
HXLINE( 532)		bool _hx_tmp;
HXDLIN( 532)		 ::openfl::display::InteractiveObject _hx_tmp1 = this->stage->get_focus();
HXDLIN( 532)		if (::hx::IsInstanceNotEq( _hx_tmp1,this->_previousViewInTransition )) {
HXLINE( 533)			if (::Std_obj::isOfType(this->_previousViewInTransition,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 534)				 ::openfl::display::DisplayObjectContainer _hx_tmp1 = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_previousViewInTransition);
HXLINE( 532)				_hx_tmp = _hx_tmp1->contains(this->stage->get_focus());
            			}
            			else {
HXLINE( 532)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 532)			_hx_tmp = true;
            		}
HXDLIN( 532)		if (_hx_tmp) {
HXLINE( 535)			this->stage->set_focus(this->stage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,clearFocusFromPreviousView,(void))

 ::openfl::display::DisplayObject BaseNavigator_obj::showItemInternal(::String id, ::Dynamic transition){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_539_showItemInternal)
HXLINE( 540)		if (!(this->hasItem(id))) {
HXLINE( 541)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,((HX_("Item with id '",cf,73,74,9a) + id) + HX_("' cannot be displayed because this id has not been added.",5a,b1,30,22))));
            		}
HXLINE( 543)		if (this->_transitionActive) {
HXLINE( 544)			this->_pendingItemID = id;
HXLINE( 545)			this->_pendingItemTransition = transition;
HXLINE( 546)			this->_clearAfterTransition = false;
HXLINE( 547)			return null();
            		}
HXLINE( 550)		this->_previousViewInTransition = this->_activeItemView;
HXLINE( 551)		this->_previousViewInTransitionID = this->_activeItemID;
HXLINE( 553)		this->clearFocusFromPreviousView();
HXLINE( 555)		this->_transitionActive = true;
HXLINE( 557)		 ::Dynamic item = this->_addedItems->get(id);
HXLINE( 558)		this->_nextViewInTransition = this->getView(id);
HXLINE( 559)		if (::hx::IsNull( this->_nextViewInTransition )) {
HXLINE( 560)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("Failed to display navigator item with id '",f8,b4,ba,3a) + id) + HX_("'. Call to getView() incorrectly returned null.",24,de,e3,04))));
            		}
HXLINE( 562)		this->_nextViewInTransitionID = id;
HXLINE( 563)		bool _hx_tmp;
HXDLIN( 563)		if (::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 563)			_hx_tmp = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 563)			_hx_tmp = true;
            		}
HXDLIN( 563)		if (_hx_tmp) {
HXLINE( 564)			this->_nextViewInTransition->addEventListener(HX_("resize",f4,59,7b,08),this->activeItemView_resizeHandler_dyn(),null(),null(),null());
            		}
HXLINE( 566)		bool sameInstance = ::hx::IsInstanceEq( this->_previousViewInTransition,this->_nextViewInTransition );
HXLINE( 567)		this->_viewsContainer->addChild(this->_nextViewInTransition);
HXLINE( 568)		if (::Std_obj::isOfType(this->_nextViewInTransition,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 570)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_nextViewInTransition,0x2696a04f));
            		}
HXLINE( 573)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 574)		bool _hx_tmp1;
HXDLIN( 574)		if (::hx::IsNotNull( this->_validationQueue )) {
HXLINE( 574)			_hx_tmp1 = this->_validationQueue->get_validating();
            		}
            		else {
HXLINE( 574)			_hx_tmp1 = false;
            		}
HXDLIN( 574)		if (_hx_tmp1) {
HXLINE( 580)			this->_validationQueue->validateNow();
            		}
            		else {
HXLINE( 581)			if (!(this->_validating)) {
HXLINE( 582)				this->validateNow();
            			}
            		}
HXLINE( 585)		if (sameInstance) {
HXLINE( 588)			this->_activeItemView = this->_nextViewInTransition;
HXLINE( 589)			this->_activeItemID = this->_nextViewInTransitionID;
HXLINE( 590)			this->_activeViewMeasurements->save(this->_activeItemView);
HXLINE( 591)			this->_previousViewInTransition = null();
HXLINE( 592)			this->_previousViewInTransitionID = null();
HXLINE( 593)			this->_nextViewInTransition = null();
HXLINE( 594)			this->_nextViewInTransitionID = null();
HXLINE( 595)			this->_transitionActive = false;
HXLINE( 596)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            		else {
HXLINE( 598)			this->startTransition(transition);
            		}
HXLINE( 600)		return this->_activeItemView;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseNavigator_obj,showItemInternal,return )

void BaseNavigator_obj::clearActiveItemInternal( ::Dynamic transition){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_603_clearActiveItemInternal)
HXLINE( 604)		if (::hx::IsNull( this->_activeItemView )) {
HXLINE( 606)			return;
            		}
HXLINE( 609)		if (this->_transitionActive) {
HXLINE( 610)			this->_pendingItemID = null();
HXLINE( 611)			this->_pendingItemTransition = transition;
HXLINE( 612)			this->_clearAfterTransition = true;
HXLINE( 613)			return;
            		}
HXLINE( 616)		this->clearFocusFromPreviousView();
HXLINE( 618)		this->_transitionActive = true;
HXLINE( 620)		this->_previousViewInTransition = this->_activeItemView;
HXLINE( 621)		this->_previousViewInTransitionID = this->_activeItemID;
HXLINE( 622)		this->_nextViewInTransition = null();
HXLINE( 623)		this->_nextViewInTransitionID = null();
HXLINE( 625)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 627)		this->startTransition(transition);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,clearActiveItemInternal,(void))

void BaseNavigator_obj::startTransition( ::Dynamic transition){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_630_startTransition)
HXLINE( 631)		::feathers::events::TransitionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("transitionStart",8d,fa,36,c9),this->_previousViewInTransitionID,this->_previousViewInTransition,this->_nextViewInTransitionID,this->_nextViewInTransition);
HXLINE( 633)		bool _hx_tmp;
HXDLIN( 633)		if (::hx::IsNotNull( transition )) {
HXLINE( 633)			_hx_tmp = ::hx::IsNotEq( transition,::feathers::controls::navigators::BaseNavigator_obj::defaultTransition_dyn() );
            		}
            		else {
HXLINE( 633)			_hx_tmp = false;
            		}
HXDLIN( 633)		if (_hx_tmp) {
HXLINE( 634)			if (::hx::IsNotNull( this->_nextViewInTransition )) {
HXLINE( 637)				this->_nextViewInTransition->set_visible(false);
            			}
HXLINE( 639)			this->_waitingForTransitionFrameCount = 0;
HXLINE( 640)			this->_waitingTransition = transition;
HXLINE( 644)			this->addEventListener(HX_("enterFrame",f5,03,50,02),this->baseNavigator_transitionWait_enterFrameHandler_dyn(),null(),null(),null());
            		}
            		else {
HXLINE( 646)			if (::hx::IsNotNull( this->_nextViewInTransition )) {
HXLINE( 648)				this->_nextViewInTransition->set_visible(true);
            			}
HXLINE( 650)			::Dynamic transitionContext = ::feathers::controls::navigators::BaseNavigator_obj::defaultTransition(this->_previousViewInTransition,this->_nextViewInTransition);
HXLINE( 651)			::openfl::events::IEventDispatcher_obj::addEventListener(transitionContext,HX_("complete",b9,00,c8,7f),this->transition_completeHandler_dyn(),null(),null(),null());
HXLINE( 652)			::openfl::events::IEventDispatcher_obj::addEventListener(transitionContext,HX_("cancel",7a,ed,33,b8),this->transition_cancelHandler_dyn(),null(),null(),null());
HXLINE( 653)			::feathers::motion::effects::IEffectContext_obj::play(transitionContext);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,startTransition,(void))

void BaseNavigator_obj::startWaitingTransition(){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_657_startWaitingTransition)
HXLINE( 658)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->baseNavigator_transitionWait_enterFrameHandler_dyn(),null());
HXLINE( 659)		if (::hx::IsNotNull( this->_nextViewInTransition )) {
HXLINE( 662)			this->_nextViewInTransition->set_visible(true);
            		}
HXLINE( 665)		 ::Dynamic transition = this->_waitingTransition;
HXLINE( 666)		this->_waitingTransition = null();
HXLINE( 667)		::Dynamic transitionContext = transition(this->_previousViewInTransition,this->_nextViewInTransition);
HXLINE( 668)		::openfl::events::IEventDispatcher_obj::addEventListener(transitionContext,HX_("complete",b9,00,c8,7f),this->transition_completeHandler_dyn(),null(),null(),null());
HXLINE( 669)		::openfl::events::IEventDispatcher_obj::addEventListener(transitionContext,HX_("cancel",7a,ed,33,b8),this->transition_cancelHandler_dyn(),null(),null(),null());
HXLINE( 670)		::feathers::motion::effects::IEffectContext_obj::play(transitionContext);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseNavigator_obj,startWaitingTransition,(void))

void BaseNavigator_obj::baseNavigator_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_674_baseNavigator_addedToStageHandler)
HXDLIN( 674)		if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 678)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 679)			this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->baseNavigator_stage_resizeHandler_dyn(),null(),null(),null());
HXLINE( 680)			this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->baseNavigator_removedFromStageHandler_dyn(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,baseNavigator_addedToStageHandler,(void))

void BaseNavigator_obj::baseNavigator_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_684_baseNavigator_removedFromStageHandler)
HXLINE( 685)		this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->baseNavigator_removedFromStageHandler_dyn(),null());
HXLINE( 686)		this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->baseNavigator_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,baseNavigator_removedFromStageHandler,(void))

void BaseNavigator_obj::baseNavigator_transitionWait_enterFrameHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_689_baseNavigator_transitionWait_enterFrameHandler)
HXLINE( 695)		if ((this->_waitingForTransitionFrameCount < 2)) {
HXLINE( 696)			this->_waitingForTransitionFrameCount++;
HXLINE( 697)			return;
            		}
HXLINE( 699)		this->startWaitingTransition();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,baseNavigator_transitionWait_enterFrameHandler,(void))

void BaseNavigator_obj::baseNavigator_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_703_baseNavigator_stage_resizeHandler)
HXDLIN( 703)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,baseNavigator_stage_resizeHandler,(void))

void BaseNavigator_obj::activeItemView_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_706_activeItemView_resizeHandler)
HXLINE( 707)		bool _hx_tmp;
HXDLIN( 707)		if (!(this->_validating)) {
HXLINE( 707)			_hx_tmp = ::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() );
            		}
            		else {
HXLINE( 707)			_hx_tmp = true;
            		}
HXDLIN( 707)		if (_hx_tmp) {
HXLINE( 708)			return;
            		}
HXLINE( 710)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,activeItemView_resizeHandler,(void))

void BaseNavigator_obj::transition_completeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_713_transition_completeHandler)
HXLINE( 717)		bool _hx_tmp;
HXDLIN( 717)		if (!(this->_clearAfterTransition)) {
HXLINE( 717)			_hx_tmp = ::hx::IsNotNull( this->_pendingItemID );
            		}
            		else {
HXLINE( 717)			_hx_tmp = true;
            		}
HXDLIN( 717)		this->_transitionActive = _hx_tmp;
HXLINE( 721)		this->transitionComplete();
HXLINE( 726)		 ::openfl::display::DisplayObject nextView = this->_nextViewInTransition;
HXLINE( 727)		::String nextItemID = this->_nextViewInTransitionID;
HXLINE( 728)		 ::openfl::display::DisplayObject previousView = this->_previousViewInTransition;
HXLINE( 729)		::String previousItemID = this->_previousViewInTransitionID;
HXLINE( 730)		this->_previousViewInTransition = null();
HXLINE( 731)		this->_previousViewInTransitionID = null();
HXLINE( 732)		this->_nextViewInTransition = null();
HXLINE( 733)		this->_nextViewInTransitionID = null();
HXLINE( 735)		if (::hx::IsNotNull( previousView )) {
HXLINE( 736)			previousView->removeEventListener(HX_("resize",f4,59,7b,08),this->activeItemView_resizeHandler_dyn(),null());
HXLINE( 737)			this->_viewsContainer->removeChild(previousView);
HXLINE( 738)			this->disposeView(previousItemID,previousView);
            		}
HXLINE( 743)		this->_activeItemView = nextView;
HXLINE( 744)		this->_activeItemID = nextItemID;
HXLINE( 745)		this->_activeViewMeasurements->save(nextView);
HXLINE( 746)		::feathers::events::TransitionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("transitionComplete",6e,67,80,36),previousItemID,previousView,nextItemID,nextView);
HXLINE( 747)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 749)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 751)		bool _hx_tmp1;
HXDLIN( 751)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 751)			if (::hx::IsNotNull( this->stage->get_focus() )) {
HXLINE( 751)				_hx_tmp1 = ::hx::IsNull( this->stage->get_focus()->stage );
            			}
            			else {
HXLINE( 751)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 751)			_hx_tmp1 = false;
            		}
HXDLIN( 751)		if (_hx_tmp1) {
HXLINE( 752)			if (::Std_obj::isOfType(nextView,::hx::ClassOf< ::openfl::display::InteractiveObject >())) {
HXLINE( 753)				this->stage->set_focus(::hx::TCast<  ::openfl::display::InteractiveObject >::cast(nextView));
            			}
            		}
HXLINE( 757)		this->_transitionActive = false;
HXLINE( 758)		 ::Dynamic pendingTransition = this->_pendingItemTransition;
HXLINE( 759)		this->_pendingItemTransition = null();
HXLINE( 760)		if (this->_clearAfterTransition) {
HXLINE( 761)			this->_clearAfterTransition = false;
HXLINE( 762)			this->clearActiveItemInternal(pendingTransition);
            		}
            		else {
HXLINE( 763)			if (::hx::IsNotNull( this->_pendingItemID )) {
HXLINE( 764)				::String pendingItemID = this->_pendingItemID;
HXLINE( 765)				this->_pendingItemID = null();
HXLINE( 766)				this->showItemInternal(pendingItemID,pendingTransition);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,transition_completeHandler,(void))

void BaseNavigator_obj::transition_cancelHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_9fa22fe7890299d6_770_transition_cancelHandler)
HXLINE( 774)		bool _hx_tmp;
HXDLIN( 774)		if (!(this->_clearAfterTransition)) {
HXLINE( 774)			_hx_tmp = ::hx::IsNotNull( this->_pendingItemID );
            		}
            		else {
HXLINE( 774)			_hx_tmp = true;
            		}
HXDLIN( 774)		this->_transitionActive = _hx_tmp;
HXLINE( 779)		 ::openfl::display::DisplayObject nextView = this->_nextViewInTransition;
HXLINE( 780)		::String nextItemID = this->_nextViewInTransitionID;
HXLINE( 781)		 ::openfl::display::DisplayObject previousView = this->_previousViewInTransition;
HXLINE( 782)		::String previousItemID = this->_previousViewInTransitionID;
HXLINE( 783)		this->_previousViewInTransition = null();
HXLINE( 784)		this->_previousViewInTransitionID = null();
HXLINE( 785)		this->_nextViewInTransition = null();
HXLINE( 786)		this->_nextViewInTransitionID = null();
HXLINE( 788)		if (::hx::IsNotNull( nextView )) {
HXLINE( 789)			this->_viewsContainer->removeChild(nextView);
HXLINE( 790)			this->_activeViewMeasurements->restore(nextView);
HXLINE( 791)			this->disposeView(nextItemID,nextView);
            		}
HXLINE( 794)		this->_activeItemView = previousView;
HXLINE( 795)		this->_activeItemID = previousItemID;
HXLINE( 796)		this->_activeViewMeasurements->save(previousView);
HXLINE( 797)		this->transitionCancel();
HXLINE( 798)		::feathers::events::TransitionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("transitionCancel",ef,cc,1d,f9),previousItemID,previousView,nextItemID,nextView);
HXLINE( 799)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 801)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 803)		bool _hx_tmp1;
HXDLIN( 803)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 803)			if (::hx::IsNotNull( this->stage->get_focus() )) {
HXLINE( 803)				_hx_tmp1 = ::hx::IsNull( this->stage->get_focus()->stage );
            			}
            			else {
HXLINE( 803)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 803)			_hx_tmp1 = false;
            		}
HXDLIN( 803)		if (_hx_tmp1) {
HXLINE( 804)			if (::Std_obj::isOfType(this->_activeItemView,::hx::ClassOf< ::openfl::display::InteractiveObject >())) {
HXLINE( 805)				this->stage->set_focus(::hx::TCast<  ::openfl::display::InteractiveObject >::cast(this->_activeItemView));
            			}
            		}
HXLINE( 809)		this->_transitionActive = false;
HXLINE( 810)		 ::Dynamic pendingTransition = this->_pendingItemTransition;
HXLINE( 811)		this->_pendingItemTransition = null();
HXLINE( 812)		if (this->_clearAfterTransition) {
HXLINE( 813)			this->_clearAfterTransition = false;
HXLINE( 814)			this->clearActiveItemInternal(pendingTransition);
            		}
            		else {
HXLINE( 815)			if (::hx::IsNotNull( this->_pendingItemID )) {
HXLINE( 816)				::String pendingItemID = this->_pendingItemID;
HXLINE( 817)				this->_pendingItemID = null();
HXLINE( 818)				this->showItemInternal(pendingItemID,pendingTransition);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseNavigator_obj,transition_cancelHandler,(void))

::Dynamic BaseNavigator_obj::defaultTransition( ::openfl::display::DisplayObject oldView, ::openfl::display::DisplayObject newView){
            	HX_GC_STACKFRAME(&_hx_pos_9fa22fe7890299d6_59_defaultTransition)
HXDLIN(  59)		return  ::feathers::motion::effects::NoOpEffectContext_obj::__alloc( HX_CTX ,oldView);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BaseNavigator_obj,defaultTransition,return )


::hx::ObjectPtr< BaseNavigator_obj > BaseNavigator_obj::__new() {
	::hx::ObjectPtr< BaseNavigator_obj > __this = new BaseNavigator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseNavigator_obj > BaseNavigator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseNavigator_obj *__this = (BaseNavigator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseNavigator_obj), true, "feathers.controls.navigators.BaseNavigator"));
	*(void **)__this = BaseNavigator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseNavigator_obj::BaseNavigator_obj()
{
}

void BaseNavigator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseNavigator);
	HX_MARK_MEMBER_NAME(_activeItemID,"_activeItemID");
	HX_MARK_MEMBER_NAME(_activeItemView,"_activeItemView");
	HX_MARK_MEMBER_NAME(_transitionActive,"_transitionActive");
	HX_MARK_MEMBER_NAME(_childFocusEnabled,"_childFocusEnabled");
	HX_MARK_MEMBER_NAME(_viewsContainer,"_viewsContainer");
	HX_MARK_MEMBER_NAME(_activeViewMeasurements,"_activeViewMeasurements");
	HX_MARK_MEMBER_NAME(_addedItemIDs,"_addedItemIDs");
	HX_MARK_MEMBER_NAME(_addedItems,"_addedItems");
	HX_MARK_MEMBER_NAME(_previousViewInTransition,"_previousViewInTransition");
	HX_MARK_MEMBER_NAME(_previousViewInTransitionID,"_previousViewInTransitionID");
	HX_MARK_MEMBER_NAME(_nextViewInTransition,"_nextViewInTransition");
	HX_MARK_MEMBER_NAME(_nextViewInTransitionID,"_nextViewInTransitionID");
	HX_MARK_MEMBER_NAME(_pendingItemID,"_pendingItemID");
	HX_MARK_MEMBER_NAME(_pendingItemTransition,"_pendingItemTransition");
	HX_MARK_MEMBER_NAME(_clearAfterTransition,"_clearAfterTransition");
	HX_MARK_MEMBER_NAME(_delayedTransition,"_delayedTransition");
	HX_MARK_MEMBER_NAME(_waitingForDelayedTransition,"_waitingForDelayedTransition");
	HX_MARK_MEMBER_NAME(_waitingTransition,"_waitingTransition");
	HX_MARK_MEMBER_NAME(_waitingForTransitionFrameCount,"_waitingForTransitionFrameCount");
	HX_MARK_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_MARK_MEMBER_NAME(topContentOffset,"topContentOffset");
	HX_MARK_MEMBER_NAME(rightContentOffset,"rightContentOffset");
	HX_MARK_MEMBER_NAME(bottomContentOffset,"bottomContentOffset");
	HX_MARK_MEMBER_NAME(leftContentOffset,"leftContentOffset");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseNavigator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeItemID,"_activeItemID");
	HX_VISIT_MEMBER_NAME(_activeItemView,"_activeItemView");
	HX_VISIT_MEMBER_NAME(_transitionActive,"_transitionActive");
	HX_VISIT_MEMBER_NAME(_childFocusEnabled,"_childFocusEnabled");
	HX_VISIT_MEMBER_NAME(_viewsContainer,"_viewsContainer");
	HX_VISIT_MEMBER_NAME(_activeViewMeasurements,"_activeViewMeasurements");
	HX_VISIT_MEMBER_NAME(_addedItemIDs,"_addedItemIDs");
	HX_VISIT_MEMBER_NAME(_addedItems,"_addedItems");
	HX_VISIT_MEMBER_NAME(_previousViewInTransition,"_previousViewInTransition");
	HX_VISIT_MEMBER_NAME(_previousViewInTransitionID,"_previousViewInTransitionID");
	HX_VISIT_MEMBER_NAME(_nextViewInTransition,"_nextViewInTransition");
	HX_VISIT_MEMBER_NAME(_nextViewInTransitionID,"_nextViewInTransitionID");
	HX_VISIT_MEMBER_NAME(_pendingItemID,"_pendingItemID");
	HX_VISIT_MEMBER_NAME(_pendingItemTransition,"_pendingItemTransition");
	HX_VISIT_MEMBER_NAME(_clearAfterTransition,"_clearAfterTransition");
	HX_VISIT_MEMBER_NAME(_delayedTransition,"_delayedTransition");
	HX_VISIT_MEMBER_NAME(_waitingForDelayedTransition,"_waitingForDelayedTransition");
	HX_VISIT_MEMBER_NAME(_waitingTransition,"_waitingTransition");
	HX_VISIT_MEMBER_NAME(_waitingForTransitionFrameCount,"_waitingForTransitionFrameCount");
	HX_VISIT_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_VISIT_MEMBER_NAME(topContentOffset,"topContentOffset");
	HX_VISIT_MEMBER_NAME(rightContentOffset,"rightContentOffset");
	HX_VISIT_MEMBER_NAME(bottomContentOffset,"bottomContentOffset");
	HX_VISIT_MEMBER_NAME(leftContentOffset,"leftContentOffset");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseNavigator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasItem") ) { return ::hx::Val( hasItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		if (HX_FIELD_EQ(inName,"getView") ) { return ::hx::Val( getView_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getItemIDs") ) { return ::hx::Val( getItemIDs_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_addedItems") ) { return ::hx::Val( _addedItems ); }
		if (HX_FIELD_EQ(inName,"disposeView") ) { return ::hx::Val( disposeView_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeItemID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeItemID() ); }
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSizeMode() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeItemID") ) { return ::hx::Val( _activeItemID ); }
		if (HX_FIELD_EQ(inName,"_addedItemIDs") ) { return ::hx::Val( _addedItemIDs ); }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { return ::hx::Val( _autoSizeMode ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"activeItemView") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_activeItemView() ); }
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_pendingItemID") ) { return ::hx::Val( _pendingItemID ); }
		if (HX_FIELD_EQ(inName,"removeAllItems") ) { return ::hx::Val( removeAllItems_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeItemView") ) { return ::hx::Val( _activeItemView ); }
		if (HX_FIELD_EQ(inName,"_viewsContainer") ) { return ::hx::Val( _viewsContainer ); }
		if (HX_FIELD_EQ(inName,"addItemInternal") ) { return ::hx::Val( addItemInternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"startTransition") ) { return ::hx::Val( startTransition_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_activeItemID") ) { return ::hx::Val( get_activeItemID_dyn() ); }
		if (HX_FIELD_EQ(inName,"transitionActive") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_transitionActive() ); }
		if (HX_FIELD_EQ(inName,"get_autoSizeMode") ) { return ::hx::Val( get_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSizeMode") ) { return ::hx::Val( set_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"topContentOffset") ) { return ::hx::Val( topContentOffset ); }
		if (HX_FIELD_EQ(inName,"transitionCancel") ) { return ::hx::Val( transitionCancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"showItemInternal") ) { return ::hx::Val( showItemInternal_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_transitionActive") ) { return ::hx::Val( _transitionActive ); }
		if (HX_FIELD_EQ(inName,"childFocusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_childFocusEnabled() ); }
		if (HX_FIELD_EQ(inName,"leftContentOffset") ) { return ::hx::Val( leftContentOffset ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_activeItemView") ) { return ::hx::Val( get_activeItemView_dyn() ); }
		if (HX_FIELD_EQ(inName,"_childFocusEnabled") ) { return ::hx::Val( _childFocusEnabled ); }
		if (HX_FIELD_EQ(inName,"_delayedTransition") ) { return ::hx::Val( _delayedTransition ); }
		if (HX_FIELD_EQ(inName,"_waitingTransition") ) { return ::hx::Val( _waitingTransition ); }
		if (HX_FIELD_EQ(inName,"rightContentOffset") ) { return ::hx::Val( rightContentOffset ); }
		if (HX_FIELD_EQ(inName,"transitionComplete") ) { return ::hx::Val( transitionComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeItemInternal") ) { return ::hx::Val( removeItemInternal_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bottomContentOffset") ) { return ::hx::Val( bottomContentOffset ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_transitionActive") ) { return ::hx::Val( get_transitionActive_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_childFocusEnabled") ) { return ::hx::Val( get_childFocusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_childFocusEnabled") ) { return ::hx::Val( set_childFocusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_nextViewInTransition") ) { return ::hx::Val( _nextViewInTransition ); }
		if (HX_FIELD_EQ(inName,"_clearAfterTransition") ) { return ::hx::Val( _clearAfterTransition ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_pendingItemTransition") ) { return ::hx::Val( _pendingItemTransition ); }
		if (HX_FIELD_EQ(inName,"startWaitingTransition") ) { return ::hx::Val( startWaitingTransition_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_activeViewMeasurements") ) { return ::hx::Val( _activeViewMeasurements ); }
		if (HX_FIELD_EQ(inName,"_nextViewInTransitionID") ) { return ::hx::Val( _nextViewInTransitionID ); }
		if (HX_FIELD_EQ(inName,"clearActiveItemInternal") ) { return ::hx::Val( clearActiveItemInternal_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"transition_cancelHandler") ) { return ::hx::Val( transition_cancelHandler_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousViewInTransition") ) { return ::hx::Val( _previousViewInTransition ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"clearFocusFromPreviousView") ) { return ::hx::Val( clearFocusFromPreviousView_dyn() ); }
		if (HX_FIELD_EQ(inName,"transition_completeHandler") ) { return ::hx::Val( transition_completeHandler_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_previousViewInTransitionID") ) { return ::hx::Val( _previousViewInTransitionID ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_waitingForDelayedTransition") ) { return ::hx::Val( _waitingForDelayedTransition ); }
		if (HX_FIELD_EQ(inName,"activeItemView_resizeHandler") ) { return ::hx::Val( activeItemView_resizeHandler_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_waitingForTransitionFrameCount") ) { return ::hx::Val( _waitingForTransitionFrameCount ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"baseNavigator_addedToStageHandler") ) { return ::hx::Val( baseNavigator_addedToStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"baseNavigator_stage_resizeHandler") ) { return ::hx::Val( baseNavigator_stage_resizeHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"baseNavigator_removedFromStageHandler") ) { return ::hx::Val( baseNavigator_removedFromStageHandler_dyn() ); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"baseNavigator_transitionWait_enterFrameHandler") ) { return ::hx::Val( baseNavigator_transitionWait_enterFrameHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BaseNavigator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { outValue = defaultTransition_dyn(); return true; }
	}
	return false;
}

::hx::Val BaseNavigator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_addedItems") ) { _addedItems=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSizeMode(inValue.Cast<  ::feathers::layout::AutoSizeMode >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_activeItemID") ) { _activeItemID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_addedItemIDs") ) { _addedItemIDs=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { _autoSizeMode=inValue.Cast<  ::feathers::layout::AutoSizeMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pendingItemID") ) { _pendingItemID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeItemView") ) { _activeItemView=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewsContainer") ) { _viewsContainer=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"topContentOffset") ) { topContentOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_transitionActive") ) { _transitionActive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childFocusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_childFocusEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"leftContentOffset") ) { leftContentOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_childFocusEnabled") ) { _childFocusEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delayedTransition") ) { _delayedTransition=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitingTransition") ) { _waitingTransition=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightContentOffset") ) { rightContentOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"bottomContentOffset") ) { bottomContentOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_nextViewInTransition") ) { _nextViewInTransition=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clearAfterTransition") ) { _clearAfterTransition=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_pendingItemTransition") ) { _pendingItemTransition=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_activeViewMeasurements") ) { _activeViewMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextViewInTransitionID") ) { _nextViewInTransitionID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousViewInTransition") ) { _previousViewInTransition=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_previousViewInTransitionID") ) { _previousViewInTransitionID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_waitingForDelayedTransition") ) { _waitingForDelayedTransition=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_waitingForTransitionFrameCount") ) { _waitingForTransitionFrameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseNavigator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_activeItemID",f3,90,93,4b));
	outFields->push(HX_("activeItemID",14,fe,24,69));
	outFields->push(HX_("_activeItemView",9d,25,04,0d));
	outFields->push(HX_("activeItemView",fe,dc,a3,c3));
	outFields->push(HX_("_transitionActive",9a,0f,ab,ef));
	outFields->push(HX_("transitionActive",3b,21,30,57));
	outFields->push(HX_("_childFocusEnabled",06,8c,8a,7b));
	outFields->push(HX_("childFocusEnabled",45,e7,74,a8));
	outFields->push(HX_("_viewsContainer",92,79,dc,3b));
	outFields->push(HX_("_activeViewMeasurements",81,c0,ad,d3));
	outFields->push(HX_("_addedItemIDs",04,07,a4,7d));
	outFields->push(HX_("_addedItems",3f,dc,a4,25));
	outFields->push(HX_("_previousViewInTransition",95,3b,c1,bc));
	outFields->push(HX_("_previousViewInTransitionID",b0,4a,37,5c));
	outFields->push(HX_("_nextViewInTransition",d1,60,1d,10));
	outFields->push(HX_("_nextViewInTransitionID",ec,36,d4,5a));
	outFields->push(HX_("_pendingItemID",a6,07,2a,41));
	outFields->push(HX_("_clearAfterTransition",a3,99,6b,5f));
	outFields->push(HX_("_waitingForDelayedTransition",bc,8f,20,48));
	outFields->push(HX_("_waitingForTransitionFrameCount",92,4b,e1,aa));
	outFields->push(HX_("_autoSizeMode",32,4a,ee,05));
	outFields->push(HX_("autoSizeMode",53,b7,7f,23));
	outFields->push(HX_("topContentOffset",d7,79,ec,84));
	outFields->push(HX_("rightContentOffset",30,d4,cf,45));
	outFields->push(HX_("bottomContentOffset",c1,fb,b5,7b));
	outFields->push(HX_("leftContentOffset",25,59,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseNavigator_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(BaseNavigator_obj,_activeItemID),HX_("_activeItemID",f3,90,93,4b)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BaseNavigator_obj,_activeItemView),HX_("_activeItemView",9d,25,04,0d)},
	{::hx::fsBool,(int)offsetof(BaseNavigator_obj,_transitionActive),HX_("_transitionActive",9a,0f,ab,ef)},
	{::hx::fsBool,(int)offsetof(BaseNavigator_obj,_childFocusEnabled),HX_("_childFocusEnabled",06,8c,8a,7b)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(BaseNavigator_obj,_viewsContainer),HX_("_viewsContainer",92,79,dc,3b)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BaseNavigator_obj,_activeViewMeasurements),HX_("_activeViewMeasurements",81,c0,ad,d3)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(BaseNavigator_obj,_addedItemIDs),HX_("_addedItemIDs",04,07,a4,7d)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(BaseNavigator_obj,_addedItems),HX_("_addedItems",3f,dc,a4,25)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BaseNavigator_obj,_previousViewInTransition),HX_("_previousViewInTransition",95,3b,c1,bc)},
	{::hx::fsString,(int)offsetof(BaseNavigator_obj,_previousViewInTransitionID),HX_("_previousViewInTransitionID",b0,4a,37,5c)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BaseNavigator_obj,_nextViewInTransition),HX_("_nextViewInTransition",d1,60,1d,10)},
	{::hx::fsString,(int)offsetof(BaseNavigator_obj,_nextViewInTransitionID),HX_("_nextViewInTransitionID",ec,36,d4,5a)},
	{::hx::fsString,(int)offsetof(BaseNavigator_obj,_pendingItemID),HX_("_pendingItemID",a6,07,2a,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseNavigator_obj,_pendingItemTransition),HX_("_pendingItemTransition",80,9c,97,4f)},
	{::hx::fsBool,(int)offsetof(BaseNavigator_obj,_clearAfterTransition),HX_("_clearAfterTransition",a3,99,6b,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseNavigator_obj,_delayedTransition),HX_("_delayedTransition",98,eb,eb,bc)},
	{::hx::fsBool,(int)offsetof(BaseNavigator_obj,_waitingForDelayedTransition),HX_("_waitingForDelayedTransition",bc,8f,20,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseNavigator_obj,_waitingTransition),HX_("_waitingTransition",43,72,7c,82)},
	{::hx::fsInt,(int)offsetof(BaseNavigator_obj,_waitingForTransitionFrameCount),HX_("_waitingForTransitionFrameCount",92,4b,e1,aa)},
	{::hx::fsObject /*  ::feathers::layout::AutoSizeMode */ ,(int)offsetof(BaseNavigator_obj,_autoSizeMode),HX_("_autoSizeMode",32,4a,ee,05)},
	{::hx::fsFloat,(int)offsetof(BaseNavigator_obj,topContentOffset),HX_("topContentOffset",d7,79,ec,84)},
	{::hx::fsFloat,(int)offsetof(BaseNavigator_obj,rightContentOffset),HX_("rightContentOffset",30,d4,cf,45)},
	{::hx::fsFloat,(int)offsetof(BaseNavigator_obj,bottomContentOffset),HX_("bottomContentOffset",c1,fb,b5,7b)},
	{::hx::fsFloat,(int)offsetof(BaseNavigator_obj,leftContentOffset),HX_("leftContentOffset",25,59,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseNavigator_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseNavigator_obj_sMemberFields[] = {
	HX_("_activeItemID",f3,90,93,4b),
	HX_("get_activeItemID",9d,ea,c3,6d),
	HX_("_activeItemView",9d,25,04,0d),
	HX_("get_activeItemView",c7,bd,3d,5f),
	HX_("_transitionActive",9a,0f,ab,ef),
	HX_("get_transitionActive",44,86,9a,75),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("_childFocusEnabled",06,8c,8a,7b),
	HX_("get_childFocusEnabled",1c,ea,22,27),
	HX_("set_childFocusEnabled",28,b8,2b,7b),
	HX_("_viewsContainer",92,79,dc,3b),
	HX_("_activeViewMeasurements",81,c0,ad,d3),
	HX_("_addedItemIDs",04,07,a4,7d),
	HX_("_addedItems",3f,dc,a4,25),
	HX_("_previousViewInTransition",95,3b,c1,bc),
	HX_("_previousViewInTransitionID",b0,4a,37,5c),
	HX_("_nextViewInTransition",d1,60,1d,10),
	HX_("_nextViewInTransitionID",ec,36,d4,5a),
	HX_("_pendingItemID",a6,07,2a,41),
	HX_("_pendingItemTransition",80,9c,97,4f),
	HX_("_clearAfterTransition",a3,99,6b,5f),
	HX_("_delayedTransition",98,eb,eb,bc),
	HX_("_waitingForDelayedTransition",bc,8f,20,48),
	HX_("_waitingTransition",43,72,7c,82),
	HX_("_waitingForTransitionFrameCount",92,4b,e1,aa),
	HX_("_autoSizeMode",32,4a,ee,05),
	HX_("get_autoSizeMode",dc,a3,1e,28),
	HX_("set_autoSizeMode",50,91,60,7e),
	HX_("topContentOffset",d7,79,ec,84),
	HX_("rightContentOffset",30,d4,cf,45),
	HX_("bottomContentOffset",c1,fb,b5,7b),
	HX_("leftContentOffset",25,59,d3,e5),
	HX_("removeAllItems",83,a7,46,85),
	HX_("hasItem",8d,e5,03,15),
	HX_("getItemIDs",0f,8f,d1,2e),
	HX_("update",09,86,05,87),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutContent",af,8f,21,da),
	HX_("getView",1b,e2,d1,20),
	HX_("disposeView",a4,1a,6b,61),
	HX_("transitionComplete",6e,67,80,36),
	HX_("transitionCancel",ef,cc,1d,f9),
	HX_("addItemInternal",31,1f,ef,92),
	HX_("removeItemInternal",d4,f1,d5,58),
	HX_("clearFocusFromPreviousView",f1,eb,d3,27),
	HX_("showItemInternal",0d,dc,2e,ab),
	HX_("clearActiveItemInternal",43,cf,78,cb),
	HX_("startTransition",97,14,ea,8c),
	HX_("startWaitingTransition",c0,0a,00,e3),
	HX_("baseNavigator_addedToStageHandler",2e,98,22,79),
	HX_("baseNavigator_removedFromStageHandler",fd,d4,c4,0e),
	HX_("baseNavigator_transitionWait_enterFrameHandler",59,7d,ac,29),
	HX_("baseNavigator_stage_resizeHandler",3c,50,57,8c),
	HX_("activeItemView_resizeHandler",f5,b1,f4,f5),
	HX_("transition_completeHandler",27,5a,f5,45),
	HX_("transition_cancelHandler",06,26,b7,25),
	::String(null()) };

::hx::Class BaseNavigator_obj::__mClass;

static ::String BaseNavigator_obj_sStaticFields[] = {
	HX_("defaultTransition",b6,45,11,2f),
	::String(null())
};

void BaseNavigator_obj::__register()
{
	BaseNavigator_obj _hx_dummy;
	BaseNavigator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.navigators.BaseNavigator",2e,b0,14,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BaseNavigator_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BaseNavigator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseNavigator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseNavigator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseNavigator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseNavigator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace navigators
