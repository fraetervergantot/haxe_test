#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicToggleButton
#include <feathers/controls/BasicToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_ToggleButtonState
#include <feathers/controls/ToggleButtonState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e33c116aa54be7a2_55_new,"feathers.controls.BasicToggleButton","new",0x2a1e110c,"feathers.controls.BasicToggleButton.new","feathers/controls/BasicToggleButton.hx",55,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_99_get_currentState,"feathers.controls.BasicToggleButton","get_currentState",0xf0f80b75,"feathers.controls.BasicToggleButton.get_currentState","feathers/controls/BasicToggleButton.hx",99,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_102_set_enabled,"feathers.controls.BasicToggleButton","set_enabled",0x26d53850,"feathers.controls.BasicToggleButton.set_enabled","feathers/controls/BasicToggleButton.hx",102,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_156_get_selected,"feathers.controls.BasicToggleButton","get_selected",0x837d2838,"feathers.controls.BasicToggleButton.get_selected","feathers/controls/BasicToggleButton.hx",156,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_159_set_selected,"feathers.controls.BasicToggleButton","set_selected",0x98764bac,"feathers.controls.BasicToggleButton.set_selected","feathers/controls/BasicToggleButton.hx",159,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_194_get_toggleable,"feathers.controls.BasicToggleButton","get_toggleable",0x61b6764b,"feathers.controls.BasicToggleButton.get_toggleable","feathers/controls/BasicToggleButton.hx",194,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_197_set_toggleable,"feathers.controls.BasicToggleButton","set_toggleable",0x81d65ebf,"feathers.controls.BasicToggleButton.set_toggleable","feathers/controls/BasicToggleButton.hx",197,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_290_getSkinForState,"feathers.controls.BasicToggleButton","getSkinForState",0x1025fe47,"feathers.controls.BasicToggleButton.getSkinForState","feathers/controls/BasicToggleButton.hx",290,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_308_setSkinForState,"feathers.controls.BasicToggleButton","setSkinForState",0x0bf17b53,"feathers.controls.BasicToggleButton.setSkinForState","feathers/controls/BasicToggleButton.hx",308,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_325_initialize,"feathers.controls.BasicToggleButton","initialize",0xfa9d9e24,"feathers.controls.BasicToggleButton.initialize","feathers/controls/BasicToggleButton.hx",325,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_341_update,"feathers.controls.BasicToggleButton","update",0xd6d3f8dd,"feathers.controls.BasicToggleButton.update","feathers/controls/BasicToggleButton.hx",341,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_347_commitChanges,"feathers.controls.BasicToggleButton","commitChanges",0x7e61b578,"feathers.controls.BasicToggleButton.commitChanges","feathers/controls/BasicToggleButton.hx",347,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_362_refreshInteractivity,"feathers.controls.BasicToggleButton","refreshInteractivity",0x9a25cfe4,"feathers.controls.BasicToggleButton.refreshInteractivity","feathers/controls/BasicToggleButton.hx",362,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_365_refreshBackgroundSkin,"feathers.controls.BasicToggleButton","refreshBackgroundSkin",0x3bb51872,"feathers.controls.BasicToggleButton.refreshBackgroundSkin","feathers/controls/BasicToggleButton.hx",365,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_375_getCurrentBackgroundSkin,"feathers.controls.BasicToggleButton","getCurrentBackgroundSkin",0xfb042302,"feathers.controls.BasicToggleButton.getCurrentBackgroundSkin","feathers/controls/BasicToggleButton.hx",375,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_386_addCurrentBackgroundSkin,"feathers.controls.BasicToggleButton","addCurrentBackgroundSkin",0x2c7f7397,"feathers.controls.BasicToggleButton.addCurrentBackgroundSkin","feathers/controls/BasicToggleButton.hx",386,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_408_removeCurrentBackgroundSkin,"feathers.controls.BasicToggleButton","removeCurrentBackgroundSkin",0x39d6e16c,"feathers.controls.BasicToggleButton.removeCurrentBackgroundSkin","feathers/controls/BasicToggleButton.hx",408,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_426_measure,"feathers.controls.BasicToggleButton","measure",0xc1c0020a,"feathers.controls.BasicToggleButton.measure","feathers/controls/BasicToggleButton.hx",426,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_515_layoutContent,"feathers.controls.BasicToggleButton","layoutContent",0x14abdf5b,"feathers.controls.BasicToggleButton.layoutContent","feathers/controls/BasicToggleButton.hx",515,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_518_layoutBackgroundSkin,"feathers.controls.BasicToggleButton","layoutBackgroundSkin",0x74fc7ba9,"feathers.controls.BasicToggleButton.layoutBackgroundSkin","feathers/controls/BasicToggleButton.hx",518,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_539_changeState,"feathers.controls.BasicToggleButton","changeState",0xc20deb2d,"feathers.controls.BasicToggleButton.changeState","feathers/controls/BasicToggleButton.hx",539,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_572_basicToggleButton_clickHandler,"feathers.controls.BasicToggleButton","basicToggleButton_clickHandler",0xdbce5d21,"feathers.controls.BasicToggleButton.basicToggleButton_clickHandler","feathers/controls/BasicToggleButton.hx",572,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_579_basicToggleButton_touchTapHandler,"feathers.controls.BasicToggleButton","basicToggleButton_touchTapHandler",0x200b18e7,"feathers.controls.BasicToggleButton.basicToggleButton_touchTapHandler","feathers/controls/BasicToggleButton.hx",579,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_585_basicToggleButton_triggerHandler,"feathers.controls.BasicToggleButton","basicToggleButton_triggerHandler",0x3cde6ff1,"feathers.controls.BasicToggleButton.basicToggleButton_triggerHandler","feathers/controls/BasicToggleButton.hx",585,0x61a97bc4)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_85_get_keepDownStateOnRollOut,"feathers.controls.BasicToggleButton","get_keepDownStateOnRollOut",0xbaa225e5,"feathers.controls.BasicToggleButton.get_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_99_set_keepDownStateOnRollOut,"feathers.controls.BasicToggleButton","set_keepDownStateOnRollOut",0x1a36ec59,"feathers.controls.BasicToggleButton.set_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_125_clearStyle_keepDownStateOnRollOut,"feathers.controls.BasicToggleButton","clearStyle_keepDownStateOnRollOut",0x7f81d4af,"feathers.controls.BasicToggleButton.clearStyle_keepDownStateOnRollOut","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_85_get_backgroundSkin,"feathers.controls.BasicToggleButton","get_backgroundSkin",0x0422a728,"feathers.controls.BasicToggleButton.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_99_set_backgroundSkin,"feathers.controls.BasicToggleButton","set_backgroundSkin",0xe0d1d99c,"feathers.controls.BasicToggleButton.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_125_clearStyle_backgroundSkin,"feathers.controls.BasicToggleButton","clearStyle_backgroundSkin",0x4d917bf2,"feathers.controls.BasicToggleButton.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_85_get_selectedBackgroundSkin,"feathers.controls.BasicToggleButton","get_selectedBackgroundSkin",0x770313e3,"feathers.controls.BasicToggleButton.get_selectedBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_99_set_selectedBackgroundSkin,"feathers.controls.BasicToggleButton","set_selectedBackgroundSkin",0xd697da57,"feathers.controls.BasicToggleButton.set_selectedBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d430f7113eb44ec1_125_clearStyle_selectedBackgroundSkin,"feathers.controls.BasicToggleButton","clearStyle_selectedBackgroundSkin",0x3be2c2ad,"feathers.controls.BasicToggleButton.clearStyle_selectedBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_e33c116aa54be7a2_55_boot,"feathers.controls.BasicToggleButton","boot",0xa849da06,"feathers.controls.BasicToggleButton.boot","feathers/controls/BasicToggleButton.hx",55,0x61a97bc4)
namespace feathers{
namespace controls{

void BasicToggleButton_obj::__construct( ::Dynamic changeListener){
            	HX_GC_STACKFRAME(&_hx_pos_e33c116aa54be7a2_55_new)
HXLINE( 272)		this->_hx___selectedBackgroundSkin = null();
HXLINE( 248)		this->_hx___backgroundSkin = null();
HXLINE( 227)		this->_hx___keepDownStateOnRollOut = false;
HXLINE( 274)		this->_stateToSkin =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 209)		this->_currentBackgroundSkin = null();
HXLINE( 208)		this->_backgroundSkinMeasurements = null();
HXLINE( 207)		this->_pointerTrigger = null();
HXLINE( 206)		this->_keyToState = null();
HXLINE( 205)		this->_pointerToState = null();
HXLINE( 171)		this->_toggleable = true;
HXLINE( 116)		this->_selected = false;
HXLINE(  83)		this->_currentState = ::feathers::controls::ToggleButtonState_obj::UP(false);
HXLINE(  62)		super::__construct();
HXLINE(  68)		this->mouseChildren = false;
HXLINE(  70)		this->set_buttonMode(true);
HXLINE(  72)		this->useHandCursor = false;
HXLINE(  74)		this->addEventListener(HX_("click",48,7c,5e,48),this->basicToggleButton_clickHandler_dyn(),null(),null(),null());
HXLINE(  75)		this->addEventListener(HX_("touchTap",e4,1b,15,00),this->basicToggleButton_touchTapHandler_dyn(),null(),null(),null());
HXLINE(  76)		this->addEventListener(HX_("trigger",38,55,df,25),this->basicToggleButton_triggerHandler_dyn(),null(),null(),null());
HXLINE(  78)		if (::hx::IsNotNull( changeListener )) {
HXLINE(  79)			this->addEventListener(HX_("change",70,91,72,b7),changeListener,null(),null(),null());
            		}
            	}

Dynamic BasicToggleButton_obj::__CreateEmpty() { return new BasicToggleButton_obj; }

void *BasicToggleButton_obj::_hx_vtable = 0;

Dynamic BasicToggleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicToggleButton_obj > _hx_result = new BasicToggleButton_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BasicToggleButton_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x1727ecc2 || inClassId==(int)0x1f4df417;
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

static ::feathers::controls::ITriggerView_obj _hx_feathers_controls_BasicToggleButton__hx_feathers_controls_ITriggerView= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::initializeNow,
};

