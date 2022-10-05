#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonState
#include <feathers/controls/ButtonState.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
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
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_KeyToState
#include <feathers/utils/KeyToState.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_PointerToState
#include <feathers/utils/PointerToState.h>
#endif
#ifndef INCLUDED_feathers_utils_PointerTrigger
#include <feathers/utils/PointerTrigger.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9fab047dd8086d61_49_new,"feathers.controls.BasicButton","new",0x433bfd58,"feathers.controls.BasicButton.new","feathers/controls/BasicButton.hx",49,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_92_get_currentState,"feathers.controls.BasicButton","get_currentState",0x3e0b5fa9,"feathers.controls.BasicButton.get_currentState","feathers/controls/BasicButton.hx",92,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_95_set_enabled,"feathers.controls.BasicButton","set_enabled",0x516a509c,"feathers.controls.BasicButton.set_enabled","feathers/controls/BasicButton.hx",95,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_170_getSkinForState,"feathers.controls.BasicButton","getSkinForState",0x099b2c93,"feathers.controls.BasicButton.getSkinForState","feathers/controls/BasicButton.hx",170,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_188_setSkinForState,"feathers.controls.BasicButton","setSkinForState",0x0566a99f,"feathers.controls.BasicButton.setSkinForState","feathers/controls/BasicButton.hx",188,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_205_initialize,"feathers.controls.BasicButton","initialize",0x6b4f1358,"feathers.controls.BasicButton.initialize","feathers/controls/BasicButton.hx",205,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_221_update,"feathers.controls.BasicButton","update",0xbe6dc411,"feathers.controls.BasicButton.update","feathers/controls/BasicButton.hx",221,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_227_commitChanges,"feathers.controls.BasicButton","commitChanges",0x4aa678c4,"feathers.controls.BasicButton.commitChanges","feathers/controls/BasicButton.hx",227,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_241_layoutContent,"feathers.controls.BasicButton","layoutContent",0xe0f0a2a7,"feathers.controls.BasicButton.layoutContent","feathers/controls/BasicButton.hx",241,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_245_refreshInteractivity,"feathers.controls.BasicButton","refreshInteractivity",0x06494e18,"feathers.controls.BasicButton.refreshInteractivity","feathers/controls/BasicButton.hx",245,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_248_refreshBackgroundSkin,"feathers.controls.BasicButton","refreshBackgroundSkin",0x6ea007be,"feathers.controls.BasicButton.refreshBackgroundSkin","feathers/controls/BasicButton.hx",248,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_258_getCurrentBackgroundSkin,"feathers.controls.BasicButton","getCurrentBackgroundSkin",0x2294cb36,"feathers.controls.BasicButton.getCurrentBackgroundSkin","feathers/controls/BasicButton.hx",258,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_266_addCurrentBackgroundSkin,"feathers.controls.BasicButton","addCurrentBackgroundSkin",0x54101bcb,"feathers.controls.BasicButton.addCurrentBackgroundSkin","feathers/controls/BasicButton.hx",266,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_288_removeCurrentBackgroundSkin,"feathers.controls.BasicButton","removeCurrentBackgroundSkin",0x5a7e51b8,"feathers.controls.BasicButton.removeCurrentBackgroundSkin","feathers/controls/BasicButton.hx",288,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_306_measure,"feathers.controls.BasicButton","measure",0x80b80456,"feathers.controls.BasicButton.measure","feathers/controls/BasicButton.hx",306,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_395_layoutBackgroundSkin,"feathers.controls.BasicButton","layoutBackgroundSkin",0xe11ff9dd,"feathers.controls.BasicButton.layoutBackgroundSkin","feathers/controls/BasicButton.hx",395,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_416_changeState,"feathers.controls.BasicButton","changeState",0xeca30379,"feathers.controls.BasicButton.changeState","feathers/controls/BasicButton.hx",416,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_429_basicButton_clickHandler,"feathers.controls.BasicButton","basicButton_clickHandler",0x56042809,"feathers.controls.BasicButton.basicButton_clickHandler","feathers/controls/BasicButton.hx",429,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_436_basicButton_touchTapHandler,"feathers.controls.BasicButton","basicButton_touchTapHandler",0x53690eff,"feathers.controls.BasicButton.basicButton_touchTapHandler","feathers/controls/BasicButton.hx",436,0xe11774f8)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_85_get_keepDownStateOnRollOut,"feathers.controls.BasicButton","get_keepDownStateOnRollOut",0x65d44319,"feathers.controls.BasicButton.get_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_99_set_keepDownStateOnRollOut,"feathers.controls.BasicButton","set_keepDownStateOnRollOut",0xc569098d,"feathers.controls.BasicButton.set_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_125_clearStyle_keepDownStateOnRollOut,"feathers.controls.BasicButton","clearStyle_keepDownStateOnRollOut",0xd3bc85fb,"feathers.controls.BasicButton.clearStyle_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_85_get_backgroundSkin,"feathers.controls.BasicButton","get_backgroundSkin",0x3bda705c,"feathers.controls.BasicButton.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_99_set_backgroundSkin,"feathers.controls.BasicButton","set_backgroundSkin",0x1889a2d0,"feathers.controls.BasicButton.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_76f8cc718bf95f4c_125_clearStyle_backgroundSkin,"feathers.controls.BasicButton","clearStyle_backgroundSkin",0xc494013e,"feathers.controls.BasicButton.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_9fab047dd8086d61_49_boot,"feathers.controls.BasicButton","boot",0x895ab03a,"feathers.controls.BasicButton.boot","feathers/controls/BasicButton.hx",49,0xe11774f8)
namespace feathers{
namespace controls{

void BasicButton_obj::__construct( ::Dynamic triggerListener){
            	HX_GC_STACKFRAME(&_hx_pos_9fab047dd8086d61_49_new)
HXLINE( 152)		this->_hx___backgroundSkin = null();
HXLINE( 129)		this->_hx___keepDownStateOnRollOut = false;
HXLINE( 154)		this->_stateToSkin =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 111)		this->_currentBackgroundSkin = null();
HXLINE( 110)		this->_backgroundSkinMeasurements = null();
HXLINE( 109)		this->_pointerTrigger = null();
HXLINE( 108)		this->_keyToState = null();
HXLINE( 107)		this->_pointerToState = null();
HXLINE(  76)		this->_currentState = ::feathers::controls::ButtonState_obj::UP_dyn();
HXLINE(  56)		super::__construct();
HXLINE(  62)		this->mouseChildren = false;
HXLINE(  64)		this->set_buttonMode(true);
HXLINE(  66)		this->useHandCursor = false;
HXLINE(  68)		this->addEventListener(HX_("click",48,7c,5e,48),this->basicButton_clickHandler_dyn(),null(),null(),null());
HXLINE(  69)		this->addEventListener(HX_("touchTap",e4,1b,15,00),this->basicButton_touchTapHandler_dyn(),null(),null(),null());
HXLINE(  71)		if (::hx::IsNotNull( triggerListener )) {
HXLINE(  72)			this->addEventListener(HX_("trigger",38,55,df,25),triggerListener,null(),null(),null());
            		}
            	}

Dynamic BasicButton_obj::__CreateEmpty() { return new BasicButton_obj; }

void *BasicButton_obj::_hx_vtable = 0;

Dynamic BasicButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicButton_obj > _hx_result = new BasicButton_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BasicButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
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
			return inClassId==(int)0x1085bfba || inClassId==(int)0x1f4df417;
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

static ::feathers::controls::ITriggerView_obj _hx_feathers_controls_BasicButton__hx_feathers_controls_ITriggerView= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicButton_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicButton_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::BasicButton_obj::initializeNow,
};

static ::feathers::core::IStateContext_obj _hx_feathers_controls_BasicButton__hx_feathers_core_IStateContext= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::willTrigger,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_currentState_2aa2127b,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_BasicButton__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::willTrigger,
};

static ::feathers::core::IUIControl_obj _hx_feathers_controls_BasicButton__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicButton_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicButton_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::BasicButton_obj::initializeNow,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_BasicButton__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicButton_obj::set_visible,
};

 ::Dynamic BasicButton_obj::get_currentState_2aa2127b() {
			return get_currentState();
}
void *BasicButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x056ced5a: return &_hx_feathers_controls_BasicButton__hx_feathers_controls_ITriggerView;
		case (int)0xa18fd6d8: return &_hx_feathers_controls_BasicButton__hx_feathers_core_IStateContext;
		case (int)0x87530281: return &_hx_feathers_controls_BasicButton__hx_openfl_events_IEventDispatcher;
		case (int)0x2696a04f: return &_hx_feathers_controls_BasicButton__hx_feathers_core_IUIControl;
		case (int)0x3a979a67: return &_hx_feathers_controls_BasicButton__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

 ::feathers::controls::ButtonState BasicButton_obj::get_currentState(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_92_get_currentState)
HXDLIN(  92)		return this->_currentState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,get_currentState,return )

bool BasicButton_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_95_set_enabled)
HXLINE(  96)		this->super::set_enabled(value);
HXLINE(  97)		if (this->_enabled) {
HXLINE(  98)			if (::hx::IsPointerEq( this->_currentState,::feathers::controls::ButtonState_obj::DISABLED_dyn() )) {
HXLINE(  99)				this->changeState(::feathers::controls::ButtonState_obj::UP_dyn());
            			}
            		}
            		else {
HXLINE( 102)			this->changeState(::feathers::controls::ButtonState_obj::DISABLED_dyn());
            		}
HXLINE( 104)		return this->_enabled;
            	}


 ::openfl::display::DisplayObject BasicButton_obj::getSkinForState( ::feathers::controls::ButtonState state){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_170_getSkinForState)
HXDLIN( 170)		return this->_stateToSkin->get(state).StaticCast<  ::openfl::display::DisplayObject >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,getSkinForState,return )

void BasicButton_obj::setSkinForState( ::feathers::controls::ButtonState state, ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_188_setSkinForState)
HXLINE( 189)		if (!(this->setStyle(HX_("setSkinForState",a7,e8,72,5e),state))) {
HXLINE( 190)			return;
            		}
HXLINE( 192)		 ::openfl::display::DisplayObject oldSkin = this->_stateToSkin->get(state).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 193)		bool _hx_tmp;
HXDLIN( 193)		if (::hx::IsNotNull( oldSkin )) {
HXLINE( 193)			_hx_tmp = ::hx::IsInstanceEq( oldSkin,this->_currentBackgroundSkin );
            		}
            		else {
HXLINE( 193)			_hx_tmp = false;
            		}
HXDLIN( 193)		if (_hx_tmp) {
HXLINE( 194)			this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 195)			this->_currentBackgroundSkin = null();
            		}
HXLINE( 197)		if (::hx::IsNull( skin )) {
HXLINE( 198)			this->_stateToSkin->remove(state);
            		}
            		else {
HXLINE( 200)			this->_stateToSkin->set(state,skin);
            		}
HXLINE( 202)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(BasicButton_obj,setSkinForState,(void))

void BasicButton_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_9fab047dd8086d61_205_initialize)
HXLINE( 206)		this->super::initialize();
HXLINE( 208)		if (::hx::IsNull( this->_pointerToState )) {
HXLINE( 209)			this->_pointerToState =  ::feathers::utils::PointerToState_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->changeState_dyn(),::feathers::controls::ButtonState_obj::UP_dyn(),::feathers::controls::ButtonState_obj::DOWN_dyn(),::feathers::controls::ButtonState_obj::HOVER_dyn());
            		}
HXLINE( 212)		if (::hx::IsNull( this->_keyToState )) {
HXLINE( 213)			this->_keyToState =  ::feathers::utils::KeyToState_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->changeState_dyn(),::feathers::controls::ButtonState_obj::UP_dyn(),::feathers::controls::ButtonState_obj::DOWN_dyn());
            		}
HXLINE( 216)		if (::hx::IsNull( this->_pointerTrigger )) {
HXLINE( 217)			this->_pointerTrigger =  ::feathers::utils::PointerTrigger_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null());
            		}
            	}


void BasicButton_obj::update(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_221_update)
HXLINE( 222)		this->commitChanges();
HXLINE( 223)		this->measure();
HXLINE( 224)		this->layoutContent();
            	}


void BasicButton_obj::commitChanges(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_227_commitChanges)
HXLINE( 228)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 229)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 231)		bool _hx_tmp;
HXDLIN( 231)		if (!(stylesInvalid)) {
HXLINE( 231)			_hx_tmp = stateInvalid;
            		}
            		else {
HXLINE( 231)			_hx_tmp = true;
            		}
HXDLIN( 231)		if (_hx_tmp) {
HXLINE( 232)			this->refreshBackgroundSkin();
            		}
HXLINE( 235)		if (stylesInvalid) {
HXLINE( 236)			this->refreshInteractivity();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,commitChanges,(void))

