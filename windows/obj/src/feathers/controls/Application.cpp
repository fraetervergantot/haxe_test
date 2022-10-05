#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
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
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
#endif
#ifndef INCLUDED_feathers_core_IToolTipManager
#include <feathers/core/IToolTipManager.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_ToolTipManager
#include <feathers/core/ToolTipManager.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelApplicationStyles
#include <feathers/themes/steel/components/SteelApplicationStyles.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_40_new,"feathers.controls.Application","new",0x94ecb968,"feathers.controls.Application.new","feathers/controls/Application.hx",40,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_94_get_scaleFactor,"feathers.controls.Application","get_scaleFactor",0x09c96b98,"feathers.controls.Application.get_scaleFactor","feathers/controls/Application.hx",94,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_137_initializeApplicationTheme,"feathers.controls.Application","initializeApplicationTheme",0x675b2601,"feathers.controls.Application.initializeApplicationTheme","feathers/controls/Application.hx",137,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_140_update,"feathers.controls.Application","update",0xe96df201,"feathers.controls.Application.update","feathers/controls/Application.hx",140,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_151_refreshScaleManager,"feathers.controls.Application","refreshScaleManager",0xaca4ac86,"feathers.controls.Application.refreshScaleManager","feathers/controls/Application.hx",151,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_167_refreshDimensions,"feathers.controls.Application","refreshDimensions",0x4a7c4310,"feathers.controls.Application.refreshDimensions","feathers/controls/Application.hx",167,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_189_preparePopUpManager,"feathers.controls.Application","preparePopUpManager",0xa37272b0,"feathers.controls.Application.preparePopUpManager","feathers/controls/Application.hx",189,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_206_cleanupPopUpManager,"feathers.controls.Application","cleanupPopUpManager",0x1fb2e4cd,"feathers.controls.Application.cleanupPopUpManager","feathers/controls/Application.hx",206,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_219_prepareFocusManager,"feathers.controls.Application","prepareFocusManager",0x57f48aa4,"feathers.controls.Application.prepareFocusManager","feathers/controls/Application.hx",219,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_227_cleanupFocusManager,"feathers.controls.Application","cleanupFocusManager",0xd434fcc1,"feathers.controls.Application.cleanupFocusManager","feathers/controls/Application.hx",227,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_236_prepareToolTipManager,"feathers.controls.Application","prepareToolTipManager",0xa4fdf6b9,"feathers.controls.Application.prepareToolTipManager","feathers/controls/Application.hx",236,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_244_cleanupToolTipManager,"feathers.controls.Application","cleanupToolTipManager",0x07d4ea16,"feathers.controls.Application.cleanupToolTipManager","feathers/controls/Application.hx",244,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_251_application_addedToStageHandler,"feathers.controls.Application","application_addedToStageHandler",0x4dea4700,"feathers.controls.Application.application_addedToStageHandler","feathers/controls/Application.hx",251,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_266_application_removedFromStageHandler,"feathers.controls.Application","application_removedFromStageHandler",0xf62154cf,"feathers.controls.Application.application_removedFromStageHandler","feathers/controls/Application.hx",266,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_274_application_scaleManager_changeHandler,"feathers.controls.Application","application_scaleManager_changeHandler",0x803d7285,"feathers.controls.Application.application_scaleManager_changeHandler","feathers/controls/Application.hx",274,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_4e02942c2f17deea_42_get_styleContext,"feathers.controls.Application","get_styleContext",0x8dd48f3f,"feathers.controls.Application.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_d48eac4c8a8d0093_85_get_scaleManager,"feathers.controls.Application","get_scaleManager",0xf25e2f84,"feathers.controls.Application.get_scaleManager","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d48eac4c8a8d0093_99_set_scaleManager,"feathers.controls.Application","set_scaleManager",0x48a01cf8,"feathers.controls.Application.set_scaleManager","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_d48eac4c8a8d0093_125_clearStyle_scaleManager,"feathers.controls.Application","clearStyle_scaleManager",0xb0268e06,"feathers.controls.Application.clearStyle_scaleManager","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_54_get_topLevelApplication,"feathers.controls.Application","get_topLevelApplication",0x8a1d9480,"feathers.controls.Application.get_topLevelApplication","feathers/controls/Application.hx",54,0xc70deae8)
HX_LOCAL_STACK_FRAME(_hx_pos_7dcff2ea54017fd0_58_defaultPopUpContainerFactory,"feathers.controls.Application","defaultPopUpContainerFactory",0xa3751b6c,"feathers.controls.Application.defaultPopUpContainerFactory","feathers/controls/Application.hx",58,0xc70deae8)
namespace feathers{
namespace controls{

void Application_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_40_new)
HXLINE( 112)		this->_hx___scaleManager = null();
HXLINE(  84)		this->_scaleFactor = ((Float)1.0);
HXLINE(  67)		if (::hx::IsNull( ::feathers::controls::Application_obj::_topLevelApplication )) {
HXLINE(  68)			::feathers::controls::Application_obj::_topLevelApplication = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  70)		this->initializeApplicationTheme();
HXLINE(  72)		super::__construct();
HXLINE(  81)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->application_addedToStageHandler_dyn(),false,100,null());
            	}

