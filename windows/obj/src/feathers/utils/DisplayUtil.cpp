#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_DisplayUtil
#include <feathers/utils/DisplayUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d22865404809d213_31_getDisplayObjectDepthFromStage,"feathers.utils.DisplayUtil","getDisplayObjectDepthFromStage",0xe1183b41,"feathers.utils.DisplayUtil.getDisplayObjectDepthFromStage","feathers/utils/DisplayUtil.hx",31,0x0c5f9617)
HX_LOCAL_STACK_FRAME(_hx_pos_d22865404809d213_49_getConcatenatedScaleX,"feathers.utils.DisplayUtil","getConcatenatedScaleX",0x423ff18e,"feathers.utils.DisplayUtil.getConcatenatedScaleX","feathers/utils/DisplayUtil.hx",49,0x0c5f9617)
HX_LOCAL_STACK_FRAME(_hx_pos_d22865404809d213_68_getConcatenatedScaleY,"feathers.utils.DisplayUtil","getConcatenatedScaleY",0x423ff18f,"feathers.utils.DisplayUtil.getConcatenatedScaleY","feathers/utils/DisplayUtil.hx",68,0x0c5f9617)
HX_LOCAL_STACK_FRAME(_hx_pos_d22865404809d213_87_getConcatenatedScale,"feathers.utils.DisplayUtil","getConcatenatedScale",0x0e12a78a,"feathers.utils.DisplayUtil.getConcatenatedScale","feathers/utils/DisplayUtil.hx",87,0x0c5f9617)
namespace feathers{
namespace utils{

void DisplayUtil_obj::__construct() { }

Dynamic DisplayUtil_obj::__CreateEmpty() { return new DisplayUtil_obj; }

void *DisplayUtil_obj::_hx_vtable = 0;

Dynamic DisplayUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayUtil_obj > _hx_result = new DisplayUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72c98223;
}

int DisplayUtil_obj::getDisplayObjectDepthFromStage( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_d22865404809d213_31_getDisplayObjectDepthFromStage)
HXLINE(  32)		if (::hx::IsNull( target->stage )) {
HXLINE(  33)			return -1;
            		}
HXLINE(  35)		int count = 0;
HXLINE(  36)		while(::hx::IsNotNull( target->parent )){
HXLINE(  37)			target = target->parent;
HXLINE(  38)			count = (count + 1);
            		}
HXLINE(  40)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayUtil_obj,getDisplayObjectDepthFromStage,return )

Float DisplayUtil_obj::getConcatenatedScaleX( ::openfl::display::DisplayObject target){
            	HX_GC_STACKFRAME(&_hx_pos_d22865404809d213_49_getConcatenatedScaleX)
HXLINE(  50)		if (::hx::IsNull( target )) {
HXLINE(  51)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("getConcatenatedScaleX target must not be null",22,c7,af,69)));
            		}
HXLINE(  53)		Float result = ((Float)1.0);
HXLINE(  54)		 ::openfl::display::DisplayObject current = target;
HXLINE(  55)		while(true){
HXLINE(  56)			result = (result / current->get_scaleX());
HXLINE(  57)			current = current->parent;
HXLINE(  58)			bool _hx_tmp;
HXDLIN(  58)			if (::hx::IsNotNull( current )) {
HXLINE(  58)				_hx_tmp = ::hx::IsInstanceNotEq( current,current->stage );
            			}
            			else {
HXLINE(  58)				_hx_tmp = false;
            			}
HXLINE(  55)			if (!(_hx_tmp)) {
HXLINE(  55)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE(  59)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayUtil_obj,getConcatenatedScaleX,return )

Float DisplayUtil_obj::getConcatenatedScaleY( ::openfl::display::DisplayObject target){
            	HX_GC_STACKFRAME(&_hx_pos_d22865404809d213_68_getConcatenatedScaleY)
HXLINE(  69)		if (::hx::IsNull( target )) {
HXLINE(  70)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("getConcatenatedScaleY target must not be null",23,02,b7,72)));
            		}
HXLINE(  72)		Float result = ((Float)1.0);
HXLINE(  73)		 ::openfl::display::DisplayObject current = target;
HXLINE(  74)		while(true){
HXLINE(  75)			result = (result / current->get_scaleY());
HXLINE(  76)			current = current->parent;
HXLINE(  77)			bool _hx_tmp;
HXDLIN(  77)			if (::hx::IsNotNull( current )) {
HXLINE(  77)				_hx_tmp = ::hx::IsInstanceNotEq( current,current->stage );
            			}
            			else {
HXLINE(  77)				_hx_tmp = false;
            			}
HXLINE(  74)			if (!(_hx_tmp)) {
HXLINE(  74)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  78)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayUtil_obj,getConcatenatedScaleY,return )

 ::openfl::geom::Point DisplayUtil_obj::getConcatenatedScale( ::openfl::display::DisplayObject target, ::openfl::geom::Point result){
            	HX_GC_STACKFRAME(&_hx_pos_d22865404809d213_87_getConcatenatedScale)
HXLINE(  88)		if (::hx::IsNull( target )) {
HXLINE(  89)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("getConcatenatedScale target must not be null",74,93,1a,b1)));
            		}
HXLINE(  91)		Float resultX = ((Float)1.0);
HXLINE(  92)		Float resultY = ((Float)1.0);
HXLINE(  93)		 ::openfl::display::DisplayObject current = target;
HXLINE(  94)		while(true){
HXLINE(  95)			resultX = (resultX / current->get_scaleX());
HXLINE(  96)			resultY = (resultY / current->get_scaleY());
HXLINE(  97)			current = current->parent;
HXLINE(  98)			bool _hx_tmp;
HXDLIN(  98)			if (::hx::IsNotNull( current )) {
HXLINE(  98)				_hx_tmp = ::hx::IsInstanceNotEq( current,current->stage );
            			}
            			else {
HXLINE(  98)				_hx_tmp = false;
            			}
HXLINE(  94)			if (!(_hx_tmp)) {
HXLINE(  94)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE(  99)		if (::hx::IsNull( result )) {
HXLINE( 100)			return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,resultX,resultY);
            		}
HXLINE( 102)		result->setTo(resultX,resultY);
HXLINE( 103)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DisplayUtil_obj,getConcatenatedScale,return )


DisplayUtil_obj::DisplayUtil_obj()
{
}

bool DisplayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"getConcatenatedScale") ) { outValue = getConcatenatedScale_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getConcatenatedScaleX") ) { outValue = getConcatenatedScaleX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getConcatenatedScaleY") ) { outValue = getConcatenatedScaleY_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"getDisplayObjectDepthFromStage") ) { outValue = getDisplayObjectDepthFromStage_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DisplayUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DisplayUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DisplayUtil_obj::__mClass;

static ::String DisplayUtil_obj_sStaticFields[] = {
	HX_("getDisplayObjectDepthFromStage",fc,d8,f9,cc),
	HX_("getConcatenatedScaleX",33,f7,14,d8),
	HX_("getConcatenatedScaleY",34,f7,14,d8),
	HX_("getConcatenatedScale",85,dd,2c,6f),
	::String(null())
};

void DisplayUtil_obj::__register()
{
	DisplayUtil_obj _hx_dummy;
	DisplayUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.DisplayUtil",89,ae,b9,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisplayUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DisplayUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