static ::feathers::core::IStateContext_obj _hx_feathers_controls_BasicToggleButton__hx_feathers_core_IStateContext= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_currentState_2aa2127b,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_BasicToggleButton__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
};

static ::feathers::controls::IToggle_obj _hx_feathers_controls_BasicToggleButton__hx_feathers_controls_IToggle= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::initializeNow,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_selected,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_selected,
};

static ::feathers::core::IUIControl_obj _hx_feathers_controls_BasicToggleButton__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::initializeNow,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_BasicToggleButton__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::BasicToggleButton_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::BasicToggleButton_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::BasicToggleButton_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::BasicToggleButton_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::BasicToggleButton_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::BasicToggleButton_obj::set_visible,
};

 ::Dynamic BasicToggleButton_obj::get_currentState_2aa2127b() {
			return get_currentState();
}
void *BasicToggleButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x056ced5a: return &_hx_feathers_controls_BasicToggleButton__hx_feathers_controls_ITriggerView;
		case (int)0xa18fd6d8: return &_hx_feathers_controls_BasicToggleButton__hx_feathers_core_IStateContext;
		case (int)0x87530281: return &_hx_feathers_controls_BasicToggleButton__hx_openfl_events_IEventDispatcher;
		case (int)0xdea06717: return &_hx_feathers_controls_BasicToggleButton__hx_feathers_controls_IToggle;
		case (int)0x2696a04f: return &_hx_feathers_controls_BasicToggleButton__hx_feathers_core_IUIControl;
		case (int)0x3a979a67: return &_hx_feathers_controls_BasicToggleButton__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

 ::feathers::controls::ToggleButtonState BasicToggleButton_obj::get_currentState(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_99_get_currentState)
