#ifndef INCLUDED_feathers_themes_steel_components_SteelButtonStyles
#define INCLUDED_feathers_themes_steel_components_SteelButtonStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelButtonStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelButtonStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelButtonStyles_obj OBJ_;
		SteelButtonStyles_obj();

	public:
		enum { _hx_ClassId = 0x00534eb8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelButtonStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelButtonStyles"); }

		inline static ::hx::ObjectPtr< SteelButtonStyles_obj > __new() {
			::hx::ObjectPtr< SteelButtonStyles_obj > __this = new SteelButtonStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelButtonStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelButtonStyles_obj *__this = (SteelButtonStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelButtonStyles_obj), false, "feathers.themes.steel.components.SteelButtonStyles"));
			*(void **)__this = SteelButtonStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelButtonStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelButtonStyles",3f,a0,5f,3f); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelButtonStyles */ 
