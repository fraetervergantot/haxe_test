#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_DeviceUtil
#include <feathers/utils/DeviceUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21973c3898384ca5_37_isDesktop,"feathers.utils.DeviceUtil","isDesktop",0x07dfc317,"feathers.utils.DeviceUtil.isDesktop","feathers/utils/DeviceUtil.hx",37,0x6bcc8469)
HX_LOCAL_STACK_FRAME(_hx_pos_21973c3898384ca5_57_isMobile,"feathers.utils.DeviceUtil","isMobile",0x85f76f87,"feathers.utils.DeviceUtil.isMobile","feathers/utils/DeviceUtil.hx",57,0x6bcc8469)
HX_LOCAL_STACK_FRAME(_hx_pos_21973c3898384ca5_25_boot,"feathers.utils.DeviceUtil","boot",0x4bc9024d,"feathers.utils.DeviceUtil.boot","feathers/utils/DeviceUtil.hx",25,0x6bcc8469)
HX_LOCAL_STACK_FRAME(_hx_pos_21973c3898384ca5_26_boot,"feathers.utils.DeviceUtil","boot",0x4bc9024d,"feathers.utils.DeviceUtil.boot","feathers/utils/DeviceUtil.hx",26,0x6bcc8469)
namespace feathers{
namespace utils{

void DeviceUtil_obj::__construct() { }

Dynamic DeviceUtil_obj::__CreateEmpty() { return new DeviceUtil_obj; }

void *DeviceUtil_obj::_hx_vtable = 0;

Dynamic DeviceUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DeviceUtil_obj > _hx_result = new DeviceUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DeviceUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7177b5d9;
}

::String DeviceUtil_obj::MEDIA_QUERY_DESKTOP;

::String DeviceUtil_obj::MEDIA_QUERY_MOBILE;

bool DeviceUtil_obj::isDesktop(){
            	HX_STACKFRAME(&_hx_pos_21973c3898384ca5_37_isDesktop)
HXDLIN(  37)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DeviceUtil_obj,isDesktop,return )

bool DeviceUtil_obj::isMobile(){
            	HX_STACKFRAME(&_hx_pos_21973c3898384ca5_57_isMobile)
HXDLIN(  57)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DeviceUtil_obj,isMobile,return )


DeviceUtil_obj::DeviceUtil_obj()
{
}

bool DeviceUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isMobile") ) { outValue = isMobile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDesktop") ) { outValue = isDesktop_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MEDIA_QUERY_MOBILE") ) { outValue = ( MEDIA_QUERY_MOBILE ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MEDIA_QUERY_DESKTOP") ) { outValue = ( MEDIA_QUERY_DESKTOP ); return true; }
	}
	return false;
}

bool DeviceUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"MEDIA_QUERY_MOBILE") ) { MEDIA_QUERY_MOBILE=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MEDIA_QUERY_DESKTOP") ) { MEDIA_QUERY_DESKTOP=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DeviceUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DeviceUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DeviceUtil_obj::MEDIA_QUERY_DESKTOP,HX_("MEDIA_QUERY_DESKTOP",2a,5a,e6,89)},
	{::hx::fsString,(void *) &DeviceUtil_obj::MEDIA_QUERY_MOBILE,HX_("MEDIA_QUERY_MOBILE",b4,ff,8e,48)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DeviceUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DeviceUtil_obj::MEDIA_QUERY_DESKTOP,"MEDIA_QUERY_DESKTOP");
	HX_MARK_MEMBER_NAME(DeviceUtil_obj::MEDIA_QUERY_MOBILE,"MEDIA_QUERY_MOBILE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DeviceUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DeviceUtil_obj::MEDIA_QUERY_DESKTOP,"MEDIA_QUERY_DESKTOP");
	HX_VISIT_MEMBER_NAME(DeviceUtil_obj::MEDIA_QUERY_MOBILE,"MEDIA_QUERY_MOBILE");
};

#endif

::hx::Class DeviceUtil_obj::__mClass;

static ::String DeviceUtil_obj_sStaticFields[] = {
	HX_("MEDIA_QUERY_DESKTOP",2a,5a,e6,89),
	HX_("MEDIA_QUERY_MOBILE",b4,ff,8e,48),
	HX_("isDesktop",12,43,93,22),
	HX_("isMobile",ec,47,e1,17),
	::String(null())
};

void DeviceUtil_obj::__register()
{
	DeviceUtil_obj _hx_dummy;
	DeviceUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.DeviceUtil",33,98,ad,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DeviceUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &DeviceUtil_obj::__SetStatic;
	__mClass->mMarkFunc = DeviceUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DeviceUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DeviceUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DeviceUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DeviceUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DeviceUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DeviceUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_21973c3898384ca5_25_boot)
HXDLIN(  25)		MEDIA_QUERY_DESKTOP = HX_("screen and (hover: hover) and (pointer: fine)",ef,39,42,76);
            	}
{
            	HX_STACKFRAME(&_hx_pos_21973c3898384ca5_26_boot)
HXDLIN(  26)		MEDIA_QUERY_MOBILE = HX_("screen and (hover: none) and (pointer: coarse)",d0,85,18,27);
            	}
}

} // end namespace feathers
} // end namespace utils
