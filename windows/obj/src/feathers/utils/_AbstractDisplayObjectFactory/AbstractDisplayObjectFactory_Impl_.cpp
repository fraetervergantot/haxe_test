#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils__AbstractDisplayObjectFactory_AbstractDisplayObjectFactory_Impl_
#include <feathers/utils/_AbstractDisplayObjectFactory/AbstractDisplayObjectFactory_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9417e9f539d2deea_30_fromFunction,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_","fromFunction",0x18eed906,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_.fromFunction","feathers/utils/AbstractDisplayObjectFactory.hx",30,0x7882cc96)
HX_LOCAL_STACK_FRAME(_hx_pos_9417e9f539d2deea_41_fromClass,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_","fromClass",0x563c698a,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_.fromClass","feathers/utils/AbstractDisplayObjectFactory.hx",41,0x7882cc96)
HX_LOCAL_STACK_FRAME(_hx_pos_9417e9f539d2deea_52_fromDisplayObject,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_","fromDisplayObject",0xd4b2cdf3,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_.fromDisplayObject","feathers/utils/AbstractDisplayObjectFactory.hx",52,0x7882cc96)
namespace feathers{
namespace utils{
namespace _AbstractDisplayObjectFactory{

void AbstractDisplayObjectFactory_Impl__obj::__construct() { }

Dynamic AbstractDisplayObjectFactory_Impl__obj::__CreateEmpty() { return new AbstractDisplayObjectFactory_Impl__obj; }

void *AbstractDisplayObjectFactory_Impl__obj::_hx_vtable = 0;

Dynamic AbstractDisplayObjectFactory_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractDisplayObjectFactory_Impl__obj > _hx_result = new AbstractDisplayObjectFactory_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbstractDisplayObjectFactory_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b70be28;
}

 ::feathers::utils::DisplayObjectFactory AbstractDisplayObjectFactory_Impl__obj::fromFunction( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_9417e9f539d2deea_30_fromFunction)
HXDLIN(  30)		return ::feathers::utils::DisplayObjectFactory_obj::withFunction(func,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractDisplayObjectFactory_Impl__obj,fromFunction,return )

 ::feathers::utils::DisplayObjectFactory AbstractDisplayObjectFactory_Impl__obj::fromClass(::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_9417e9f539d2deea_41_fromClass)
HXDLIN(  41)		return ::feathers::utils::DisplayObjectFactory_obj::withClass(type,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractDisplayObjectFactory_Impl__obj,fromClass,return )

 ::feathers::utils::DisplayObjectFactory AbstractDisplayObjectFactory_Impl__obj::fromDisplayObject( ::Dynamic displayObject){
            	HX_STACKFRAME(&_hx_pos_9417e9f539d2deea_52_fromDisplayObject)
HXDLIN(  52)		return ::feathers::utils::DisplayObjectFactory_obj::withDisplayObject(displayObject,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractDisplayObjectFactory_Impl__obj,fromDisplayObject,return )


AbstractDisplayObjectFactory_Impl__obj::AbstractDisplayObjectFactory_Impl__obj()
{
}

bool AbstractDisplayObjectFactory_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromFunction") ) { outValue = fromFunction_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromDisplayObject") ) { outValue = fromDisplayObject_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbstractDisplayObjectFactory_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbstractDisplayObjectFactory_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AbstractDisplayObjectFactory_Impl__obj::__mClass;

static ::String AbstractDisplayObjectFactory_Impl__obj_sStaticFields[] = {
	HX_("fromFunction",a2,86,69,b4),
	HX_("fromClass",6e,62,e1,fc),
	HX_("fromDisplayObject",d7,4a,11,7c),
	::String(null())
};

void AbstractDisplayObjectFactory_Impl__obj::__register()
{
	AbstractDisplayObjectFactory_Impl__obj _hx_dummy;
	AbstractDisplayObjectFactory_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_",8a,ac,04,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AbstractDisplayObjectFactory_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AbstractDisplayObjectFactory_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AbstractDisplayObjectFactory_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractDisplayObjectFactory_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractDisplayObjectFactory_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
} // end namespace _AbstractDisplayObjectFactory
