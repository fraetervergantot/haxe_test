#ifndef INCLUDED_motion_easing_Linear
#define INCLUDED_motion_easing_Linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,Linear)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Linear_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Linear_obj OBJ_;
		Linear_obj();

	public:
		enum { _hx_ClassId = 0x70ec9c8a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Linear")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.Linear"); }

		inline static ::hx::ObjectPtr< Linear_obj > __new() {
			::hx::ObjectPtr< Linear_obj > __this = new Linear_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Linear_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Linear_obj *__this = (Linear_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Linear_obj), false, "motion.easing.Linear"));
			*(void **)__this = Linear_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Linear_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Linear",05,c6,34,21); }

		static ::Dynamic get_easeNone();
		static ::Dynamic get_easeNone_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Linear */ 
