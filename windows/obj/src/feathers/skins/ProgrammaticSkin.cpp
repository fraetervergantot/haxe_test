#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
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
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2bfee63f386e96c6_25_new,"feathers.skins.ProgrammaticSkin","new",0x4c10307b,"feathers.skins.ProgrammaticSkin.new","feathers/skins/ProgrammaticSkin.hx",25,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_46_get_uiContext,"feathers.skins.ProgrammaticSkin","get_uiContext",0x549c0dad,"feathers.skins.ProgrammaticSkin.get_uiContext","feathers/skins/ProgrammaticSkin.hx",46,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_49_set_uiContext,"feathers.skins.ProgrammaticSkin","set_uiContext",0x99a1efb9,"feathers.skins.ProgrammaticSkin.set_uiContext","feathers/skins/ProgrammaticSkin.hx",49,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_90_get_stateContext,"feathers.skins.ProgrammaticSkin","get_stateContext",0x71fff36c,"feathers.skins.ProgrammaticSkin.get_stateContext","feathers/skins/ProgrammaticSkin.hx",90,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_93_set_stateContext,"feathers.skins.ProgrammaticSkin","set_stateContext",0xc841e0e0,"feathers.skins.ProgrammaticSkin.set_stateContext","feathers/skins/ProgrammaticSkin.hx",93,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_116_onAddUIContext,"feathers.skins.ProgrammaticSkin","onAddUIContext",0x95d3f73e,"feathers.skins.ProgrammaticSkin.onAddUIContext","feathers/skins/ProgrammaticSkin.hx",116,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_126_onRemoveUIContext,"feathers.skins.ProgrammaticSkin","onRemoveUIContext",0x8dc2dc33,"feathers.skins.ProgrammaticSkin.onRemoveUIContext","feathers/skins/ProgrammaticSkin.hx",126,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_134_update,"feathers.skins.ProgrammaticSkin","update",0xbf1de8ce,"feathers.skins.ProgrammaticSkin.update","feathers/skins/ProgrammaticSkin.hx",134,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_147_needsStateUpdate,"feathers.skins.ProgrammaticSkin","needsStateUpdate",0x7099b1a2,"feathers.skins.ProgrammaticSkin.needsStateUpdate","feathers/skins/ProgrammaticSkin.hx",147,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_150_checkForStateChange,"feathers.skins.ProgrammaticSkin","checkForStateChange",0xfd216adb,"feathers.skins.ProgrammaticSkin.checkForStateChange","feathers/skins/ProgrammaticSkin.hx",150,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_158_uiContext_stateChangeHandler,"feathers.skins.ProgrammaticSkin","uiContext_stateChangeHandler",0xc83958f2,"feathers.skins.ProgrammaticSkin.uiContext_stateChangeHandler","feathers/skins/ProgrammaticSkin.hx",158,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_162_uiContextToggle_changeHandler,"feathers.skins.ProgrammaticSkin","uiContextToggle_changeHandler",0xe4d6ea85,"feathers.skins.ProgrammaticSkin.uiContextToggle_changeHandler","feathers/skins/ProgrammaticSkin.hx",162,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_166_stateContext_stateChangeHandler,"feathers.skins.ProgrammaticSkin","stateContext_stateChangeHandler",0x43ae4505,"feathers.skins.ProgrammaticSkin.stateContext_stateChangeHandler","feathers/skins/ProgrammaticSkin.hx",166,0x49c5c1d3)
HX_LOCAL_STACK_FRAME(_hx_pos_2bfee63f386e96c6_170_stateContextToggle_changeHandler,"feathers.skins.ProgrammaticSkin","stateContextToggle_changeHandler",0x6fb08f12,"feathers.skins.ProgrammaticSkin.stateContextToggle_changeHandler","feathers/skins/ProgrammaticSkin.hx",170,0x49c5c1d3)
namespace feathers{
namespace skins{

void ProgrammaticSkin_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_25_new)
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->mouseChildren = false;
HXLINE(  29)		this->set_tabEnabled(false);
HXLINE(  30)		this->set_tabChildren(false);
            	}

Dynamic ProgrammaticSkin_obj::__CreateEmpty() { return new ProgrammaticSkin_obj; }

void *ProgrammaticSkin_obj::_hx_vtable = 0;

Dynamic ProgrammaticSkin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProgrammaticSkin_obj > _hx_result = new ProgrammaticSkin_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProgrammaticSkin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07456291) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07456291;
			}
		} else {
			return inClassId==(int)0x093ab78b || inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_skins_ProgrammaticSkin__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::skins::ProgrammaticSkin_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::willTrigger,
};

static ::feathers::skins::IProgrammaticSkin_obj _hx_feathers_skins_ProgrammaticSkin__hx_feathers_skins_IProgrammaticSkin= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::skins::ProgrammaticSkin_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::skins::ProgrammaticSkin_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMaxHeight,
	( ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_uiContext,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::skins::ProgrammaticSkin_obj::set_uiContext,
};

