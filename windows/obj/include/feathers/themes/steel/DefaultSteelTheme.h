#ifndef INCLUDED_feathers_themes_steel_DefaultSteelTheme
#define INCLUDED_feathers_themes_steel_DefaultSteelTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,DefaultSteelTheme)

namespace feathers{
namespace themes{
namespace steel{


class HXCPP_CLASS_ATTRIBUTES DefaultSteelTheme_obj : public  ::feathers::themes::steel::BaseSteelTheme_obj
{
	public:
		typedef  ::feathers::themes::steel::BaseSteelTheme_obj super;
		typedef DefaultSteelTheme_obj OBJ_;
		DefaultSteelTheme_obj();

	public:
		enum { _hx_ClassId = 0x3b64ba0e };

		void __construct( ::Dynamic themeColor, ::Dynamic darkThemeColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.themes.steel.DefaultSteelTheme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.themes.steel.DefaultSteelTheme"); }
		static ::hx::ObjectPtr< DefaultSteelTheme_obj > __new( ::Dynamic themeColor, ::Dynamic darkThemeColor);
		static ::hx::ObjectPtr< DefaultSteelTheme_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic themeColor, ::Dynamic darkThemeColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultSteelTheme_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultSteelTheme",ff,ab,dc,38); }

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel

#endif /* INCLUDED_feathers_themes_steel_DefaultSteelTheme */ 
