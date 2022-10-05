#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_utils_PointerTrigger
#include <feathers/utils/PointerTrigger.h>
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
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9b467162ec4266f_29_new,"feathers.utils.PointerTrigger","new",0x69dd5fe8,"feathers.utils.PointerTrigger.new","feathers/utils/PointerTrigger.hx",29,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_50_get_target,"feathers.utils.PointerTrigger","get_target",0xd1975492,"feathers.utils.PointerTrigger.get_target","feathers/utils/PointerTrigger.hx",50,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_53_set_target,"feathers.utils.PointerTrigger","set_target",0xd514f306,"feathers.utils.PointerTrigger.set_target","feathers/utils/PointerTrigger.hx",53,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_82_get_eventFactory,"feathers.utils.PointerTrigger","get_eventFactory",0x0f495bd1,"feathers.utils.PointerTrigger.get_eventFactory","feathers/utils/PointerTrigger.hx",82,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_85_set_eventFactory,"feathers.utils.PointerTrigger","set_eventFactory",0x658b4945,"feathers.utils.PointerTrigger.set_eventFactory","feathers/utils/PointerTrigger.hx",85,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_106_get_enabled,"feathers.utils.PointerTrigger","get_enabled",0x889bbc20,"feathers.utils.PointerTrigger.get_enabled","feathers/utils/PointerTrigger.hx",106,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_109_set_enabled,"feathers.utils.PointerTrigger","set_enabled",0x9308c32c,"feathers.utils.PointerTrigger.set_enabled","feathers/utils/PointerTrigger.hx",109,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_131_get_customHitTest,"feathers.utils.PointerTrigger","get_customHitTest",0xee308173,"feathers.utils.PointerTrigger.get_customHitTest","feathers/utils/PointerTrigger.hx",131,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_134_set_customHitTest,"feathers.utils.PointerTrigger","set_customHitTest",0x119e597f,"feathers.utils.PointerTrigger.set_customHitTest","feathers/utils/PointerTrigger.hx",134,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_139_pointerTrigger_target_clickHandler,"feathers.utils.PointerTrigger","pointerTrigger_target_clickHandler",0x41c6c344,"feathers.utils.PointerTrigger.pointerTrigger_target_clickHandler","feathers/utils/PointerTrigger.hx",139,0xeab9e386)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b467162ec4266f_153_pointerTrigger_target_touchTapHandler,"feathers.utils.PointerTrigger","pointerTrigger_target_touchTapHandler",0x47f8eaa4,"feathers.utils.PointerTrigger.pointerTrigger_target_touchTapHandler","feathers/utils/PointerTrigger.hx",153,0xeab9e386)
namespace feathers{
namespace utils{

void PointerTrigger_obj::__construct( ::openfl::display::InteractiveObject target, ::Dynamic eventFactory){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_29_new)
HXLINE(  93)		this->_enabled = true;
HXLINE(  71)		this->_eventFactory = null();
HXLINE(  40)		this->_target = null();
HXLINE(  36)		this->set_target(target);
HXLINE(  37)		this->set_eventFactory(eventFactory);
            	}

Dynamic PointerTrigger_obj::__CreateEmpty() { return new PointerTrigger_obj; }

void *PointerTrigger_obj::_hx_vtable = 0;

Dynamic PointerTrigger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PointerTrigger_obj > _hx_result = new PointerTrigger_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PointerTrigger_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e1549f0;
}

 ::openfl::display::InteractiveObject PointerTrigger_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_50_get_target)
HXDLIN(  50)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerTrigger_obj,get_target,return )

 ::openfl::display::InteractiveObject PointerTrigger_obj::set_target( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_53_set_target)
HXLINE(  54)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE(  55)			return this->_target;
            		}
HXLINE(  57)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  58)			this->_target->removeEventListener(HX_("click",48,7c,5e,48),this->pointerTrigger_target_clickHandler_dyn(),null());
HXLINE(  59)			this->_target->removeEventListener(HX_("touchTap",e4,1b,15,00),this->pointerTrigger_target_touchTapHandler_dyn(),null());
            		}
