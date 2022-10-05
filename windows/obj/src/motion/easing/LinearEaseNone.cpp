#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e142954b5ecb85d_41_new,"motion.easing.LinearEaseNone","new",0x81a9e908,"motion.easing.LinearEaseNone.new","motion/easing/Linear.hx",41,0xd271eb6e)
HX_LOCAL_STACK_FRAME(_hx_pos_9e142954b5ecb85d_50_calculate,"motion.easing.LinearEaseNone","calculate",0x78789c0e,"motion.easing.LinearEaseNone.calculate","motion/easing/Linear.hx",50,0xd271eb6e)
HX_LOCAL_STACK_FRAME(_hx_pos_9e142954b5ecb85d_57_ease,"motion.easing.LinearEaseNone","ease",0xed0c0646,"motion.easing.LinearEaseNone.ease","motion/easing/Linear.hx",57,0xd271eb6e)
namespace motion{
namespace easing{

void LinearEaseNone_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9e142954b5ecb85d_41_new)
            	}

Dynamic LinearEaseNone_obj::__CreateEmpty() { return new LinearEaseNone_obj; }

void *LinearEaseNone_obj::_hx_vtable = 0;

Dynamic LinearEaseNone_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearEaseNone_obj > _hx_result = new LinearEaseNone_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LinearEaseNone_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ab85cd4;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_LinearEaseNone__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::LinearEaseNone_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::LinearEaseNone_obj::ease,
};

void *LinearEaseNone_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_LinearEaseNone__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float LinearEaseNone_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_9e142954b5ecb85d_50_calculate)
HXDLIN(  50)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinearEaseNone_obj,calculate,return )

Float LinearEaseNone_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_9e142954b5ecb85d_57_ease)
HXDLIN(  57)		return (((c * t) / d) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(LinearEaseNone_obj,ease,return )


::hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__new() {
	::hx::ObjectPtr< LinearEaseNone_obj > __this = new LinearEaseNone_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LinearEaseNone_obj *__this = (LinearEaseNone_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearEaseNone_obj), false, "motion.easing.LinearEaseNone"));
	*(void **)__this = LinearEaseNone_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LinearEaseNone_obj::LinearEaseNone_obj()
{
}

::hx::Val LinearEaseNone_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *LinearEaseNone_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LinearEaseNone_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearEaseNone_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class LinearEaseNone_obj::__mClass;

void LinearEaseNone_obj::__register()
{
	LinearEaseNone_obj _hx_dummy;
	LinearEaseNone_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.LinearEaseNone",16,05,b7,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearEaseNone_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearEaseNone_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearEaseNone_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearEaseNone_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
