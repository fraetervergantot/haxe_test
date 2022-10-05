#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_DefaultPopUpManager
#include <feathers/core/DefaultPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_37_set_root,"feathers.core.PopUpManager","set_root",0x546157fb,"feathers.core.PopUpManager.set_root","feathers/core/PopUpManager.hx",37,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_53_get_popUpCount,"feathers.core.PopUpManager","get_popUpCount",0x18f55d08,"feathers.core.PopUpManager.get_popUpCount","feathers/core/PopUpManager.hx",53,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_73_forStage,"feathers.core.PopUpManager","forStage",0x586a47d1,"feathers.core.PopUpManager.forStage","feathers/core/PopUpManager.hx",73,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_95_dispose,"feathers.core.PopUpManager","dispose",0x598d7b43,"feathers.core.PopUpManager.dispose","feathers/core/PopUpManager.hx",95,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_110_addPopUp,"feathers.core.PopUpManager","addPopUp",0x1a8c6947,"feathers.core.PopUpManager.addPopUp","feathers/core/PopUpManager.hx",110,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_127_removePopUp,"feathers.core.PopUpManager","removePopUp",0x1dc5e80c,"feathers.core.PopUpManager.removePopUp","feathers/core/PopUpManager.hx",127,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_142_removeAllPopUps,"feathers.core.PopUpManager","removeAllPopUps",0xccafea68,"feathers.core.PopUpManager.removeAllPopUps","feathers/core/PopUpManager.hx",142,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_154_centerPopUp,"feathers.core.PopUpManager","centerPopUp",0xf16210db,"feathers.core.PopUpManager.centerPopUp","feathers/core/PopUpManager.hx",154,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_170_isPopUp,"feathers.core.PopUpManager","isPopUp",0x015b8ca6,"feathers.core.PopUpManager.isPopUp","feathers/core/PopUpManager.hx",170,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_189_isModal,"feathers.core.PopUpManager","isModal",0x471ebe87,"feathers.core.PopUpManager.isModal","feathers/core/PopUpManager.hx",189,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_208_isTopLevelPopUp,"feathers.core.PopUpManager","isTopLevelPopUp",0xb3dba977,"feathers.core.PopUpManager.isTopLevelPopUp","feathers/core/PopUpManager.hx",208,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_221_defaultPopUpManagerFactory,"feathers.core.PopUpManager","defaultPopUpManagerFactory",0xb07870e4,"feathers.core.PopUpManager.defaultPopUpManagerFactory","feathers/core/PopUpManager.hx",221,0xbc04f28c)
HX_LOCAL_STACK_FRAME(_hx_pos_9a5059dfeb5c0e71_61_boot,"feathers.core.PopUpManager","boot",0xe67b3b0e,"feathers.core.PopUpManager.boot","feathers/core/PopUpManager.hx",61,0xbc04f28c)
namespace feathers{
namespace core{

void PopUpManager_obj::__construct() { }

Dynamic PopUpManager_obj::__CreateEmpty() { return new PopUpManager_obj; }

void *PopUpManager_obj::_hx_vtable = 0;

Dynamic PopUpManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PopUpManager_obj > _hx_result = new PopUpManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PopUpManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x223cc29c;
}

 ::Dynamic PopUpManager_obj::popUpManagerFactory;

 ::openfl::display::DisplayObjectContainer PopUpManager_obj::set_root( ::openfl::display::DisplayObjectContainer value){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_37_set_root)
HXLINE(  38)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(value->stage);
HXLINE(  39)		::feathers::core::IPopUpManager_obj::set_root(popUpManager,value);
HXLINE(  40)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,set_root,return )

int PopUpManager_obj::get_popUpCount(){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_53_get_popUpCount)
HXLINE(  54)		int count = 0;
HXLINE(  55)		{
HXLINE(  55)			 ::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::stageToManager->iterator();
HXDLIN(  55)			while(( (bool)(popUpManager->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)				::Dynamic popUpManager1 = popUpManager->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  56)				count = (count + ::feathers::core::IPopUpManager_obj::get_popUpCount(popUpManager1));
            			}
            		}
HXLINE(  58)		return count;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopUpManager_obj,get_popUpCount,return )

 ::haxe::ds::ObjectMap PopUpManager_obj::stageToManager;

::Dynamic PopUpManager_obj::forStage( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_73_forStage)
HXLINE(  74)		if (::hx::IsNull( stage )) {
HXLINE(  75)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("PopUpManager stage argument must not be null.",ec,65,cb,08)));
            		}
