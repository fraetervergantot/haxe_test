#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif

namespace feathers{
namespace core{


static ::String IDataSelector_obj_sMemberFields[] = {
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	::String(null()) };

::hx::Class IDataSelector_obj::__mClass;

void IDataSelector_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IDataSelector",c1,fa,86,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDataSelector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe7e1ba63 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
