#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
#endif
#ifndef INCLUDED_feathers_core_DefaultToolTipManager
#include <feathers/core/DefaultToolTipManager.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
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
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_PopUpManager
#include <feathers/core/PopUpManager.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelToolTipStyles
#include <feathers/themes/steel/components/SteelToolTipStyles.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_974978ef95b4a746_29_new,"feathers.core.DefaultToolTipManager","new",0xbae286ac,"feathers.core.DefaultToolTipManager.new","feathers/core/DefaultToolTipManager.hx",29,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_65_get_root,"feathers.core.DefaultToolTipManager","get_root",0x64e69fdf,"feathers.core.DefaultToolTipManager.get_root","feathers/core/DefaultToolTipManager.hx",65,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_84_dispose,"feathers.core.DefaultToolTipManager","dispose",0x84e24ceb,"feathers.core.DefaultToolTipManager.dispose","feathers/core/DefaultToolTipManager.hx",84,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_93_initializeToolTipStyles,"feathers.core.DefaultToolTipManager","initializeToolTipStyles",0x3a8bbc41,"feathers.core.DefaultToolTipManager.initializeToolTipStyles","feathers/core/DefaultToolTipManager.hx",93,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_96_clearTarget,"feathers.core.DefaultToolTipManager","clearTarget",0x53b9e30a,"feathers.core.DefaultToolTipManager.clearTarget","feathers/core/DefaultToolTipManager.hx",96,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_108_hideToolTip,"feathers.core.DefaultToolTipManager","hideToolTip",0xa0c0368d,"feathers.core.DefaultToolTipManager.hideToolTip","feathers/core/DefaultToolTipManager.hx",108,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_119_hoverDelayCallback,"feathers.core.DefaultToolTipManager","hoverDelayCallback",0xfc3aac40,"feathers.core.DefaultToolTipManager.hoverDelayCallback","feathers/core/DefaultToolTipManager.hx",119,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_169_defaultToolTipManager_root_mouseMoveHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_root_mouseMoveHandler",0x48aff4c9,"feathers.core.DefaultToolTipManager.defaultToolTipManager_root_mouseMoveHandler","feathers/core/DefaultToolTipManager.hx",169,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_207_defaultToolTipManager_target_mouseDownHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_target_mouseDownHandler",0x08b34f89,"feathers.core.DefaultToolTipManager.defaultToolTipManager_target_mouseDownHandler","feathers/core/DefaultToolTipManager.hx",207,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_213_defaultToolTipManager_target_rightMouseDownHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_target_rightMouseDownHandler",0x56c75979,"feathers.core.DefaultToolTipManager.defaultToolTipManager_target_rightMouseDownHandler","feathers/core/DefaultToolTipManager.hx",213,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_219_defaultToolTipManager_target_middleMouseDownHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_target_middleMouseDownHandler",0x4687d97e,"feathers.core.DefaultToolTipManager.defaultToolTipManager_target_middleMouseDownHandler","feathers/core/DefaultToolTipManager.hx",219,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_223_defaultToolTipManager_target_rollOutHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_target_rollOutHandler",0xecbd435f,"feathers.core.DefaultToolTipManager.defaultToolTipManager_target_rollOutHandler","feathers/core/DefaultToolTipManager.hx",223,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_227_defaultToolTipManager_target_removedFromStageHandler,"feathers.core.DefaultToolTipManager","defaultToolTipManager_target_removedFromStageHandler",0x824c0f90,"feathers.core.DefaultToolTipManager.defaultToolTipManager_target_removedFromStageHandler","feathers/core/DefaultToolTipManager.hx",227,0xeb9b6ea4)
HX_LOCAL_STACK_FRAME(_hx_pos_974978ef95b4a746_45_boot,"feathers.core.DefaultToolTipManager","boot",0xc36c5066,"feathers.core.DefaultToolTipManager.boot","feathers/core/DefaultToolTipManager.hx",45,0xeb9b6ea4)
namespace feathers{
namespace core{

void DefaultToolTipManager_obj::__construct( ::openfl::display::DisplayObject root){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_29_new)
HXLINE(  79)		this->_offsetY = ((Float)0.0);
HXLINE(  78)		this->_offsetX = ((Float)0.0);
HXLINE(  76)		this->_hideTime = -1;
HXLINE(  75)		this->_delay = ((Float)0.5);
HXLINE(  74)		this->_delayTimeoutID = null();
HXLINE(  51)		this->initializeToolTipStyles();
HXLINE(  53)		this->_root = root;
HXLINE(  54)		this->_root->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->defaultToolTipManager_root_mouseMoveHandler_dyn(),false,0,true);
            	}

Dynamic DefaultToolTipManager_obj::__CreateEmpty() { return new DefaultToolTipManager_obj; }

void *DefaultToolTipManager_obj::_hx_vtable = 0;

Dynamic DefaultToolTipManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultToolTipManager_obj > _hx_result = new DefaultToolTipManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultToolTipManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5982079c;
}

static ::feathers::core::IToolTipManager_obj _hx_feathers_core_DefaultToolTipManager__hx_feathers_core_IToolTipManager= {
	(  ::openfl::display::DisplayObject (::hx::Object::*)())&::feathers::core::DefaultToolTipManager_obj::get_root,
	( void (::hx::Object::*)())&::feathers::core::DefaultToolTipManager_obj::dispose,
};

void *DefaultToolTipManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xec2c7544: return &_hx_feathers_core_DefaultToolTipManager__hx_feathers_core_IToolTipManager;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::openfl::display::DisplayObject DefaultToolTipManager_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_65_get_root)
HXDLIN(  65)		return this->_root;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,get_root,return )

void DefaultToolTipManager_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_84_dispose)
HXLINE(  85)		this->clearTarget();
HXLINE(  86)		if (::hx::IsNotNull( this->_root )) {
HXLINE(  87)			this->_root->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->defaultToolTipManager_root_mouseMoveHandler_dyn(),null());
HXLINE(  88)			this->_root = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,dispose,(void))

void DefaultToolTipManager_obj::initializeToolTipStyles(){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_93_initializeToolTipStyles)
HXDLIN(  93)		::feathers::themes::steel::components::SteelToolTipStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,initializeToolTipStyles,(void))

void DefaultToolTipManager_obj::clearTarget(){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_96_clearTarget)
HXLINE(  97)		this->hideToolTip();
HXLINE(  98)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  99)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_target,HX_("mouseDown",27,b1,c2,ee),this->defaultToolTipManager_target_mouseDownHandler_dyn(),null());
HXLINE( 100)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_target,HX_("rightMouseDown",ab,29,d7,cd),this->defaultToolTipManager_target_rightMouseDownHandler_dyn(),null());
HXLINE( 101)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_target,HX_("middleMouseDown",12,2b,fe,01),this->defaultToolTipManager_target_middleMouseDownHandler_dyn(),null());
HXLINE( 102)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_target,HX_("rollOut",11,f9,11,5d),this->defaultToolTipManager_target_rollOutHandler_dyn(),null());
HXLINE( 103)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_target,HX_("removedFromStage",34,21,76,ba),this->defaultToolTipManager_target_removedFromStageHandler_dyn(),null());
HXLINE( 104)			this->_target = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,clearTarget,(void))

void DefaultToolTipManager_obj::hideToolTip(){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_108_hideToolTip)
HXLINE( 109)		 ::Dynamic b = null();
HXDLIN( 109)		if (::hx::IsNotEq( ( (int)(this->_delayTimeoutID) ),b )) {
HXLINE( 110)			::openfl::Lib_obj::clearTimeout(( (int)(this->_delayTimeoutID) ));
HXLINE( 111)			this->_delayTimeoutID = null();
            		}
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 113)			_hx_tmp = ::hx::IsNotNull( this->_toolTip->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			::feathers::core::PopUpManager_obj::removePopUp(::hx::TCast<  ::openfl::display::DisplayObject >::cast(this->_toolTip));
HXLINE( 115)			this->_hideTime = ::openfl::Lib_obj::getTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,hideToolTip,(void))

void DefaultToolTipManager_obj::hoverDelayCallback(){
            	HX_GC_STACKFRAME(&_hx_pos_974978ef95b4a746_119_hoverDelayCallback)
HXLINE( 120)		this->_delayTimeoutID = null();
HXLINE( 121)		if (::hx::IsNull( ::feathers::core::IUIControl_obj::get_toolTip(this->_target) )) {
HXLINE( 123)			return;
            		}
HXLINE( 125)		if (::hx::IsNull( this->_toolTip )) {
HXLINE( 126)			 ::feathers::controls::Label toolTip =  ::feathers::controls::Label_obj::__alloc( HX_CTX ,null());
HXLINE( 127)			toolTip->set_variant(::feathers::core::DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP);
HXLINE( 128)			this->_toolTip = toolTip;
            		}
HXLINE( 130)		if (::Std_obj::isOfType(this->_toolTip,::hx::ClassOf< ::openfl::display::InteractiveObject >())) {
HXLINE( 131)			::hx::TCast<  ::openfl::display::InteractiveObject >::cast(this->_toolTip)->mouseEnabled = false;
HXLINE( 132)			::hx::TCast<  ::openfl::display::InteractiveObject >::cast(this->_toolTip)->set_tabEnabled(false);
            		}
HXLINE( 134)		if (::Std_obj::isOfType(this->_toolTip,::hx::ClassOf< ::openfl::display::DisplayObjectContainer >())) {
HXLINE( 135)			::hx::TCast<  ::openfl::display::DisplayObjectContainer >::cast(this->_toolTip)->mouseChildren = false;
            		}
HXLINE( 137)		if (::Std_obj::isOfType(this->_toolTip,::hx::ClassOf< ::feathers::style::IVariantStyleObject >())) {
HXLINE( 138)			::Dynamic variantToolTip = this->_toolTip;
HXLINE( 139)			if (::hx::IsNull( ::feathers::style::IVariantStyleObject_obj::get_variant(variantToolTip) )) {
HXLINE( 140)				::feathers::style::IVariantStyleObject_obj::set_variant(variantToolTip,::feathers::core::DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP);
            			}
            		}
HXLINE( 143)		::Dynamic _hx_tmp = this->_toolTip;
HXDLIN( 143)		::feathers::core::ITextControl_obj::set_text(_hx_tmp,::feathers::core::IUIControl_obj::get_toolTip(this->_target));
HXLINE( 144)		if (::Std_obj::isOfType(this->_toolTip,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 145)			::feathers::core::IValidating_obj::validateNow(this->_toolTip);
            		}
HXLINE( 148)		 ::openfl::display::Stage stage = ( ( ::openfl::display::Stage)(this->_target->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic)) );
HXLINE( 149)		::Dynamic popUpManager = ::feathers::core::PopUpManager_obj::forStage(stage);
HXLINE( 150)		 ::openfl::display::DisplayObjectContainer position = ::feathers::core::IPopUpManager_obj::get_root(popUpManager);
HXDLIN( 150)		 ::openfl::geom::Point position1 = position->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->_toolTipStageX,this->_toolTipStageY));
HXLINE( 151)		 ::openfl::display::DisplayObjectContainer dimensions = ::feathers::core::IPopUpManager_obj::get_root(popUpManager);
HXDLIN( 151)		 ::openfl::geom::Point dimensions1 = dimensions->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,stage->stageWidth,stage->stageHeight));
HXLINE( 152)		Float toolTipX = (position1->x + this->_offsetX);
HXLINE( 153)		if ((toolTipX < ((Float)0.0))) {
HXLINE( 154)			toolTipX = ((Float)0.0);
            		}
            		else {
HXLINE( 155)			Float _hx_tmp = (toolTipX + ::feathers::core::IDisplayObject_obj::get_width(this->_toolTip));
HXDLIN( 155)			if ((_hx_tmp > dimensions1->x)) {
HXLINE( 156)				Float dimensions = dimensions1->x;
HXDLIN( 156)				toolTipX = (dimensions - ::feathers::core::IDisplayObject_obj::get_width(this->_toolTip));
            			}
            		}
