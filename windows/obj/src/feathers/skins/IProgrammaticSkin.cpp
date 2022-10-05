#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace skins{


static ::String IProgrammaticSkin_obj_sMemberFields[] = {
	HX_("get_uiContext",d2,5d,32,86),
	HX_("set_uiContext",de,3f,38,cb),
	::String(null()) };

::hx::Class IProgrammaticSkin_obj::__mClass;

void IProgrammaticSkin_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.IProgrammaticSkin",e6,d4,1b,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IProgrammaticSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x32a0d8d6 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
