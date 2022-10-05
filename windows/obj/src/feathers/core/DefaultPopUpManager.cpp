#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_DefaultPopUpManager
#include <feathers/core/DefaultPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8432326b3d7ec899_26_new,"feathers.core.DefaultPopUpManager","new",0x1ccd77e3,"feathers.core.DefaultPopUpManager.new","feathers/core/DefaultPopUpManager.hx",26,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_54_get_root,"feathers.core.DefaultPopUpManager","get_root",0xd252e748,"feathers.core.DefaultPopUpManager.get_root","feathers/core/DefaultPopUpManager.hx",54,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_57_set_root,"feathers.core.DefaultPopUpManager","set_root",0x80b040bc,"feathers.core.DefaultPopUpManager.set_root","feathers/core/DefaultPopUpManager.hx",57,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_99_get_overlayFactory,"feathers.core.DefaultPopUpManager","get_overlayFactory",0x3610b7c0,"feathers.core.DefaultPopUpManager.get_overlayFactory","feathers/core/DefaultPopUpManager.hx",99,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_102_set_overlayFactory,"feathers.core.DefaultPopUpManager","set_overlayFactory",0x12bfea34,"feathers.core.DefaultPopUpManager.set_overlayFactory","feathers/core/DefaultPopUpManager.hx",102,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_116_get_popUpCount,"feathers.core.DefaultPopUpManager","get_popUpCount",0x4110cc89,"feathers.core.DefaultPopUpManager.get_popUpCount","feathers/core/DefaultPopUpManager.hx",116,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_124_get_topLevelPopUpCount,"feathers.core.DefaultPopUpManager","get_topLevelPopUpCount",0x6209da18,"feathers.core.DefaultPopUpManager.get_topLevelPopUpCount","feathers/core/DefaultPopUpManager.hx",124,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_143_getPopUpAt,"feathers.core.DefaultPopUpManager","getPopUpAt",0x19b17746,"feathers.core.DefaultPopUpManager.getPopUpAt","feathers/core/DefaultPopUpManager.hx",143,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_150_isPopUp,"feathers.core.DefaultPopUpManager","isPopUp",0x0871b705,"feathers.core.DefaultPopUpManager.isPopUp","feathers/core/DefaultPopUpManager.hx",150,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_156_isTopLevelPopUp,"feathers.core.DefaultPopUpManager","isTopLevelPopUp",0xa3c1cad6,"feathers.core.DefaultPopUpManager.isTopLevelPopUp","feathers/core/DefaultPopUpManager.hx",156,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_178_isModal,"feathers.core.DefaultPopUpManager","isModal",0x4e34e8e6,"feathers.core.DefaultPopUpManager.isModal","feathers/core/DefaultPopUpManager.hx",178,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_189_hasModalPopUps,"feathers.core.DefaultPopUpManager","hasModalPopUps",0xb7ef1cd7,"feathers.core.DefaultPopUpManager.hasModalPopUps","feathers/core/DefaultPopUpManager.hx",189,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_195_addPopUp,"feathers.core.DefaultPopUpManager","addPopUp",0x46db5208,"feathers.core.DefaultPopUpManager.addPopUp","feathers/core/DefaultPopUpManager.hx",195,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_250_removePopUp,"feathers.core.DefaultPopUpManager","removePopUp",0xef4a2deb,"feathers.core.DefaultPopUpManager.removePopUp","feathers/core/DefaultPopUpManager.hx",250,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_261_removeAllPopUps,"feathers.core.DefaultPopUpManager","removeAllPopUps",0xbc960bc7,"feathers.core.DefaultPopUpManager.removeAllPopUps","feathers/core/DefaultPopUpManager.hx",261,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_279_centerPopUp,"feathers.core.DefaultPopUpManager","centerPopUp",0xc2e656ba,"feathers.core.DefaultPopUpManager.centerPopUp","feathers/core/DefaultPopUpManager.hx",279,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_290_cleanupOverlay,"feathers.core.DefaultPopUpManager","cleanupOverlay",0xb96fbd29,"feathers.core.DefaultPopUpManager.cleanupOverlay","feathers/core/DefaultPopUpManager.hx",290,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_299_defaultPopUpManager_popUp_removedFromStageHandler,"feathers.core.DefaultPopUpManager","defaultPopUpManager_popUp_removedFromStageHandler",0xb5ca5329,"feathers.core.DefaultPopUpManager.defaultPopUpManager_popUp_removedFromStageHandler","feathers/core/DefaultPopUpManager.hx",299,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_313_defaultPopUpManager_popUp_resizeHandler,"feathers.core.DefaultPopUpManager","defaultPopUpManager_popUp_resizeHandler",0xb55f84a9,"feathers.core.DefaultPopUpManager.defaultPopUpManager_popUp_resizeHandler","feathers/core/DefaultPopUpManager.hx",313,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_318_defaultPopUpManager_stage_resizeHandler,"feathers.core.DefaultPopUpManager","defaultPopUpManager_stage_resizeHandler",0x0ec4249b,"feathers.core.DefaultPopUpManager.defaultPopUpManager_stage_resizeHandler","feathers/core/DefaultPopUpManager.hx",318,0xce2cf94d)
HX_LOCAL_STACK_FRAME(_hx_pos_8432326b3d7ec899_27_defaultOverlayFactory,"feathers.core.DefaultPopUpManager","defaultOverlayFactory",0x10cf33fe,"feathers.core.DefaultPopUpManager.defaultOverlayFactory","feathers/core/DefaultPopUpManager.hx",27,0xce2cf94d)
namespace feathers{
namespace core{

void DefaultPopUpManager_obj::__construct( ::openfl::display::DisplayObjectContainer root){
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_26_new)
HXLINE(  89)		this->_popUpToOverlay =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  87)		this->_centeredPopUps = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  85)		this->popUps = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  44)		this->_ignoreRemoval = false;
HXLINE(  41)		this->set_root(root);
            	}

