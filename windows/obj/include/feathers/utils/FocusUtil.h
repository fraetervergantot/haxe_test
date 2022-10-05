#ifndef INCLUDED_feathers_utils_FocusUtil
#define INCLUDED_feathers_utils_FocusUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,utils,FocusUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES FocusUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FocusUtil_obj OBJ_;
		FocusUtil_obj();

	public:
		enum { _hx_ClassId = 0x4c3bd9c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.FocusUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.FocusUtil"); }

		inline static ::hx::ObjectPtr< FocusUtil_obj > __new() {
			::hx::ObjectPtr< FocusUtil_obj > __this = new FocusUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FocusUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FocusUtil_obj *__this = (FocusUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusUtil_obj), false, "feathers.utils.FocusUtil"));
			*(void **)__this = FocusUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusUtil",da,8f,0c,c7); }

		static ::Array< ::Dynamic> findAllFocusableObjects( ::openfl::display::DisplayObject target,::Array< ::Dynamic> result);
		static ::Dynamic findAllFocusableObjects_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_FocusUtil */ 
