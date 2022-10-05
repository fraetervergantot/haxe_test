#ifndef INCLUDED_feathers_utils_TextFormatUtil
#define INCLUDED_feathers_utils_TextFormatUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,TextFormatUtil)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES TextFormatUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFormatUtil_obj OBJ_;
		TextFormatUtil_obj();

	public:
		enum { _hx_ClassId = 0x174d3c87 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.TextFormatUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.TextFormatUtil"); }

		inline static ::hx::ObjectPtr< TextFormatUtil_obj > __new() {
			::hx::ObjectPtr< TextFormatUtil_obj > __this = new TextFormatUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextFormatUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextFormatUtil_obj *__this = (TextFormatUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFormatUtil_obj), false, "feathers.utils.TextFormatUtil"));
			*(void **)__this = TextFormatUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFormatUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormatUtil",06,5a,19,a0); }

		static  ::openfl::text::TextFormat clone( ::openfl::text::TextFormat original);
		static ::Dynamic clone_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_TextFormatUtil */ 
