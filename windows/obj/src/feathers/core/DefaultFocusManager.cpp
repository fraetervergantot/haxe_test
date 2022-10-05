#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IGroupedToggle
#include <feathers/controls/IGroupedToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
#ifndef INCLUDED_feathers_core_DefaultFocusManager
#include <feathers/core/DefaultFocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExclusions
#include <feathers/core/IFocusExclusions.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
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
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_ToggleGroup
#include <feathers/core/ToggleGroup.h>
#endif
#ifndef INCLUDED_feathers_core__DefaultFocusManager_FocusResult
#include <feathers/core/_DefaultFocusManager/FocusResult.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
#ifndef INCLUDED_feathers_utils_DPadFocusUtil
#include <feathers/utils/DPadFocusUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_FocusUtil
#include <feathers/utils/FocusUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_PopUpUtil
#include <feathers/utils/PopUpUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3701e1b2434e52b4_47_new,"feathers.core.DefaultFocusManager","new",0xef6c99d7,"feathers.core.DefaultFocusManager.new","feathers/core/DefaultFocusManager.hx",47,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_68_get_enabled,"feathers.core.DefaultFocusManager","get_enabled",0x64ecfd0f,"feathers.core.DefaultFocusManager.get_enabled","feathers/core/DefaultFocusManager.hx",68,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_71_set_enabled,"feathers.core.DefaultFocusManager","set_enabled",0x6f5a041b,"feathers.core.DefaultFocusManager.set_enabled","feathers/core/DefaultFocusManager.hx",71,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_97_get_root,"feathers.core.DefaultFocusManager","get_root",0x755030d4,"feathers.core.DefaultFocusManager.get_root","feathers/core/DefaultFocusManager.hx",97,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_100_set_root,"feathers.core.DefaultFocusManager","set_root",0x23ad8a48,"feathers.core.DefaultFocusManager.set_root","feathers/core/DefaultFocusManager.hx",100,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_141_get_focusPane,"feathers.core.DefaultFocusManager","get_focusPane",0x29f2f06e,"feathers.core.DefaultFocusManager.get_focusPane","feathers/core/DefaultFocusManager.hx",141,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_161_get_showFocusIndicator,"feathers.core.DefaultFocusManager","get_showFocusIndicator",0x4fcecce6,"feathers.core.DefaultFocusManager.get_showFocusIndicator","feathers/core/DefaultFocusManager.hx",161,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_171_get_focus,"feathers.core.DefaultFocusManager","get_focus",0x480278e6,"feathers.core.DefaultFocusManager.get_focus","feathers/core/DefaultFocusManager.hx",171,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_178_set_focus,"feathers.core.DefaultFocusManager","set_focus",0x2b5364f2,"feathers.core.DefaultFocusManager.set_focus","feathers/core/DefaultFocusManager.hx",178,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_203_dispose,"feathers.core.DefaultFocusManager","dispose",0x25acd196,"feathers.core.DefaultFocusManager.dispose","feathers/core/DefaultFocusManager.hx",203,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_226_findNextFocus,"feathers.core.DefaultFocusManager","findNextFocus",0xd3321ea3,"feathers.core.DefaultFocusManager.findNextFocus","feathers/core/DefaultFocusManager.hx",226,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_231_findNextFocusInternal,"feathers.core.DefaultFocusManager","findNextFocusInternal",0xf15e1d00,"feathers.core.DefaultFocusManager.findNextFocusInternal","feathers/core/DefaultFocusManager.hx",231,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_267_findNextRelativeFocusInternal,"feathers.core.DefaultFocusManager","findNextRelativeFocusInternal",0x9e29e394,"feathers.core.DefaultFocusManager.findNextRelativeFocusInternal","feathers/core/DefaultFocusManager.hx",267,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_300_isValidFocusWithKeyboard,"feathers.core.DefaultFocusManager","isValidFocusWithKeyboard",0xb8145cdc,"feathers.core.DefaultFocusManager.isValidFocusWithKeyboard","feathers/core/DefaultFocusManager.hx",300,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_307_isValidFocus,"feathers.core.DefaultFocusManager","isValidFocus",0x6d8bc16f,"feathers.core.DefaultFocusManager.isValidFocus","feathers/core/DefaultFocusManager.hx",307,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_330_setFocusManager,"feathers.core.DefaultFocusManager","setFocusManager",0x4b65f82e,"feathers.core.DefaultFocusManager.setFocusManager","feathers/core/DefaultFocusManager.hx",330,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_359_clearFocusManager,"feathers.core.DefaultFocusManager","clearFocusManager",0x7469ae59,"feathers.core.DefaultFocusManager.clearFocusManager","feathers/core/DefaultFocusManager.hx",359,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_404_findPreviousContainerFocus,"feathers.core.DefaultFocusManager","findPreviousContainerFocus",0x9ffe0df0,"feathers.core.DefaultFocusManager.findPreviousContainerFocus","feathers/core/DefaultFocusManager.hx",404,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_498_findNextContainerFocus,"feathers.core.DefaultFocusManager","findNextContainerFocus",0x922a3eac,"feathers.core.DefaultFocusManager.findNextContainerFocus","feathers/core/DefaultFocusManager.hx",498,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_595_findPreviousChildFocus,"feathers.core.DefaultFocusManager","findPreviousChildFocus",0x003f6f35,"feathers.core.DefaultFocusManager.findPreviousChildFocus","feathers/core/DefaultFocusManager.hx",595,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_632_findNextChildFocus,"feathers.core.DefaultFocusManager","findNextChildFocus",0xac5d91f1,"feathers.core.DefaultFocusManager.findNextChildFocus","feathers/core/DefaultFocusManager.hx",632,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_670_setStageFocus,"feathers.core.DefaultFocusManager","setStageFocus",0x4003d6b3,"feathers.core.DefaultFocusManager.setStageFocus","feathers/core/DefaultFocusManager.hx",670,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_691_handleRootAddedToStage,"feathers.core.DefaultFocusManager","handleRootAddedToStage",0xb3b59456,"feathers.core.DefaultFocusManager.handleRootAddedToStage","feathers/core/DefaultFocusManager.hx",691,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_709_handleRootRemovedFromStage,"feathers.core.DefaultFocusManager","handleRootRemovedFromStage",0xc3c208a7,"feathers.core.DefaultFocusManager.handleRootRemovedFromStage","feathers/core/DefaultFocusManager.hx",709,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_724_defaultFocusManager_root_addedToStageHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_addedToStageHandler",0x99a2b43c,"feathers.core.DefaultFocusManager.defaultFocusManager_root_addedToStageHandler","feathers/core/DefaultFocusManager.hx",724,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_728_defaultFocusManager_root_removedFromStageHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_removedFromStageHandler",0xb71f100b,"feathers.core.DefaultFocusManager.defaultFocusManager_root_removedFromStageHandler","feathers/core/DefaultFocusManager.hx",728,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_731_restoreFocus,"feathers.core.DefaultFocusManager","restoreFocus",0xa9aafd53,"feathers.core.DefaultFocusManager.restoreFocus","feathers/core/DefaultFocusManager.hx",731,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_738_shouldBeManaged,"feathers.core.DefaultFocusManager","shouldBeManaged",0x5fa5ac20,"feathers.core.DefaultFocusManager.shouldBeManaged","feathers/core/DefaultFocusManager.hx",738,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_791_defaultFocusManager_root_addedHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_addedHandler",0x937d3db5,"feathers.core.DefaultFocusManager.defaultFocusManager_root_addedHandler","feathers/core/DefaultFocusManager.hx",791,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_815_defaultFocusManager_root_removedHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_removedHandler",0xc4489795,"feathers.core.DefaultFocusManager.defaultFocusManager_root_removedHandler","feathers/core/DefaultFocusManager.hx",815,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_820_defaultFocusManager_root_mouseFocusChangeHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_mouseFocusChangeHandler",0x9921efdc,"feathers.core.DefaultFocusManager.defaultFocusManager_root_mouseFocusChangeHandler","feathers/core/DefaultFocusManager.hx",820,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_872_handleKeyDownFocusWrapping,"feathers.core.DefaultFocusManager","handleKeyDownFocusWrapping",0xf33c7c04,"feathers.core.DefaultFocusManager.handleKeyDownFocusWrapping","feathers/core/DefaultFocusManager.hx",872,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_910_handleDPadArrowKeys,"feathers.core.DefaultFocusManager","handleDPadArrowKeys",0x586b49bd,"feathers.core.DefaultFocusManager.handleDPadArrowKeys","feathers/core/DefaultFocusManager.hx",910,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_925_defaultFocusManager_root_keyDownHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_keyDownHandler",0xb010ffb4,"feathers.core.DefaultFocusManager.defaultFocusManager_root_keyDownHandler","feathers/core/DefaultFocusManager.hx",925,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_930_defaultFocusManager_root_keyFocusChangeHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_keyFocusChangeHandler",0x5c806a96,"feathers.core.DefaultFocusManager.defaultFocusManager_root_keyFocusChangeHandler","feathers/core/DefaultFocusManager.hx",930,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_955_findFocusForDisplayObject,"feathers.core.DefaultFocusManager","findFocusForDisplayObject",0x845e878e,"feathers.core.DefaultFocusManager.findFocusForDisplayObject","feathers/core/DefaultFocusManager.hx",955,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_982_defaultFocusManager_root_mouseDownCaptureHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_mouseDownCaptureHandler",0x8e312a80,"feathers.core.DefaultFocusManager.defaultFocusManager_root_mouseDownCaptureHandler","feathers/core/DefaultFocusManager.hx",982,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_992_defaultFocusManager_root_focusInCaptureHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_focusInCaptureHandler",0xb04df276,"feathers.core.DefaultFocusManager.defaultFocusManager_root_focusInCaptureHandler","feathers/core/DefaultFocusManager.hx",992,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_999_defaultFocusManager_root_activateHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_activateHandler",0x1217566c,"feathers.core.DefaultFocusManager.defaultFocusManager_root_activateHandler","feathers/core/DefaultFocusManager.hx",999,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_1006_defaultFocusManager_root_deactivateHandler,"feathers.core.DefaultFocusManager","defaultFocusManager_root_deactivateHandler",0x301d074b,"feathers.core.DefaultFocusManager.defaultFocusManager_root_deactivateHandler","feathers/core/DefaultFocusManager.hx",1006,0x2c1b51d9)
HX_LOCAL_STACK_FRAME(_hx_pos_3701e1b2434e52b4_48_boot,"feathers.core.DefaultFocusManager","boot",0x87b302db,"feathers.core.DefaultFocusManager.boot","feathers/core/DefaultFocusManager.hx",48,0x2c1b51d9)
namespace feathers{
namespace core{

void DefaultFocusManager_obj::__construct( ::openfl::display::DisplayObject root){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_47_new)
HXLINE( 153)		this->_showFocusIndicator = false;
HXLINE( 134)		this->_focusPane = null();
HXLINE(  89)		this->_root = null();
HXLINE(  60)		this->_enabled = true;
HXLINE(  56)		super::__construct(null());
HXLINE(  57)		this->set_root(root);
            	}

Dynamic DefaultFocusManager_obj::__CreateEmpty() { return new DefaultFocusManager_obj; }

void *DefaultFocusManager_obj::_hx_vtable = 0;

Dynamic DefaultFocusManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultFocusManager_obj > _hx_result = new DefaultFocusManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultFocusManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x17998cc7;
	}
}

