#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
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
namespace core{


static ::String IFocusExtras_obj_sMemberFields[] = {
	HX_("get_focusExtrasBefore",91,0b,d6,50),
	HX_("get_focusExtrasAfter",4a,b7,e5,21),
	::String(null()) };

::hx::Class IFocusExtras_obj::__mClass;

void IFocusExtras_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IFocusExtras",83,21,9d,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFocusExtras_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x21fbac21 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
