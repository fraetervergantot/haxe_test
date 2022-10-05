#ifndef INCLUDED_motion_easing__Quart_QuartEaseIn
#define INCLUDED_motion_easing__Quart_QuartEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Quart,QuartEaseIn)

namespace motion{
namespace easing{
namespace _Quart{


class HXCPP_CLASS_ATTRIBUTES QuartEaseIn_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuartEaseIn_obj OBJ_;
		QuartEaseIn_obj();

	public:
		enum { _hx_ClassId = 0x3d574811 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Quart.QuartEaseIn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Quart.QuartEaseIn"); }
		static ::hx::ObjectPtr< QuartEaseIn_obj > __new();
		static ::hx::ObjectPtr< QuartEaseIn_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuartEaseIn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("QuartEaseIn",b2,ba,e0,a2); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Quart

#endif /* INCLUDED_motion_easing__Quart_QuartEaseIn */ 
