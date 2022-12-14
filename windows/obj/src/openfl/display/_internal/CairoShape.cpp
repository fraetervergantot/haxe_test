#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoShape
#include <openfl/display/_internal/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_27_render,"openfl.display._internal.CairoShape","render",0xf0c8232f,"openfl.display._internal.CairoShape.render","openfl/display/_internal/CairoShape.hx",27,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_83_render,"openfl.display._internal.CairoShape","render",0xf0c8232f,"openfl.display._internal.CairoShape.render","openfl/display/_internal/CairoShape.hx",83,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_178_renderDrawable,"openfl.display._internal.CairoShape","renderDrawable",0xf82011ed,"openfl.display._internal.CairoShape.renderDrawable","openfl/display/_internal/CairoShape.hx",178,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_183_renderDrawableMask,"openfl.display._internal.CairoShape","renderDrawableMask",0x01237979,"openfl.display._internal.CairoShape.renderDrawableMask","openfl/display/_internal/CairoShape.hx",183,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_20_boot,"openfl.display._internal.CairoShape","boot",0x5e1063cb,"openfl.display._internal.CairoShape.boot","openfl/display/_internal/CairoShape.hx",20,0x7720bd06)
HX_LOCAL_STACK_FRAME(_hx_pos_b1fba0bba755bee2_23_boot,"openfl.display._internal.CairoShape","boot",0x5e1063cb,"openfl.display._internal.CairoShape.boot","openfl/display/_internal/CairoShape.hx",23,0x7720bd06)
namespace openfl{
namespace display{
namespace _internal{

void CairoShape_obj::__construct() { }

Dynamic CairoShape_obj::__CreateEmpty() { return new CairoShape_obj; }

void *CairoShape_obj::_hx_vtable = 0;

Dynamic CairoShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoShape_obj > _hx_result = new CairoShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28fc0e6f;
}

 ::lime::math::Matrix3 CairoShape_obj::sourceTransform;

void CairoShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_27_render)
HXLINE(  29)		if (!(shape->_hx___renderable)) {
HXLINE(  29)			return;
            		}
HXLINE(  31)		Float alpha = renderer->_hx___getAlpha(shape->_hx___worldAlpha);
HXLINE(  32)		if ((alpha <= 0)) {
HXLINE(  32)			return;
            		}
HXLINE(  34)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  36)		if (::hx::IsNotNull( graphics )) {
HXLINE(  38)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,renderer);
HXLINE(  40)			int width = graphics->_hx___width;
HXLINE(  41)			int height = graphics->_hx___height;
HXLINE(  42)			 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  44)			bool _hx_tmp;
HXDLIN(  44)			bool _hx_tmp1;
HXDLIN(  44)			bool _hx_tmp2;
HXDLIN(  44)			if (::hx::IsNotNull( cairo )) {
HXLINE(  44)				_hx_tmp2 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  44)				_hx_tmp2 = false;
            			}
HXDLIN(  44)			if (_hx_tmp2) {
HXLINE(  44)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = false;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE(  44)				_hx_tmp = false;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  46)				 ::openfl::geom::Matrix transform = graphics->_hx___worldTransform;
HXLINE(  47)				 ::openfl::geom::Rectangle scale9Grid = shape->_hx___worldScale9Grid;
HXLINE(  49)				renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  50)				renderer->_hx___pushMaskObject(shape,null());
HXLINE(  52)				bool _hx_tmp;
HXDLIN(  52)				bool _hx_tmp1;
HXDLIN(  52)				if (::hx::IsNotNull( scale9Grid )) {
HXLINE(  52)					_hx_tmp1 = (transform->b == 0);
            				}
            				else {
HXLINE(  52)					_hx_tmp1 = false;
            				}
HXDLIN(  52)				if (_hx_tmp1) {
HXLINE(  52)					_hx_tmp = (transform->c == 0);
            				}
            				else {
HXLINE(  52)					_hx_tmp = false;
            				}
HXDLIN(  52)				if (_hx_tmp) {
            					HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_0,Float,alpha, ::openfl::display::CairoRenderer,renderer, ::lime::graphics::cairo::Cairo,cairo, ::Dynamic,pattern, ::openfl::geom::Matrix,transform, ::openfl::geom::Matrix,renderTransform) HXARGC(8)
            					void _hx_run(Float sx,Float sy,Float sWidth,Float sHeight,Float dx,Float dy,Float dWidth,Float dHeight){
            						HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_83_render)
HXLINE(  84)						renderTransform->a = (dWidth / sWidth);
HXLINE(  85)						renderTransform->d = (dHeight / sHeight);
HXLINE(  86)						renderTransform->tx = (transform->tx + dx);
HXLINE(  87)						renderTransform->ty = (transform->ty + dy);
HXLINE(  89)						renderer->applyMatrix(renderTransform,cairo);
HXLINE(  91)						::openfl::display::_internal::CairoShape_obj::sourceTransform->tx = sx;
HXLINE(  92)						::openfl::display::_internal::CairoShape_obj::sourceTransform->ty = sy;
HXLINE(  93)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,::openfl::display::_internal::CairoShape_obj::sourceTransform);
HXLINE(  94)						cairo->set_source(pattern);
HXLINE(  96)						cairo->save();
HXLINE(  98)						cairo->newPath();
HXLINE(  99)						cairo->rectangle(( (Float)(0) ),( (Float)(0) ),sWidth,sHeight);
HXLINE( 100)						cairo->clip();
HXLINE( 102)						if ((alpha == 1)) {
HXLINE( 104)							cairo->paint();
            						}
            						else {
HXLINE( 108)							cairo->paintWithAlpha(alpha);
            						}
HXLINE( 111)						cairo->restore();
            					}
            					HX_END_LOCAL_FUNC8((void))

HXLINE(  54)					 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  56)					 ::openfl::geom::Matrix renderTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  58)					Float scaleX = graphics->_hx___renderTransform->a;
HXLINE(  59)					Float scaleY = graphics->_hx___renderTransform->d;
HXLINE(  60)					Float renderScaleX = (transform->a / graphics->_hx___bitmapScale);
HXLINE(  61)					Float renderScaleY = (transform->d / graphics->_hx___bitmapScale);
HXLINE(  63)					int left = ::Math_obj::round((scale9Grid->x * scaleX));
HXLINE(  64)					int top = ::Math_obj::round((scale9Grid->y * scaleY));
HXLINE(  65)					Float right = bounds->get_right();
HXDLIN(  65)					int right1 = ::Math_obj::round(((right - scale9Grid->get_right()) * scaleX));
HXLINE(  66)					Float bottom = bounds->get_bottom();
HXDLIN(  66)					int bottom1 = ::Math_obj::round(((bottom - scale9Grid->get_bottom()) * scaleY));
HXLINE(  67)					int centerWidth = ::Math_obj::round((scale9Grid->width * scaleX));
HXLINE(  68)					int centerHeight = ::Math_obj::round((scale9Grid->height * scaleY));
HXLINE(  70)					int renderLeft = ::Math_obj::round((scale9Grid->x * renderScaleX));
HXLINE(  71)					int renderTop = ::Math_obj::round((scale9Grid->y * renderScaleY));
HXLINE(  72)					Float renderRight = bounds->get_right();
HXDLIN(  72)					int renderRight1 = ::Math_obj::round(((renderRight - scale9Grid->get_right()) * renderScaleX));
HXLINE(  73)					Float renderBottom = bounds->get_bottom();
HXDLIN(  73)					int renderBottom1 = ::Math_obj::round(((renderBottom - scale9Grid->get_bottom()) * renderScaleY));
HXLINE(  74)					int renderCenterWidth = ((::Math_obj::round((( (Float)(width) ) * renderScaleX)) - renderLeft) - renderRight1);
HXLINE(  75)					int renderCenterHeight = ((::Math_obj::round((( (Float)(height) ) * renderScaleY)) - renderTop) - renderBottom1);
HXLINE(  77)					 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(graphics->_hx___cairo->get_target());
HXLINE(  79)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,3);
HXLINE(  82)					 ::Dynamic drawImage =  ::Dynamic(new _hx_Closure_0(alpha,renderer,cairo,pattern,transform,renderTransform));
HXLINE( 114)					bool _hx_tmp;
HXDLIN( 114)					if ((centerWidth != 0)) {
HXLINE( 114)						_hx_tmp = (centerHeight != 0);
            					}
            					else {
HXLINE( 114)						_hx_tmp = false;
            					}
