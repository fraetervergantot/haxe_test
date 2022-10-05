#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidationQueue
#include <feathers/core/ValidationQueue.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayUtil
#include <feathers/utils/DisplayUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_84_new,"feathers.core.ValidatingSprite","new",0x25cb1b3b,"feathers.core.ValidatingSprite.new","feathers/core/ValidatingSprite.hx",84,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_101_get_validating,"feathers.core.ValidatingSprite","get_validating",0xdc3e50a1,"feathers.core.ValidatingSprite.get_validating","feathers/core/ValidatingSprite.hx",101,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_119_get_depth,"feathers.core.ValidatingSprite","get_depth",0xfabaae75,"feathers.core.ValidatingSprite.get_depth","feathers/core/ValidatingSprite.hx",119,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_138_isInvalid,"feathers.core.ValidatingSprite","isInvalid",0x1f2db948,"feathers.core.ValidatingSprite.isInvalid","feathers/core/ValidatingSprite.hx",138,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_158_runWithoutInvalidation,"feathers.core.ValidatingSprite","runWithoutInvalidation",0x0123d840,"feathers.core.ValidatingSprite.runWithoutInvalidation","feathers/core/ValidatingSprite.hx",158,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_187_setInvalid,"feathers.core.ValidatingSprite","setInvalid",0x98b495fa,"feathers.core.ValidatingSprite.setInvalid","feathers/core/ValidatingSprite.hx",187,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_247_validateNow,"feathers.core.ValidatingSprite","validateNow",0xfc15dffb,"feathers.core.ValidatingSprite.validateNow","feathers/core/ValidatingSprite.hx",247,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_286_setInvalidationFlag,"feathers.core.ValidatingSprite","setInvalidationFlag",0x9e3423c7,"feathers.core.ValidatingSprite.setInvalidationFlag","feathers/core/ValidatingSprite.hx",286,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_313_update,"feathers.core.ValidatingSprite","update",0x607a360e,"feathers.core.ValidatingSprite.update","feathers/core/ValidatingSprite.hx",313,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_315_validatingSprite_addedToStageHandler,"feathers.core.ValidatingSprite","validatingSprite_addedToStageHandler",0x122cdf25,"feathers.core.ValidatingSprite.validatingSprite_addedToStageHandler","feathers/core/ValidatingSprite.hx",315,0x0cdd4435)
HX_LOCAL_STACK_FRAME(_hx_pos_e6b8ef3cbf4ee359_325_validatingSprite_removedFromStageHandler,"feathers.core.ValidatingSprite","validatingSprite_removedFromStageHandler",0x39636374,"feathers.core.ValidatingSprite.validatingSprite_removedFromStageHandler","feathers/core/ValidatingSprite.hx",325,0x0cdd4435)
namespace feathers{
namespace core{

void ValidatingSprite_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_84_new)
HXLINE( 150)		this->_ignoreInvalidationFlags = false;
HXLINE( 111)		this->_depth = -1;
HXLINE( 109)		this->_validationQueue = null();
HXLINE( 108)		this->_setInvalidCount = 0;
HXLINE( 107)		this->_delayedInvalidationFlags =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 106)		this->_invalidationFlags =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 105)		this->_allInvalidDelayed = false;
HXLINE( 104)		this->_allInvalid = false;
HXLINE(  91)		this->_validating = false;
HXLINE(  86)		super::__construct();
HXLINE(  87)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->validatingSprite_addedToStageHandler_dyn(),null(),null(),null());
HXLINE(  88)		this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->validatingSprite_removedFromStageHandler_dyn(),null(),null(),null());
            	}

Dynamic ValidatingSprite_obj::__CreateEmpty() { return new ValidatingSprite_obj; }

void *ValidatingSprite_obj::_hx_vtable = 0;

Dynamic ValidatingSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidatingSprite_obj > _hx_result = new ValidatingSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValidatingSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::feathers::core::IValidating_obj _hx_feathers_core_ValidatingSprite__hx_feathers_core_IValidating= {
	( int (::hx::Object::*)())&::feathers::core::ValidatingSprite_obj::get_depth,
	( void (::hx::Object::*)())&::feathers::core::ValidatingSprite_obj::validateNow,
};

void *ValidatingSprite_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x64d4b3cd: return &_hx_feathers_core_ValidatingSprite__hx_feathers_core_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

bool ValidatingSprite_obj::get_validating(){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_101_get_validating)
HXDLIN( 101)		return this->_validating;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatingSprite_obj,get_validating,return )