Dynamic DefaultPopUpManager_obj::__CreateEmpty() { return new DefaultPopUpManager_obj; }

void *DefaultPopUpManager_obj::_hx_vtable = 0;

Dynamic DefaultPopUpManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultPopUpManager_obj > _hx_result = new DefaultPopUpManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultPopUpManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x631774d3;
}

static ::feathers::core::IPopUpManager_obj _hx_feathers_core_DefaultPopUpManager__hx_feathers_core_IPopUpManager= {
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::get_overlayFactory,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::core::DefaultPopUpManager_obj::set_overlayFactory,
	(  ::openfl::display::DisplayObjectContainer (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::get_root,
	(  ::openfl::display::DisplayObjectContainer (::hx::Object::*)( ::openfl::display::DisplayObjectContainer))&::feathers::core::DefaultPopUpManager_obj::set_root,
	( int (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::get_popUpCount,
	( int (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::get_topLevelPopUpCount,
	(  ::openfl::display::DisplayObject (::hx::Object::*)(int))&::feathers::core::DefaultPopUpManager_obj::getPopUpAt,
	( bool (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::DefaultPopUpManager_obj::isPopUp,
	( bool (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::DefaultPopUpManager_obj::isTopLevelPopUp,
	( bool (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::DefaultPopUpManager_obj::isModal,
	( bool (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::hasModalPopUps,
	(  ::openfl::display::DisplayObject (::hx::Object::*)( ::openfl::display::DisplayObject,::hx::Null< bool > ,::hx::Null< bool > , ::Dynamic))&::feathers::core::DefaultPopUpManager_obj::addPopUp,
	(  ::openfl::display::DisplayObject (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::DefaultPopUpManager_obj::removePopUp,
	( void (::hx::Object::*)())&::feathers::core::DefaultPopUpManager_obj::removeAllPopUps,
	( void (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::DefaultPopUpManager_obj::centerPopUp,
};

void *DefaultPopUpManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x808fa87b: return &_hx_feathers_core_DefaultPopUpManager__hx_feathers_core_IPopUpManager;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::openfl::display::DisplayObjectContainer DefaultPopUpManager_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_54_get_root)
HXDLIN(  54)		return this->_root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,get_root,return )

 ::openfl::display::DisplayObjectContainer DefaultPopUpManager_obj::set_root( ::openfl::display::DisplayObjectContainer value){
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_57_set_root)
HXLINE(  58)		if (::hx::IsInstanceEq( this->_root,value )) {
HXLINE(  59)			return this->_root;
            		}
HXLINE(  61)		if (::hx::IsNull( value->stage )) {
HXLINE(  62)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("DefaultPopUpManager root's stage property must not be null.",59,e3,50,d9)));
            		}
HXLINE(  64)		bool oldIgnoreRemoval = this->_ignoreRemoval;
HXLINE(  65)		this->_ignoreRemoval = true;
HXLINE(  66)		{
HXLINE(  66)			int _g = 0;
HXDLIN(  66)			::Array< ::Dynamic> _g1 = this->popUps;
HXDLIN(  66)			while((_g < _g1->length)){
HXLINE(  66)				 ::openfl::display::DisplayObject popUp = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  66)				_g = (_g + 1);
HXLINE(  67)				this->_root->removeChild(popUp);
HXLINE(  68)				 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(popUp)) );
HXLINE(  69)				if (::hx::IsNotNull( overlay )) {
HXLINE(  70)					this->_root->removeChild(overlay);
            				}
            			}
            		}
HXLINE(  73)		this->_ignoreRemoval = oldIgnoreRemoval;
HXLINE(  74)		this->_root = value;
HXLINE(  75)		{
HXLINE(  75)			int _g2 = 0;
HXDLIN(  75)			::Array< ::Dynamic> _g3 = this->popUps;
HXDLIN(  75)			while((_g2 < _g3->length)){
HXLINE(  75)				 ::openfl::display::DisplayObject popUp = _g3->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  75)				_g2 = (_g2 + 1);
HXLINE(  76)				 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(popUp)) );
HXLINE(  77)				if (::hx::IsNotNull( overlay )) {
HXLINE(  78)					this->_root->addChild(overlay);
            				}
HXLINE(  80)				this->_root->addChild(popUp);
            			}
            		}
HXLINE(  82)		return this->_root;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,set_root,return )

 ::Dynamic DefaultPopUpManager_obj::get_overlayFactory(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_99_get_overlayFactory)
HXDLIN(  99)		return this->_overlayFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,get_overlayFactory,return )

 ::Dynamic DefaultPopUpManager_obj::set_overlayFactory( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_102_set_overlayFactory)
HXLINE( 103)		if (::Reflect_obj::compareMethods(this->_overlayFactory,value)) {
HXLINE( 104)			return this->_overlayFactory;
            		}
HXLINE( 106)		this->_overlayFactory = value;
HXLINE( 107)		return this->_overlayFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,set_overlayFactory,return )

int DefaultPopUpManager_obj::get_popUpCount(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_116_get_popUpCount)
HXDLIN( 116)		return this->popUps->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,get_popUpCount,return )

int DefaultPopUpManager_obj::get_topLevelPopUpCount(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_124_get_topLevelPopUpCount)
HXLINE( 125)		int count = 0;
HXLINE( 126)		int i = (this->popUps->length - 1);
HXLINE( 127)		while((i >= 0)){
HXLINE( 128)			count = (count + 1);
HXLINE( 129)			 ::openfl::display::DisplayObject popUp = this->popUps->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 130)			 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(popUp)) );
HXLINE( 131)			if (::hx::IsNotNull( overlay )) {
HXLINE( 132)				return count;
            			}
HXLINE( 134)			i = (i - 1);
            		}
HXLINE( 136)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,get_topLevelPopUpCount,return )

 ::openfl::display::DisplayObject DefaultPopUpManager_obj::getPopUpAt(int index){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_143_getPopUpAt)
