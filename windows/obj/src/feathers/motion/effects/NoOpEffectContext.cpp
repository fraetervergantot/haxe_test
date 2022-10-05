#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_NoOpEffectContext
#include <feathers/motion/effects/NoOpEffectContext.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2b845844fc4a3a33_29_new,"feathers.motion.effects.NoOpEffectContext","new",0x08bce068,"feathers.motion.effects.NoOpEffectContext.new","feathers/motion/effects/NoOpEffectContext.hx",29,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_50_get_target,"feathers.motion.effects.NoOpEffectContext","get_target",0x2ee0e412,"feathers.motion.effects.NoOpEffectContext.get_target","feathers/motion/effects/NoOpEffectContext.hx",50,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_63_get_duration,"feathers.motion.effects.NoOpEffectContext","get_duration",0x95f07255,"feathers.motion.effects.NoOpEffectContext.get_duration","feathers/motion/effects/NoOpEffectContext.hx",63,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_76_get_position,"feathers.motion.effects.NoOpEffectContext","get_position",0x4c5d03aa,"feathers.motion.effects.NoOpEffectContext.get_position","feathers/motion/effects/NoOpEffectContext.hx",76,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_79_set_position,"feathers.motion.effects.NoOpEffectContext","set_position",0x6156271e,"feathers.motion.effects.NoOpEffectContext.set_position","feathers/motion/effects/NoOpEffectContext.hx",79,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_92_play,"feathers.motion.effects.NoOpEffectContext","play",0x9ddf24ec,"feathers.motion.effects.NoOpEffectContext.play","feathers/motion/effects/NoOpEffectContext.hx",92,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_100_pause,"feathers.motion.effects.NoOpEffectContext","pause",0x7e2af8fe,"feathers.motion.effects.NoOpEffectContext.pause","feathers/motion/effects/NoOpEffectContext.hx",100,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_108_playReverse,"feathers.motion.effects.NoOpEffectContext","playReverse",0x26dbf196,"feathers.motion.effects.NoOpEffectContext.playReverse","feathers/motion/effects/NoOpEffectContext.hx",108,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_117_stop,"feathers.motion.effects.NoOpEffectContext","stop",0x9fe0e6fa,"feathers.motion.effects.NoOpEffectContext.stop","feathers/motion/effects/NoOpEffectContext.hx",117,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_126_toEnd,"feathers.motion.effects.NoOpEffectContext","toEnd",0xd4e1d728,"feathers.motion.effects.NoOpEffectContext.toEnd","feathers/motion/effects/NoOpEffectContext.hx",126,0xc5b5eca9)
HX_LOCAL_STACK_FRAME(_hx_pos_2b845844fc4a3a33_135_interrupt,"feathers.motion.effects.NoOpEffectContext","interrupt",0xa318bfab,"feathers.motion.effects.NoOpEffectContext.interrupt","feathers/motion/effects/NoOpEffectContext.hx",135,0xc5b5eca9)
namespace feathers{
namespace motion{
namespace effects{

void NoOpEffectContext_obj::__construct( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_29_new)
HXLINE(  66)		this->_position = ((Float)0.0);
HXLINE(  53)		this->_duration = ((Float)0.0);
HXLINE(  36)		super::__construct(null());
HXLINE(  37)		this->_target = target;
            	}

Dynamic NoOpEffectContext_obj::__CreateEmpty() { return new NoOpEffectContext_obj; }

void *NoOpEffectContext_obj::_hx_vtable = 0;

Dynamic NoOpEffectContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoOpEffectContext_obj > _hx_result = new NoOpEffectContext_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NoOpEffectContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x79c0166c;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_motion_effects_NoOpEffectContext__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::NoOpEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::NoOpEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::NoOpEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::NoOpEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::NoOpEffectContext_obj::willTrigger,
};

static ::feathers::motion::effects::IEffectContext_obj _hx_feathers_motion_effects_NoOpEffectContext__hx_feathers_motion_effects_IEffectContext= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::NoOpEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::NoOpEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::NoOpEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::NoOpEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::NoOpEffectContext_obj::willTrigger,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::get_target,
	( Float (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::get_duration,
	( Float (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::get_position,
	( Float (::hx::Object::*)(Float))&::feathers::motion::effects::NoOpEffectContext_obj::set_position,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::play,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::playReverse,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::stop,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::toEnd,
	( void (::hx::Object::*)())&::feathers::motion::effects::NoOpEffectContext_obj::interrupt,
};

void *NoOpEffectContext_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_motion_effects_NoOpEffectContext__hx_openfl_events_IEventDispatcher;
		case (int)0xa2226771: return &_hx_feathers_motion_effects_NoOpEffectContext__hx_feathers_motion_effects_IEffectContext;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic NoOpEffectContext_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_50_get_target)
HXDLIN(  50)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,get_target,return )

Float NoOpEffectContext_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_63_get_duration)
HXDLIN(  63)		return this->_duration;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,get_duration,return )

