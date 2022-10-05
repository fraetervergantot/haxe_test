#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_ButtonState
#include <feathers/controls/ButtonState.h>
#endif
namespace feathers{
namespace controls{

::feathers::controls::ButtonState ButtonState_obj::DISABLED;

::feathers::controls::ButtonState ButtonState_obj::DOWN;

::feathers::controls::ButtonState ButtonState_obj::HOVER;

::feathers::controls::ButtonState ButtonState_obj::UP;

bool ButtonState_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) { outValue = ButtonState_obj::DISABLED; return true; }
	if (inName==HX_("DOWN",62,c0,2e,2d)) { outValue = ButtonState_obj::DOWN; return true; }
	if (inName==HX_("HOVER",9c,1d,53,a9)) { outValue = ButtonState_obj::HOVER; return true; }
	if (inName==HX_("UP",5b,4a,00,00)) { outValue = ButtonState_obj::UP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ButtonState_obj)

int ButtonState_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return 3;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 2;
	if (inName==HX_("HOVER",9c,1d,53,a9)) return 1;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindIndex(inName);
}

int ButtonState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return 0;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 0;
	if (inName==HX_("HOVER",9c,1d,53,a9)) return 0;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ButtonState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DISABLED",7c,d1,89,d5)) return DISABLED;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return DOWN;
	if (inName==HX_("HOVER",9c,1d,53,a9)) return HOVER;
	if (inName==HX_("UP",5b,4a,00,00)) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String ButtonState_obj_sStaticFields[] = {
	HX_("UP",5b,4a,00,00),
	HX_("HOVER",9c,1d,53,a9),
	HX_("DOWN",62,c0,2e,2d),
	HX_("DISABLED",7c,d1,89,d5),
	::String(null())
};

::hx::Class ButtonState_obj::__mClass;

Dynamic __Create_ButtonState_obj() { return new ButtonState_obj; }

void ButtonState_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.controls.ButtonState",e5,b0,e9,37), ::hx::TCanCast< ButtonState_obj >,ButtonState_obj_sStaticFields,0,
	&__Create_ButtonState_obj, &__Create,
	&super::__SGetClass(), &CreateButtonState_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ButtonState_obj::__GetStatic;
}

void ButtonState_obj::__boot()
{
DISABLED = ::hx::CreateConstEnum< ButtonState_obj >(HX_("DISABLED",7c,d1,89,d5),3);
DOWN = ::hx::CreateConstEnum< ButtonState_obj >(HX_("DOWN",62,c0,2e,2d),2);
HOVER = ::hx::CreateConstEnum< ButtonState_obj >(HX_("HOVER",9c,1d,53,a9),1);
UP = ::hx::CreateConstEnum< ButtonState_obj >(HX_("UP",5b,4a,00,00),0);
}


} // end namespace feathers
} // end namespace controls