int ValidatingSprite_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_119_get_depth)
HXDLIN( 119)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatingSprite_obj,get_depth,return )

bool ValidatingSprite_obj::isInvalid( ::feathers::core::InvalidationFlag flag){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_138_isInvalid)
HXLINE( 139)		if (this->_allInvalid) {
HXLINE( 140)			return true;
            		}
HXLINE( 142)		if (::hx::IsNull( flag )) {
HXLINE( 144)			return ( (bool)(this->_invalidationFlags->keys()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            		}
HXLINE( 146)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,isInvalid,return )

void ValidatingSprite_obj::runWithoutInvalidation( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_158_runWithoutInvalidation)
HXLINE( 159)		bool oldIgnoreValidation = this->_ignoreInvalidationFlags;
HXLINE( 160)		this->_ignoreInvalidationFlags = true;
HXLINE( 161)		callback();
HXLINE( 162)		this->_ignoreInvalidationFlags = oldIgnoreValidation;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,runWithoutInvalidation,(void))

void ValidatingSprite_obj::setInvalid( ::feathers::core::InvalidationFlag flag){
            	HX_GC_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_187_setInvalid)
HXLINE( 188)		if (this->_ignoreInvalidationFlags) {
HXLINE( 189)			return;
            		}
HXLINE( 191)		bool alreadyInvalid = this->isInvalid(null());
HXLINE( 192)		bool alreadyDelayedInvalid = false;
HXLINE( 193)		if (this->_validating) {
HXLINE( 194)			 ::Dynamic otherFlag = this->_delayedInvalidationFlags->keys();
HXDLIN( 194)			while(( (bool)(otherFlag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 194)				 ::feathers::core::InvalidationFlag otherFlag1 = otherFlag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 195)				alreadyDelayedInvalid = true;
HXLINE( 196)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 199)		if (::hx::IsNull( flag )) {
HXLINE( 200)			if (this->_validating) {
HXLINE( 201)				this->_allInvalidDelayed = true;
            			}
            			else {
HXLINE( 203)				this->_allInvalid = true;
            			}
            		}
            		else {
HXLINE( 206)			if (this->_validating) {
HXLINE( 207)				this->_delayedInvalidationFlags->set(flag,true);
            			}
            			else {
HXLINE( 208)				bool _hx_tmp;
HXDLIN( 208)				if (::hx::IsNotNull( flag )) {
HXLINE( 208)					_hx_tmp = !(this->_invalidationFlags->exists(flag));
            				}
            				else {
HXLINE( 208)					_hx_tmp = false;
            				}
HXDLIN( 208)				if (_hx_tmp) {
HXLINE( 209)					this->_invalidationFlags->set(flag,true);
            				}
            			}
            		}
HXLINE( 212)		if (::hx::IsNull( this->_validationQueue )) {
HXLINE( 215)			return;
            		}
HXLINE( 217)		if (this->_validating) {
HXLINE( 220)			if (alreadyDelayedInvalid) {
HXLINE( 221)				return;
            			}
HXLINE( 223)			this->_setInvalidCount++;
HXLINE( 229)			if ((this->_setInvalidCount >= 10)) {
HXLINE( 230)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))) + HX_(" returned to validation queue too many times during validation. This may be an infinite loop. Try to avoid doing anything that calls setInvalid() during validation.",f2,36,c8,3e))));
            			}
HXLINE( 234)			this->_validationQueue->addControl(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 235)			return;
            		}
HXLINE( 237)		if (alreadyInvalid) {
HXLINE( 238)			return;
            		}
HXLINE( 240)		this->_setInvalidCount = 0;
HXLINE( 241)		this->_validationQueue->addControl(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,setInvalid,(void))

void ValidatingSprite_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_247_validateNow)
HXLINE( 250)		if (!(this->isInvalid(null()))) {
HXLINE( 251)			return;
            		}
HXLINE( 253)		if (this->_validating) {
HXLINE( 256)			return;
            		}
HXLINE( 258)		this->_validating = true;
HXLINE( 259)		this->update();
HXLINE( 260)		{
HXLINE( 260)			 ::Dynamic flag = this->_invalidationFlags->keys();
HXDLIN( 260)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 260)				 ::feathers::core::InvalidationFlag flag1 = flag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 261)				this->_invalidationFlags->remove(flag1);
            			}
            		}
