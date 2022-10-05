#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_ScreenDensityScaleCalculator
#include <feathers/utils/ScreenDensityScaleCalculator.h>
#endif
#ifndef INCLUDED_feathers_utils__ScreenDensityScaleCalculator_ScreenDensityBucket
#include <feathers/utils/_ScreenDensityScaleCalculator/ScreenDensityBucket.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8322c1f2ca2a568_30_new,"feathers.utils.ScreenDensityScaleCalculator","new",0x6821ff5d,"feathers.utils.ScreenDensityScaleCalculator.new","feathers/utils/ScreenDensityScaleCalculator.hx",30,0x4c57aa31)
HX_LOCAL_STACK_FRAME(_hx_pos_f8322c1f2ca2a568_42_addScaleForDensity,"feathers.utils.ScreenDensityScaleCalculator","addScaleForDensity",0x2c8e7f8b,"feathers.utils.ScreenDensityScaleCalculator.addScaleForDensity","feathers/utils/ScreenDensityScaleCalculator.hx",42,0x4c57aa31)
HX_LOCAL_STACK_FRAME(_hx_pos_f8322c1f2ca2a568_66_removeScaleForDensity,"feathers.utils.ScreenDensityScaleCalculator","removeScaleForDensity",0x8de53162,"feathers.utils.ScreenDensityScaleCalculator.removeScaleForDensity","feathers/utils/ScreenDensityScaleCalculator.hx",66,0x4c57aa31)
HX_LOCAL_STACK_FRAME(_hx_pos_f8322c1f2ca2a568_77_getScale,"feathers.utils.ScreenDensityScaleCalculator","getScale",0xf8fb39f7,"feathers.utils.ScreenDensityScaleCalculator.getScale","feathers/utils/ScreenDensityScaleCalculator.hx",77,0x4c57aa31)
namespace feathers{
namespace utils{

void ScreenDensityScaleCalculator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f8322c1f2ca2a568_30_new)
HXDLIN(  30)		this->_buckets = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic ScreenDensityScaleCalculator_obj::__CreateEmpty() { return new ScreenDensityScaleCalculator_obj; }

void *ScreenDensityScaleCalculator_obj::_hx_vtable = 0;

Dynamic ScreenDensityScaleCalculator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > _hx_result = new ScreenDensityScaleCalculator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenDensityScaleCalculator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09848c9d;
}

void ScreenDensityScaleCalculator_obj::addScaleForDensity(Float density,Float scale){
            	HX_GC_STACKFRAME(&_hx_pos_f8322c1f2ca2a568_42_addScaleForDensity)
HXLINE(  43)		int i = this->_buckets->length;
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1 = this->_buckets;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket bucket = _g1->__get(_g).StaticCast<  ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  45)				if ((bucket->density > density)) {
HXLINE(  46)					goto _hx_goto_1;
            				}
HXLINE(  48)				if ((bucket->density == density)) {
HXLINE(  49)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Screen density cannot be added more than once: ",47,93,6f,92) + density)));
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE(  52)		::Array< ::Dynamic> _hx_tmp = this->_buckets;
HXDLIN(  52)		_hx_tmp->insert(i, ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket_obj::__alloc( HX_CTX ,density,scale));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenDensityScaleCalculator_obj,addScaleForDensity,(void))