static ::feathers::core::IFocusManager_obj _hx_feathers_core_DefaultFocusManager__hx_feathers_core_IFocusManager= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::DefaultFocusManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::DefaultFocusManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::DefaultFocusManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::DefaultFocusManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::DefaultFocusManager_obj::willTrigger,
	(  ::openfl::display::DisplayObject (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::get_root,
	( ::Dynamic (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::get_focus,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::core::DefaultFocusManager_obj::set_focus,
	(  ::openfl::display::DisplayObjectContainer (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::get_focusPane,
	( bool (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::get_showFocusIndicator,
	( bool (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::core::DefaultFocusManager_obj::set_enabled,
	( ::Dynamic (::hx::Object::*)(::hx::Null< bool > ))&::feathers::core::DefaultFocusManager_obj::findNextFocus,
	( void (::hx::Object::*)())&::feathers::core::DefaultFocusManager_obj::dispose,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_DefaultFocusManager__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::DefaultFocusManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::DefaultFocusManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::DefaultFocusManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::DefaultFocusManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::DefaultFocusManager_obj::willTrigger,
};

void *DefaultFocusManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x3511c06f: return &_hx_feathers_core_DefaultFocusManager__hx_feathers_core_IFocusManager;
		case (int)0x87530281: return &_hx_feathers_core_DefaultFocusManager__hx_openfl_events_IEventDispatcher;
	}
	return super::_hx_getInterface(inHash);
}

bool DefaultFocusManager_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_68_get_enabled)
HXDLIN(  68)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,get_enabled,return )

bool DefaultFocusManager_obj::set_enabled(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_3701e1b2434e52b4_71_set_enabled)
HXLINE(  72)		if ((this->_enabled == value)) {
HXLINE(  73)			return this->_enabled;
            		}
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if (value) {
HXLINE(  75)			_hx_tmp = ::hx::IsNull( this->_root );
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot enable focus manager without a root container.",79,29,a8,fa)));
            		}
HXLINE(  78)		this->_enabled = value;
HXLINE(  79)		if (::hx::IsNotNull( this->_root->stage )) {
HXLINE(  80)			if (this->_enabled) {
HXLINE(  81)				this->restoreFocus();
            			}
            			else {
HXLINE(  83)				this->set_focus(null());
            			}
            		}
HXLINE(  86)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,set_enabled,return )

 ::openfl::display::DisplayObject DefaultFocusManager_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_97_get_root)
HXDLIN(  97)		return this->_root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,get_root,return )

 ::openfl::display::DisplayObject DefaultFocusManager_obj::set_root( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_100_set_root)
HXLINE( 101)		if (::hx::IsInstanceEq( this->_root,value )) {
HXLINE( 102)			return this->_root;
            		}
HXLINE( 104)		if (::hx::IsNotNull( this->_root )) {
HXLINE( 105)			this->clearFocusManager(this->_root);
HXLINE( 106)			this->_root->removeEventListener(HX_("addedToStage",63,22,55,0c),this->defaultFocusManager_root_addedToStageHandler_dyn(),null());
HXLINE( 107)			this->_root->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->defaultFocusManager_root_removedFromStageHandler_dyn(),null());
HXLINE( 108)			this->_root->removeEventListener(HX_("added",c0,d4,43,1c),this->defaultFocusManager_root_addedHandler_dyn(),null());
HXLINE( 109)			this->_root->removeEventListener(HX_("removed",a0,1f,00,f3),this->defaultFocusManager_root_removedHandler_dyn(),null());
HXLINE( 110)			this->_root->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->defaultFocusManager_root_mouseDownCaptureHandler_dyn(),true);
HXLINE( 111)			this->_root->removeEventListener(HX_("focusIn",dd,45,83,41),this->defaultFocusManager_root_focusInCaptureHandler_dyn(),true);
HXLINE( 112)			this->_root->removeEventListener(HX_("mouseFocusChange",43,f1,81,96),this->defaultFocusManager_root_mouseFocusChangeHandler_dyn(),null());
HXLINE( 113)			this->_root->removeEventListener(HX_("activate",b3,1b,ac,e5),this->defaultFocusManager_root_activateHandler_dyn(),null());
HXLINE( 114)			this->_root->removeEventListener(HX_("deactivate",34,5c,01,3c),this->defaultFocusManager_root_deactivateHandler_dyn(),null());
HXLINE( 115)			this->handleRootRemovedFromStage(this->_root->stage);
            		}
HXLINE( 117)		this->_root = value;
HXLINE( 118)		if (::hx::IsNotNull( this->_root )) {
HXLINE( 119)			this->handleRootAddedToStage(this->_root);
HXLINE( 120)			this->setFocusManager(this->_root);
HXLINE( 121)			this->_root->addEventListener(HX_("addedToStage",63,22,55,0c),this->defaultFocusManager_root_addedToStageHandler_dyn(),false,0,true);
HXLINE( 122)			this->_root->addEventListener(HX_("removedFromStage",34,21,76,ba),this->defaultFocusManager_root_removedFromStageHandler_dyn(),false,0,true);
HXLINE( 123)			this->_root->addEventListener(HX_("added",c0,d4,43,1c),this->defaultFocusManager_root_addedHandler_dyn(),false,0,true);
HXLINE( 124)			this->_root->addEventListener(HX_("removed",a0,1f,00,f3),this->defaultFocusManager_root_removedHandler_dyn(),false,0,true);
HXLINE( 125)			this->_root->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->defaultFocusManager_root_mouseDownCaptureHandler_dyn(),true,0,true);
HXLINE( 126)			this->_root->addEventListener(HX_("focusIn",dd,45,83,41),this->defaultFocusManager_root_focusInCaptureHandler_dyn(),true,0,true);
HXLINE( 127)			this->_root->addEventListener(HX_("mouseFocusChange",43,f1,81,96),this->defaultFocusManager_root_mouseFocusChangeHandler_dyn(),false,0,true);
HXLINE( 128)			this->_root->addEventListener(HX_("activate",b3,1b,ac,e5),this->defaultFocusManager_root_activateHandler_dyn(),false,0,true);
HXLINE( 129)			this->_root->addEventListener(HX_("deactivate",34,5c,01,3c),this->defaultFocusManager_root_deactivateHandler_dyn(),false,0,true);
            		}
HXLINE( 131)		return this->_root;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,set_root,return )

 ::openfl::display::DisplayObjectContainer DefaultFocusManager_obj::get_focusPane(){
            	HX_GC_STACKFRAME(&_hx_pos_3701e1b2434e52b4_141_get_focusPane)
HXLINE( 142)		if (::hx::IsNull( this->_focusPane )) {
HXLINE( 143)			this->_focusPane =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 144)			this->_focusPane->mouseEnabled = false;
HXLINE( 145)			this->_focusPane->mouseChildren = false;
HXLINE( 146)			this->_focusPane->set_tabEnabled(false);
HXLINE( 147)			this->_focusPane->set_tabChildren(false);
HXLINE( 148)			::feathers::core::IPopUpManager_obj::addPopUp(::feathers::core::PopUpManager_obj::forStage(this->_root->stage),this->_focusPane,false,false,null());
            		}
HXLINE( 150)		return this->_focusPane;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,get_focusPane,return )

bool DefaultFocusManager_obj::get_showFocusIndicator(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_161_get_showFocusIndicator)
HXDLIN( 161)		return this->_showFocusIndicator;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,get_showFocusIndicator,return )

::Dynamic DefaultFocusManager_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_171_get_focus)
HXLINE( 172)		if (::hx::IsNull( this->_root->stage )) {
HXLINE( 173)			return null();
            		}
HXLINE( 175)		return this->findFocusForDisplayObject(this->_root->stage->get_focus(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,get_focus,return )

::Dynamic DefaultFocusManager_obj::set_focus(::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_3701e1b2434e52b4_178_set_focus)
HXLINE( 179)		bool _hx_tmp;
HXDLIN( 179)		if (this->_enabled) {
HXLINE( 179)			_hx_tmp = ::hx::IsNotNull( this->_root->stage );
            		}
            		else {
HXLINE( 179)			_hx_tmp = false;
            		}
HXDLIN( 179)		if (_hx_tmp) {
HXLINE( 180)			::Dynamic oldFocus = this->findFocusForDisplayObject(this->_root->stage->get_focus(),null());
HXLINE( 181)			if (::hx::IsInstanceEq( oldFocus,value )) {
HXLINE( 185)				this->setStageFocus(::hx::TCast<  ::openfl::display::InteractiveObject >::cast(value));
HXLINE( 186)				return this->get_focus();
            			}
            		}
HXLINE( 189)		bool _hx_tmp1;
HXDLIN( 189)		if (::hx::IsNotNull( value )) {
HXLINE( 189)			_hx_tmp1 = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManagerAware_obj::get_focusManager(value),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 189)			_hx_tmp1 = false;
            		}
HXDLIN( 189)		if (_hx_tmp1) {
HXLINE( 190)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Failed to change focus. Object is not managed by this focus manager: ",73,44,d0,25) + ::Std_obj::string(value))));
            		}
HXLINE( 192)		bool _hx_tmp2;
HXDLIN( 192)		if (this->_enabled) {
HXLINE( 192)			_hx_tmp2 = ::hx::IsNotNull( this->_root->stage );
            		}
            		else {
HXLINE( 192)			_hx_tmp2 = false;
            		}
HXDLIN( 192)		if (_hx_tmp2) {
HXLINE( 193)			this->setStageFocus(::hx::TCast<  ::openfl::display::InteractiveObject >::cast(value));
            		}
HXLINE( 195)		return this->get_focus();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,set_focus,return )

void DefaultFocusManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_203_dispose)
HXLINE( 204)		if (::hx::IsNotNull( this->get_focus() )) {
HXLINE( 205)			this->set_focus(null());
            		}
HXLINE( 207)		if (::hx::IsNotNull( this->_focusPane )) {
HXLINE( 208)			if (::hx::IsNotNull( this->_focusPane->parent )) {
HXLINE( 209)				this->_focusPane->parent->removeChild(this->_focusPane);
            			}
HXLINE( 211)			this->_focusPane = null();
            		}
HXLINE( 213)		 ::openfl::display::DisplayObject savedRoot = this->_root;
HXLINE( 214)		this->set_root(null());
HXLINE( 217)		this->_root = savedRoot;
HXLINE( 218)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("clear",8d,71,5b,48),null(),null());
HXLINE( 220)		this->_root = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,dispose,(void))

::Dynamic DefaultFocusManager_obj::findNextFocus(::hx::Null< bool >  __o_backward){
            		bool backward = __o_backward.Default(false);
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_226_findNextFocus)
HXLINE( 227)		 ::feathers::core::_DefaultFocusManager::FocusResult result = this->findNextFocusInternal(backward);
HXLINE( 228)		return result->newFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,findNextFocus,return )

 ::feathers::core::_DefaultFocusManager::FocusResult DefaultFocusManager_obj::findNextFocusInternal(::hx::Null< bool >  __o_backward){
            		bool backward = __o_backward.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_3701e1b2434e52b4_231_findNextFocusInternal)
HXLINE( 232)		::Dynamic newFocus = null();
HXLINE( 233)		bool wrapped = false;
HXLINE( 234)		::Dynamic currentFocus = this->get_focus();
HXLINE( 235)		bool _hx_tmp;
HXDLIN( 235)		if (::hx::IsNotNull( currentFocus )) {
HXLINE( 235)			_hx_tmp = ::hx::IsNotNull( ::feathers::core::IFocusObject_obj::get_focusOwner(currentFocus) );
            		}
            		else {
HXLINE( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXLINE( 236)			::Dynamic focusOwner = ::feathers::core::IFocusObject_obj::get_focusOwner(currentFocus);
HXLINE( 237)			bool _hx_tmp;
HXDLIN( 237)			if (::hx::IsNotNull( focusOwner )) {
HXLINE( 237)				_hx_tmp = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManagerAware_obj::get_focusManager(focusOwner),::hx::ObjectPtr<OBJ_>(this) );
            			}
            			else {
HXLINE( 237)				_hx_tmp = false;
            			}
HXDLIN( 237)			if (_hx_tmp) {
HXLINE( 238)				focusOwner = null();
            			}
HXLINE( 240)			if (::hx::IsNotNull( focusOwner )) {
HXLINE( 241)				newFocus = focusOwner;
            			}
            		}
            		else {
HXLINE( 243)			if (backward) {
HXLINE( 244)				bool _hx_tmp;
HXDLIN( 244)				if (::hx::IsNotNull( currentFocus )) {
HXLINE( 244)					_hx_tmp = ::hx::IsNotNull( currentFocus->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 244)					_hx_tmp = false;
            				}
HXDLIN( 244)				if (_hx_tmp) {
HXLINE( 245)					newFocus = this->findPreviousContainerFocus(( ( ::openfl::display::DisplayObjectContainer)(currentFocus->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)) ),::hx::TCast<  ::openfl::display::DisplayObject >::cast(currentFocus),true);
            				}
HXLINE( 247)				if (::hx::IsNull( newFocus )) {
HXLINE( 248)					newFocus = this->findPreviousChildFocus(this->_root);
HXLINE( 249)					wrapped = ::hx::IsNotNull( currentFocus );
            				}
            			}
            			else {
HXLINE( 252)				if (::hx::IsNotNull( currentFocus )) {
HXLINE( 253)					bool _hx_tmp;
HXDLIN( 253)					if (::Std_obj::isOfType(currentFocus,::hx::ClassOf< ::feathers::core::IFocusContainer >())) {
HXLINE( 253)						_hx_tmp = ::feathers::core::IFocusContainer_obj::get_childFocusEnabled(currentFocus);
            					}
            					else {
HXLINE( 253)						_hx_tmp = false;
            					}
HXDLIN( 253)					if (_hx_tmp) {
HXLINE( 254)						newFocus = this->findNextContainerFocus(::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(currentFocus),null(),true);
            					}
            					else {
HXLINE( 255)						if (::hx::IsNotNull( currentFocus->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) )) {
HXLINE( 256)							newFocus = this->findNextContainerFocus(( ( ::openfl::display::DisplayObjectContainer)(currentFocus->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)) ),::hx::TCast<  ::openfl::display::DisplayObject >::cast(currentFocus),true);
            						}
            					}
            				}
HXLINE( 259)				if (::hx::IsNull( newFocus )) {
HXLINE( 260)					newFocus = this->findNextChildFocus(this->_root);
HXLINE( 261)					wrapped = ::hx::IsNotNull( currentFocus );
            				}
            			}
            		}
HXLINE( 264)		return  ::feathers::core::_DefaultFocusManager::FocusResult_obj::__alloc( HX_CTX ,newFocus,wrapped);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,findNextFocusInternal,return )

 ::feathers::core::_DefaultFocusManager::FocusResult DefaultFocusManager_obj::findNextRelativeFocusInternal(int keyCode){
            	HX_GC_STACKFRAME(&_hx_pos_3701e1b2434e52b4_267_findNextRelativeFocusInternal)
HXLINE( 268)		 ::feathers::layout::RelativePosition relativePosition;
HXDLIN( 268)		switch((int)(keyCode)){
            			case (int)37: {
HXLINE( 268)				relativePosition = ::feathers::layout::RelativePosition_obj::LEFT_dyn();
            			}
            			break;
            			case (int)38: {
HXLINE( 268)				relativePosition = ::feathers::layout::RelativePosition_obj::TOP_dyn();
            			}
            			break;
            			case (int)39: {
HXLINE( 268)				relativePosition = ::feathers::layout::RelativePosition_obj::RIGHT_dyn();
            			}
            			break;
            			case (int)40: {
HXLINE( 268)				relativePosition = ::feathers::layout::RelativePosition_obj::BOTTOM_dyn();
            			}
            			break;
            			default:{
HXLINE( 273)				return  ::feathers::core::_DefaultFocusManager::FocusResult_obj::__alloc( HX_CTX ,null(),false);
            			}
            		}
HXLINE( 275)		::Dynamic currentFocus = this->get_focus();
HXLINE( 276)		::Array< ::Dynamic> focusableObjects = ::feathers::utils::FocusUtil_obj::findAllFocusableObjects(this->_root,null());
HXLINE( 277)		if (::hx::IsNull( currentFocus )) {
HXLINE( 278)			if ((focusableObjects->length > 0)) {
HXLINE( 279)				return  ::feathers::core::_DefaultFocusManager::FocusResult_obj::__alloc( HX_CTX ,focusableObjects->__get(0),false);
            			}
HXLINE( 281)			return  ::feathers::core::_DefaultFocusManager::FocusResult_obj::__alloc( HX_CTX ,null(),false);
            		}
HXLINE( 283)		::Dynamic newFocus = currentFocus;
HXLINE( 284)		 ::openfl::geom::Rectangle focusedRect = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(currentFocus)->getBounds(( ( ::openfl::display::DisplayObject)(currentFocus->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic)) ));
HXLINE( 285)		{
HXLINE( 285)			int _g = 0;
HXDLIN( 285)			while((_g < focusableObjects->length)){
HXLINE( 285)				::Dynamic focusableObject = focusableObjects->__get(_g);
HXDLIN( 285)				_g = (_g + 1);
HXLINE( 286)				if (::hx::IsInstanceEq( focusableObject,currentFocus )) {
HXLINE( 287)					continue;
            				}
HXLINE( 289)				if (!(this->isValidFocus(focusableObject,null()))) {
HXLINE( 290)					continue;
            				}
HXLINE( 292)				if (::feathers::utils::DPadFocusUtil_obj::isBetterFocusForRelativePosition(::hx::TCast<  ::openfl::display::DisplayObject >::cast(focusableObject),::hx::TCast<  ::openfl::display::DisplayObject >::cast(newFocus),focusedRect,relativePosition)) {
HXLINE( 294)					newFocus = focusableObject;
            				}
            			}
            		}
HXLINE( 297)		return  ::feathers::core::_DefaultFocusManager::FocusResult_obj::__alloc( HX_CTX ,newFocus,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,findNextRelativeFocusInternal,return )

bool DefaultFocusManager_obj::isValidFocusWithKeyboard(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_300_isValidFocusWithKeyboard)
HXLINE( 301)		bool _hx_tmp;
HXDLIN( 301)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::openfl::display::InteractiveObject >())) {
HXLINE( 301)			_hx_tmp = !(::hx::TCast<  ::openfl::display::InteractiveObject >::cast(target)->get_tabEnabled());
            		}
            		else {
HXLINE( 301)			_hx_tmp = false;
            		}
HXDLIN( 301)		if (_hx_tmp) {
HXLINE( 302)			return false;
            		}
HXLINE( 304)		return this->isValidFocus(target,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,isValidFocusWithKeyboard,return )

bool DefaultFocusManager_obj::isValidFocus(::Dynamic target,::hx::Null< bool >  __o_allowIfUnderModal){
            		bool allowIfUnderModal = __o_allowIfUnderModal.Default(false);
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_307_isValidFocus)
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		bool _hx_tmp1;
HXDLIN( 308)		bool _hx_tmp2;
HXDLIN( 308)		bool _hx_tmp3;
HXDLIN( 308)		if (::hx::IsNotNull( target )) {
HXLINE( 308)			_hx_tmp3 = ::hx::IsNull( target->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 308)			_hx_tmp3 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp3)) {
HXLINE( 308)			_hx_tmp2 = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManagerAware_obj::get_focusManager(target),::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 308)			_hx_tmp2 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp2)) {
HXLINE( 308)			_hx_tmp1 = !(::feathers::core::IFocusObject_obj::get_focusEnabled(target));
            		}
            		else {
HXLINE( 308)			_hx_tmp1 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp1)) {
HXLINE( 308)			_hx_tmp = !(::feathers::core::IDisplayObject_obj::get_visible(target));
            		}
            		else {
HXLINE( 308)			_hx_tmp = true;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 309)			return false;
            		}
HXLINE( 311)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 312)			::Dynamic uiTarget = target;
HXLINE( 313)			if (!(::feathers::core::IUIControl_obj::get_enabled(uiTarget))) {
HXLINE( 314)				return false;
            			}
            		}
HXLINE( 317)		if (!(allowIfUnderModal)) {
HXLINE( 318)			::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(this->_root->stage);
HXLINE( 319)			if (::feathers::core::IPopUpManager_obj::hasModalPopUps(popUpManager)) {
HXLINE( 320)				 ::openfl::display::DisplayObject displayTarget = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(target);
HXLINE( 321)				if (!(::feathers::utils::PopUpUtil_obj::isTopLevelPopUpOrIsContainedByTopLevelPopUp(displayTarget))) {
HXLINE( 322)					return false;
            				}
            			}
            		}
HXLINE( 327)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultFocusManager_obj,isValidFocus,return )

