#ifndef INCLUDED_motion_easing_Quart
#define INCLUDED_motion_easing_Quart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,Quart)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Quart_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Quart_obj OBJ_;
		Quart_obj();

	public:
		enum { _hx_ClassId = 0x15a19f16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Quart")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.Quart"); }

		inline static ::hx::ObjectPtr< Quart_obj > __new() {
			::hx::ObjectPtr< Quart_obj > __this = new Quart_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Quart_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Quart_obj *__this = (Quart_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quart_obj), false, "motion.easing.Quart"));
			*(void **)__this = Quart_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Quart_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Quart",df,f1,14,f1); }

		static void __boot();
		static ::Dynamic easeIn;
		static ::Dynamic easeInOut;
		static ::Dynamic easeOut;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Quart */ 
