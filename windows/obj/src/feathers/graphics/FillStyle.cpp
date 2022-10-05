#include <hxcpp.h>

#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace feathers{
namespace graphics{

::feathers::graphics::FillStyle FillStyle_obj::Bitmap( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix, ::Dynamic repeat, ::Dynamic smoothing)
{
	return ::hx::CreateEnum< FillStyle_obj >(HX_("Bitmap",0f,84,a0,25),1,4)->_hx_init(0,bitmapData)->_hx_init(1,matrix)->_hx_init(2,repeat)->_hx_init(3,smoothing);
}

::feathers::graphics::FillStyle FillStyle_obj::Gradient( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::Dynamic matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod, ::Dynamic focalPointRatio)
{
	return ::hx::CreateEnum< FillStyle_obj >(HX_("Gradient",10,f6,f0,03),2,8)->_hx_init(0,type)->_hx_init(1,colors)->_hx_init(2,alphas)->_hx_init(3,ratios)->_hx_init(4,matrix)->_hx_init(5,spreadMethod)->_hx_init(6,interpolationMethod)->_hx_init(7,focalPointRatio);
}

::feathers::graphics::FillStyle FillStyle_obj::None;

::feathers::graphics::FillStyle FillStyle_obj::SolidColor(int color, ::Dynamic alpha)
{
	return ::hx::CreateEnum< FillStyle_obj >(HX_("SolidColor",58,35,a1,d7),0,2)->_hx_init(0,color)->_hx_init(1,alpha);
}

bool FillStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bitmap",0f,84,a0,25)) { outValue = FillStyle_obj::Bitmap_dyn(); return true; }
	if (inName==HX_("Gradient",10,f6,f0,03)) { outValue = FillStyle_obj::Gradient_dyn(); return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = FillStyle_obj::None; return true; }
	if (inName==HX_("SolidColor",58,35,a1,d7)) { outValue = FillStyle_obj::SolidColor_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FillStyle_obj)

int FillStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Bitmap",0f,84,a0,25)) return 1;
	if (inName==HX_("Gradient",10,f6,f0,03)) return 2;
	if (inName==HX_("None",d8,3e,e3,33)) return 3;
	if (inName==HX_("SolidColor",58,35,a1,d7)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FillStyle_obj,Bitmap,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(FillStyle_obj,Gradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FillStyle_obj,SolidColor,return)

int FillStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Bitmap",0f,84,a0,25)) return 4;
	if (inName==HX_("Gradient",10,f6,f0,03)) return 8;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("SolidColor",58,35,a1,d7)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val FillStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Bitmap",0f,84,a0,25)) return Bitmap_dyn();
	if (inName==HX_("Gradient",10,f6,f0,03)) return Gradient_dyn();
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("SolidColor",58,35,a1,d7)) return SolidColor_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FillStyle_obj_sStaticFields[] = {
	HX_("SolidColor",58,35,a1,d7),
	HX_("Bitmap",0f,84,a0,25),
	HX_("Gradient",10,f6,f0,03),
	HX_("None",d8,3e,e3,33),
	::String(null())
};

::hx::Class FillStyle_obj::__mClass;

Dynamic __Create_FillStyle_obj() { return new FillStyle_obj; }

void FillStyle_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.graphics.FillStyle",e9,de,58,6d), ::hx::TCanCast< FillStyle_obj >,FillStyle_obj_sStaticFields,0,
	&__Create_FillStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFillStyle_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FillStyle_obj::__GetStatic;
}

void FillStyle_obj::__boot()
{
None = ::hx::CreateConstEnum< FillStyle_obj >(HX_("None",d8,3e,e3,33),3);
}


} // end namespace feathers
} // end namespace graphics
