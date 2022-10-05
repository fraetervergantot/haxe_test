#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
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


static ::String IRange_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("get_minimum",e5,25,e5,d1),
	HX_("set_minimum",f1,2c,52,dc),
	HX_("get_maximum",f7,0f,0c,61),
	HX_("set_maximum",03,17,79,6b),
	::String(null()) };

::hx::Class IRange_obj::__mClass;

void IRange_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.IRange",2e,b0,50,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IRange_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x16fd9f9a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
