#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayoutIndexObject
#include <feathers/layout/ILayoutIndexObject.h>
#endif

namespace feathers{
namespace layout{


static ::String ILayoutIndexObject_obj_sMemberFields[] = {
	HX_("get_layoutIndex",9f,ab,df,2f),
	HX_("set_layoutIndex",ab,28,ab,2b),
	::String(null()) };

::hx::Class ILayoutIndexObject_obj::__mClass;

void ILayoutIndexObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.ILayoutIndexObject",a4,10,a7,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ILayoutIndexObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xe7561c78 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
