#include <hxcpp.h>

#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace style{


static ::String IStyleProvider_obj_sMemberFields[] = {
	HX_("applyStyles",30,a6,cd,51),
	::String(null()) };

::hx::Class IStyleProvider_obj::__mClass;

void IStyleProvider_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.IStyleProvider",54,e0,2e,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IStyleProvider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x95abf9ba >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
