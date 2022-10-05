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
#ifndef INCLUDED_motion__MotionPath_BezierSplinePath
#include <motion/_MotionPath/BezierSplinePath.h>
#endif
#ifndef INCLUDED_motion__MotionPath_ComponentPath
#include <motion/_MotionPath/ComponentPath.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_539299249e230a94_365_new,"motion._MotionPath.BezierSplinePath","new",0x1cce2bd3,"motion._MotionPath.BezierSplinePath.new","motion/MotionPath.hx",365,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_539299249e230a94_383_computeControlPoints,"motion._MotionPath.BezierSplinePath","computeControlPoints",0xfd2f5296,"motion._MotionPath.BezierSplinePath.computeControlPoints","motion/MotionPath.hx",383,0x95e57daa)
static const Float _hx_array_data_17194661_7[] = {
	0.0,0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_539299249e230a94_445_set_start,"motion._MotionPath.BezierSplinePath","set_start",0x2e5ab078,"motion._MotionPath.BezierSplinePath.set_start","motion/MotionPath.hx",445,0x95e57daa)
HX_LOCAL_STACK_FRAME(_hx_pos_539299249e230a94_475_get_end,"motion._MotionPath.BezierSplinePath","get_end",0xb61a5d65,"motion._MotionPath.BezierSplinePath.get_end","motion/MotionPath.hx",475,0x95e57daa)
namespace motion{
namespace _MotionPath{

void BezierSplinePath_obj::__construct(::Array< Float > through,Float strength){
            	HX_STACKFRAME(&_hx_pos_539299249e230a94_365_new)
HXLINE( 369)		super::__construct();
HXLINE( 371)		this->through = through;
HXLINE( 372)		this->strength = strength;
            	}

Dynamic BezierSplinePath_obj::__CreateEmpty() { return new BezierSplinePath_obj; }

void *BezierSplinePath_obj::_hx_vtable = 0;

Dynamic BezierSplinePath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BezierSplinePath_obj > _hx_result = new BezierSplinePath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BezierSplinePath_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16146fde) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16146fde;
	} else {
		return inClassId==(int)0x27f5f14d;
	}
}

::Array< ::Dynamic> BezierSplinePath_obj::computeControlPoints(Float start){
            	HX_STACKFRAME(&_hx_pos_539299249e230a94_383_computeControlPoints)
HXLINE( 385)		::Array< Float > K = ::Array_obj< Float >::__new(1)->init(0,start)->concat(this->through);
HXLINE( 386)		int n = K->length;
HXLINE( 388)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 388)		{
HXLINE( 388)			int _g1 = 0;
HXDLIN( 388)			int _g2 = n;
HXDLIN( 388)			while((_g1 < _g2)){
HXLINE( 388)				_g1 = (_g1 + 1);
HXDLIN( 388)				int _ = (_g1 - 1);
HXDLIN( 388)				_g->push(::Array_obj< Float >::fromData( _hx_array_data_17194661_7,2));
            			}
            		}
HXDLIN( 388)		::Array< ::Dynamic> control = _g;
HXLINE( 391)		::Array< Float > a = ::Array_obj< Float >::__new();
HXLINE( 392)		::Array< Float > b = ::Array_obj< Float >::__new();
HXLINE( 393)		::Array< Float > c = ::Array_obj< Float >::__new();
HXLINE( 394)		::Array< Float > r = ::Array_obj< Float >::__new();
HXLINE( 397)		a[0] = ( (Float)(0) );
HXLINE( 398)		b[0] = ( (Float)(2) );
HXLINE( 399)		c[0] = ( (Float)(1) );
HXLINE( 400)		r[0] = (K->__get(0) + (( (Float)(2) ) * K->__get(1)));
HXLINE( 403)		{
HXLINE( 403)			int _g3 = 1;
HXDLIN( 403)			int _g4 = (n - 1);
HXDLIN( 403)			while((_g3 < _g4)){
HXLINE( 403)				_g3 = (_g3 + 1);
HXDLIN( 403)				int i = (_g3 - 1);
HXLINE( 404)				a[i] = ( (Float)(1) );
HXLINE( 405)				b[i] = ( (Float)(4) );
HXLINE( 406)				c[i] = ( (Float)(1) );
HXLINE( 407)				r[i] = ((( (Float)(4) ) * K->__get(i)) + (( (Float)(2) ) * K->__get((i + 1))));
            			}
            		}
HXLINE( 411)		a[(n - 1)] = ( (Float)(1) );
HXLINE( 412)		b[(n - 1)] = ( (Float)(2) );
HXLINE( 413)		c[(n - 1)] = ( (Float)(0) );
HXLINE( 414)		r[(n - 1)] = (( (Float)(3) ) * K->__get((n - 1)));
HXLINE( 417)		{
HXLINE( 417)			int _g5 = 1;
HXDLIN( 417)			int _g6 = n;
HXDLIN( 417)			while((_g5 < _g6)){
HXLINE( 417)				_g5 = (_g5 + 1);
HXDLIN( 417)				int i = (_g5 - 1);
HXLINE( 418)				Float m = (a->__get(i) / b->__get((i - 1)));
HXLINE( 419)				::Array< Float > b1 = b;
HXDLIN( 419)				int i1 = i;
HXDLIN( 419)				b1[i1] = (b1->__get(i1) - (m * c->__get((i - 1))));
HXLINE( 420)				::Array< Float > r1 = r;
HXDLIN( 420)				int i2 = i;
HXDLIN( 420)				r1[i2] = (r1->__get(i2) - (m * r->__get((i - 1))));
            			}
            		}
