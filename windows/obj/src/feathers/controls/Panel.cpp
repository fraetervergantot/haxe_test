#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_LayoutViewPort
#include <feathers/controls/supportClasses/LayoutViewPort.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelPanelStyles
#include <feathers/themes/steel/components/SteelPanelStyles.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e987dd0021e4ab29_30_new,"feathers.controls.Panel","new",0xca8e729c,"feathers.controls.Panel.new","feathers/controls/Panel.hx",30,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_56_get_header,"feathers.controls.Panel","get_header",0x9297d69a,"feathers.controls.Panel.get_header","feathers/controls/Panel.hx",56,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_59_set_header,"feathers.controls.Panel","set_header",0x9615750e,"feathers.controls.Panel.set_header","feathers/controls/Panel.hx",59,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_103_get_footer,"feathers.controls.Panel","get_footer",0x91300ba8,"feathers.controls.Panel.get_footer","feathers/controls/Panel.hx",103,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_106_set_footer,"feathers.controls.Panel","set_footer",0x94adaa1c,"feathers.controls.Panel.set_footer","feathers/controls/Panel.hx",106,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_141_get_focusExtrasBefore,"feathers.controls.Panel","get_focusExtrasBefore",0xa771eccd,"feathers.controls.Panel.get_focusExtrasBefore","feathers/controls/Panel.hx",141,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_150_get_focusExtrasAfter,"feathers.controls.Panel","get_focusExtrasAfter",0xc300d18e,"feathers.controls.Panel.get_focusExtrasAfter","feathers/controls/Panel.hx",150,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_154_initializePanelTheme,"feathers.controls.Panel","initializePanelTheme",0x8f411819,"feathers.controls.Panel.initializePanelTheme","feathers/controls/Panel.hx",154,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_157_update,"feathers.controls.Panel","update",0x9944f14d,"feathers.controls.Panel.update","feathers/controls/Panel.hx",157,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_175_calculateViewPortOffsets,"feathers.controls.Panel","calculateViewPortOffsets",0x834f7718,"feathers.controls.Panel.calculateViewPortOffsets","feathers/controls/Panel.hx",175,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_213_layoutHeader,"feathers.controls.Panel","layoutHeader",0x6819be1b,"feathers.controls.Panel.layoutHeader","feathers/controls/Panel.hx",213,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_225_layoutFooter,"feathers.controls.Panel","layoutFooter",0x66b1f329,"feathers.controls.Panel.layoutFooter","feathers/controls/Panel.hx",225,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_237_panel_header_resizeHandler,"feathers.controls.Panel","panel_header_resizeHandler",0x04701863,"feathers.controls.Panel.panel_header_resizeHandler","feathers/controls/Panel.hx",237,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_e987dd0021e4ab29_249_panel_footer_resizeHandler,"feathers.controls.Panel","panel_footer_resizeHandler",0x9addc9f1,"feathers.controls.Panel.panel_footer_resizeHandler","feathers/controls/Panel.hx",249,0x00a52c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ba7a06ab621785b0_42_get_styleContext,"feathers.controls.Panel","get_styleContext",0x7408258b,"feathers.controls.Panel.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
namespace feathers{
namespace controls{

void Panel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_30_new)
HXLINE( 144)		this->_focusExtrasAfter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 135)		this->_focusExtrasBefore = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  93)		this->_footer = null();
HXLINE(  91)		this->_footerMeasurements = null();
HXLINE(  89)		this->_ignoreFooterResize = false;
HXLINE(  46)		this->_header = null();
HXLINE(  44)		this->_headerMeasurements = null();
HXLINE(  42)		this->_ignoreHeaderResize = false;
HXLINE(  37)		this->initializePanelTheme();
HXLINE(  39)		super::__construct();
            	}

Dynamic Panel_obj::__CreateEmpty() { return new Panel_obj; }

void *Panel_obj::_hx_vtable = 0;

Dynamic Panel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Panel_obj > _hx_result = new Panel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Panel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19d9e0ee) {
		if (inClassId<=(int)0x04d50bfe) {
			if (inClassId<=(int)0x0498edf2) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0498edf2;
				}
			} else {
				return inClassId==(int)0x04d50bfe;
			}
		} else {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x093ab78b || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x19d9e0ee;
			}
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

