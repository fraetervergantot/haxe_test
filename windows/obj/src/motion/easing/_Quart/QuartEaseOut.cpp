#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseOut
#include <motion/easing/_Quart/QuartEaseOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b34997a155fc72d5_81_new,"motion.easing._Quart.QuartEaseOut","new",0x4a264016,"motion.easing._Quart.QuartEaseOut.new","motion/easing/Quart.hx",81,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_b34997a155fc72d5_90_calculate,"motion.easing._Quart.QuartEaseOut","calculate",0xd77cb19c,"motion.easing._Quart.QuartEaseOut.calculate","motion/easing/Quart.hx",90,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_b34997a155fc72d5_97_ease,"motion.easing._Quart.QuartEaseOut","ease",0x915bdb78,"motion.easing._Quart.QuartEaseOut.ease","motion/easing/Quart.hx",97,0x09ba724a)
namespace motion{
namespace easing{
namespace _Quart{

void QuartEaseOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b34997a155fc72d5_81_new)
            	}

Dynamic QuartEaseOut_obj::__CreateEmpty() { return new QuartEaseOut_obj; }

void *QuartEaseOut_obj::_hx_vtable = 0;

Dynamic QuartEaseOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuartEaseOut_obj > _hx_result = new QuartEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuartEaseOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f0c5ae2;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Quart_QuartEaseOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Quart::QuartEaseOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Quart::QuartEaseOut_obj::ease,
};

void *QuartEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Quart_QuartEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuartEaseOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_b34997a155fc72d5_90_calculate)
HXDLIN(  90)		k = (k - ( (Float)(1) ));
HXDLIN(  90)		return -(((((k * k) * k) * k) - ( (Float)(1) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseOut_obj,calculate,return )

Float QuartEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_b34997a155fc72d5_97_ease)
HXDLIN(  97)		t = ((t / d) - ( (Float)(1) ));
HXDLIN(  97)		return ((-(c) * ((((t * t) * t) * t) - ( (Float)(1) ))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseOut_obj,ease,return )


::hx::ObjectPtr< QuartEaseOut_obj > QuartEaseOut_obj::__new() {
	::hx::ObjectPtr< QuartEaseOut_obj > __this = new QuartEaseOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< QuartEaseOut_obj > QuartEaseOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	QuartEaseOut_obj *__this = (QuartEaseOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuartEaseOut_obj), false, "motion.easing._Quart.QuartEaseOut"));
	*(void **)__this = QuartEaseOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuartEaseOut_obj::QuartEaseOut_obj()
{
}

::hx::Val QuartEaseOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *QuartEaseOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuartEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuartEaseOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class QuartEaseOut_obj::__mClass;

void QuartEaseOut_obj::__register()
{
	QuartEaseOut_obj _hx_dummy;
	QuartEaseOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Quart.QuartEaseOut",24,3d,1b,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuartEaseOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuartEaseOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuartEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuartEaseOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Quart
