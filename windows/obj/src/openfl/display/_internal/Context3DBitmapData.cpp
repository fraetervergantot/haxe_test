#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBitmapData
#include <openfl/display/_internal/Context3DBitmapData.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8b6ffc20068bc116_18_renderDrawable,"openfl.display._internal.Context3DBitmapData","renderDrawable",0x41212da5,"openfl.display._internal.Context3DBitmapData.renderDrawable","openfl/display/_internal/Context3DBitmapData.hx",18,0x6ac5d3e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8b6ffc20068bc116_48_renderDrawableMask,"openfl.display._internal.Context3DBitmapData","renderDrawableMask",0x2208d131,"openfl.display._internal.Context3DBitmapData.renderDrawableMask","openfl/display/_internal/Context3DBitmapData.hx",48,0x6ac5d3e4)
namespace openfl{
namespace display{
namespace _internal{

void Context3DBitmapData_obj::__construct() { }

Dynamic Context3DBitmapData_obj::__CreateEmpty() { return new Context3DBitmapData_obj; }

void *Context3DBitmapData_obj::_hx_vtable = 0;

Dynamic Context3DBitmapData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DBitmapData_obj > _hx_result = new Context3DBitmapData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DBitmapData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f63e92f;
}

void Context3DBitmapData_obj::renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8b6ffc20068bc116_18_renderDrawable)
HXLINE(  19)		 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  20)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE(  22)		renderer->_hx___setBlendMode(10);
HXLINE(  24)		 ::openfl::display::DisplayObjectShader shader = renderer->_hx___defaultDisplayShader;
HXLINE(  25)		renderer->setShader(shader);
HXLINE(  26)		renderer->applyBitmapData(bitmapData,renderer->_hx___upscaled,null());
HXLINE(  27)		renderer->applyMatrix(renderer->_hx___getMatrix(bitmapData->_hx___worldTransform,1));
HXLINE(  28)		renderer->applyAlpha(bitmapData->_hx___worldAlpha);
HXLINE(  29)		renderer->applyColorTransform(bitmapData->_hx___worldColorTransform);
HXLINE(  30)		renderer->updateShader();
HXLINE(  34)		 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmapData->getVertexBuffer(context,null(),null());
HXLINE(  35)		if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  35)			context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            		}
HXLINE(  36)		if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  36)			context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            		}
HXLINE(  37)		 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmapData->getIndexBuffer(context,null());
HXLINE(  38)		context->drawTriangles(indexBuffer,null(),null());
HXLINE(  44)		renderer->_hx___clearShader();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmapData_obj,renderDrawable,(void))

void Context3DBitmapData_obj::renderDrawableMask( ::openfl::display::BitmapData bitmapData, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8b6ffc20068bc116_48_renderDrawableMask)
HXLINE(  49)		 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  50)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE(  52)		 ::openfl::display::_internal::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE(  53)		renderer->setShader(shader);
HXLINE(  54)		renderer->applyBitmapData(bitmapData,renderer->_hx___upscaled,null());
HXLINE(  55)		renderer->applyMatrix(renderer->_hx___getMatrix(bitmapData->_hx___worldTransform,1));
HXLINE(  56)		renderer->updateShader();
HXLINE(  58)		 ::openfl::display3D::VertexBuffer3D vertexBuffer = bitmapData->getVertexBuffer(context,null(),null());
HXLINE(  59)		if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  59)			context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            		}
HXLINE(  60)		if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  60)			context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            		}
HXLINE(  61)		 ::openfl::display3D::IndexBuffer3D indexBuffer = bitmapData->getIndexBuffer(context,null());
HXLINE(  62)		context->drawTriangles(indexBuffer,null(),null());
HXLINE(  68)		renderer->_hx___clearShader();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DBitmapData_obj,renderDrawableMask,(void))


Context3DBitmapData_obj::Context3DBitmapData_obj()
{
}

bool Context3DBitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DBitmapData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DBitmapData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DBitmapData_obj::__mClass;

static ::String Context3DBitmapData_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void Context3DBitmapData_obj::__register()
{
	Context3DBitmapData_obj _hx_dummy;
	Context3DBitmapData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DBitmapData",bd,bc,87,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DBitmapData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DBitmapData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBitmapData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBitmapData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
