#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_BaseDelegateEffectContext
#include <feathers/motion/effects/BaseDelegateEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_EventToPositionEffectContext
#include <feathers/motion/effects/EventToPositionEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d4abe8735fb984e8_20_new,"feathers.motion.effects.EventToPositionEffectContext","new",0xd342de78,"feathers.motion.effects.EventToPositionEffectContext.new","feathers/motion/effects/EventToPositionEffectContext.hx",20,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_41_get_dispatcher,"feathers.motion.effects.EventToPositionEffectContext","get_dispatcher",0x37584ad8,"feathers.motion.effects.EventToPositionEffectContext.get_dispatcher","feathers/motion/effects/EventToPositionEffectContext.hx",41,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_44_set_dispatcher,"feathers.motion.effects.EventToPositionEffectContext","set_dispatcher",0x5778334c,"feathers.motion.effects.EventToPositionEffectContext.set_dispatcher","feathers/motion/effects/EventToPositionEffectContext.hx",44,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_64_get_eventType,"feathers.motion.effects.EventToPositionEffectContext","get_eventType",0x6fe06be3,"feathers.motion.effects.EventToPositionEffectContext.get_eventType","feathers/motion/effects/EventToPositionEffectContext.hx",64,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_67_set_eventType,"feathers.motion.effects.EventToPositionEffectContext","set_eventType",0xb4e64def,"feathers.motion.effects.EventToPositionEffectContext.set_eventType","feathers/motion/effects/EventToPositionEffectContext.hx",67,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_89_get_callback,"feathers.motion.effects.EventToPositionEffectContext","get_callback",0x24dabcb6,"feathers.motion.effects.EventToPositionEffectContext.get_callback","feathers/motion/effects/EventToPositionEffectContext.hx",89,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_92_set_callback,"feathers.motion.effects.EventToPositionEffectContext","set_callback",0x39d3e02a,"feathers.motion.effects.EventToPositionEffectContext.set_callback","feathers/motion/effects/EventToPositionEffectContext.hx",92,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_103_play,"feathers.motion.effects.EventToPositionEffectContext","play",0x089774dc,"feathers.motion.effects.EventToPositionEffectContext.play","feathers/motion/effects/EventToPositionEffectContext.hx",103,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_108_playReverse,"feathers.motion.effects.EventToPositionEffectContext","playReverse",0x33a67fa6,"feathers.motion.effects.EventToPositionEffectContext.playReverse","feathers/motion/effects/EventToPositionEffectContext.hx",108,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_113_pause,"feathers.motion.effects.EventToPositionEffectContext","pause",0x74b89b0e,"feathers.motion.effects.EventToPositionEffectContext.pause","feathers/motion/effects/EventToPositionEffectContext.hx",113,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_117_clearEvent,"feathers.motion.effects.EventToPositionEffectContext","clearEvent",0x62b86c35,"feathers.motion.effects.EventToPositionEffectContext.clearEvent","feathers/motion/effects/EventToPositionEffectContext.hx",117,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_124_updateEvent,"feathers.motion.effects.EventToPositionEffectContext","updateEvent",0x2fac1769,"feathers.motion.effects.EventToPositionEffectContext.updateEvent","feathers/motion/effects/EventToPositionEffectContext.hx",124,0x0420c0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_d4abe8735fb984e8_131_eventToPositionEffectContext_dispatcher_eventHandler,"feathers.motion.effects.EventToPositionEffectContext","eventToPositionEffectContext_dispatcher_eventHandler",0x394e6091,"feathers.motion.effects.EventToPositionEffectContext.eventToPositionEffectContext_dispatcher_eventHandler","feathers/motion/effects/EventToPositionEffectContext.hx",131,0x0420c0f7)
namespace feathers{
namespace motion{
namespace effects{

void EventToPositionEffectContext_obj::__construct(::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_20_new)
HXLINE( 100)		this->_paused = true;
HXLINE(  27)		super::__construct(context);
HXLINE(  28)		this->set_callback(callback);
HXLINE(  29)		this->set_eventType(eventType);
HXLINE(  30)		this->set_dispatcher(dispatcher);
            	}

Dynamic EventToPositionEffectContext_obj::__CreateEmpty() { return new EventToPositionEffectContext_obj; }

void *EventToPositionEffectContext_obj::_hx_vtable = 0;

Dynamic EventToPositionEffectContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventToPositionEffectContext_obj > _hx_result = new EventToPositionEffectContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool EventToPositionEffectContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d67fefc) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x0d67fefc;
		}
	} else {
		return inClassId==(int)0x30414938;
	}
}

