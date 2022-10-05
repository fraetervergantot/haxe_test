#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IStateObserver_obj_sMemberFields[] = {
	HX_("get_stateContext",67,88,b0,db),
	HX_("set_stateContext",db,75,f2,31),
	::String(null()) };

::hx::Class IStateObserver_obj::__mClass;

void IStateObserver_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IStateObserver",ef,d8,61,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IStateObserver_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xb36ec70d >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