HXLINE( 158)		Float position2 = position1->y;
HXDLIN( 158)		Float toolTipY = (position2 - ::feathers::core::IDisplayObject_obj::get_height(this->_toolTip));
HXDLIN( 158)		Float toolTipY1 = (toolTipY + this->_offsetY);
HXLINE( 159)		if ((toolTipY1 < ((Float)0.0))) {
HXLINE( 160)			toolTipY1 = ((Float)0.0);
            		}
            		else {
HXLINE( 161)			Float _hx_tmp = (toolTipY1 + ::feathers::core::IDisplayObject_obj::get_height(this->_toolTip));
HXDLIN( 161)			if ((_hx_tmp > dimensions1->y)) {
HXLINE( 162)				Float dimensions = dimensions1->y;
HXDLIN( 162)				toolTipY1 = (dimensions - ::feathers::core::IDisplayObject_obj::get_height(this->_toolTip));
            			}
            		}
HXLINE( 164)		::feathers::core::IDisplayObject_obj::set_x(this->_toolTip,toolTipX);
HXLINE( 165)		::feathers::core::IDisplayObject_obj::set_y(this->_toolTip,toolTipY1);
HXLINE( 166)		::feathers::core::PopUpManager_obj::addPopUp(::hx::TCast<  ::openfl::display::DisplayObject >::cast(this->_toolTip),::hx::TCast<  ::openfl::display::DisplayObject >::cast(this->_target),false,false,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultToolTipManager_obj,hoverDelayCallback,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_root_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_169_defaultToolTipManager_root_mouseMoveHandler)
HXLINE( 170)		if (event->buttonDown) {
HXLINE( 172)			return;
            		}
HXLINE( 174)		 ::openfl::display::DisplayObject eventTarget = ::hx::TCast<  ::openfl::display::DisplayObject >::cast(event->target);
HXLINE( 175)		while(true){
HXLINE( 175)			bool _hx_tmp;
HXDLIN( 175)			if (::hx::IsNotNull( eventTarget )) {
HXLINE( 175)				_hx_tmp = !(::Std_obj::isOfType(eventTarget,::hx::ClassOf< ::feathers::core::IUIControl >()));
            			}
            			else {
HXLINE( 175)				_hx_tmp = false;
            			}
HXDLIN( 175)			if (!(_hx_tmp)) {
HXLINE( 175)				goto _hx_goto_7;
            			}
HXLINE( 176)			eventTarget = eventTarget->parent;
            		}
            		_hx_goto_7:;
HXLINE( 178)		if (!(::Std_obj::isOfType(eventTarget,::hx::ClassOf< ::feathers::core::IUIControl >()))) {
HXLINE( 179)			this->clearTarget();
HXLINE( 180)			return;
            		}
HXLINE( 182)		::Dynamic uiTarget =  ::hx::interface_check(eventTarget,0x2696a04f);
HXLINE( 183)		if (::hx::IsInstanceEq( this->_target,uiTarget )) {
HXLINE( 184)			this->_toolTipStageX = event->stageX;
HXLINE( 185)			this->_toolTipStageY = event->stageY;
HXLINE( 186)			return;
            		}
HXLINE( 188)		this->clearTarget();
HXLINE( 189)		this->_target = uiTarget;
HXLINE( 190)		if (::hx::IsNull( ::feathers::core::IUIControl_obj::get_toolTip(this->_target) )) {
HXLINE( 191)			this->_target = null();
HXLINE( 192)			return;
            		}
