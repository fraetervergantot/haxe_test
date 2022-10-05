#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif

namespace feathers{
namespace style{


static ::String IVariantStyleObject_obj_sMemberFields[] = {
	HX_("get_styleContext",47,7d,20,4b),
	HX_("get_variant",9c,a0,dc,62),
	HX_("set_variant",a8,a7,49,6d),
	::String(null()) };

::hx::Class IVariantStyleObject_obj::__mClass;

void IVariantStyleObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.IVariantStyleObject",39,30,ed,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IVariantStyleObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x41bc4513 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
