#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
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
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_utils_KeyToState
#include <feathers/utils/KeyToState.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4c6bd9ca37733139_27_new,"feathers.utils.KeyToState","new",0x09e8b924,"feathers.utils.KeyToState.new","feathers/utils/KeyToState.hx",27,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_56_get_target,"feathers.utils.KeyToState","get_target",0x0a6bdad6,"feathers.utils.KeyToState.get_target","feathers/utils/KeyToState.hx",56,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_59_set_target,"feathers.utils.KeyToState","set_target",0x0de9794a,"feathers.utils.KeyToState.set_target","feathers/utils/KeyToState.hx",59,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_96_get_callback,"feathers.utils.KeyToState","get_callback",0x0db22c8a,"feathers.utils.KeyToState.get_callback","feathers/utils/KeyToState.hx",96,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_99_set_callback,"feathers.utils.KeyToState","set_callback",0x22ab4ffe,"feathers.utils.KeyToState.set_callback","feathers/utils/KeyToState.hx",99,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_121_get_currentState,"feathers.utils.KeyToState","get_currentState",0x79e4345d,"feathers.utils.KeyToState.get_currentState","feathers/utils/KeyToState.hx",121,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_134_get_upState,"feathers.utils.KeyToState","get_upState",0x6c0c4291,"feathers.utils.KeyToState.get_upState","feathers/utils/KeyToState.hx",134,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_137_set_upState,"feathers.utils.KeyToState","set_upState",0x7679499d,"feathers.utils.KeyToState.set_upState","feathers/utils/KeyToState.hx",137,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_152_get_downState,"feathers.utils.KeyToState","get_downState",0xe19623ea,"feathers.utils.KeyToState.get_downState","feathers/utils/KeyToState.hx",152,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_155_set_downState,"feathers.utils.KeyToState","set_downState",0x269c05f6,"feathers.utils.KeyToState.set_downState","feathers/utils/KeyToState.hx",155,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_173_get_enabled,"feathers.utils.KeyToState","get_enabled",0x09bcb15c,"feathers.utils.KeyToState.get_enabled","feathers/utils/KeyToState.hx",173,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_176_set_enabled,"feathers.utils.KeyToState","set_enabled",0x1429b868,"feathers.utils.KeyToState.set_enabled","feathers/utils/KeyToState.hx",176,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_189_changeState,"feathers.utils.KeyToState","changeState",0xaf626b45,"feathers.utils.KeyToState.changeState","feathers/utils/KeyToState.hx",189,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_203_resetKeyState,"feathers.utils.KeyToState","resetKeyState",0x7f250ea5,"feathers.utils.KeyToState.resetKeyState","feathers/utils/KeyToState.hx",203,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_213_keyToState_target_removedFromStageHandler,"feathers.utils.KeyToState","keyToState_target_removedFromStageHandler",0x5942ce54,"feathers.utils.KeyToState.keyToState_target_removedFromStageHandler","feathers/utils/KeyToState.hx",213,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_217_keyToState_target_focusOutHandler,"feathers.utils.KeyToState","keyToState_target_focusOutHandler",0x4e986232,"feathers.utils.KeyToState.keyToState_target_focusOutHandler","feathers/utils/KeyToState.hx",217,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_220_keyToState_target_keyDownHandler,"feathers.utils.KeyToState","keyToState_target_keyDownHandler",0x6be22e8b,"feathers.utils.KeyToState.keyToState_target_keyDownHandler","feathers/utils/KeyToState.hx",220,0xaf6daeca)
HX_LOCAL_STACK_FRAME(_hx_pos_4c6bd9ca37733139_235_keyToState_target_keyUpHandler,"feathers.utils.KeyToState","keyToState_target_keyUpHandler",0x22038af2,"feathers.utils.KeyToState.keyToState_target_keyUpHandler","feathers/utils/KeyToState.hx",235,0xaf6daeca)
namespace feathers{
namespace utils{

void KeyToState_obj::__construct( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_27_new)
HXLINE( 187)		this->_downKeyCode = null();
HXLINE( 160)		this->_enabled = true;
HXLINE( 142)		this->_downState = null();
HXLINE( 124)		this->_upState = null();
HXLINE(  80)		this->_callback = null();
HXLINE(  45)		this->_target = null();
HXLINE(  34)		this->set_target(target);
HXLINE(  35)		if (::hx::IsNotNull( upState )) {
HXLINE(  36)			this->_upState = upState;
            		}
HXLINE(  38)		if (::hx::IsNotNull( downState )) {
HXLINE(  39)			this->set_downState(downState);
            		}
HXLINE(  41)		this->_currentState = this->_upState;
HXLINE(  42)		this->set_callback(callback);
            	}

Dynamic KeyToState_obj::__CreateEmpty() { return new KeyToState_obj; }

void *KeyToState_obj::_hx_vtable = 0;

Dynamic KeyToState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyToState_obj > _hx_result = new KeyToState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool KeyToState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7956b4d8;
}

 ::openfl::display::InteractiveObject KeyToState_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_56_get_target)
