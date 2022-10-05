#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_utils_FocusUtil
#include <feathers/utils/FocusUtil.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_52e6fbeec7761608_27_findAllFocusableObjects,"feathers.utils.FocusUtil","findAllFocusableObjects",0x6b92ae7b,"feathers.utils.FocusUtil.findAllFocusableObjects","feathers/utils/FocusUtil.hx",27,0x5a756601)
namespace feathers{
namespace utils{

void FocusUtil_obj::__construct() { }

Dynamic FocusUtil_obj::__CreateEmpty() { return new FocusUtil_obj; }

void *FocusUtil_obj::_hx_vtable = 0;

Dynamic FocusUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusUtil_obj > _hx_result = new FocusUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c3bd9c1;
}

::Array< ::Dynamic> FocusUtil_obj::findAllFocusableObjects( ::openfl::display::DisplayObject target,::Array< ::Dynamic> result){
            	HX_STACKFRAME(&_hx_pos_52e6fbeec7761608_27_findAllFocusableObjects)
HXLINE(  28)		if (::hx::IsNull( result )) {
HXLINE(  29)			result = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  31)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE(  32)			::Dynamic focusableObject =  ::hx::interface_check(target,0x701686fd);
HXLINE(  33)			if (::feathers::core::IFocusObject_obj::get_focusEnabled(focusableObject)) {
HXLINE(  34)				result->push(focusableObject);
            			}
            		}
HXLINE(  37)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE(  38)			::Dynamic focusExtras =  ::hx::interface_check(target,0x21fbac21);
HXLINE(  39)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasBefore(focusExtras);
HXLINE(  40)			if (::hx::IsNotNull( extras )) {
HXLINE(  41)				int _g = 0;
HXDLIN(  41)				int _g1 = extras->length;
HXDLIN(  41)				while((_g < _g1)){
HXLINE(  41)					_g = (_g + 1);
HXDLIN(  41)					int i = (_g - 1);
HXLINE(  42)					 ::openfl::display::DisplayObject childOfTarget = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE(  43)					::feathers::utils::FocusUtil_obj::findAllFocusableObjects(childOfTarget,result);
            				}
            			}
            		}
HXLINE(  47)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE(  48)			bool _hx_tmp;
HXDLIN(  48)			if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusContainer >())) {
HXLINE(  48)				_hx_tmp = ::feathers::core::IFocusContainer_obj::get_childFocusEnabled( ::hx::interface_check(target,0xf7aca7c3));
            			}
            			else {
HXLINE(  48)				_hx_tmp = false;
            			}
HXDLIN(  48)			if (_hx_tmp) {
HXLINE(  49)				 ::openfl::display::DisplayObjectContainer otherContainer = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(target);
HXLINE(  50)				{
HXLINE(  50)					int _g = 0;
HXDLIN(  50)					int _g1 = otherContainer->get_numChildren();
HXDLIN(  50)					while((_g < _g1)){
HXLINE(  50)						_g = (_g + 1);
HXDLIN(  50)						int i = (_g - 1);
HXLINE(  51)						 ::openfl::display::DisplayObject childOfTarget = otherContainer->getChildAt(i);
HXLINE(  52)						::feathers::utils::FocusUtil_obj::findAllFocusableObjects(childOfTarget,result);
            					}
            				}
            			}
            		}
            		else {
HXLINE(  55)			if (::Std_obj::isOfType(target,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE(  56)				 ::openfl::display::DisplayObjectContainer otherContainer = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(target);
HXLINE(  57)				{
HXLINE(  57)					int _g = 0;
HXDLIN(  57)					int _g1 = otherContainer->get_numChildren();
HXDLIN(  57)					while((_g < _g1)){
HXLINE(  57)						_g = (_g + 1);
HXDLIN(  57)						int i = (_g - 1);
HXLINE(  58)						 ::openfl::display::DisplayObject childOfTarget = otherContainer->getChildAt(i);
HXLINE(  59)						::feathers::utils::FocusUtil_obj::findAllFocusableObjects(childOfTarget,result);
            					}
            				}
            			}
            		}
HXLINE(  62)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IFocusExtras >())) {
HXLINE(  63)			::Dynamic focusExtras =  ::hx::interface_check(target,0x21fbac21);
HXLINE(  64)			::Array< ::Dynamic> extras = ::feathers::core::IFocusExtras_obj::get_focusExtrasAfter(focusExtras);
HXLINE(  65)			if (::hx::IsNotNull( extras )) {
HXLINE(  66)				int _g = 0;
HXDLIN(  66)				int _g1 = extras->length;
HXDLIN(  66)				while((_g < _g1)){
HXLINE(  66)					_g = (_g + 1);
HXDLIN(  66)					int i = (_g - 1);
HXLINE(  67)					 ::openfl::display::DisplayObject childOfTarget = extras->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE(  68)					::feathers::utils::FocusUtil_obj::findAllFocusableObjects(childOfTarget,result);
            				}
            			}
            		}
HXLINE(  72)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FocusUtil_obj,findAllFocusableObjects,return )


FocusUtil_obj::FocusUtil_obj()
{
}

bool FocusUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"findAllFocusableObjects") ) { outValue = findAllFocusableObjects_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FocusUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FocusUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FocusUtil_obj::__mClass;

static ::String FocusUtil_obj_sStaticFields[] = {
	HX_("findAllFocusableObjects",0a,20,13,cb),
	::String(null())
};

void FocusUtil_obj::__register()
{
	FocusUtil_obj _hx_dummy;
	FocusUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.FocusUtil",df,e3,f1,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FocusUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FocusUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
