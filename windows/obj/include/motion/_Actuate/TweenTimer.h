#ifndef INCLUDED_motion__Actuate_TweenTimer
#define INCLUDED_motion__Actuate_TweenTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ddff7c747423f6c3_641_new)
HX_DECLARE_CLASS2(motion,_Actuate,TweenTimer)

namespace motion{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES TweenTimer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TweenTimer_obj OBJ_;
		TweenTimer_obj();

	public:
		enum { _hx_ClassId = 0x0e131e44 };

		void __construct(Float progress);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion._Actuate.TweenTimer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion._Actuate.TweenTimer"); }

		inline static ::hx::ObjectPtr< TweenTimer_obj > __new(Float progress) {
			::hx::ObjectPtr< TweenTimer_obj > __this = new TweenTimer_obj();
			__this->__construct(progress);
			return __this;
		}

		inline static ::hx::ObjectPtr< TweenTimer_obj > __alloc(::hx::Ctx *_hx_ctx,Float progress) {
			TweenTimer_obj *__this = (TweenTimer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TweenTimer_obj), false, "motion._Actuate.TweenTimer"));
			*(void **)__this = TweenTimer_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ddff7c747423f6c3_641_new)
HXDLIN( 641)		( ( ::motion::_Actuate::TweenTimer)(__this) )->progress = progress;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TweenTimer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TweenTimer",7a,e5,2a,be); }

		Float progress;
};

} // end namespace motion
} // end namespace _Actuate

#endif /* INCLUDED_motion__Actuate_TweenTimer */ 
