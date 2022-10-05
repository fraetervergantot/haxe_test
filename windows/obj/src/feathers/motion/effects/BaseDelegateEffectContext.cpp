#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_BaseDelegateEffectContext
#include <feathers/motion/effects/BaseDelegateEffectContext.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_30_new,"feathers.motion.effects.BaseDelegateEffectContext","new",0x67a68334,"feathers.motion.effects.BaseDelegateEffectContext.new","feathers/motion/effects/BaseDelegateEffectContext.hx",30,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_47_get_context,"feathers.motion.effects.BaseDelegateEffectContext","get_context",0x33b19cda,"feathers.motion.effects.BaseDelegateEffectContext.get_context","feathers/motion/effects/BaseDelegateEffectContext.hx",47,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_56_get_target,"feathers.motion.effects.BaseDelegateEffectContext","get_target",0xef8272c6,"feathers.motion.effects.BaseDelegateEffectContext.get_target","feathers/motion/effects/BaseDelegateEffectContext.hx",56,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_65_get_duration,"feathers.motion.effects.BaseDelegateEffectContext","get_duration",0xed1a1609,"feathers.motion.effects.BaseDelegateEffectContext.get_duration","feathers/motion/effects/BaseDelegateEffectContext.hx",65,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_74_get_position,"feathers.motion.effects.BaseDelegateEffectContext","get_position",0xa386a75e,"feathers.motion.effects.BaseDelegateEffectContext.get_position","feathers/motion/effects/BaseDelegateEffectContext.hx",74,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_77_set_position,"feathers.motion.effects.BaseDelegateEffectContext","set_position",0xb87fcad2,"feathers.motion.effects.BaseDelegateEffectContext.set_position","feathers/motion/effects/BaseDelegateEffectContext.hx",77,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_86_play,"feathers.motion.effects.BaseDelegateEffectContext","play",0x4b63f4a0,"feathers.motion.effects.BaseDelegateEffectContext.play","feathers/motion/effects/BaseDelegateEffectContext.hx",86,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_93_playReverse,"feathers.motion.effects.BaseDelegateEffectContext","playReverse",0xf3974062,"feathers.motion.effects.BaseDelegateEffectContext.playReverse","feathers/motion/effects/BaseDelegateEffectContext.hx",93,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_100_pause,"feathers.motion.effects.BaseDelegateEffectContext","pause",0xa4dbe6ca,"feathers.motion.effects.BaseDelegateEffectContext.pause","feathers/motion/effects/BaseDelegateEffectContext.hx",100,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_107_stop,"feathers.motion.effects.BaseDelegateEffectContext","stop",0x4d65b6ae,"feathers.motion.effects.BaseDelegateEffectContext.stop","feathers/motion/effects/BaseDelegateEffectContext.hx",107,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_114_toEnd,"feathers.motion.effects.BaseDelegateEffectContext","toEnd",0xfb92c4f4,"feathers.motion.effects.BaseDelegateEffectContext.toEnd","feathers/motion/effects/BaseDelegateEffectContext.hx",114,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_121_interrupt,"feathers.motion.effects.BaseDelegateEffectContext","interrupt",0x4f028377,"feathers.motion.effects.BaseDelegateEffectContext.interrupt","feathers/motion/effects/BaseDelegateEffectContext.hx",121,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_125_baseDelegateEffectContext_context_changeHandler,"feathers.motion.effects.BaseDelegateEffectContext","baseDelegateEffectContext_context_changeHandler",0x6e38bfc7,"feathers.motion.effects.BaseDelegateEffectContext.baseDelegateEffectContext_context_changeHandler","feathers/motion/effects/BaseDelegateEffectContext.hx",125,0x2f2ab05d)
HX_LOCAL_STACK_FRAME(_hx_pos_0f1e3f1c7985f81b_129_baseDelegateEffectContext_context_completeHandler,"feathers.motion.effects.BaseDelegateEffectContext","baseDelegateEffectContext_context_completeHandler",0x8a7d78de,"feathers.motion.effects.BaseDelegateEffectContext.baseDelegateEffectContext_context_completeHandler","feathers/motion/effects/BaseDelegateEffectContext.hx",129,0x2f2ab05d)
namespace feathers{
namespace motion{
namespace effects{

void BaseDelegateEffectContext_obj::__construct(::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_30_new)
HXLINE(  31)		super::__construct(null());
HXLINE(  32)		this->_context = context;
HXLINE(  33)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_context,HX_("change",70,91,72,b7),this->baseDelegateEffectContext_context_changeHandler_dyn(),null(),null(),null());
HXLINE(  34)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_context,HX_("complete",b9,00,c8,7f),this->baseDelegateEffectContext_context_completeHandler_dyn(),null(),null(),null());
            	}

