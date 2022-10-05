#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif

namespace feathers{
namespace style{


static ::String IDarkModeTheme_obj_sMemberFields[] = {
	HX_("get_darkMode",02,7b,39,32),
	HX_("set_darkMode",76,9e,32,47),
	::String(null()) };

::hx::Class IDarkModeTheme_obj::__mClass;

void IDarkModeTheme_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.IDarkModeTheme",22,b5,c6,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDarkModeTheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xa443ce88 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
