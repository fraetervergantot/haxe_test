#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
namespace feathers{
namespace layout{

::feathers::layout::AutoSizeMode AutoSizeMode_obj::CONTENT;

::feathers::layout::AutoSizeMode AutoSizeMode_obj::STAGE;

bool AutoSizeMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CONTENT",19,61,4b,99)) { outValue = AutoSizeMode_obj::CONTENT; return true; }
	if (inName==HX_("STAGE",9e,a2,f9,01)) { outValue = AutoSizeMode_obj::STAGE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AutoSizeMode_obj)

int AutoSizeMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CONTENT",19,61,4b,99)) return 1;
	if (inName==HX_("STAGE",9e,a2,f9,01)) return 0;
	return super::__FindIndex(inName);
}

int AutoSizeMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CONTENT",19,61,4b,99)) return 0;
	if (inName==HX_("STAGE",9e,a2,f9,01)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val AutoSizeMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CONTENT",19,61,4b,99)) return CONTENT;
	if (inName==HX_("STAGE",9e,a2,f9,01)) return STAGE;
	return super::__Field(inName,inCallProp);
}

static ::String AutoSizeMode_obj_sStaticFields[] = {
	HX_("STAGE",9e,a2,f9,01),
	HX_("CONTENT",19,61,4b,99),
	::String(null())
};

::hx::Class AutoSizeMode_obj::__mClass;

Dynamic __Create_AutoSizeMode_obj() { return new AutoSizeMode_obj; }

void AutoSizeMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.layout.AutoSizeMode",39,01,92,48), ::hx::TCanCast< AutoSizeMode_obj >,AutoSizeMode_obj_sStaticFields,0,
	&__Create_AutoSizeMode_obj, &__Create,
	&super::__SGetClass(), &CreateAutoSizeMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AutoSizeMode_obj::__GetStatic;
}

void AutoSizeMode_obj::__boot()
{
CONTENT = ::hx::CreateConstEnum< AutoSizeMode_obj >(HX_("CONTENT",19,61,4b,99),1);
STAGE = ::hx::CreateConstEnum< AutoSizeMode_obj >(HX_("STAGE",9e,a2,f9,01),0);
}


} // end namespace feathers
} // end namespace layout