HXLINE(  61)		this->_target = value;
HXLINE(  62)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  63)			this->_target->addEventListener(HX_("click",48,7c,5e,48),this->pointerTrigger_target_clickHandler_dyn(),null(),null(),null());
HXLINE(  65)			this->_target->addEventListener(HX_("touchTap",e4,1b,15,00),this->pointerTrigger_target_touchTapHandler_dyn(),null(),null(),null());
            		}
HXLINE(  68)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,set_target,return )

 ::Dynamic PointerTrigger_obj::get_eventFactory(){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_82_get_eventFactory)
HXDLIN(  82)		return this->_eventFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerTrigger_obj,get_eventFactory,return )

 ::Dynamic PointerTrigger_obj::set_eventFactory( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_85_set_eventFactory)
HXLINE(  86)		if (::hx::IsEq( this->_eventFactory,value )) {
HXLINE(  87)			return this->_eventFactory;
            		}
HXLINE(  89)		this->_eventFactory = value;
HXLINE(  90)		return this->_eventFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,set_eventFactory,return )

bool PointerTrigger_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_106_get_enabled)
HXDLIN( 106)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerTrigger_obj,get_enabled,return )

bool PointerTrigger_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_109_set_enabled)
HXLINE( 110)		this->_enabled = value;
HXLINE( 111)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,set_enabled,return )

 ::Dynamic PointerTrigger_obj::get_customHitTest(){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_131_get_customHitTest)
HXDLIN( 131)		return this->_customHitTest;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PointerTrigger_obj,get_customHitTest,return )

 ::Dynamic PointerTrigger_obj::set_customHitTest( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_134_set_customHitTest)
HXLINE( 135)		this->_customHitTest = value;
HXLINE( 136)		return this->_customHitTest;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,set_customHitTest,return )

void PointerTrigger_obj::pointerTrigger_target_clickHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_139_pointerTrigger_target_clickHandler)
HXLINE( 140)		if (!(this->_enabled)) {
HXLINE( 141)			return;
            		}
HXLINE( 143)		bool _hx_tmp;
HXDLIN( 143)		if (::hx::IsNotNull( this->_customHitTest )) {
HXLINE( 143)			_hx_tmp = !(( (bool)(this->_customHitTest(event->stageX,event->stageY)) ));
            		}
            		else {
HXLINE( 143)			_hx_tmp = false;
            		}
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 144)			return;
            		}
HXLINE( 146)		if (::hx::IsNotNull( this->_eventFactory )) {
HXLINE( 147)			 ::openfl::display::InteractiveObject _hx_tmp = this->_target;
HXDLIN( 147)			_hx_tmp->dispatchEvent(( ( ::openfl::events::Event)(this->_eventFactory()) ));
HXLINE( 148)			return;
            		}
HXLINE( 150)		::feathers::events::TriggerEvent_obj::dispatchFromMouseEvent(this->_target,event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,pointerTrigger_target_clickHandler,(void))

