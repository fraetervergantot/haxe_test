#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_ComponentPath
#include <motion/_MotionPath/ComponentPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_RotationPath
#include <motion/_MotionPath/RotationPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1630a997d07a1e21_482_new,"motion._MotionPath.RotationPath","new",0xce3c6c81,"motion._MotionPath.RotationPath.new","motion/MotionPath.hx",482,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_1630a997d07a1e21_508_calculate,"motion._MotionPath.RotationPath","calculate",0xa1f48047,"motion._MotionPath.RotationPath.calculate","motion/MotionPath.hx",508,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_1630a997d07a1e21_528_get_start,"motion._MotionPath.RotationPath","get_start",0x643ebb9a,"motion._MotionPath.RotationPath.get_start","motion/MotionPath.hx",528,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_1630a997d07a1e21_535_set_start,"motion._MotionPath.RotationPath","set_start",0x478fa7a6,"motion._MotionPath.RotationPath.set_start","motion/MotionPath.hx",535,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_1630a997d07a1e21_542_get_end,"motion._MotionPath.RotationPath","get_end",0x8b618d13,"motion._MotionPath.RotationPath.get_end","motion/MotionPath.hx",542,0x95e57daa)
namespace motion{
namespace _MotionPath{

void RotationPath_obj::__construct( ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y){
            	HX_STACKFRAME(&_hx_pos_1630a997d07a1e21_482_new)
HXLINE( 491)		this->step = ((Float)0.01);
HXLINE( 498)		this->_x = x;
HXLINE( 499)		this->_y = y;
HXLINE( 501)		this->offset = ( (Float)(0) );
HXLINE( 503)		this->set_start(this->calculate(((Float)0.0)));
            	}

Dynamic RotationPath_obj::__CreateEmpty() { return new RotationPath_obj; }

void *RotationPath_obj::_hx_vtable = 0;

Dynamic RotationPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RotationPath_obj > _hx_result = new RotationPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RotationPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25b496df;
}

static ::motion::IComponentPath_obj _hx_motion__MotionPath_RotationPath__hx_motion_IComponentPath= {
	( Float (::hx::Object::*)())&::motion::_MotionPath::RotationPath_obj::get_start,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::RotationPath_obj::set_start,
	( Float (::hx::Object::*)())&::motion::_MotionPath::RotationPath_obj::get_end,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::RotationPath_obj::calculate,
};

void *RotationPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe9f30fef: return &_hx_motion__MotionPath_RotationPath__hx_motion_IComponentPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float RotationPath_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_1630a997d07a1e21_508_calculate)
HXLINE( 510)		Float dX = this->_x->calculate(k);
HXDLIN( 510)		Float dX1 = (dX - this->_x->calculate((k + this->step)));
HXLINE( 511)		Float dY = this->_y->calculate(k);
HXDLIN( 511)		Float dY1 = (dY - this->_y->calculate((k + this->step)));
HXLINE( 513)		Float angle = (::Math_obj::atan2(dY1,dX1) * (( (Float)(180) ) / ::Math_obj::PI));
HXLINE( 514)		angle = ::hx::Mod((angle + this->offset),360);
HXLINE( 516)		return angle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RotationPath_obj,calculate,return )

Float RotationPath_obj::get_start(){
            	HX_STACKFRAME(&_hx_pos_1630a997d07a1e21_528_get_start)
HXDLIN( 528)		return this->_start;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RotationPath_obj,get_start,return )

Float RotationPath_obj::set_start(Float value){
            	HX_STACKFRAME(&_hx_pos_1630a997d07a1e21_535_set_start)
HXDLIN( 535)		return this->_start;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RotationPath_obj,set_start,return )

Float RotationPath_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_1630a997d07a1e21_542_get_end)
HXDLIN( 542)		return this->calculate(((Float)1.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(RotationPath_obj,get_end,return )


::hx::ObjectPtr< RotationPath_obj > RotationPath_obj::__new( ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y) {
	::hx::ObjectPtr< RotationPath_obj > __this = new RotationPath_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< RotationPath_obj > RotationPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::motion::_MotionPath::ComponentPath x, ::motion::_MotionPath::ComponentPath y) {
	RotationPath_obj *__this = (RotationPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RotationPath_obj), true, "motion._MotionPath.RotationPath"));
	*(void **)__this = RotationPath_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

RotationPath_obj::RotationPath_obj()
{
}

void RotationPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RotationPath);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void RotationPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(step,"step");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

::hx::Val RotationPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return ::hx::Val( _x ); }
		if (HX_FIELD_EQ(inName,"_y") ) { return ::hx::Val( _y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_end() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return ::hx::Val( step ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_start() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"_start") ) { return ::hx::Val( _start ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_end") ) { return ::hx::Val( get_end_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_start") ) { return ::hx::Val( get_start_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_start") ) { return ::hx::Val( set_start_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RotationPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast<  ::motion::_MotionPath::ComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast<  ::motion::_MotionPath::ComponentPath >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_start(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RotationPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("_start",a3,bb,f2,7f));
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("_x",39,53,00,00));
	outFields->push(HX_("_y",3a,53,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RotationPath_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(RotationPath_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(RotationPath_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(RotationPath_obj,_start),HX_("_start",a3,bb,f2,7f)},
	{::hx::fsFloat,(int)offsetof(RotationPath_obj,step),HX_("step",4c,e7,5b,4c)},
	{::hx::fsObject /*  ::motion::_MotionPath::ComponentPath */ ,(int)offsetof(RotationPath_obj,_x),HX_("_x",39,53,00,00)},
	{::hx::fsObject /*  ::motion::_MotionPath::ComponentPath */ ,(int)offsetof(RotationPath_obj,_y),HX_("_y",3a,53,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RotationPath_obj_sStaticStorageInfo = 0;
#endif

static ::String RotationPath_obj_sMemberFields[] = {
	HX_("offset",93,97,3f,60),
	HX_("strength",81,d2,8e,8e),
	HX_("_start",a3,bb,f2,7f),
	HX_("step",4c,e7,5b,4c),
	HX_("_x",39,53,00,00),
	HX_("_y",3a,53,00,00),
	HX_("calculate",66,95,6a,05),
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	::String(null()) };

::hx::Class RotationPath_obj::__mClass;

void RotationPath_obj::__register()
{
	RotationPath_obj _hx_dummy;
	RotationPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._MotionPath.RotationPath",0f,18,92,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RotationPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RotationPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RotationPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RotationPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _MotionPath
