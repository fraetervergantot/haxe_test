#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseIn
#include <motion/easing/_Quart/QuartEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseInOut
#include <motion/easing/_Quart/QuartEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseOut
#include <motion/easing/_Quart/QuartEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_76ff6ce8243961ab_12_boot,"motion.easing.Quart","boot",0x2bb303cc,"motion.easing.Quart.boot","motion/easing/Quart.hx",12,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_76ff6ce8243961ab_13_boot,"motion.easing.Quart","boot",0x2bb303cc,"motion.easing.Quart.boot","motion/easing/Quart.hx",13,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_76ff6ce8243961ab_14_boot,"motion.easing.Quart","boot",0x2bb303cc,"motion.easing.Quart.boot","motion/easing/Quart.hx",14,0x09ba724a)
namespace motion{
namespace easing{

void Quart_obj::__construct() { }

Dynamic Quart_obj::__CreateEmpty() { return new Quart_obj; }

void *Quart_obj::_hx_vtable = 0;

Dynamic Quart_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Quart_obj > _hx_result = new Quart_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Quart_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15a19f16;
}

::Dynamic Quart_obj::easeIn;

::Dynamic Quart_obj::easeInOut;

::Dynamic Quart_obj::easeOut;


Quart_obj::Quart_obj()
{
}

bool Quart_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { outValue = ( easeIn ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { outValue = ( easeOut ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { outValue = ( easeInOut ); return true; }
	}
	return false;
}

bool Quart_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { easeIn=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { easeOut=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { easeInOut=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Quart_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Quart_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quart_obj::easeIn,HX_("easeIn",73,23,3a,88)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quart_obj::easeInOut,HX_("easeInOut",db,9e,bd,46)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Quart_obj::easeOut,HX_("easeOut",40,75,a9,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Quart_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quart_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Quart_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Quart_obj::easeOut,"easeOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Quart_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quart_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Quart_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Quart_obj::easeOut,"easeOut");
};

#endif

::hx::Class Quart_obj::__mClass;

static ::String Quart_obj_sStaticFields[] = {
	HX_("easeIn",73,23,3a,88),
	HX_("easeInOut",db,9e,bd,46),
	HX_("easeOut",40,75,a9,aa),
	::String(null())
};

void Quart_obj::__register()
{
	Quart_obj _hx_dummy;
	Quart_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Quart",14,07,e1,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quart_obj::__GetStatic;
	__mClass->mSetStaticField = &Quart_obj::__SetStatic;
	__mClass->mMarkFunc = Quart_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Quart_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Quart_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Quart_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quart_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quart_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Quart_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_76ff6ce8243961ab_12_boot)
HXDLIN(  12)		easeIn =  ::motion::easing::_Quart::QuartEaseIn_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_76ff6ce8243961ab_13_boot)
HXDLIN(  13)		easeInOut =  ::motion::easing::_Quart::QuartEaseInOut_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_76ff6ce8243961ab_14_boot)
HXDLIN(  14)		easeOut =  ::motion::easing::_Quart::QuartEaseOut_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
} // end namespace easing
