#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ISnapLayout
#include <feathers/layout/ISnapLayout.h>
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
namespace layout{


static ::String ISnapLayout_obj_sMemberFields[] = {
	HX_("getSnapPositionsX",8e,cb,f1,97),
	HX_("getSnapPositionsY",8f,cb,f1,97),
	::String(null()) };

::hx::Class ISnapLayout_obj::__mClass;

void ISnapLayout_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.ISnapLayout",37,43,4c,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ISnapLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xf16c04e3 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