HXDLIN(  56)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_target,return )

 ::openfl::display::InteractiveObject KeyToState_obj::set_target( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_59_set_target)
HXLINE(  60)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE(  61)			return this->_target;
            		}
HXLINE(  63)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  64)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->keyToState_target_removedFromStageHandler_dyn(),null());
HXLINE(  65)			this->_target->removeEventListener(HX_("focusOut",96,6f,5e,11),this->keyToState_target_focusOutHandler_dyn(),null());
HXLINE(  66)			this->_target->removeEventListener(HX_("keyDown",a1,69,47,9c),this->keyToState_target_keyDownHandler_dyn(),null());
HXLINE(  67)			this->_target->removeEventListener(HX_("keyUp",da,b9,fe,de),this->keyToState_target_keyUpHandler_dyn(),null());
            		}
HXLINE(  69)		this->_target = value;
HXLINE(  70)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  71)			this->_currentState = this->_upState;
HXLINE(  72)			this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->keyToState_target_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE(  73)			this->_target->addEventListener(HX_("focusOut",96,6f,5e,11),this->keyToState_target_focusOutHandler_dyn(),null(),null(),null());
HXLINE(  74)			this->_target->addEventListener(HX_("keyDown",a1,69,47,9c),this->keyToState_target_keyDownHandler_dyn(),null(),null(),null());
HXLINE(  75)			this->_target->addEventListener(HX_("keyUp",da,b9,fe,de),this->keyToState_target_keyUpHandler_dyn(),null(),null(),null());
            		}
HXLINE(  77)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,set_target,return )

 ::Dynamic KeyToState_obj::get_callback(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_96_get_callback)
HXDLIN(  96)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_callback,return )

 ::Dynamic KeyToState_obj::set_callback( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_99_set_callback)
HXLINE( 100)		if (::hx::IsEq( this->_callback,value )) {
HXLINE( 101)			return this->_callback;
            		}
HXLINE( 103)		this->_callback = value;
HXLINE( 104)		if (::hx::IsNotNull( this->_callback )) {
HXLINE( 105)			this->_callback(this->_currentState);
            		}
HXLINE( 107)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,set_callback,return )

 ::Dynamic KeyToState_obj::get_currentState(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_121_get_currentState)
HXDLIN( 121)		return this->_currentState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_currentState,return )

 ::Dynamic KeyToState_obj::get_upState(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_134_get_upState)
HXDLIN( 134)		return this->_upState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_upState,return )

 ::Dynamic KeyToState_obj::set_upState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_137_set_upState)
HXLINE( 138)		this->_upState = value;
HXLINE( 139)		return this->_upState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,set_upState,return )

 ::Dynamic KeyToState_obj::get_downState(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_152_get_downState)
HXDLIN( 152)		return this->_downState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_downState,return )

 ::Dynamic KeyToState_obj::set_downState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_155_set_downState)
HXLINE( 156)		this->_downState = value;
HXLINE( 157)		return this->_downState;
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,set_downState,return )

bool KeyToState_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_173_get_enabled)
HXDLIN( 173)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,get_enabled,return )

bool KeyToState_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_176_set_enabled)
HXLINE( 177)		if ((this->_enabled == value)) {
HXLINE( 178)			return this->_enabled;
            		}
HXLINE( 180)		this->_enabled = value;
HXLINE( 181)		if (!(this->_enabled)) {
HXLINE( 182)			this->resetKeyState();
            		}
HXLINE( 184)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,set_enabled,return )

