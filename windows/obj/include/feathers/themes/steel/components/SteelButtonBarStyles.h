#ifndef INCLUDED_feathers_themes_steel_components_SteelButtonBarStyles
#define INCLUDED_feathers_themes_steel_components_SteelButtonBarStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelButtonBarStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelButtonBarStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelButtonBarStyles_obj OBJ_;
		SteelButtonBarStyles_obj();

	public:
		enum { _hx_ClassId = 0x0254457f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelButtonBarStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelButtonBarStyles"); }

		inline static ::hx::ObjectPtr< SteelButtonBarStyles_obj > __new() {
			::hx::ObjectPtr< SteelButtonBarStyles_obj > __this = new SteelButtonBarStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelButtonBarStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelButtonBarStyles_obj *__this = (SteelButtonBarStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelButtonBarStyles_obj), false, "feathers.themes.steel.components.SteelButtonBarStyles"));
			*(void **)__this = SteelButtonBarStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelButtonBarStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelButtonBarStyles",58,62,4c,96); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelButtonBarStyles */ 