void BasicButton_obj::layoutContent(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_241_layoutContent)
HXDLIN( 241)		this->layoutBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,layoutContent,(void))

void BasicButton_obj::refreshInteractivity(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_245_refreshInteractivity)
HXDLIN( 245)		 ::feathers::utils::PointerToState _hx_tmp = this->_pointerToState;
HXDLIN( 245)		_hx_tmp->set_keepDownStateOnRollOut(this->get_keepDownStateOnRollOut());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,refreshInteractivity,(void))

void BasicButton_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_248_refreshBackgroundSkin)
HXLINE( 249)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 250)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 251)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 252)			return;
            		}
HXLINE( 254)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 255)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject BasicButton_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_258_getCurrentBackgroundSkin)
HXLINE( 259)		 ::openfl::display::DisplayObject result = this->_stateToSkin->get(this->_currentState).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 260)		if (::hx::IsNotNull( result )) {
HXLINE( 261)			return result;
            		}
HXLINE( 263)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,getCurrentBackgroundSkin,return )

void BasicButton_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_9fab047dd8086d61_266_addCurrentBackgroundSkin)
HXLINE( 267)		if (::hx::IsNull( skin )) {
HXLINE( 268)			this->_backgroundSkinMeasurements = null();
HXLINE( 269)			return;
            		}
HXLINE( 271)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 272)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 274)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 275)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 277)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 279)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 280)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 282)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IStateObserver >())) {
HXLINE( 283)			::feathers::core::IStateObserver_obj::set_stateContext( ::hx::interface_check(skin,0xb36ec70d),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 285)		this->addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,addCurrentBackgroundSkin,(void))

void BasicButton_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_288_removeCurrentBackgroundSkin)
HXLINE( 289)		if (::hx::IsNull( skin )) {
HXLINE( 290)			return;
            		}
HXLINE( 292)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 293)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 295)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IStateObserver >())) {
HXLINE( 296)			::feathers::core::IStateObserver_obj::set_stateContext( ::hx::interface_check(skin,0xb36ec70d),null());
            		}
HXLINE( 300)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 301)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 302)			this->removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,removeCurrentBackgroundSkin,(void))

bool BasicButton_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_306_measure)
HXLINE( 307)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 308)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 309)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 310)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 311)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 312)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 313)		bool _hx_tmp;
HXDLIN( 313)		bool _hx_tmp1;
HXDLIN( 313)		bool _hx_tmp2;
HXDLIN( 313)		bool _hx_tmp3;
HXDLIN( 313)		bool _hx_tmp4;
HXDLIN( 313)		if (!(needsWidth)) {
HXLINE( 313)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 313)			_hx_tmp4 = false;
            		}
HXDLIN( 313)		if (_hx_tmp4) {
HXLINE( 313)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 313)			_hx_tmp3 = false;
            		}
HXDLIN( 313)		if (_hx_tmp3) {
HXLINE( 313)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 313)			_hx_tmp2 = false;
            		}
HXDLIN( 313)		if (_hx_tmp2) {
HXLINE( 313)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 313)			_hx_tmp1 = false;
            		}
HXDLIN( 313)		if (_hx_tmp1) {
HXLINE( 313)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 313)			_hx_tmp = false;
            		}
HXDLIN( 313)		if (_hx_tmp) {
HXLINE( 314)			return false;
            		}
HXLINE( 317)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 318)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 321)		::Dynamic measureSkin = null();
HXLINE( 322)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 323)			measureSkin =  ::hx::interface_check(this->_currentBackgroundSkin,0xcfc32883);
            		}
HXLINE( 326)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 327)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
HXLINE( 330)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 331)		if (needsWidth) {
HXLINE( 332)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 333)				newWidth = this->_currentBackgroundSkin->get_width();
            			}
            			else {
HXLINE( 335)				newWidth = ((Float)0.0);
            			}
            		}
HXLINE( 339)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 340)		if (needsHeight) {
HXLINE( 341)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 342)				newHeight = this->_currentBackgroundSkin->get_height();
            			}
            			else {
HXLINE( 344)				newHeight = ((Float)0.0);
            			}
            		}
