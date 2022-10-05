#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IMeasureObject_obj_sMemberFields[] = {
	HX_("get_explicitWidth",c9,59,a0,4e),
	HX_("get_explicitHeight",c4,ae,fd,33),
	HX_("get_explicitMinWidth",31,fb,28,00),
	HX_("get_explicitMinHeight",5c,48,02,da),
	HX_("get_explicitMaxWidth",df,e0,0e,b3),
	HX_("get_explicitMaxHeight",ee,5a,45,b0),
	HX_("get_minWidth",1d,d7,b3,76),
	HX_("set_minWidth",91,fa,ac,8b),
	HX_("get_minHeight",f0,da,f7,1c),
	HX_("set_minHeight",fc,bc,fd,61),
	HX_("get_maxWidth",cb,bc,99,29),
	HX_("set_maxWidth",3f,e0,92,3e),
	HX_("get_maxHeight",82,ed,3a,f3),
	HX_("set_maxHeight",8e,cf,40,38),
	HX_("resetWidth",b7,ed,fe,b2),
	HX_("resetHeight",16,8b,60,a2),
	HX_("resetMinWidth",03,10,39,f2),
	HX_("resetMinHeight",4a,6b,04,b6),
	HX_("resetMaxWidth",b1,f5,1e,a5),
	HX_("resetMaxHeight",dc,7d,47,8c),
	::String(null()) };

::hx::Class IMeasureObject_obj::__mClass;

void IMeasureObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IMeasureObject",65,3a,b6,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMeasureObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xcfc32883 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
