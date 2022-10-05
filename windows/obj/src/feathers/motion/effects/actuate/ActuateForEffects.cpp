#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateForEffects
#include <feathers/motion/effects/actuate/ActuateForEffects.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_MethodEffectActuator
#include <feathers/motion/effects/actuate/MethodEffectActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_SimpleEffectActuator
#include <feathers/motion/effects/actuate/SimpleEffectActuator.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7a78bb289d549d2d_43_tween,"feathers.motion.effects.actuate.ActuateForEffects","tween",0x518c4380,"feathers.motion.effects.actuate.ActuateForEffects.tween","feathers/motion/effects/actuate/ActuateForEffects.hx",43,0x0890aafd)
HX_LOCAL_STACK_FRAME(_hx_pos_7a78bb289d549d2d_55_update,"feathers.motion.effects.actuate.ActuateForEffects","update",0x670fdf54,"feathers.motion.effects.actuate.ActuateForEffects.update","feathers/motion/effects/actuate/ActuateForEffects.hx",55,0x0890aafd)
namespace feathers{
namespace motion{
namespace effects{
namespace actuate{

void ActuateForEffects_obj::__construct() { }

Dynamic ActuateForEffects_obj::__CreateEmpty() { return new ActuateForEffects_obj; }

void *ActuateForEffects_obj::_hx_vtable = 0;

Dynamic ActuateForEffects_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActuateForEffects_obj > _hx_result = new ActuateForEffects_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ActuateForEffects_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7648ee39;
}

::Dynamic ActuateForEffects_obj::tween( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_7a78bb289d549d2d_43_tween)
HXLINE(  44)		 ::motion::actuators::GenericActuator result = ::motion::Actuate_obj::tween(target,duration,properties,overwrite,::hx::ClassOf< ::feathers::motion::effects::actuate::SimpleEffectActuator >());
HXLINE(  45)		return  ::hx::interface_check(result,0x07c53f0a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ActuateForEffects_obj,tween,return )

::Dynamic ActuateForEffects_obj::update( ::Dynamic target,Float duration, ::Dynamic start, ::Dynamic end,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_7a78bb289d549d2d_55_update)
HXLINE(  56)		 ::Dynamic properties =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("start",62,74,0b,84),start)
            			->setFixed(1,HX_("end",db,03,4d,00),end));
HXLINE(  57)		 ::motion::actuators::GenericActuator result = ::motion::Actuate_obj::tween(target,duration,properties,overwrite,::hx::ClassOf< ::feathers::motion::effects::actuate::MethodEffectActuator >());
HXLINE(  58)		return  ::hx::interface_check(result,0x07c53f0a);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ActuateForEffects_obj,update,return )


ActuateForEffects_obj::ActuateForEffects_obj()
{
}

bool ActuateForEffects_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ActuateForEffects_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ActuateForEffects_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ActuateForEffects_obj::__mClass;

static ::String ActuateForEffects_obj_sStaticFields[] = {
	HX_("tween",6b,aa,70,19),
	HX_("update",09,86,05,87),
	::String(null())
};

void ActuateForEffects_obj::__register()
{
	ActuateForEffects_obj _hx_dummy;
	ActuateForEffects_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.actuate.ActuateForEffects",c3,4b,4d,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ActuateForEffects_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ActuateForEffects_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ActuateForEffects_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActuateForEffects_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActuateForEffects_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate
