#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_HorizontalAlign
#include <feathers/layout/HorizontalAlign.h>
#endif
namespace feathers{
namespace layout{

::feathers::layout::HorizontalAlign HorizontalAlign_obj::CENTER;

::feathers::layout::HorizontalAlign HorizontalAlign_obj::JUSTIFY;

::feathers::layout::HorizontalAlign HorizontalAlign_obj::LEFT;

::feathers::layout::HorizontalAlign HorizontalAlign_obj::RIGHT;

bool HorizontalAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = HorizontalAlign_obj::CENTER; return true; }
	if (inName==HX_("JUSTIFY",30,b3,89,03)) { outValue = HorizontalAlign_obj::JUSTIFY; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = HorizontalAlign_obj::LEFT; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = HorizontalAlign_obj::RIGHT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(HorizontalAlign_obj)

int HorizontalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 1;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return 3;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 2;
	return super::__FindIndex(inName);
}

int HorizontalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val HorizontalAlign_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return JUSTIFY;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String HorizontalAlign_obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("RIGHT",bc,43,52,67),
	HX_("JUSTIFY",30,b3,89,03),
	::String(null())
};

::hx::Class HorizontalAlign_obj::__mClass;

Dynamic __Create_HorizontalAlign_obj() { return new HorizontalAlign_obj; }

void HorizontalAlign_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.layout.HorizontalAlign",1b,f9,2f,9f), ::hx::TCanCast< HorizontalAlign_obj >,HorizontalAlign_obj_sStaticFields,0,
	&__Create_HorizontalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateHorizontalAlign_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &HorizontalAlign_obj::__GetStatic;
}

void HorizontalAlign_obj::__boot()
{
CENTER = ::hx::CreateConstEnum< HorizontalAlign_obj >(HX_("CENTER",d5,d1,5d,b8),1);
JUSTIFY = ::hx::CreateConstEnum< HorizontalAlign_obj >(HX_("JUSTIFY",30,b3,89,03),3);
LEFT = ::hx::CreateConstEnum< HorizontalAlign_obj >(HX_("LEFT",07,d0,70,32),0);
RIGHT = ::hx::CreateConstEnum< HorizontalAlign_obj >(HX_("RIGHT",bc,43,52,67),2);
}


} // end namespace feathers
} // end namespace layout
