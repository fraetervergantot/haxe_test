#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_separate_shader_objects
#include <lime/graphics/opengl/ext/EXT_separate_shader_objects.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_daff336b6d887460_4_new,"lime.graphics.opengl.ext.EXT_separate_shader_objects","new",0xf8fc06a8,"lime.graphics.opengl.ext.EXT_separate_shader_objects.new","lime/graphics/opengl/ext/EXT_separate_shader_objects.hx",4,0x8cf1e9ea)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_separate_shader_objects_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_daff336b6d887460_4_new)
HXLINE(  11)		this->PROGRAM_PIPELINE_BINDING_EXT = 33370;
HXLINE(  10)		this->ACTIVE_PROGRAM_EXT = 33369;
HXLINE(   9)		this->PROGRAM_SEPARABLE_EXT = 33368;
HXLINE(   8)		this->ALL_SHADER_BITS_EXT = -1;
HXLINE(   7)		this->FRAGMENT_SHADER_BIT_EXT = 2;
HXLINE(   6)		this->VERTEX_SHADER_BIT_EXT = 1;
            	}

Dynamic EXT_separate_shader_objects_obj::__CreateEmpty() { return new EXT_separate_shader_objects_obj; }

void *EXT_separate_shader_objects_obj::_hx_vtable = 0;

Dynamic EXT_separate_shader_objects_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_separate_shader_objects_obj > _hx_result = new EXT_separate_shader_objects_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_separate_shader_objects_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x63413d66;
}


EXT_separate_shader_objects_obj::EXT_separate_shader_objects_obj()
{
}

::hx::Val EXT_separate_shader_objects_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { return ::hx::Val( ACTIVE_PROGRAM_EXT ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { return ::hx::Val( ALL_SHADER_BITS_EXT ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { return ::hx::Val( VERTEX_SHADER_BIT_EXT ); }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { return ::hx::Val( PROGRAM_SEPARABLE_EXT ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { return ::hx::Val( FRAGMENT_SHADER_BIT_EXT ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { return ::hx::Val( PROGRAM_PIPELINE_BINDING_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_separate_shader_objects_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"ACTIVE_PROGRAM_EXT") ) { ACTIVE_PROGRAM_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALL_SHADER_BITS_EXT") ) { ALL_SHADER_BITS_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER_BIT_EXT") ) { VERTEX_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PROGRAM_SEPARABLE_EXT") ) { PROGRAM_SEPARABLE_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER_BIT_EXT") ) { FRAGMENT_SHADER_BIT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"PROGRAM_PIPELINE_BINDING_EXT") ) { PROGRAM_PIPELINE_BINDING_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_separate_shader_objects_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("VERTEX_SHADER_BIT_EXT",10,40,b7,ca));
	outFields->push(HX_("FRAGMENT_SHADER_BIT_EXT",24,31,1d,c4));
	outFields->push(HX_("ALL_SHADER_BITS_EXT",a4,d4,8b,99));
	outFields->push(HX_("PROGRAM_SEPARABLE_EXT",b0,c0,bd,28));
	outFields->push(HX_("ACTIVE_PROGRAM_EXT",ad,3a,a9,18));
	outFields->push(HX_("PROGRAM_PIPELINE_BINDING_EXT",45,a0,52,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_separate_shader_objects_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,VERTEX_SHADER_BIT_EXT),HX_("VERTEX_SHADER_BIT_EXT",10,40,b7,ca)},
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,FRAGMENT_SHADER_BIT_EXT),HX_("FRAGMENT_SHADER_BIT_EXT",24,31,1d,c4)},
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ALL_SHADER_BITS_EXT),HX_("ALL_SHADER_BITS_EXT",a4,d4,8b,99)},
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_SEPARABLE_EXT),HX_("PROGRAM_SEPARABLE_EXT",b0,c0,bd,28)},
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,ACTIVE_PROGRAM_EXT),HX_("ACTIVE_PROGRAM_EXT",ad,3a,a9,18)},
	{::hx::fsInt,(int)offsetof(EXT_separate_shader_objects_obj,PROGRAM_PIPELINE_BINDING_EXT),HX_("PROGRAM_PIPELINE_BINDING_EXT",45,a0,52,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_separate_shader_objects_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_separate_shader_objects_obj_sMemberFields[] = {
	HX_("VERTEX_SHADER_BIT_EXT",10,40,b7,ca),
	HX_("FRAGMENT_SHADER_BIT_EXT",24,31,1d,c4),
	HX_("ALL_SHADER_BITS_EXT",a4,d4,8b,99),
	HX_("PROGRAM_SEPARABLE_EXT",b0,c0,bd,28),
	HX_("ACTIVE_PROGRAM_EXT",ad,3a,a9,18),
	HX_("PROGRAM_PIPELINE_BINDING_EXT",45,a0,52,d3),
	::String(null()) };

::hx::Class EXT_separate_shader_objects_obj::__mClass;

void EXT_separate_shader_objects_obj::__register()
{
	EXT_separate_shader_objects_obj _hx_dummy;
	EXT_separate_shader_objects_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_separate_shader_objects",b6,d2,01,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_separate_shader_objects_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_separate_shader_objects_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_separate_shader_objects_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_separate_shader_objects_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
