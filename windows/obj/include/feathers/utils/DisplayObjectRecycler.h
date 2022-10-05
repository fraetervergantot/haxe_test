#ifndef INCLUDED_feathers_utils_DisplayObjectRecycler
#define INCLUDED_feathers_utils_DisplayObjectRecycler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_58_new)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectRecycler_obj : public  ::feathers::utils::DisplayObjectFactory_obj
{
	public:
		typedef  ::feathers::utils::DisplayObjectFactory_obj super;
		typedef DisplayObjectRecycler_obj OBJ_;
		DisplayObjectRecycler_obj();

	public:
		enum { _hx_ClassId = 0x2bde103f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.DisplayObjectRecycler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.DisplayObjectRecycler"); }

		inline static ::hx::ObjectPtr< DisplayObjectRecycler_obj > __new() {
			::hx::ObjectPtr< DisplayObjectRecycler_obj > __this = new DisplayObjectRecycler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DisplayObjectRecycler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DisplayObjectRecycler_obj *__this = (DisplayObjectRecycler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectRecycler_obj), true, "feathers.utils.DisplayObjectRecycler"));
			*(void **)__this = DisplayObjectRecycler_obj::_hx_vtable;
			feathers::utils::DisplayObjectRecycler_obj::__alloc_dynamic_functions(_hx_ctx,__this);
{
            	HX_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_58_new)
HXDLIN(  58)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,DisplayObjectRecycler_obj *_hx_obj);
		//~DisplayObjectRecycler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayObjectRecycler",a0,30,86,ab); }

		static  ::feathers::utils::DisplayObjectRecycler withClass(::hx::Class displayObjectType, ::Dynamic update, ::Dynamic reset, ::Dynamic destroy);
		static ::Dynamic withClass_dyn();

		static  ::feathers::utils::DisplayObjectRecycler withFunction( ::Dynamic create, ::Dynamic update, ::Dynamic reset, ::Dynamic destroy);
		static ::Dynamic withFunction_dyn();

		::Dynamic update;
		inline ::Dynamic &update_dyn() {return update; }

		::Dynamic reset;
		inline ::Dynamic &reset_dyn() {return reset; }

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_DisplayObjectRecycler */ 
