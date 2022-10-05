#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace motion{
namespace effects{


static ::String IEffectContext_obj_sMemberFields[] = {
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
	::String(null()) };

::hx::Class IEffectContext_obj::__mClass;

void IEffectContext_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.effects.IEffectContext",bb,a2,24,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IEffectContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa2226771 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace motion
} // end namespace effects
