#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseIn
#include <motion/easing/_Quart/QuartEaseIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_326f2b2d167271fc_23_new,"motion.easing._Quart.QuartEaseIn","new",0xfab13881,"motion.easing._Quart.QuartEaseIn.new","motion/easing/Quart.hx",23,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_326f2b2d167271fc_32_calculate,"motion.easing._Quart.QuartEaseIn","calculate",0xb80a4c47,"motion.easing._Quart.QuartEaseIn.calculate","motion/easing/Quart.hx",32,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_326f2b2d167271fc_39_ease,"motion.easing._Quart.QuartEaseIn","ease",0x5a6a40ad,"motion.easing._Quart.QuartEaseIn.ease","motion/easing/Quart.hx",39,0x09ba724a)
namespace motion{
namespace easing{
namespace _Quart{

void QuartEaseIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_326f2b2d167271fc_23_new)
            	}

Dynamic QuartEaseIn_obj::__CreateEmpty() { return new QuartEaseIn_obj; }

void *QuartEaseIn_obj::_hx_vtable = 0;

Dynamic QuartEaseIn_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuartEaseIn_obj > _hx_result = new QuartEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuartEaseIn_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d574811;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Quart_QuartEaseIn__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Quart::QuartEaseIn_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Quart::QuartEaseIn_obj::ease,
};

void *QuartEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Quart_QuartEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuartEaseIn_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_326f2b2d167271fc_32_calculate)
HXDLIN(  32)		return (((k * k) * k) * k);
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseIn_obj,calculate,return )

Float QuartEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_326f2b2d167271fc_39_ease)
HXDLIN(  39)		t = (t / d);
HXDLIN(  39)		return (((((c * t) * t) * t) * t) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseIn_obj,ease,return )


::hx::ObjectPtr< QuartEaseIn_obj > QuartEaseIn_obj::__new() {
	::hx::ObjectPtr< QuartEaseIn_obj > __this = new QuartEaseIn_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< QuartEaseIn_obj > QuartEaseIn_obj::__alloc(::hx::Ctx *_hx_ctx) {
	QuartEaseIn_obj *__this = (QuartEaseIn_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuartEaseIn_obj), false, "motion.easing._Quart.QuartEaseIn"));
	*(void **)__this = QuartEaseIn_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuartEaseIn_obj::QuartEaseIn_obj()
{
}

::hx::Val QuartEaseIn_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *QuartEaseIn_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuartEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String QuartEaseIn_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class QuartEaseIn_obj::__mClass;

void QuartEaseIn_obj::__register()
{
	QuartEaseIn_obj _hx_dummy;
	QuartEaseIn_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Quart.QuartEaseIn",0f,e4,b0,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuartEaseIn_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuartEaseIn_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuartEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuartEaseIn_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Quart