void DefaultFocusManager_obj::setFocusManager( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_330_setFocusManager)
HXLINE( 331)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusManagerAware >())) {
HXLINE( 332)			::Dynamic targetWithFocus =  ::hx::interface_check(target,0x7031642f);
HXLINE( 333)			::feathers::core::IFocusManagerAware_obj::set_focusManager(targetWithFocus,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 335)		 ::openfl::display::DisplayObjectContainer container = ( ( ::openfl::display::DisplayObjectContainer)(::Std_obj::downcast(target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) );
HXLINE( 336)		if (::hx::IsNotNull( container )) {
HXLINE( 337)			{
HXLINE( 337)				int _g = 0;
HXDLIN( 337)				int _g1 = container->get_numChildren();
HXDLIN( 337)				while((_g < _g1)){
HXLINE( 337)					_g = (_g + 1);
HXDLIN( 337)					int i = (_g - 1);
HXLINE( 338)					 ::openfl::display::DisplayObject child = container->getChildAt(i);
HXLINE( 339)					this->setFocusManager(child);
            				}
            			}
HXLINE( 341)			if (::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 342)				::Dynamic containerWithExtras =  ::hx::interface_check(container,0x21fbac21);
HXLINE( 343)				::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(containerWithExtras);
HXLINE( 344)				if (::hx::IsNotNull( extras )) {
HXLINE( 345)					int _g = 0;
HXDLIN( 345)					while((_g < extras->length)){
HXLINE( 345)						 ::openfl::display::DisplayObject child = extras->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 345)						_g = (_g + 1);
HXLINE( 346)						this->setFocusManager(child);
            					}
            				}
HXLINE( 349)				extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(containerWithExtras);
HXLINE( 350)				if (::hx::IsNotNull( extras )) {
HXLINE( 351)					int _g = 0;
HXDLIN( 351)					while((_g < extras->length)){
HXLINE( 351)						 ::openfl::display::DisplayObject child = extras->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 351)						_g = (_g + 1);
HXLINE( 352)						this->setFocusManager(child);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,setFocusManager,(void))

void DefaultFocusManager_obj::clearFocusManager( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_359_clearFocusManager)
HXLINE( 360)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusManagerAware >())) {
HXLINE( 361)			::Dynamic targetWithFocus =  ::hx::interface_check(target,0x7031642f);
HXLINE( 362)			if (::hx::IsInstanceEq( ::feathers::core::IFocusManagerAware_obj::get_focusManager(targetWithFocus),::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 363)				if (::hx::IsInstanceEq( targetWithFocus,this->_focusToRestore )) {
HXLINE( 364)					this->_focusToRestore = null();
            				}
HXLINE( 366)				if (::hx::IsInstanceEq( this->get_focus(),targetWithFocus )) {
HXLINE( 368)					::Dynamic focusOwner = null();
HXLINE( 369)					if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 370)						focusOwner = ::feathers::core::IFocusObject_obj::get_focusOwner(targetWithFocus);
            					}
HXLINE( 372)					bool _hx_tmp;
HXDLIN( 372)					if (::hx::IsNotNull( focusOwner )) {
HXLINE( 372)						_hx_tmp = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManagerAware_obj::get_focusManager(focusOwner),::hx::ObjectPtr<OBJ_>(this) );
            					}
            					else {
HXLINE( 372)						_hx_tmp = false;
            					}
HXDLIN( 372)					if (_hx_tmp) {
HXLINE( 373)						focusOwner = null();
            					}
HXLINE( 375)					this->set_focus(focusOwner);
            				}
HXLINE( 377)				::feathers::core::IFocusManagerAware_obj::set_focusManager(targetWithFocus,null());
            			}
            		}
HXLINE( 380)		 ::openfl::display::DisplayObjectContainer container = ( ( ::openfl::display::DisplayObjectContainer)(::Std_obj::downcast(target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) );
HXLINE( 381)		if (::hx::IsNotNull( container )) {
HXLINE( 382)			{
HXLINE( 382)				int _g = 0;
HXDLIN( 382)				int _g1 = container->get_numChildren();
HXDLIN( 382)				while((_g < _g1)){
HXLINE( 382)					_g = (_g + 1);
HXDLIN( 382)					int i = (_g - 1);
HXLINE( 383)					 ::openfl::display::DisplayObject child = container->getChildAt(i);
HXLINE( 384)					this->clearFocusManager(child);
            				}
            			}
HXLINE( 386)			if (::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 387)				::Dynamic containerWithExtras =  ::hx::interface_check(container,0x21fbac21);
HXLINE( 388)				::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(containerWithExtras);
HXLINE( 389)				if (::hx::IsNotNull( extras )) {
HXLINE( 390)					int _g = 0;
HXDLIN( 390)					while((_g < extras->length)){
HXLINE( 390)						 ::openfl::display::DisplayObject child = extras->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 390)						_g = (_g + 1);
HXLINE( 391)						this->clearFocusManager(child);
            					}
            				}
HXLINE( 394)				extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(containerWithExtras);
HXLINE( 395)				if (::hx::IsNotNull( extras )) {
HXLINE( 396)					int _g = 0;
HXDLIN( 396)					while((_g < extras->length)){
HXLINE( 396)						 ::openfl::display::DisplayObject child = extras->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 396)						_g = (_g + 1);
HXLINE( 397)						this->clearFocusManager(child);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,clearFocusManager,(void))

::Dynamic DefaultFocusManager_obj::findPreviousContainerFocus( ::openfl::display::DisplayObjectContainer container, ::openfl::display::DisplayObject beforeChild,bool fallbackToGlobal){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_404_findPreviousContainerFocus)
HXLINE( 405)		 ::openfl::display::DisplayObjectContainer outerContainer = container;
HXLINE( 406)		bool _hx_tmp;
HXDLIN( 406)		if (::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::controls::supportClasses::IViewPort >())) {
HXLINE( 406)			_hx_tmp = !(::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusContainer >()));
            		}
            		else {
HXLINE( 406)			_hx_tmp = false;
            		}
HXDLIN( 406)		if (_hx_tmp) {
HXLINE( 407)			outerContainer = container->parent;
            		}
HXLINE( 409)		bool hasProcessedBeforeChild = ::hx::IsNull( beforeChild );
HXLINE( 410)		if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 411)			::Dynamic focusWithExtras =  ::hx::interface_check(outerContainer,0x21fbac21);
HXLINE( 412)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(focusWithExtras);
HXLINE( 413)			if (::hx::IsNotNull( extras )) {
HXLINE( 414)				int startIndex = (extras->length - 1);
HXLINE( 415)				if (!(hasProcessedBeforeChild)) {
HXLINE( 416)					int extraIndex = extras->indexOf(beforeChild,null());
HXLINE( 417)					if ((extraIndex != -1)) {
HXLINE( 418)						startIndex = (extraIndex - 1);
HXLINE( 419)						hasProcessedBeforeChild = true;
            					}
            				}
HXLINE( 422)				if (hasProcessedBeforeChild) {
HXLINE( 423)					int i = startIndex;
HXLINE( 424)					while((i >= 0)){
HXLINE( 425)						 ::openfl::display::DisplayObject child = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 426)						::Dynamic foundChild = this->findPreviousChildFocus(child);
HXLINE( 427)						if (::hx::IsNotNull( foundChild )) {
HXLINE( 428)							return foundChild;
            						}
HXLINE( 430)						i = (i - 1);
            					}
            				}
            			}
            		}
HXLINE( 435)		int startIndex = (container->get_numChildren() - 1);
HXLINE( 436)		if (!(hasProcessedBeforeChild)) {
HXLINE( 437)			int childIndex = -1;
HXLINE( 438)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 439)				childIndex = container->getChildIndex(beforeChild);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 440)					{
HXLINE( 440)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 443)			if ((childIndex != -1)) {
HXLINE( 444)				startIndex = (childIndex - 1);
HXLINE( 445)				hasProcessedBeforeChild = true;
            			}
            		}
HXLINE( 448)		if (hasProcessedBeforeChild) {
HXLINE( 449)			int i = startIndex;
HXLINE( 450)			while((i >= 0)){
HXLINE( 451)				 ::openfl::display::DisplayObject child = container->getChildAt(i);
HXLINE( 452)				::Dynamic foundChild = this->findPreviousChildFocus(child);
HXLINE( 453)				if (::hx::IsNotNull( foundChild )) {
HXLINE( 454)					return foundChild;
            				}
HXLINE( 456)				i = (i - 1);
            			}
            		}
HXLINE( 459)		if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 460)			::Dynamic focusWithExtras =  ::hx::interface_check(outerContainer,0x21fbac21);
HXLINE( 461)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(focusWithExtras);
HXLINE( 462)			if (::hx::IsNotNull( extras )) {
HXLINE( 463)				int startIndex = (extras->length - 1);
HXLINE( 464)				if (!(hasProcessedBeforeChild)) {
HXLINE( 465)					int extraIndex = extras->indexOf(beforeChild,null());
HXLINE( 466)					if ((extraIndex != -1)) {
HXLINE( 467)						startIndex = (extraIndex - 1);
HXLINE( 468)						hasProcessedBeforeChild = true;
            					}
            				}
HXLINE( 471)				if (hasProcessedBeforeChild) {
HXLINE( 472)					int i = startIndex;
HXLINE( 473)					while((i >= 0)){
HXLINE( 474)						 ::openfl::display::DisplayObject child = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 475)						::Dynamic foundChild = this->findPreviousChildFocus(child);
HXLINE( 476)						if (::hx::IsNotNull( foundChild )) {
HXLINE( 477)							return foundChild;
            						}
HXLINE( 479)						i = (i - 1);
            					}
            				}
            			}
            		}
HXLINE( 485)		bool _hx_tmp1;
HXDLIN( 485)		if (fallbackToGlobal) {
HXLINE( 485)			_hx_tmp1 = ::hx::IsInstanceNotEq( outerContainer,this->_root );
            		}
            		else {
HXLINE( 485)			_hx_tmp1 = false;
            		}
HXDLIN( 485)		if (_hx_tmp1) {
HXLINE( 487)			if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 488)				::Dynamic focusContainer =  ::hx::interface_check(outerContainer,0x701686fd);
HXLINE( 489)				if (this->isValidFocusWithKeyboard(focusContainer)) {
HXLINE( 490)					return focusContainer;
            				}
            			}
HXLINE( 493)			return this->findPreviousContainerFocus(outerContainer->parent,outerContainer,true);
            		}
HXLINE( 495)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(DefaultFocusManager_obj,findPreviousContainerFocus,return )

::Dynamic DefaultFocusManager_obj::findNextContainerFocus( ::openfl::display::DisplayObjectContainer container, ::openfl::display::DisplayObject afterChild,bool fallbackToGlobal){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_498_findNextContainerFocus)
HXLINE( 499)		 ::openfl::display::DisplayObjectContainer outerContainer = container;
HXLINE( 500)		bool _hx_tmp;
HXDLIN( 500)		if (::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::controls::supportClasses::IViewPort >())) {
HXLINE( 500)			_hx_tmp = !(::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusContainer >()));
            		}
            		else {
HXLINE( 500)			_hx_tmp = false;
            		}
HXDLIN( 500)		if (_hx_tmp) {
HXLINE( 501)			outerContainer = container->parent;
            		}
HXLINE( 503)		bool hasProcessedAfterChild = ::hx::IsNull( afterChild );
HXLINE( 504)		::Array< ::Dynamic> exclusions = null();
HXLINE( 505)		if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusExclusions >())) {
HXLINE( 506)			exclusions = ::feathers::core::IFocusExclusions_obj::get_focusExclusions( ::hx::interface_check(outerContainer,0xa67fad23));
            		}
HXLINE( 508)		if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 509)			::Dynamic focusWithExtras =  ::hx::interface_check(outerContainer,0x21fbac21);
HXLINE( 510)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(focusWithExtras);
HXLINE( 511)			if (::hx::IsNotNull( extras )) {
HXLINE( 512)				int startIndex = 0;
HXLINE( 513)				if (!(hasProcessedAfterChild)) {
HXLINE( 514)					int extrasIndex = extras->indexOf(afterChild,null());
HXLINE( 515)					if ((extrasIndex != -1)) {
HXLINE( 516)						startIndex = (extrasIndex + 1);
HXLINE( 517)						hasProcessedAfterChild = true;
            					}
            				}
HXLINE( 520)				if (hasProcessedAfterChild) {
HXLINE( 521)					int _g = startIndex;
HXDLIN( 521)					int _g1 = extras->length;
HXDLIN( 521)					while((_g < _g1)){
HXLINE( 521)						_g = (_g + 1);
HXDLIN( 521)						int i = (_g - 1);
HXLINE( 522)						 ::openfl::display::DisplayObject child = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 523)						bool _hx_tmp;
HXDLIN( 523)						if (::hx::IsNotNull( exclusions )) {
HXLINE( 523)							_hx_tmp = (exclusions->indexOf(child,null()) != -1);
            						}
            						else {
HXLINE( 523)							_hx_tmp = false;
            						}
HXDLIN( 523)						if (_hx_tmp) {
HXLINE( 524)							continue;
            						}
HXLINE( 526)						::Dynamic foundChild = this->findNextChildFocus(child);
HXLINE( 527)						if (::hx::IsNotNull( foundChild )) {
HXLINE( 528)							return foundChild;
            						}
            					}
            				}
            			}
            		}
HXLINE( 534)		int startIndex = 0;
HXLINE( 535)		if (!(hasProcessedAfterChild)) {
HXLINE( 536)			int childIndex = -1;
HXLINE( 537)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 538)				childIndex = container->getChildIndex(afterChild);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 539)					{
HXLINE( 539)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 542)			if ((childIndex != -1)) {
HXLINE( 543)				startIndex = (childIndex + 1);
HXLINE( 544)				hasProcessedAfterChild = true;
            			}
            		}
HXLINE( 547)		if (hasProcessedAfterChild) {
HXLINE( 548)			int _g = startIndex;
HXDLIN( 548)			int _g1 = container->get_numChildren();
HXDLIN( 548)			while((_g < _g1)){
HXLINE( 548)				_g = (_g + 1);
HXDLIN( 548)				int i = (_g - 1);
HXLINE( 549)				 ::openfl::display::DisplayObject child = container->getChildAt(i);
HXLINE( 550)				bool _hx_tmp;
HXDLIN( 550)				if (::hx::IsNotNull( exclusions )) {
HXLINE( 550)					_hx_tmp = (exclusions->indexOf(child,null()) != -1);
            				}
            				else {
HXLINE( 550)					_hx_tmp = false;
            				}
HXDLIN( 550)				if (_hx_tmp) {
HXLINE( 551)					continue;
            				}
HXLINE( 553)				::Dynamic foundChild = this->findNextChildFocus(child);
HXLINE( 554)				if (::hx::IsNotNull( foundChild )) {
HXLINE( 555)					return foundChild;
            				}
            			}
            		}
HXLINE( 559)		if (::Std_obj::isOfType(outerContainer,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE( 560)			::Dynamic focusWithExtras =  ::hx::interface_check(outerContainer,0x21fbac21);
HXLINE( 561)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(focusWithExtras);
HXLINE( 562)			if (::hx::IsNotNull( extras )) {
HXLINE( 563)				int startIndex = 0;
HXLINE( 564)				if (!(hasProcessedAfterChild)) {
HXLINE( 565)					int extrasIndex = extras->indexOf(afterChild,null());
HXLINE( 566)					if ((extrasIndex != -1)) {
HXLINE( 567)						startIndex = (extrasIndex + 1);
HXLINE( 568)						hasProcessedAfterChild = true;
            					}
            				}
HXLINE( 571)				if (hasProcessedAfterChild) {
HXLINE( 572)					int _g = startIndex;
HXDLIN( 572)					int _g1 = extras->length;
HXDLIN( 572)					while((_g < _g1)){
HXLINE( 572)						_g = (_g + 1);
HXDLIN( 572)						int i = (_g - 1);
HXLINE( 573)						 ::openfl::display::DisplayObject child = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 574)						bool _hx_tmp;
HXDLIN( 574)						if (::hx::IsNotNull( exclusions )) {
HXLINE( 574)							_hx_tmp = (exclusions->indexOf(child,null()) != -1);
            						}
            						else {
HXLINE( 574)							_hx_tmp = false;
            						}
HXDLIN( 574)						if (_hx_tmp) {
HXLINE( 575)							continue;
            						}
HXLINE( 577)						::Dynamic foundChild = this->findNextChildFocus(child);
HXLINE( 578)						if (::hx::IsNotNull( foundChild )) {
HXLINE( 579)							return foundChild;
            						}
            					}
            				}
            			}
            		}
HXLINE( 586)		bool _hx_tmp1;
HXDLIN( 586)		bool _hx_tmp2;
HXDLIN( 586)		if (fallbackToGlobal) {
HXLINE( 586)			_hx_tmp2 = ::hx::IsInstanceNotEq( outerContainer,this->_root );
            		}
            		else {
HXLINE( 586)			_hx_tmp2 = false;
            		}
HXDLIN( 586)		if (_hx_tmp2) {
HXLINE( 586)			_hx_tmp1 = ::hx::IsNotNull( outerContainer->parent );
            		}
            		else {
HXLINE( 586)			_hx_tmp1 = false;
            		}
HXDLIN( 586)		if (_hx_tmp1) {
HXLINE( 587)			::Dynamic foundChild = this->findNextContainerFocus(outerContainer->parent,outerContainer,true);
HXLINE( 588)			if (::hx::IsNotNull( foundChild )) {
HXLINE( 589)				return foundChild;
            			}
            		}
HXLINE( 592)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(DefaultFocusManager_obj,findNextContainerFocus,return )

::Dynamic DefaultFocusManager_obj::findPreviousChildFocus( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_595_findPreviousChildFocus)
HXLINE( 596)		 ::openfl::display::DisplayObjectContainer childContainer = ( ( ::openfl::display::DisplayObjectContainer)(::Std_obj::downcast(child,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) );
HXLINE( 597)		if (::hx::IsNotNull( childContainer )) {
HXLINE( 598)			bool findPrevChildContainer = !(::Std_obj::isOfType(childContainer,::hx::ClassOf< ::feathers::core::IFocusObject >()));
HXLINE( 599)			bool _hx_tmp;
HXDLIN( 599)			if (!(findPrevChildContainer)) {
HXLINE( 599)				_hx_tmp = ::Std_obj::isOfType(childContainer,::hx::ClassOf< ::feathers::core::IFocusContainer >());
            			}
            			else {
HXLINE( 599)				_hx_tmp = false;
            			}
HXDLIN( 599)			if (_hx_tmp) {
HXLINE( 600)				::Dynamic focusContainer =  ::hx::interface_check(childContainer,0xf7aca7c3);
HXLINE( 601)				findPrevChildContainer = ::feathers::core::IFocusContainer_obj::get_childFocusEnabled(focusContainer);
            			}
HXLINE( 603)			if (findPrevChildContainer) {
HXLINE( 604)				::Dynamic foundChild = this->findPreviousContainerFocus(childContainer,null(),false);
HXLINE( 605)				if (::hx::IsNotNull( foundChild )) {
HXLINE( 606)					return foundChild;
            				}
            			}
            		}
HXLINE( 610)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 611)			::Dynamic childWithFocus =  ::hx::interface_check(child,0x701686fd);
HXLINE( 612)			if (this->isValidFocusWithKeyboard(childWithFocus)) {
HXLINE( 613)				if (!(::Std_obj::isOfType(childWithFocus,::hx::ClassOf< ::feathers::controls::IGroupedToggle >()))) {
HXLINE( 614)					return childWithFocus;
            				}
HXLINE( 616)				 ::feathers::core::ToggleGroup toggleGroup = ::feathers::controls::IGroupedToggle_obj::get_toggleGroup(childWithFocus);
HXLINE( 617)				if (::hx::IsNull( toggleGroup )) {
HXLINE( 618)					return childWithFocus;
            				}
HXLINE( 620)				if (::Std_obj::isOfType(toggleGroup->get_selectedItem(),::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 621)					::Dynamic selectedItem = toggleGroup->get_selectedItem();
HXLINE( 622)					if (::hx::IsInstanceNotEq( this->get_focus(),selectedItem )) {
HXLINE( 624)						return selectedItem;
            					}
            				}
            			}
            		}
HXLINE( 629)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,findPreviousChildFocus,return )

::Dynamic DefaultFocusManager_obj::findNextChildFocus( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_632_findNextChildFocus)
HXLINE( 633)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 634)			::Dynamic childWithFocus =  ::hx::interface_check(child,0x701686fd);
HXLINE( 635)			if (this->isValidFocusWithKeyboard(childWithFocus)) {
HXLINE( 636)				if (!(::Std_obj::isOfType(childWithFocus,::hx::ClassOf< ::feathers::controls::IGroupedToggle >()))) {
HXLINE( 637)					return childWithFocus;
            				}
HXLINE( 639)				 ::feathers::core::ToggleGroup toggleGroup = ::feathers::controls::IGroupedToggle_obj::get_toggleGroup(childWithFocus);
HXLINE( 640)				if (::hx::IsNull( toggleGroup )) {
HXLINE( 641)					return childWithFocus;
            				}
HXLINE( 643)				if (::Std_obj::isOfType(toggleGroup->get_selectedItem(),::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 644)					::Dynamic selectedItem = toggleGroup->get_selectedItem();
HXLINE( 645)					if (::hx::IsInstanceNotEq( this->get_focus(),selectedItem )) {
HXLINE( 647)						return selectedItem;
            					}
            				}
            			}
            		}
HXLINE( 653)		 ::openfl::display::DisplayObjectContainer childContainer = ( ( ::openfl::display::DisplayObjectContainer)(::Std_obj::downcast(child,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) );
HXLINE( 654)		if (::hx::IsNotNull( childContainer )) {
HXLINE( 655)			bool findNextChildContainer = !(::Std_obj::isOfType(childContainer,::hx::ClassOf< ::feathers::core::IFocusObject >()));
HXLINE( 656)			bool _hx_tmp;
HXDLIN( 656)			if (!(findNextChildContainer)) {
HXLINE( 656)				_hx_tmp = ::Std_obj::isOfType(childContainer,::hx::ClassOf< ::feathers::core::IFocusContainer >());
            			}
            			else {
HXLINE( 656)				_hx_tmp = false;
            			}
HXDLIN( 656)			if (_hx_tmp) {
HXLINE( 657)				::Dynamic focusContainer =  ::hx::interface_check(childContainer,0xf7aca7c3);
HXLINE( 658)				findNextChildContainer = ::feathers::core::IFocusContainer_obj::get_childFocusEnabled(focusContainer);
            			}
HXLINE( 660)			if (findNextChildContainer) {
HXLINE( 661)				::Dynamic foundChild = this->findNextContainerFocus(childContainer,null(),false);
HXLINE( 662)				if (::hx::IsNotNull( foundChild )) {
HXLINE( 663)					return foundChild;
            				}
            			}
            		}
HXLINE( 667)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,findNextChildFocus,return )

void DefaultFocusManager_obj::setStageFocus( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_670_setStageFocus)
HXLINE( 671)		while(::Std_obj::isOfType(value,::hx::ClassOf< ::feathers::core::IStageFocusDelegate >())){
HXLINE( 672)			 ::openfl::display::InteractiveObject newFocusTarget = ::feathers::core::IStageFocusDelegate_obj::get_stageFocusTarget( ::hx::interface_check(value,0x4afbe419));
HXLINE( 673)			if (::hx::IsNull( newFocusTarget )) {
HXLINE( 674)				goto _hx_goto_34;
            			}
HXLINE( 676)			value = newFocusTarget;
            		}
            		_hx_goto_34:;
HXLINE( 678)		if (::hx::IsNull( value )) {
HXLINE( 679)			value = this->_root->stage;
            		}