HXDLIN( 114)					if (_hx_tmp) {
HXLINE( 116)						drawImage(0,0,left,top,0,0,renderLeft,renderTop);
HXLINE( 117)						drawImage(left,0,centerWidth,top,renderLeft,0,renderCenterWidth,renderTop);
HXLINE( 118)						drawImage((left + centerWidth),0,right1,top,(renderLeft + renderCenterWidth),0,renderRight1,renderTop);
HXLINE( 120)						drawImage(0,top,left,centerHeight,0,renderTop,renderLeft,renderCenterHeight);
HXLINE( 121)						drawImage(left,top,centerWidth,centerHeight,renderLeft,renderTop,renderCenterWidth,renderCenterHeight);
HXLINE( 122)						drawImage((left + centerWidth),top,right1,centerHeight,(renderLeft + renderCenterWidth),renderTop,renderRight1,renderCenterHeight);
HXLINE( 124)						drawImage(0,(top + centerHeight),left,bottom1,0,(renderTop + renderCenterHeight),renderLeft,renderBottom1);
HXLINE( 125)						drawImage(left,(top + centerHeight),centerWidth,bottom1,renderLeft,(renderTop + renderCenterHeight),renderCenterWidth,renderBottom1);
HXLINE( 126)						drawImage((left + centerWidth),(top + centerHeight),right1,bottom1,(renderLeft + renderCenterWidth),(renderTop + renderCenterHeight),renderRight1,renderBottom1);
            					}
            					else {
HXLINE( 129)						bool _hx_tmp;
HXDLIN( 129)						if ((centerWidth == 0)) {
HXLINE( 129)							_hx_tmp = (centerHeight != 0);
            						}
            						else {
HXLINE( 129)							_hx_tmp = false;
            						}
HXDLIN( 129)						if (_hx_tmp) {
HXLINE( 131)							int renderWidth = ((renderLeft + renderCenterWidth) + renderRight1);
HXLINE( 133)							drawImage(0,0,width,top,0,0,renderWidth,renderTop);
HXLINE( 134)							drawImage(0,top,width,centerHeight,0,renderTop,renderWidth,renderCenterHeight);
HXLINE( 135)							drawImage(0,(top + centerHeight),width,bottom1,0,(renderTop + renderCenterHeight),renderWidth,renderBottom1);
            						}
            						else {
HXLINE( 137)							bool _hx_tmp;
HXDLIN( 137)							if ((centerHeight == 0)) {
HXLINE( 137)								_hx_tmp = (centerWidth != 0);
            							}
            							else {
HXLINE( 137)								_hx_tmp = false;
            							}
HXDLIN( 137)							if (_hx_tmp) {
HXLINE( 139)								int renderHeight = ((renderTop + renderCenterHeight) + renderBottom1);
HXLINE( 141)								drawImage(0,0,left,height,0,0,renderLeft,renderHeight);
HXLINE( 142)								drawImage(left,0,centerWidth,height,renderLeft,0,renderCenterWidth,renderHeight);
HXLINE( 143)								drawImage((left + centerWidth),0,right1,height,(renderLeft + renderCenterWidth),0,renderRight1,renderHeight);
            							}
            						}
            					}
HXLINE( 146)					::openfl::geom::Matrix_obj::_hx___pool->release(renderTransform);
            				}
            				else {
HXLINE( 150)					 ::openfl::geom::Matrix renderTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 151)					renderTransform->scale((( (Float)(1) ) / graphics->_hx___bitmapScale),(( (Float)(1) ) / graphics->_hx___bitmapScale));
HXLINE( 152)					renderTransform->concat(transform);
HXLINE( 154)					renderer->applyMatrix(renderTransform,cairo);
HXLINE( 156)					 ::lime::graphics::cairo::Cairo cairo1 = cairo;
HXDLIN( 156)					cairo1->setSourceSurface(graphics->_hx___cairo->get_target(),( (Float)(0) ),( (Float)(0) ));
HXLINE( 158)					if ((alpha >= 1)) {
HXLINE( 160)						cairo->paint();
            					}
            					else {
HXLINE( 164)						cairo->paintWithAlpha(alpha);
            					}