HXDLIN( 143)		return this->popUps->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,getPopUpAt,return )

bool DefaultPopUpManager_obj::isPopUp( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_150_isPopUp)
HXDLIN( 150)		return (this->popUps->indexOf(target,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,isPopUp,return )

bool DefaultPopUpManager_obj::isTopLevelPopUp( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_156_isTopLevelPopUp)
HXLINE( 157)		int i = (this->popUps->length - 1);
HXLINE( 158)		while((i >= 0)){
HXLINE( 159)			 ::openfl::display::DisplayObject otherPopUp = this->popUps->__get(i).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 160)			if (::hx::IsInstanceEq( otherPopUp,target )) {
HXLINE( 162)				return true;
            			}
HXLINE( 164)			 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(otherPopUp)) );
HXLINE( 165)			if (::hx::IsNotNull( overlay )) {
HXLINE( 168)				return false;
            			}
HXLINE( 170)			i = (i - 1);
            		}
HXLINE( 172)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,isTopLevelPopUp,return )

bool DefaultPopUpManager_obj::isModal( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_178_isModal)
HXLINE( 179)		if (::hx::IsNull( target )) {
HXLINE( 180)			return false;
            		}
HXLINE( 182)		return ::hx::IsNotNull( this->_popUpToOverlay->get(target) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,isModal,return )

