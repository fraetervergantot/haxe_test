#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IFocusManager
#include <feathers/core/IFocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IFocusManagerAware_obj_sMemberFields[] = {
	HX_("get_focusManager",fe,71,32,6f),
	HX_("set_focusManager",72,5f,74,c5),
	::String(null()) };

::hx::Class IFocusManagerAware_obj::__mClass;

void IFocusManagerAware_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IFocusManagerAware",11,0f,10,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFocusManagerAware_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x7031642f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
