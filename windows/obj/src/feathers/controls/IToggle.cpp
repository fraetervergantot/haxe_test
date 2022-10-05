#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
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
namespace controls{


static ::String IToggle_obj_sMemberFields[] = {
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	::String(null()) };

::hx::Class IToggle_obj::__mClass;

void IToggle_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.IToggle",03,d8,fb,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IToggle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xdea06717 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