static ::feathers::core::IMeasureObject_obj _hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IMeasureObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::skins::ProgrammaticSkin_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::skins::ProgrammaticSkin_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::resetMaxHeight,
};

static ::feathers::core::IStateObserver_obj _hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IStateObserver= {
	( ::Dynamic (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_stateContext,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::skins::ProgrammaticSkin_obj::set_stateContext,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::skins::ProgrammaticSkin_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::skins::ProgrammaticSkin_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::skins::ProgrammaticSkin_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::skins::ProgrammaticSkin_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::skins::ProgrammaticSkin_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::skins::ProgrammaticSkin_obj::set_visible,
};

void *ProgrammaticSkin_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_skins_ProgrammaticSkin__hx_openfl_events_IEventDispatcher;
		case (int)0x32a0d8d6: return &_hx_feathers_skins_ProgrammaticSkin__hx_feathers_skins_IProgrammaticSkin;
		case (int)0xcfc32883: return &_hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IMeasureObject;
		case (int)0xb36ec70d: return &_hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IStateObserver;
		case (int)0x3a979a67: return &_hx_feathers_skins_ProgrammaticSkin__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic ProgrammaticSkin_obj::get_uiContext(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_46_get_uiContext)
HXDLIN(  46)		return this->_uiContext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,get_uiContext,return )

::Dynamic ProgrammaticSkin_obj::set_uiContext(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_49_set_uiContext)
HXLINE(  50)		if (::hx::IsInstanceEq( this->_uiContext,value )) {
HXLINE(  51)			return this->_uiContext;
            		}
HXLINE(  53)		if (::hx::IsNotNull( this->_uiContext )) {
HXLINE(  54)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_uiContext,HX_("stateChange",61,de,fb,31),this->uiContext_stateChangeHandler_dyn(),null());
HXLINE(  55)			if (::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::controls::IToggle >())) {
HXLINE(  56)				::openfl::events::IEventDispatcher_obj::removeEventListener(this->_uiContext,HX_("change",70,91,72,b7),this->uiContextToggle_changeHandler_dyn(),null());
            			}
HXLINE(  58)			this->onRemoveUIContext();
            		}
HXLINE(  60)		this->_uiContext = value;
HXLINE(  61)		if (::hx::IsNotNull( this->_uiContext )) {
HXLINE(  62)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_uiContext,HX_("stateChange",61,de,fb,31),this->uiContext_stateChangeHandler_dyn(),false,0,true);
HXLINE(  63)			if (::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::controls::IToggle >())) {
HXLINE(  64)				::openfl::events::IEventDispatcher_obj::addEventListener(this->_uiContext,HX_("change",70,91,72,b7),this->uiContextToggle_changeHandler_dyn(),null(),null(),null());
            			}
HXLINE(  66)			this->onAddUIContext();
            		}
HXLINE(  68)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE(  69)		return this->_uiContext;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,set_uiContext,return )

::Dynamic ProgrammaticSkin_obj::get_stateContext(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_90_get_stateContext)
HXDLIN(  90)		return this->_stateContext;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,get_stateContext,return )

::Dynamic ProgrammaticSkin_obj::set_stateContext(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_93_set_stateContext)
HXLINE(  94)		if (::hx::IsInstanceEq( this->_stateContext,value )) {
HXLINE(  95)			return this->_stateContext;
            		}
HXLINE(  97)		if (::hx::IsNotNull( this->_stateContext )) {
HXLINE(  98)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_stateContext,HX_("stateChange",61,de,fb,31),this->stateContext_stateChangeHandler_dyn(),null());
            		}
HXLINE( 100)		this->_stateContext = value;
HXLINE( 101)		if (::hx::IsNotNull( this->_stateContext )) {
HXLINE( 102)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_stateContext,HX_("stateChange",61,de,fb,31),this->stateContext_stateChangeHandler_dyn(),false,0,true);
            		}
HXLINE( 104)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 105)		return this->_stateContext;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,set_stateContext,return )

void ProgrammaticSkin_obj::onAddUIContext(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_116_onAddUIContext)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,onAddUIContext,(void))

void ProgrammaticSkin_obj::onRemoveUIContext(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_126_onRemoveUIContext)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,onRemoveUIContext,(void))

void ProgrammaticSkin_obj::update(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_134_update)
            	}


bool ProgrammaticSkin_obj::needsStateUpdate(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_147_needsStateUpdate)
HXDLIN( 147)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,needsStateUpdate,return )

void ProgrammaticSkin_obj::checkForStateChange(){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_150_checkForStateChange)
HXLINE( 151)		if (!(this->needsStateUpdate())) {
HXLINE( 152)			return;
            		}
HXLINE( 154)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ProgrammaticSkin_obj,checkForStateChange,(void))

void ProgrammaticSkin_obj::uiContext_stateChangeHandler( ::feathers::events::FeathersEvent event){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_158_uiContext_stateChangeHandler)
HXDLIN( 158)		this->checkForStateChange();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,uiContext_stateChangeHandler,(void))

