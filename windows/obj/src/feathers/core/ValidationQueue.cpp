#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_ValidationQueue
#include <feathers/core/ValidationQueue.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ced54091b58dc9ca_19_new,"feathers.core.ValidationQueue","new",0xc0f6ea19,"feathers.core.ValidationQueue.new","feathers/core/ValidationQueue.hx",19,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_61_get_validating,"feathers.core.ValidationQueue","get_validating",0x992a5283,"feathers.core.ValidationQueue.get_validating","feathers/core/ValidationQueue.hx",61,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_69_dispose,"feathers.core.ValidationQueue","dispose",0x93116ad8,"feathers.core.ValidationQueue.dispose","feathers/core/ValidationQueue.hx",69,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_82_addControl,"feathers.core.ValidationQueue","addControl",0xad6216a3,"feathers.core.ValidationQueue.addControl","feathers/core/ValidationQueue.hx",82,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_125_validateNow,"feathers.core.ValidationQueue","validateNow",0x6a18bcd9,"feathers.core.ValidationQueue.validateNow","feathers/core/ValidationQueue.hx",125,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_135_validateNow,"feathers.core.ValidationQueue","validateNow",0x6a18bcd9,"feathers.core.ValidationQueue.validateNow","feathers/core/ValidationQueue.hx",135,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_162_validationQueue_stage_renderHandler,"feathers.core.ValidationQueue","validationQueue_stage_renderHandler",0x419921e5,"feathers.core.ValidationQueue.validationQueue_stage_renderHandler","feathers/core/ValidationQueue.hx",162,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_28_forStage,"feathers.core.ValidationQueue","forStage",0x7257fa9c,"feathers.core.ValidationQueue.forStage","feathers/core/ValidationQueue.hx",28,0x273f8fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_ced54091b58dc9ca_20_boot,"feathers.core.ValidationQueue","boot",0x0f2eec59,"feathers.core.ValidationQueue.boot","feathers/core/ValidationQueue.hx",20,0x273f8fd7)
namespace feathers{
namespace core{

void ValidationQueue_obj::__construct( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_19_new)
HXLINE(  51)		this->_validating = false;
HXLINE(  49)		this->_queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		this->_stage = null();
HXLINE(  44)		this->_stage = stage;
HXLINE(  45)		this->_stage->addEventListener(HX_("render",56,6b,29,05),this->validationQueue_stage_renderHandler_dyn(),false,-1000,true);
            	}

Dynamic ValidationQueue_obj::__CreateEmpty() { return new ValidationQueue_obj; }

void *ValidationQueue_obj::_hx_vtable = 0;

Dynamic ValidationQueue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidationQueue_obj > _hx_result = new ValidationQueue_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValidationQueue_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23e0bb09;
}

bool ValidationQueue_obj::get_validating(){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_61_get_validating)
HXDLIN(  61)		return this->_validating;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidationQueue_obj,get_validating,return )

void ValidationQueue_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_69_dispose)
HXLINE(  70)		if (::hx::IsNull( this->_stage )) {
HXLINE(  71)			return;
            		}
HXLINE(  73)		this->_stage->removeEventListener(HX_("render",56,6b,29,05),this->validationQueue_stage_renderHandler_dyn(),null());
HXLINE(  74)		this->_stage = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidationQueue_obj,dispose,(void))

void ValidationQueue_obj::addControl(::Dynamic control){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_82_addControl)
HXLINE(  83)		if ((this->_queue->indexOf(control,null()) != -1)) {
HXLINE(  85)			return;
            		}
HXLINE(  87)		int queueLength = this->_queue->length;
HXLINE(  88)		if (this->_validating) {
HXLINE(  90)			int depth = ::feathers::core::IValidating_obj::get_depth(control);
HXLINE(  96)			int i = (queueLength - 1);
HXLINE(  97)			while((i >= 0)){
HXLINE(  98)				::Dynamic otherControl = this->_queue->__get(i);
HXLINE(  99)				int otherDepth = ::feathers::core::IValidating_obj::get_depth(otherControl);
HXLINE( 103)				if ((depth >= otherDepth)) {
HXLINE( 104)					goto _hx_goto_3;
            				}
HXLINE( 106)				i = (i - 1);
            			}
            			_hx_goto_3:;
HXLINE( 110)			i = (i + 1);
HXLINE( 111)			this->_queue->insert(i,control);
            		}
            		else {
HXLINE( 115)			this->_queue[queueLength] = control;
HXLINE( 116)			this->_stage->invalidate();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidationQueue_obj,addControl,(void))

void ValidationQueue_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_125_validateNow)
HXLINE( 126)		if (this->_validating) {
HXLINE( 127)			return;
            		}
HXLINE( 129)		int queueLength = this->_queue->length;
HXLINE( 130)		if ((queueLength == 0)) {
HXLINE( 131)			return;
            		}
HXLINE( 133)		this->_validating = true;
HXLINE( 134)		if ((queueLength > 1)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            			int _hx_run(::Dynamic first,::Dynamic second){
            				HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_135_validateNow)
HXLINE( 136)				int difference = ::feathers::core::IValidating_obj::get_depth(second);
HXDLIN( 136)				int difference1 = (difference - ::feathers::core::IValidating_obj::get_depth(first));
HXLINE( 137)				if ((difference1 > 0)) {
HXLINE( 138)					return -1;
            				}
            				else {
HXLINE( 139)					if ((difference1 < 0)) {
HXLINE( 140)						return 1;
            					}
            				}
HXLINE( 142)				return 0;
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 135)			this->_queue->sort( ::Dynamic(new _hx_Closure_0()));
            		}