::Dynamic EventToPositionEffectContext_obj::get_dispatcher(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_41_get_dispatcher)
HXDLIN(  41)		return this->_dispatcher;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventToPositionEffectContext_obj,get_dispatcher,return )

::Dynamic EventToPositionEffectContext_obj::set_dispatcher(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_44_set_dispatcher)
HXLINE(  45)		if (::hx::IsInstanceEq( this->_dispatcher,value )) {
HXLINE(  46)			return this->_dispatcher;
            		}
HXLINE(  48)		this->clearEvent();
HXLINE(  49)		this->_dispatcher = value;
HXLINE(  50)		this->updateEvent();
HXLINE(  51)		return this->get_dispatcher();
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventToPositionEffectContext_obj,set_dispatcher,return )

::String EventToPositionEffectContext_obj::get_eventType(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_64_get_eventType)
HXDLIN(  64)		return this->_eventType;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventToPositionEffectContext_obj,get_eventType,return )

::String EventToPositionEffectContext_obj::set_eventType(::String value){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_67_set_eventType)
HXLINE(  68)		if ((this->_eventType == value)) {
HXLINE(  69)			return this->_eventType;
            		}
HXLINE(  71)		this->clearEvent();
HXLINE(  72)		this->_eventType = value;
HXLINE(  73)		this->updateEvent();
HXLINE(  74)		return this->_eventType;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventToPositionEffectContext_obj,set_eventType,return )

 ::Dynamic EventToPositionEffectContext_obj::get_callback(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_89_get_callback)
HXDLIN(  89)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventToPositionEffectContext_obj,get_callback,return )

 ::Dynamic EventToPositionEffectContext_obj::set_callback( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_92_set_callback)
HXLINE(  93)		if (::hx::IsEq( this->_callback,value )) {
HXLINE(  94)			return this->_callback;
            		}
HXLINE(  96)		this->_callback = value;
HXLINE(  97)		return this->_callback;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventToPositionEffectContext_obj,set_callback,return )

void EventToPositionEffectContext_obj::play(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_103_play)
HXDLIN( 103)		this->_paused = false;
            	}


void EventToPositionEffectContext_obj::playReverse(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_108_playReverse)
HXDLIN( 108)		this->_paused = false;
            	}


void EventToPositionEffectContext_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_113_pause)
HXDLIN( 113)		this->_paused = true;
            	}


void EventToPositionEffectContext_obj::clearEvent(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_117_clearEvent)
HXLINE( 118)		bool _hx_tmp;
HXDLIN( 118)		if (::hx::IsNotNull( this->_dispatcher )) {
HXLINE( 118)			_hx_tmp = ::hx::IsNull( this->_eventType );
            		}
            		else {
HXLINE( 118)			_hx_tmp = true;
            		}
HXDLIN( 118)		if (_hx_tmp) {
HXLINE( 119)			return;
            		}
HXLINE( 121)		::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dispatcher,this->_eventType,this->eventToPositionEffectContext_dispatcher_eventHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventToPositionEffectContext_obj,clearEvent,(void))

void EventToPositionEffectContext_obj::updateEvent(){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_124_updateEvent)
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if (::hx::IsNotNull( this->_dispatcher )) {
HXLINE( 125)			_hx_tmp = ::hx::IsNull( this->_eventType );
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 126)			return;
            		}
HXLINE( 128)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_dispatcher,this->_eventType,this->eventToPositionEffectContext_dispatcher_eventHandler_dyn(),false,0,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventToPositionEffectContext_obj,updateEvent,(void))

void EventToPositionEffectContext_obj::eventToPositionEffectContext_dispatcher_eventHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d4abe8735fb984e8_131_eventToPositionEffectContext_dispatcher_eventHandler)
HXLINE( 132)		if (this->_paused) {
HXLINE( 133)			return;
            		}
HXLINE( 135)		this->set_position(( (Float)(this->_callback(event)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventToPositionEffectContext_obj,eventToPositionEffectContext_dispatcher_eventHandler,(void))


::hx::ObjectPtr< EventToPositionEffectContext_obj > EventToPositionEffectContext_obj::__new(::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback) {
	::hx::ObjectPtr< EventToPositionEffectContext_obj > __this = new EventToPositionEffectContext_obj();
	__this->__construct(context,dispatcher,eventType,callback);
	return __this;
}

::hx::ObjectPtr< EventToPositionEffectContext_obj > EventToPositionEffectContext_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic context,::Dynamic dispatcher,::String eventType, ::Dynamic callback) {
	EventToPositionEffectContext_obj *__this = (EventToPositionEffectContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventToPositionEffectContext_obj), true, "feathers.motion.effects.EventToPositionEffectContext"));
	*(void **)__this = EventToPositionEffectContext_obj::_hx_vtable;
	__this->__construct(context,dispatcher,eventType,callback);
	return __this;
}

