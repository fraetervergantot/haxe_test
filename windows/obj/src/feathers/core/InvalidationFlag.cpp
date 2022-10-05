#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
namespace feathers{
namespace core{

::feathers::core::InvalidationFlag InvalidationFlag_obj::CUSTOM(::String value)
{
	return ::hx::CreateEnum< InvalidationFlag_obj >(HX_("CUSTOM",b1,33,15,f2),10,1)->_hx_init(0,value);
}

::feathers::core::InvalidationFlag InvalidationFlag_obj::DATA;

::feathers::core::InvalidationFlag InvalidationFlag_obj::FOCUS;

::feathers::core::InvalidationFlag InvalidationFlag_obj::LAYOUT;

::feathers::core::InvalidationFlag InvalidationFlag_obj::SCROLL;

::feathers::core::InvalidationFlag InvalidationFlag_obj::SELECTION;

::feathers::core::InvalidationFlag InvalidationFlag_obj::SIZE;

::feathers::core::InvalidationFlag InvalidationFlag_obj::SKIN;

::feathers::core::InvalidationFlag InvalidationFlag_obj::SORT;

::feathers::core::InvalidationFlag InvalidationFlag_obj::STATE;

::feathers::core::InvalidationFlag InvalidationFlag_obj::STYLES;

bool InvalidationFlag_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = InvalidationFlag_obj::CUSTOM_dyn(); return true; }
	if (inName==HX_("DATA",2a,1e,24,2d)) { outValue = InvalidationFlag_obj::DATA; return true; }
	if (inName==HX_("FOCUS",b8,97,77,82)) { outValue = InvalidationFlag_obj::FOCUS; return true; }
	if (inName==HX_("LAYOUT",aa,5a,3b,0b)) { outValue = InvalidationFlag_obj::LAYOUT; return true; }
	if (inName==HX_("SCROLL",0d,84,e7,f9)) { outValue = InvalidationFlag_obj::SCROLL; return true; }
	if (inName==HX_("SELECTION",2c,68,73,89)) { outValue = InvalidationFlag_obj::SELECTION; return true; }
	if (inName==HX_("SIZE",c1,68,14,37)) { outValue = InvalidationFlag_obj::SIZE; return true; }
	if (inName==HX_("SKIN",7d,de,15,37)) { outValue = InvalidationFlag_obj::SKIN; return true; }
	if (inName==HX_("SORT",5e,ef,18,37)) { outValue = InvalidationFlag_obj::SORT; return true; }
	if (inName==HX_("STATE",f1,ad,f9,01)) { outValue = InvalidationFlag_obj::STATE; return true; }
	if (inName==HX_("STYLES",22,92,55,c8)) { outValue = InvalidationFlag_obj::STYLES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(InvalidationFlag_obj)

int InvalidationFlag_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 10;
	if (inName==HX_("DATA",2a,1e,24,2d)) return 5;
	if (inName==HX_("FOCUS",b8,97,77,82)) return 8;
	if (inName==HX_("LAYOUT",aa,5a,3b,0b)) return 4;
	if (inName==HX_("SCROLL",0d,84,e7,f9)) return 6;
	if (inName==HX_("SELECTION",2c,68,73,89)) return 7;
	if (inName==HX_("SIZE",c1,68,14,37)) return 1;
	if (inName==HX_("SKIN",7d,de,15,37)) return 3;
	if (inName==HX_("SORT",5e,ef,18,37)) return 9;
	if (inName==HX_("STATE",f1,ad,f9,01)) return 0;
	if (inName==HX_("STYLES",22,92,55,c8)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(InvalidationFlag_obj,CUSTOM,return)

int InvalidationFlag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 1;
	if (inName==HX_("DATA",2a,1e,24,2d)) return 0;
	if (inName==HX_("FOCUS",b8,97,77,82)) return 0;
	if (inName==HX_("LAYOUT",aa,5a,3b,0b)) return 0;
	if (inName==HX_("SCROLL",0d,84,e7,f9)) return 0;
	if (inName==HX_("SELECTION",2c,68,73,89)) return 0;
	if (inName==HX_("SIZE",c1,68,14,37)) return 0;
	if (inName==HX_("SKIN",7d,de,15,37)) return 0;
	if (inName==HX_("SORT",5e,ef,18,37)) return 0;
	if (inName==HX_("STATE",f1,ad,f9,01)) return 0;
	if (inName==HX_("STYLES",22,92,55,c8)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val InvalidationFlag_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM_dyn();
	if (inName==HX_("DATA",2a,1e,24,2d)) return DATA;
	if (inName==HX_("FOCUS",b8,97,77,82)) return FOCUS;
	if (inName==HX_("LAYOUT",aa,5a,3b,0b)) return LAYOUT;
	if (inName==HX_("SCROLL",0d,84,e7,f9)) return SCROLL;
	if (inName==HX_("SELECTION",2c,68,73,89)) return SELECTION;
	if (inName==HX_("SIZE",c1,68,14,37)) return SIZE;
	if (inName==HX_("SKIN",7d,de,15,37)) return SKIN;
	if (inName==HX_("SORT",5e,ef,18,37)) return SORT;
	if (inName==HX_("STATE",f1,ad,f9,01)) return STATE;
	if (inName==HX_("STYLES",22,92,55,c8)) return STYLES;
	return super::__Field(inName,inCallProp);
}

static ::String InvalidationFlag_obj_sStaticFields[] = {
	HX_("STATE",f1,ad,f9,01),
	HX_("SIZE",c1,68,14,37),
	HX_("STYLES",22,92,55,c8),
	HX_("SKIN",7d,de,15,37),
	HX_("LAYOUT",aa,5a,3b,0b),
	HX_("DATA",2a,1e,24,2d),
	HX_("SCROLL",0d,84,e7,f9),
	HX_("SELECTION",2c,68,73,89),
	HX_("FOCUS",b8,97,77,82),
	HX_("SORT",5e,ef,18,37),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

::hx::Class InvalidationFlag_obj::__mClass;

Dynamic __Create_InvalidationFlag_obj() { return new InvalidationFlag_obj; }

void InvalidationFlag_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.core.InvalidationFlag",3b,1d,8a,be), ::hx::TCanCast< InvalidationFlag_obj >,InvalidationFlag_obj_sStaticFields,0,
	&__Create_InvalidationFlag_obj, &__Create,
	&super::__SGetClass(), &CreateInvalidationFlag_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &InvalidationFlag_obj::__GetStatic;
}

void InvalidationFlag_obj::__boot()
{
DATA = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("DATA",2a,1e,24,2d),5);
FOCUS = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("FOCUS",b8,97,77,82),8);
LAYOUT = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("LAYOUT",aa,5a,3b,0b),4);
SCROLL = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("SCROLL",0d,84,e7,f9),6);
SELECTION = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("SELECTION",2c,68,73,89),7);
SIZE = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("SIZE",c1,68,14,37),1);
SKIN = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("SKIN",7d,de,15,37),3);
SORT = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("SORT",5e,ef,18,37),9);
STATE = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("STATE",f1,ad,f9,01),0);
STYLES = ::hx::CreateConstEnum< InvalidationFlag_obj >(HX_("STYLES",22,92,55,c8),2);
}


} // end namespace feathers
} // end namespace core