HXLINE( 150)		while((this->_queue->length > 0)){
HXLINE( 151)			::Dynamic item = this->_queue->shift();
HXLINE( 152)			if ((::feathers::core::IValidating_obj::get_depth(item) < 0)) {
HXLINE( 154)				continue;
            			}
HXLINE( 156)			::feathers::core::IValidating_obj::validateNow(item);
            		}
HXLINE( 158)		this->_validating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidationQueue_obj,validateNow,(void))

void ValidationQueue_obj::validationQueue_stage_renderHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_ced54091b58dc9ca_162_validationQueue_stage_renderHandler)
HXDLIN( 162)		this->validateNow();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidationQueue_obj,validationQueue_stage_renderHandler,(void))

 ::haxe::ds::ObjectMap ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE;

 ::feathers::core::ValidationQueue ValidationQueue_obj::forStage( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_ced54091b58dc9ca_28_forStage)
HXLINE(  29)		if (::hx::IsNull( stage )) {
HXLINE(  30)			return null();
            		}
HXLINE(  32)		if (!(::feathers::core::ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE->exists(stage))) {
HXLINE(  33)			::feathers::core::ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE->set(stage, ::feathers::core::ValidationQueue_obj::__alloc( HX_CTX ,stage));
            		}
HXLINE(  35)		return ( ( ::feathers::core::ValidationQueue)(::feathers::core::ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE->get(stage)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValidationQueue_obj,forStage,return )


::hx::ObjectPtr< ValidationQueue_obj > ValidationQueue_obj::__new( ::openfl::display::Stage stage) {
	::hx::ObjectPtr< ValidationQueue_obj > __this = new ValidationQueue_obj();
	__this->__construct(stage);
	return __this;
}

::hx::ObjectPtr< ValidationQueue_obj > ValidationQueue_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage) {
	ValidationQueue_obj *__this = (ValidationQueue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidationQueue_obj), true, "feathers.core.ValidationQueue"));
	*(void **)__this = ValidationQueue_obj::_hx_vtable;
	__this->__construct(stage);
	return __this;
}

ValidationQueue_obj::ValidationQueue_obj()
{
}

void ValidationQueue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidationQueue);
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_MEMBER_NAME(_queue,"_queue");
	HX_MARK_MEMBER_NAME(_validating,"_validating");
	HX_MARK_END_CLASS();
}

void ValidationQueue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
	HX_VISIT_MEMBER_NAME(_queue,"_queue");
	HX_VISIT_MEMBER_NAME(_validating,"_validating");
}

::hx::Val ValidationQueue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return ::hx::Val( _stage ); }
		if (HX_FIELD_EQ(inName,"_queue") ) { return ::hx::Val( _queue ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validating") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_validating() ); }
		if (HX_FIELD_EQ(inName,"addControl") ) { return ::hx::Val( addControl_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_validating") ) { return ::hx::Val( _validating ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_validating") ) { return ::hx::Val( get_validating_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"validationQueue_stage_renderHandler") ) { return ::hx::Val( validationQueue_stage_renderHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ValidationQueue_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"forStage") ) { outValue = forStage_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"STAGE_TO_VALIDATION_QUEUE") ) { outValue = ( STAGE_TO_VALIDATION_QUEUE ); return true; }
	}
	return false;
}

::hx::Val ValidationQueue_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_queue") ) { _queue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_validating") ) { _validating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ValidationQueue_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"STAGE_TO_VALIDATION_QUEUE") ) { STAGE_TO_VALIDATION_QUEUE=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void ValidationQueue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stage",ff,b1,f2,7f));
	outFields->push(HX_("_queue",d2,d4,d1,59));
	outFields->push(HX_("_validating",72,d8,76,b4));
	outFields->push(HX_("validating",53,0b,ed,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidationQueue_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(ValidationQueue_obj,_stage),HX_("_stage",ff,b1,f2,7f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ValidationQueue_obj,_queue),HX_("_queue",d2,d4,d1,59)},
	{::hx::fsBool,(int)offsetof(ValidationQueue_obj,_validating),HX_("_validating",72,d8,76,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ValidationQueue_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE,HX_("STAGE_TO_VALIDATION_QUEUE",ce,44,f3,45)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ValidationQueue_obj_sMemberFields[] = {
	HX_("_stage",ff,b1,f2,7f),
	HX_("_queue",d2,d4,d1,59),
	HX_("_validating",72,d8,76,b4),
	HX_("get_validating",9c,93,e2,57),
	HX_("dispose",9f,80,4c,bb),
	HX_("addControl",3c,97,0b,81),
	HX_("validateNow",20,c2,bf,ca),
	HX_("validationQueue_stage_renderHandler",2c,84,68,c4),
	::String(null()) };

static void ValidationQueue_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE,"STAGE_TO_VALIDATION_QUEUE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValidationQueue_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationQueue_obj::STAGE_TO_VALIDATION_QUEUE,"STAGE_TO_VALIDATION_QUEUE");
};

#endif

::hx::Class ValidationQueue_obj::__mClass;

static ::String ValidationQueue_obj_sStaticFields[] = {
	HX_("STAGE_TO_VALIDATION_QUEUE",ce,44,f3,45),
	HX_("forStage",f5,f2,cf,7d),
	::String(null())
};

void ValidationQueue_obj::__register()
{
	ValidationQueue_obj _hx_dummy;
	ValidationQueue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ValidationQueue",a7,e9,a7,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValidationQueue_obj::__GetStatic;
	__mClass->mSetStaticField = &ValidationQueue_obj::__SetStatic;
	__mClass->mMarkFunc = ValidationQueue_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValidationQueue_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidationQueue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidationQueue_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValidationQueue_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidationQueue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidationQueue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValidationQueue_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ced54091b58dc9ca_20_boot)
HXDLIN(  20)		STAGE_TO_VALIDATION_QUEUE =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace feathers
} // end namespace core