static ::feathers::core::IFocusExtras_obj _hx_feathers_controls_Panel__hx_feathers_core_IFocusExtras= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Panel_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Panel_obj::set_focusManager,
	( ::Array< ::Dynamic> (::hx::Object::*)())&::feathers::controls::Panel_obj::get_focusExtrasBefore,
	( ::Array< ::Dynamic> (::hx::Object::*)())&::feathers::controls::Panel_obj::get_focusExtrasAfter,
};

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_Panel__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Panel_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Panel_obj::set_focusManager,
};

void *Panel_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x21fbac21: return &_hx_feathers_controls_Panel__hx_feathers_core_IFocusExtras;
		case (int)0x7031642f: return &_hx_feathers_controls_Panel__hx_feathers_core_IFocusManagerAware;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::DisplayObject Panel_obj::get_header(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_56_get_header)
HXDLIN(  56)		return this->_header;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,get_header,return )

 ::openfl::display::DisplayObject Panel_obj::set_header( ::openfl::display::DisplayObject value){
            	HX_GC_STACKFRAME(&_hx_pos_e987dd0021e4ab29_59_set_header)
HXLINE(  60)		if (::hx::IsInstanceEq( this->_header,value )) {
HXLINE(  61)			return this->_header;
            		}
HXLINE(  63)		if (::hx::IsNotNull( this->_header )) {
HXLINE(  64)			this->_header->removeEventListener(HX_("resize",f4,59,7b,08),this->panel_header_resizeHandler_dyn(),null());
HXLINE(  65)			this->_focusExtrasBefore->remove(this->_header);
HXLINE(  66)			this->removeRawChild(this->_header);
            		}
HXLINE(  68)		this->_header = value;
HXLINE(  69)		if (::hx::IsNotNull( this->_header )) {
HXLINE(  70)			this->_focusExtrasBefore->push(this->_header);
HXLINE(  71)			int index;
HXDLIN(  71)			if (::hx::IsNotNull( this->layoutViewPort )) {
HXLINE(  71)				index = (this->getRawChildIndex(this->layoutViewPort) + 1);
            			}
            			else {
HXLINE(  71)				index = 0;
            			}
HXLINE(  72)			this->addRawChildAt(this->_header,index);
HXLINE(  73)			if (::Std_obj::isOfType(this->_header,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE(  74)				::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_header,0x2696a04f));
            			}
HXLINE(  76)			if (::hx::IsNull( this->_headerMeasurements )) {
HXLINE(  77)				this->_headerMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_header);
            			}
            			else {
HXLINE(  79)				this->_headerMeasurements->save(this->_header);
            			}
HXLINE(  81)			this->_header->addEventListener(HX_("resize",f4,59,7b,08),this->panel_header_resizeHandler_dyn(),false,0,true);
            		}
            		else {
HXLINE(  83)			this->_headerMeasurements = null();
            		}
HXLINE(  85)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE(  86)		return this->_header;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Panel_obj,set_header,return )

 ::openfl::display::DisplayObject Panel_obj::get_footer(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_103_get_footer)
HXDLIN( 103)		return this->_footer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,get_footer,return )

 ::openfl::display::DisplayObject Panel_obj::set_footer( ::openfl::display::DisplayObject value){
            	HX_GC_STACKFRAME(&_hx_pos_e987dd0021e4ab29_106_set_footer)
HXLINE( 107)		if (::hx::IsInstanceEq( this->_footer,value )) {
HXLINE( 108)			return this->_footer;
            		}
HXLINE( 110)		if (::hx::IsNotNull( this->_footer )) {
HXLINE( 111)			this->_header->removeEventListener(HX_("resize",f4,59,7b,08),this->panel_header_resizeHandler_dyn(),null());
HXLINE( 112)			this->_focusExtrasAfter->remove(this->_footer);
HXLINE( 113)			this->removeRawChild(this->_footer);
            		}
HXLINE( 115)		this->_footer = value;
HXLINE( 116)		if (::hx::IsNotNull( this->_footer )) {
HXLINE( 117)			this->_focusExtrasAfter->push(this->_footer);
HXLINE( 118)			this->addRawChild(this->_footer);
HXLINE( 119)			if (::Std_obj::isOfType(this->_footer,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 120)				::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_footer,0x2696a04f));
            			}
HXLINE( 122)			if (::hx::IsNull( this->_footerMeasurements )) {
HXLINE( 123)				this->_footerMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_footer);
            			}
            			else {
HXLINE( 125)				this->_footerMeasurements->save(this->_footer);
            			}
HXLINE( 127)			this->_footer->addEventListener(HX_("resize",f4,59,7b,08),this->panel_footer_resizeHandler_dyn(),false,0,true);
            		}
            		else {
HXLINE( 129)			this->_footerMeasurements = null();
            		}
HXLINE( 131)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 132)		return this->_footer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Panel_obj,set_footer,return )

::Array< ::Dynamic> Panel_obj::get_focusExtrasBefore(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_141_get_focusExtrasBefore)
HXDLIN( 141)		return this->_focusExtrasBefore;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,get_focusExtrasBefore,return )

::Array< ::Dynamic> Panel_obj::get_focusExtrasAfter(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_150_get_focusExtrasAfter)
HXDLIN( 150)		return this->_focusExtrasAfter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,get_focusExtrasAfter,return )

void Panel_obj::initializePanelTheme(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_154_initializePanelTheme)
HXDLIN( 154)		::feathers::themes::steel::components::SteelPanelStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,initializePanelTheme,(void))

void Panel_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_157_update)
HXLINE( 160)		this->_ignoreChangesButSetFlags = false;
HXLINE( 162)		this->super::update();
HXLINE( 164)		bool oldIgnoreHeaderResize = this->_ignoreHeaderResize;
HXLINE( 165)		this->_ignoreHeaderResize = true;
HXLINE( 166)		this->layoutHeader();
HXLINE( 167)		this->_ignoreHeaderResize = oldIgnoreHeaderResize;
HXLINE( 169)		bool oldIgnoreFooterResize = this->_ignoreFooterResize;
HXLINE( 170)		this->_ignoreFooterResize = true;
HXLINE( 171)		this->layoutFooter();
HXLINE( 172)		this->_ignoreFooterResize = oldIgnoreFooterResize;
            	}


void Panel_obj::calculateViewPortOffsets(bool forceScrollBars,bool useActualBounds){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_175_calculateViewPortOffsets)
HXLINE( 176)		if (::hx::IsNotNull( this->_header )) {
HXLINE( 177)			bool oldIgnoreHeaderResize = this->_ignoreHeaderResize;
HXLINE( 178)			this->_ignoreHeaderResize = true;
HXLINE( 179)			if (::hx::IsNotNull( this->_headerMeasurements )) {
HXLINE( 180)				this->_headerMeasurements->restore(this->_header);
            			}
HXLINE( 182)			if (::Std_obj::isOfType(this->_header,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 183)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_header,0x64d4b3cd));
            			}
HXLINE( 185)			 ::feathers::controls::Panel _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)			Float _hx_tmp1 = _hx_tmp->topViewPortOffset;
HXDLIN( 185)			_hx_tmp->topViewPortOffset = (_hx_tmp1 + this->_header->get_height());
HXLINE( 186)			Float _hx_tmp2 = this->chromeMeasuredWidth;
HXDLIN( 186)			this->chromeMeasuredWidth = ::Math_obj::max(_hx_tmp2,this->_header->get_width());
HXLINE( 187)			if (::Std_obj::isOfType(this->_header,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 188)				::Dynamic measureHeader =  ::hx::interface_check(this->_header,0xcfc32883);
HXLINE( 189)				Float _hx_tmp = this->chromeMeasuredMinWidth;
HXDLIN( 189)				this->chromeMeasuredMinWidth = ::Math_obj::max(_hx_tmp,::feathers::core::IMeasureObject_obj::get_minWidth(measureHeader));
            			}
HXLINE( 191)			this->_ignoreHeaderResize = oldIgnoreHeaderResize;
            		}
HXLINE( 193)		if (::hx::IsNotNull( this->_footer )) {
HXLINE( 194)			bool oldIgnoreFooterResize = this->_ignoreFooterResize;
HXLINE( 195)			this->_ignoreFooterResize = true;
HXLINE( 196)			if (::hx::IsNotNull( this->_footerMeasurements )) {
HXLINE( 197)				this->_footerMeasurements->restore(this->_footer);
            			}
HXLINE( 199)			if (::Std_obj::isOfType(this->_footer,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 200)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_footer,0x64d4b3cd));
            			}
HXLINE( 202)			 ::feathers::controls::Panel _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)			Float _hx_tmp1 = _hx_tmp->bottomViewPortOffset;
HXDLIN( 202)			_hx_tmp->bottomViewPortOffset = (_hx_tmp1 + this->_footer->get_height());
HXLINE( 203)			Float _hx_tmp2 = this->chromeMeasuredWidth;
HXDLIN( 203)			this->chromeMeasuredWidth = ::Math_obj::max(_hx_tmp2,this->_footer->get_width());
HXLINE( 204)			if (::Std_obj::isOfType(this->_footer,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 205)				::Dynamic measureFooter =  ::hx::interface_check(this->_footer,0xcfc32883);
HXLINE( 206)				Float _hx_tmp = this->chromeMeasuredMinWidth;
HXDLIN( 206)				this->chromeMeasuredMinWidth = ::Math_obj::max(_hx_tmp,::feathers::core::IMeasureObject_obj::get_minWidth(measureFooter));
            			}
HXLINE( 208)			this->_ignoreFooterResize = oldIgnoreFooterResize;
            		}
HXLINE( 210)		this->super::calculateViewPortOffsets(forceScrollBars,useActualBounds);
            	}


void Panel_obj::layoutHeader(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_213_layoutHeader)
HXLINE( 214)		if (::hx::IsNull( this->_header )) {
HXLINE( 215)			return;
            		}
HXLINE( 217)		 ::openfl::display::DisplayObject _hx_tmp = this->_header;
HXDLIN( 217)		_hx_tmp->set_x(this->get_paddingLeft());
HXLINE( 218)		 ::openfl::display::DisplayObject _hx_tmp1 = this->_header;
HXDLIN( 218)		_hx_tmp1->set_y(this->get_paddingTop());
HXLINE( 219)		 ::openfl::display::DisplayObject _hx_tmp2 = this->_header;
HXDLIN( 219)		Float _hx_tmp3 = this->actualWidth;
HXDLIN( 219)		Float _hx_tmp4 = (_hx_tmp3 - this->get_paddingLeft());
HXDLIN( 219)		_hx_tmp2->set_width((_hx_tmp4 - this->get_paddingRight()));
HXLINE( 220)		if (::Std_obj::isOfType(this->_header,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 221)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_header,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,layoutHeader,(void))

void Panel_obj::layoutFooter(){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_225_layoutFooter)
HXLINE( 226)		if (::hx::IsNull( this->_footer )) {
HXLINE( 227)			return;
            		}
HXLINE( 229)		 ::openfl::display::DisplayObject _hx_tmp = this->_footer;
HXDLIN( 229)		_hx_tmp->set_x(this->get_paddingLeft());
HXLINE( 230)		 ::openfl::display::DisplayObject _hx_tmp1 = this->_footer;
HXDLIN( 230)		Float _hx_tmp2 = this->actualWidth;
HXDLIN( 230)		Float _hx_tmp3 = (_hx_tmp2 - this->get_paddingLeft());
HXDLIN( 230)		_hx_tmp1->set_width((_hx_tmp3 - this->get_paddingRight()));
HXLINE( 231)		if (::Std_obj::isOfType(this->_footer,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 232)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_footer,0x64d4b3cd));
            		}
HXLINE( 234)		 ::openfl::display::DisplayObject _hx_tmp4 = this->_footer;
HXDLIN( 234)		Float _hx_tmp5 = this->actualHeight;
HXDLIN( 234)		Float _hx_tmp6 = (_hx_tmp5 - this->_footer->get_height());
HXDLIN( 234)		_hx_tmp4->set_y((_hx_tmp6 - this->get_paddingBottom()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Panel_obj,layoutFooter,(void))

void Panel_obj::panel_header_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_237_panel_header_resizeHandler)
HXLINE( 238)		if (this->_ignoreHeaderResize) {
HXLINE( 239)			return;
            		}
HXLINE( 241)		if (::hx::IsNotNull( this->_headerMeasurements )) {
HXLINE( 244)			this->_headerMeasurements->save(this->_header);
            		}
HXLINE( 246)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Panel_obj,panel_header_resizeHandler,(void))

void Panel_obj::panel_footer_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e987dd0021e4ab29_249_panel_footer_resizeHandler)
HXLINE( 250)		if (this->_ignoreFooterResize) {
HXLINE( 251)			return;
            		}
HXLINE( 253)		if (::hx::IsNotNull( this->_footerMeasurements )) {
HXLINE( 256)			this->_footerMeasurements->save(this->_footer);
            		}
HXLINE( 258)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Panel_obj,panel_footer_resizeHandler,(void))

::hx::Class Panel_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_ba7a06ab621785b0_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::Panel >();
            	}



::hx::ObjectPtr< Panel_obj > Panel_obj::__new() {
	::hx::ObjectPtr< Panel_obj > __this = new Panel_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Panel_obj > Panel_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Panel_obj *__this = (Panel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Panel_obj), true, "feathers.controls.Panel"));
	*(void **)__this = Panel_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Panel_obj::Panel_obj()
{
}

void Panel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Panel);
	HX_MARK_MEMBER_NAME(_ignoreHeaderResize,"_ignoreHeaderResize");
	HX_MARK_MEMBER_NAME(_headerMeasurements,"_headerMeasurements");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_ignoreFooterResize,"_ignoreFooterResize");
	HX_MARK_MEMBER_NAME(_footerMeasurements,"_footerMeasurements");
	HX_MARK_MEMBER_NAME(_footer,"_footer");
	HX_MARK_MEMBER_NAME(_focusExtrasBefore,"_focusExtrasBefore");
	HX_MARK_MEMBER_NAME(_focusExtrasAfter,"_focusExtrasAfter");
	 ::feathers::controls::ScrollContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Panel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ignoreHeaderResize,"_ignoreHeaderResize");
	HX_VISIT_MEMBER_NAME(_headerMeasurements,"_headerMeasurements");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_ignoreFooterResize,"_ignoreFooterResize");
	HX_VISIT_MEMBER_NAME(_footerMeasurements,"_footerMeasurements");
	HX_VISIT_MEMBER_NAME(_footer,"_footer");
	HX_VISIT_MEMBER_NAME(_focusExtrasBefore,"_focusExtrasBefore");
	HX_VISIT_MEMBER_NAME(_focusExtrasAfter,"_focusExtrasAfter");
	 ::feathers::controls::ScrollContainer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Panel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_header() ); }
		if (HX_FIELD_EQ(inName,"footer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_footer() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"_footer") ) { return ::hx::Val( _footer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_header") ) { return ::hx::Val( get_header_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_header") ) { return ::hx::Val( set_header_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_footer") ) { return ::hx::Val( get_footer_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_footer") ) { return ::hx::Val( set_footer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutHeader") ) { return ::hx::Val( layoutHeader_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutFooter") ) { return ::hx::Val( layoutFooter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"focusExtrasAfter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusExtrasAfter() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"focusExtrasBefore") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusExtrasBefore() ); }
		if (HX_FIELD_EQ(inName,"_focusExtrasAfter") ) { return ::hx::Val( _focusExtrasAfter ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_focusExtrasBefore") ) { return ::hx::Val( _focusExtrasBefore ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ignoreHeaderResize") ) { return ::hx::Val( _ignoreHeaderResize ); }
		if (HX_FIELD_EQ(inName,"_headerMeasurements") ) { return ::hx::Val( _headerMeasurements ); }
		if (HX_FIELD_EQ(inName,"_ignoreFooterResize") ) { return ::hx::Val( _ignoreFooterResize ); }
		if (HX_FIELD_EQ(inName,"_footerMeasurements") ) { return ::hx::Val( _footerMeasurements ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_focusExtrasAfter") ) { return ::hx::Val( get_focusExtrasAfter_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializePanelTheme") ) { return ::hx::Val( initializePanelTheme_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_focusExtrasBefore") ) { return ::hx::Val( get_focusExtrasBefore_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"calculateViewPortOffsets") ) { return ::hx::Val( calculateViewPortOffsets_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"panel_header_resizeHandler") ) { return ::hx::Val( panel_header_resizeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"panel_footer_resizeHandler") ) { return ::hx::Val( panel_footer_resizeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Panel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_header(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"footer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_footer(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footer") ) { _footer=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_focusExtrasAfter") ) { _focusExtrasAfter=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_focusExtrasBefore") ) { _focusExtrasBefore=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ignoreHeaderResize") ) { _ignoreHeaderResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headerMeasurements") ) { _headerMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreFooterResize") ) { _ignoreFooterResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footerMeasurements") ) { _footerMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Panel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ignoreHeaderResize",b2,db,7e,6b));
	outFields->push(HX_("_headerMeasurements",43,2e,b3,d9));
	outFields->push(HX_("_header",2c,1b,77,6b));
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("_ignoreFooterResize",40,4f,d9,a3));
	outFields->push(HX_("_footerMeasurements",51,c0,cd,06));
	outFields->push(HX_("_footer",3a,50,0f,6a));
	outFields->push(HX_("footer",9b,3e,98,fb));
	outFields->push(HX_("_focusExtrasBefore",7b,ad,3d,a5));
	outFields->push(HX_("focusExtrasBefore",ba,08,28,d2));
	outFields->push(HX_("_focusExtrasAfter",a0,40,f6,9b));
	outFields->push(HX_("focusExtrasAfter",41,52,7b,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Panel_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Panel_obj,_ignoreHeaderResize),HX_("_ignoreHeaderResize",b2,db,7e,6b)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(Panel_obj,_headerMeasurements),HX_("_headerMeasurements",43,2e,b3,d9)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Panel_obj,_header),HX_("_header",2c,1b,77,6b)},
	{::hx::fsBool,(int)offsetof(Panel_obj,_ignoreFooterResize),HX_("_ignoreFooterResize",40,4f,d9,a3)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(Panel_obj,_footerMeasurements),HX_("_footerMeasurements",51,c0,cd,06)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Panel_obj,_footer),HX_("_footer",3a,50,0f,6a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Panel_obj,_focusExtrasBefore),HX_("_focusExtrasBefore",7b,ad,3d,a5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Panel_obj,_focusExtrasAfter),HX_("_focusExtrasAfter",a0,40,f6,9b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Panel_obj_sStaticStorageInfo = 0;
#endif

static ::String Panel_obj_sMemberFields[] = {
	HX_("_ignoreHeaderResize",b2,db,7e,6b),
	HX_("_headerMeasurements",43,2e,b3,d9),
	HX_("_header",2c,1b,77,6b),
	HX_("get_header",56,79,87,ed),
	HX_("set_header",ca,17,05,f1),
	HX_("_ignoreFooterResize",40,4f,d9,a3),
	HX_("_footerMeasurements",51,c0,cd,06),
	HX_("_footer",3a,50,0f,6a),
	HX_("get_footer",64,ae,1f,ec),
	HX_("set_footer",d8,4c,9d,ef),
	HX_("_focusExtrasBefore",7b,ad,3d,a5),
	HX_("get_focusExtrasBefore",91,0b,d6,50),
	HX_("_focusExtrasAfter",a0,40,f6,9b),
	HX_("get_focusExtrasAfter",4a,b7,e5,21),
	HX_("initializePanelTheme",d5,fd,25,ee),
	HX_("update",09,86,05,87),
	HX_("calculateViewPortOffsets",d4,ea,5f,26),
	HX_("layoutHeader",d7,87,44,18),
	HX_("layoutFooter",e5,bc,dc,16),
	HX_("panel_header_resizeHandler",1f,f3,51,e3),
	HX_("panel_footer_resizeHandler",ad,a4,bf,79),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

::hx::Class Panel_obj::__mClass;

void Panel_obj::__register()
{
	Panel_obj _hx_dummy;
	Panel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.Panel",aa,34,8a,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Panel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Panel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Panel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Panel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