HXLINE( 423)		control->__get((n - 1)).StaticCast< ::Array< Float > >()[0] = (r->__get((n - 1)) / b->__get((n - 1)));
HXLINE( 424)		int i = (n - 2);
HXLINE( 425)		while((i >= 0)){
HXLINE( 426)			control->__get(i).StaticCast< ::Array< Float > >()[0] = ((r->__get(i) - (c->__get(i) * control->__get((i + 1)).StaticCast< ::Array< Float > >()->__get(0))) / b->__get(i));
HXLINE( 427)			i = (i - 1);
            		}
HXLINE( 431)		{
HXLINE( 431)			int _g7 = 0;
HXDLIN( 431)			int _g8 = (n - 1);
HXDLIN( 431)			while((_g7 < _g8)){
HXLINE( 431)				_g7 = (_g7 + 1);
HXDLIN( 431)				int i = (_g7 - 1);
HXLINE( 432)				control->__get(i).StaticCast< ::Array< Float > >()[1] = ((( (Float)(2) ) * K->__get((i + 1))) - control->__get((i + 1)).StaticCast< ::Array< Float > >()->__get(0));
            			}
            		}
HXLINE( 434)		control->__get((n - 1)).StaticCast< ::Array< Float > >()[1] = (((Float)0.5) * (K->__get(n) + control->__get((n - 1)).StaticCast< ::Array< Float > >()->__get(0)));
HXLINE( 436)		control->pop();
HXLINE( 438)		return control;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BezierSplinePath_obj,computeControlPoints,return )

Float BezierSplinePath_obj::set_start(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_539299249e230a94_445_set_start)
HXLINE( 450)		bool _hx_tmp;
HXDLIN( 450)		if ((this->paths->length != 0)) {
HXLINE( 450)			_hx_tmp = (::Math_obj::abs((value - this->get_start())) > ((Float)1e-7));
            		}
            		else {
HXLINE( 450)			_hx_tmp = true;
            		}
HXDLIN( 450)		if (_hx_tmp) {
HXLINE( 452)			::Array< ::Dynamic> control = this->computeControlPoints(value);
HXLINE( 454)			Float pathStrength = (this->strength / ( (Float)(control->length) ));
HXLINE( 455)			this->strength = ( (Float)(0) );
HXLINE( 456)			this->paths->removeRange(0,this->paths->length);
HXLINE( 458)			{
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				int _g1 = control->length;
HXDLIN( 458)				while((_g < _g1)){
HXLINE( 458)					_g = (_g + 1);
HXDLIN( 458)					int i = (_g - 1);
HXLINE( 460)					this->addPath( ::motion::_MotionPath::BezierPath_obj::__alloc( HX_CTX ,this->through->__get(i),control->__get(i).StaticCast< ::Array< Float > >(),pathStrength));
            				}
            			}
            		}
HXLINE( 466)		return this->super::set_start(value);
            	}


Float BezierSplinePath_obj::get_end(){
            	HX_STACKFRAME(&_hx_pos_539299249e230a94_475_get_end)
HXDLIN( 475)		return this->through->__get((this->through->length - 1));
            	}



::hx::ObjectPtr< BezierSplinePath_obj > BezierSplinePath_obj::__new(::Array< Float > through,Float strength) {
	::hx::ObjectPtr< BezierSplinePath_obj > __this = new BezierSplinePath_obj();
	__this->__construct(through,strength);
	return __this;
}

::hx::ObjectPtr< BezierSplinePath_obj > BezierSplinePath_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > through,Float strength) {
	BezierSplinePath_obj *__this = (BezierSplinePath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BezierSplinePath_obj), true, "motion._MotionPath.BezierSplinePath"));
	*(void **)__this = BezierSplinePath_obj::_hx_vtable;
	__this->__construct(through,strength);
	return __this;
}

BezierSplinePath_obj::BezierSplinePath_obj()
{
}

void BezierSplinePath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BezierSplinePath);
	HX_MARK_MEMBER_NAME(through,"through");
	 ::motion::_MotionPath::ComponentPath_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BezierSplinePath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(through,"through");
	 ::motion::_MotionPath::ComponentPath_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BezierSplinePath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"through") ) { return ::hx::Val( through ); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return ::hx::Val( get_end_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_start") ) { return ::hx::Val( set_start_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeControlPoints") ) { return ::hx::Val( computeControlPoints_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BezierSplinePath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"through") ) { through=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierSplinePath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("through",45,48,3d,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BezierSplinePath_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(BezierSplinePath_obj,through),HX_("through",45,48,3d,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BezierSplinePath_obj_sStaticStorageInfo = 0;
#endif

static ::String BezierSplinePath_obj_sMemberFields[] = {
	HX_("through",45,48,3d,5a),
	HX_("computeControlPoints",69,bf,1b,fa),
	HX_("set_start",c5,bc,05,ab),
	HX_("get_end",72,cc,c1,26),
	::String(null()) };

::hx::Class BezierSplinePath_obj::__mClass;

void BezierSplinePath_obj::__register()
{
	BezierSplinePath_obj _hx_dummy;
	BezierSplinePath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._MotionPath.BezierSplinePath",61,46,19,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BezierSplinePath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BezierSplinePath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BezierSplinePath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BezierSplinePath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _MotionPath
