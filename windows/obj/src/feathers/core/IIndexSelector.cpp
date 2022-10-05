#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif

namespace feathers{
namespace core{


static ::String IIndexSelector_obj_sMemberFields[] = {
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_maxSelectedIndex",7c,4a,c9,9e),
	::String(null()) };

::hx::Class IIndexSelector_obj::__mClass;

void IIndexSelector_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IIndexSelector",f9,5d,a8,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IIndexSelector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe0b54c17 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
