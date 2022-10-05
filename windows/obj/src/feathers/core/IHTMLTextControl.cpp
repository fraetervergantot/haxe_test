#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IHTMLTextControl_obj_sMemberFields[] = {
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	::String(null()) };

::hx::Class IHTMLTextControl_obj::__mClass;

void IHTMLTextControl_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IHTMLTextControl",4d,b6,2c,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IHTMLTextControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x13e7e7eb >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
