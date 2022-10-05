#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#define INCLUDED_feathers_themes_ClassVariantTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
HX_DECLARE_CLASS2(feathers,style,ClassVariantStyleProvider)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IStyleProvider)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES ClassVariantTheme_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClassVariantTheme_obj OBJ_;
		ClassVariantTheme_obj();

	public:
		enum { _hx_ClassId = 0x2da0fa7a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.themes.ClassVariantTheme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.themes.ClassVariantTheme"); }
		static ::hx::ObjectPtr< ClassVariantTheme_obj > __new();
		static ::hx::ObjectPtr< ClassVariantTheme_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClassVariantTheme_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ClassVariantTheme",7c,a3,00,2a); }

		 ::feathers::style::ClassVariantStyleProvider styleProvider;
		::Dynamic getStyleProvider(::Dynamic target);
		::Dynamic getStyleProvider_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace feathers
} // end namespace themes

#endif /* INCLUDED_feathers_themes_ClassVariantTheme */ 