Dynamic Application_obj::__CreateEmpty() { return new Application_obj; }

void *Application_obj::_hx_vtable = 0;

Dynamic Application_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Application_obj > _hx_result = new Application_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Application_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x128a091e) {
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
			return inClassId==(int)0x11a722e7 || inClassId==(int)0x128a091e;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_Application__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Application_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Application_obj::set_focusManager,
};

void *Application_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x7031642f: return &_hx_feathers_controls_Application__hx_feathers_core_IFocusManagerAware;
	}
	return super::_hx_getInterface(inHash);
}

Float Application_obj::get_scaleFactor(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_94_get_scaleFactor)
HXDLIN(  94)		return this->_scaleFactor;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_scaleFactor,return )

void Application_obj::initializeApplicationTheme(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_137_initializeApplicationTheme)
HXDLIN( 137)		::feathers::themes::steel::components::SteelApplicationStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,initializeApplicationTheme,(void))

void Application_obj::update(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_140_update)
HXLINE( 141)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 142)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		if (!(sizeInvalid)) {
HXLINE( 144)			_hx_tmp = stylesInvalid;
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			this->refreshScaleManager();
            		}
HXLINE( 148)		this->super::update();
            	}


void Application_obj::refreshScaleManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_151_refreshScaleManager)
HXLINE( 152)		::Dynamic oldScaleManager = this->_currentScaleManager;
HXLINE( 153)		this->_currentScaleManager = this->get_scaleManager();
HXLINE( 154)		if (::hx::IsInstanceEq( this->_currentScaleManager,oldScaleManager )) {
HXLINE( 155)			return;
            		}
HXLINE( 157)		if (::hx::IsNotNull( oldScaleManager )) {
HXLINE( 158)			::openfl::events::IEventDispatcher_obj::removeEventListener(oldScaleManager,HX_("change",70,91,72,b7),this->application_scaleManager_changeHandler_dyn(),null());
HXLINE( 159)			::feathers::core::IScaleManager_obj::set_target(oldScaleManager,null());
            		}
HXLINE( 161)		if (::hx::IsNotNull( this->_currentScaleManager )) {
HXLINE( 162)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_currentScaleManager,HX_("change",70,91,72,b7),this->application_scaleManager_changeHandler_dyn(),false,0,true);
HXLINE( 163)			::feathers::core::IScaleManager_obj::set_target(this->_currentScaleManager,::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,refreshScaleManager,(void))

void Application_obj::refreshDimensions(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_167_refreshDimensions)
HXLINE( 168)		if (::hx::IsNull( this->_currentScaleManager )) {
HXLINE( 169)			return;
            		}
