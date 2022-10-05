#ifndef INCLUDED_motion_easing__Quart_QuartEaseInOut
#define INCLUDED_motion_easing__Quart_QuartEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Quart,QuartEaseInOut)

namespace motion{
namespace easing{
namespace _Quart{


class HXCPP_CLASS_ATTRIBUTES QuartEaseInOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuartEaseInOut_obj OBJ_;
		QuartEaseInOut_obj();

	public:
		enum { _hx_ClassId = 0x15deb0fd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Quart.QuartEaseInOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Quart.QuartEaseInOut"); }
		static ::hx::ObjectPtr< QuartEaseInOut_obj > __new();
		static ::hx::ObjectPtr< QuartEaseInOut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuartEaseInOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("QuartEaseInOut",fc,d8,b3,d0); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Quart

#endif /* INCLUDED_motion_easing__Quart_QuartEaseInOut */ 