bool DefaultPopUpManager_obj::hasModalPopUps(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_189_hasModalPopUps)
HXDLIN( 189)		::Dynamic map = this->_popUpToOverlay;
HXDLIN( 189)		::Dynamic inlMapKeyValueIterator_map = map;
HXDLIN( 189)		 ::Dynamic inlMapKeyValueIterator_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 189)		return ( (bool)(inlMapKeyValueIterator_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,hasModalPopUps,return )

 ::openfl::display::DisplayObject DefaultPopUpManager_obj::addPopUp( ::openfl::display::DisplayObject popUp,::hx::Null< bool >  __o_isModal,::hx::Null< bool >  __o_isCentered, ::Dynamic customOverlayFactory){
            		bool isModal = __o_isModal.Default(true);
            		bool isCentered = __o_isCentered.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_195_addPopUp)
HXLINE( 196)		int index = this->popUps->indexOf(popUp,null());
HXLINE( 197)		if ((index != -1)) {
HXLINE( 198)			this->cleanupOverlay(popUp);
HXLINE( 199)			this->popUps->removeRange(index,1);
            		}
HXLINE( 201)		if (isModal) {
HXLINE( 202)			if (::hx::IsNull( customOverlayFactory )) {
HXLINE( 203)				customOverlayFactory = this->_overlayFactory;
            			}
HXLINE( 205)			if (::hx::IsNull( customOverlayFactory )) {
HXLINE( 206)				customOverlayFactory = ::feathers::core::DefaultPopUpManager_obj::defaultOverlayFactory_dyn();
            			}
HXLINE( 208)			 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(customOverlayFactory()) );
HXLINE( 209)			 ::openfl::display::Stage stage = this->_root->stage;
HXLINE( 210)			 ::openfl::display::DisplayObjectContainer stageTopLeft = this->_root;
HXDLIN( 210)			 ::openfl::geom::Point stageTopLeft1 = stageTopLeft->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 211)			 ::openfl::display::DisplayObjectContainer stageBottomRight = this->_root;
HXDLIN( 211)			 ::openfl::geom::Point stageBottomRight1 = stageBottomRight->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,stage->stageWidth,stage->stageHeight));
HXLINE( 212)			overlay->set_x(stageTopLeft1->x);
HXLINE( 213)			overlay->set_y(stageTopLeft1->y);
HXLINE( 214)			overlay->set_width((stageBottomRight1->x - stageTopLeft1->x));
HXLINE( 215)			overlay->set_height((stageBottomRight1->y - stageTopLeft1->y));
HXLINE( 216)			this->_root->addChild(overlay);
HXLINE( 217)			this->_popUpToOverlay->set(popUp,overlay);
            		}
HXLINE( 220)		this->popUps->push(popUp);
HXLINE( 222)		 ::openfl::display::DisplayObject result = this->_root->addChild(popUp);
HXLINE( 223)		if (::hx::IsNull( popUp->parent )) {
HXLINE( 224)			this->cleanupOverlay(popUp);
HXLINE( 225)			this->popUps->remove(popUp);
HXLINE( 226)			return null();
            		}