HXLINE( 682)		if (::hx::IsNull( this->_root->stage->window )) {
HXLINE( 683)			return;
            		}
HXLINE( 686)		if (::hx::IsInstanceNotEq( this->_root->stage->get_focus(),value )) {
HXLINE( 687)			this->_root->stage->set_focus(value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,setStageFocus,(void))

void DefaultFocusManager_obj::handleRootAddedToStage( ::openfl::display::DisplayObject root){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_691_handleRootAddedToStage)
HXLINE( 692)		 ::openfl::display::Stage stage = this->_root->stage;
HXLINE( 693)		if (::hx::IsNull( stage )) {
HXLINE( 694)			return;
            		}
HXLINE( 696)		stage->stageFocusRect = false;
HXLINE( 697)		bool _hx_tmp;
HXDLIN( 697)		if (this->_enabled) {
HXLINE( 697)			_hx_tmp = ::hx::IsNull( stage->get_focus() );
            		}
            		else {
HXLINE( 697)			_hx_tmp = false;
            		}
HXDLIN( 697)		if (_hx_tmp) {
HXLINE( 699)			stage->set_focus(stage);
            		}
HXLINE( 704)		this->_root->addEventListener(HX_("keyDown",a1,69,47,9c),this->defaultFocusManager_root_keyDownHandler_dyn(),false,0,true);
HXLINE( 705)		this->_root->addEventListener(HX_("keyFocusChange",09,9c,8e,e5),this->defaultFocusManager_root_keyFocusChangeHandler_dyn(),false,0,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,handleRootAddedToStage,(void))

void DefaultFocusManager_obj::handleRootRemovedFromStage( ::openfl::display::DisplayObject root){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_709_handleRootRemovedFromStage)
HXLINE( 710)		this->set_focus(null());
HXLINE( 711)		 ::openfl::display::Stage stage = this->_root->stage;
HXLINE( 712)		if (::hx::IsNull( stage )) {
HXLINE( 713)			return;
            		}
HXLINE( 718)		this->_root->removeEventListener(HX_("keyDown",a1,69,47,9c),this->defaultFocusManager_root_keyDownHandler_dyn(),null());
HXLINE( 719)		this->_root->removeEventListener(HX_("keyFocusChange",09,9c,8e,e5),this->defaultFocusManager_root_keyFocusChangeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,handleRootRemovedFromStage,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_724_defaultFocusManager_root_addedToStageHandler)
HXDLIN( 724)		this->handleRootAddedToStage(::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->currentTarget));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_addedToStageHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_728_defaultFocusManager_root_removedFromStageHandler)
HXDLIN( 728)		this->handleRootRemovedFromStage(::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->currentTarget));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_removedFromStageHandler,(void))

void DefaultFocusManager_obj::restoreFocus(){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_731_restoreFocus)
HXLINE( 732)		bool _hx_tmp;
HXDLIN( 732)		bool _hx_tmp1;
HXDLIN( 732)		if (::hx::IsNotNull( this->_root->stage )) {
HXLINE( 732)			_hx_tmp1 = ::hx::IsNull( this->_focusToRestore );
            		}
            		else {
HXLINE( 732)			_hx_tmp1 = true;
            		}
HXDLIN( 732)		if (!(_hx_tmp1)) {
HXLINE( 732)			_hx_tmp = !(this->isValidFocus(this->_focusToRestore,null()));
            		}
            		else {
HXLINE( 732)			_hx_tmp = true;
            		}
HXDLIN( 732)		if (_hx_tmp) {
HXLINE( 733)			return;
            		}
HXLINE( 735)		this->set_focus(this->_focusToRestore);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultFocusManager_obj,restoreFocus,(void))

bool DefaultFocusManager_obj::shouldBeManaged( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_738_shouldBeManaged)
HXLINE( 739)		if (::hx::IsInstanceEq( target,this->_root )) {
HXLINE( 740)			return true;
            		}
HXLINE( 742)		 ::openfl::display::DisplayObjectContainer container = target->parent;
HXLINE( 743)		bool valid = false;
HXLINE( 744)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 745)			valid = (container->getChildIndex(target) != -1);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 746)				{
HXLINE( 746)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 749)		bool _hx_tmp;
HXDLIN( 749)		bool _hx_tmp1;
HXDLIN( 749)		if (valid) {
HXLINE( 749)			_hx_tmp1 = ::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::controls::supportClasses::IViewPort >());
            		}
            		else {
HXLINE( 749)			_hx_tmp1 = false;
            		}
HXDLIN( 749)		if (_hx_tmp1) {
HXLINE( 749)			_hx_tmp = !(::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusContainer >()));
            		}
            		else {
HXLINE( 749)			_hx_tmp = false;
            		}
HXDLIN( 749)		if (_hx_tmp) {
HXLINE( 750)			container = container->parent;
            		}
            		else {
HXLINE( 751)			bool _hx_tmp;
HXDLIN( 751)			if (!(valid)) {
HXLINE( 751)				_hx_tmp = ::Std_obj::isOfType(container,::hx::ClassOf< ::feathers::core::IFocusExtras >());
            			}
            			else {
HXLINE( 751)				_hx_tmp = false;
            			}
HXDLIN( 751)			if (_hx_tmp) {
HXLINE( 752)				::Dynamic container1 =  ::hx::interface_check(container,0x21fbac21);
HXLINE( 753)				if (::hx::IsNotNull( ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(container1) )) {
HXLINE( 754)					int _g = 0;
HXDLIN( 754)					::Array< ::Dynamic> _g1 = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(container1);
HXDLIN( 754)					while((_g < _g1->length)){
HXLINE( 754)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 754)						_g = (_g + 1);
HXLINE( 755)						if (::hx::IsInstanceEq( child,target )) {
HXLINE( 756)							valid = true;
HXLINE( 757)							goto _hx_goto_41;
            						}
HXLINE( 759)						if (::Std_obj::isOfType(child,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 760)							valid = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(child)->contains(child);
HXLINE( 761)							if (valid) {
HXLINE( 762)								goto _hx_goto_41;
            							}
            						}
            					}
            					_hx_goto_41:;
            				}
HXLINE( 767)				bool _hx_tmp;
HXDLIN( 767)				if (!(valid)) {
HXLINE( 767)					_hx_tmp = ::hx::IsNotNull( ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(container1) );
            				}
            				else {
HXLINE( 767)					_hx_tmp = false;
            				}
HXDLIN( 767)				if (_hx_tmp) {
HXLINE( 768)					int _g = 0;
HXDLIN( 768)					::Array< ::Dynamic> _g1 = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(container1);
HXDLIN( 768)					while((_g < _g1->length)){
HXLINE( 768)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 768)						_g = (_g + 1);
HXLINE( 769)						if (::hx::IsInstanceEq( child,target )) {
HXLINE( 770)							valid = true;
HXLINE( 771)							goto _hx_goto_42;
            						}
HXLINE( 773)						if (::Std_obj::isOfType(child,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 774)							valid = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(child)->contains(child);
HXLINE( 775)							if (valid) {
HXLINE( 776)								goto _hx_goto_42;
            							}
            						}
            					}
            					_hx_goto_42:;
            				}
            			}
            		}
HXLINE( 782)		if (!(valid)) {
HXLINE( 783)			return false;
            		}
HXLINE( 785)		bool _hx_tmp2;
HXDLIN( 785)		if (::hx::IsNotNull( container )) {
HXLINE( 785)			_hx_tmp2 = ::hx::IsInstanceNotEq( container,this->_root );
            		}
            		else {
HXLINE( 785)			_hx_tmp2 = false;
            		}
HXDLIN( 785)		if (_hx_tmp2) {
HXLINE( 786)			return this->shouldBeManaged(container);
            		}
HXLINE( 788)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,shouldBeManaged,return )

void DefaultFocusManager_obj::defaultFocusManager_root_addedHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_791_defaultFocusManager_root_addedHandler)
HXLINE( 792)		 ::openfl::display::DisplayObject target = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->target);
HXLINE( 793)		if (::hx::IsNotNull( this->_focusPane )) {
HXLINE( 794)			bool _hx_tmp;
HXDLIN( 794)			if (::hx::IsInstanceNotEq( this->_focusPane,target )) {
HXLINE( 794)				_hx_tmp = this->_focusPane->contains(target);
            			}
            			else {
HXLINE( 794)				_hx_tmp = true;
            			}
HXDLIN( 794)			if (_hx_tmp) {
HXLINE( 796)				::feathers::core::IPopUpManager_obj::addPopUp(::feathers::core::PopUpManager_obj::forStage(this->_root->stage),this->_focusPane,false,false,null());
HXLINE( 797)				return;
            			}
            		}
HXLINE( 800)		if (this->shouldBeManaged(target)) {
HXLINE( 801)			this->setFocusManager(target);
            		}
HXLINE( 803)		::Dynamic currentFocus = null();
HXLINE( 804)		if (::hx::IsNotNull( this->_root->stage )) {
HXLINE( 806)			currentFocus = this->findFocusForDisplayObject(this->_root->stage->get_focus(),true);
            		}
HXLINE( 808)		bool _hx_tmp;
HXDLIN( 808)		if (::hx::IsNotNull( currentFocus )) {
HXLINE( 808)			_hx_tmp = !(this->isValidFocus(currentFocus,null()));
            		}
            		else {
HXLINE( 808)			_hx_tmp = false;
            		}
HXDLIN( 808)		if (_hx_tmp) {
HXLINE( 811)			this->set_focus(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_addedHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_removedHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_815_defaultFocusManager_root_removedHandler)
HXLINE( 816)		 ::openfl::display::DisplayObject target = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->target);
HXLINE( 817)		this->clearFocusManager(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_removedHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_mouseFocusChangeHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_820_defaultFocusManager_root_mouseFocusChangeHandler)
HXLINE( 821)		if (event->isDefaultPrevented()) {
HXLINE( 822)			return;
            		}
HXLINE( 824)		if (!(this->_enabled)) {
HXLINE( 825)			return;
            		}
HXLINE( 827)		 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(::Std_obj::downcast(event->relatedObject,::hx::ClassOf< ::openfl::text::TextField >())) );
HXLINE( 829)		if (::hx::IsNotNull( textField )) {
HXLINE( 830)			bool _hx_tmp;
HXDLIN( 830)			if (::hx::IsNotEq( textField->get_type(),1 )) {
HXLINE( 830)				_hx_tmp = textField->get_selectable();
            			}
            			else {
HXLINE( 830)				_hx_tmp = true;
            			}
HXDLIN( 830)			if (_hx_tmp) {
HXLINE( 834)				return;
            			}
HXLINE( 836)			 ::openfl::display::DisplayObject newFocus = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(this->findFocusForDisplayObject(textField,null()));
HXLINE( 837)			while(::Std_obj::isOfType(newFocus,::hx::ClassOf< ::feathers::core::IStageFocusDelegate >())){
HXLINE( 838)				 ::openfl::display::InteractiveObject newFocusTarget = ::feathers::core::IStageFocusDelegate_obj::get_stageFocusTarget( ::hx::interface_check(newFocus,0x4afbe419));
HXLINE( 839)				if (::hx::IsNull( newFocusTarget )) {
HXLINE( 840)					goto _hx_goto_46;
            				}
HXLINE( 842)				newFocus = newFocusTarget;
            			}
            			_hx_goto_46:;
HXLINE( 844)			if (::hx::IsInstanceEq( textField,newFocus )) {
HXLINE( 848)				return;
            			}
            		}
HXLINE( 853)		event->preventDefault();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_mouseFocusChangeHandler,(void))

void DefaultFocusManager_obj::handleKeyDownFocusWrapping( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_872_handleKeyDownFocusWrapping)
HXLINE( 873)		bool _hx_tmp;
HXDLIN( 873)		if ((::openfl::_hx_system::Capabilities_obj::playerType != HX_("StandAlone",c5,25,52,28))) {
HXLINE( 873)			_hx_tmp = (::openfl::_hx_system::Capabilities_obj::playerType == HX_("Desktop",bc,ed,e5,eb));
            		}
            		else {
HXLINE( 873)			_hx_tmp = true;
            		}
HXDLIN( 873)		if (_hx_tmp) {
HXLINE( 875)			return;
            		}
HXLINE( 878)		bool _hx_tmp1;
HXDLIN( 878)		if (this->_enabled) {
HXLINE( 878)			_hx_tmp1 = event->isDefaultPrevented();
            		}
            		else {
HXLINE( 878)			_hx_tmp1 = true;
            		}
HXDLIN( 878)		if (_hx_tmp1) {
HXLINE( 879)			return;
            		}
HXLINE( 881)		bool _hx_tmp2;
HXDLIN( 881)		if ((event->keyCode != 9)) {
HXLINE( 881)			_hx_tmp2 = (event->keyCode != 0);
            		}
            		else {
HXLINE( 881)			_hx_tmp2 = false;
            		}
HXDLIN( 881)		if (_hx_tmp2) {
HXLINE( 882)			return;
            		}
HXLINE( 885)		if (::hx::IsNotNull( this->_wrapObject )) {
HXLINE( 891)			if ((this->_wrapObject->get_tabIndex() == ::feathers::core::DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX)) {
HXLINE( 892)				this->_wrapObject->set_tabIndex(-1);
            			}
HXLINE( 894)			this->_wrapObject = null();
            		}
HXLINE( 896)		 ::feathers::core::_DefaultFocusManager::FocusResult result = this->findNextFocusInternal(event->shiftKey);
HXLINE( 897)		if (result->wrapped) {
HXLINE( 902)			this->_wrapObject = this->_root->stage->get_focus();
HXLINE( 903)			bool _hx_tmp;
HXDLIN( 903)			if (::hx::IsNotNull( this->_wrapObject )) {
HXLINE( 903)				_hx_tmp = (this->_wrapObject->get_tabIndex() == -1);
            			}
            			else {
HXLINE( 903)				_hx_tmp = false;
            			}
HXDLIN( 903)			if (_hx_tmp) {
HXLINE( 904)				int _hx_tmp;
HXDLIN( 904)				if (event->shiftKey) {
HXLINE( 904)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 904)					_hx_tmp = ::feathers::core::DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX;
            				}
HXDLIN( 904)				this->_wrapObject->set_tabIndex(_hx_tmp);
            			}
HXLINE( 906)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,handleKeyDownFocusWrapping,(void))

void DefaultFocusManager_obj::handleDPadArrowKeys( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_910_handleDPadArrowKeys)
HXLINE( 911)		if ((event->keyLocation != 4)) {
HXLINE( 912)			return;
            		}
HXLINE( 914)		bool _hx_tmp;
HXDLIN( 914)		bool _hx_tmp1;
HXDLIN( 914)		bool _hx_tmp2;
HXDLIN( 914)		if ((event->keyCode != 38)) {
HXLINE( 914)			_hx_tmp2 = (event->keyCode != 40);
            		}
            		else {
HXLINE( 914)			_hx_tmp2 = false;
            		}
HXDLIN( 914)		if (_hx_tmp2) {
HXLINE( 914)			_hx_tmp1 = (event->keyCode != 37);
            		}
            		else {
HXLINE( 914)			_hx_tmp1 = false;
            		}
HXDLIN( 914)		if (_hx_tmp1) {
HXLINE( 914)			_hx_tmp = (event->keyCode != 39);
            		}
            		else {
HXLINE( 914)			_hx_tmp = false;
            		}
HXDLIN( 914)		if (_hx_tmp) {
HXLINE( 915)			return;
            		}
HXLINE( 917)		if (event->isDefaultPrevented()) {
HXLINE( 918)			return;
            		}
HXLINE( 920)		this->_showFocusIndicator = true;
HXLINE( 921)		 ::feathers::core::_DefaultFocusManager::FocusResult result = this->findNextRelativeFocusInternal(event->keyCode);
HXLINE( 922)		this->set_focus(result->newFocus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,handleDPadArrowKeys,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_keyDownHandler( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_925_defaultFocusManager_root_keyDownHandler)
HXLINE( 926)		this->handleKeyDownFocusWrapping(event);
HXLINE( 927)		this->handleDPadArrowKeys(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_keyDownHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_keyFocusChangeHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_930_defaultFocusManager_root_keyFocusChangeHandler)
HXLINE( 931)		bool _hx_tmp;
HXDLIN( 931)		if (this->_enabled) {
HXLINE( 931)			_hx_tmp = event->isDefaultPrevented();
            		}
            		else {
HXLINE( 931)			_hx_tmp = true;
            		}
HXDLIN( 931)		if (_hx_tmp) {
HXLINE( 932)			return;
            		}
HXLINE( 934)		bool _hx_tmp1;
HXDLIN( 934)		if ((event->keyCode != 9)) {
HXLINE( 934)			_hx_tmp1 = (event->keyCode != 0);
            		}
            		else {
HXLINE( 934)			_hx_tmp1 = false;
            		}
HXDLIN( 934)		if (_hx_tmp1) {
HXLINE( 935)			return;
            		}
HXLINE( 937)		this->_showFocusIndicator = true;
HXLINE( 938)		 ::feathers::core::_DefaultFocusManager::FocusResult result = this->findNextFocusInternal(event->shiftKey);
HXLINE( 939)		this->set_focus(result->newFocus);
HXLINE( 940)		if (::hx::IsNull( this->_wrapObject )) {
HXLINE( 943)			event->preventDefault();
            		}
            		else {
HXLINE( 944)			bool _hx_tmp;
HXDLIN( 944)			if (::Std_obj::isOfType(this->_wrapObject,::hx::ClassOf< ::openfl::text::TextField >())) {
HXLINE( 944)				_hx_tmp = ::hx::IsEq( ::hx::TCast<  ::openfl::text::TextField >::cast(this->_wrapObject)->get_type(),1 );
            			}
            			else {
HXLINE( 944)				_hx_tmp = false;
            			}
HXDLIN( 944)			if (_hx_tmp) {
HXLINE( 950)				event->preventDefault();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_keyFocusChangeHandler,(void))

::Dynamic DefaultFocusManager_obj::findFocusForDisplayObject( ::openfl::display::DisplayObject target,::hx::Null< bool >  __o_allowIfUnderModal){
            		bool allowIfUnderModal = __o_allowIfUnderModal.Default(false);
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_955_findFocusForDisplayObject)
HXLINE( 956)		if (::hx::IsNull( target )) {
HXLINE( 957)			return null();
            		}
HXLINE( 959)		::Dynamic focusTarget = null();
HXLINE( 960)		while(true){
HXLINE( 961)			if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 962)				::Dynamic tempFocusTarget =  ::hx::interface_check(target,0x701686fd);
HXLINE( 963)				if (this->isValidFocus(tempFocusTarget,allowIfUnderModal)) {
HXLINE( 964)					bool _hx_tmp;
HXDLIN( 964)					bool _hx_tmp1;
HXDLIN( 964)					if (::hx::IsNotNull( focusTarget )) {
HXLINE( 964)						_hx_tmp1 = !(::Std_obj::isOfType(tempFocusTarget,::hx::ClassOf< ::feathers::core::IFocusContainer >()));
            					}
            					else {
HXLINE( 964)						_hx_tmp1 = true;
            					}
HXDLIN( 964)					if (!(_hx_tmp1)) {
HXLINE( 964)						_hx_tmp = !(::feathers::core::IFocusContainer_obj::get_childFocusEnabled(tempFocusTarget));
            					}
            					else {
HXLINE( 964)						_hx_tmp = true;
            					}
HXDLIN( 964)					if (_hx_tmp) {
HXLINE( 967)						focusTarget = tempFocusTarget;
            					}
            				}
            				else {
HXLINE( 969)					bool _hx_tmp;
HXDLIN( 969)					if (::hx::IsNotNull( ::feathers::core::IFocusObject_obj::get_focusOwner(tempFocusTarget) )) {
HXLINE( 969)						_hx_tmp = this->isValidFocus(::feathers::core::IFocusObject_obj::get_focusOwner(tempFocusTarget),allowIfUnderModal);
            					}
            					else {
HXLINE( 969)						_hx_tmp = false;
            					}
HXDLIN( 969)					if (_hx_tmp) {
HXLINE( 970)						focusTarget = ::feathers::core::IFocusObject_obj::get_focusOwner(tempFocusTarget);
HXLINE( 971)						target = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(tempFocusTarget);
            					}
            				}
            			}
HXLINE( 974)			if (::hx::IsInstanceEq( target,this->_root )) {
HXLINE( 975)				goto _hx_goto_52;
            			}
HXLINE( 977)			target = target->parent;
HXLINE( 960)			if (!(::hx::IsNotNull( target ))) {
HXLINE( 960)				goto _hx_goto_52;
            			}
            		}
            		_hx_goto_52:;
HXLINE( 979)		return focusTarget;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultFocusManager_obj,findFocusForDisplayObject,return )

void DefaultFocusManager_obj::defaultFocusManager_root_mouseDownCaptureHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_982_defaultFocusManager_root_mouseDownCaptureHandler)
HXLINE( 983)		this->_showFocusIndicator = false;
HXLINE( 984)		if (!(this->_enabled)) {
HXLINE( 985)			return;
            		}
HXLINE( 987)		 ::Dynamic interactiveTarget = event->target;
HXLINE( 988)		::Dynamic newFocus = this->findFocusForDisplayObject(( ( ::openfl::display::DisplayObject)(interactiveTarget) ),null());
HXLINE( 989)		this->set_focus(newFocus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_mouseDownCaptureHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_focusInCaptureHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_992_defaultFocusManager_root_focusInCaptureHandler)
HXLINE( 993)		if (!(this->_enabled)) {
HXLINE( 994)			return;
            		}
HXLINE( 996)		this->_focusToRestore = this->findFocusForDisplayObject(::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->target),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_focusInCaptureHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_activateHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_999_defaultFocusManager_root_activateHandler)
HXLINE(1000)		if (!(this->_enabled)) {
HXLINE(1001)			return;
            		}
HXLINE(1003)		this->restoreFocus();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_activateHandler,(void))

void DefaultFocusManager_obj::defaultFocusManager_root_deactivateHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_1006_defaultFocusManager_root_deactivateHandler)
HXLINE(1007)		if (!(this->_enabled)) {
HXLINE(1008)			return;
            		}
HXLINE(1010)		this->set_focus(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultFocusManager_obj,defaultFocusManager_root_deactivateHandler,(void))

int DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX;


