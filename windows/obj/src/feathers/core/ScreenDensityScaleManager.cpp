#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
#endif
#ifndef INCLUDED_feathers_core_ScreenDensityScaleManager
#include <feathers/core/ScreenDensityScaleManager.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_utils_MathUtil
#include <feathers/utils/MathUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_ScreenDensityScaleCalculator
#include <feathers/utils/ScreenDensityScaleCalculator.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46c206bc133d7389_85_new,"feathers.core.ScreenDensityScaleManager","new",0x3e7098c0,"feathers.core.ScreenDensityScaleManager.new","feathers/core/ScreenDensityScaleManager.hx",85,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_98_get_target,"feathers.core.ScreenDensityScaleManager","get_target",0x50eb66ba,"feathers.core.ScreenDensityScaleManager.get_target","feathers/core/ScreenDensityScaleManager.hx",98,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_101_set_target,"feathers.core.ScreenDensityScaleManager","set_target",0x5469052e,"feathers.core.ScreenDensityScaleManager.set_target","feathers/core/ScreenDensityScaleManager.hx",101,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_130_get_scaler,"feathers.core.ScreenDensityScaleManager","get_scaler",0x06245e11,"feathers.core.ScreenDensityScaleManager.get_scaler","feathers/core/ScreenDensityScaleManager.hx",130,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_133_set_scaler,"feathers.core.ScreenDensityScaleManager","set_scaler",0x09a1fc85,"feathers.core.ScreenDensityScaleManager.set_scaler","feathers/core/ScreenDensityScaleManager.hx",133,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_145_getScale,"feathers.core.ScreenDensityScaleManager","getScale",0xb776b9b4,"feathers.core.ScreenDensityScaleManager.getScale","feathers/core/ScreenDensityScaleManager.hx",145,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_192_getBounds,"feathers.core.ScreenDensityScaleManager","getBounds",0xfa63600b,"feathers.core.ScreenDensityScaleManager.getBounds","feathers/core/ScreenDensityScaleManager.hx",192,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_215_addTargetStageListeners,"feathers.core.ScreenDensityScaleManager","addTargetStageListeners",0x100ab333,"feathers.core.ScreenDensityScaleManager.addTargetStageListeners","feathers/core/ScreenDensityScaleManager.hx",215,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_222_removeTargetStageListeners,"feathers.core.ScreenDensityScaleManager","removeTargetStageListeners",0xb2a26c16,"feathers.core.ScreenDensityScaleManager.removeTargetStageListeners","feathers/core/ScreenDensityScaleManager.hx",222,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_230_screenDensityScaleManager_target_addedToStageHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_target_addedToStageHandler",0xbdb3d299,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_target_addedToStageHandler","feathers/core/ScreenDensityScaleManager.hx",230,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_234_screenDensityScaleManager_target_removedFromStageHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_target_removedFromStageHandler",0x495b20e8,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_target_removedFromStageHandler","feathers/core/ScreenDensityScaleManager.hx",234,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_238_screenDensityScaleManager_stage_resizeHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_stage_resizeHandler",0x89530995,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_stage_resizeHandler","feathers/core/ScreenDensityScaleManager.hx",238,0xf525eb10)
namespace feathers{
namespace core{

void ScreenDensityScaleManager_obj::__construct( ::feathers::utils::ScreenDensityScaleCalculator scaler){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_85_new)
HXLINE(  86)		super::__construct(null());
HXLINE(  87)		this->_scaler = scaler;
            	}

Dynamic ScreenDensityScaleManager_obj::__CreateEmpty() { return new ScreenDensityScaleManager_obj; }

void *ScreenDensityScaleManager_obj::_hx_vtable = 0;

Dynamic ScreenDensityScaleManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenDensityScaleManager_obj > _hx_result = new ScreenDensityScaleManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScreenDensityScaleManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x4a0f5acc;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_ScreenDensityScaleManager__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::ScreenDensityScaleManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::willTrigger,
};

