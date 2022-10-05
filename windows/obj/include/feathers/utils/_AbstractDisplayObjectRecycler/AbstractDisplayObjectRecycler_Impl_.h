#ifndef INCLUDED_feathers_utils__AbstractDisplayObjectRecycler_AbstractDisplayObjectRecycler_Impl_
#define INCLUDED_feathers_utils__AbstractDisplayObjectRecycler_AbstractDisplayObjectRecycler_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)
HX_DECLARE_CLASS3(feathers,utils,_AbstractDisplayObjectRecycler,AbstractDisplayObjectRecycler_Impl_)

namespace feathers{
namespace utils{
namespace _AbstractDisplayObjectRecycler{


class HXCPP_CLASS_ATTRIBUTES AbstractDisplayObjectRecycler_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AbstractDisplayObjectRecycler_Impl__obj OBJ_;
		AbstractDisplayObjectRecycler_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6122a866 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_"); }

		inline static ::hx::ObjectPtr< AbstractDisplayObjectRecycler_Impl__obj > __new() {
			::hx::ObjectPtr< AbstractDisplayObjectRecycler_Impl__obj > __this = new AbstractDisplayObjectRecycler_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AbstractDisplayObjectRecycler_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AbstractDisplayObjectRecycler_Impl__obj *__this = (AbstractDisplayObjectRecycler_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractDisplayObjectRecycler_Impl__obj), false, "feathers.utils._AbstractDisplayObjectRecycler.AbstractDisplayObjectRecycler_Impl_"));
			*(void **)__this = AbstractDisplayObjectRecycler_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractDisplayObjectRecycler_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractDisplayObjectRecycler_Impl_",7e,ff,7b,1e); }

		static  ::feathers::utils::DisplayObjectRecycler fromFunction( ::Dynamic func);
		static ::Dynamic fromFunction_dyn();

		static  ::feathers::utils::DisplayObjectRecycler fromClass(::hx::Class type);
		static ::Dynamic fromClass_dyn();

};

} // end namespace feathers
} // end namespace utils
} // end namespace _AbstractDisplayObjectRecycler

#endif /* INCLUDED_feathers_utils__AbstractDisplayObjectRecycler_AbstractDisplayObjectRecycler_Impl_ */ 
