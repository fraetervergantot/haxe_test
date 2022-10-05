#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectRecycler
#include <feathers/utils/DisplayObjectRecycler.h>
#endif
#ifndef INCLUDED_feathers_utils__AbstractDisplayObjectRecycler_AbstractDisplayObjectRecycler_Impl_
#include <feathers/utils/_AbstractDisplayObjectRecycler/AbstractDisplayObjectRecycler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6ec731ea29a40a9e_30_fromFunction,"feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_","fromFunction",0x41835606,"feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_.fromFunction","feathers/utils/AbstractDisplayObjectRecycler.hx",30,0x7320747d)
HX_LOCAL_STACK_FRAME(_hx_pos_6ec731ea29a40a9e_41_fromClass,"feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_","fromClass",0xf2a7cc8a,"feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_.fromClass","feathers/utils/AbstractDisplayObjectRecycler.hx",41,0x7320747d)
namespace feathers{
namespace utils{
namespace _AbstractDisplayObjectRecycler{

void AbstractDisplayObjectRecycler_Impl__obj::__construct() { }

Dynamic AbstractDisplayObjectRecycler_Impl__obj::__CreateEmpty() { return new AbstractDisplayObjectRecycler_Impl__obj; }

void *AbstractDisplayObjectRecycler_Impl__obj::_hx_vtable = 0;

Dynamic AbstractDisplayObjectRecycler_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractDisplayObjectRecycler_Impl__obj > _hx_result = new AbstractDisplayObjectRecycler_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbstractDisplayObjectRecycler_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6122a866;
}

 ::feathers::utils::DisplayObjectRecycler AbstractDisplayObjectRecycler_Impl__obj::fromFunction( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_6ec731ea29a40a9e_30_fromFunction)
HXDLIN(  30)		return ::feathers::utils::DisplayObjectRecycler_obj::withFunction(func,null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractDisplayObjectRecycler_Impl__obj,fromFunction,return )

 ::feathers::utils::DisplayObjectRecycler AbstractDisplayObjectRecycler_Impl__obj::fromClass(::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_6ec731ea29a40a9e_41_fromClass)
HXDLIN(  41)		return ::feathers::utils::DisplayObjectRecycler_obj::withClass(type,null(),null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractDisplayObjectRecycler_Impl__obj,fromClass,return )


AbstractDisplayObjectRecycler_Impl__obj::AbstractDisplayObjectRecycler_Impl__obj()
{
}

bool AbstractDisplayObjectRecycler_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromFunction") ) { outValue = fromFunction_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbstractDisplayObjectRecycler_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbstractDisplayObjectRecycler_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AbstractDisplayObjectRecycler_Impl__obj::__mClass;

static ::String AbstractDisplayObjectRecycler_Impl__obj_sStaticFields[] = {
	HX_("fromFunction",a2,86,69,b4),
	HX_("fromClass",6e,62,e1,fc),
	::String(null())
};

void AbstractDisplayObjectRecycler_Impl__obj::__register()
{
	AbstractDisplayObjectRecycler_Impl__obj _hx_dummy;
	AbstractDisplayObjectRecycler_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_",8a,4f,e6,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AbstractDisplayObjectRecycler_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AbstractDisplayObjectRecycler_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AbstractDisplayObjectRecycler_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractDisplayObjectRecycler_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractDisplayObjectRecycler_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
} // end namespace _AbstractDisplayObjectRecycler
