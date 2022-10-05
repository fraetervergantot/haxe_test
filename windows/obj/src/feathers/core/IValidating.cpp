#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif

namespace feathers{
namespace core{


static ::String IValidating_obj_sMemberFields[] = {
	HX_("get_depth",5a,4d,d3,1a),
	HX_("validateNow",20,c2,bf,ca),
	::String(null()) };

::hx::Class IValidating_obj::__mClass;

void IValidating_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IValidating",ab,80,c6,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IValidating_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x64d4b3cd >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