void ProgrammaticSkin_obj::uiContextToggle_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_162_uiContextToggle_changeHandler)
HXDLIN( 162)		this->checkForStateChange();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,uiContextToggle_changeHandler,(void))

void ProgrammaticSkin_obj::stateContext_stateChangeHandler( ::feathers::events::FeathersEvent event){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_166_stateContext_stateChangeHandler)
HXDLIN( 166)		this->checkForStateChange();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,stateContext_stateChangeHandler,(void))

void ProgrammaticSkin_obj::stateContextToggle_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_2bfee63f386e96c6_170_stateContextToggle_changeHandler)
HXDLIN( 170)		this->checkForStateChange();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ProgrammaticSkin_obj,stateContextToggle_changeHandler,(void))


::hx::ObjectPtr< ProgrammaticSkin_obj > ProgrammaticSkin_obj::__new() {
	::hx::ObjectPtr< ProgrammaticSkin_obj > __this = new ProgrammaticSkin_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ProgrammaticSkin_obj > ProgrammaticSkin_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ProgrammaticSkin_obj *__this = (ProgrammaticSkin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProgrammaticSkin_obj), true, "feathers.skins.ProgrammaticSkin"));
	*(void **)__this = ProgrammaticSkin_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ProgrammaticSkin_obj::ProgrammaticSkin_obj()
{
}

void ProgrammaticSkin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgrammaticSkin);
	HX_MARK_MEMBER_NAME(_uiContext,"_uiContext");
	HX_MARK_MEMBER_NAME(_stateContext,"_stateContext");
	 ::feathers::core::MeasureSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProgrammaticSkin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_uiContext,"_uiContext");
	HX_VISIT_MEMBER_NAME(_stateContext,"_stateContext");
	 ::feathers::core::MeasureSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ProgrammaticSkin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uiContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_uiContext() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_uiContext") ) { return ::hx::Val( _uiContext ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stateContext() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_uiContext") ) { return ::hx::Val( get_uiContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_uiContext") ) { return ::hx::Val( set_uiContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"_stateContext") ) { return ::hx::Val( _stateContext ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddUIContext") ) { return ::hx::Val( onAddUIContext_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_stateContext") ) { return ::hx::Val( get_stateContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_stateContext") ) { return ::hx::Val( set_stateContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"needsStateUpdate") ) { return ::hx::Val( needsStateUpdate_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onRemoveUIContext") ) { return ::hx::Val( onRemoveUIContext_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkForStateChange") ) { return ::hx::Val( checkForStateChange_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"uiContext_stateChangeHandler") ) { return ::hx::Val( uiContext_stateChangeHandler_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"uiContextToggle_changeHandler") ) { return ::hx::Val( uiContextToggle_changeHandler_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"stateContext_stateChangeHandler") ) { return ::hx::Val( stateContext_stateChangeHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"stateContextToggle_changeHandler") ) { return ::hx::Val( stateContextToggle_changeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ProgrammaticSkin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"uiContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_uiContext(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_uiContext") ) { _uiContext=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stateContext(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stateContext") ) { _stateContext=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgrammaticSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_uiContext",bc,05,71,20));
	outFields->push(HX_("uiContext",fb,89,ce,c4));
	outFields->push(HX_("_stateContext",bd,2e,80,b9));
	outFields->push(HX_("stateContext",de,9b,11,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ProgrammaticSkin_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ProgrammaticSkin_obj,_uiContext),HX_("_uiContext",bc,05,71,20)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ProgrammaticSkin_obj,_stateContext),HX_("_stateContext",bd,2e,80,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ProgrammaticSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String ProgrammaticSkin_obj_sMemberFields[] = {
	HX_("_uiContext",bc,05,71,20),
	HX_("get_uiContext",d2,5d,32,86),
	HX_("set_uiContext",de,3f,38,cb),
	HX_("_stateContext",bd,2e,80,b9),
	HX_("get_stateContext",67,88,b0,db),
	HX_("set_stateContext",db,75,f2,31),
	HX_("onAddUIContext",79,c7,c3,c7),
	HX_("onRemoveUIContext",d8,a2,94,9e),
	HX_("update",09,86,05,87),
	HX_("needsStateUpdate",9d,46,4a,da),
	HX_("checkForStateChange",c0,e4,ed,3a),
	HX_("uiContext_stateChangeHandler",6d,fa,32,a6),
	HX_("uiContextToggle_changeHandler",aa,94,4a,41),
	HX_("stateContext_stateChangeHandler",6a,82,fc,63),
	HX_("stateContextToggle_changeHandler",0d,0a,d8,93),
	::String(null()) };

::hx::Class ProgrammaticSkin_obj::__mClass;

void ProgrammaticSkin_obj::__register()
{
	ProgrammaticSkin_obj _hx_dummy;
	ProgrammaticSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.ProgrammaticSkin",09,d7,81,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ProgrammaticSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ProgrammaticSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProgrammaticSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProgrammaticSkin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
