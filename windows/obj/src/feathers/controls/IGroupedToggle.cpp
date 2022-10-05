#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_IGroupedToggle
#include <feathers/controls/IGroupedToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_ToggleGroup
#include <feathers/core/ToggleGroup.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace controls{


static ::String IGroupedToggle_obj_sMemberFields[] = {
	HX_("get_toggleGroup",a2,22,9d,82),
	HX_("set_toggleGroup",ae,9f,68,7e),
	::String(null()) };

::hx::Class IGroupedToggle_obj::__mClass;

void IGroupedToggle_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.IGroupedToggle",03,8b,c4,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IGroupedToggle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xb850c66f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
