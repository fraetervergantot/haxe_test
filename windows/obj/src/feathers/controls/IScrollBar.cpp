#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
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


static ::String IScrollBar_obj_sMemberFields[] = {
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("get_page",d8,95,0c,ca),
	HX_("set_page",4c,ef,69,78),
	::String(null()) };

::hx::Class IScrollBar_obj::__mClass;

void IScrollBar_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.IScrollBar",b7,ee,c1,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa9590423 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