Float NoOpEffectContext_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_76_get_position)
HXDLIN(  76)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,get_position,return )

Float NoOpEffectContext_obj::set_position(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_2b845844fc4a3a33_79_set_position)
HXLINE(  80)		if ((value != ((Float)0.0))) {
HXLINE(  81)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("Position must always be 0.0",66,11,6f,9b)));
            		}
HXLINE(  83)		return this->_position;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NoOpEffectContext_obj,set_position,return )

void NoOpEffectContext_obj::play(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_92_play)
HXDLIN(  92)		this->toEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,play,(void))

void NoOpEffectContext_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_100_pause)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,pause,(void))

void NoOpEffectContext_obj::playReverse(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_108_playReverse)
HXDLIN( 108)		this->toEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,playReverse,(void))

void NoOpEffectContext_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_117_stop)
HXDLIN( 117)		this->toEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,stop,(void))

void NoOpEffectContext_obj::toEnd(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_126_toEnd)
HXDLIN( 126)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("complete",b9,00,c8,7f),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,toEnd,(void))

void NoOpEffectContext_obj::interrupt(){
            	HX_STACKFRAME(&_hx_pos_2b845844fc4a3a33_135_interrupt)
HXDLIN( 135)		this->toEnd();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NoOpEffectContext_obj,interrupt,(void))


::hx::ObjectPtr< NoOpEffectContext_obj > NoOpEffectContext_obj::__new( ::Dynamic target) {
	::hx::ObjectPtr< NoOpEffectContext_obj > __this = new NoOpEffectContext_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< NoOpEffectContext_obj > NoOpEffectContext_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target) {
	NoOpEffectContext_obj *__this = (NoOpEffectContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NoOpEffectContext_obj), true, "feathers.motion.effects.NoOpEffectContext"));
	*(void **)__this = NoOpEffectContext_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

NoOpEffectContext_obj::NoOpEffectContext_obj()
{
}

void NoOpEffectContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NoOpEffectContext);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_position,"_position");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NoOpEffectContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NoOpEffectContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"toEnd") ) { return ::hx::Val( toEnd_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { return ::hx::Val( _duration ); }
		if (HX_FIELD_EQ(inName,"_position") ) { return ::hx::Val( _position ); }
		if (HX_FIELD_EQ(inName,"interrupt") ) { return ::hx::Val( interrupt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"playReverse") ) { return ::hx::Val( playReverse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NoOpEffectContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NoOpEffectContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_duration",b3,06,24,5c));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("_position",08,98,90,12));
	outFields->push(HX_("position",a9,a0,fa,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NoOpEffectContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NoOpEffectContext_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsFloat,(int)offsetof(NoOpEffectContext_obj,_duration),HX_("_duration",b3,06,24,5c)},
	{::hx::fsFloat,(int)offsetof(NoOpEffectContext_obj,_position),HX_("_position",08,98,90,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NoOpEffectContext_obj_sStaticStorageInfo = 0;
#endif

static ::String NoOpEffectContext_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("_duration",b3,06,24,5c),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("_position",08,98,90,12),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("play",f4,2d,5a,4a),
	HX_("pause",f6,d6,57,bd),
	HX_("playReverse",8e,99,57,5f),
	HX_("stop",02,f0,5b,4c),
	HX_("toEnd",20,b5,0e,14),
	HX_("interrupt",a3,f9,d7,41),
	::String(null()) };

::hx::Class NoOpEffectContext_obj::__mClass;

void NoOpEffectContext_obj::__register()
{
	NoOpEffectContext_obj _hx_dummy;
	NoOpEffectContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.NoOpEffectContext",76,cc,62,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NoOpEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NoOpEffectContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoOpEffectContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoOpEffectContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