HXDLIN(  99)		return this->_currentState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_currentState,return )

bool BasicToggleButton_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_102_set_enabled)
HXLINE( 103)		this->super::set_enabled(value);
HXLINE( 104)		if (this->_enabled) {
HXLINE( 105)			 ::feathers::controls::ToggleButtonState _g = this->_currentState;
HXDLIN( 105)			if ((_g->_hx_getIndex() == 3)) {
HXLINE( 106)				bool selected = _g->_hx_getBool(0);
HXLINE( 107)				this->changeState(::feathers::controls::ToggleButtonState_obj::UP(selected));
            			}
            		}
            		else {
HXLINE( 111)			this->changeState(::feathers::controls::ToggleButtonState_obj::DISABLED(this->_selected));
            		}
HXLINE( 113)		return this->_enabled;
            	}


bool BasicToggleButton_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_156_get_selected)
HXDLIN( 156)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_selected,return )

bool BasicToggleButton_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_159_set_selected)
HXLINE( 160)		if ((this->_selected == value)) {
HXLINE( 161)			return this->_selected;
            		}
HXLINE( 163)		this->_selected = value;
HXLINE( 164)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 165)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 166)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 167)		this->changeState(this->get_currentState());
HXLINE( 168)		return this->_selected;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,set_selected,return )

bool BasicToggleButton_obj::get_toggleable(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_194_get_toggleable)
HXDLIN( 194)		return this->_toggleable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_toggleable,return )

bool BasicToggleButton_obj::set_toggleable(bool value){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_197_set_toggleable)
HXLINE( 198)		if ((this->_toggleable == value)) {
HXLINE( 199)			return this->_toggleable;
            		}
HXLINE( 201)		this->_toggleable = value;
HXLINE( 202)		return this->_toggleable;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,set_toggleable,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::getSkinForState( ::feathers::controls::ToggleButtonState state){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_290_getSkinForState)
HXDLIN( 290)		return this->_stateToSkin->get(state).StaticCast<  ::openfl::display::DisplayObject >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,getSkinForState,return )

void BasicToggleButton_obj::setSkinForState( ::feathers::controls::ToggleButtonState state, ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_308_setSkinForState)
HXLINE( 309)		if (!(this->setStyle(HX_("setSkinForState",a7,e8,72,5e),state))) {
HXLINE( 310)			return;
            		}