HXLINE( 171)		this->_scaleFactor = ::feathers::core::IScaleManager_obj::getScale(this->_currentScaleManager);
HXLINE( 172)		this->set_scaleX(this->_scaleFactor);
HXLINE( 173)		this->set_scaleY(this->_scaleFactor);
HXLINE( 175)		 ::openfl::geom::Rectangle bounds = ::feathers::core::IScaleManager_obj::getBounds(this->_currentScaleManager);
HXLINE( 176)		this->set_x(bounds->x);
HXLINE( 177)		this->set_y(bounds->y);
HXLINE( 178)		this->set_width(bounds->width);
HXLINE( 179)		this->set_height(bounds->height);
HXLINE( 182)		if (::hx::IsNotNull( this->_applicationPopUpContainer )) {
HXLINE( 183)			this->_applicationPopUpContainer->set_scaleX(this->_scaleFactor);
HXLINE( 184)			this->_applicationPopUpContainer->set_scaleY(this->_scaleFactor);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,refreshDimensions,(void))

void Application_obj::preparePopUpManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_189_preparePopUpManager)
HXLINE( 191)		if (::hx::IsNull( this->_applicationPopUpContainer )) {
HXLINE( 192)			 ::Dynamic factory = this->popUpContainerFactory;
HXLINE( 193)			if (::hx::IsNull( factory )) {
HXLINE( 194)				factory = ::feathers::controls::Application_obj::defaultPopUpContainerFactory_dyn();
            			}
HXLINE( 196)			this->_applicationPopUpContainer = ( ( ::openfl::display::DisplayObjectContainer)(factory()) );
            		}
HXLINE( 198)		this->_applicationPopUpContainer->set_scaleX(this->_scaleFactor);
HXLINE( 199)		this->_applicationPopUpContainer->set_scaleY(this->_scaleFactor);
HXLINE( 200)		this->stage->addChild(this->_applicationPopUpContainer);
HXLINE( 201)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(this->stage);
HXLINE( 202)		::feathers::core::IPopUpManager_obj::set_root(popUpManager,this->_applicationPopUpContainer);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,preparePopUpManager,(void))

void Application_obj::cleanupPopUpManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_206_cleanupPopUpManager)
HXLINE( 208)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(this->stage);
HXLINE( 209)		 ::openfl::display::DisplayObjectContainer _hx_tmp = ::feathers::core::IPopUpManager_obj::get_root(popUpManager);
HXDLIN( 209)		if (::hx::IsInstanceEq( _hx_tmp,this->_applicationPopUpContainer )) {
HXLINE( 210)			::feathers::core::IPopUpManager_obj::set_root(popUpManager,this->stage);
            		}
HXLINE( 212)		this->stage->removeChild(this->_applicationPopUpContainer);
HXLINE( 213)		this->_applicationPopUpContainer = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,cleanupPopUpManager,(void))

void Application_obj::prepareFocusManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_219_prepareFocusManager)
HXDLIN( 219)		if (!(::feathers::core::FocusManager_obj::hasRoot(this->stage))) {
HXLINE( 220)			this->_applicationFocusManager = ::feathers::core::FocusManager_obj::addRoot(this->stage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,prepareFocusManager,(void))

void Application_obj::cleanupFocusManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_227_cleanupFocusManager)
HXDLIN( 227)		if (::hx::IsNotNull( this->_applicationFocusManager )) {
HXLINE( 228)			this->_applicationFocusManager = null();
HXLINE( 229)			::feathers::core::FocusManager_obj::removeRoot(this->stage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,cleanupFocusManager,(void))

void Application_obj::prepareToolTipManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_236_prepareToolTipManager)
HXDLIN( 236)		if (!(::feathers::core::ToolTipManager_obj::hasRoot(this->stage))) {
HXLINE( 237)			this->_applicationToolTipManager = ::feathers::core::ToolTipManager_obj::addRoot(this->stage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,prepareToolTipManager,(void))

void Application_obj::cleanupToolTipManager(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_244_cleanupToolTipManager)
HXDLIN( 244)		if (::hx::IsNotNull( this->_applicationToolTipManager )) {
HXLINE( 245)			this->_applicationToolTipManager = null();
HXLINE( 246)			::feathers::core::ToolTipManager_obj::removeRoot(this->stage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,cleanupToolTipManager,(void))

void Application_obj::application_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_251_application_addedToStageHandler)
HXLINE( 260)		this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->application_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE( 261)		this->prepareFocusManager();
HXLINE( 262)		this->preparePopUpManager();
HXLINE( 263)		this->prepareToolTipManager();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,application_addedToStageHandler,(void))

