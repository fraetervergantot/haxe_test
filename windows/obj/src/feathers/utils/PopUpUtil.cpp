#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
#endif
#ifndef INCLUDED_feathers_utils_PopUpUtil
#include <feathers/utils/PopUpUtil.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_81f1c6f5c63590a7_27_isTopLevelPopUpOrIsContainedByTopLevelPopUp,"feathers.utils.PopUpUtil","isTopLevelPopUpOrIsContainedByTopLevelPopUp",0x95d7c0b8,"feathers.utils.PopUpUtil.isTopLevelPopUpOrIsContainedByTopLevelPopUp","feathers/utils/PopUpUtil.hx",27,0xa5f34e0d)
namespace feathers{
namespace utils{

void PopUpUtil_obj::__construct() { }

Dynamic PopUpUtil_obj::__CreateEmpty() { return new PopUpUtil_obj; }

void *PopUpUtil_obj::_hx_vtable = 0;

Dynamic PopUpUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PopUpUtil_obj > _hx_result = new PopUpUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PopUpUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20a1b235;
}

bool PopUpUtil_obj::isTopLevelPopUpOrIsContainedByTopLevelPopUp( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_81f1c6f5c63590a7_27_isTopLevelPopUpOrIsContainedByTopLevelPopUp)
HXLINE(  28)		if (::hx::IsNull( target->stage )) {
HXLINE(  29)			return false;
            		}
HXLINE(  31)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(target->stage);
HXLINE(  32)		{
HXLINE(  32)			int _g = ::feathers::core::IPopUpManager_obj::get_popUpCount(popUpManager);
HXDLIN(  32)			int _g1 = (_g - ::feathers::core::IPopUpManager_obj::get_topLevelPopUpCount(popUpManager));
HXDLIN(  32)			int _g2 = ::feathers::core::IPopUpManager_obj::get_popUpCount(popUpManager);
HXDLIN(  32)			while((_g1 < _g2)){
HXLINE(  32)				_g1 = (_g1 + 1);
HXDLIN(  32)				int i = (_g1 - 1);
HXLINE(  33)				 ::openfl::display::DisplayObject popUp = ::feathers::core::IPopUpManager_obj::getPopUpAt(popUpManager,i);
HXLINE(  34)				if (::hx::IsInstanceEq( target,popUp )) {
HXLINE(  35)					return true;
            				}
HXLINE(  37)				if (::Std_obj::isOfType(popUp,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE(  38)					 ::openfl::display::DisplayObjectContainer popUpContainer = ::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(popUp);
HXLINE(  39)					if (popUpContainer->contains(target)) {
HXLINE(  40)						return true;
            					}
            				}
            			}
            		}
HXLINE(  44)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpUtil_obj,isTopLevelPopUpOrIsContainedByTopLevelPopUp,return )


PopUpUtil_obj::PopUpUtil_obj()
{
}

bool PopUpUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 43:
		if (HX_FIELD_EQ(inName,"isTopLevelPopUpOrIsContainedByTopLevelPopUp") ) { outValue = isTopLevelPopUpOrIsContainedByTopLevelPopUp_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PopUpUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PopUpUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class PopUpUtil_obj::__mClass;

static ::String PopUpUtil_obj_sStaticFields[] = {
	HX_("isTopLevelPopUpOrIsContainedByTopLevelPopUp",53,ed,f3,c4),
	::String(null())
};

void PopUpUtil_obj::__register()
{
	PopUpUtil_obj _hx_dummy;
	PopUpUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.PopUpUtil",53,bc,57,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PopUpUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PopUpUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PopUpUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PopUpUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PopUpUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