HXLINE( 312)		 ::openfl::display::DisplayObject oldSkin = this->_stateToSkin->get(state).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 313)		bool _hx_tmp;
HXDLIN( 313)		if (::hx::IsNotNull( oldSkin )) {
HXLINE( 313)			_hx_tmp = ::hx::IsInstanceEq( oldSkin,this->_currentBackgroundSkin );
            		}
            		else {
HXLINE( 313)			_hx_tmp = false;
            		}
HXDLIN( 313)		if (_hx_tmp) {
HXLINE( 314)			this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 315)			this->_currentBackgroundSkin = null();
            		}
HXLINE( 317)		if (::hx::IsNull( skin )) {
HXLINE( 318)			this->_stateToSkin->remove(state);
            		}
            		else {
HXLINE( 320)			this->_stateToSkin->set(state,skin);
            		}
HXLINE( 322)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(BasicToggleButton_obj,setSkinForState,(void))

void BasicToggleButton_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_e33c116aa54be7a2_325_initialize)
HXLINE( 326)		this->super::initialize();
HXLINE( 328)		if (::hx::IsNull( this->_pointerToState )) {
HXLINE( 329)			this->_pointerToState =  ::feathers::utils::PointerToState_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->changeState_dyn(),::feathers::controls::ToggleButtonState_obj::UP(false),::feathers::controls::ToggleButtonState_obj::DOWN(false),::feathers::controls::ToggleButtonState_obj::HOVER(false));
            		}
HXLINE( 332)		if (::hx::IsNull( this->_keyToState )) {
HXLINE( 333)			this->_keyToState =  ::feathers::utils::KeyToState_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),this->changeState_dyn(),::feathers::controls::ToggleButtonState_obj::UP(false),::feathers::controls::ToggleButtonState_obj::DOWN(false));
            		}
HXLINE( 336)		if (::hx::IsNull( this->_pointerTrigger )) {
HXLINE( 337)			this->_pointerTrigger =  ::feathers::utils::PointerTrigger_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null());
            		}
            	}


void BasicToggleButton_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_341_update)
HXLINE( 342)		this->commitChanges();
HXLINE( 343)		this->measure();
HXLINE( 344)		this->layoutContent();
            	}


void BasicToggleButton_obj::commitChanges(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_347_commitChanges)
HXLINE( 348)		bool selectionInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 349)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 350)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 352)		bool _hx_tmp;
HXDLIN( 352)		bool _hx_tmp1;
HXDLIN( 352)		if (!(selectionInvalid)) {
HXLINE( 352)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 352)			_hx_tmp1 = true;
            		}
HXDLIN( 352)		if (!(_hx_tmp1)) {
HXLINE( 352)			_hx_tmp = stylesInvalid;
            		}
            		else {
HXLINE( 352)			_hx_tmp = true;
            		}
HXDLIN( 352)		if (_hx_tmp) {
HXLINE( 353)			this->refreshBackgroundSkin();
            		}
HXLINE( 356)		if (stylesInvalid) {
HXLINE( 357)			this->refreshInteractivity();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,commitChanges,(void))

void BasicToggleButton_obj::refreshInteractivity(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_362_refreshInteractivity)
HXDLIN( 362)		 ::feathers::utils::PointerToState _hx_tmp = this->_pointerToState;
HXDLIN( 362)		_hx_tmp->set_keepDownStateOnRollOut(this->get_keepDownStateOnRollOut());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,refreshInteractivity,(void))

void BasicToggleButton_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_365_refreshBackgroundSkin)
HXLINE( 366)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 367)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 368)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 369)			return;
            		}
HXLINE( 371)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 372)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject BasicToggleButton_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_375_getCurrentBackgroundSkin)
HXLINE( 376)		 ::openfl::display::DisplayObject result = this->_stateToSkin->get(this->_currentState).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 377)		if (::hx::IsNotNull( result )) {
HXLINE( 378)			return result;
            		}
HXLINE( 380)		bool _hx_tmp;
HXDLIN( 380)		if (this->_selected) {
HXLINE( 380)			_hx_tmp = ::hx::IsNotNull( this->get_selectedBackgroundSkin() );
            		}
            		else {
HXLINE( 380)			_hx_tmp = false;
            		}
HXDLIN( 380)		if (_hx_tmp) {
HXLINE( 381)			return this->get_selectedBackgroundSkin();
            		}
HXLINE( 383)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,getCurrentBackgroundSkin,return )

void BasicToggleButton_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_e33c116aa54be7a2_386_addCurrentBackgroundSkin)
HXLINE( 387)		if (::hx::IsNull( skin )) {
HXLINE( 388)			this->_backgroundSkinMeasurements = null();
HXLINE( 389)			return;
            		}
HXLINE( 391)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 392)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 394)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 395)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 397)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 399)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 400)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 402)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IStateObserver >())) {
HXLINE( 403)			::feathers::core::IStateObserver_obj::set_stateContext( ::hx::interface_check(skin,0xb36ec70d),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 405)		this->addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,addCurrentBackgroundSkin,(void))

void BasicToggleButton_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_408_removeCurrentBackgroundSkin)
HXLINE( 409)		if (::hx::IsNull( skin )) {
HXLINE( 410)			return;
            		}
HXLINE( 412)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 413)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 415)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IStateObserver >())) {
HXLINE( 416)			::feathers::core::IStateObserver_obj::set_stateContext( ::hx::interface_check(skin,0xb36ec70d),null());
            		}
HXLINE( 420)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 421)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 422)			this->removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,removeCurrentBackgroundSkin,(void))

bool BasicToggleButton_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_426_measure)
HXLINE( 427)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 428)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 429)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 430)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 431)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 432)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 433)		bool _hx_tmp;
HXDLIN( 433)		bool _hx_tmp1;
HXDLIN( 433)		bool _hx_tmp2;
HXDLIN( 433)		bool _hx_tmp3;
HXDLIN( 433)		bool _hx_tmp4;
HXDLIN( 433)		if (!(needsWidth)) {
HXLINE( 433)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 433)			_hx_tmp4 = false;
            		}
HXDLIN( 433)		if (_hx_tmp4) {
HXLINE( 433)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 433)			_hx_tmp3 = false;
            		}
HXDLIN( 433)		if (_hx_tmp3) {
HXLINE( 433)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 433)			_hx_tmp2 = false;
            		}
HXDLIN( 433)		if (_hx_tmp2) {
HXLINE( 433)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 433)			_hx_tmp1 = false;
            		}
HXDLIN( 433)		if (_hx_tmp1) {
HXLINE( 433)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 433)			_hx_tmp = false;
            		}
HXDLIN( 433)		if (_hx_tmp) {
HXLINE( 434)			return false;
            		}
HXLINE( 437)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 438)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 441)		::Dynamic measureSkin = null();
HXLINE( 442)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 443)			measureSkin =  ::hx::interface_check(this->_currentBackgroundSkin,0xcfc32883);
            		}
HXLINE( 446)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 447)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
HXLINE( 450)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 451)		if (needsWidth) {
HXLINE( 452)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 453)				newWidth = this->_currentBackgroundSkin->get_width();
            			}
            			else {
HXLINE( 455)				newWidth = ((Float)0.0);
            			}
            		}
HXLINE( 459)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 460)		if (needsHeight) {
HXLINE( 461)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 462)				newHeight = this->_currentBackgroundSkin->get_height();
            			}
            			else {
HXLINE( 464)				newHeight = ((Float)0.0);
            			}
            		}
HXLINE( 468)		 ::Dynamic newMinWidth = this->get_explicitMinWidth();
HXLINE( 469)		if (needsMinWidth) {
HXLINE( 470)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 471)				newMinWidth = ::feathers::core::IMeasureObject_obj::get_minWidth(measureSkin);
            			}
            			else {
HXLINE( 472)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 473)					newMinWidth = this->_backgroundSkinMeasurements->minWidth;
            				}
            				else {
HXLINE( 475)					newMinWidth = ((Float)0.0);
            				}
            			}
            		}
HXLINE( 479)		 ::Dynamic newMinHeight = this->get_explicitMinHeight();
HXLINE( 480)		if (needsMinHeight) {
HXLINE( 481)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 482)				newMinHeight = ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin);
            			}
            			else {
HXLINE( 483)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 484)					newMinHeight = this->_backgroundSkinMeasurements->minHeight;
            				}
            				else {
HXLINE( 486)					newMinHeight = ((Float)0.0);
            				}
            			}
            		}
HXLINE( 489)		 ::Dynamic newMaxWidth = this->get_explicitMaxWidth();
HXLINE( 490)		if (needsMaxWidth) {
HXLINE( 491)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 492)				newMaxWidth = ::feathers::core::IMeasureObject_obj::get_maxWidth(measureSkin);
            			}
            			else {
HXLINE( 493)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 494)					newMaxWidth = this->_backgroundSkinMeasurements->maxWidth;
            				}
            				else {
HXLINE( 496)					newMaxWidth = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 500)		 ::Dynamic newMaxHeight = this->get_explicitMaxHeight();
HXLINE( 501)		if (needsMaxHeight) {
HXLINE( 502)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 503)				newMaxHeight = ::feathers::core::IMeasureObject_obj::get_maxHeight(measureSkin);
            			}
            			else {
HXLINE( 504)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 505)					newMaxHeight = this->_backgroundSkinMeasurements->maxHeight;
            				}
            				else {
HXLINE( 507)					newMaxHeight = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 511)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,newMaxHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,measure,return )

void BasicToggleButton_obj::layoutContent(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_515_layoutContent)
HXDLIN( 515)		this->layoutBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,layoutContent,(void))

