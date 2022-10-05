#ifndef INCLUDED_feathers_themes_steel_components_SteelToggleButtonStyles
#define INCLUDED_feathers_themes_steel_components_SteelToggleButtonStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelToggleButtonStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelToggleButtonStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelToggleButtonStyles_obj OBJ_;
		SteelToggleButtonStyles_obj();

	public:
		enum { _hx_ClassId = 0x6d2d036c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelToggleButtonStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelToggleButtonStyles"); }

		inline static ::hx::ObjectPtr< SteelToggleButtonStyles_obj > __new() {
			::hx::ObjectPtr< SteelToggleButtonStyles_obj > __this = new SteelToggleButtonStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelToggleButtonStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelToggleButtonStyles_obj *__this = (SteelToggleButtonStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelToggleButtonStyles_obj), false, "feathers.themes.steel.components.SteelToggleButtonStyles"));
			*(void **)__this = SteelToggleButtonStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelToggleButtonStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelToggleButtonStyles",33,b4,9d,b5); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelToggleButtonStyles */ 