HXLINE( 232)		popUp->addEventListener(HX_("removedFromStage",34,21,76,ba),this->defaultPopUpManager_popUp_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE( 233)		if ((this->popUps->length == 1)) {
HXLINE( 234)			this->_root->stage->addEventListener(HX_("resize",f4,59,7b,08),this->defaultPopUpManager_stage_resizeHandler_dyn(),false,0,true);
            		}
HXLINE( 236)		if (isCentered) {
HXLINE( 237)			if (::Std_obj::isOfType(popUp,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 238)				::Dynamic measurePopUp =  ::hx::interface_check(popUp,0xcfc32883);
HXLINE( 239)				::openfl::events::IEventDispatcher_obj::addEventListener(measurePopUp,HX_("resize",f4,59,7b,08),this->defaultPopUpManager_popUp_resizeHandler_dyn(),null(),null(),null());
            			}
HXLINE( 241)			this->_centeredPopUps->push(popUp);
HXLINE( 242)			this->centerPopUp(popUp);
            		}
HXLINE( 244)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC4(DefaultPopUpManager_obj,addPopUp,return )

 ::openfl::display::DisplayObject DefaultPopUpManager_obj::removePopUp( ::openfl::display::DisplayObject popUp){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_250_removePopUp)
HXLINE( 251)		int index = this->popUps->indexOf(popUp,null());
HXLINE( 252)		if ((index == -1)) {
HXLINE( 253)			return popUp;
            		}
HXLINE( 255)		return this->_root->removeChild(popUp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,removePopUp,return )

void DefaultPopUpManager_obj::removeAllPopUps(){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_261_removeAllPopUps)
HXLINE( 265)		::Array< ::Dynamic> popUps = this->popUps->copy();
HXLINE( 266)		{
HXLINE( 266)			int _g = 0;
HXDLIN( 266)			while((_g < popUps->length)){
HXLINE( 266)				 ::openfl::display::DisplayObject popUp = popUps->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 266)				_g = (_g + 1);
HXLINE( 270)				if (this->isPopUp(popUp)) {
HXLINE( 271)					this->removePopUp(popUp);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,removeAllPopUps,(void))

void DefaultPopUpManager_obj::centerPopUp( ::openfl::display::DisplayObject popUp){
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_279_centerPopUp)
HXLINE( 280)		if (::Std_obj::isOfType(popUp,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 281)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(popUp,0x64d4b3cd));
            		}
HXLINE( 283)		 ::openfl::display::Stage stage = this->_root->stage;
HXLINE( 284)		 ::openfl::display::DisplayObjectContainer stageTopLeft = this->_root;
HXDLIN( 284)		 ::openfl::geom::Point stageTopLeft1 = stageTopLeft->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 285)		 ::openfl::display::DisplayObjectContainer stageBottomRight = this->_root;
HXDLIN( 285)		 ::openfl::geom::Point stageBottomRight1 = stageBottomRight->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,stage->stageWidth,stage->stageHeight));
HXLINE( 286)		Float stageTopLeft2 = stageTopLeft1->x;
HXDLIN( 286)		Float _hx_tmp = (stageBottomRight1->x - stageTopLeft1->x);
HXDLIN( 286)		popUp->set_x((stageTopLeft2 + ((_hx_tmp - popUp->get_width()) / ((Float)2.0))));
HXLINE( 287)		Float stageTopLeft3 = stageTopLeft1->y;
HXDLIN( 287)		Float _hx_tmp1 = (stageBottomRight1->y - stageTopLeft1->y);
HXDLIN( 287)		popUp->set_y((stageTopLeft3 + ((_hx_tmp1 - popUp->get_height()) / ((Float)2.0))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,centerPopUp,(void))

void DefaultPopUpManager_obj::cleanupOverlay( ::openfl::display::DisplayObject popUp){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_290_cleanupOverlay)
HXLINE( 291)		 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(popUp)) );
HXLINE( 292)		if (::hx::IsNull( overlay )) {
HXLINE( 293)			return;
            		}
HXLINE( 295)		this->_root->removeChild(overlay);
HXLINE( 296)		this->_popUpToOverlay->remove(popUp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,cleanupOverlay,(void))

void DefaultPopUpManager_obj::defaultPopUpManager_popUp_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_299_defaultPopUpManager_popUp_removedFromStageHandler)
HXLINE( 300)		if (this->_ignoreRemoval) {
HXLINE( 301)			return;
            		}
HXLINE( 303)		 ::openfl::display::DisplayObject popUp = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->currentTarget);
HXLINE( 304)		popUp->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->defaultPopUpManager_popUp_removedFromStageHandler_dyn(),null());
HXLINE( 305)		this->popUps->remove(popUp);
HXLINE( 306)		this->cleanupOverlay(popUp);
HXLINE( 308)		if ((this->popUps->length == 0)) {
HXLINE( 309)			this->_root->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->defaultPopUpManager_stage_resizeHandler_dyn(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,defaultPopUpManager_popUp_removedFromStageHandler,(void))

void DefaultPopUpManager_obj::defaultPopUpManager_popUp_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_8432326b3d7ec899_313_defaultPopUpManager_popUp_resizeHandler)
HXLINE( 314)		 ::openfl::display::DisplayObject popUp = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->currentTarget);
HXLINE( 315)		this->centerPopUp(popUp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,defaultPopUpManager_popUp_resizeHandler,(void))

void DefaultPopUpManager_obj::defaultPopUpManager_stage_resizeHandler( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_318_defaultPopUpManager_stage_resizeHandler)
HXLINE( 319)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 320)		 ::openfl::display::DisplayObjectContainer stageTopLeft = this->_root;
HXDLIN( 320)		 ::openfl::geom::Point stageTopLeft1 = stageTopLeft->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 321)		 ::openfl::display::DisplayObjectContainer stageBottomRight = this->_root;
HXDLIN( 321)		 ::openfl::geom::Point stageBottomRight1 = stageBottomRight->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,stage->stageWidth,stage->stageHeight));
HXLINE( 322)		{
HXLINE( 322)			int _g = 0;
HXDLIN( 322)			::Array< ::Dynamic> _g1 = this->popUps;
HXDLIN( 322)			while((_g < _g1->length)){
HXLINE( 322)				 ::openfl::display::DisplayObject popUp = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 322)				_g = (_g + 1);
HXLINE( 323)				 ::openfl::display::DisplayObject overlay = ( ( ::openfl::display::DisplayObject)(this->_popUpToOverlay->get(popUp)) );
HXLINE( 324)				if (::hx::IsNotNull( overlay )) {
HXLINE( 325)					overlay->set_x(stageTopLeft1->x);
HXLINE( 326)					overlay->set_y(stageTopLeft1->y);
HXLINE( 327)					overlay->set_width((stageBottomRight1->x - stageTopLeft1->x));
HXLINE( 328)					overlay->set_height((stageBottomRight1->y - stageTopLeft1->y));
            				}
            			}
            		}
HXLINE( 331)		{
HXLINE( 331)			int _g2 = 0;
HXDLIN( 331)			::Array< ::Dynamic> _g3 = this->_centeredPopUps;
HXDLIN( 331)			while((_g2 < _g3->length)){
HXLINE( 331)				 ::openfl::display::DisplayObject popUp = _g3->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 331)				_g2 = (_g2 + 1);
HXLINE( 332)				this->centerPopUp(popUp);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPopUpManager_obj,defaultPopUpManager_stage_resizeHandler,(void))

 ::openfl::display::DisplayObject DefaultPopUpManager_obj::defaultOverlayFactory(){
            	HX_GC_STACKFRAME(&_hx_pos_8432326b3d7ec899_27_defaultOverlayFactory)
HXLINE(  28)		 ::openfl::display::Sprite overlay =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  29)		overlay->get_graphics()->beginFill(8421504,((Float)0.75));
HXLINE(  30)		overlay->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),( (Float)(1) ));
HXLINE(  31)		overlay->get_graphics()->endFill();
HXLINE(  32)		return overlay;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultPopUpManager_obj,defaultOverlayFactory,return )


::hx::ObjectPtr< DefaultPopUpManager_obj > DefaultPopUpManager_obj::__new( ::openfl::display::DisplayObjectContainer root) {
	::hx::ObjectPtr< DefaultPopUpManager_obj > __this = new DefaultPopUpManager_obj();
	__this->__construct(root);
	return __this;
}

::hx::ObjectPtr< DefaultPopUpManager_obj > DefaultPopUpManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer root) {
	DefaultPopUpManager_obj *__this = (DefaultPopUpManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultPopUpManager_obj), true, "feathers.core.DefaultPopUpManager"));
	*(void **)__this = DefaultPopUpManager_obj::_hx_vtable;
	__this->__construct(root);
	return __this;
}

DefaultPopUpManager_obj::DefaultPopUpManager_obj()
{
}

void DefaultPopUpManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultPopUpManager);
	HX_MARK_MEMBER_NAME(_ignoreRemoval,"_ignoreRemoval");
	HX_MARK_MEMBER_NAME(_root,"_root");
	HX_MARK_MEMBER_NAME(popUps,"popUps");
	HX_MARK_MEMBER_NAME(_centeredPopUps,"_centeredPopUps");
	HX_MARK_MEMBER_NAME(_popUpToOverlay,"_popUpToOverlay");
	HX_MARK_MEMBER_NAME(_overlayFactory,"_overlayFactory");
	HX_MARK_END_CLASS();
}

void DefaultPopUpManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ignoreRemoval,"_ignoreRemoval");
	HX_VISIT_MEMBER_NAME(_root,"_root");
	HX_VISIT_MEMBER_NAME(popUps,"popUps");
	HX_VISIT_MEMBER_NAME(_centeredPopUps,"_centeredPopUps");
	HX_VISIT_MEMBER_NAME(_popUpToOverlay,"_popUpToOverlay");
	HX_VISIT_MEMBER_NAME(_overlayFactory,"_overlayFactory");
}