void BasicToggleButton_obj::layoutBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_518_layoutBackgroundSkin)
HXLINE( 519)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 520)			return;
            		}
HXLINE( 522)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 523)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 528)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 528)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 529)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 531)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 531)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 532)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 534)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 535)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,layoutBackgroundSkin,(void))

void BasicToggleButton_obj::changeState( ::feathers::controls::ToggleButtonState state){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_539_changeState)
HXLINE( 540)		 ::feathers::controls::ToggleButtonState toggleState = state;
HXLINE( 541)		if (!(this->_enabled)) {
HXLINE( 542)			toggleState = ::feathers::controls::ToggleButtonState_obj::DISABLED(this->_selected);
            		}
HXLINE( 544)		switch((int)(toggleState->_hx_getIndex())){
            			case (int)0: {
HXLINE( 545)				bool selected = toggleState->_hx_getBool(0);
HXLINE( 546)				if ((this->_selected != selected)) {
HXLINE( 547)					toggleState = ::feathers::controls::ToggleButtonState_obj::UP(this->_selected);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 553)				bool selected = toggleState->_hx_getBool(0);
HXLINE( 554)				if ((this->_selected != selected)) {
HXLINE( 555)					toggleState = ::feathers::controls::ToggleButtonState_obj::HOVER(this->_selected);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 549)				bool selected = toggleState->_hx_getBool(0);
HXLINE( 550)				if ((this->_selected != selected)) {
HXLINE( 551)					toggleState = ::feathers::controls::ToggleButtonState_obj::DOWN(this->_selected);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 557)				bool selected = toggleState->_hx_getBool(0);
HXLINE( 558)				if ((this->_selected != selected)) {
HXLINE( 559)					toggleState = ::feathers::controls::ToggleButtonState_obj::DISABLED(this->_selected);
            				}
            			}
            			break;
            		}
HXLINE( 563)		if (::hx::IsPointerEq( this->_currentState,toggleState )) {
HXLINE( 564)			return;
            		}
HXLINE( 566)		this->_currentState = toggleState;
HXLINE( 567)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 568)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("stateChange",61,de,fb,31),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,changeState,(void))

void BasicToggleButton_obj::basicToggleButton_clickHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_572_basicToggleButton_clickHandler)
HXDLIN( 572)		if (!(this->_enabled)) {
HXLINE( 573)			event->stopImmediatePropagation();
HXLINE( 574)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,basicToggleButton_clickHandler,(void))

void BasicToggleButton_obj::basicToggleButton_touchTapHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_579_basicToggleButton_touchTapHandler)
HXDLIN( 579)		if (!(this->_enabled)) {
HXLINE( 580)			event->stopImmediatePropagation();
HXLINE( 581)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,basicToggleButton_touchTapHandler,(void))

void BasicToggleButton_obj::basicToggleButton_triggerHandler( ::feathers::events::TriggerEvent event){
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_585_basicToggleButton_triggerHandler)
HXLINE( 586)		bool _hx_tmp;
HXDLIN( 586)		if (this->_enabled) {
HXLINE( 586)			_hx_tmp = !(this->_toggleable);
            		}
            		else {
HXLINE( 586)			_hx_tmp = true;
            		}
HXDLIN( 586)		if (_hx_tmp) {
HXLINE( 587)			return;
            		}
HXLINE( 589)		this->set_selected(!(this->_selected));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,basicToggleButton_triggerHandler,(void))

bool BasicToggleButton_obj::get_keepDownStateOnRollOut(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_85_get_keepDownStateOnRollOut)
HXDLIN(  85)		return this->_hx___keepDownStateOnRollOut;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_keepDownStateOnRollOut,return )

bool BasicToggleButton_obj::set_keepDownStateOnRollOut(bool value){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_99_set_keepDownStateOnRollOut)
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


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,set_keepDownStateOnRollOut,return )

bool BasicToggleButton_obj::clearStyle_keepDownStateOnRollOut(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_125_clearStyle_keepDownStateOnRollOut)
HXLINE( 126)		this->set_keepDownStateOnRollOut(false);
HXLINE( 127)		return this->get_keepDownStateOnRollOut();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,clearStyle_keepDownStateOnRollOut,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_99_set_backgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::get_selectedBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_85_get_selectedBackgroundSkin)
HXDLIN(  85)		return this->_hx___selectedBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,get_selectedBackgroundSkin,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::set_selectedBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_99_set_selectedBackgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("selectedBackgroundSkin",46,6d,99,7e),null()))) {
HXLINE( 101)			return this->_hx___selectedBackgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___selectedBackgroundSkin,value )) {
HXLINE( 104)			return this->_hx___selectedBackgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_selectedBackgroundSkin_dyn();
HXLINE( 110)		this->_hx___selectedBackgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___selectedBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BasicToggleButton_obj,set_selectedBackgroundSkin,return )

 ::openfl::display::DisplayObject BasicToggleButton_obj::clearStyle_selectedBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_d430f7113eb44ec1_125_clearStyle_selectedBackgroundSkin)
