#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif

namespace feathers{
namespace style{


static ::String IStyleObject_obj_sMemberFields[] = {
	HX_("get_themeEnabled",01,5e,4c,b4),
	HX_("set_themeEnabled",75,4b,8e,0a),
	::String(null()) };

::hx::Class IStyleObject_obj::__mClass;

void IStyleObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.IStyleObject",22,4f,d5,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IStyleObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd6c92308 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