EventToPositionEffectContext_obj::EventToPositionEffectContext_obj()
{
}

void EventToPositionEffectContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventToPositionEffectContext);
	HX_MARK_MEMBER_NAME(_dispatcher,"_dispatcher");
	HX_MARK_MEMBER_NAME(_eventType,"_eventType");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	 ::feathers::motion::effects::BaseDelegateEffectContext_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EventToPositionEffectContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dispatcher,"_dispatcher");
	HX_VISIT_MEMBER_NAME(_eventType,"_eventType");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	 ::feathers::motion::effects::BaseDelegateEffectContext_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val EventToPositionEffectContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_paused") ) { return ::hx::Val( _paused ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_callback() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_eventType() ); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dispatcher() ); }
		if (HX_FIELD_EQ(inName,"_eventType") ) { return ::hx::Val( _eventType ); }
		if (HX_FIELD_EQ(inName,"clearEvent") ) { return ::hx::Val( clearEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dispatcher") ) { return ::hx::Val( _dispatcher ); }
		if (HX_FIELD_EQ(inName,"playReverse") ) { return ::hx::Val( playReverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateEvent") ) { return ::hx::Val( updateEvent_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_callback") ) { return ::hx::Val( get_callback_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_callback") ) { return ::hx::Val( set_callback_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_eventType") ) { return ::hx::Val( get_eventType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_eventType") ) { return ::hx::Val( set_eventType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dispatcher") ) { return ::hx::Val( get_dispatcher_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dispatcher") ) { return ::hx::Val( set_dispatcher_dyn() ); }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"eventToPositionEffectContext_dispatcher_eventHandler") ) { return ::hx::Val( eventToPositionEffectContext_dispatcher_eventHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventToPositionEffectContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_callback(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_eventType(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dispatcher(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_eventType") ) { _eventType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dispatcher") ) { _dispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventToPositionEffectContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dispatcher",c6,96,8a,2c));
	outFields->push(HX_("dispatcher",a7,c9,00,5a));
	outFields->push(HX_("_eventType",b5,77,b8,57));
	outFields->push(HX_("eventType",f4,fb,15,fc));
	outFields->push(HX_("_paused",4d,52,fb,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventToPositionEffectContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(EventToPositionEffectContext_obj,_dispatcher),HX_("_dispatcher",c6,96,8a,2c)},
	{::hx::fsString,(int)offsetof(EventToPositionEffectContext_obj,_eventType),HX_("_eventType",b5,77,b8,57)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EventToPositionEffectContext_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{::hx::fsBool,(int)offsetof(EventToPositionEffectContext_obj,_paused),HX_("_paused",4d,52,fb,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventToPositionEffectContext_obj_sStaticStorageInfo = 0;
#endif

static ::String EventToPositionEffectContext_obj_sMemberFields[] = {
	HX_("_dispatcher",c6,96,8a,2c),
	HX_("get_dispatcher",f0,51,f6,cf),
	HX_("set_dispatcher",64,3a,16,f0),
	HX_("_eventType",b5,77,b8,57),
	HX_("get_eventType",cb,cf,79,bd),
	HX_("set_eventType",d7,b1,7f,02),
	HX_("_callback",24,91,9c,c6),
	HX_("get_callback",ce,4d,20,34),
	HX_("set_callback",42,71,19,49),
	HX_("_paused",4d,52,fb,5d),
	HX_("play",f4,2d,5a,4a),
	HX_("playReverse",8e,99,57,5f),
	HX_("pause",f6,d6,57,bd),
	HX_("clearEvent",4d,07,cf,4a),
	HX_("updateEvent",51,31,5d,5b),
	HX_("eventToPositionEffectContext_dispatcher_eventHandler",a9,29,0a,53),
	::String(null()) };

::hx::Class EventToPositionEffectContext_obj::__mClass;

void EventToPositionEffectContext_obj::__register()
{
	EventToPositionEffectContext_obj _hx_dummy;
	EventToPositionEffectContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.EventToPositionEffectContext",86,82,6c,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventToPositionEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventToPositionEffectContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventToPositionEffectContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventToPositionEffectContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
