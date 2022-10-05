#ifndef INCLUDED_feathers_themes_steel_components_SteelLabelStyles
#define INCLUDED_feathers_themes_steel_components_SteelLabelStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelLabelStyles)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelLabelStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelLabelStyles_obj OBJ_;
		SteelLabelStyles_obj();

	public:
		enum { _hx_ClassId = 0x7a0b3776 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelLabelStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelLabelStyles"); }

		inline static ::hx::ObjectPtr< SteelLabelStyles_obj > __new() {
			::hx::ObjectPtr< SteelLabelStyles_obj > __this = new SteelLabelStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelLabelStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelLabelStyles_obj *__this = (SteelLabelStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelLabelStyles_obj), false, "feathers.themes.steel.components.SteelLabelStyles"));
			*(void **)__this = SteelLabelStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelLabelStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelLabelStyles",0b,4f,bd,6b); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelLabelStyles */ 
