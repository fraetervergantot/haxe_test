#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


static ::String IReadableGenericActuator_obj_sMemberFields[] = {
	HX_("getTarget",87,7c,43,03),
	HX_("getDuration",0a,d2,81,3a),
	HX_("getAutoVisible",cd,6f,a6,10),
	HX_("getDelay",0d,e7,fd,36),
	HX_("getEase",a4,3b,8f,15),
	HX_("getReflect",47,0a,8b,38),
	HX_("getRepeat",91,20,d3,82),
	HX_("getReverse",2c,bf,5d,6a),
	HX_("getSmartRotation",f1,49,26,ab),
	HX_("getSnapping",72,f8,ac,45),
	HX_("getOnComplete",2e,31,f1,b9),
	HX_("getOnCompleteParams",14,b7,56,7b),
	HX_("getOnRepeat",90,50,1d,0c),
	HX_("getOnRepeatParams",f6,8b,1b,bb),
	HX_("getOnUpdate",3e,3f,a6,8c),
	HX_("getOnUpdateParams",24,b1,a1,89),
	HX_("getOnPause",61,fb,f6,a2),
	HX_("getOnPauseParams",87,a9,96,ae),
	HX_("getOnResume",e2,22,25,0e),
	HX_("getOnResumeParams",c8,e7,ac,69),
	::String(null()) };

::hx::Class IReadableGenericActuator_obj::__mClass;

void IReadableGenericActuator_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.actuate.IReadableGenericActuator",3c,55,73,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IReadableGenericActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x07c53f0a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate
