#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_DefaultFocusManager
#include <feathers/core/DefaultFocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_FocusManager
#include <feathers/core/FocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManager
#include <feathers/core/IFocusManager.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_143_FocusManager,"feathers.core.FocusManager","FocusManager",0xf910c3fd,"feathers.core.FocusManager.FocusManager","feathers/core/FocusManager.hx",143,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_25_defaultFocusManagerFactory,"feathers.core.FocusManager","defaultFocusManagerFactory",0x20b69bfc,"feathers.core.FocusManager.defaultFocusManagerFactory","feathers/core/FocusManager.hx",25,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_41_get_focusManagerFactory,"feathers.core.FocusManager","get_focusManagerFactory",0x3ddf0504,"feathers.core.FocusManager.get_focusManagerFactory","feathers/core/FocusManager.hx",41,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_44_set_focusManagerFactory,"feathers.core.FocusManager","set_focusManagerFactory",0x40406e10,"feathers.core.FocusManager.set_focusManagerFactory","feathers/core/FocusManager.hx",44,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_61_hasRoot,"feathers.core.FocusManager","hasRoot",0x7e3d3534,"feathers.core.FocusManager.hasRoot","feathers/core/FocusManager.hx",61,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_74_addRoot,"feathers.core.FocusManager","addRoot",0xeb36577b,"feathers.core.FocusManager.addRoot","feathers/core/FocusManager.hx",74,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_97_removeRoot,"feathers.core.FocusManager","removeRoot",0x925830ee,"feathers.core.FocusManager.removeRoot","feathers/core/FocusManager.hx",97,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_112_dispose,"feathers.core.FocusManager","dispose",0x1e96a737,"feathers.core.FocusManager.dispose","feathers/core/FocusManager.hx",112,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_126_setFocus,"feathers.core.FocusManager","setFocus",0x9055673e,"feathers.core.FocusManager.setFocus","feathers/core/FocusManager.hx",126,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_134_focusManager_clearHandler,"feathers.core.FocusManager","focusManager_clearHandler",0x2d67169f,"feathers.core.FocusManager.focusManager_clearHandler","feathers/core/FocusManager.hx",134,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_22_boot,"feathers.core.FocusManager","boot",0x5f19ce9a,"feathers.core.FocusManager.boot","feathers/core/FocusManager.hx",22,0x19f34b18)
HX_LOCAL_STACK_FRAME(_hx_pos_7d230bb5e6ae9381_28_boot,"feathers.core.FocusManager","boot",0x5f19ce9a,"feathers.core.FocusManager.boot","feathers/core/FocusManager.hx",28,0x19f34b18)
namespace feathers{
namespace core{

void FocusManager_obj::__construct() { }

Dynamic FocusManager_obj::__CreateEmpty() { return new FocusManager_obj; }

void *FocusManager_obj::_hx_vtable = 0;

Dynamic FocusManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusManager_obj > _hx_result = new FocusManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61ab8c64;
}

void FocusManager_obj::FocusManager(){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_143_FocusManager)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,FocusManager,(void))

 ::haxe::ds::ObjectMap FocusManager_obj::stageToManager;

::Dynamic FocusManager_obj::defaultFocusManagerFactory( ::openfl::display::DisplayObject root){
            	HX_GC_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_25_defaultFocusManagerFactory)
HXDLIN(  25)		return  ::feathers::core::DefaultFocusManager_obj::__alloc( HX_CTX ,root);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,defaultFocusManagerFactory,return )

 ::Dynamic FocusManager_obj::_focusManagerFactory;

 ::Dynamic FocusManager_obj::get_focusManagerFactory(){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_41_get_focusManagerFactory)
HXDLIN(  41)		return ::feathers::core::FocusManager_obj::_focusManagerFactory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_focusManagerFactory,return )

 ::Dynamic FocusManager_obj::set_focusManagerFactory( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_44_set_focusManagerFactory)