HXLINE( 167)					::openfl::geom::Matrix_obj::_hx___pool->release(renderTransform);
            				}
HXLINE( 170)				renderer->_hx___popMaskObject(shape,null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))

void CairoShape_obj::renderDrawable( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_178_renderDrawable)
HXDLIN( 178)		renderer->_hx___updateCacheBitmap(shape,false);
HXDLIN( 178)		bool _hx_tmp;
HXDLIN( 178)		if (::hx::IsNotNull( shape->_hx___cacheBitmap )) {
HXDLIN( 178)			_hx_tmp = !(shape->_hx___isCacheBitmapRender);
            		}
            		else {
HXDLIN( 178)			_hx_tmp = false;
            		}
HXDLIN( 178)		if (_hx_tmp) {
HXDLIN( 178)			 ::openfl::display::Bitmap bitmap = shape->_hx___cacheBitmap;
HXDLIN( 178)			if (bitmap->_hx___renderable) {
HXDLIN( 178)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 178)				bool _hx_tmp;
HXDLIN( 178)				bool _hx_tmp1;
HXDLIN( 178)				if ((alpha > 0)) {
HXDLIN( 178)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXDLIN( 178)					_hx_tmp1 = false;
            				}
HXDLIN( 178)				if (_hx_tmp1) {
HXDLIN( 178)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXDLIN( 178)					_hx_tmp = false;
            				}
HXDLIN( 178)				if (_hx_tmp) {
HXDLIN( 178)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 178)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 178)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 178)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 178)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 178)					if (::hx::IsNotNull( surface )) {
HXDLIN( 178)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 178)						int _hx_tmp;
HXDLIN( 178)						bool _hx_tmp1;
HXDLIN( 178)						if (renderer->_hx___allowSmoothing) {
HXDLIN( 178)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXDLIN( 178)							_hx_tmp1 = false;
            						}
HXDLIN( 178)						if (_hx_tmp1) {
HXDLIN( 178)							_hx_tmp = 1;
            						}
            						else {
HXDLIN( 178)							_hx_tmp = 3;
            						}
HXDLIN( 178)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 178)						cairo->set_source(pattern);
HXDLIN( 178)						if ((alpha == 1)) {
HXDLIN( 178)							cairo->paint();
            						}
            						else {
HXDLIN( 178)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 178)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 178)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXDLIN( 178)			::openfl::display::_internal::CairoDisplayObject_obj::render(shape,renderer);
            		}
HXDLIN( 178)		renderer->_hx___renderEvent(shape);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,renderDrawable,(void))

void CairoShape_obj::renderDrawableMask( ::openfl::display::Shape shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_183_renderDrawableMask)
HXDLIN( 183)		if (::hx::IsNotNull( shape->_hx___graphics )) {
HXDLIN( 183)			::openfl::display::_internal::CairoGraphics_obj::renderMask(shape->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,renderDrawableMask,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sourceTransform") ) { outValue = ( sourceTransform ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

bool CairoShape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"sourceTransform") ) { sourceTransform=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoShape_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoShape_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &CairoShape_obj::sourceTransform,HX_("sourceTransform",11,e9,32,19)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoShape_obj::sourceTransform,"sourceTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::sourceTransform,"sourceTransform");
};

#endif

::hx::Class CairoShape_obj::__mClass;

static ::String CairoShape_obj_sStaticFields[] = {
	HX_("sourceTransform",11,e9,32,19),
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoShape_obj::__register()
{
	CairoShape_obj _hx_dummy;
	CairoShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoShape",75,a7,5d,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoShape_obj::__SetStatic;
	__mClass->mMarkFunc = CairoShape_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoShape_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoShape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b1fba0bba755bee2_20_boot)
HXDLIN(  20)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b1fba0bba755bee2_23_boot)
HXDLIN(  23)		sourceTransform =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
