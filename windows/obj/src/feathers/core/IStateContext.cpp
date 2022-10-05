#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IStateContext_obj_sMemberFields[] = {
	HX_("get_currentState",a1,47,b6,cf),
	::String(null()) };

::hx::Class IStateContext_obj::__mClass;

void IStateContext_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IStateContext",36,17,35,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IStateContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa18fd6d8 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
