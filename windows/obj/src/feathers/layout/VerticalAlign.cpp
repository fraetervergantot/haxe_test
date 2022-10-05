#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
#endif
namespace feathers{
namespace layout{

::feathers::layout::VerticalAlign VerticalAlign_obj::BOTTOM;

::feathers::layout::VerticalAlign VerticalAlign_obj::JUSTIFY;

::feathers::layout::VerticalAlign VerticalAlign_obj::MIDDLE;

::feathers::layout::VerticalAlign VerticalAlign_obj::TOP;

bool VerticalAlign_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) { outValue = VerticalAlign_obj::BOTTOM; return true; }
	if (inName==HX_("JUSTIFY",30,b3,89,03)) { outValue = VerticalAlign_obj::JUSTIFY; return true; }
	if (inName==HX_("MIDDLE",55,7f,e1,fe)) { outValue = VerticalAlign_obj::MIDDLE; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = VerticalAlign_obj::TOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VerticalAlign_obj)

int VerticalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 2;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return 3;
	if (inName==HX_("MIDDLE",55,7f,e1,fe)) return 1;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindIndex(inName);
}

int VerticalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 0;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return 0;
	if (inName==HX_("MIDDLE",55,7f,e1,fe)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val VerticalAlign_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return BOTTOM;
	if (inName==HX_("JUSTIFY",30,b3,89,03)) return JUSTIFY;
	if (inName==HX_("MIDDLE",55,7f,e1,fe)) return MIDDLE;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String VerticalAlign_obj_sStaticFields[] = {
	HX_("TOP",75,02,40,00),
	HX_("MIDDLE",55,7f,e1,fe),
	HX_("BOTTOM",eb,92,fb,17),
	HX_("JUSTIFY",30,b3,89,03),
	::String(null())
};

::hx::Class VerticalAlign_obj::__mClass;

Dynamic __Create_VerticalAlign_obj() { return new VerticalAlign_obj; }

void VerticalAlign_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.layout.VerticalAlign",c9,7d,6a,2f), ::hx::TCanCast< VerticalAlign_obj >,VerticalAlign_obj_sStaticFields,0,
	&__Create_VerticalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateVerticalAlign_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VerticalAlign_obj::__GetStatic;
}

void VerticalAlign_obj::__boot()
{
BOTTOM = ::hx::CreateConstEnum< VerticalAlign_obj >(HX_("BOTTOM",eb,92,fb,17),2);
JUSTIFY = ::hx::CreateConstEnum< VerticalAlign_obj >(HX_("JUSTIFY",30,b3,89,03),3);
MIDDLE = ::hx::CreateConstEnum< VerticalAlign_obj >(HX_("MIDDLE",55,7f,e1,fe),1);
TOP = ::hx::CreateConstEnum< VerticalAlign_obj >(HX_("TOP",75,02,40,00),0);
}


} // end namespace feathers
} // end namespace layout
