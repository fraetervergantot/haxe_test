#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_dataRenderers_IDataRenderer
#include <feathers/controls/dataRenderers/IDataRenderer.h>
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
namespace dataRenderers{


static ::String IDataRenderer_obj_sMemberFields[] = {
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	::String(null()) };

::hx::Class IDataRenderer_obj::__mClass;

void IDataRenderer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.dataRenderers.IDataRenderer",94,e9,b5,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDataRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x70798096 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace dataRenderers