HXLINE( 126)		this->set_selectedBackgroundSkin(null());
HXLINE( 127)		return this->get_selectedBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BasicToggleButton_obj,clearStyle_selectedBackgroundSkin,return )


::hx::ObjectPtr< BasicToggleButton_obj > BasicToggleButton_obj::__new( ::Dynamic changeListener) {
	::hx::ObjectPtr< BasicToggleButton_obj > __this = new BasicToggleButton_obj();
	__this->__construct(changeListener);
	return __this;
}

::hx::ObjectPtr< BasicToggleButton_obj > BasicToggleButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic changeListener) {
	BasicToggleButton_obj *__this = (BasicToggleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicToggleButton_obj), true, "feathers.controls.BasicToggleButton"));
	*(void **)__this = BasicToggleButton_obj::_hx_vtable;
	__this->__construct(changeListener);
	return __this;
}

BasicToggleButton_obj::BasicToggleButton_obj()
{
}

void BasicToggleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicToggleButton);
	HX_MARK_MEMBER_NAME(_currentState,"_currentState");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_toggleable,"_toggleable");
	HX_MARK_MEMBER_NAME(_pointerToState,"_pointerToState");
	HX_MARK_MEMBER_NAME(_keyToState,"_keyToState");
	HX_MARK_MEMBER_NAME(_pointerTrigger,"_pointerTrigger");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_stateToSkin,"_stateToSkin");
	HX_MARK_MEMBER_NAME(_hx___keepDownStateOnRollOut,"__keepDownStateOnRollOut");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___selectedBackgroundSkin,"__selectedBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicToggleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentState,"_currentState");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_toggleable,"_toggleable");
	HX_VISIT_MEMBER_NAME(_pointerToState,"_pointerToState");
	HX_VISIT_MEMBER_NAME(_keyToState,"_keyToState");
	HX_VISIT_MEMBER_NAME(_pointerTrigger,"_pointerTrigger");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_stateToSkin,"_stateToSkin");
	HX_VISIT_MEMBER_NAME(_hx___keepDownStateOnRollOut,"__keepDownStateOnRollOut");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___selectedBackgroundSkin,"__selectedBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicToggleButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return ::hx::Val( _selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_toggleable() ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_toggleable") ) { return ::hx::Val( _toggleable ); }
		if (HX_FIELD_EQ(inName,"_keyToState") ) { return ::hx::Val( _keyToState ); }
		if (HX_FIELD_EQ(inName,"changeState") ) { return ::hx::Val( changeState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentState() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"_stateToSkin") ) { return ::hx::Val( _stateToSkin ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { return ::hx::Val( _currentState ); }
		if (HX_FIELD_EQ(inName,"commitChanges") ) { return ::hx::Val( commitChanges_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_toggleable") ) { return ::hx::Val( get_toggleable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toggleable") ) { return ::hx::Val( set_toggleable_dyn() ); }
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
		if (HX_FIELD_EQ(inName,"selectedBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedBackgroundSkin() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__keepDownStateOnRollOut") ) { return ::hx::Val( _hx___keepDownStateOnRollOut ); }
		if (HX_FIELD_EQ(inName,"__selectedBackgroundSkin") ) { return ::hx::Val( _hx___selectedBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_keepDownStateOnRollOut") ) { return ::hx::Val( get_keepDownStateOnRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_keepDownStateOnRollOut") ) { return ::hx::Val( set_keepDownStateOnRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedBackgroundSkin") ) { return ::hx::Val( get_selectedBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedBackgroundSkin") ) { return ::hx::Val( set_selectedBackgroundSkin_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"basicToggleButton_clickHandler") ) { return ::hx::Val( basicToggleButton_clickHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"basicToggleButton_triggerHandler") ) { return ::hx::Val( basicToggleButton_triggerHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"basicToggleButton_touchTapHandler") ) { return ::hx::Val( basicToggleButton_touchTapHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_keepDownStateOnRollOut") ) { return ::hx::Val( clearStyle_keepDownStateOnRollOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_selectedBackgroundSkin") ) { return ::hx::Val( clearStyle_selectedBackgroundSkin_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicToggleButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toggleable(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_toggleable") ) { _toggleable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyToState") ) { _keyToState=inValue.Cast<  ::feathers::utils::KeyToState >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stateToSkin") ) { _stateToSkin=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { _currentState=inValue.Cast<  ::feathers::controls::ToggleButtonState >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"selectedBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__keepDownStateOnRollOut") ) { _hx___keepDownStateOnRollOut=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectedBackgroundSkin") ) { _hx___selectedBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicToggleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_currentState",f7,ed,85,ad));
	outFields->push(HX_("currentState",18,5b,17,cb));
	outFields->push(HX_("_selected",ba,21,03,f9));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("_toggleable",4d,54,cf,bf));
	outFields->push(HX_("toggleable",2e,87,45,ed));
	outFields->push(HX_("_pointerToState",f8,b3,15,fc));
	outFields->push(HX_("_keyToState",d6,2f,a1,91));
	outFields->push(HX_("_pointerTrigger",9a,46,65,d1));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("keepDownStateOnRollOut",48,7f,38,c2));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("selectedBackgroundSkin",46,6d,99,7e));
	outFields->push(HX_("_stateToSkin",8a,7c,a1,62));
	outFields->push(HX_("__keepDownStateOnRollOut",68,2a,a8,3f));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__selectedBackgroundSkin",66,18,09,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicToggleButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::ToggleButtonState */ ,(int)offsetof(BasicToggleButton_obj,_currentState),HX_("_currentState",f7,ed,85,ad)},
	{::hx::fsBool,(int)offsetof(BasicToggleButton_obj,_selected),HX_("_selected",ba,21,03,f9)},
	{::hx::fsBool,(int)offsetof(BasicToggleButton_obj,_toggleable),HX_("_toggleable",4d,54,cf,bf)},
	{::hx::fsObject /*  ::feathers::utils::PointerToState */ ,(int)offsetof(BasicToggleButton_obj,_pointerToState),HX_("_pointerToState",f8,b3,15,fc)},
	{::hx::fsObject /*  ::feathers::utils::KeyToState */ ,(int)offsetof(BasicToggleButton_obj,_keyToState),HX_("_keyToState",d6,2f,a1,91)},
	{::hx::fsObject /*  ::feathers::utils::PointerTrigger */ ,(int)offsetof(BasicToggleButton_obj,_pointerTrigger),HX_("_pointerTrigger",9a,46,65,d1)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BasicToggleButton_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BasicToggleButton_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(BasicToggleButton_obj,_stateToSkin),HX_("_stateToSkin",8a,7c,a1,62)},
	{::hx::fsBool,(int)offsetof(BasicToggleButton_obj,_hx___keepDownStateOnRollOut),HX_("__keepDownStateOnRollOut",68,2a,a8,3f)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BasicToggleButton_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(BasicToggleButton_obj,_hx___selectedBackgroundSkin),HX_("__selectedBackgroundSkin",66,18,09,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicToggleButton_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicToggleButton_obj_sMemberFields[] = {
	HX_("_currentState",f7,ed,85,ad),
	HX_("get_currentState",a1,47,b6,cf),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_selected",ba,21,03,f9),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("_toggleable",4d,54,cf,bf),
	HX_("get_toggleable",77,0f,3b,63),
	HX_("set_toggleable",eb,f7,5a,83),
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
	HX_("refreshInteractivity",10,92,53,10),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutContent",af,8f,21,da),
	HX_("layoutBackgroundSkin",d5,3d,2a,eb),
	HX_("changeState",81,1e,d1,a9),
	HX_("basicToggleButton_clickHandler",4d,0e,bd,5f),
	HX_("basicToggleButton_touchTapHandler",3b,6b,b6,60),
	HX_("basicToggleButton_triggerHandler",1d,c4,bc,9e),
	HX_("__keepDownStateOnRollOut",68,2a,a8,3f),
	HX_("get_keepDownStateOnRollOut",11,d1,3d,fa),
	HX_("set_keepDownStateOnRollOut",85,97,d2,59),
	HX_("clearStyle_keepDownStateOnRollOut",03,27,2d,c0),
	HX_("__backgroundSkin",ab,f0,ae,54),
	HX_("get_backgroundSkin",54,46,09,bc),
	HX_("set_backgroundSkin",c8,78,b8,98),
	HX_("clearStyle_backgroundSkin",46,5a,f8,27),
	HX_("__selectedBackgroundSkin",66,18,09,fc),
	HX_("get_selectedBackgroundSkin",0f,bf,9e,b6),
	HX_("set_selectedBackgroundSkin",83,85,33,16),
	HX_("clearStyle_selectedBackgroundSkin",01,15,8e,7c),
	::String(null()) };

::hx::Class BasicToggleButton_obj::__mClass;

void BasicToggleButton_obj::__register()
{
	BasicToggleButton_obj _hx_dummy;
	BasicToggleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.BasicToggleButton",1a,db,6d,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicToggleButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicToggleButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicToggleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicToggleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BasicToggleButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e33c116aa54be7a2_55_boot)
HXDLIN(  55)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("setSkinForState",a7,e8,72,5e), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null()))))));
            	}
}

} // end namespace feathers
} // end namespace controls
