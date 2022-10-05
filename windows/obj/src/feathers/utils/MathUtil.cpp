#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_utils_MathUtil
#include <feathers/utils/MathUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9fcd50eb90d8996a_24_roundDownToNearest,"feathers.utils.MathUtil","roundDownToNearest",0xc28c5f5c,"feathers.utils.MathUtil.roundDownToNearest","feathers/utils/MathUtil.hx",24,0xc9a89ab7)
HX_LOCAL_STACK_FRAME(_hx_pos_9fcd50eb90d8996a_46_roundUpToNearest,"feathers.utils.MathUtil","roundUpToNearest",0x9e586583,"feathers.utils.MathUtil.roundUpToNearest","feathers/utils/MathUtil.hx",46,0xc9a89ab7)
HX_LOCAL_STACK_FRAME(_hx_pos_9fcd50eb90d8996a_68_roundToNearest,"feathers.utils.MathUtil","roundToNearest",0x369e3a9e,"feathers.utils.MathUtil.roundToNearest","feathers/utils/MathUtil.hx",68,0xc9a89ab7)
HX_LOCAL_STACK_FRAME(_hx_pos_9fcd50eb90d8996a_85_roundToPrecision,"feathers.utils.MathUtil","roundToPrecision",0x4899077e,"feathers.utils.MathUtil.roundToPrecision","feathers/utils/MathUtil.hx",85,0xc9a89ab7)
HX_LOCAL_STACK_FRAME(_hx_pos_9fcd50eb90d8996a_102_fuzzyEquals,"feathers.utils.MathUtil","fuzzyEquals",0x2e1e6560,"feathers.utils.MathUtil.fuzzyEquals","feathers/utils/MathUtil.hx",102,0xc9a89ab7)
namespace feathers{
namespace utils{

void MathUtil_obj::__construct() { }

Dynamic MathUtil_obj::__CreateEmpty() { return new MathUtil_obj; }

void *MathUtil_obj::_hx_vtable = 0;

Dynamic MathUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MathUtil_obj > _hx_result = new MathUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x322721cb;
}

Float MathUtil_obj::roundDownToNearest(Float number,::hx::Null< Float >  __o_nearest){
            		Float nearest = __o_nearest.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_9fcd50eb90d8996a_24_roundDownToNearest)
HXLINE(  25)		if ((nearest == 0)) {
HXLINE(  26)			return number;
            		}
HXLINE(  28)		return (::Math_obj::ffloor(::feathers::utils::MathUtil_obj::roundToPrecision((number / nearest),10)) * nearest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundDownToNearest,return )

Float MathUtil_obj::roundUpToNearest(Float number,::hx::Null< Float >  __o_nearest){
            		Float nearest = __o_nearest.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_9fcd50eb90d8996a_46_roundUpToNearest)
HXLINE(  47)		if ((nearest == 0)) {
HXLINE(  48)			return number;
            		}
HXLINE(  50)		return (::Math_obj::fceil(::feathers::utils::MathUtil_obj::roundToPrecision((number / nearest),10)) * nearest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundUpToNearest,return )

Float MathUtil_obj::roundToNearest(Float number,::hx::Null< Float >  __o_nearest){
            		Float nearest = __o_nearest.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_9fcd50eb90d8996a_68_roundToNearest)
HXLINE(  69)		if ((nearest == 0)) {
HXLINE(  70)			return number;
            		}
HXLINE(  72)		return (::Math_obj::fround(::feathers::utils::MathUtil_obj::roundToPrecision((number / nearest),10)) * nearest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundToNearest,return )

Float MathUtil_obj::roundToPrecision(Float number,::hx::Null< int >  __o_precision){
            		int precision = __o_precision.Default(0);
            	HX_STACKFRAME(&_hx_pos_9fcd50eb90d8996a_85_roundToPrecision)
HXLINE(  86)		Float decimalPlaces = ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ));
HXLINE(  87)		return (::Math_obj::fround((decimalPlaces * number)) / decimalPlaces);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,roundToPrecision,return )

bool MathUtil_obj::fuzzyEquals(Float n1,Float n2,::hx::Null< Float >  __o_maxDifference){
            		Float maxDifference = __o_maxDifference.Default(((Float)0.000001));
            	HX_STACKFRAME(&_hx_pos_9fcd50eb90d8996a_102_fuzzyEquals)
HXDLIN( 102)		return (::Math_obj::abs((n1 - n2)) <= maxDifference);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MathUtil_obj,fuzzyEquals,return )


MathUtil_obj::MathUtil_obj()
{
}

bool MathUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fuzzyEquals") ) { outValue = fuzzyEquals_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roundToNearest") ) { outValue = roundToNearest_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"roundUpToNearest") ) { outValue = roundUpToNearest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"roundToPrecision") ) { outValue = roundToPrecision_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"roundDownToNearest") ) { outValue = roundDownToNearest_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MathUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MathUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MathUtil_obj::__mClass;

static ::String MathUtil_obj_sStaticFields[] = {
	HX_("roundDownToNearest",33,da,c4,d8),
	HX_("roundUpToNearest",9a,ac,df,0e),
	HX_("roundToNearest",f5,bd,fc,af),
	HX_("roundToPrecision",95,4e,20,b9),
	HX_("fuzzyEquals",a9,75,ea,9f),
	::String(null())
};

void MathUtil_obj::__register()
{
	MathUtil_obj _hx_dummy;
	MathUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.MathUtil",a5,d9,db,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MathUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MathUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
