#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IFocusObject_obj_sMemberFields[] = {
	HX_("get_focusEnabled",12,e4,a1,d9),
	HX_("set_focusEnabled",86,d1,e3,2f),
	HX_("get_focusOwner",84,c1,cd,70),
	HX_("set_focusOwner",f8,a9,ed,90),
	HX_("showFocus",9b,c5,ed,32),
	::String(null()) };

::hx::Class IFocusObject_obj::__mClass;

void IFocusObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IFocusObject",5f,fc,b7,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFocusObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x701686fd >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
