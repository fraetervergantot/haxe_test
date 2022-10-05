#ifndef INCLUDED_lime_utils_BytePointerData
#define INCLUDED_lime_utils_BytePointerData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES BytePointerData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BytePointerData_obj OBJ_;
		BytePointerData_obj();

	public:
		enum { _hx_ClassId = 0x73e7eac3 };

		void __construct( ::haxe::io::Bytes bytes,int offset);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.BytePointerData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.BytePointerData"); }
		static ::hx::ObjectPtr< BytePointerData_obj > __new( ::haxe::io::Bytes bytes,int offset);
		static ::hx::ObjectPtr< BytePointerData_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes,int offset);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BytePointerData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BytePointerData",3f,33,b7,c1); }

		 ::haxe::io::Bytes bytes;
		int offset;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_BytePointerData */ 
