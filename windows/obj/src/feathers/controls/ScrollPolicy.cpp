#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_ScrollPolicy
#include <feathers/controls/ScrollPolicy.h>
#endif
namespace feathers{
namespace controls{

::feathers::controls::ScrollPolicy ScrollPolicy_obj::AUTO;

::feathers::controls::ScrollPolicy ScrollPolicy_obj::OFF;

::feathers::controls::ScrollPolicy ScrollPolicy_obj::ON;

bool ScrollPolicy_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) { outValue = ScrollPolicy_obj::AUTO; return true; }
	if (inName==HX_("OFF",4f,2f,3c,00)) { outValue = ScrollPolicy_obj::OFF; return true; }
	if (inName==HX_("ON",1f,45,00,00)) { outValue = ScrollPolicy_obj::ON; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ScrollPolicy_obj)

int ScrollPolicy_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 2;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 1;
	if (inName==HX_("ON",1f,45,00,00)) return 0;
	return super::__FindIndex(inName);
}

int ScrollPolicy_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 0;
	if (inName==HX_("ON",1f,45,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ScrollPolicy_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return AUTO;
	if (inName==HX_("OFF",4f,2f,3c,00)) return OFF;
	if (inName==HX_("ON",1f,45,00,00)) return ON;
	return super::__Field(inName,inCallProp);
}

static ::String ScrollPolicy_obj_sStaticFields[] = {
	HX_("ON",1f,45,00,00),
	HX_("OFF",4f,2f,3c,00),
	HX_("AUTO",6f,a7,37,2b),
	::String(null())
};

::hx::Class ScrollPolicy_obj::__mClass;

Dynamic __Create_ScrollPolicy_obj() { return new ScrollPolicy_obj; }

void ScrollPolicy_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.controls.ScrollPolicy",f9,96,bf,57), ::hx::TCanCast< ScrollPolicy_obj >,ScrollPolicy_obj_sStaticFields,0,
	&__Create_ScrollPolicy_obj, &__Create,
	&super::__SGetClass(), &CreateScrollPolicy_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ScrollPolicy_obj::__GetStatic;
}

void ScrollPolicy_obj::__boot()
{
AUTO = ::hx::CreateConstEnum< ScrollPolicy_obj >(HX_("AUTO",6f,a7,37,2b),2);
OFF = ::hx::CreateConstEnum< ScrollPolicy_obj >(HX_("OFF",4f,2f,3c,00),1);
ON = ::hx::CreateConstEnum< ScrollPolicy_obj >(HX_("ON",1f,45,00,00),0);
}


} // end namespace feathers
} // end namespace controls
