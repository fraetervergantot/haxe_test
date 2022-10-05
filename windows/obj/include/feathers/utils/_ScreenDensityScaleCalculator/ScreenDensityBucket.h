#ifndef INCLUDED_feathers_utils__ScreenDensityScaleCalculator_ScreenDensityBucket
#define INCLUDED_feathers_utils__ScreenDensityScaleCalculator_ScreenDensityBucket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_76c2531aaf839889_103_new)
HX_DECLARE_CLASS3(feathers,utils,_ScreenDensityScaleCalculator,ScreenDensityBucket)

namespace feathers{
namespace utils{
namespace _ScreenDensityScaleCalculator{


class HXCPP_CLASS_ATTRIBUTES ScreenDensityBucket_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScreenDensityBucket_obj OBJ_;
		ScreenDensityBucket_obj();

	public:
		enum { _hx_ClassId = 0x4b749c78 };

		void __construct(Float density,Float scale);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket"); }

		inline static ::hx::ObjectPtr< ScreenDensityBucket_obj > __new(Float density,Float scale) {
			::hx::ObjectPtr< ScreenDensityBucket_obj > __this = new ScreenDensityBucket_obj();
			__this->__construct(density,scale);
			return __this;
		}

		inline static ::hx::ObjectPtr< ScreenDensityBucket_obj > __alloc(::hx::Ctx *_hx_ctx,Float density,Float scale) {
			ScreenDensityBucket_obj *__this = (ScreenDensityBucket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenDensityBucket_obj), false, "feathers.utils._ScreenDensityScaleCalculator.ScreenDensityBucket"));
			*(void **)__this = ScreenDensityBucket_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_76c2531aaf839889_103_new)
HXLINE( 104)		( ( ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket)(__this) )->density = density;
HXLINE( 105)		( ( ::feathers::utils::_ScreenDensityScaleCalculator::ScreenDensityBucket)(__this) )->scale = scale;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenDensityBucket_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenDensityBucket",46,4f,9a,67); }

		Float density;
		Float scale;
};

} // end namespace feathers
} // end namespace utils
} // end namespace _ScreenDensityScaleCalculator

#endif /* INCLUDED_feathers_utils__ScreenDensityScaleCalculator_ScreenDensityBucket */ 
