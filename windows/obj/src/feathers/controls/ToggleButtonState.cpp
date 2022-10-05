#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_ToggleButtonState
#include <feathers/controls/ToggleButtonState.h>
#endif
namespace feathers{
namespace controls{

::feathers::controls::ToggleButtonState ToggleButtonState_obj::DISABLED(bool selected)
{
	return ::hx::CreateEnum< ToggleButtonState_obj >(HX_("DISABLED",7c,d1,89,d5),3,1)->_hx_init(0,selected);
}

::feathers::controls::ToggleButtonState ToggleButtonState_obj::DOWN(bool selected)
{
	return ::hx::CreateEnum< ToggleButtonState_obj >(HX_("DOWN",62,c0,2e,2d),2,1)->_hx_init(0,selected);
}

::feathers::controls::ToggleButtonState ToggleButtonState_obj::HOVER(bool selected)
{
	return ::hx::CreateEnum< ToggleButtonState_obj >(HX_("HOVER",9c,1d,53,a9),1,1)->_hx_init(0,selected);
}

::feathers::controls::ToggleButtonState ToggleButtonState_obj::UP(bool selected)
{
	return ::hx::CreateEnum< ToggleButtonState_obj >(HX_("UP",5b,4a,00,00),0,1)->_hx_init(0,selected);
}

bool ToggleButtonState_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) { outValue = ToggleButtonState_obj::DISABLED_dyn(); return true; }
	if (inName==HX_("DOWN",62,c0,2e,2d)) { outValue = ToggleButtonState_obj::DOWN_dyn(); return true; }
	if (inName==HX_("HOVER",9c,1d,53,a9)) { outValue = ToggleButtonState_obj::HOVER_dyn(); return true; }
	if (inName==HX_("UP",5b,4a,00,00)) { outValue = ToggleButtonState_obj::UP_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ToggleButtonState_obj)

int ToggleButtonState_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return 3;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 2;
	if (inName==HX_("HOVER",9c,1d,53,a9)) return 1;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToggleButtonState_obj,DISABLED,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToggleButtonState_obj,DOWN,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToggleButtonState_obj,HOVER,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToggleButtonState_obj,UP,return)

int ToggleButtonState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return 1;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 1;
	if (inName==HX_("HOVER",9c,1d,53,a9)) return 1;
	if (inName==HX_("UP",5b,4a,00,00)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ToggleButtonState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return DISABLED_dyn();
	if (inName==HX_("DOWN",62,c0,2e,2d)) return DOWN_dyn();
	if (inName==HX_("HOVER",9c,1d,53,a9)) return HOVER_dyn();
	if (inName==HX_("UP",5b,4a,00,00)) return UP_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ToggleButtonState_obj_sStaticFields[] = {
	HX_("UP",5b,4a,00,00),
	HX_("HOVER",9c,1d,53,a9),
	HX_("DOWN",62,c0,2e,2d),
	HX_("DISABLED",7c,d1,89,d5),
	::String(null())
};

::hx::Class ToggleButtonState_obj::__mClass;

Dynamic __Create_ToggleButtonState_obj() { return new ToggleButtonState_obj; }

void ToggleButtonState_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.controls.ToggleButtonState",31,6a,35,02), ::hx::TCanCast< ToggleButtonState_obj >,ToggleButtonState_obj_sStaticFields,0,
	&__Create_ToggleButtonState_obj, &__Create,
	&super::__SGetClass(), &CreateToggleButtonState_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ToggleButtonState_obj::__GetStatic;
}

void ToggleButtonState_obj::__boot()
{
}


} // end namespace feathers
} // end namespace controls
