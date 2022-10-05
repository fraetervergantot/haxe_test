#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
namespace feathers{
namespace layout{

::feathers::layout::RelativePosition RelativePosition_obj::BOTTOM;

::feathers::layout::RelativePosition RelativePosition_obj::LEFT;

::feathers::layout::RelativePosition RelativePosition_obj::MANUAL;

::feathers::layout::RelativePosition RelativePosition_obj::RIGHT;

::feathers::layout::RelativePosition RelativePosition_obj::TOP;

bool RelativePosition_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) { outValue = RelativePosition_obj::BOTTOM; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = RelativePosition_obj::LEFT; return true; }
	if (inName==HX_("MANUAL",46,da,55,6a)) { outValue = RelativePosition_obj::MANUAL; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = RelativePosition_obj::RIGHT; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = RelativePosition_obj::TOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RelativePosition_obj)

int RelativePosition_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 2;
	if (inName==HX_("LEFT",07,d0,70,32)) return 3;
	if (inName==HX_("MANUAL",46,da,55,6a)) return 4;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 1;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindIndex(inName);
}

int RelativePosition_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("MANUAL",46,da,55,6a)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val RelativePosition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTTOM",eb,92,fb,17)) return BOTTOM;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("MANUAL",46,da,55,6a)) return MANUAL;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String RelativePosition_obj_sStaticFields[] = {
	HX_("TOP",75,02,40,00),
	HX_("RIGHT",bc,43,52,67),
	HX_("BOTTOM",eb,92,fb,17),
	HX_("LEFT",07,d0,70,32),
	HX_("MANUAL",46,da,55,6a),
	::String(null())
};

::hx::Class RelativePosition_obj::__mClass;

Dynamic __Create_RelativePosition_obj() { return new RelativePosition_obj; }

void RelativePosition_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.layout.RelativePosition",7b,fa,90,f4), ::hx::TCanCast< RelativePosition_obj >,RelativePosition_obj_sStaticFields,0,
	&__Create_RelativePosition_obj, &__Create,
	&super::__SGetClass(), &CreateRelativePosition_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RelativePosition_obj::__GetStatic;
}

void RelativePosition_obj::__boot()
{
BOTTOM = ::hx::CreateConstEnum< RelativePosition_obj >(HX_("BOTTOM",eb,92,fb,17),2);
LEFT = ::hx::CreateConstEnum< RelativePosition_obj >(HX_("LEFT",07,d0,70,32),3);
MANUAL = ::hx::CreateConstEnum< RelativePosition_obj >(HX_("MANUAL",46,da,55,6a),4);
RIGHT = ::hx::CreateConstEnum< RelativePosition_obj >(HX_("RIGHT",bc,43,52,67),1);
TOP = ::hx::CreateConstEnum< RelativePosition_obj >(HX_("TOP",75,02,40,00),0);
}


} // end namespace feathers
} // end namespace layout
