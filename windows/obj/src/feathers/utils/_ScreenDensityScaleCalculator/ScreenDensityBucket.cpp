#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils__ScreenDensityScaleCalculator_ScreenDensityBucket
#include <feathers/utils/_ScreenDensityScaleCalculator/ScreenDensityBucket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76c2531aaf839889_103_new,"feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket","new",0x27e9cbfe,"feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket.new","feathers/utils/ScreenDensityScaleCalculator.hx",103,0x4c57aa31)
namespace feathers{
namespace utils{
namespace _ScreenDensityScaleCalculator{

void ScreenDensityBucket_obj::__construct(Float density,Float scale){
            	HX_STACKFRAME(&_hx_pos_76c2531aaf839889_103_new)
HXLINE( 104)		this->density = density;
HXLINE( 105)		this->scale = scale;
            	}

Dynamic ScreenDensityBucket_obj::__CreateEmpty() { return new ScreenDensityBucket_obj; }

void *ScreenDensityBucket_obj::_hx_vtable = 0;

Dynamic ScreenDensityBucket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenDensityBucket_obj > _hx_result = new ScreenDensityBucket_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ScreenDensityBucket_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b749c78;
}


ScreenDensityBucket_obj::ScreenDensityBucket_obj()
{
}

::hx::Val ScreenDensityBucket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { return ::hx::Val( density ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenDensityBucket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenDensityBucket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("density",e8,3f,d5,42));
	outFields->push(HX_("scale",8a,ce,ce,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenDensityBucket_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(ScreenDensityBucket_obj,density),HX_("density",e8,3f,d5,42)},
	{::hx::fsFloat,(int)offsetof(ScreenDensityBucket_obj,scale),HX_("scale",8a,ce,ce,78)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenDensityBucket_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenDensityBucket_obj_sMemberFields[] = {
	HX_("density",e8,3f,d5,42),
	HX_("scale",8a,ce,ce,78),
	::String(null()) };

::hx::Class ScreenDensityBucket_obj::__mClass;

void ScreenDensityBucket_obj::__register()
{
	ScreenDensityBucket_obj _hx_dummy;
	ScreenDensityBucket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket",0c,b5,60,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenDensityBucket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenDensityBucket_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenDensityBucket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenDensityBucket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
} // end namespace _ScreenDensityScaleCalculator