Dynamic BaseDelegateEffectContext_obj::__CreateEmpty() { return new BaseDelegateEffectContext_obj; }

void *BaseDelegateEffectContext_obj::_hx_vtable = 0;

Dynamic BaseDelegateEffectContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseDelegateEffectContext_obj > _hx_result = new BaseDelegateEffectContext_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseDelegateEffectContext_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x30414938;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_motion_effects_BaseDelegateEffectContext__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::BaseDelegateEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::BaseDelegateEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseDelegateEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::BaseDelegateEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseDelegateEffectContext_obj::willTrigger,
};

static ::feathers::motion::effects::IEffectContext_obj _hx_feathers_motion_effects_BaseDelegateEffectContext__hx_feathers_motion_effects_IEffectContext= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::motion::effects::BaseDelegateEffectContext_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::motion::effects::BaseDelegateEffectContext_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseDelegateEffectContext_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::motion::effects::BaseDelegateEffectContext_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::motion::effects::BaseDelegateEffectContext_obj::willTrigger,
	(  ::Dynamic (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::get_target,
	( Float (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::get_duration,
	( Float (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::get_position,
	( Float (::hx::Object::*)(Float))&::feathers::motion::effects::BaseDelegateEffectContext_obj::set_position,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::play,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::playReverse,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::pause,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::stop,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::toEnd,
	( void (::hx::Object::*)())&::feathers::motion::effects::BaseDelegateEffectContext_obj::interrupt,
};

void *BaseDelegateEffectContext_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_motion_effects_BaseDelegateEffectContext__hx_openfl_events_IEventDispatcher;
		case (int)0xa2226771: return &_hx_feathers_motion_effects_BaseDelegateEffectContext__hx_feathers_motion_effects_IEffectContext;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic BaseDelegateEffectContext_obj::get_context(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_47_get_context)
HXDLIN(  47)		return this->_context;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,get_context,return )

 ::Dynamic BaseDelegateEffectContext_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_56_get_target)
HXDLIN(  56)		return ::feathers::motion::effects::IEffectContext_obj::get_target(this->get_context());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,get_target,return )

Float BaseDelegateEffectContext_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_65_get_duration)
HXDLIN(  65)		return ::feathers::motion::effects::IEffectContext_obj::get_duration(this->get_context());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,get_duration,return )

Float BaseDelegateEffectContext_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_74_get_position)
HXDLIN(  74)		return ::feathers::motion::effects::IEffectContext_obj::get_position(this->get_context());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,get_position,return )

Float BaseDelegateEffectContext_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_77_set_position)
HXLINE(  78)		::feathers::motion::effects::IEffectContext_obj::set_position(this->get_context(),value);
HXLINE(  79)		return ::feathers::motion::effects::IEffectContext_obj::get_position(this->get_context());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseDelegateEffectContext_obj,set_position,return )

void BaseDelegateEffectContext_obj::play(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_86_play)
HXDLIN(  86)		::feathers::motion::effects::IEffectContext_obj::play(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,play,(void))

void BaseDelegateEffectContext_obj::playReverse(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_93_playReverse)
HXDLIN(  93)		::feathers::motion::effects::IEffectContext_obj::playReverse(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,playReverse,(void))

void BaseDelegateEffectContext_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_100_pause)
HXDLIN( 100)		::feathers::motion::effects::IEffectContext_obj::pause(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,pause,(void))