void PointerTrigger_obj::pointerTrigger_target_touchTapHandler( ::openfl::events::TouchEvent event){
            	HX_STACKFRAME(&_hx_pos_e9b467162ec4266f_153_pointerTrigger_target_touchTapHandler)
HXLINE( 154)		if (!(this->_enabled)) {
HXLINE( 155)			return;
            		}
HXLINE( 157)		if (event->isPrimaryTouchPoint) {
HXLINE( 159)			return;
            		}
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (::hx::IsNotNull( this->_customHitTest )) {
HXLINE( 161)			_hx_tmp = !(( (bool)(this->_customHitTest(event->stageX,event->stageY)) ));
            		}
            		else {
HXLINE( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			return;
            		}
HXLINE( 164)		if (::hx::IsNotNull( this->_eventFactory )) {
HXLINE( 165)			 ::openfl::display::InteractiveObject _hx_tmp = this->_target;
HXDLIN( 165)			_hx_tmp->dispatchEvent(( ( ::openfl::events::Event)(this->_eventFactory()) ));
HXLINE( 166)			return;
            		}
HXLINE( 168)		::feathers::events::TriggerEvent_obj::dispatchFromTouchEvent(this->_target,event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PointerTrigger_obj,pointerTrigger_target_touchTapHandler,(void))


::hx::ObjectPtr< PointerTrigger_obj > PointerTrigger_obj::__new( ::openfl::display::InteractiveObject target, ::Dynamic eventFactory) {
	::hx::ObjectPtr< PointerTrigger_obj > __this = new PointerTrigger_obj();
	__this->__construct(target,eventFactory);
	return __this;
}

::hx::ObjectPtr< PointerTrigger_obj > PointerTrigger_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::InteractiveObject target, ::Dynamic eventFactory) {
	PointerTrigger_obj *__this = (PointerTrigger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PointerTrigger_obj), true, "feathers.utils.PointerTrigger"));
	*(void **)__this = PointerTrigger_obj::_hx_vtable;
	__this->__construct(target,eventFactory);
	return __this;
}

PointerTrigger_obj::PointerTrigger_obj()
{
}

void PointerTrigger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PointerTrigger);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_eventFactory,"_eventFactory");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_customHitTest,"_customHitTest");
	HX_MARK_END_CLASS();
}

void PointerTrigger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_eventFactory,"_eventFactory");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_customHitTest,"_customHitTest");
}

::hx::Val PointerTrigger_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"eventFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_eventFactory() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_eventFactory") ) { return ::hx::Val( _eventFactory ); }
		if (HX_FIELD_EQ(inName,"customHitTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customHitTest() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_customHitTest") ) { return ::hx::Val( _customHitTest ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_eventFactory") ) { return ::hx::Val( get_eventFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_eventFactory") ) { return ::hx::Val( set_eventFactory_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_customHitTest") ) { return ::hx::Val( get_customHitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customHitTest") ) { return ::hx::Val( set_customHitTest_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"pointerTrigger_target_clickHandler") ) { return ::hx::Val( pointerTrigger_target_clickHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"pointerTrigger_target_touchTapHandler") ) { return ::hx::Val( pointerTrigger_target_touchTapHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PointerTrigger_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"eventFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_eventFactory(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_eventFactory") ) { _eventFactory=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customHitTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customHitTest(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_customHitTest") ) { _customHitTest=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointerTrigger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PointerTrigger_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(PointerTrigger_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerTrigger_obj,_eventFactory),HX_("_eventFactory",af,a6,9b,1a)},
	{::hx::fsBool,(int)offsetof(PointerTrigger_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PointerTrigger_obj,_customHitTest),HX_("_customHitTest",d5,b8,df,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PointerTrigger_obj_sStaticStorageInfo = 0;
#endif

static ::String PointerTrigger_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_eventFactory",af,a6,9b,1a),
	HX_("get_eventFactory",59,00,cc,3c),
	HX_("set_eventFactory",cd,ed,0d,93),
	HX_("_enabled",02,5e,e9,b7),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_customHitTest",d5,b8,df,ca),
	HX_("get_customHitTest",eb,d3,fd,92),
	HX_("set_customHitTest",f7,ab,6b,b6),
	HX_("pointerTrigger_target_clickHandler",cc,29,b5,07),
	HX_("pointerTrigger_target_touchTapHandler",1c,49,73,30),
	::String(null()) };

::hx::Class PointerTrigger_obj::__mClass;

void PointerTrigger_obj::__register()
{
	PointerTrigger_obj _hx_dummy;
	PointerTrigger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.PointerTrigger",f6,8b,6d,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PointerTrigger_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PointerTrigger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PointerTrigger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PointerTrigger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
