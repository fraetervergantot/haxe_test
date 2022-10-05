#include <hxcpp.h>

#ifndef INCLUDED_feathers_style__ClassVariantStyleProvider_StyleTarget
#include <feathers/style/_ClassVariantStyleProvider/StyleTarget.h>
#endif
namespace feathers{
namespace style{
namespace _ClassVariantStyleProvider{

::feathers::style::_ClassVariantStyleProvider::StyleTarget StyleTarget_obj::Class(::String type)
{
	return ::hx::CreateEnum< StyleTarget_obj >(HX_("Class",18,e8,85,db),0,1)->_hx_init(0,type);
}

::feathers::style::_ClassVariantStyleProvider::StyleTarget StyleTarget_obj::ClassAndVariant(::String type,::String variant)
{
	return ::hx::CreateEnum< StyleTarget_obj >(HX_("ClassAndVariant",a6,80,5d,72),1,2)->_hx_init(0,type)->_hx_init(1,variant);
}

bool StyleTarget_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Class",18,e8,85,db)) { outValue = StyleTarget_obj::Class_dyn(); return true; }
	if (inName==HX_("ClassAndVariant",a6,80,5d,72)) { outValue = StyleTarget_obj::ClassAndVariant_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StyleTarget_obj)

int StyleTarget_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Class",18,e8,85,db)) return 0;
	if (inName==HX_("ClassAndVariant",a6,80,5d,72)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleTarget_obj,Class,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleTarget_obj,ClassAndVariant,return)

int StyleTarget_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Class",18,e8,85,db)) return 1;
	if (inName==HX_("ClassAndVariant",a6,80,5d,72)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val StyleTarget_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Class",18,e8,85,db)) return Class_dyn();
	if (inName==HX_("ClassAndVariant",a6,80,5d,72)) return ClassAndVariant_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String StyleTarget_obj_sStaticFields[] = {
	HX_("Class",18,e8,85,db),
	HX_("ClassAndVariant",a6,80,5d,72),
	::String(null())
};

::hx::Class StyleTarget_obj::__mClass;

Dynamic __Create_StyleTarget_obj() { return new StyleTarget_obj; }

void StyleTarget_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.style._ClassVariantStyleProvider.StyleTarget",65,ec,3d,0a), ::hx::TCanCast< StyleTarget_obj >,StyleTarget_obj_sStaticFields,0,
	&__Create_StyleTarget_obj, &__Create,
	&super::__SGetClass(), &CreateStyleTarget_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StyleTarget_obj::__GetStatic;
}

void StyleTarget_obj::__boot()
{
}


} // end namespace feathers
} // end namespace style
} // end namespace _ClassVariantStyleProvider
