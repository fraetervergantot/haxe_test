#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_popups_IPopUpAdapter
#include <feathers/controls/popups/IPopUpAdapter.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace controls{
namespace popups{


static ::String IPopUpAdapter_obj_sMemberFields[] = {
	HX_("get_active",8f,b1,cd,06),
	HX_("get_persistent",a0,ee,ea,75),
	HX_("open",ca,03,b4,49),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class IPopUpAdapter_obj::__mClass;

void IPopUpAdapter_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.popups.IPopUpAdapter",9f,38,21,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IPopUpAdapter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x8c7b3dbf >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace popups
