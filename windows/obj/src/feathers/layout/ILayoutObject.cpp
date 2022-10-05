#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace layout{


static ::String ILayoutObject_obj_sMemberFields[] = {
	HX_("get_includeInLayout",ce,e9,d0,f9),
	HX_("set_includeInLayout",da,dc,6d,36),
	HX_("get_layoutData",3d,56,f8,52),
	HX_("set_layoutData",b1,3e,18,73),
	::String(null()) };

::hx::Class ILayoutObject_obj::__mClass;

void ILayoutObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.ILayoutObject",6c,22,78,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ILayoutObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xf54ca718 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
