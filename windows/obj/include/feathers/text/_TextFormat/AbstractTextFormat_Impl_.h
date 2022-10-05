#ifndef INCLUDED_feathers_text__TextFormat_AbstractTextFormat_Impl_
#define INCLUDED_feathers_text__TextFormat_AbstractTextFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,text,TextFormat)
HX_DECLARE_CLASS3(feathers,text,_TextFormat,AbstractTextFormat_Impl_)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace feathers{
namespace text{
namespace _TextFormat{


class HXCPP_CLASS_ATTRIBUTES AbstractTextFormat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AbstractTextFormat_Impl__obj OBJ_;
		AbstractTextFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x035743cc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.text._TextFormat.AbstractTextFormat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.text._TextFormat.AbstractTextFormat_Impl_"); }

		inline static ::hx::ObjectPtr< AbstractTextFormat_Impl__obj > __new() {
			::hx::ObjectPtr< AbstractTextFormat_Impl__obj > __this = new AbstractTextFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AbstractTextFormat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AbstractTextFormat_Impl__obj *__this = (AbstractTextFormat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AbstractTextFormat_Impl__obj), false, "feathers.text._TextFormat.AbstractTextFormat_Impl_"));
			*(void **)__this = AbstractTextFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractTextFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AbstractTextFormat_Impl_",86,74,49,12); }

		static  ::feathers::text::TextFormat fromSimpleTextFormat( ::openfl::text::TextFormat textFormat);
		static ::Dynamic fromSimpleTextFormat_dyn();

		static  ::openfl::text::TextFormat toSimpleTextFormat( ::feathers::text::TextFormat this1);
		static ::Dynamic toSimpleTextFormat_dyn();

};

} // end namespace feathers
} // end namespace text
} // end namespace _TextFormat

#endif /* INCLUDED_feathers_text__TextFormat_AbstractTextFormat_Impl_ */ 
