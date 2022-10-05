#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IUIControl_obj_sMemberFields[] = {
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("get_toolTip",fa,c4,6e,f0),
	HX_("set_toolTip",06,cc,db,fa),
	HX_("initializeNow",a6,11,b6,12),
	::String(null()) };

::hx::Class IUIControl_obj::__mClass;

void IUIControl_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IUIControl",31,99,9e,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IUIControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x2696a04f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