void BaseDelegateEffectContext_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_107_stop)
HXDLIN( 107)		::feathers::motion::effects::IEffectContext_obj::stop(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,stop,(void))

void BaseDelegateEffectContext_obj::toEnd(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_114_toEnd)
HXDLIN( 114)		::feathers::motion::effects::IEffectContext_obj::toEnd(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,toEnd,(void))

void BaseDelegateEffectContext_obj::interrupt(){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_121_interrupt)
HXDLIN( 121)		::feathers::motion::effects::IEffectContext_obj::interrupt(this->_context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseDelegateEffectContext_obj,interrupt,(void))

void BaseDelegateEffectContext_obj::baseDelegateEffectContext_context_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_125_baseDelegateEffectContext_context_changeHandler)
HXDLIN( 125)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseDelegateEffectContext_obj,baseDelegateEffectContext_context_changeHandler,(void))

void BaseDelegateEffectContext_obj::baseDelegateEffectContext_context_completeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0f1e3f1c7985f81b_129_baseDelegateEffectContext_context_completeHandler)
HXDLIN( 129)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("complete",b9,00,c8,7f),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseDelegateEffectContext_obj,baseDelegateEffectContext_context_completeHandler,(void))


::hx::ObjectPtr< BaseDelegateEffectContext_obj > BaseDelegateEffectContext_obj::__new(::Dynamic context) {
	::hx::ObjectPtr< BaseDelegateEffectContext_obj > __this = new BaseDelegateEffectContext_obj();
	__this->__construct(context);
	return __this;
}

::hx::ObjectPtr< BaseDelegateEffectContext_obj > BaseDelegateEffectContext_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic context) {
	BaseDelegateEffectContext_obj *__this = (BaseDelegateEffectContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseDelegateEffectContext_obj), true, "feathers.motion.effects.BaseDelegateEffectContext"));
	*(void **)__this = BaseDelegateEffectContext_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

BaseDelegateEffectContext_obj::BaseDelegateEffectContext_obj()
{
}

void BaseDelegateEffectContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseDelegateEffectContext);
	HX_MARK_MEMBER_NAME(_context,"_context");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseDelegateEffectContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_context,"_context");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseDelegateEffectContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"context") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_context() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { return ::hx::Val( _context ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"interrupt") ) { return ::hx::Val( interrupt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_context") ) { return ::hx::Val( get_context_dyn() ); }
		if (HX_FIELD_EQ(inName,"playReverse") ) { return ::hx::Val( playReverse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"baseDelegateEffectContext_context_changeHandler") ) { return ::hx::Val( baseDelegateEffectContext_context_changeHandler_dyn() ); }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"baseDelegateEffectContext_context_completeHandler") ) { return ::hx::Val( baseDelegateEffectContext_context_completeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseDelegateEffectContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_context") ) { _context=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseDelegateEffectContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_context",70,ef,2f,53));
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("position",a9,a0,fa,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseDelegateEffectContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(BaseDelegateEffectContext_obj,_context),HX_("_context",70,ef,2f,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseDelegateEffectContext_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseDelegateEffectContext_obj_sMemberFields[] = {
	HX_("_context",70,ef,2f,53),
	HX_("get_context",06,f6,71,9f),
	HX_("get_target",1a,63,74,77),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("play",f4,2d,5a,4a),
	HX_("playReverse",8e,99,57,5f),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("toEnd",20,b5,0e,14),
	HX_("interrupt",a3,f9,d7,41),
	HX_("baseDelegateEffectContext_context_changeHandler",f3,4e,97,62),
	HX_("baseDelegateEffectContext_context_completeHandler",0a,2b,ff,3e),
	::String(null()) };

::hx::Class BaseDelegateEffectContext_obj::__mClass;

void BaseDelegateEffectContext_obj::__register()
{
	BaseDelegateEffectContext_obj _hx_dummy;
	BaseDelegateEffectContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.BaseDelegateEffectContext",42,19,f8,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseDelegateEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseDelegateEffectContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseDelegateEffectContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseDelegateEffectContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
