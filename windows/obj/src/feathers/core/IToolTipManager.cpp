#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IToolTipManager
#include <feathers/core/IToolTipManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace core{


static ::String IToolTipManager_obj_sMemberFields[] = {
	HX_("get_root",ab,a9,69,cb),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class IToolTipManager_obj::__mClass;

void IToolTipManager_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IToolTipManager",22,09,e9,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IToolTipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xec2c7544 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
