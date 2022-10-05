#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IFocusExclusions
#include <feathers/core/IFocusExclusions.h>
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


static ::String IFocusExclusions_obj_sMemberFields[] = {
	HX_("get_focusExclusions",f4,1e,a9,dd),
	::String(null()) };

::hx::Class IFocusExclusions_obj::__mClass;

void IFocusExclusions_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IFocusExclusions",85,7b,c4,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFocusExclusions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa67fad23 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
