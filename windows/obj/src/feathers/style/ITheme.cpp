#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace style{


static ::String ITheme_obj_sMemberFields[] = {
	HX_("getStyleProvider",0c,15,0c,c9),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class ITheme_obj::__mClass;

void ITheme_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.ITheme",db,d0,1f,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ITheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xcaf21441 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