HXLINE( 263)		this->_allInvalid = this->_allInvalidDelayed;
HXLINE( 264)		{
HXLINE( 264)			 ::Dynamic flag1 = this->_delayedInvalidationFlags->keys();
HXDLIN( 264)			while(( (bool)(flag1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 264)				 ::feathers::core::InvalidationFlag flag = flag1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 265)				if (::hx::IsNull( flag )) {
HXLINE( 266)					this->_allInvalid = true;
            				}
            				else {
HXLINE( 268)					this->_invalidationFlags->set(flag,true);
            				}
HXLINE( 270)				this->_delayedInvalidationFlags->remove(flag);
            			}
            		}
HXLINE( 272)		this->_validating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatingSprite_obj,validateNow,(void))

void ValidatingSprite_obj::setInvalidationFlag( ::feathers::core::InvalidationFlag flag){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_286_setInvalidationFlag)
HXLINE( 287)		if (this->_ignoreInvalidationFlags) {
HXLINE( 288)			return;
            		}
HXLINE( 290)		if (this->_invalidationFlags->exists(flag)) {
HXLINE( 291)			return;
            		}
HXLINE( 293)		this->_invalidationFlags->set(flag,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,setInvalidationFlag,(void))

void ValidatingSprite_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_313_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ValidatingSprite_obj,update,(void))

void ValidatingSprite_obj::validatingSprite_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_315_validatingSprite_addedToStageHandler)
HXLINE( 316)		this->_depth = ::feathers::utils::DisplayUtil_obj::getDisplayObjectDepthFromStage(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 317)		this->_validationQueue = ::feathers::core::ValidationQueue_obj::forStage(this->stage);
HXLINE( 318)		bool _hx_tmp;
HXDLIN( 318)		if (::hx::IsNotNull( this->_validationQueue )) {
HXLINE( 318)			_hx_tmp = this->isInvalid(null());
            		}
            		else {
HXLINE( 318)			_hx_tmp = false;
            		}
HXDLIN( 318)		if (_hx_tmp) {
HXLINE( 319)			this->_setInvalidCount = 0;
HXLINE( 321)			this->_validationQueue->addControl(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,validatingSprite_addedToStageHandler,(void))

void ValidatingSprite_obj::validatingSprite_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e6b8ef3cbf4ee359_325_validatingSprite_removedFromStageHandler)
HXLINE( 326)		this->_depth = -1;
HXLINE( 327)		this->_validationQueue = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ValidatingSprite_obj,validatingSprite_removedFromStageHandler,(void))


::hx::ObjectPtr< ValidatingSprite_obj > ValidatingSprite_obj::__new() {
	::hx::ObjectPtr< ValidatingSprite_obj > __this = new ValidatingSprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ValidatingSprite_obj > ValidatingSprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ValidatingSprite_obj *__this = (ValidatingSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidatingSprite_obj), true, "feathers.core.ValidatingSprite"));
	*(void **)__this = ValidatingSprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ValidatingSprite_obj::ValidatingSprite_obj()
{
}

void ValidatingSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidatingSprite);
	HX_MARK_MEMBER_NAME(_validating,"_validating");
	HX_MARK_MEMBER_NAME(_allInvalid,"_allInvalid");
	HX_MARK_MEMBER_NAME(_allInvalidDelayed,"_allInvalidDelayed");
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_MARK_MEMBER_NAME(_setInvalidCount,"_setInvalidCount");
	HX_MARK_MEMBER_NAME(_validationQueue,"_validationQueue");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	HX_MARK_MEMBER_NAME(_ignoreInvalidationFlags,"_ignoreInvalidationFlags");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ValidatingSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_validating,"_validating");
	HX_VISIT_MEMBER_NAME(_allInvalid,"_allInvalid");
	HX_VISIT_MEMBER_NAME(_allInvalidDelayed,"_allInvalidDelayed");
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_delayedInvalidationFlags,"_delayedInvalidationFlags");
	HX_VISIT_MEMBER_NAME(_setInvalidCount,"_setInvalidCount");
	HX_VISIT_MEMBER_NAME(_validationQueue,"_validationQueue");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	HX_VISIT_MEMBER_NAME(_ignoreInvalidationFlags,"_ignoreInvalidationFlags");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ValidatingSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"isInvalid") ) { return ::hx::Val( isInvalid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validating") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_validating() ); }
		if (HX_FIELD_EQ(inName,"setInvalid") ) { return ::hx::Val( setInvalid_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_validating") ) { return ::hx::Val( _validating ); }
		if (HX_FIELD_EQ(inName,"_allInvalid") ) { return ::hx::Val( _allInvalid ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_validating") ) { return ::hx::Val( get_validating_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_setInvalidCount") ) { return ::hx::Val( _setInvalidCount ); }
		if (HX_FIELD_EQ(inName,"_validationQueue") ) { return ::hx::Val( _validationQueue ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_allInvalidDelayed") ) { return ::hx::Val( _allInvalidDelayed ); }
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setInvalidationFlag") ) { return ::hx::Val( setInvalidationFlag_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"runWithoutInvalidation") ) { return ::hx::Val( runWithoutInvalidation_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ignoreInvalidationFlags") ) { return ::hx::Val( _ignoreInvalidationFlags ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { return ::hx::Val( _delayedInvalidationFlags ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"validatingSprite_addedToStageHandler") ) { return ::hx::Val( validatingSprite_addedToStageHandler_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"validatingSprite_removedFromStageHandler") ) { return ::hx::Val( validatingSprite_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ValidatingSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_validating") ) { _validating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allInvalid") ) { _allInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_setInvalidCount") ) { _setInvalidCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validationQueue") ) { _validationQueue=inValue.Cast<  ::feathers::core::ValidationQueue >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_allInvalidDelayed") ) { _allInvalidDelayed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_ignoreInvalidationFlags") ) { _ignoreInvalidationFlags=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_delayedInvalidationFlags") ) { _delayedInvalidationFlags=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValidatingSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_validating",72,d8,76,b4));
	outFields->push(HX_("validating",53,0b,ed,e1));
	outFields->push(HX_("_allInvalid",f5,ac,7a,d6));
	outFields->push(HX_("_allInvalidDelayed",2d,8a,39,cc));
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_delayedInvalidationFlags",66,26,ce,04));
	outFields->push(HX_("_setInvalidCount",9b,cf,4d,f9));
	outFields->push(HX_("_validationQueue",19,45,96,f1));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	outFields->push(HX_("_ignoreInvalidationFlags",18,4c,06,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidatingSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ValidatingSprite_obj,_validating),HX_("_validating",72,d8,76,b4)},
	{::hx::fsBool,(int)offsetof(ValidatingSprite_obj,_allInvalid),HX_("_allInvalid",f5,ac,7a,d6)},
	{::hx::fsBool,(int)offsetof(ValidatingSprite_obj,_allInvalidDelayed),HX_("_allInvalidDelayed",2d,8a,39,cc)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(ValidatingSprite_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(ValidatingSprite_obj,_delayedInvalidationFlags),HX_("_delayedInvalidationFlags",66,26,ce,04)},
	{::hx::fsInt,(int)offsetof(ValidatingSprite_obj,_setInvalidCount),HX_("_setInvalidCount",9b,cf,4d,f9)},
	{::hx::fsObject /*  ::feathers::core::ValidationQueue */ ,(int)offsetof(ValidatingSprite_obj,_validationQueue),HX_("_validationQueue",19,45,96,f1)},
	{::hx::fsInt,(int)offsetof(ValidatingSprite_obj,_depth),HX_("_depth",44,38,11,d3)},
	{::hx::fsBool,(int)offsetof(ValidatingSprite_obj,_ignoreInvalidationFlags),HX_("_ignoreInvalidationFlags",18,4c,06,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ValidatingSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String ValidatingSprite_obj_sMemberFields[] = {
	HX_("_validating",72,d8,76,b4),
	HX_("get_validating",9c,93,e2,57),
	HX_("_allInvalid",f5,ac,7a,d6),
	HX_("_allInvalidDelayed",2d,8a,39,cc),
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_delayedInvalidationFlags",66,26,ce,04),
	HX_("_setInvalidCount",9b,cf,4d,f9),
	HX_("_validationQueue",19,45,96,f1),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("isInvalid",2d,58,46,3f),
	HX_("_ignoreInvalidationFlags",18,4c,06,d3),
	HX_("runWithoutInvalidation",3b,0e,8c,d0),
	HX_("setInvalid",75,ff,26,8e),
	HX_("validateNow",20,c2,bf,ca),
	HX_("setInvalidationFlag",ec,32,74,59),
	HX_("update",09,86,05,87),
	HX_("validatingSprite_addedToStageHandler",60,76,5d,32),
	HX_("validatingSprite_removedFromStageHandler",2f,b4,cf,ab),
	::String(null()) };

::hx::Class ValidatingSprite_obj::__mClass;

void ValidatingSprite_obj::__register()
{
	ValidatingSprite_obj _hx_dummy;
	ValidatingSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ValidatingSprite",c9,61,40,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidatingSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidatingSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidatingSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidatingSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
