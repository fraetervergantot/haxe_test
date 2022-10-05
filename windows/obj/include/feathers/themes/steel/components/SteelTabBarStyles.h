#ifndef INCLUDED_feathers_themes_steel_components_SteelTabBarStyles
#define INCLUDED_feathers_themes_steel_components_SteelTabBarStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelTabBarStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelTabBarStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelTabBarStyles_obj OBJ_;
		SteelTabBarStyles_obj();

	public:
		enum { _hx_ClassId = 0x5b995044 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelTabBarStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelTabBarStyles"); }

		inline static ::hx::ObjectPtr< SteelTabBarStyles_obj > __new() {
			::hx::ObjectPtr< SteelTabBarStyles_obj > __this = new SteelTabBarStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelTabBarStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelTabBarStyles_obj *__this = (SteelTabBarStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelTabBarStyles_obj), false, "feathers.themes.steel.components.SteelTabBarStyles"));
			*(void **)__this = SteelTabBarStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelTabBarStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelTabBarStyles",cb,a1,a5,9a); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelTabBarStyles */ 
