#ifndef INCLUDED_feathers_utils_ScreenDensityScaleCalculator
#define INCLUDED_feathers_utils_ScreenDensityScaleCalculator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,ScreenDensityScaleCalculator)
HX_DECLARE_CLASS3(feathers,utils,_ScreenDensityScaleCalculator,ScreenDensityBucket)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ScreenDensityScaleCalculator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScreenDensityScaleCalculator_obj OBJ_;
		ScreenDensityScaleCalculator_obj();

	public:
		enum { _hx_ClassId = 0x09848c9d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.ScreenDensityScaleCalculator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.ScreenDensityScaleCalculator"); }
		static ::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > __new();
		static ::hx::ObjectPtr< ScreenDensityScaleCalculator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenDensityScaleCalculator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenDensityScaleCalculator",d0,a9,0f,dc); }

		::Array< ::Dynamic> _buckets;
		void addScaleForDensity(Float density,Float scale);
		::Dynamic addScaleForDensity_dyn();

		void removeScaleForDensity(Float density);
		::Dynamic removeScaleForDensity_dyn();

		Float getScale(Float density);
		::Dynamic getScale_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_ScreenDensityScaleCalculator */ 