HXLINE( 194)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_target,HX_("mouseDown",27,b1,c2,ee),this->defaultToolTipManager_target_mouseDownHandler_dyn(),false,0,true);
HXLINE( 195)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_target,HX_("rightMouseDown",ab,29,d7,cd),this->defaultToolTipManager_target_rightMouseDownHandler_dyn(),false,0,true);
HXLINE( 196)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_target,HX_("middleMouseDown",12,2b,fe,01),this->defaultToolTipManager_target_middleMouseDownHandler_dyn(),false,0,true);
HXLINE( 197)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_target,HX_("rollOut",11,f9,11,5d),this->defaultToolTipManager_target_rollOutHandler_dyn(),false,0,true);
HXLINE( 198)		::openfl::events::IEventDispatcher_obj::addEventListener(this->_target,HX_("removedFromStage",34,21,76,ba),this->defaultToolTipManager_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE( 199)		this->_toolTipStageX = event->stageX;
HXLINE( 200)		this->_toolTipStageY = event->stageY;
HXLINE( 201)		this->_delayTimeoutID = ::openfl::Lib_obj::setTimeout(this->hoverDelayCallback_dyn(),::Std_obj::_hx_int((this->_delay * ((Float)1000.0))),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_root_mouseMoveHandler,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_target_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_207_defaultToolTipManager_target_mouseDownHandler)
HXDLIN( 207)		this->hideToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_target_mouseDownHandler,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_target_rightMouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_213_defaultToolTipManager_target_rightMouseDownHandler)
HXDLIN( 213)		this->hideToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_target_rightMouseDownHandler,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_target_middleMouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_219_defaultToolTipManager_target_middleMouseDownHandler)
HXDLIN( 219)		this->hideToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_target_middleMouseDownHandler,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_target_rollOutHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_223_defaultToolTipManager_target_rollOutHandler)
HXDLIN( 223)		this->clearTarget();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_target_rollOutHandler,(void))

void DefaultToolTipManager_obj::defaultToolTipManager_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_227_defaultToolTipManager_target_removedFromStageHandler)
HXDLIN( 227)		this->clearTarget();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultToolTipManager_obj,defaultToolTipManager_target_removedFromStageHandler,(void))

::String DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP;


::hx::ObjectPtr< DefaultToolTipManager_obj > DefaultToolTipManager_obj::__new( ::openfl::display::DisplayObject root) {
	::hx::ObjectPtr< DefaultToolTipManager_obj > __this = new DefaultToolTipManager_obj();
	__this->__construct(root);
	return __this;
}

::hx::ObjectPtr< DefaultToolTipManager_obj > DefaultToolTipManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject root) {
	DefaultToolTipManager_obj *__this = (DefaultToolTipManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultToolTipManager_obj), true, "feathers.core.DefaultToolTipManager"));
	*(void **)__this = DefaultToolTipManager_obj::_hx_vtable;
	__this->__construct(root);
	return __this;
}

DefaultToolTipManager_obj::DefaultToolTipManager_obj()
{
}

void DefaultToolTipManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultToolTipManager);
	HX_MARK_MEMBER_NAME(_root,"_root");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_toolTip,"_toolTip");
	HX_MARK_MEMBER_NAME(_toolTipStageX,"_toolTipStageX");
	HX_MARK_MEMBER_NAME(_toolTipStageY,"_toolTipStageY");
	HX_MARK_MEMBER_NAME(_delayTimeoutID,"_delayTimeoutID");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_hideTime,"_hideTime");
	HX_MARK_MEMBER_NAME(_offsetX,"_offsetX");
	HX_MARK_MEMBER_NAME(_offsetY,"_offsetY");
	HX_MARK_END_CLASS();
}

void DefaultToolTipManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_root,"_root");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_toolTip,"_toolTip");
	HX_VISIT_MEMBER_NAME(_toolTipStageX,"_toolTipStageX");
	HX_VISIT_MEMBER_NAME(_toolTipStageY,"_toolTipStageY");
	HX_VISIT_MEMBER_NAME(_delayTimeoutID,"_delayTimeoutID");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_hideTime,"_hideTime");
	HX_VISIT_MEMBER_NAME(_offsetX,"_offsetX");
	HX_VISIT_MEMBER_NAME(_offsetY,"_offsetY");
}

::hx::Val DefaultToolTipManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_root() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { return ::hx::Val( _root ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { return ::hx::Val( _delay ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { return ::hx::Val( get_root_dyn() ); }
		if (HX_FIELD_EQ(inName,"_toolTip") ) { return ::hx::Val( _toolTip ); }
		if (HX_FIELD_EQ(inName,"_offsetX") ) { return ::hx::Val( _offsetX ); }
		if (HX_FIELD_EQ(inName,"_offsetY") ) { return ::hx::Val( _offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hideTime") ) { return ::hx::Val( _hideTime ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearTarget") ) { return ::hx::Val( clearTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideToolTip") ) { return ::hx::Val( hideToolTip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_toolTipStageX") ) { return ::hx::Val( _toolTipStageX ); }
		if (HX_FIELD_EQ(inName,"_toolTipStageY") ) { return ::hx::Val( _toolTipStageY ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_delayTimeoutID") ) { return ::hx::Val( _delayTimeoutID ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hoverDelayCallback") ) { return ::hx::Val( hoverDelayCallback_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initializeToolTipStyles") ) { return ::hx::Val( initializeToolTipStyles_dyn() ); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_root_mouseMoveHandler") ) { return ::hx::Val( defaultToolTipManager_root_mouseMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_target_rollOutHandler") ) { return ::hx::Val( defaultToolTipManager_target_rollOutHandler_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_target_mouseDownHandler") ) { return ::hx::Val( defaultToolTipManager_target_mouseDownHandler_dyn() ); }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_target_rightMouseDownHandler") ) { return ::hx::Val( defaultToolTipManager_target_rightMouseDownHandler_dyn() ); }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_target_middleMouseDownHandler") ) { return ::hx::Val( defaultToolTipManager_target_middleMouseDownHandler_dyn() ); }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"defaultToolTipManager_target_removedFromStageHandler") ) { return ::hx::Val( defaultToolTipManager_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultToolTipManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TOOL_TIP") ) { outValue = ( CHILD_VARIANT_TOOL_TIP ); return true; }
	}
	return false;
}

::hx::Val DefaultToolTipManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_toolTip") ) { _toolTip=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetX") ) { _offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_offsetY") ) { _offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hideTime") ) { _hideTime=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_toolTipStageX") ) { _toolTipStageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTipStageY") ) { _toolTipStageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_delayTimeoutID") ) { _delayTimeoutID=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultToolTipManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TOOL_TIP") ) { CHILD_VARIANT_TOOL_TIP=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void DefaultToolTipManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_root",01,0a,c0,fe));
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("_toolTip",64,be,2c,a4));
	outFields->push(HX_("_toolTipStageX",5e,11,38,74));
	outFields->push(HX_("_toolTipStageY",5f,11,38,74));
	outFields->push(HX_("_delayTimeoutID",58,cd,00,49));
	outFields->push(HX_("_delay",c4,1e,0e,d3));
	outFields->push(HX_("_hideTime",4e,ad,60,ed));
	outFields->push(HX_("_offsetX",e6,62,1d,11));
	outFields->push(HX_("_offsetY",e7,62,1d,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultToolTipManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(DefaultToolTipManager_obj,_root),HX_("_root",01,0a,c0,fe)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DefaultToolTipManager_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(DefaultToolTipManager_obj,_toolTip),HX_("_toolTip",64,be,2c,a4)},
	{::hx::fsFloat,(int)offsetof(DefaultToolTipManager_obj,_toolTipStageX),HX_("_toolTipStageX",5e,11,38,74)},
	{::hx::fsFloat,(int)offsetof(DefaultToolTipManager_obj,_toolTipStageY),HX_("_toolTipStageY",5f,11,38,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DefaultToolTipManager_obj,_delayTimeoutID),HX_("_delayTimeoutID",58,cd,00,49)},
	{::hx::fsFloat,(int)offsetof(DefaultToolTipManager_obj,_delay),HX_("_delay",c4,1e,0e,d3)},
	{::hx::fsInt,(int)offsetof(DefaultToolTipManager_obj,_hideTime),HX_("_hideTime",4e,ad,60,ed)},
	{::hx::fsFloat,(int)offsetof(DefaultToolTipManager_obj,_offsetX),HX_("_offsetX",e6,62,1d,11)},
	{::hx::fsFloat,(int)offsetof(DefaultToolTipManager_obj,_offsetY),HX_("_offsetY",e7,62,1d,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DefaultToolTipManager_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP,HX_("CHILD_VARIANT_TOOL_TIP",51,41,8a,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DefaultToolTipManager_obj_sMemberFields[] = {
	HX_("_root",01,0a,c0,fe),
	HX_("get_root",ab,a9,69,cb),
	HX_("_target",f0,04,64,f5),
	HX_("_toolTip",64,be,2c,a4),
	HX_("_toolTipStageX",5e,11,38,74),
	HX_("_toolTipStageY",5f,11,38,74),
	HX_("_delayTimeoutID",58,cd,00,49),
	HX_("_delay",c4,1e,0e,d3),
	HX_("_hideTime",4e,ad,60,ed),
	HX_("_offsetX",e6,62,1d,11),
	HX_("_offsetY",e7,62,1d,11),
	HX_("dispose",9f,80,4c,bb),
	HX_("initializeToolTipStyles",f5,97,3b,0b),
	HX_("clearTarget",be,00,da,1a),
	HX_("hideToolTip",41,54,e0,67),
	HX_("hoverDelayCallback",0c,6d,80,47),
	HX_("defaultToolTipManager_root_mouseMoveHandler",7d,62,13,b8),
	HX_("defaultToolTipManager_target_mouseDownHandler",3d,92,14,aa),
	HX_("defaultToolTipManager_target_rightMouseDownHandler",45,ca,d3,9b),
	HX_("defaultToolTipManager_target_middleMouseDownHandler",32,1b,5e,6c),
	HX_("defaultToolTipManager_target_rollOutHandler",13,b1,20,5c),
	HX_("defaultToolTipManager_target_removedFromStageHandler",5c,4b,ef,77),
	::String(null()) };

static void DefaultToolTipManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP,"CHILD_VARIANT_TOOL_TIP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultToolTipManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultToolTipManager_obj::CHILD_VARIANT_TOOL_TIP,"CHILD_VARIANT_TOOL_TIP");
};

#endif

::hx::Class DefaultToolTipManager_obj::__mClass;

static ::String DefaultToolTipManager_obj_sStaticFields[] = {
	HX_("CHILD_VARIANT_TOOL_TIP",51,41,8a,8a),
	::String(null())
};

void DefaultToolTipManager_obj::__register()
{
	DefaultToolTipManager_obj _hx_dummy;
	DefaultToolTipManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.DefaultToolTipManager",ba,00,1f,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultToolTipManager_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultToolTipManager_obj::__SetStatic;
	__mClass->mMarkFunc = DefaultToolTipManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DefaultToolTipManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultToolTipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultToolTipManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultToolTipManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultToolTipManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultToolTipManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DefaultToolTipManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_974978ef95b4a746_45_boot)
HXDLIN(  45)		CHILD_VARIANT_TOOL_TIP = HX_("toolTip",e3,64,74,6a);
            	}
}

} // end namespace feathers
} // end namespace core
