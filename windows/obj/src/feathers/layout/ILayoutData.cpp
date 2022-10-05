#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace layout{


::hx::Class ILayoutData_obj::__mClass;

void ILayoutData_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.ILayoutData",97,c4,51,a1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x5e718643 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
