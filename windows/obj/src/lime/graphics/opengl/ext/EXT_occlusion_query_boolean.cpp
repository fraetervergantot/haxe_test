#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_occlusion_query_boolean
#include <lime/graphics/opengl/ext/EXT_occlusion_query_boolean.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f43e8bd3fec2f24b_4_new,"lime.graphics.opengl.ext.EXT_occlusion_query_boolean","new",0x6c68e891,"lime.graphics.opengl.ext.EXT_occlusion_query_boolean.new","lime/graphics/opengl/ext/EXT_occlusion_query_boolean.hx",4,0x83217821)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_occlusion_query_boolean_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f43e8bd3fec2f24b_4_new)
HXLINE(  10)		this->QUERY_RESULT_AVAILABLE_EXT = 34919;
HXLINE(   9)		this->QUERY_RESULT_EXT = 34918;
HXLINE(   8)		this->CURRENT_QUERY_EXT = 34917;
HXLINE(   7)		this->ANY_SAMPLES_PASSED_CONSERVATIVE_EXT = 36202;
HXLINE(   6)		this->ANY_SAMPLES_PASSED_EXT = 35887;
            	}

Dynamic EXT_occlusion_query_boolean_obj::__CreateEmpty() { return new EXT_occlusion_query_boolean_obj; }

void *EXT_occlusion_query_boolean_obj::_hx_vtable = 0;

Dynamic EXT_occlusion_query_boolean_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_occlusion_query_boolean_obj > _hx_result = new EXT_occlusion_query_boolean_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_occlusion_query_boolean_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ceab6cf;
}


EXT_occlusion_query_boolean_obj::EXT_occlusion_query_boolean_obj()
{
}

::hx::Val EXT_occlusion_query_boolean_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_EXT") ) { return ::hx::Val( QUERY_RESULT_EXT ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY_EXT") ) { return ::hx::Val( CURRENT_QUERY_EXT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_EXT") ) { return ::hx::Val( ANY_SAMPLES_PASSED_EXT ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE_EXT") ) { return ::hx::Val( QUERY_RESULT_AVAILABLE_EXT ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE_EXT") ) { return ::hx::Val( ANY_SAMPLES_PASSED_CONSERVATIVE_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_occlusion_query_boolean_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_EXT") ) { QUERY_RESULT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CURRENT_QUERY_EXT") ) { CURRENT_QUERY_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_EXT") ) { ANY_SAMPLES_PASSED_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"QUERY_RESULT_AVAILABLE_EXT") ) { QUERY_RESULT_AVAILABLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"ANY_SAMPLES_PASSED_CONSERVATIVE_EXT") ) { ANY_SAMPLES_PASSED_CONSERVATIVE_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_occlusion_query_boolean_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ANY_SAMPLES_PASSED_EXT",9b,bc,90,07));
	outFields->push(HX_("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT",55,2b,65,0d));
	outFields->push(HX_("CURRENT_QUERY_EXT",84,a9,16,2f));
	outFields->push(HX_("QUERY_RESULT_EXT",16,d8,ee,c8));
	outFields->push(HX_("QUERY_RESULT_AVAILABLE_EXT",80,9b,0b,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_occlusion_query_boolean_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,ANY_SAMPLES_PASSED_EXT),HX_("ANY_SAMPLES_PASSED_EXT",9b,bc,90,07)},
	{::hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,ANY_SAMPLES_PASSED_CONSERVATIVE_EXT),HX_("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT",55,2b,65,0d)},
	{::hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,CURRENT_QUERY_EXT),HX_("CURRENT_QUERY_EXT",84,a9,16,2f)},
	{::hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,QUERY_RESULT_EXT),HX_("QUERY_RESULT_EXT",16,d8,ee,c8)},
	{::hx::fsInt,(int)offsetof(EXT_occlusion_query_boolean_obj,QUERY_RESULT_AVAILABLE_EXT),HX_("QUERY_RESULT_AVAILABLE_EXT",80,9b,0b,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_occlusion_query_boolean_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_occlusion_query_boolean_obj_sMemberFields[] = {
	HX_("ANY_SAMPLES_PASSED_EXT",9b,bc,90,07),
	HX_("ANY_SAMPLES_PASSED_CONSERVATIVE_EXT",55,2b,65,0d),
	HX_("CURRENT_QUERY_EXT",84,a9,16,2f),
	HX_("QUERY_RESULT_EXT",16,d8,ee,c8),
	HX_("QUERY_RESULT_AVAILABLE_EXT",80,9b,0b,21),
	::String(null()) };

::hx::Class EXT_occlusion_query_boolean_obj::__mClass;

void EXT_occlusion_query_boolean_obj::__register()
{
	EXT_occlusion_query_boolean_obj _hx_dummy;
	EXT_occlusion_query_boolean_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_occlusion_query_boolean",1f,4c,ab,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_occlusion_query_boolean_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_occlusion_query_boolean_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_occlusion_query_boolean_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_occlusion_query_boolean_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext