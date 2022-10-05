#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_DefaultToolTipManager
#include <feathers/core/DefaultToolTipManager.h>
#endif
#ifndef INCLUDED_feathers_core_IToolTipManager
#include <feathers/core/IToolTipManager.h>
#endif
#ifndef INCLUDED_feathers_core_ToolTipManager
#include <feathers/core/ToolTipManager.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_23_ToolTipManager,"feathers.core.ToolTipManager","ToolTipManager",0x7b421f5d,"feathers.core.ToolTipManager.ToolTipManager","feathers/core/ToolTipManager.hx",23,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_26_defaultToolTipManagerFactory,"feathers.core.ToolTipManager","defaultToolTipManagerFactory",0x53e51a52,"feathers.core.ToolTipManager.defaultToolTipManagerFactory","feathers/core/ToolTipManager.hx",26,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_43_get_toolTipManagerFactory,"feathers.core.ToolTipManager","get_toolTipManagerFactory",0x29be7fe4,"feathers.core.ToolTipManager.get_toolTipManagerFactory","feathers/core/ToolTipManager.hx",43,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_46_set_toolTipManagerFactory,"feathers.core.ToolTipManager","set_toolTipManagerFactory",0x961543f0,"feathers.core.ToolTipManager.set_toolTipManagerFactory","feathers/core/ToolTipManager.hx",46,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_65_hasRoot,"feathers.core.ToolTipManager","hasRoot",0x4bcc1ac9,"feathers.core.ToolTipManager.hasRoot","feathers/core/ToolTipManager.hx",65,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_74_forRoot,"feathers.core.ToolTipManager","forRoot",0xfe39a5f8,"feathers.core.ToolTipManager.forRoot","feathers/core/ToolTipManager.hx",74,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_87_addRoot,"feathers.core.ToolTipManager","addRoot",0xb8c53d10,"feathers.core.ToolTipManager.addRoot","feathers/core/ToolTipManager.hx",87,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_109_removeRoot,"feathers.core.ToolTipManager","removeRoot",0xf1e33679,"feathers.core.ToolTipManager.removeRoot","feathers/core/ToolTipManager.hx",109,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_125_dispose,"feathers.core.ToolTipManager","dispose",0xec258ccc,"feathers.core.ToolTipManager.dispose","feathers/core/ToolTipManager.hx",125,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_29_boot,"feathers.core.ToolTipManager","boot",0x5aecc9e5,"feathers.core.ToolTipManager.boot","feathers/core/ToolTipManager.hx",29,0xfa5375a3)
HX_LOCAL_STACK_FRAME(_hx_pos_5c9a0f5c70a3e5fd_57_boot,"feathers.core.ToolTipManager","boot",0x5aecc9e5,"feathers.core.ToolTipManager.boot","feathers/core/ToolTipManager.hx",57,0xfa5375a3)
namespace feathers{
namespace core{

void ToolTipManager_obj::__construct() { }

Dynamic ToolTipManager_obj::__CreateEmpty() { return new ToolTipManager_obj; }

void *ToolTipManager_obj::_hx_vtable = 0;

Dynamic ToolTipManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolTipManager_obj > _hx_result = new ToolTipManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolTipManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5de10941;
}

void ToolTipManager_obj::ToolTipManager(){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_23_ToolTipManager)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,ToolTipManager,(void))

::Dynamic ToolTipManager_obj::defaultToolTipManagerFactory( ::openfl::display::DisplayObject root){
            	HX_GC_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_26_defaultToolTipManagerFactory)
HXDLIN(  26)		return  ::feathers::core::DefaultToolTipManager_obj::__alloc( HX_CTX ,root);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,defaultToolTipManagerFactory,return )

 ::Dynamic ToolTipManager_obj::_toolTipManagerFactory;

 ::Dynamic ToolTipManager_obj::get_toolTipManagerFactory(){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_43_get_toolTipManagerFactory)
HXDLIN(  43)		return ::feathers::core::ToolTipManager_obj::_toolTipManagerFactory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,get_toolTipManagerFactory,return )

 ::Dynamic ToolTipManager_obj::set_toolTipManagerFactory( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_46_set_toolTipManagerFactory)
HXLINE(  47)		if (::hx::IsNull( value )) {
HXLINE(  48)			::feathers::core::ToolTipManager_obj::_toolTipManagerFactory = ::feathers::core::ToolTipManager_obj::defaultToolTipManagerFactory_dyn();
            		}
HXLINE(  50)		if (::hx::IsEq( ::feathers::core::ToolTipManager_obj::_toolTipManagerFactory,value )) {
HXLINE(  51)			return ::feathers::core::ToolTipManager_obj::_toolTipManagerFactory;
            		}
HXLINE(  53)		::feathers::core::ToolTipManager_obj::_toolTipManagerFactory = value;
HXLINE(  54)		return ::feathers::core::ToolTipManager_obj::_toolTipManagerFactory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,set_toolTipManagerFactory,return )

 ::haxe::ds::ObjectMap ToolTipManager_obj::stageToManager;

bool ToolTipManager_obj::hasRoot( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_65_hasRoot)
HXDLIN(  65)		return ::feathers::core::ToolTipManager_obj::stageToManager->exists(stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,hasRoot,return )

::Dynamic ToolTipManager_obj::forRoot( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_74_forRoot)
HXDLIN(  74)		return ::feathers::core::ToolTipManager_obj::stageToManager->get(stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,forRoot,return )

