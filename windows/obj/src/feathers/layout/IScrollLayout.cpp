#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_IScrollLayout
#include <feathers/layout/IScrollLayout.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

namespace feathers{
namespace layout{


static ::String IScrollLayout_obj_sMemberFields[] = {
	HX_("get_scrollX",c2,93,d2,b6),
	HX_("set_scrollX",ce,9a,3f,c1),
	HX_("get_scrollY",c3,93,d2,b6),
	HX_("set_scrollY",cf,9a,3f,c1),
	HX_("get_elasticTop",09,b8,99,c3),
	HX_("get_elasticRight",50,a2,b3,fc),
	HX_("get_elasticBottom",f7,f5,cc,37),
	HX_("get_elasticLeft",13,fc,95,5d),
	HX_("getNearestScrollPositionForIndex",c7,8f,9f,e2),
	::String(null()) };

::hx::Class IScrollLayout_obj::__mClass;

void IScrollLayout_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.IScrollLayout",fa,27,6f,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x7543aca6 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
