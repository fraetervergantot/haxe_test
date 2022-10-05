#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#define INCLUDED_feathers_utils_DisplayObjectFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_68_new)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectFactory_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DisplayObjectFactory_obj OBJ_;
		DisplayObjectFactory_obj();

	public:
		enum { _hx_ClassId = 0x7761b58a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.DisplayObjectFactory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.DisplayObjectFactory"); }

		inline static ::hx::ObjectPtr< DisplayObjectFactory_obj > __new() {
			::hx::ObjectPtr< DisplayObjectFactory_obj > __this = new DisplayObjectFactory_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DisplayObjectFactory_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DisplayObjectFactory_obj *__this = (DisplayObjectFactory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectFactory_obj), true, "feathers.utils.DisplayObjectFactory"));
			*(void **)__this = DisplayObjectFactory_obj::_hx_vtable;
			feathers::utils::DisplayObjectFactory_obj::__alloc_dynamic_functions(_hx_ctx,__this);
{
            	HX_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_68_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,DisplayObjectFactory_obj *_hx_obj);
		//~DisplayObjectFactory_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayObjectFactory",49,7c,c7,30); }

		static  ::feathers::utils::DisplayObjectFactory withDisplayObject( ::Dynamic displayObject, ::Dynamic destroy);
		static ::Dynamic withDisplayObject_dyn();

		static  ::feathers::utils::DisplayObjectFactory withClass(::hx::Class displayObjectType, ::Dynamic destroy);
		static ::Dynamic withClass_dyn();

		static  ::feathers::utils::DisplayObjectFactory withFunction( ::Dynamic create, ::Dynamic destroy);
		static ::Dynamic withFunction_dyn();

		::Dynamic create;
		inline ::Dynamic &create_dyn() {return create; }

		::Dynamic destroy;
		inline ::Dynamic &destroy_dyn() {return destroy; }

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_DisplayObjectFactory */ 