HXLINE(  77)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::stageToManager->get(stage);
HXLINE(  78)		if (::hx::IsNull( popUpManager )) {
HXLINE(  79)			 ::Dynamic factory = ::feathers::core::PopUpManager_obj::popUpManagerFactory;
HXLINE(  80)			if (::hx::IsNull( factory )) {
HXLINE(  81)				factory = ::feathers::core::PopUpManager_obj::defaultPopUpManagerFactory_dyn();
            			}
HXLINE(  83)			popUpManager = factory(stage);
HXLINE(  84)			::feathers::core::PopUpManager_obj::stageToManager->set(stage,popUpManager);
            		}
HXLINE(  86)		return popUpManager;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,forStage,return )

void PopUpManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_95_dispose)
HXLINE(  96)		::feathers::core::PopUpManager_obj::removeAllPopUps();
HXLINE(  97)		{
HXLINE(  97)			 ::Dynamic stage = ::feathers::core::PopUpManager_obj::stageToManager->keys();
HXDLIN(  97)			while(( (bool)(stage->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  97)				 ::openfl::display::Stage stage1 = ( ( ::openfl::display::Stage)(stage->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  98)				::feathers::core::PopUpManager_obj::stageToManager->remove(stage1);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopUpManager_obj,dispose,(void))

 ::openfl::display::DisplayObject PopUpManager_obj::addPopUp( ::openfl::display::DisplayObject popUp, ::openfl::display::DisplayObject parent,::hx::Null< bool >  __o_isModal,::hx::Null< bool >  __o_isCentered, ::Dynamic customOverlayFactory){
            		bool isModal = __o_isModal.Default(true);
            		bool isCentered = __o_isCentered.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_110_addPopUp)
HXLINE( 111)		if (::hx::IsNull( parent )) {
HXLINE( 112)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("The pop-up's parent must not be null.",86,19,25,c6)));
            		}
HXLINE( 114)		 ::openfl::display::Stage stage = parent->stage;
HXLINE( 115)		if (::hx::IsNull( stage )) {
HXLINE( 116)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("The stage property of a pop-up's parent must not be null.",07,9e,12,e3)));
            		}
HXLINE( 118)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 119)		return ::feathers::core::IPopUpManager_obj::addPopUp(popUpManager,popUp,isModal,isCentered,customOverlayFactory);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(PopUpManager_obj,addPopUp,return )

 ::openfl::display::DisplayObject PopUpManager_obj::removePopUp( ::openfl::display::DisplayObject popUp){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_127_removePopUp)
HXLINE( 128)		 ::openfl::display::Stage stage = popUp->stage;
HXLINE( 129)		if (::hx::IsNull( stage )) {
HXLINE( 130)			return popUp;
            		}
HXLINE( 132)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 133)		return ::feathers::core::IPopUpManager_obj::removePopUp(popUpManager,popUp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,removePopUp,return )

void PopUpManager_obj::removeAllPopUps(){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_142_removeAllPopUps)
HXDLIN( 142)		 ::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::stageToManager->iterator();
HXDLIN( 142)		while(( (bool)(popUpManager->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 142)			::Dynamic popUpManager1 = popUpManager->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 143)			::feathers::core::IPopUpManager_obj::removeAllPopUps(popUpManager1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopUpManager_obj,removeAllPopUps,(void))

void PopUpManager_obj::centerPopUp( ::openfl::display::DisplayObject target){
            	HX_GC_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_154_centerPopUp)
HXLINE( 155)		 ::openfl::display::Stage stage = target->stage;
HXLINE( 156)		if (::hx::IsNull( stage )) {
HXLINE( 157)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("A pop-up's stage property must not be null.",83,d3,62,54)));
            		}
HXLINE( 159)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 160)		::feathers::core::IPopUpManager_obj::centerPopUp(popUpManager,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,centerPopUp,(void))

bool PopUpManager_obj::isPopUp( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_170_isPopUp)
HXLINE( 171)		if (::hx::IsNull( target )) {
HXLINE( 172)			return false;
            		}
HXLINE( 174)		 ::openfl::display::Stage stage = target->stage;
HXLINE( 175)		if (::hx::IsNull( stage )) {
HXLINE( 176)			return false;
            		}
HXLINE( 178)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 179)		return ::feathers::core::IPopUpManager_obj::isPopUp(popUpManager,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,isPopUp,return )

bool PopUpManager_obj::isModal( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_189_isModal)
HXLINE( 190)		if (::hx::IsNull( target )) {
HXLINE( 191)			return false;
            		}