HXLINE(  45)		if (::hx::IsNull( value )) {
HXLINE(  46)			::feathers::core::FocusManager_obj::_focusManagerFactory = ::feathers::core::FocusManager_obj::defaultFocusManagerFactory_dyn();
            		}
HXLINE(  48)		if (::hx::IsEq( ::feathers::core::FocusManager_obj::_focusManagerFactory,value )) {
HXLINE(  49)			return ::feathers::core::FocusManager_obj::_focusManagerFactory;
            		}
HXLINE(  51)		::feathers::core::FocusManager_obj::_focusManagerFactory = value;
HXLINE(  52)		return ::feathers::core::FocusManager_obj::_focusManagerFactory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,set_focusManagerFactory,return )

bool FocusManager_obj::hasRoot( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_61_hasRoot)
HXDLIN(  61)		return ::feathers::core::FocusManager_obj::stageToManager->exists(stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,hasRoot,return )

::Dynamic FocusManager_obj::addRoot( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_74_addRoot)
HXLINE(  75)		if (::hx::IsNull( stage )) {
HXLINE(  76)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("FocusManager stage argument must not be null.",78,f3,8f,fa)));
            		}
HXLINE(  78)		if (::feathers::core::FocusManager_obj::stageToManager->exists(stage)) {
HXLINE(  79)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Focus manager root already exists",07,f4,93,b2)));
            		}
HXLINE(  81)		::Dynamic focusManager = ::feathers::core::FocusManager_obj::stageToManager->get(stage);
HXLINE(  82)		 ::Dynamic factory = ::feathers::core::FocusManager_obj::get_focusManagerFactory();
HXLINE(  83)		if (::hx::IsNull( factory )) {
HXLINE(  84)			factory = ::feathers::core::FocusManager_obj::defaultFocusManagerFactory_dyn();
            		}
HXLINE(  86)		focusManager = factory(stage);
HXLINE(  87)		::openfl::events::IEventDispatcher_obj::addEventListener(focusManager,HX_("clear",8d,71,5b,48),::feathers::core::FocusManager_obj::focusManager_clearHandler_dyn(),false,0,true);
HXLINE(  88)		::feathers::core::FocusManager_obj::stageToManager->set(stage,focusManager);
HXLINE(  89)		return focusManager;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,addRoot,return )

void FocusManager_obj::removeRoot( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_97_removeRoot)
HXLINE(  98)		::Dynamic focusManager = ::feathers::core::FocusManager_obj::stageToManager->get(stage);
HXLINE(  99)		if (::hx::IsNull( focusManager )) {
HXLINE( 100)			return;
            		}
HXLINE( 102)		::feathers::core::IFocusManager_obj::dispose(focusManager);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,removeRoot,(void))

void FocusManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_112_dispose)
HXDLIN( 112)		 ::Dynamic stage = ::feathers::core::FocusManager_obj::stageToManager->keys();
HXDLIN( 112)		while(( (bool)(stage->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 112)			 ::openfl::display::Stage stage1 = ( ( ::openfl::display::Stage)(stage->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 113)			::Dynamic focusManager = ::feathers::core::FocusManager_obj::stageToManager->get(stage1);
HXLINE( 114)			::feathers::core::IFocusManager_obj::dispose(focusManager);
HXLINE( 115)			::feathers::core::FocusManager_obj::stageToManager->remove(stage1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,dispose,(void))

void FocusManager_obj::setFocus(::Dynamic focusable){
            	HX_GC_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_126_setFocus)
HXLINE( 127)		::Dynamic focusManager = ::feathers::core::IFocusManagerAware_obj::get_focusManager(focusable);
HXLINE( 128)		if (::hx::IsNull( focusManager )) {
HXLINE( 129)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Cannot set focus because focus manager is null.",a9,be,88,67)));
            		}
HXLINE( 131)		::feathers::core::IFocusManager_obj::set_focus(focusManager,focusable);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,setFocus,(void))

void FocusManager_obj::focusManager_clearHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_134_focusManager_clearHandler)
HXLINE( 135)		::Dynamic focusManager =  ::hx::interface_check(event->currentTarget,0x3511c06f);
HXLINE( 136)		::openfl::events::IEventDispatcher_obj::removeEventListener(focusManager,HX_("clear",8d,71,5b,48),::feathers::core::FocusManager_obj::focusManager_clearHandler_dyn(),null());
HXLINE( 137)		 ::openfl::display::Stage stage = ( ( ::openfl::display::Stage)(::Std_obj::downcast(::feathers::core::IFocusManager_obj::get_root(focusManager),::hx::ClassOf< ::openfl::display::Stage >())) );
HXLINE( 138)		if (::hx::IsNotNull( stage )) {
HXLINE( 139)			::feathers::core::FocusManager_obj::stageToManager->remove(stage);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FocusManager_obj,focusManager_clearHandler,(void))


FocusManager_obj::FocusManager_obj()
{
}

::hx::Val FocusManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FocusManager") ) { return ::hx::Val( FocusManager_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FocusManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hasRoot") ) { outValue = hasRoot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addRoot") ) { outValue = addRoot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFocus") ) { outValue = setFocus_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeRoot") ) { outValue = removeRoot_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageToManager") ) { outValue = ( stageToManager ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"focusManagerFactory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_focusManagerFactory() ); return true; } }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_focusManagerFactory") ) { outValue = ( _focusManagerFactory ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_focusManagerFactory") ) { outValue = get_focusManagerFactory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_focusManagerFactory") ) { outValue = set_focusManagerFactory_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"focusManager_clearHandler") ) { outValue = focusManager_clearHandler_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"defaultFocusManagerFactory") ) { outValue = defaultFocusManagerFactory_dyn(); return true; }
	}
	return false;
}

bool FocusManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"stageToManager") ) { stageToManager=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"focusManagerFactory") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_focusManagerFactory(ioValue.Cast<  ::Dynamic >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_focusManagerFactory") ) { _focusManagerFactory=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FocusManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FocusManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &FocusManager_obj::stageToManager,HX_("stageToManager",94,f7,a4,94)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FocusManager_obj::_focusManagerFactory,HX_("_focusManagerFactory",d6,9e,a7,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusManager_obj_sMemberFields[] = {
	HX_("FocusManager",95,d1,a5,32),
	::String(null()) };

static void FocusManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusManager_obj::stageToManager,"stageToManager");
	HX_MARK_MEMBER_NAME(FocusManager_obj::_focusManagerFactory,"_focusManagerFactory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusManager_obj::stageToManager,"stageToManager");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::_focusManagerFactory,"_focusManagerFactory");
};

#endif

::hx::Class FocusManager_obj::__mClass;

static ::String FocusManager_obj_sStaticFields[] = {
	HX_("stageToManager",94,f7,a4,94),
	HX_("defaultFocusManagerFactory",94,43,8f,51),
	HX_("_focusManagerFactory",d6,9e,a7,2b),
	HX_("get_focusManagerFactory",6c,2e,a4,34),
	HX_("set_focusManagerFactory",78,97,05,37),
	HX_("hasRoot",9c,0e,f3,1a),
	HX_("addRoot",e3,30,ec,87),
	HX_("removeRoot",86,28,ce,c8),
	HX_("dispose",9f,80,4c,bb),
	HX_("setFocus",d6,c8,bd,12),
	HX_("focusManager_clearHandler",07,6a,d7,3e),
	::String(null())
};

void FocusManager_obj::__register()
{
	FocusManager_obj _hx_dummy;
	FocusManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.FocusManager",06,2f,4a,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FocusManager_obj::__SetStatic;
	__mClass->mMarkFunc = FocusManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FocusManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FocusManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_22_boot)
HXDLIN(  22)		stageToManager =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_7d230bb5e6ae9381_28_boot)
HXDLIN(  28)		_focusManagerFactory = ::feathers::core::FocusManager_obj::defaultFocusManagerFactory_dyn();
            	}
}

} // end namespace feathers
} // end namespace core
