#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_BezierPath
#include <motion/_MotionPath/BezierPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eed411078e5a761e_278_new,"motion._MotionPath.BezierPath","new",0x603d1d62,"motion._MotionPath.BezierPath.new","motion/MotionPath.hx",278,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_eed411078e5a761e_287_calculate,"motion._MotionPath.BezierPath","calculate",0x01f68fe8,"motion._MotionPath.BezierPath.calculate","motion/MotionPath.hx",287,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_eed411078e5a761e_338_get_start,"motion._MotionPath.BezierPath","get_start",0xc440cb3b,"motion._MotionPath.BezierPath.get_start","motion/MotionPath.hx",338,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_eed411078e5a761e_345_set_start,"motion._MotionPath.BezierPath","set_start",0xa791b747,"motion._MotionPath.BezierPath.set_start","motion/MotionPath.hx",345,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_eed411078e5a761e_352_get_end,"motion._MotionPath.BezierPath","get_end",0x30a2c274,"motion._MotionPath.BezierPath.get_end","motion/MotionPath.hx",352,0x95e57daa)
namespace motion{
namespace _MotionPath{

void BezierPath_obj::__construct(Float end,::Array< Float > control,Float strength){
            	HX_STACKFRAME(&_hx_pos_eed411078e5a761e_278_new)
HXLINE( 280)		this->_end = end;
HXLINE( 281)		this->control = control;
HXLINE( 282)		this->strength = strength;
            	}

Dynamic BezierPath_obj::__CreateEmpty() { return new BezierPath_obj; }

void *BezierPath_obj::_hx_vtable = 0;

Dynamic BezierPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BezierPath_obj > _hx_result = new BezierPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BezierPath_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70302108;
}

static ::motion::IComponentPath_obj _hx_motion__MotionPath_BezierPath__hx_motion_IComponentPath= {
	( Float (::hx::Object::*)())&::motion::_MotionPath::BezierPath_obj::get_start,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::BezierPath_obj::set_start,
	( Float (::hx::Object::*)())&::motion::_MotionPath::BezierPath_obj::get_end,
	( Float (::hx::Object::*)(Float))&::motion::_MotionPath::BezierPath_obj::calculate,
};

void *BezierPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe9f30fef: return &_hx_motion__MotionPath_BezierPath__hx_motion_IComponentPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float BezierPath_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_eed411078e5a761e_287_calculate)
HXLINE( 291)		Float l = (( (Float)(1) ) - k);
HXLINE( 293)		switch((int)(this->control->length)){
            			case (int)0: {
HXLINE( 297)				return ((l * this->_start) + (k * this->_end));
            			}
            			break;
            			case (int)1: {
HXLINE( 301)				return ((((l * l) * this->_start) + (((( (Float)(2) ) * l) * k) * this->control->__get(0))) + ((k * k) * this->_end));
            			}
            			break;
            			case (int)2: {
HXLINE( 305)				return ((((((l * l) * l) * this->_start) + ((((( (Float)(3) ) * l) * l) * k) * this->control->__get(0))) + ((((( (Float)(3) ) * l) * k) * k) * this->control->__get(1))) + (((k * k) * k) * this->_end));
            			}
            			break;
            			default:{
HXLINE( 312)				if ((l < ((Float)1e-7))) {
HXLINE( 313)					return this->_end;
            				}
HXLINE( 315)				Float r = (k / l);
HXLINE( 317)				int n = (this->control->length + 1);
HXLINE( 318)				Float coeff = ::Math_obj::pow(l,( (Float)(n) ));
HXLINE( 319)				Float res = (coeff * this->_start);
HXLINE( 321)				{
HXLINE( 321)					int _g = 1;
HXDLIN( 321)					int _g1 = n;
HXDLIN( 321)					while((_g < _g1)){
HXLINE( 321)						_g = (_g + 1);
HXDLIN( 321)						int i = (_g - 1);
HXLINE( 322)						coeff = (coeff * ((r * ( (Float)(((n + 1) - i)) )) / ( (Float)(i) )));
HXLINE( 323)						res = (res + (coeff * this->control->__get((i - 1))));
            					}
            				}
HXLINE( 325)				coeff = (coeff * (r / ( (Float)(n) )));
HXLINE( 326)				return (res + (coeff * this->_end));
            			}
            		}
HXLINE( 293)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BezierPath_obj,calculate,return )

Float BezierPath_obj::get_start(){
            	HX_STACKFRAME(&_hx_pos_eed411078e5a761e_338_get_start)
HXDLIN( 338)		return this->_start;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BezierPath_obj,get_start,return )

Float BezierPath_obj::set_start(Float value){
            	HX_STACKFRAME(&_hx_pos_eed411078e5a761e_345_set_start)
HXDLIN( 345)		return (this->_start = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BezierPath_obj,set_start,return )

Float BezierPath_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_eed411078e5a761e_352_get_end)
HXDLIN( 352)		return this->_end;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BezierPath_obj,get_end,return )


::hx::ObjectPtr< BezierPath_obj > BezierPath_obj::__new(Float end,::Array< Float > control,Float strength) {
	::hx::ObjectPtr< BezierPath_obj > __this = new BezierPath_obj();
	__this->__construct(end,control,strength);
	return __this;
}

::hx::ObjectPtr< BezierPath_obj > BezierPath_obj::__alloc(::hx::Ctx *_hx_ctx,Float end,::Array< Float > control,Float strength) {
	BezierPath_obj *__this = (BezierPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BezierPath_obj), true, "motion._MotionPath.BezierPath"));
	*(void **)__this = BezierPath_obj::_hx_vtable;
	__this->__construct(end,control,strength);
	return __this;
}

BezierPath_obj::BezierPath_obj()
{
}

void BezierPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BezierPath);
	HX_MARK_MEMBER_NAME(control,"control");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_end,"_end");
	HX_MARK_END_CLASS();
}

void BezierPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(control,"control");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_end,"_end");
}

::hx::Val BezierPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_end() : end ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { return ::hx::Val( _end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_start() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return ::hx::Val( _start ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return ::hx::Val( control ); }
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

::hx::Val BezierPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_end") ) { _end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_start(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { control=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("control",5d,6b,81,19));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("_start",a3,bb,f2,7f));
	outFields->push(HX_("_end",dc,48,18,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BezierPath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(BezierPath_obj,control),HX_("control",5d,6b,81,19)},
	{::hx::fsFloat,(int)offsetof(BezierPath_obj,end),HX_("end",db,03,4d,00)},
	{::hx::fsFloat,(int)offsetof(BezierPath_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(BezierPath_obj,_start),HX_("_start",a3,bb,f2,7f)},
	{::hx::fsFloat,(int)offsetof(BezierPath_obj,_end),HX_("_end",dc,48,18,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BezierPath_obj_sStaticStorageInfo = 0;
#endif

static ::String BezierPath_obj_sMemberFields[] = {
	HX_("control",5d,6b,81,19),
	HX_("end",db,03,4d,00),
	HX_("strength",81,d2,8e,8e),
	HX_("_start",a3,bb,f2,7f),
	HX_("_end",dc,48,18,3f),
	HX_("calculate",66,95,6a,05),
	HX_("get_start",b9,d0,b4,c7),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	::String(null()) };

::hx::Class BezierPath_obj::__mClass;

void BezierPath_obj::__register()
{
	BezierPath_obj _hx_dummy;
	BezierPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._MotionPath.BezierPath",70,84,0e,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BezierPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BezierPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BezierPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BezierPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _MotionPath