void ScreenDensityScaleCalculator_obj::removeScaleForDensity(Float density){
            	HX_STACKFRAME(&_hx_pos_f8322c1f2ca2a568_66_removeScaleForDensity)
HXDLIN(  66)		int _g = 0;
HXDLIN(  66)		::Array< ::Dynamic> _g1 = this->_buckets;
HXDLIN(  66)		while((_g < _g1->length)){
HXDLIN(  66)			 ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket bucket = _g1->__get(_g).StaticCast<  ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket >();
HXDLIN(  66)			_g = (_g + 1);
HXLINE(  67)			if ((bucket->density == density)) {
HXLINE(  68)				this->_buckets->remove(bucket);
HXLINE(  69)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleCalculator_obj,removeScaleForDensity,(void))

Float ScreenDensityScaleCalculator_obj::getScale(Float density){
            	HX_GC_STACKFRAME(&_hx_pos_f8322c1f2ca2a568_77_getScale)
HXLINE(  78)		if ((this->_buckets->length == 0)) {
HXLINE(  79)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot choose scale because none have been added",38,2c,d1,74)));
            		}
HXLINE(  81)		 ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket bucket = this->_buckets->__get(0).StaticCast<  ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket >();
HXLINE(  82)		if ((density <= bucket->density)) {
HXLINE(  83)			return bucket->scale;
            		}
HXLINE(  85)		 ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket previousBucket = bucket;
HXLINE(  86)		{
HXLINE(  86)			int _g = 1;
HXDLIN(  86)			int _g1 = this->_buckets->length;
HXDLIN(  86)			while((_g < _g1)){
HXLINE(  86)				_g = (_g + 1);
HXDLIN(  86)				int i = (_g - 1);
HXLINE(  87)				bucket = this->_buckets->__get(i).StaticCast<  ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket >();
HXLINE(  88)				if ((density > bucket->density)) {
HXLINE(  89)					previousBucket = bucket;
HXLINE(  90)					continue;
            				}
HXLINE(  92)				Float midDPI = ((bucket->density + previousBucket->density) / ((Float)2.0));
HXLINE(  93)				if ((density < midDPI)) {
HXLINE(  94)					return previousBucket->scale;
            				}
HXLINE(  96)				return bucket->scale;
            			}
            		}
HXLINE(  98)		return bucket->scale;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleCalculator_obj,getScale,return )


::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > ScreenDensityScaleCalculator_obj::__new() {
	::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > __this = new ScreenDensityScaleCalculator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > ScreenDensityScaleCalculator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScreenDensityScaleCalculator_obj *__this = (ScreenDensityScaleCalculator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenDensityScaleCalculator_obj), true, "feathers.utils.ScreenDensityScaleCalculator"));
	*(void **)__this = ScreenDensityScaleCalculator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenDensityScaleCalculator_obj::ScreenDensityScaleCalculator_obj()
{
}

void ScreenDensityScaleCalculator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenDensityScaleCalculator);
	HX_MARK_MEMBER_NAME(_buckets,"_buckets");
	HX_MARK_END_CLASS();
}

void ScreenDensityScaleCalculator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_buckets,"_buckets");
}

::hx::Val ScreenDensityScaleCalculator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_buckets") ) { return ::hx::Val( _buckets ); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return ::hx::Val( getScale_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addScaleForDensity") ) { return ::hx::Val( addScaleForDensity_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeScaleForDensity") ) { return ::hx::Val( removeScaleForDensity_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenDensityScaleCalculator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_buckets") ) { _buckets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenDensityScaleCalculator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_buckets",4a,52,63,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenDensityScaleCalculator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScreenDensityScaleCalculator_obj,_buckets),HX_("_buckets",4a,52,63,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenDensityScaleCalculator_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenDensityScaleCalculator_obj_sMemberFields[] = {
	HX_("_buckets",4a,52,63,34),
	HX_("addScaleForDensity",e8,49,a0,1a),
	HX_("removeScaleForDensity",25,7f,06,c3),
	HX_("getScale",14,de,a5,d8),
	::String(null()) };

::hx::Class ScreenDensityScaleCalculator_obj::__mClass;

void ScreenDensityScaleCalculator_obj::__register()
{
	ScreenDensityScaleCalculator_obj _hx_dummy;
	ScreenDensityScaleCalculator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.ScreenDensityScaleCalculator",eb,0c,46,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenDensityScaleCalculator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenDensityScaleCalculator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenDensityScaleCalculator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenDensityScaleCalculator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
