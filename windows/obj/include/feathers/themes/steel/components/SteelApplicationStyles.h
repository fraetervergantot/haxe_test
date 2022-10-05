#ifndef INCLUDED_feathers_themes_steel_components_SteelApplicationStyles
#define INCLUDED_feathers_themes_steel_components_SteelApplicationStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS4(feathers,themes,steel,components,SteelApplicationStyles)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace themes{
namespace steel{
namespace components{


class HXCPP_CLASS_ATTRIBUTES SteelApplicationStyles_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SteelApplicationStyles_obj OBJ_;
		SteelApplicationStyles_obj();

	public:
		enum { _hx_ClassId = 0x62eaa20e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.themes.steel.components.SteelApplicationStyles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.themes.steel.components.SteelApplicationStyles"); }

		inline static ::hx::ObjectPtr< SteelApplicationStyles_obj > __new() {
			::hx::ObjectPtr< SteelApplicationStyles_obj > __this = new SteelApplicationStyles_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SteelApplicationStyles_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SteelApplicationStyles_obj *__this = (SteelApplicationStyles_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SteelApplicationStyles_obj), false, "feathers.themes.steel.components.SteelApplicationStyles"));
			*(void **)__this = SteelApplicationStyles_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SteelApplicationStyles_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SteelApplicationStyles",27,67,c6,fa); }

		static void initialize( ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic initialize_dyn();

		static void refreshStageColor( ::openfl::display::Stage stage, ::feathers::themes::steel::BaseSteelTheme theme);
		static ::Dynamic refreshStageColor_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel
} // end namespace components

#endif /* INCLUDED_feathers_themes_steel_components_SteelApplicationStyles */ 