static ::feathers::core::IScaleManager_obj _hx_feathers_core_ScreenDensityScaleManager__hx_feathers_core_IScaleManager= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::ScreenDensityScaleManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::willTrigger,
	(  ::openfl::display::DisplayObject (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::get_target,
	(  ::openfl::display::DisplayObject (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::ScreenDensityScaleManager_obj::set_target,
	( Float (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::getScale,
	(  ::openfl::geom::Rectangle (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::getBounds,
};

void *ScreenDensityScaleManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_core_ScreenDensityScaleManager__hx_openfl_events_IEventDispatcher;
		case (int)0x75896bfd: return &_hx_feathers_core_ScreenDensityScaleManager__hx_feathers_core_IScaleManager;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::DisplayObject ScreenDensityScaleManager_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_98_get_target)
HXDLIN(  98)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,get_target,return )

 ::openfl::display::DisplayObject ScreenDensityScaleManager_obj::set_target( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_101_set_target)
HXLINE( 102)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE( 103)			return this->_target;
            		}
HXLINE( 105)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 106)			this->removeTargetStageListeners();
HXLINE( 107)			this->_target->removeEventListener(HX_("addedToStage",63,22,55,0c),this->screenDensityScaleManager_target_addedToStageHandler_dyn(),null());
HXLINE( 108)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->screenDensityScaleManager_target_removedFromStageHandler_dyn(),null());
            		}
HXLINE( 110)		this->_target = value;
HXLINE( 111)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 112)			this->_target->addEventListener(HX_("addedToStage",63,22,55,0c),this->screenDensityScaleManager_target_addedToStageHandler_dyn(),false,0,true);
HXLINE( 113)			this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->screenDensityScaleManager_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE( 114)			this->addTargetStageListeners();
            		}
HXLINE( 116)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 117)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,set_target,return )

 ::feathers::utils::ScreenDensityScaleCalculator ScreenDensityScaleManager_obj::get_scaler(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_130_get_scaler)
HXDLIN( 130)		return this->_scaler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,get_scaler,return )

 ::feathers::utils::ScreenDensityScaleCalculator ScreenDensityScaleManager_obj::set_scaler( ::feathers::utils::ScreenDensityScaleCalculator value){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_133_set_scaler)
HXLINE( 134)		if (::hx::IsInstanceEq( this->_scaler,value )) {
HXLINE( 135)			return this->_scaler;
            		}
HXLINE( 137)		this->_scaler = value;
HXLINE( 138)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 139)		return this->_scaler;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,set_scaler,return )

Float ScreenDensityScaleManager_obj::getScale(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_145_getScale)
HXLINE( 146)		Float result = ((Float)1.0);
HXLINE( 147)		if (::hx::IsNull( this->_target )) {
HXLINE( 148)			return result;
            		}
HXLINE( 186)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,getScale,return )

 ::openfl::geom::Rectangle ScreenDensityScaleManager_obj::getBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_46c206bc133d7389_192_getBounds)
HXLINE( 193)		 ::openfl::geom::Rectangle bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 194)		if (::hx::IsNull( this->_target )) {
HXLINE( 195)			return bounds;
            		}
HXLINE( 197)		 ::openfl::display::Stage stage = this->_target->stage;
HXLINE( 198)		if (::hx::IsNull( stage )) {
HXLINE( 199)			return bounds;
            		}
HXLINE( 201)		Float needsToBeDivisibleByTwo = ::Math_obj::ffloor(this->_target->get_scaleX());
HXDLIN( 201)		bool needsToBeDivisibleByTwo1 = (needsToBeDivisibleByTwo != this->_target->get_scaleX());
HXLINE( 202)		Float appWidth = ::Math_obj::ffloor(( (Float)(stage->stageWidth) ));
HXLINE( 203)		if (needsToBeDivisibleByTwo1) {
HXLINE( 204)			appWidth = ::feathers::utils::MathUtil_obj::roundDownToNearest(appWidth,2);
            		}
HXLINE( 206)		bounds->width = appWidth;
HXLINE( 207)		Float appHeight = ::Math_obj::ffloor(( (Float)(stage->stageHeight) ));
HXLINE( 208)		if (needsToBeDivisibleByTwo1) {
HXLINE( 209)			appHeight = ::feathers::utils::MathUtil_obj::roundDownToNearest(appHeight,2);
            		}
HXLINE( 211)		bounds->height = appHeight;
HXLINE( 212)		return bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,getBounds,return )

void ScreenDensityScaleManager_obj::addTargetStageListeners(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_215_addTargetStageListeners)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 216)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 216)			_hx_tmp = true;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 217)			return;
            		}
HXLINE( 219)		this->_target->stage->addEventListener(HX_("resize",f4,59,7b,08),this->screenDensityScaleManager_stage_resizeHandler_dyn(),false,0,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,addTargetStageListeners,(void))

