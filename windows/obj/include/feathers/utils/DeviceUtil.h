#ifndef INCLUDED_feathers_utils_DeviceUtil
#define INCLUDED_feathers_utils_DeviceUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,DeviceUtil)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DeviceUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DeviceUtil_obj OBJ_;
		DeviceUtil_obj();

	public:
		enum { _hx_ClassId = 0x7177b5d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.DeviceUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.DeviceUtil"); }

		inline static ::hx::ObjectPtr< DeviceUtil_obj > __new() {
			::hx::ObjectPtr< DeviceUtil_obj > __this = new DeviceUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DeviceUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DeviceUtil_obj *__this = (DeviceUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DeviceUtil_obj), false, "feathers.utils.DeviceUtil"));
			*(void **)__this = DeviceUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DeviceUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DeviceUtil",d8,67,e9,ad); }

		static void __boot();
		static ::String MEDIA_QUERY_DESKTOP;
		static ::String MEDIA_QUERY_MOBILE;
		static bool isDesktop();
		static ::Dynamic isDesktop_dyn();

		static bool isMobile();
		static ::Dynamic isMobile_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_DeviceUtil */ 