HXLINE( 348)		 ::Dynamic newMinWidth = this->get_explicitMinWidth();
HXLINE( 349)		if (needsMinWidth) {
HXLINE( 350)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 351)				newMinWidth = ::feathers::core::IMeasureObject_obj::get_minWidth(measureSkin);
            			}
            			else {
HXLINE( 352)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 353)					newMinWidth = this->_backgroundSkinMeasurements->minWidth;
            				}
            				else {
HXLINE( 355)					newMinWidth = ((Float)0.0);
            				}
            			}
            		}
HXLINE( 359)		 ::Dynamic newMinHeight = this->get_explicitMinHeight();
HXLINE( 360)		if (needsMinHeight) {
HXLINE( 361)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 362)				newMinHeight = ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin);
            			}
            			else {
HXLINE( 363)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 364)					newMinHeight = this->_backgroundSkinMeasurements->minHeight;
            				}
            				else {
HXLINE( 366)					newMinHeight = ((Float)0.0);
            				}
            			}
            		}
HXLINE( 370)		 ::Dynamic newMaxWidth = this->get_explicitMaxWidth();
HXLINE( 371)		if (needsMaxWidth) {
HXLINE( 372)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 373)				newMaxWidth = ::feathers::core::IMeasureObject_obj::get_maxWidth(measureSkin);
            			}
            			else {
HXLINE( 374)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 375)					newMaxWidth = this->_backgroundSkinMeasurements->maxWidth;
            				}
            				else {
HXLINE( 377)					newMaxWidth = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 381)		 ::Dynamic newMaxHeight = this->get_explicitMaxHeight();
HXLINE( 382)		if (needsMaxHeight) {
HXLINE( 383)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 384)				newMaxHeight = ::feathers::core::IMeasureObject_obj::get_maxHeight(measureSkin);
            			}
            			else {
HXLINE( 385)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 386)					newMaxHeight = this->_backgroundSkinMeasurements->maxHeight;
            				}
            				else {
HXLINE( 388)					newMaxHeight = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 392)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,newMaxHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,measure,return )

void BasicButton_obj::layoutBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_395_layoutBackgroundSkin)
HXLINE( 396)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 397)			return;
            		}
HXLINE( 399)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 400)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 405)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 405)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 406)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 408)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 408)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 409)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 411)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 412)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,layoutBackgroundSkin,(void))

void BasicButton_obj::changeState( ::feathers::controls::ButtonState state){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_416_changeState)
HXLINE( 417)		if (!(this->_enabled)) {
HXLINE( 418)			state = ::feathers::controls::ButtonState_obj::DISABLED_dyn();
            		}
HXLINE( 420)		if (::hx::IsPointerEq( this->_currentState,state )) {
HXLINE( 421)			return;
            		}
HXLINE( 423)		this->_currentState = state;
HXLINE( 424)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 425)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("stateChange",61,de,fb,31),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,changeState,(void))

void BasicButton_obj::basicButton_clickHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_429_basicButton_clickHandler)
HXDLIN( 429)		if (!(this->_enabled)) {
HXLINE( 430)			event->stopImmediatePropagation();
HXLINE( 431)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,basicButton_clickHandler,(void))

void BasicButton_obj::basicButton_touchTapHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_436_basicButton_touchTapHandler)
HXDLIN( 436)		if (!(this->_enabled)) {
HXLINE( 437)			event->stopImmediatePropagation();
HXLINE( 438)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,basicButton_touchTapHandler,(void))

bool BasicButton_obj::get_keepDownStateOnRollOut(){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_85_get_keepDownStateOnRollOut)
HXDLIN(  85)		return this->_hx___keepDownStateOnRollOut;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,get_keepDownStateOnRollOut,return )

bool BasicButton_obj::set_keepDownStateOnRollOut(bool value){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_99_set_keepDownStateOnRollOut)
HXLINE( 100)		if (!(this->setStyle(HX_("keepDownStateOnRollOut",48,7f,38,c2),null()))) {
HXLINE( 101)			return this->_hx___keepDownStateOnRollOut;
            		}
HXLINE( 103)		if ((this->_hx___keepDownStateOnRollOut == value)) {
HXLINE( 104)			return this->_hx___keepDownStateOnRollOut;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_keepDownStateOnRollOut_dyn();
HXLINE( 110)		this->_hx___keepDownStateOnRollOut = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___keepDownStateOnRollOut;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,set_keepDownStateOnRollOut,return )

bool BasicButton_obj::clearStyle_keepDownStateOnRollOut(){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_125_clearStyle_keepDownStateOnRollOut)
HXLINE( 126)		this->set_keepDownStateOnRollOut(false);
HXLINE( 127)		return this->get_keepDownStateOnRollOut();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,clearStyle_keepDownStateOnRollOut,return )

 ::openfl::display::DisplayObject BasicButton_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject BasicButton_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_99_set_backgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("backgroundSkin",8b,65,6f,20),null()))) {
HXLINE( 101)			return this->_hx___backgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___backgroundSkin,value )) {
HXLINE( 104)			return this->_hx___backgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_backgroundSkin_dyn();
HXLINE( 110)		this->_hx___backgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicButton_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject BasicButton_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_76f8cc718bf95f4c_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicButton_obj,clearStyle_backgroundSkin,return )


::hx::ObjectPtr< BasicButton_obj > BasicButton_obj::__new( ::Dynamic triggerListener) {
	::hx::ObjectPtr< BasicButton_obj > __this = new BasicButton_obj();
	__this->__construct(triggerListener);
	return __this;
}

::hx::ObjectPtr< BasicButton_obj > BasicButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic triggerListener) {
	BasicButton_obj *__this = (BasicButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicButton_obj), true, "feathers.controls.BasicButton"));
	*(void **)__this = BasicButton_obj::_hx_vtable;
	__this->__construct(triggerListener);
	return __this;
}

BasicButton_obj::BasicButton_obj()
{
}

void BasicButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicButton);
	HX_MARK_MEMBER_NAME(_currentState,"_currentState");
	HX_MARK_MEMBER_NAME(_pointerToState,"_pointerToState");
	HX_MARK_MEMBER_NAME(_keyToState,"_keyToState");
	HX_MARK_MEMBER_NAME(_pointerTrigger,"_pointerTrigger");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_stateToSkin,"_stateToSkin");
	HX_MARK_MEMBER_NAME(_hx___keepDownStateOnRollOut,"__keepDownStateOnRollOut");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentState,"_currentState");
	HX_VISIT_MEMBER_NAME(_pointerToState,"_pointerToState");
	HX_VISIT_MEMBER_NAME(_keyToState,"_keyToState");
	HX_VISIT_MEMBER_NAME(_pointerTrigger,"_pointerTrigger");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_stateToSkin,"_stateToSkin");
	HX_VISIT_MEMBER_NAME(_hx___keepDownStateOnRollOut,"__keepDownStateOnRollOut");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_keyToState") ) { return ::hx::Val( _keyToState ); }
		if (HX_FIELD_EQ(inName,"changeState") ) { return ::hx::Val( changeState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentState() ); }
		if (HX_FIELD_EQ(inName,"_stateToSkin") ) { return ::hx::Val( _stateToSkin ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { return ::hx::Val( _currentState ); }
		if (HX_FIELD_EQ(inName,"commitChanges") ) { return ::hx::Val( commitChanges_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pointerToState") ) { return ::hx::Val( _pointerToState ); }
		if (HX_FIELD_EQ(inName,"_pointerTrigger") ) { return ::hx::Val( _pointerTrigger ); }
		if (HX_FIELD_EQ(inName,"getSkinForState") ) { return ::hx::Val( getSkinForState_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSkinForState") ) { return ::hx::Val( setSkinForState_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentState") ) { return ::hx::Val( get_currentState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"refreshInteractivity") ) { return ::hx::Val( refreshInteractivity_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutBackgroundSkin") ) { return ::hx::Val( layoutBackgroundSkin_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"keepDownStateOnRollOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_keepDownStateOnRollOut() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"basicButton_clickHandler") ) { return ::hx::Val( basicButton_clickHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"__keepDownStateOnRollOut") ) { return ::hx::Val( _hx___keepDownStateOnRollOut ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_keepDownStateOnRollOut") ) { return ::hx::Val( get_keepDownStateOnRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_keepDownStateOnRollOut") ) { return ::hx::Val( set_keepDownStateOnRollOut_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"basicButton_touchTapHandler") ) { return ::hx::Val( basicButton_touchTapHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_keepDownStateOnRollOut") ) { return ::hx::Val( clearStyle_keepDownStateOnRollOut_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_keyToState") ) { _keyToState=inValue.Cast<  ::feathers::utils::KeyToState >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stateToSkin") ) { _stateToSkin=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { _currentState=inValue.Cast<  ::feathers::controls::ButtonState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pointerToState") ) { _pointerToState=inValue.Cast<  ::feathers::utils::PointerToState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointerTrigger") ) { _pointerTrigger=inValue.Cast<  ::feathers::utils::PointerTrigger >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keepDownStateOnRollOut") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_keepDownStateOnRollOut(inValue.Cast< bool >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__keepDownStateOnRollOut") ) { _hx___keepDownStateOnRollOut=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_currentState",f7,ed,85,ad));
	outFields->push(HX_("currentState",18,5b,17,cb));
	outFields->push(HX_("_pointerToState",f8,b3,15,fc));
	outFields->push(HX_("_keyToState",d6,2f,a1,91));
	outFields->push(HX_("_pointerTrigger",9a,46,65,d1));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("keepDownStateOnRollOut",48,7f,38,c2));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("_stateToSkin",8a,7c,a1,62));
	outFields->push(HX_("__keepDownStateOnRollOut",68,2a,a8,3f));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::ButtonState */ ,(int)offsetof(BasicButton_obj,_currentState),HX_("_currentState",f7,ed,85,ad)},
	{::hx::fsObject /*  ::feathers::utils::PointerToState */ ,(int)offsetof(BasicButton_obj,_pointerToState),HX_("_pointerToState",f8,b3,15,fc)},
	{::hx::fsObject /*  ::feathers::utils::KeyToState */ ,(int)offsetof(BasicButton_obj,_keyToState),HX_("_keyToState",d6,2f,a1,91)},
	{::hx::fsObject /*  ::feathers::utils::PointerTrigger */ ,(int)offsetof(BasicButton_obj,_pointerTrigger),HX_("_pointerTrigger",9a,46,65,d1)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BasicButton_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BasicButton_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(BasicButton_obj,_stateToSkin),HX_("_stateToSkin",8a,7c,a1,62)},
	{::hx::fsBool,(int)offsetof(BasicButton_obj,_hx___keepDownStateOnRollOut),HX_("__keepDownStateOnRollOut",68,2a,a8,3f)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BasicButton_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicButton_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicButton_obj_sMemberFields[] = {
	HX_("_currentState",f7,ed,85,ad),
	HX_("get_currentState",a1,47,b6,cf),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_pointerToState",f8,b3,15,fc),
	HX_("_keyToState",d6,2f,a1,91),
	HX_("_pointerTrigger",9a,46,65,d1),
	HX_("_backgroundSkinMeasurements",41,46,9b,f8),
	HX_("_currentBackgroundSkin",e5,c0,55,58),
	HX_("_stateToSkin",8a,7c,a1,62),
	HX_("getSkinForState",9b,6b,a7,62),
	HX_("setSkinForState",a7,e8,72,5e),
	HX_("initialize",50,31,bb,ec),
	HX_("update",09,86,05,87),
	HX_("commitChanges",cc,65,d7,43),
	HX_("layoutContent",af,8f,21,da),
	HX_("refreshInteractivity",10,92,53,10),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutBackgroundSkin",d5,3d,2a,eb),
	HX_("changeState",81,1e,d1,a9),
	HX_("basicButton_clickHandler",01,c8,4b,d1),
	HX_("basicButton_touchTapHandler",07,ba,5b,9b),
	HX_("__keepDownStateOnRollOut",68,2a,a8,3f),
	HX_("get_keepDownStateOnRollOut",11,d1,3d,fa),
	HX_("set_keepDownStateOnRollOut",85,97,d2,59),
	HX_("clearStyle_keepDownStateOnRollOut",03,27,2d,c0),
	HX_("__backgroundSkin",ab,f0,ae,54),
	HX_("get_backgroundSkin",54,46,09,bc),
	HX_("set_backgroundSkin",c8,78,b8,98),
	HX_("clearStyle_backgroundSkin",46,5a,f8,27),
	::String(null()) };

::hx::Class BasicButton_obj::__mClass;

void BasicButton_obj::__register()
{
	BasicButton_obj _hx_dummy;
	BasicButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.BasicButton",66,b1,f4,f2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BasicButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9fab047dd8086d61_49_boot)
HXDLIN(  49)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("setSkinForState",a7,e8,72,5e), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null()))))));
            	}
}

} // end namespace feathers
} // end namespace controls