void Application_obj::application_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_266_application_removedFromStageHandler)
HXLINE( 267)		this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->application_removedFromStageHandler_dyn(),null());
HXLINE( 268)		this->cleanupToolTipManager();
HXLINE( 269)		this->cleanupPopUpManager();
HXLINE( 270)		this->cleanupFocusManager();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,application_removedFromStageHandler,(void))

void Application_obj::application_scaleManager_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_274_application_scaleManager_changeHandler)
HXDLIN( 274)		this->refreshDimensions();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,application_scaleManager_changeHandler,(void))

::hx::Class Application_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_4e02942c2f17deea_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::Application >();
            	}


::Dynamic Application_obj::get_scaleManager(){
            	HX_STACKFRAME(&_hx_pos_d48eac4c8a8d0093_85_get_scaleManager)
HXDLIN(  85)		return this->_hx___scaleManager;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_scaleManager,return )

::Dynamic Application_obj::set_scaleManager(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_d48eac4c8a8d0093_99_set_scaleManager)
HXLINE( 100)		if (!(this->setStyle(HX_("scaleManager",03,31,0b,ab),null()))) {
HXLINE( 101)			return this->_hx___scaleManager;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___scaleManager,value )) {
HXLINE( 104)			return this->_hx___scaleManager;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_scaleManager_dyn();
HXLINE( 110)		this->_hx___scaleManager = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___scaleManager;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_scaleManager,return )

::Dynamic Application_obj::clearStyle_scaleManager(){
            	HX_STACKFRAME(&_hx_pos_d48eac4c8a8d0093_125_clearStyle_scaleManager)
HXLINE( 126)		this->set_scaleManager(null());
HXLINE( 127)		return this->get_scaleManager();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,clearStyle_scaleManager,return )

 ::feathers::controls::Application Application_obj::_topLevelApplication;

 ::feathers::controls::Application Application_obj::get_topLevelApplication(){
            	HX_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_54_get_topLevelApplication)
HXDLIN(  54)		return ::feathers::controls::Application_obj::_topLevelApplication;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_topLevelApplication,return )

 ::openfl::display::DisplayObjectContainer Application_obj::defaultPopUpContainerFactory(){
            	HX_GC_STACKFRAME(&_hx_pos_7dcff2ea54017fd0_58_defaultPopUpContainerFactory)
HXDLIN(  58)		return  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,defaultPopUpContainerFactory,return )