void KeyToState_obj::changeState( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_189_changeState)
HXLINE( 190)		 ::Dynamic oldState = this->_currentState;
HXLINE( 191)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::feathers::core::IStateContext >())) {
HXLINE( 192)			oldState = ::feathers::core::IStateContext_obj::get_currentState( ::hx::interface_check(this->_target,0xa18fd6d8));
            		}
HXLINE( 194)		this->_currentState = value;
HXLINE( 195)		if (::hx::IsEq( oldState,value )) {
HXLINE( 196)			return;
            		}
HXLINE( 198)		if (::hx::IsNotNull( this->_callback )) {
HXLINE( 199)			this->_callback(value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,changeState,(void))

void KeyToState_obj::resetKeyState(){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_203_resetKeyState)
HXLINE( 204)		if (::hx::IsNull( this->_downKeyCode )) {
HXLINE( 206)			return;
            		}
HXLINE( 208)		this->_downKeyCode = null();
HXLINE( 209)		this->changeState(this->_upState);
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyToState_obj,resetKeyState,(void))

void KeyToState_obj::keyToState_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_213_keyToState_target_removedFromStageHandler)
HXDLIN( 213)		this->resetKeyState();
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,keyToState_target_removedFromStageHandler,(void))

void KeyToState_obj::keyToState_target_focusOutHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_217_keyToState_target_focusOutHandler)
HXDLIN( 217)		this->resetKeyState();
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,keyToState_target_focusOutHandler,(void))

void KeyToState_obj::keyToState_target_keyDownHandler( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_220_keyToState_target_keyDownHandler)
HXLINE( 221)		if (::Std_obj::isOfType(this->_target,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 222)			::Dynamic focusObject =  ::hx::interface_check(this->_target,0x701686fd);
HXLINE( 223)			::Dynamic focusManager = ::feathers::core::IFocusManagerAware_obj::get_focusManager(focusObject);
HXLINE( 224)			bool _hx_tmp;
HXDLIN( 224)			if (::hx::IsNotNull( focusManager )) {
HXLINE( 224)				_hx_tmp = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManager_obj::get_focus(focusManager),focusObject );
            			}
            			else {
HXLINE( 224)				_hx_tmp = false;
            			}
HXDLIN( 224)			if (_hx_tmp) {
HXLINE( 225)				return;
            			}
            		}
HXLINE( 228)		bool _hx_tmp;
HXDLIN( 228)		bool _hx_tmp1;
HXDLIN( 228)		if (this->_enabled) {
HXLINE( 228)			_hx_tmp1 = ::hx::IsNotNull( this->_downKeyCode );
            		}
            		else {
HXLINE( 228)			_hx_tmp1 = true;
            		}
HXDLIN( 228)		if (!(_hx_tmp1)) {
HXLINE( 228)			if ((event->keyCode != 32)) {
HXLINE( 228)				_hx_tmp = (event->keyCode != 13);
            			}
            			else {
HXLINE( 228)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 228)			_hx_tmp = true;
            		}
HXDLIN( 228)		if (_hx_tmp) {
HXLINE( 229)			return;
            		}
HXLINE( 231)		this->_downKeyCode = event->keyCode;
HXLINE( 232)		this->changeState(this->_downState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,keyToState_target_keyDownHandler,(void))

void KeyToState_obj::keyToState_target_keyUpHandler( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_4c6bd9ca37733139_235_keyToState_target_keyUpHandler)
HXLINE( 236)		if (::hx::IsNotEq( event->keyCode,this->_downKeyCode )) {
HXLINE( 237)			return;
            		}
HXLINE( 239)		this->resetKeyState();
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyToState_obj,keyToState_target_keyUpHandler,(void))


::hx::ObjectPtr< KeyToState_obj > KeyToState_obj::__new( ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState) {
	::hx::ObjectPtr< KeyToState_obj > __this = new KeyToState_obj();
	__this->__construct(target,callback,upState,downState);
	return __this;
}

::hx::ObjectPtr< KeyToState_obj > KeyToState_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic callback, ::Dynamic upState, ::Dynamic downState) {
	KeyToState_obj *__this = (KeyToState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyToState_obj), true, "feathers.utils.KeyToState"));
	*(void **)__this = KeyToState_obj::_hx_vtable;
	__this->__construct(target,callback,upState,downState);
	return __this;
}

