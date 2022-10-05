#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


static ::String IGotoActuator_obj_sMemberFields[] = {
	HX_("goto",a3,99,69,44),
	::String(null()) };

::hx::Class IGotoActuator_obj::__mClass;

void IGotoActuator_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.actuate.IGotoActuator",a0,27,93,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IGotoActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x02676f12 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate
