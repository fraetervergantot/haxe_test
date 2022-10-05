#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4f8600453c47784c_30_get_easeNone,"motion.easing.Linear","get_easeNone",0x49c89dcd,"motion.easing.Linear.get_easeNone","motion/easing/Linear.hx",30,0xd271eb6e)
namespace motion{
namespace easing{

void Linear_obj::__construct() { }

Dynamic Linear_obj::__CreateEmpty() { return new Linear_obj; }

void *Linear_obj::_hx_vtable = 0;

Dynamic Linear_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Linear_obj > _hx_result = new Linear_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Linear_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70ec9c8a;
}

::Dynamic Linear_obj::get_easeNone(){
            	HX_GC_STACKFRAME(&_hx_pos_4f8600453c47784c_30_get_easeNone)
HXDLIN(  30)		return  ::motion::easing::LinearEaseNone_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Linear_obj,get_easeNone,return )


Linear_obj::Linear_obj()
{
}

bool Linear_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"easeNone") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_easeNone() ); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_easeNone") ) { outValue = get_easeNone_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Linear_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Linear_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Linear_obj::__mClass;

static ::String Linear_obj_sStaticFields[] = {
	HX_("get_easeNone",cf,0d,09,5e),
	::String(null())
};

void Linear_obj::__register()
{
	Linear_obj _hx_dummy;
	Linear_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Linear",30,3f,fb,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Linear_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Linear_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Linear_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Linear_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Linear_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing