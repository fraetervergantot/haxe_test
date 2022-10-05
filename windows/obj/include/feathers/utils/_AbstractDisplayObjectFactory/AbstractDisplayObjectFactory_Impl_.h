#ifndef INCLUDED_feathers_utils__AbstractDisplayObjectFactory_AbstractDisplayObjectFactory_Impl_
#define INCLUDED_feathers_utils__AbstractDisplayObjectFactory_AbstractDisplayObjectFactory_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS3(feathers,utils,_AbstractDisplayObjectFactory,AbstractDisplayObjectFactory_Impl_)

namespace feathers{
namespace utils{
namespace _AbstractDisplayObjectFactory{


class HXCPP_CLASS_ATTRIBUTES AbstractDisplayObjectFactory_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AbstractDisplayObjectFactory_Impl__obj OBJ_;
		AbstractDisplayObjectFactory_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0b70be28 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_"); }

		inline static ::hx::ObjectPtr< AbstractDisplayObjectFactory_Impl__obj > __new() {
			::hx::ObjectPtr< AbstractDisplayObjectFactory_Impl__obj > __this = new AbstractDisplayObjectFactory_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AbstractDisplayObjectFactory_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AbstractDisplayObjectFactory_Impl__obj *__this = (AbstractDisplayObjectFactory_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractDisplayObjectFactory_Impl__obj), false, "feathers.utils._AbstractDisplayObjectFactory.AbstractDisplayObjectFactory_Impl_"));
			*(void **)__this = AbstractDisplayObjectFactory_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractDisplayObjectFactory_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractDisplayObjectFactory_Impl_",2b,cd,66,cf); }

		static  ::feathers::utils::DisplayObjectFactory fromFunction( ::Dynamic func);
		static ::Dynamic fromFunction_dyn();

		static  ::feathers::utils::DisplayObjectFactory fromClass(::hx::Class type);
		static ::Dynamic fromClass_dyn();

		static  ::feathers::utils::DisplayObjectFactory fromDisplayObject( ::Dynamic displayObject);
		static ::Dynamic fromDisplayObject_dyn();

};

} // end namespace feathers
} // end namespace utils
} // end namespace _AbstractDisplayObjectFactory

#endif /* INCLUDED_feathers_utils__AbstractDisplayObjectFactory_AbstractDisplayObjectFactory_Impl_ */ 