void ScreenDensityScaleManager_obj::removeTargetStageListeners(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_222_removeTargetStageListeners)
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 223)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			return;
            		}
HXLINE( 226)		this->_target->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->screenDensityScaleManager_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,removeTargetStageListeners,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_target_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_230_screenDensityScaleManager_target_addedToStageHandler)
HXDLIN( 230)		this->addTargetStageListeners();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_target_addedToStageHandler,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_234_screenDensityScaleManager_target_removedFromStageHandler)
HXDLIN( 234)		this->removeTargetStageListeners();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_target_removedFromStageHandler,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_238_screenDensityScaleManager_stage_resizeHandler)
HXDLIN( 238)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_stage_resizeHandler,(void))


::hx::ObjectPtr< ScreenDensityScaleManager_obj > ScreenDensityScaleManager_obj::__new( ::feathers::utils::ScreenDensityScaleCalculator scaler) {
	::hx::ObjectPtr< ScreenDensityScaleManager_obj > __this = new ScreenDensityScaleManager_obj();
	__this->__construct(scaler);
	return __this;
}

::hx::ObjectPtr< ScreenDensityScaleManager_obj > ScreenDensityScaleManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::feathers::utils::ScreenDensityScaleCalculator scaler) {
	ScreenDensityScaleManager_obj *__this = (ScreenDensityScaleManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenDensityScaleManager_obj), true, "feathers.core.ScreenDensityScaleManager"));
	*(void **)__this = ScreenDensityScaleManager_obj::_hx_vtable;
	__this->__construct(scaler);
	return __this;
}

ScreenDensityScaleManager_obj::ScreenDensityScaleManager_obj()
{
}

void ScreenDensityScaleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenDensityScaleManager);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_scaler,"_scaler");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenDensityScaleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_scaler,"_scaler");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScreenDensityScaleManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		if (HX_FIELD_EQ(inName,"scaler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaler() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"_scaler") ) { return ::hx::Val( _scaler ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScale") ) { return ::hx::Val( getScale_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaler") ) { return ::hx::Val( get_scaler_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaler") ) { return ::hx::Val( set_scaler_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"addTargetStageListeners") ) { return ::hx::Val( addTargetStageListeners_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeTargetStageListeners") ) { return ::hx::Val( removeTargetStageListeners_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_stage_resizeHandler") ) { return ::hx::Val( screenDensityScaleManager_stage_resizeHandler_dyn() ); }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_target_addedToStageHandler") ) { return ::hx::Val( screenDensityScaleManager_target_addedToStageHandler_dyn() ); }
		break;
	case 56:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_target_removedFromStageHandler") ) { return ::hx::Val( screenDensityScaleManager_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenDensityScaleManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"scaler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaler(inValue.Cast<  ::feathers::utils::ScreenDensityScaleCalculator >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaler") ) { _scaler=inValue.Cast<  ::feathers::utils::ScreenDensityScaleCalculator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenDensityScaleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_scaler",47,fc,9c,aa));
	outFields->push(HX_("scaler",a8,ea,25,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenDensityScaleManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ScreenDensityScaleManager_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::feathers::utils::ScreenDensityScaleCalculator */ ,(int)offsetof(ScreenDensityScaleManager_obj,_scaler),HX_("_scaler",47,fc,9c,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenDensityScaleManager_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenDensityScaleManager_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_scaler",47,fc,9c,aa),
	HX_("get_scaler",71,5a,ad,2c),
	HX_("set_scaler",e5,f8,2a,30),
	HX_("getScale",14,de,a5,d8),
	HX_("getBounds",ab,0f,74,e2),
	HX_("addTargetStageListeners",d3,7a,93,13),
	HX_("removeTargetStageListeners",76,28,52,87),
	HX_("screenDensityScaleManager_target_addedToStageHandler",f9,86,e5,60),
	HX_("screenDensityScaleManager_target_removedFromStageHandler",48,85,ee,3f),
	HX_("screenDensityScaleManager_stage_resizeHandler",35,89,a6,0c),
	::String(null()) };

::hx::Class ScreenDensityScaleManager_obj::__mClass;

void ScreenDensityScaleManager_obj::__register()
{
	ScreenDensityScaleManager_obj _hx_dummy;
	ScreenDensityScaleManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ScreenDensityScaleManager",ce,78,0d,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenDensityScaleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenDensityScaleManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenDensityScaleManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenDensityScaleManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
