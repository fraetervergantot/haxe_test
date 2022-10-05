#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_ScrollMode
#include <feathers/controls/ScrollMode.h>
#endif
namespace feathers{
namespace controls{

::feathers::controls::ScrollMode ScrollMode_obj::MASK;

::feathers::controls::ScrollMode ScrollMode_obj::MASKLESS;

::feathers::controls::ScrollMode ScrollMode_obj::SCROLL_RECT;

bool ScrollMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MASK",ec,08,17,33)) { outValue = ScrollMode_obj::MASK; return true; }
	if (inName==HX_("MASKLESS",45,ca,3c,54)) { outValue = ScrollMode_obj::MASKLESS; return true; }
	if (inName==HX_("SCROLL_RECT",d6,dd,76,f8)) { outValue = ScrollMode_obj::SCROLL_RECT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScrollMode_obj)

int ScrollMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MASK",ec,08,17,33)) return 1;
	if (inName==HX_("MASKLESS",45,ca,3c,54)) return 2;
	if (inName==HX_("SCROLL_RECT",d6,dd,76,f8)) return 0;
	return super::__FindIndex(inName);
}

int ScrollMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MASK",ec,08,17,33)) return 0;
	if (inName==HX_("MASKLESS",45,ca,3c,54)) return 0;
	if (inName==HX_("SCROLL_RECT",d6,dd,76,f8)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ScrollMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MASK",ec,08,17,33)) return MASK;
	if (inName==HX_("MASKLESS",45,ca,3c,54)) return MASKLESS;
	if (inName==HX_("SCROLL_RECT",d6,dd,76,f8)) return SCROLL_RECT;
	return super::__Field(inName,inCallProp);
}

static ::String ScrollMode_obj_sStaticFields[] = {
	HX_("SCROLL_RECT",d6,dd,76,f8),
	HX_("MASK",ec,08,17,33),
	HX_("MASKLESS",45,ca,3c,54),
	::String(null())
};

::hx::Class ScrollMode_obj::__mClass;

Dynamic __Create_ScrollMode_obj() { return new ScrollMode_obj; }

void ScrollMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.controls.ScrollMode",aa,ee,87,7a), ::hx::TCanCast< ScrollMode_obj >,ScrollMode_obj_sStaticFields,0,
	&__Create_ScrollMode_obj, &__Create,
	&super::__SGetClass(), &CreateScrollMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScrollMode_obj::__GetStatic;
}

void ScrollMode_obj::__boot()
{
MASK = ::hx::CreateConstEnum< ScrollMode_obj >(HX_("MASK",ec,08,17,33),1);
MASKLESS = ::hx::CreateConstEnum< ScrollMode_obj >(HX_("MASKLESS",45,ca,3c,54),2);
SCROLL_RECT = ::hx::CreateConstEnum< ScrollMode_obj >(HX_("SCROLL_RECT",d6,dd,76,f8),0);
}


} // end namespace feathers
} // end namespace controls