HXLINE( 193)		 ::openfl::display::Stage stage = target->stage;
HXLINE( 194)		if (::hx::IsNull( stage )) {
HXLINE( 195)			return false;
            		}
HXLINE( 197)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 198)		return ::feathers::core::IPopUpManager_obj::isModal(popUpManager,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,isModal,return )

bool PopUpManager_obj::isTopLevelPopUp( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_208_isTopLevelPopUp)
HXLINE( 209)		if (::hx::IsNull( target )) {
HXLINE( 210)			return false;
            		}
HXLINE( 212)		 ::openfl::display::Stage stage = target->stage;
HXLINE( 213)		if (::hx::IsNull( stage )) {
HXLINE( 214)			return false;
            		}
HXLINE( 216)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 217)		return ::feathers::core::IPopUpManager_obj::isTopLevelPopUp(popUpManager,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,isTopLevelPopUp,return )

::Dynamic PopUpManager_obj::defaultPopUpManagerFactory( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_221_defaultPopUpManagerFactory)
HXDLIN( 221)		return  ::feathers::core::DefaultPopUpManager_obj::__alloc( HX_CTX ,stage);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PopUpManager_obj,defaultPopUpManagerFactory,return )


PopUpManager_obj::PopUpManager_obj()
{
}

bool PopUpManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { outValue = dispose_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isPopUp") ) { outValue = isPopUp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isModal") ) { outValue = isModal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_root") ) { outValue = set_root_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"forStage") ) { outValue = forStage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addPopUp") ) { outValue = addPopUp_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"popUpCount") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_popUpCount() ); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removePopUp") ) { outValue = removePopUp_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"centerPopUp") ) { outValue = centerPopUp_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_popUpCount") ) { outValue = get_popUpCount_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stageToManager") ) { outValue = ( stageToManager ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeAllPopUps") ) { outValue = removeAllPopUps_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isTopLevelPopUp") ) { outValue = isTopLevelPopUp_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"popUpManagerFactory") ) { outValue = ( popUpManagerFactory ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"defaultPopUpManagerFactory") ) { outValue = defaultPopUpManagerFactory_dyn(); return true; }
	}
	return false;
}

bool PopUpManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_root(ioValue.Cast<  ::openfl::display::DisplayObjectContainer >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageToManager") ) { stageToManager=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"popUpManagerFactory") ) { popUpManagerFactory=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PopUpManager_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PopUpManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PopUpManager_obj::popUpManagerFactory,HX_("popUpManagerFactory",49,f9,3a,60)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &PopUpManager_obj::stageToManager,HX_("stageToManager",94,f7,a4,94)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PopUpManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopUpManager_obj::popUpManagerFactory,"popUpManagerFactory");
	HX_MARK_MEMBER_NAME(PopUpManager_obj::stageToManager,"stageToManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PopUpManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopUpManager_obj::popUpManagerFactory,"popUpManagerFactory");
	HX_VISIT_MEMBER_NAME(PopUpManager_obj::stageToManager,"stageToManager");
};

#endif

::hx::Class PopUpManager_obj::__mClass;

static ::String PopUpManager_obj_sStaticFields[] = {
	HX_("popUpManagerFactory",49,f9,3a,60),
	HX_("set_root",1f,03,c7,79),
	HX_("get_popUpCount",2c,fb,71,87),
	HX_("stageToManager",94,f7,a4,94),
	HX_("forStage",f5,f2,cf,7d),
	HX_("dispose",9f,80,4c,bb),
	HX_("addPopUp",6b,14,f2,3f),
	HX_("removePopUp",68,cb,c8,c4),
	HX_("removeAllPopUps",c4,ab,3d,0b),
	HX_("centerPopUp",37,f4,64,98),
	HX_("isPopUp",02,92,1a,63),
	HX_("isModal",e3,c3,dd,a8),
	HX_("isTopLevelPopUp",d3,6a,69,f2),
	HX_("defaultPopUpManagerFactory",08,b5,7b,85),
	::String(null())
};

void PopUpManager_obj::__register()
{
	PopUpManager_obj _hx_dummy;
	PopUpManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.PopUpManager",12,17,c8,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PopUpManager_obj::__GetStatic;
	__mClass->mSetStaticField = &PopUpManager_obj::__SetStatic;
	__mClass->mMarkFunc = PopUpManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PopUpManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PopUpManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PopUpManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PopUpManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PopUpManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PopUpManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_9a5059dfeb5c0e71_61_boot)
HXDLIN(  61)		stageToManager =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace feathers
} // end namespace core
