#ifndef INCLUDED_feathers_graphics_LineStyle
#define INCLUDED_feathers_graphics_LineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,graphics,LineStyle)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace feathers{
namespace graphics{


class LineStyle_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef LineStyle_obj OBJ_;

	public:
		LineStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.graphics.LineStyle",d8,bb,ac,e5); }
		::String __ToString() const { return HX_("LineStyle.",11,e5,2b,e1) + _hx_tag; }

		static ::feathers::graphics::LineStyle Bitmap(Float thickness, ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix, ::Dynamic repeat, ::Dynamic smooth);
		static ::Dynamic Bitmap_dyn();
		static ::feathers::graphics::LineStyle Gradient(Float thickness, ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::Dynamic matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod, ::Dynamic focalPointRatio);
		static ::Dynamic Gradient_dyn();
		static ::feathers::graphics::LineStyle None;
		static inline ::feathers::graphics::LineStyle None_dyn() { return None; }
		static ::feathers::graphics::LineStyle SolidColor( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit);
		static ::Dynamic SolidColor_dyn();
};

} // end namespace feathers
} // end namespace graphics

#endif /* INCLUDED_feathers_graphics_LineStyle */ 
