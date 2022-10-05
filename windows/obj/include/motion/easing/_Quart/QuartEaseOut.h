#ifndef INCLUDED_motion_easing__Quart_QuartEaseOut
#define INCLUDED_motion_easing__Quart_QuartEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Quart,QuartEaseOut)

namespace motion{
namespace easing{
namespace _Quart{


class HXCPP_CLASS_ATTRIBUTES QuartEaseOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuartEaseOut_obj OBJ_;
		QuartEaseOut_obj();

	public:
		enum { _hx_ClassId = 0x6f0c5ae2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Quart.QuartEaseOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Quart.QuartEaseOut"); }
		static ::hx::ObjectPtr< QuartEaseOut_obj > __new();
		static ::hx::ObjectPtr< QuartEaseOut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuartEaseOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("QuartEaseOut",21,35,c7,e1); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Quart

#endif /* INCLUDED_motion_easing__Quart_QuartEaseOut */ 
