#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_IDynamicPropertyWriter
#include <openfl/net/IDynamicPropertyWriter.h>
#endif
#ifndef INCLUDED_openfl_net__ObjectEncoding_ObjectEncoding_Impl_
#include <openfl/net/_ObjectEncoding/ObjectEncoding_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3f487fe0ddab7949_69_boot,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_","boot",0xd935ef42,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_.boot","openfl/net/ObjectEncoding.hx",69,0x1f8adcbb)
HX_LOCAL_STACK_FRAME(_hx_pos_3f487fe0ddab7949_75_boot,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_","boot",0xd935ef42,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_.boot","openfl/net/ObjectEncoding.hx",75,0x1f8adcbb)
HX_LOCAL_STACK_FRAME(_hx_pos_3f487fe0ddab7949_81_boot,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_","boot",0xd935ef42,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_.boot","openfl/net/ObjectEncoding.hx",81,0x1f8adcbb)
HX_LOCAL_STACK_FRAME(_hx_pos_3f487fe0ddab7949_87_boot,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_","boot",0xd935ef42,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_.boot","openfl/net/ObjectEncoding.hx",87,0x1f8adcbb)
HX_LOCAL_STACK_FRAME(_hx_pos_3f487fe0ddab7949_98_boot,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_","boot",0xd935ef42,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_.boot","openfl/net/ObjectEncoding.hx",98,0x1f8adcbb)
namespace openfl{
namespace net{
namespace _ObjectEncoding{

void ObjectEncoding_Impl__obj::__construct() { }

Dynamic ObjectEncoding_Impl__obj::__CreateEmpty() { return new ObjectEncoding_Impl__obj; }

void *ObjectEncoding_Impl__obj::_hx_vtable = 0;

Dynamic ObjectEncoding_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ObjectEncoding_Impl__obj > _hx_result = new ObjectEncoding_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectEncoding_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c2beb76;
}

::Dynamic ObjectEncoding_Impl__obj::dynamicPropertyWriter;

int ObjectEncoding_Impl__obj::AMF0;

int ObjectEncoding_Impl__obj::AMF3;

int ObjectEncoding_Impl__obj::HXSF;

int ObjectEncoding_Impl__obj::JSON;

int ObjectEncoding_Impl__obj::DEFAULT;


ObjectEncoding_Impl__obj::ObjectEncoding_Impl__obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ObjectEncoding_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ObjectEncoding_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &ObjectEncoding_Impl__obj::dynamicPropertyWriter,HX_("dynamicPropertyWriter",c7,b4,f0,dc)},
	{::hx::fsInt,(void *) &ObjectEncoding_Impl__obj::AMF0,HX_("AMF0",16,89,31,2b)},
	{::hx::fsInt,(void *) &ObjectEncoding_Impl__obj::AMF3,HX_("AMF3",19,89,31,2b)},
	{::hx::fsInt,(void *) &ObjectEncoding_Impl__obj::HXSF,HX_("HXSF",a3,6b,da,2f)},
	{::hx::fsInt,(void *) &ObjectEncoding_Impl__obj::JSON,HX_("JSON",28,0a,29,31)},
	{::hx::fsInt,(void *) &ObjectEncoding_Impl__obj::DEFAULT,HX_("DEFAULT",a1,ac,97,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ObjectEncoding_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::dynamicPropertyWriter,"dynamicPropertyWriter");
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::AMF0,"AMF0");
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::AMF3,"AMF3");
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::HXSF,"HXSF");
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::JSON,"JSON");
	HX_MARK_MEMBER_NAME(ObjectEncoding_Impl__obj::DEFAULT,"DEFAULT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectEncoding_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::dynamicPropertyWriter,"dynamicPropertyWriter");
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::AMF0,"AMF0");
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::AMF3,"AMF3");
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::HXSF,"HXSF");
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::JSON,"JSON");
	HX_VISIT_MEMBER_NAME(ObjectEncoding_Impl__obj::DEFAULT,"DEFAULT");
};

#endif

::hx::Class ObjectEncoding_Impl__obj::__mClass;

static ::String ObjectEncoding_Impl__obj_sStaticFields[] = {
	HX_("dynamicPropertyWriter",c7,b4,f0,dc),
	HX_("AMF0",16,89,31,2b),
	HX_("AMF3",19,89,31,2b),
	HX_("HXSF",a3,6b,da,2f),
	HX_("JSON",28,0a,29,31),
	HX_("DEFAULT",a1,ac,97,1b),
	::String(null())
};

void ObjectEncoding_Impl__obj::__register()
{
	ObjectEncoding_Impl__obj _hx_dummy;
	ObjectEncoding_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net._ObjectEncoding.ObjectEncoding_Impl_",5e,cf,f1,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectEncoding_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ObjectEncoding_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ObjectEncoding_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectEncoding_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectEncoding_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectEncoding_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ObjectEncoding_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3f487fe0ddab7949_69_boot)
HXDLIN(  69)		AMF0 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3f487fe0ddab7949_75_boot)
HXDLIN(  75)		AMF3 = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3f487fe0ddab7949_81_boot)
HXDLIN(  81)		HXSF = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3f487fe0ddab7949_87_boot)
HXDLIN(  87)		JSON = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3f487fe0ddab7949_98_boot)
HXDLIN(  98)		DEFAULT = 10;
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _ObjectEncoding
