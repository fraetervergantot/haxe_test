#ifndef INCLUDED_feathers_themes_steel_components_SteelTabNavigatorStyles
#define INCLUDED_feathers_themes_steel_components_SteelTabNavigatorStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelTabNavigatorStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelTabNavigatorStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelTabNavigatorStyles_obj OBJ_;
		SteelTabNavigatorStyles_obj();

	public:
		enum { _hx_ClassId = 0x7078ab88 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelTabNavigatorStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelTabNavigatorStyles"); }

		inline static ::hx::ObjectPtr< SteelTabNavigatorStyles_obj > __new() {
			::hx::ObjectPtr< SteelTabNavigatorStyles_obj > __this = new SteelTabNavigatorStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelTabNavigatorStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelTabNavigatorStyles_obj *__this = (SteelTabNavigatorStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelTabNavigatorStyles_obj), false, "feathers.themes.steel.components.SteelTabNavigatorStyles"));
			*(void **)__this = SteelTabNavigatorStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelTabNavigatorStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelTabNavigatorStyles",4f,5c,e9,b8); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelTabNavigatorStyles */ 
