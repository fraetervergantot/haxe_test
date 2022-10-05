#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IPopUpManager_obj_sMemberFields[] = {
	HX_("get_overlayFactory",e3,73,f1,09),
	HX_("set_overlayFactory",57,a6,a0,e6),
	HX_("get_root",ab,a9,69,cb),
	HX_("set_root",1f,03,c7,79),
	HX_("get_popUpCount",2c,fb,71,87),
	HX_("get_topLevelPopUpCount",bb,e3,fe,21),
	HX_("getPopUpAt",69,d8,c7,97),
	HX_("isPopUp",02,92,1a,63),
	HX_("isTopLevelPopUp",d3,6a,69,f2),
	HX_("isModal",e3,c3,dd,a8),
	HX_("hasModalPopUps",7a,4b,50,fe),
	HX_("addPopUp",6b,14,f2,3f),
	HX_("removePopUp",68,cb,c8,c4),
	HX_("removeAllPopUps",c4,ab,3d,0b),
	HX_("centerPopUp",37,f4,64,98),
	::String(null()) };

::hx::Class IPopUpManager_obj::__mClass;

void IPopUpManager_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IPopUpManager",d9,e8,34,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IPopUpManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x808fa87b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