::hx::ObjectPtr< Application_obj > Application_obj::__new() {
	::hx::ObjectPtr< Application_obj > __this = new Application_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Application_obj > Application_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Application_obj *__this = (Application_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Application_obj), true, "feathers.controls.Application"));
	*(void **)__this = Application_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(_scaleFactor,"_scaleFactor");
	HX_MARK_MEMBER_NAME(_currentScaleManager,"_currentScaleManager");
	HX_MARK_MEMBER_NAME(popUpContainerFactory,"popUpContainerFactory");
	HX_MARK_MEMBER_NAME(_applicationPopUpContainer,"_applicationPopUpContainer");
	HX_MARK_MEMBER_NAME(_applicationFocusManager,"_applicationFocusManager");
	HX_MARK_MEMBER_NAME(_applicationToolTipManager,"_applicationToolTipManager");
	HX_MARK_MEMBER_NAME(_hx___scaleManager,"__scaleManager");
	 ::feathers::controls::LayoutGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scaleFactor,"_scaleFactor");
	HX_VISIT_MEMBER_NAME(_currentScaleManager,"_currentScaleManager");
	HX_VISIT_MEMBER_NAME(popUpContainerFactory,"popUpContainerFactory");
	HX_VISIT_MEMBER_NAME(_applicationPopUpContainer,"_applicationPopUpContainer");
	HX_VISIT_MEMBER_NAME(_applicationFocusManager,"_applicationFocusManager");
	HX_VISIT_MEMBER_NAME(_applicationToolTipManager,"_applicationToolTipManager");
	HX_VISIT_MEMBER_NAME(_hx___scaleManager,"__scaleManager");
	 ::feathers::controls::LayoutGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Application_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleFactor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleFactor() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_scaleFactor") ) { return ::hx::Val( _scaleFactor ); }
		if (HX_FIELD_EQ(inName,"scaleManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleManager() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__scaleManager") ) { return ::hx::Val( _hx___scaleManager ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_scaleFactor") ) { return ::hx::Val( get_scaleFactor_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_scaleManager") ) { return ::hx::Val( get_scaleManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleManager") ) { return ::hx::Val( set_scaleManager_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"refreshDimensions") ) { return ::hx::Val( refreshDimensions_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"refreshScaleManager") ) { return ::hx::Val( refreshScaleManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"preparePopUpManager") ) { return ::hx::Val( preparePopUpManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupPopUpManager") ) { return ::hx::Val( cleanupPopUpManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareFocusManager") ) { return ::hx::Val( prepareFocusManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupFocusManager") ) { return ::hx::Val( cleanupFocusManager_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_currentScaleManager") ) { return ::hx::Val( _currentScaleManager ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"popUpContainerFactory") ) { return ::hx::Val( popUpContainerFactory ); }
		if (HX_FIELD_EQ(inName,"prepareToolTipManager") ) { return ::hx::Val( prepareToolTipManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanupToolTipManager") ) { return ::hx::Val( cleanupToolTipManager_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"clearStyle_scaleManager") ) { return ::hx::Val( clearStyle_scaleManager_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_applicationFocusManager") ) { return ::hx::Val( _applicationFocusManager ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_applicationPopUpContainer") ) { return ::hx::Val( _applicationPopUpContainer ); }
		if (HX_FIELD_EQ(inName,"_applicationToolTipManager") ) { return ::hx::Val( _applicationToolTipManager ); }
		if (HX_FIELD_EQ(inName,"initializeApplicationTheme") ) { return ::hx::Val( initializeApplicationTheme_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"application_addedToStageHandler") ) { return ::hx::Val( application_addedToStageHandler_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"application_removedFromStageHandler") ) { return ::hx::Val( application_removedFromStageHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"application_scaleManager_changeHandler") ) { return ::hx::Val( application_scaleManager_changeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"topLevelApplication") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_topLevelApplication() ); return true; } }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_topLevelApplication") ) { outValue = ( _topLevelApplication ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_topLevelApplication") ) { outValue = get_topLevelApplication_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"defaultPopUpContainerFactory") ) { outValue = defaultPopUpContainerFactory_dyn(); return true; }
	}
	return false;
}