::hx::ObjectPtr< DefaultFocusManager_obj > DefaultFocusManager_obj::__new( ::openfl::display::DisplayObject root) {
	::hx::ObjectPtr< DefaultFocusManager_obj > __this = new DefaultFocusManager_obj();
	__this->__construct(root);
	return __this;
}

::hx::ObjectPtr< DefaultFocusManager_obj > DefaultFocusManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject root) {
	DefaultFocusManager_obj *__this = (DefaultFocusManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultFocusManager_obj), true, "feathers.core.DefaultFocusManager"));
	*(void **)__this = DefaultFocusManager_obj::_hx_vtable;
	__this->__construct(root);
	return __this;
}

DefaultFocusManager_obj::DefaultFocusManager_obj()
{
}

void DefaultFocusManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultFocusManager);
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_root,"_root");
	HX_MARK_MEMBER_NAME(_focusPane,"_focusPane");
	HX_MARK_MEMBER_NAME(_showFocusIndicator,"_showFocusIndicator");
	HX_MARK_MEMBER_NAME(_focusToRestore,"_focusToRestore");
	HX_MARK_MEMBER_NAME(_wrapObject,"_wrapObject");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultFocusManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_root,"_root");
	HX_VISIT_MEMBER_NAME(_focusPane,"_focusPane");
	HX_VISIT_MEMBER_NAME(_showFocusIndicator,"_showFocusIndicator");
	HX_VISIT_MEMBER_NAME(_focusToRestore,"_focusToRestore");
	HX_VISIT_MEMBER_NAME(_wrapObject,"_wrapObject");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DefaultFocusManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_root() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { return ::hx::Val( _root ); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focus() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return ::hx::Val( set_root_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusPane") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusPane() ); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return ::hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return ::hx::Val( set_focus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_focusPane") ) { return ::hx::Val( _focusPane ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_wrapObject") ) { return ::hx::Val( _wrapObject ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidFocus") ) { return ::hx::Val( isValidFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"restoreFocus") ) { return ::hx::Val( restoreFocus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_focusPane") ) { return ::hx::Val( get_focusPane_dyn() ); }
		if (HX_FIELD_EQ(inName,"findNextFocus") ) { return ::hx::Val( findNextFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"setStageFocus") ) { return ::hx::Val( setStageFocus_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_focusToRestore") ) { return ::hx::Val( _focusToRestore ); }
		if (HX_FIELD_EQ(inName,"setFocusManager") ) { return ::hx::Val( setFocusManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"shouldBeManaged") ) { return ::hx::Val( shouldBeManaged_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearFocusManager") ) { return ::hx::Val( clearFocusManager_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"showFocusIndicator") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_showFocusIndicator() ); }
		if (HX_FIELD_EQ(inName,"findNextChildFocus") ) { return ::hx::Val( findNextChildFocus_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_showFocusIndicator") ) { return ::hx::Val( _showFocusIndicator ); }
		if (HX_FIELD_EQ(inName,"handleDPadArrowKeys") ) { return ::hx::Val( handleDPadArrowKeys_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"findNextFocusInternal") ) { return ::hx::Val( findNextFocusInternal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_showFocusIndicator") ) { return ::hx::Val( get_showFocusIndicator_dyn() ); }
		if (HX_FIELD_EQ(inName,"findNextContainerFocus") ) { return ::hx::Val( findNextContainerFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"findPreviousChildFocus") ) { return ::hx::Val( findPreviousChildFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleRootAddedToStage") ) { return ::hx::Val( handleRootAddedToStage_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"isValidFocusWithKeyboard") ) { return ::hx::Val( isValidFocusWithKeyboard_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"findFocusForDisplayObject") ) { return ::hx::Val( findFocusForDisplayObject_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"findPreviousContainerFocus") ) { return ::hx::Val( findPreviousContainerFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleRootRemovedFromStage") ) { return ::hx::Val( handleRootRemovedFromStage_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleKeyDownFocusWrapping") ) { return ::hx::Val( handleKeyDownFocusWrapping_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"findNextRelativeFocusInternal") ) { return ::hx::Val( findNextRelativeFocusInternal_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_addedHandler") ) { return ::hx::Val( defaultFocusManager_root_addedHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_removedHandler") ) { return ::hx::Val( defaultFocusManager_root_removedHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_keyDownHandler") ) { return ::hx::Val( defaultFocusManager_root_keyDownHandler_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_activateHandler") ) { return ::hx::Val( defaultFocusManager_root_activateHandler_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_deactivateHandler") ) { return ::hx::Val( defaultFocusManager_root_deactivateHandler_dyn() ); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_addedToStageHandler") ) { return ::hx::Val( defaultFocusManager_root_addedToStageHandler_dyn() ); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_keyFocusChangeHandler") ) { return ::hx::Val( defaultFocusManager_root_keyFocusChangeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_focusInCaptureHandler") ) { return ::hx::Val( defaultFocusManager_root_focusInCaptureHandler_dyn() ); }
		break;
	case 48:
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_removedFromStageHandler") ) { return ::hx::Val( defaultFocusManager_root_removedFromStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_mouseFocusChangeHandler") ) { return ::hx::Val( defaultFocusManager_root_mouseFocusChangeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultFocusManager_root_mouseDownCaptureHandler") ) { return ::hx::Val( defaultFocusManager_root_mouseDownCaptureHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultFocusManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"WRAP_OBJECT_HIGH_TAB_INDEX") ) { outValue = ( WRAP_OBJECT_HIGH_TAB_INDEX ); return true; }
	}
	return false;
}

::hx::Val DefaultFocusManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_root(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focus(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_focusPane") ) { _focusPane=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_wrapObject") ) { _wrapObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_focusToRestore") ) { _focusToRestore=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_showFocusIndicator") ) { _showFocusIndicator=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultFocusManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"WRAP_OBJECT_HIGH_TAB_INDEX") ) { WRAP_OBJECT_HIGH_TAB_INDEX=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DefaultFocusManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("_root",01,0a,c0,fe));
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("_focusPane",21,b4,7f,7d));
	outFields->push(HX_("focusPane",60,38,dd,21));
	outFields->push(HX_("_showFocusIndicator",d3,7a,23,58));
	outFields->push(HX_("showFocusIndicator",b4,f6,48,78));
	outFields->push(HX_("_focusToRestore",ba,ac,1f,09));
	outFields->push(HX_("focus",d8,5f,89,04));
	outFields->push(HX_("_wrapObject",48,6d,fd,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultFocusManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DefaultFocusManager_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(DefaultFocusManager_obj,_root),HX_("_root",01,0a,c0,fe)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(DefaultFocusManager_obj,_focusPane),HX_("_focusPane",21,b4,7f,7d)},
	{::hx::fsBool,(int)offsetof(DefaultFocusManager_obj,_showFocusIndicator),HX_("_showFocusIndicator",d3,7a,23,58)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DefaultFocusManager_obj,_focusToRestore),HX_("_focusToRestore",ba,ac,1f,09)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(DefaultFocusManager_obj,_wrapObject),HX_("_wrapObject",48,6d,fd,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DefaultFocusManager_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX,HX_("WRAP_OBJECT_HIGH_TAB_INDEX",16,3f,98,75)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DefaultFocusManager_obj_sMemberFields[] = {
	HX_("_enabled",02,5e,e9,b7),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_root",01,0a,c0,fe),
	HX_("get_root",ab,a9,69,cb),
	HX_("set_root",1f,03,c7,79),
	HX_("_focusPane",21,b4,7f,7d),
	HX_("get_focusPane",37,0c,41,e3),
	HX_("_showFocusIndicator",d3,7a,23,58),
	HX_("get_showFocusIndicator",fd,6f,dd,d1),
	HX_("_focusToRestore",ba,ac,1f,09),
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("_wrapObject",48,6d,fd,4b),
	HX_("dispose",9f,80,4c,bb),
	HX_("findNextFocus",6c,3a,80,8c),
	HX_("findNextFocusInternal",c9,a9,4a,be),
	HX_("findNextRelativeFocusInternal",5d,e1,0d,dc),
	HX_("isValidFocusWithKeyboard",b3,33,63,d5),
	HX_("isValidFocus",c6,f1,e7,24),
	HX_("setFocusManager",37,58,49,89),
	HX_("clearFocusManager",a2,e2,eb,79),
	HX_("findPreviousContainerFocus",87,88,d1,cf),
	HX_("findNextContainerFocus",c3,e1,38,14),
	HX_("findPreviousChildFocus",4c,12,4e,82),
	HX_("findNextChildFocus",88,1d,c9,78),
	HX_("setStageFocus",7c,f2,51,f9),
	HX_("handleRootAddedToStage",6d,37,c4,35),
	HX_("handleRootRemovedFromStage",3e,83,95,f3),
	HX_("defaultFocusManager_root_addedToStageHandler",93,a0,93,70),
	HX_("defaultFocusManager_root_removedFromStageHandler",e2,73,d2,6e),
	HX_("restoreFocus",aa,2d,07,61),
	HX_("shouldBeManaged",29,0c,89,9d),
	HX_("defaultFocusManager_root_addedHandler",7e,ac,b1,20),
	HX_("defaultFocusManager_root_removedHandler",9e,0a,8d,5a),
	HX_("defaultFocusManager_root_mouseFocusChangeHandler",b3,53,d5,50),
	HX_("handleKeyDownFocusWrapping",9b,f6,0f,23),
	HX_("handleDPadArrowKeys",46,e2,19,6a),
	HX_("defaultFocusManager_root_keyDownHandler",bd,72,55,46),
	HX_("defaultFocusManager_root_keyFocusChangeHandler",ad,5a,c6,82),
	HX_("findFocusForDisplayObject",d7,ac,0b,0c),
	HX_("defaultFocusManager_root_mouseDownCaptureHandler",57,8e,e4,45),
	HX_("defaultFocusManager_root_focusInCaptureHandler",8d,e2,93,d6),
	HX_("defaultFocusManager_root_activateHandler",43,8b,b7,f7),
	HX_("defaultFocusManager_root_deactivateHandler",e2,5f,d5,e5),
	::String(null()) };

static void DefaultFocusManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX,"WRAP_OBJECT_HIGH_TAB_INDEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultFocusManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultFocusManager_obj::WRAP_OBJECT_HIGH_TAB_INDEX,"WRAP_OBJECT_HIGH_TAB_INDEX");
};

#endif

::hx::Class DefaultFocusManager_obj::__mClass;

static ::String DefaultFocusManager_obj_sStaticFields[] = {
	HX_("WRAP_OBJECT_HIGH_TAB_INDEX",16,3f,98,75),
	::String(null())
};

void DefaultFocusManager_obj::__register()
{
	DefaultFocusManager_obj _hx_dummy;
	DefaultFocusManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.DefaultFocusManager",65,62,df,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultFocusManager_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultFocusManager_obj::__SetStatic;
	__mClass->mMarkFunc = DefaultFocusManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultFocusManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultFocusManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultFocusManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultFocusManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultFocusManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultFocusManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DefaultFocusManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3701e1b2434e52b4_48_boot)
HXDLIN(  48)		WRAP_OBJECT_HIGH_TAB_INDEX = (int)2147483647;
            	}
}

} // end namespace feathers
} // end namespace core