KeyToState_obj::KeyToState_obj()
{
}

void KeyToState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyToState);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_currentState,"_currentState");
	HX_MARK_MEMBER_NAME(_upState,"_upState");
	HX_MARK_MEMBER_NAME(_downState,"_downState");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_downKeyCode,"_downKeyCode");
	HX_MARK_END_CLASS();
}

void KeyToState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_currentState,"_currentState");
	HX_VISIT_MEMBER_NAME(_upState,"_upState");
	HX_VISIT_MEMBER_NAME(_downState,"_downState");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_downKeyCode,"_downKeyCode");
}

::hx::Val KeyToState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upState() ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_callback() ); }
		if (HX_FIELD_EQ(inName,"_upState") ) { return ::hx::Val( _upState ); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_downState() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"_downState") ) { return ::hx::Val( _downState ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_upState") ) { return ::hx::Val( get_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return ::hx::Val( set_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeState") ) { return ::hx::Val( changeState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_callback") ) { return ::hx::Val( get_callback_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_callback") ) { return ::hx::Val( set_callback_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentState() ); }
		if (HX_FIELD_EQ(inName,"_downKeyCode") ) { return ::hx::Val( _downKeyCode ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { return ::hx::Val( _currentState ); }
		if (HX_FIELD_EQ(inName,"get_downState") ) { return ::hx::Val( get_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return ::hx::Val( set_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetKeyState") ) { return ::hx::Val( resetKeyState_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentState") ) { return ::hx::Val( get_currentState_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"keyToState_target_keyUpHandler") ) { return ::hx::Val( keyToState_target_keyUpHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"keyToState_target_keyDownHandler") ) { return ::hx::Val( keyToState_target_keyDownHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"keyToState_target_focusOutHandler") ) { return ::hx::Val( keyToState_target_focusOutHandler_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"keyToState_target_removedFromStageHandler") ) { return ::hx::Val( keyToState_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyToState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_upState(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_callback(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_upState") ) { _upState=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_downState(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_downState") ) { _downState=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_downKeyCode") ) { _downKeyCode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentState") ) { _currentState=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyToState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_currentState",f7,ed,85,ad));
	outFields->push(HX_("currentState",18,5b,17,cb));
	outFields->push(HX_("_upState",37,ef,38,1a));
	outFields->push(HX_("upState",b6,95,80,e0));
	outFields->push(HX_("_downState",10,c6,c3,f5));
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("_downKeyCode",2b,b0,09,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyToState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(KeyToState_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KeyToState_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KeyToState_obj,_currentState),HX_("_currentState",f7,ed,85,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KeyToState_obj,_upState),HX_("_upState",37,ef,38,1a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KeyToState_obj,_downState),HX_("_downState",10,c6,c3,f5)},
	{::hx::fsBool,(int)offsetof(KeyToState_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KeyToState_obj,_downKeyCode),HX_("_downKeyCode",2b,b0,09,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyToState_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyToState_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_callback",24,91,9c,c6),
	HX_("get_callback",ce,4d,20,34),
	HX_("set_callback",42,71,19,49),
	HX_("_currentState",f7,ed,85,ad),
	HX_("get_currentState",a1,47,b6,cf),
	HX_("_upState",37,ef,38,1a),
	HX_("get_upState",cd,f5,7a,66),
	HX_("set_upState",d9,fc,e7,70),
	HX_("_downState",10,c6,c3,f5),
	HX_("get_downState",26,1e,85,5b),
	HX_("set_downState",32,00,8b,a0),
	HX_("_enabled",02,5e,e9,b7),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_downKeyCode",2b,b0,09,28),
	HX_("changeState",81,1e,d1,a9),
	HX_("resetKeyState",e1,08,14,f9),
	HX_("keyToState_target_removedFromStageHandler",90,6a,0b,69),
	HX_("keyToState_target_focusOutHandler",6e,62,cc,99),
	HX_("keyToState_target_keyDownHandler",cf,09,0e,e7),
	HX_("keyToState_target_keyUpHandler",36,4d,07,83),
	::String(null()) };

::hx::Class KeyToState_obj::__mClass;

void KeyToState_obj::__register()
{
	KeyToState_obj _hx_dummy;
	KeyToState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.KeyToState",32,97,8c,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyToState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyToState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyToState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyToState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
