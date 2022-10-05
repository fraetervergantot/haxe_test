#ifndef INCLUDED_feathers_graphics_FillStyle
#define INCLUDED_feathers_graphics_FillStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,graphics,FillStyle)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace feathers{
namespace graphics{


class FillStyle_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FillStyle_obj OBJ_;

	public:
		FillStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.graphics.FillStyle",e9,de,58,6d); }
		::String __ToString() const { return HX_("FillStyle.",e0,70,1e,10) + _hx_tag; }

		static ::feathers::graphics::FillStyle Bitmap( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix, ::Dynamic repeat, ::Dynamic smoothing);
		static ::Dynamic Bitmap_dyn();
		static ::feathers::graphics::FillStyle Gradient( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::Dynamic matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod, ::Dynamic focalPointRatio);
		static ::Dynamic Gradient_dyn();
		static ::feathers::graphics::FillStyle None;
		static inline ::feathers::graphics::FillStyle None_dyn() { return None; }
		static ::feathers::graphics::FillStyle SolidColor(int color, ::Dynamic alpha);
		static ::Dynamic SolidColor_dyn();
};

} // end namespace feathers
} // end namespace graphics

#endif /* INCLUDED_feathers_graphics_FillStyle */ 
