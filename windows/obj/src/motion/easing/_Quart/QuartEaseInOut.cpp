#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Quart_QuartEaseInOut
#include <motion/easing/_Quart/QuartEaseInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c25b3bb0b05b7bd4_50_new,"motion.easing._Quart.QuartEaseInOut","new",0xff001431,"motion.easing._Quart.QuartEaseInOut.new","motion/easing/Quart.hx",50,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_c25b3bb0b05b7bd4_57_calculate,"motion.easing._Quart.QuartEaseInOut","calculate",0x5e310bf7,"motion.easing._Quart.QuartEaseInOut.calculate","motion/easing/Quart.hx",57,0x09ba724a)
HX_LOCAL_STACK_FRAME(_hx_pos_c25b3bb0b05b7bd4_65_ease,"motion.easing._Quart.QuartEaseInOut","ease",0x1b1b9efd,"motion.easing._Quart.QuartEaseInOut.ease","motion/easing/Quart.hx",65,0x09ba724a)
namespace motion{
namespace easing{
namespace _Quart{

void QuartEaseInOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c25b3bb0b05b7bd4_50_new)
            	}

Dynamic QuartEaseInOut_obj::__CreateEmpty() { return new QuartEaseInOut_obj; }

void *QuartEaseInOut_obj::_hx_vtable = 0;

Dynamic QuartEaseInOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuartEaseInOut_obj > _hx_result = new QuartEaseInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuartEaseInOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15deb0fd;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Quart_QuartEaseInOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Quart::QuartEaseInOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Quart::QuartEaseInOut_obj::ease,
};

void *QuartEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Quart_QuartEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuartEaseInOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_c25b3bb0b05b7bd4_57_calculate)
HXLINE(  59)		k = (k * ( (Float)(2) ));
HXDLIN(  59)		if ((k < 1)) {
HXLINE(  59)			return ((((((Float)0.5) * k) * k) * k) * k);
            		}
HXLINE(  60)		k = (k - ( (Float)(2) ));
HXDLIN(  60)		return (((Float)-0.5) * ((((k * k) * k) * k) - ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseInOut_obj,calculate,return )

Float QuartEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_c25b3bb0b05b7bd4_65_ease)
HXLINE(  67)		t = (t / (d / ( (Float)(2) )));
HXDLIN(  67)		if ((t < 1)) {
HXLINE(  68)			return ((((((c / ( (Float)(2) )) * t) * t) * t) * t) + b);
            		}
HXLINE(  70)		t = (t - ( (Float)(2) ));
HXDLIN(  70)		return (((-(c) / ( (Float)(2) )) * ((((t * t) * t) * t) - ( (Float)(2) ))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseInOut_obj,ease,return )


::hx::ObjectPtr< QuartEaseInOut_obj > QuartEaseInOut_obj::__new() {
	::hx::ObjectPtr< QuartEaseInOut_obj > __this = new QuartEaseInOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< QuartEaseInOut_obj > QuartEaseInOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	QuartEaseInOut_obj *__this = (QuartEaseInOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuartEaseInOut_obj), false, "motion.easing._Quart.QuartEaseInOut"));
	*(void **)__this = QuartEaseInOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuartEaseInOut_obj::QuartEaseInOut_obj()
{
}

::hx::Val QuartEaseInOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *QuartEaseInOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuartEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuartEaseInOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class QuartEaseInOut_obj::__mClass;

void QuartEaseInOut_obj::__register()
{
	QuartEaseInOut_obj _hx_dummy;
	QuartEaseInOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Quart.QuartEaseInOut",bf,27,1c,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuartEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuartEaseInOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuartEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuartEaseInOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Quart