::hx::Val DefaultPopUpManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_root() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { return ::hx::Val( _root ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"popUps") ) { return ::hx::Val( popUps ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isPopUp") ) { return ::hx::Val( isPopUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"isModal") ) { return ::hx::Val( isModal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return ::hx::Val( set_root_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPopUp") ) { return ::hx::Val( addPopUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"popUpCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_popUpCount() ); }
		if (HX_FIELD_EQ(inName,"getPopUpAt") ) { return ::hx::Val( getPopUpAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removePopUp") ) { return ::hx::Val( removePopUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerPopUp") ) { return ::hx::Val( centerPopUp_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ignoreRemoval") ) { return ::hx::Val( _ignoreRemoval ); }
		if (HX_FIELD_EQ(inName,"overlayFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_overlayFactory() ); }
		if (HX_FIELD_EQ(inName,"get_popUpCount") ) { return ::hx::Val( get_popUpCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasModalPopUps") ) { return ::hx::Val( hasModalPopUps_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupOverlay") ) { return ::hx::Val( cleanupOverlay_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_centeredPopUps") ) { return ::hx::Val( _centeredPopUps ); }
		if (HX_FIELD_EQ(inName,"_popUpToOverlay") ) { return ::hx::Val( _popUpToOverlay ); }
		if (HX_FIELD_EQ(inName,"_overlayFactory") ) { return ::hx::Val( _overlayFactory ); }
		if (HX_FIELD_EQ(inName,"isTopLevelPopUp") ) { return ::hx::Val( isTopLevelPopUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAllPopUps") ) { return ::hx::Val( removeAllPopUps_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_overlayFactory") ) { return ::hx::Val( get_overlayFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_overlayFactory") ) { return ::hx::Val( set_overlayFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"topLevelPopUpCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_topLevelPopUpCount() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_topLevelPopUpCount") ) { return ::hx::Val( get_topLevelPopUpCount_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"defaultPopUpManager_popUp_resizeHandler") ) { return ::hx::Val( defaultPopUpManager_popUp_resizeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultPopUpManager_stage_resizeHandler") ) { return ::hx::Val( defaultPopUpManager_stage_resizeHandler_dyn() ); }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"defaultPopUpManager_popUp_removedFromStageHandler") ) { return ::hx::Val( defaultPopUpManager_popUp_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultPopUpManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"defaultOverlayFactory") ) { outValue = defaultOverlayFactory_dyn(); return true; }
	}
	return false;
}

::hx::Val DefaultPopUpManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_root(inValue.Cast<  ::openfl::display::DisplayObjectContainer >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"popUps") ) { popUps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ignoreRemoval") ) { _ignoreRemoval=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlayFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_overlayFactory(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_centeredPopUps") ) { _centeredPopUps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_popUpToOverlay") ) { _popUpToOverlay=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overlayFactory") ) { _overlayFactory=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultPopUpManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ignoreRemoval",7b,a1,df,4e));
	outFields->push(HX_("_root",01,0a,c0,fe));
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("popUps",a7,94,bb,fb));
	outFields->push(HX_("_centeredPopUps",da,3d,de,88));
	outFields->push(HX_("_popUpToOverlay",08,8c,50,dc));
	outFields->push(HX_("popUpCount",e3,72,7c,11));
	outFields->push(HX_("topLevelPopUpCount",72,6a,6a,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultPopUpManager_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DefaultPopUpManager_obj,_ignoreRemoval),HX_("_ignoreRemoval",7b,a1,df,4e)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(DefaultPopUpManager_obj,_root),HX_("_root",01,0a,c0,fe)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DefaultPopUpManager_obj,popUps),HX_("popUps",a7,94,bb,fb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DefaultPopUpManager_obj,_centeredPopUps),HX_("_centeredPopUps",da,3d,de,88)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(DefaultPopUpManager_obj,_popUpToOverlay),HX_("_popUpToOverlay",08,8c,50,dc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DefaultPopUpManager_obj,_overlayFactory),HX_("_overlayFactory",b9,db,b7,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultPopUpManager_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultPopUpManager_obj_sMemberFields[] = {
	HX_("_ignoreRemoval",7b,a1,df,4e),
	HX_("_root",01,0a,c0,fe),
	HX_("get_root",ab,a9,69,cb),
	HX_("set_root",1f,03,c7,79),
	HX_("popUps",a7,94,bb,fb),
	HX_("_centeredPopUps",da,3d,de,88),
	HX_("_popUpToOverlay",08,8c,50,dc),
	HX_("_overlayFactory",b9,db,b7,b7),
	HX_("get_overlayFactory",e3,73,f1,09),
	HX_("set_overlayFactory",57,a6,a0,e6),
	HX_("get_popUpCount",2c,fb,71,87),
	HX_("get_topLevelPopUpCount",bb,e3,fe,21),
	HX_("getPopUpAt",69,d8,c7,97),
	HX_("isPopUp",02,92,1a,63),
	HX_("isTopLevelPopUp",d3,6a,69,f2),
	HX_("isModal",e3,c3,dd,a8),
	HX_("hasModalPopUps",7a,4b,50,fe),
	HX_("addPopUp",6b,14,f2,3f),
	HX_("removePopUp",68,cb,c8,c4),
	HX_("removeAllPopUps",c4,ab,3d,0b),
	HX_("centerPopUp",37,f4,64,98),
	HX_("cleanupOverlay",cc,eb,d0,ff),
	HX_("defaultPopUpManager_popUp_removedFromStageHandler",66,c0,01,a6),
	HX_("defaultPopUpManager_popUp_resizeHandler",a6,73,d1,ea),
	HX_("defaultPopUpManager_stage_resizeHandler",98,13,36,44),
	::String(null()) };

::hx::Class DefaultPopUpManager_obj::__mClass;

static ::String DefaultPopUpManager_obj_sStaticFields[] = {
	HX_("defaultOverlayFactory",bb,6f,2e,44),
	::String(null())
};

void DefaultPopUpManager_obj::__register()
{
	DefaultPopUpManager_obj _hx_dummy;
	DefaultPopUpManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.DefaultPopUpManager",71,4a,5d,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultPopUpManager_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultPopUpManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultPopUpManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultPopUpManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultPopUpManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultPopUpManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
