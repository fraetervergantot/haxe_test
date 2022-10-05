#include <hxcpp.h>

#ifndef INCLUDED_feathers_core__FeathersControl_StyleDefinition
#include <feathers/core/_FeathersControl/StyleDefinition.h>
#endif
namespace feathers{
namespace core{
namespace _FeathersControl{

::feathers::core::_FeathersControl::StyleDefinition StyleDefinition_obj::Name(::String name)
{
	return ::hx::CreateEnum< StyleDefinition_obj >(HX_("Name",6b,9e,d8,33),0,1)->_hx_init(0,name);
}

::feathers::core::_FeathersControl::StyleDefinition StyleDefinition_obj::NameAndState(::String name, ::Dynamic state)
{
	return ::hx::CreateEnum< StyleDefinition_obj >(HX_("NameAndState",45,7d,7e,6c),1,2)->_hx_init(0,name)->_hx_init(1,state);
}

bool StyleDefinition_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Name",6b,9e,d8,33)) { outValue = StyleDefinition_obj::Name_dyn(); return true; }
	if (inName==HX_("NameAndState",45,7d,7e,6c)) { outValue = StyleDefinition_obj::NameAndState_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StyleDefinition_obj)

int StyleDefinition_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Name",6b,9e,d8,33)) return 0;
	if (inName==HX_("NameAndState",45,7d,7e,6c)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleDefinition_obj,Name,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleDefinition_obj,NameAndState,return)

int StyleDefinition_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Name",6b,9e,d8,33)) return 1;
	if (inName==HX_("NameAndState",45,7d,7e,6c)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val StyleDefinition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Name",6b,9e,d8,33)) return Name_dyn();
	if (inName==HX_("NameAndState",45,7d,7e,6c)) return NameAndState_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String StyleDefinition_obj_sStaticFields[] = {
	HX_("Name",6b,9e,d8,33),
	HX_("NameAndState",45,7d,7e,6c),
	::String(null())
};

::hx::Class StyleDefinition_obj::__mClass;

Dynamic __Create_StyleDefinition_obj() { return new StyleDefinition_obj; }

void StyleDefinition_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.core._FeathersControl.StyleDefinition",35,10,a6,6e), ::hx::TCanCast< StyleDefinition_obj >,StyleDefinition_obj_sStaticFields,0,
	&__Create_StyleDefinition_obj, &__Create,
	&super::__SGetClass(), &CreateStyleDefinition_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StyleDefinition_obj::__GetStatic;
}

void StyleDefinition_obj::__boot()
{
}


} // end namespace feathers
} // end namespace core
} // end namespace _FeathersControl
