#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace feathers{
namespace core{


static ::String IScaleManager_obj_sMemberFields[] = {
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("getScale",14,de,a5,d8),
	HX_("getBounds",ab,0f,74,e2),
	::String(null()) };

::hx::Class IScaleManager_obj::__mClass;

void IScaleManager_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.IScaleManager",5b,ac,2e,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IScaleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x75896bfd >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