::Dynamic ToolTipManager_obj::addRoot( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_87_addRoot)
HXLINE(  88)		if (::hx::IsNull( stage )) {
HXLINE(  89)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("ToolTipManager stage argument must not be null.",83,3f,63,44)));
            		}
HXLINE(  91)		if (::feathers::core::ToolTipManager_obj::stageToManager->exists(stage)) {
HXLINE(  92)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Tool tip manager root already exists",82,ef,a2,da)));
            		}
HXLINE(  94)		::Dynamic toolTipManager = ::feathers::core::ToolTipManager_obj::stageToManager->get(stage);
HXLINE(  95)		 ::Dynamic factory = ::feathers::core::ToolTipManager_obj::get_toolTipManagerFactory();
HXLINE(  96)		if (::hx::IsNull( factory )) {
HXLINE(  97)			factory = ::feathers::core::ToolTipManager_obj::defaultToolTipManagerFactory_dyn();
            		}
HXLINE(  99)		toolTipManager = factory(stage);
HXLINE( 100)		::feathers::core::ToolTipManager_obj::stageToManager->set(stage,toolTipManager);
HXLINE( 101)		return toolTipManager;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,addRoot,return )

void ToolTipManager_obj::removeRoot( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_109_removeRoot)
HXLINE( 110)		::Dynamic toolTipManager = ::feathers::core::ToolTipManager_obj::stageToManager->get(stage);
HXLINE( 111)		if (::hx::IsNull( toolTipManager )) {
HXLINE( 112)			return;
            		}
HXLINE( 114)		::feathers::core::IToolTipManager_obj::dispose(toolTipManager);
HXLINE( 115)		::feathers::core::ToolTipManager_obj::stageToManager->remove(stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,removeRoot,(void))

void ToolTipManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_125_dispose)
HXDLIN( 125)		 ::Dynamic stage = ::feathers::core::ToolTipManager_obj::stageToManager->keys();
HXDLIN( 125)		while(( (bool)(stage->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 125)			 ::openfl::display::Stage stage1 = ( ( ::openfl::display::Stage)(stage->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 126)			::feathers::core::ToolTipManager_obj::stageToManager->remove(stage1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,dispose,(void))


ToolTipManager_obj::ToolTipManager_obj()
{
}

::hx::Val ToolTipManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"ToolTipManager") ) { return ::hx::Val( ToolTipManager_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolTipManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hasRoot") ) { outValue = hasRoot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"forRoot") ) { outValue = forRoot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addRoot") ) { outValue = addRoot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeRoot") ) { outValue = removeRoot_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageToManager") ) { outValue = ( stageToManager ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"toolTipManagerFactory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_toolTipManagerFactory() ); return true; } }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_toolTipManagerFactory") ) { outValue = ( _toolTipManagerFactory ); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_toolTipManagerFactory") ) { outValue = get_toolTipManagerFactory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_toolTipManagerFactory") ) { outValue = set_toolTipManagerFactory_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"defaultToolTipManagerFactory") ) { outValue = defaultToolTipManagerFactory_dyn(); return true; }
	}
	return false;
}

bool ToolTipManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"stageToManager") ) { stageToManager=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"toolTipManagerFactory") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_toolTipManagerFactory(ioValue.Cast<  ::Dynamic >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_toolTipManagerFactory") ) { _toolTipManagerFactory=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ToolTipManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ToolTipManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &ToolTipManager_obj::_toolTipManagerFactory,HX_("_toolTipManagerFactory",61,c3,75,a1)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &ToolTipManager_obj::stageToManager,HX_("stageToManager",94,f7,a4,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ToolTipManager_obj_sMemberFields[] = {
	HX_("ToolTipManager",ea,9b,c3,83),
	::String(null()) };

static void ToolTipManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::_toolTipManagerFactory,"_toolTipManagerFactory");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::stageToManager,"stageToManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolTipManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::_toolTipManagerFactory,"_toolTipManagerFactory");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::stageToManager,"stageToManager");
};

#endif

::hx::Class ToolTipManager_obj::__mClass;

static ::String ToolTipManager_obj_sStaticFields[] = {
	HX_("defaultToolTipManagerFactory",9f,93,1e,cc),
	HX_("_toolTipManagerFactory",61,c3,75,a1),
	HX_("get_toolTipManagerFactory",77,e4,65,4e),
	HX_("set_toolTipManagerFactory",83,a8,bc,ba),
	HX_("stageToManager",94,f7,a4,94),
	HX_("hasRoot",9c,0e,f3,1a),
	HX_("forRoot",cb,99,60,cd),
	HX_("addRoot",e3,30,ec,87),
	HX_("removeRoot",86,28,ce,c8),
	HX_("dispose",9f,80,4c,bb),
	::String(null())
};

void ToolTipManager_obj::__register()
{
	ToolTipManager_obj _hx_dummy;
	ToolTipManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ToolTipManager",9b,f7,4e,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolTipManager_obj::__SetStatic;
	__mClass->mMarkFunc = ToolTipManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolTipManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolTipManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolTipManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolTipManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ToolTipManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_29_boot)
HXDLIN(  29)		_toolTipManagerFactory = ::feathers::core::ToolTipManager_obj::defaultToolTipManagerFactory_dyn();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5c9a0f5c70a3e5fd_57_boot)
HXDLIN(  57)		stageToManager =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace feathers
} // end namespace core