::hx::Val Application_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_scaleFactor") ) { _scaleFactor=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleManager(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__scaleManager") ) { _hx___scaleManager=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_currentScaleManager") ) { _currentScaleManager=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"popUpContainerFactory") ) { popUpContainerFactory=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_applicationFocusManager") ) { _applicationFocusManager=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_applicationPopUpContainer") ) { _applicationPopUpContainer=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_applicationToolTipManager") ) { _applicationToolTipManager=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"_topLevelApplication") ) { _topLevelApplication=ioValue.Cast<  ::feathers::controls::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scaleFactor",fa,0c,1b,36));
	outFields->push(HX_("scaleFactor",f9,5e,11,d0));
	outFields->push(HX_("_currentScaleManager",dd,21,30,db));
	outFields->push(HX_("scaleManager",03,31,0b,ab));
	outFields->push(HX_("_applicationPopUpContainer",86,76,84,40));
	outFields->push(HX_("_applicationFocusManager",66,60,77,0c));
	outFields->push(HX_("_applicationToolTipManager",fb,40,33,a0));
	outFields->push(HX_("__scaleManager",23,b4,cb,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Application_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Application_obj,_scaleFactor),HX_("_scaleFactor",fa,0c,1b,36)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Application_obj,_currentScaleManager),HX_("_currentScaleManager",dd,21,30,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Application_obj,popUpContainerFactory),HX_("popUpContainerFactory",f5,8b,3b,44)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(Application_obj,_applicationPopUpContainer),HX_("_applicationPopUpContainer",86,76,84,40)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Application_obj,_applicationFocusManager),HX_("_applicationFocusManager",66,60,77,0c)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Application_obj,_applicationToolTipManager),HX_("_applicationToolTipManager",fb,40,33,a0)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Application_obj,_hx___scaleManager),HX_("__scaleManager",23,b4,cb,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Application_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::Application */ ,(void *) &Application_obj::_topLevelApplication,HX_("_topLevelApplication",e2,67,e2,82)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Application_obj_sMemberFields[] = {
	HX_("_scaleFactor",fa,0c,1b,36),
	HX_("get_scaleFactor",90,16,f3,90),
	HX_("_currentScaleManager",dd,21,30,db),
	HX_("popUpContainerFactory",f5,8b,3b,44),
	HX_("_applicationPopUpContainer",86,76,84,40),
	HX_("_applicationFocusManager",66,60,77,0c),
	HX_("_applicationToolTipManager",fb,40,33,a0),
	HX_("initializeApplicationTheme",09,ee,0f,9f),
	HX_("update",09,86,05,87),
	HX_("refreshScaleManager",7e,33,4b,66),
	HX_("refreshDimensions",08,9c,a0,2f),
	HX_("preparePopUpManager",a8,f9,18,5d),
	HX_("cleanupPopUpManager",c5,6b,59,d9),
	HX_("prepareFocusManager",9c,11,9b,11),
	HX_("cleanupFocusManager",b9,83,db,8d),
	HX_("prepareToolTipManager",b1,2b,8e,fa),
	HX_("cleanupToolTipManager",0e,1f,65,5d),
	HX_("application_addedToStageHandler",f8,61,bb,3c),
	HX_("application_removedFromStageHandler",c7,4b,e7,57),
	HX_("application_scaleManager_changeHandler",8d,26,02,06),
	HX_("get_styleContext",47,7d,20,4b),
	HX_("__scaleManager",23,b4,cb,cb),
	HX_("get_scaleManager",8c,1d,aa,af),
	HX_("set_scaleManager",00,0b,ec,05),
	HX_("clearStyle_scaleManager",fe,f0,e7,b1),
	::String(null()) };

static void Application_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::_topLevelApplication,"_topLevelApplication");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Application_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::_topLevelApplication,"_topLevelApplication");
};

#endif

::hx::Class Application_obj::__mClass;

static ::String Application_obj_sStaticFields[] = {
	HX_("_topLevelApplication",e2,67,e2,82),
	HX_("get_topLevelApplication",78,f7,de,8b),
	HX_("defaultPopUpContainerFactory",74,f5,f1,c7),
	::String(null())
};

void Application_obj::__register()
{
	Application_obj _hx_dummy;
	Application_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.Application",76,25,72,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = Application_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Application_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Application_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Application_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Application_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Application_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Application_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
