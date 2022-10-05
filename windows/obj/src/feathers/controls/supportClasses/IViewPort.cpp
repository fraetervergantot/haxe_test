#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace controls{
namespace supportClasses{


static ::String IViewPort_obj_sMemberFields[] = {
	HX_("get_visibleWidth",bd,bc,86,44),
	HX_("set_visibleWidth",31,aa,c8,9a),
	HX_("get_visibleHeight",50,e1,ad,67),
	HX_("set_visibleHeight",5c,b9,1b,8b),
	HX_("get_minVisibleWidth",fd,0f,f5,d3),
	HX_("set_minVisibleWidth",09,03,92,10),
	HX_("get_minVisibleHeight",10,66,c8,58),
	HX_("set_minVisibleHeight",84,1d,80,25),
	HX_("get_maxVisibleWidth",0f,5c,0f,78),
	HX_("set_maxVisibleWidth",1b,4f,ac,b4),
	HX_("get_maxVisibleHeight",be,a9,b0,4b),
	HX_("set_maxVisibleHeight",32,61,68,18),
	HX_("get_scrollX",c2,93,d2,b6),
	HX_("set_scrollX",ce,9a,3f,c1),
	HX_("get_scrollY",c3,93,d2,b6),
	HX_("set_scrollY",cf,9a,3f,c1),
	::String(null()) };

::hx::Class IViewPort_obj::__mClass;

void IViewPort_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.supportClasses.IViewPort",12,e7,2f,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IViewPort_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd5cd7712 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses
