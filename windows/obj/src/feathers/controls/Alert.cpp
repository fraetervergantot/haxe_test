#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Alert
#include <feathers/controls/Alert.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonBar
#include <feathers/controls/ButtonBar.h>
#endif
#ifndef INCLUDED_feathers_controls_Header
#include <feathers/controls/Header.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
#endif
#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls__Alert_StringWrapper
#include <feathers/controls/_Alert/StringWrapper.h>
#endif
#ifndef INCLUDED_feathers_controls_popups_IPopUpAdapter
#include <feathers/controls/popups/IPopUpAdapter.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
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
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_data_ArrayCollection
#include <feathers/data/ArrayCollection.h>
#endif
#ifndef INCLUDED_feathers_data_ButtonBarItemState
#include <feathers/data/ButtonBarItemState.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_feathers_events_ButtonBarEvent
#include <feathers/events/ButtonBarEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelAlertStyles
#include <feathers/themes/steel/components/SteelAlertStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_49_new,"feathers.controls.Alert","new",0x3b2b5af4,"feathers.controls.Alert.new","feathers/controls/Alert.hx",49,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_168_get_text,"feathers.controls.Alert","get_text",0x531a2522,"feathers.controls.Alert.get_text","feathers/controls/Alert.hx",168,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_171_set_text,"feathers.controls.Alert","set_text",0x01777e96,"feathers.controls.Alert.set_text","feathers/controls/Alert.hx",171,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_209_get_htmlText,"feathers.controls.Alert","get_htmlText",0x474656ad,"feathers.controls.Alert.get_htmlText","feathers/controls/Alert.hx",209,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_212_set_htmlText,"feathers.controls.Alert","set_htmlText",0x5c3f7a21,"feathers.controls.Alert.set_htmlText","feathers/controls/Alert.hx",212,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_233_get_titleText,"feathers.controls.Alert","get_titleText",0x660699d0,"feathers.controls.Alert.get_titleText","feathers/controls/Alert.hx",233,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_236_set_titleText,"feathers.controls.Alert","set_titleText",0xab0c7bdc,"feathers.controls.Alert.set_titleText","feathers/controls/Alert.hx",236,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_277_get_messageLabelFactory,"feathers.controls.Alert","get_messageLabelFactory",0x3c80a0c8,"feathers.controls.Alert.get_messageLabelFactory","feathers/controls/Alert.hx",277,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_280_set_messageLabelFactory,"feathers.controls.Alert","set_messageLabelFactory",0x3ee209d4,"feathers.controls.Alert.set_messageLabelFactory","feathers/controls/Alert.hx",280,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_312_get_headerFactory,"feathers.controls.Alert","get_headerFactory",0x1012a7a8,"feathers.controls.Alert.get_headerFactory","feathers/controls/Alert.hx",312,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_315_set_headerFactory,"feathers.controls.Alert","set_headerFactory",0x33807fb4,"feathers.controls.Alert.set_headerFactory","feathers/controls/Alert.hx",315,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_348_get_buttonBarFactory,"feathers.controls.Alert","get_buttonBarFactory",0x3b4e7fbe,"feathers.controls.Alert.get_buttonBarFactory","feathers/controls/Alert.hx",348,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_351_set_buttonBarFactory,"feathers.controls.Alert","set_buttonBarFactory",0x08063732,"feathers.controls.Alert.set_buttonBarFactory","feathers/controls/Alert.hx",351,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_371_get_buttonsDataProvider,"feathers.controls.Alert","get_buttonsDataProvider",0x50502c87,"feathers.controls.Alert.get_buttonsDataProvider","feathers/controls/Alert.hx",371,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_374_set_buttonsDataProvider,"feathers.controls.Alert","set_buttonsDataProvider",0x52b19593,"feathers.controls.Alert.set_buttonsDataProvider","feathers/controls/Alert.hx",374,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_456_set_header,"feathers.controls.Alert","set_header",0x11bcc7b6,"feathers.controls.Alert.set_header","feathers/controls/Alert.hx",456,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_460_set_footer,"feathers.controls.Alert","set_footer",0x1054fcc4,"feathers.controls.Alert.set_footer","feathers/controls/Alert.hx",460,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_464_initializeAlertTheme,"feathers.controls.Alert","initializeAlertTheme",0xaaa7b169,"feathers.controls.Alert.initializeAlertTheme","feathers/controls/Alert.hx",464,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_467_update,"feathers.controls.Alert","update",0x05d3cff5,"feathers.controls.Alert.update","feathers/controls/Alert.hx",467,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_506_createButtonBar,"feathers.controls.Alert","createButtonBar",0xa9361cf9,"feathers.controls.Alert.createButtonBar","feathers/controls/Alert.hx",506,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_526_createHeader,"feathers.controls.Alert","createHeader",0xa149cc95,"feathers.controls.Alert.createHeader","feathers/controls/Alert.hx",526,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_544_createMessageLabel,"feathers.controls.Alert","createMessageLabel",0x6d79afb5,"feathers.controls.Alert.createMessageLabel","feathers/controls/Alert.hx",544,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_563_refreshButtons,"feathers.controls.Alert","refreshButtons",0x89d67792,"feathers.controls.Alert.refreshButtons","feathers/controls/Alert.hx",563,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_566_refreshText,"feathers.controls.Alert","refreshText",0xc1979abc,"feathers.controls.Alert.refreshText","feathers/controls/Alert.hx",566,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_572_refreshTitleText,"feathers.controls.Alert","refreshTitleText",0xa69695f6,"feathers.controls.Alert.refreshTitleText","feathers/controls/Alert.hx",572,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_575_refreshIcon,"feathers.controls.Alert","refreshIcon",0xba50b588,"feathers.controls.Alert.refreshIcon","feathers/controls/Alert.hx",575,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_603_getCurrentIcon,"feathers.controls.Alert","getCurrentIcon",0x502f2948,"feathers.controls.Alert.getCurrentIcon","feathers/controls/Alert.hx",603,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_606_removeCurrentIcon,"feathers.controls.Alert","removeCurrentIcon",0xe342c002,"feathers.controls.Alert.removeCurrentIcon","feathers/controls/Alert.hx",606,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_621_alert_buttonBar_itemTriggerHandler,"feathers.controls.Alert","alert_buttonBar_itemTriggerHandler",0x6a5c2792,"feathers.controls.Alert.alert_buttonBar_itemTriggerHandler","feathers/controls/Alert.hx",621,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_dc94767d22e51653_42_get_styleContext,"feathers.controls.Alert","get_styleContext",0xd10ee633,"feathers.controls.Alert.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_85_get_icon,"feathers.controls.Alert","get_icon",0x4bd33fee,"feathers.controls.Alert.get_icon","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_99_set_icon,"feathers.controls.Alert","set_icon",0xfa309962,"feathers.controls.Alert.set_icon","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_125_clearStyle_icon,"feathers.controls.Alert","clearStyle_icon",0x2478cd08,"feathers.controls.Alert.clearStyle_icon","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_85_get_customButtonBarVariant,"feathers.controls.Alert","get_customButtonBarVariant",0xc60b1f0a,"feathers.controls.Alert.get_customButtonBarVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_99_set_customButtonBarVariant,"feathers.controls.Alert","set_customButtonBarVariant",0x259fe57e,"feathers.controls.Alert.set_customButtonBarVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_125_clearStyle_customButtonBarVariant,"feathers.controls.Alert","clearStyle_customButtonBarVariant",0x636bfaa4,"feathers.controls.Alert.clearStyle_customButtonBarVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_85_get_customHeaderVariant,"feathers.controls.Alert","get_customHeaderVariant",0x3ef0db32,"feathers.controls.Alert.get_customHeaderVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_99_set_customHeaderVariant,"feathers.controls.Alert","set_customHeaderVariant",0x4152443e,"feathers.controls.Alert.set_customHeaderVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_125_clearStyle_customHeaderVariant,"feathers.controls.Alert","clearStyle_customHeaderVariant",0xa9761b58,"feathers.controls.Alert.clearStyle_customHeaderVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_85_get_customMessageLabelVariant,"feathers.controls.Alert","get_customMessageLabelVariant",0xe42f1992,"feathers.controls.Alert.get_customMessageLabelVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_99_set_customMessageLabelVariant,"feathers.controls.Alert","set_customMessageLabelVariant",0xa606d39e,"feathers.controls.Alert.set_customMessageLabelVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8892adcbbfd71d23_125_clearStyle_customMessageLabelVariant,"feathers.controls.Alert","clearStyle_customMessageLabelVariant",0x0a53fa38,"feathers.controls.Alert.clearStyle_customMessageLabelVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_107_show,"feathers.controls.Alert","show",0x8e148be9,"feathers.controls.Alert.show","feathers/controls/Alert.hx",107,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_115_show,"feathers.controls.Alert","show",0x8e148be9,"feathers.controls.Alert.show","feathers/controls/Alert.hx",115,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_121_showAlert,"feathers.controls.Alert","showAlert",0x62766eb3,"feathers.controls.Alert.showAlert","feathers/controls/Alert.hx",121,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_50_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",50,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_51_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",51,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_52_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",52,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_66_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",66,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_80_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",80,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_94_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",94,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_130_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",130,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_132_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",132,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_0ffa6226c514ba7c_134_boot,"feathers.controls.Alert","boot",0x82dd3b1e,"feathers.controls.Alert.boot","feathers/controls/Alert.hx",134,0x586596dc)
namespace feathers{
namespace controls{

void Alert_obj::__construct(::String __o_text){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_49_new)
HXLINE( 453)		this->_hx___customMessageLabelVariant = null();
HXLINE( 439)		this->_hx___customHeaderVariant = null();
HXLINE( 425)		this->_hx___customButtonBarVariant = null();
HXLINE( 411)		this->_hx___icon = null();
HXLINE( 385)		this->_ignoreIconResizes = false;
HXLINE( 384)		this->_currentIcon = null();
HXLINE( 383)		this->_iconMeasurements = null();
HXLINE( 362)		this->_buttonsDataProvider = null();
HXLINE( 223)		this->_titleText = HX_("",00,00,00,00);
HXLINE( 188)		this->_htmlText = null();
HXLINE( 142)		this->initializeAlertTheme();
HXLINE( 143)		super::__construct();
HXLINE( 145)		this->set_text(text);
            	}

Dynamic Alert_obj::__CreateEmpty() { return new Alert_obj; }

void *Alert_obj::_hx_vtable = 0;

Dynamic Alert_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alert_obj > _hx_result = new Alert_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Alert_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x4033f4be) {
					return inClassId==(int)0x1f4df417 || inClassId==(int)0x4033f4be;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6910e856 || inClassId==(int)0x6b353933;
		}
	}
}

::String Alert_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_168_get_text)
HXDLIN( 168)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_text,return )

::String Alert_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_171_set_text)
HXLINE( 172)		if (::hx::IsNull( value )) {
HXLINE( 174)			if ((this->_text.length == 0)) {
HXLINE( 176)				return this->_text;
            			}
HXLINE( 178)			value = HX_("",00,00,00,00);
            		}
HXLINE( 180)		if ((this->_text == value)) {
HXLINE( 181)			return this->_text;
            		}
HXLINE( 183)		this->_text = value;
HXLINE( 184)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 185)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_text,return )

::String Alert_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_209_get_htmlText)
HXDLIN( 209)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_htmlText,return )

::String Alert_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_212_set_htmlText)
HXLINE( 213)		if ((this->_htmlText == value)) {
HXLINE( 214)			return this->_htmlText;
            		}
HXLINE( 216)		this->_htmlText = value;
HXLINE( 217)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 218)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_htmlText,return )

::String Alert_obj::get_titleText(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_233_get_titleText)
HXDLIN( 233)		return this->_titleText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_titleText,return )

::String Alert_obj::set_titleText(::String value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_236_set_titleText)
HXLINE( 237)		if (::hx::IsNull( value )) {
HXLINE( 239)			if ((this->_titleText.length == 0)) {
HXLINE( 241)				return this->_titleText;
            			}
HXLINE( 243)			value = HX_("",00,00,00,00);
            		}
HXLINE( 245)		if ((this->_titleText == value)) {
HXLINE( 246)			return this->_titleText;
            		}
HXLINE( 248)		this->_titleText = value;
HXLINE( 249)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 250)		return this->_titleText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_titleText,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::get_messageLabelFactory(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_277_get_messageLabelFactory)
HXDLIN( 277)		return this->_messageLabelFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_messageLabelFactory,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::set_messageLabelFactory( ::feathers::utils::DisplayObjectFactory value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_280_set_messageLabelFactory)
HXLINE( 281)		if (::hx::IsInstanceEq( this->_messageLabelFactory,value )) {
HXLINE( 282)			return this->_messageLabelFactory;
            		}
HXLINE( 284)		this->_messageLabelFactory = value;
HXLINE( 285)		this->setInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY);
HXLINE( 286)		return this->_messageLabelFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_messageLabelFactory,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::get_headerFactory(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_312_get_headerFactory)
HXDLIN( 312)		return this->_headerFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_headerFactory,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::set_headerFactory( ::feathers::utils::DisplayObjectFactory value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_315_set_headerFactory)
HXLINE( 316)		if (::hx::IsInstanceEq( this->_headerFactory,value )) {
HXLINE( 317)			return this->_headerFactory;
            		}
HXLINE( 319)		this->_headerFactory = value;
HXLINE( 320)		this->setInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY);
HXLINE( 321)		return this->_headerFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_headerFactory,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::get_buttonBarFactory(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_348_get_buttonBarFactory)
HXDLIN( 348)		return this->_buttonBarFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_buttonBarFactory,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::set_buttonBarFactory( ::feathers::utils::DisplayObjectFactory value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_351_set_buttonBarFactory)
HXLINE( 352)		if (::hx::IsInstanceEq( this->_buttonBarFactory,value )) {
HXLINE( 353)			return this->_buttonBarFactory;
            		}
HXLINE( 355)		this->_buttonBarFactory = value;
HXLINE( 356)		this->setInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY);
HXLINE( 357)		return this->_buttonBarFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_buttonBarFactory,return )

::Dynamic Alert_obj::get_buttonsDataProvider(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_371_get_buttonsDataProvider)
HXDLIN( 371)		return this->_buttonsDataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_buttonsDataProvider,return )

::Dynamic Alert_obj::set_buttonsDataProvider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_374_set_buttonsDataProvider)
HXLINE( 375)		if (::hx::IsInstanceEq( this->_buttonsDataProvider,value )) {
HXLINE( 376)			return this->_buttonsDataProvider;
            		}
HXLINE( 378)		this->_buttonsDataProvider = value;
HXLINE( 379)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 380)		return this->_buttonsDataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_buttonsDataProvider,return )

 ::openfl::display::DisplayObject Alert_obj::set_header( ::openfl::display::DisplayObject value){
            	HX_GC_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_456_set_header)
HXDLIN( 456)		HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Alert header must be created with headerFactory",10,08,79,aa)));
HXDLIN( 456)		return null();
            	}


 ::openfl::display::DisplayObject Alert_obj::set_footer( ::openfl::display::DisplayObject value){
            	HX_GC_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_460_set_footer)
HXDLIN( 460)		HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Alert footer must be created with buttonBarFactory",e4,bb,1d,15)));
HXDLIN( 460)		return null();
            	}


void Alert_obj::initializeAlertTheme(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_464_initializeAlertTheme)
HXDLIN( 464)		::feathers::themes::steel::components::SteelAlertStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,initializeAlertTheme,(void))

void Alert_obj::update(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_467_update)
HXLINE( 468)		bool dataInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 469)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 470)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 471)		bool buttonBarInvalid = this->isInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY);
HXLINE( 472)		bool headerInvalid = this->isInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY);
HXLINE( 473)		bool messageLabelInvalid = this->isInvalid(::feathers::controls::Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY);
HXLINE( 475)		if (headerInvalid) {
HXLINE( 476)			this->createHeader();
            		}
HXLINE( 479)		if (buttonBarInvalid) {
HXLINE( 480)			this->createButtonBar();
            		}
HXLINE( 483)		if (messageLabelInvalid) {
HXLINE( 484)			this->createMessageLabel();
            		}
HXLINE( 487)		bool _hx_tmp;
HXDLIN( 487)		if (!(stylesInvalid)) {
HXLINE( 487)			_hx_tmp = stateInvalid;
            		}
            		else {
HXLINE( 487)			_hx_tmp = true;
            		}
HXDLIN( 487)		if (_hx_tmp) {
HXLINE( 488)			this->refreshIcon();
            		}
HXLINE( 491)		bool _hx_tmp1;
HXDLIN( 491)		bool _hx_tmp2;
HXDLIN( 491)		bool _hx_tmp3;
HXDLIN( 491)		if (!(dataInvalid)) {
HXLINE( 491)			_hx_tmp3 = stylesInvalid;
            		}
            		else {
HXLINE( 491)			_hx_tmp3 = true;
            		}
HXDLIN( 491)		if (!(_hx_tmp3)) {
HXLINE( 491)			_hx_tmp2 = stateInvalid;
            		}
            		else {
HXLINE( 491)			_hx_tmp2 = true;
            		}
HXDLIN( 491)		if (!(_hx_tmp2)) {
HXLINE( 491)			_hx_tmp1 = messageLabelInvalid;
            		}
            		else {
HXLINE( 491)			_hx_tmp1 = true;
            		}
HXDLIN( 491)		if (_hx_tmp1) {
HXLINE( 492)			this->refreshText();
            		}
HXLINE( 495)		bool _hx_tmp4;
HXDLIN( 495)		bool _hx_tmp5;
HXDLIN( 495)		bool _hx_tmp6;
HXDLIN( 495)		if (!(dataInvalid)) {
HXLINE( 495)			_hx_tmp6 = stylesInvalid;
            		}
            		else {
HXLINE( 495)			_hx_tmp6 = true;
            		}
HXDLIN( 495)		if (!(_hx_tmp6)) {
HXLINE( 495)			_hx_tmp5 = stateInvalid;
            		}
            		else {
HXLINE( 495)			_hx_tmp5 = true;
            		}
HXDLIN( 495)		if (!(_hx_tmp5)) {
HXLINE( 495)			_hx_tmp4 = headerInvalid;
            		}
            		else {
HXLINE( 495)			_hx_tmp4 = true;
            		}
HXDLIN( 495)		if (_hx_tmp4) {
HXLINE( 496)			this->refreshTitleText();
            		}
HXLINE( 499)		bool _hx_tmp7;
HXDLIN( 499)		if (!(dataInvalid)) {
HXLINE( 499)			_hx_tmp7 = buttonBarInvalid;
            		}
            		else {
HXLINE( 499)			_hx_tmp7 = true;
            		}
HXDLIN( 499)		if (_hx_tmp7) {
HXLINE( 500)			this->refreshButtons();
            		}
HXLINE( 503)		this->super::update();
            	}


void Alert_obj::createButtonBar(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_506_createButtonBar)
HXLINE( 507)		if (::hx::IsNotNull( this->buttonBar )) {
HXLINE( 508)			this->buttonBar->removeEventListener(HX_("itemTrigger",65,d0,e1,83),this->alert_buttonBar_itemTriggerHandler_dyn(),null());
HXLINE( 509)			if (::hx::IsNotNull( this->_oldButtonBarFactory->destroy )) {
HXLINE( 510)				this->_oldButtonBarFactory->destroy(this->buttonBar);
            			}
HXLINE( 512)			this->_oldButtonBarFactory = null();
HXLINE( 513)			this->buttonBar = null();
HXLINE( 514)			this->super::set_footer(null());
            		}
HXLINE( 516)		 ::feathers::utils::DisplayObjectFactory factory;
HXDLIN( 516)		if (::hx::IsNotNull( this->_buttonBarFactory )) {
HXLINE( 516)			factory = this->_buttonBarFactory;
            		}
            		else {
HXLINE( 516)			factory = ::feathers::controls::Alert_obj::defaultButtonBarFactory;
            		}
HXLINE( 517)		this->_oldButtonBarFactory = factory;
HXLINE( 518)		this->buttonBar = ( ( ::feathers::controls::ButtonBar)(factory->create()) );
HXLINE( 519)		if (::hx::IsNull( this->buttonBar->get_variant() )) {
HXLINE( 520)			 ::feathers::controls::ButtonBar _hx_tmp = this->buttonBar;
HXDLIN( 520)			::String _hx_tmp1;
HXDLIN( 520)			if (::hx::IsNotNull( this->get_customButtonBarVariant() )) {
HXLINE( 520)				_hx_tmp1 = this->get_customButtonBarVariant();
            			}
            			else {
HXLINE( 520)				_hx_tmp1 = ::feathers::controls::Alert_obj::CHILD_VARIANT_BUTTON_BAR;
            			}
HXDLIN( 520)			_hx_tmp->set_variant(_hx_tmp1);
            		}
HXLINE( 522)		this->buttonBar->addEventListener(HX_("itemTrigger",65,d0,e1,83),this->alert_buttonBar_itemTriggerHandler_dyn(),null(),null(),null());
HXLINE( 523)		this->super::set_footer(this->buttonBar);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,createButtonBar,(void))

void Alert_obj::createHeader(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_526_createHeader)
HXLINE( 527)		if (::hx::IsNotNull( this->alertHeader )) {
HXLINE( 528)			if (::hx::IsNotNull( this->_oldHeaderFactory->destroy )) {
HXLINE( 529)				this->_oldHeaderFactory->destroy(this->alertHeader);
            			}
HXLINE( 531)			this->_oldHeaderFactory = null();
HXLINE( 532)			this->alertHeader = null();
HXLINE( 533)			this->super::set_header(null());
            		}
HXLINE( 535)		 ::feathers::utils::DisplayObjectFactory factory;
HXDLIN( 535)		if (::hx::IsNotNull( this->_headerFactory )) {
HXLINE( 535)			factory = this->_headerFactory;
            		}
            		else {
HXLINE( 535)			factory = ::feathers::controls::Alert_obj::defaultHeaderFactory;
            		}
HXLINE( 536)		this->_oldHeaderFactory = factory;
HXLINE( 537)		this->alertHeader = ( ( ::feathers::controls::Header)(factory->create()) );
HXLINE( 538)		if (::hx::IsNull( this->alertHeader->get_variant() )) {
HXLINE( 539)			 ::feathers::controls::Header _hx_tmp = this->alertHeader;
HXDLIN( 539)			::String _hx_tmp1;
HXDLIN( 539)			if (::hx::IsNotNull( this->get_customHeaderVariant() )) {
HXLINE( 539)				_hx_tmp1 = this->get_customHeaderVariant();
            			}
            			else {
HXLINE( 539)				_hx_tmp1 = ::feathers::controls::Alert_obj::CHILD_VARIANT_HEADER;
            			}
HXDLIN( 539)			_hx_tmp->set_variant(_hx_tmp1);
            		}
HXLINE( 541)		this->super::set_header(this->alertHeader);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,createHeader,(void))

void Alert_obj::createMessageLabel(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_544_createMessageLabel)
HXLINE( 545)		if (::hx::IsNotNull( this->messageLabel )) {
HXLINE( 546)			this->removeChild(this->messageLabel);
HXLINE( 547)			if (::hx::IsNotNull( this->_oldMessageLabelFactory->destroy )) {
HXLINE( 548)				this->_oldMessageLabelFactory->destroy(this->messageLabel);
            			}
HXLINE( 550)			this->_oldMessageLabelFactory = null();
HXLINE( 551)			this->messageLabel = null();
            		}
HXLINE( 553)		 ::feathers::utils::DisplayObjectFactory factory;
HXDLIN( 553)		if (::hx::IsNotNull( this->_messageLabelFactory )) {
HXLINE( 553)			factory = this->_messageLabelFactory;
            		}
            		else {
HXLINE( 553)			factory = ::feathers::controls::Alert_obj::defaultMessageLabelFactory;
            		}
HXLINE( 554)		this->_oldMessageLabelFactory = factory;
HXLINE( 555)		this->messageLabel = ( ( ::feathers::controls::Label)(factory->create()) );
HXLINE( 556)		if (::hx::IsNull( this->messageLabel->get_variant() )) {
HXLINE( 557)			 ::feathers::controls::Label _hx_tmp = this->messageLabel;
HXDLIN( 557)			::String _hx_tmp1;
HXDLIN( 557)			if (::hx::IsNotNull( this->get_customMessageLabelVariant() )) {
HXLINE( 557)				_hx_tmp1 = this->get_customMessageLabelVariant();
            			}
            			else {
HXLINE( 557)				_hx_tmp1 = ::feathers::controls::Alert_obj::CHILD_VARIANT_MESSAGE_LABEL;
            			}
HXDLIN( 557)			_hx_tmp->set_variant(_hx_tmp1);
            		}
HXLINE( 559)		this->addChild(this->messageLabel);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,createMessageLabel,(void))

void Alert_obj::refreshButtons(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_563_refreshButtons)
HXDLIN( 563)		this->buttonBar->set_dataProvider(this->_buttonsDataProvider);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,refreshButtons,(void))

void Alert_obj::refreshText(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_566_refreshText)
HXLINE( 567)		this->messageLabel->set_text(this->_text);
HXLINE( 568)		this->messageLabel->set_htmlText(this->_htmlText);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,refreshText,(void))

void Alert_obj::refreshTitleText(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_572_refreshTitleText)
HXDLIN( 572)		this->alertHeader->set_text(this->_titleText);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,refreshTitleText,(void))

void Alert_obj::refreshIcon(){
            	HX_GC_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_575_refreshIcon)
HXLINE( 576)		 ::openfl::display::DisplayObject oldIcon = this->_currentIcon;
HXLINE( 577)		this->_currentIcon = this->getCurrentIcon();
HXLINE( 578)		if (::hx::IsInstanceEq( this->_currentIcon,oldIcon )) {
HXLINE( 579)			return;
            		}
HXLINE( 581)		this->removeCurrentIcon(oldIcon);
HXLINE( 582)		if (::hx::IsNull( this->_currentIcon )) {
HXLINE( 583)			this->_iconMeasurements = null();
HXLINE( 584)			return;
            		}
HXLINE( 586)		if (::Std_obj::isOfType(this->_currentIcon,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 587)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_currentIcon,0x2696a04f));
            		}
HXLINE( 589)		if (::hx::IsNull( this->_iconMeasurements )) {
HXLINE( 590)			this->_iconMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_currentIcon);
            		}
            		else {
HXLINE( 592)			this->_iconMeasurements->save(this->_currentIcon);
            		}
HXLINE( 594)		if (::Std_obj::isOfType(this->_currentIcon,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 595)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(this->_currentIcon,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 597)		int index = this->getChildIndex(this->messageLabel);
HXLINE( 599)		this->addChildAt(this->_currentIcon,index);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,refreshIcon,(void))

 ::openfl::display::DisplayObject Alert_obj::getCurrentIcon(){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_603_getCurrentIcon)
HXDLIN( 603)		return this->get_icon();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,getCurrentIcon,return )

void Alert_obj::removeCurrentIcon( ::openfl::display::DisplayObject icon){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_606_removeCurrentIcon)
HXLINE( 607)		if (::hx::IsNull( icon )) {
HXLINE( 608)			return;
            		}
HXLINE( 610)		if (::Std_obj::isOfType(icon,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 611)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(icon,0x32a0d8d6),null());
            		}
HXLINE( 615)		this->_iconMeasurements->restore(icon);
HXLINE( 616)		if (::hx::IsInstanceEq( icon->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 617)			this->removeChild(icon);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,removeCurrentIcon,(void))

void Alert_obj::alert_buttonBar_itemTriggerHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_621_alert_buttonBar_itemTriggerHandler)
HXLINE( 622)		this->parent->removeChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 623)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,alert_buttonBar_itemTriggerHandler,(void))

::hx::Class Alert_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_dc94767d22e51653_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::Alert >();
            	}


 ::openfl::display::DisplayObject Alert_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_85_get_icon)
HXDLIN(  85)		return this->_hx___icon;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_icon,return )

 ::openfl::display::DisplayObject Alert_obj::set_icon( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_99_set_icon)
HXLINE( 100)		if (!(this->setStyle(HX_("icon",79,e7,b2,45),null()))) {
HXLINE( 101)			return this->_hx___icon;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___icon,value )) {
HXLINE( 104)			return this->_hx___icon;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_icon_dyn();
HXLINE( 110)		this->_hx___icon = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___icon;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_icon,return )

 ::openfl::display::DisplayObject Alert_obj::clearStyle_icon(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_125_clearStyle_icon)
HXLINE( 126)		this->set_icon(null());
HXLINE( 127)		return this->get_icon();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,clearStyle_icon,return )

::String Alert_obj::get_customButtonBarVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_85_get_customButtonBarVariant)
HXDLIN(  85)		return this->_hx___customButtonBarVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_customButtonBarVariant,return )

::String Alert_obj::set_customButtonBarVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_99_set_customButtonBarVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customButtonBarVariant",55,85,fa,e9),null()))) {
HXLINE( 101)			return this->_hx___customButtonBarVariant;
            		}
HXLINE( 103)		if ((this->_hx___customButtonBarVariant == value)) {
HXLINE( 104)			return this->_hx___customButtonBarVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customButtonBarVariant_dyn();
HXLINE( 110)		this->_hx___customButtonBarVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customButtonBarVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_customButtonBarVariant,return )

::String Alert_obj::clearStyle_customButtonBarVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_125_clearStyle_customButtonBarVariant)
HXLINE( 126)		this->set_customButtonBarVariant(null());
HXLINE( 127)		return this->get_customButtonBarVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,clearStyle_customButtonBarVariant,return )

::String Alert_obj::get_customHeaderVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_85_get_customHeaderVariant)
HXDLIN(  85)		return this->_hx___customHeaderVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_customHeaderVariant,return )

::String Alert_obj::set_customHeaderVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_99_set_customHeaderVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customHeaderVariant",07,68,eb,c9),null()))) {
HXLINE( 101)			return this->_hx___customHeaderVariant;
            		}
HXLINE( 103)		if ((this->_hx___customHeaderVariant == value)) {
HXLINE( 104)			return this->_hx___customHeaderVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customHeaderVariant_dyn();
HXLINE( 110)		this->_hx___customHeaderVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customHeaderVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_customHeaderVariant,return )

::String Alert_obj::clearStyle_customHeaderVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_125_clearStyle_customHeaderVariant)
HXLINE( 126)		this->set_customHeaderVariant(null());
HXLINE( 127)		return this->get_customHeaderVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,clearStyle_customHeaderVariant,return )

::String Alert_obj::get_customMessageLabelVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_85_get_customMessageLabelVariant)
HXDLIN(  85)		return this->_hx___customMessageLabelVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,get_customMessageLabelVariant,return )

::String Alert_obj::set_customMessageLabelVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_99_set_customMessageLabelVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customMessageLabelVariant",27,74,f6,3c),null()))) {
HXLINE( 101)			return this->_hx___customMessageLabelVariant;
            		}
HXLINE( 103)		if ((this->_hx___customMessageLabelVariant == value)) {
HXLINE( 104)			return this->_hx___customMessageLabelVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customMessageLabelVariant_dyn();
HXLINE( 110)		this->_hx___customMessageLabelVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customMessageLabelVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alert_obj,set_customMessageLabelVariant,return )

::String Alert_obj::clearStyle_customMessageLabelVariant(){
            	HX_STACKFRAME(&_hx_pos_8892adcbbfd71d23_125_clearStyle_customMessageLabelVariant)
HXLINE( 126)		this->set_customMessageLabelVariant(null());
HXLINE( 127)		return this->get_customMessageLabelVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alert_obj,clearStyle_customMessageLabelVariant,return )

 ::feathers::core::InvalidationFlag Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY;

 ::feathers::core::InvalidationFlag Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY;

 ::feathers::core::InvalidationFlag Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY;

::String Alert_obj::CHILD_VARIANT_HEADER;

::String Alert_obj::CHILD_VARIANT_MESSAGE_LABEL;

::String Alert_obj::CHILD_VARIANT_BUTTON_BAR;

 ::feathers::controls::Alert Alert_obj::show(::String text,::String titleText,::Array< ::String > buttonsText, ::Dynamic callback, ::Dynamic alertFactory,::Dynamic popUpAdapter){
            	HX_GC_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_107_show)
HXLINE( 108)		 ::feathers::controls::Alert alert;
HXDLIN( 108)		if (::hx::IsNotNull( alertFactory )) {
HXLINE( 108)			alert = ( ( ::feathers::controls::Alert)(alertFactory()) );
            		}
            		else {
HXLINE( 108)			alert =  ::feathers::controls::Alert_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 109)		alert->set_text(text);
HXLINE( 110)		alert->set_titleText(titleText);
HXLINE( 111)		::Array< ::Dynamic> buttonsData;
HXDLIN( 111)		if (::hx::IsNotNull( buttonsText )) {
HXLINE( 111)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(buttonsText->length);
HXDLIN( 111)			{
HXLINE( 111)				int _g = 0;
HXDLIN( 111)				int _g1 = buttonsText->length;
HXDLIN( 111)				while((_g < _g1)){
HXLINE( 111)					_g = (_g + 1);
HXDLIN( 111)					int i = (_g - 1);
HXDLIN( 111)					{
HXLINE( 111)						 ::feathers::controls::_Alert::StringWrapper inValue =  ::feathers::controls::_Alert::StringWrapper_obj::__alloc( HX_CTX ,( (::String)(_hx_array_unsafe_get(buttonsText,i)) ));
HXDLIN( 111)						result->__unsafe_set(i,inValue);
            					}
            				}
            			}
HXDLIN( 111)			buttonsData = result;
            		}
            		else {
HXLINE( 111)			buttonsData = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 112)		alert->set_buttonsDataProvider( ::feathers::data::ArrayCollection_obj::__alloc( HX_CTX ,buttonsData));
HXLINE( 113)		if (::hx::IsNotNull( callback )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::feathers::events::ButtonBarEvent event){
            				HX_GC_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_115_show)
HXLINE( 115)				callback(event->state);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 114)			alert->addEventListener(HX_("itemTrigger",65,d0,e1,83), ::Dynamic(new _hx_Closure_0(callback)),null(),null(),null());
            		}
HXLINE( 118)		return ::feathers::controls::Alert_obj::showAlert(alert,popUpAdapter);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Alert_obj,show,return )

 ::feathers::controls::Alert Alert_obj::showAlert( ::feathers::controls::Alert alert,::Dynamic popUpAdapter){
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_121_showAlert)
HXLINE( 122)		if (::hx::IsNotNull( popUpAdapter )) {
HXLINE( 123)			::feathers::controls::popups::IPopUpAdapter_obj::open(popUpAdapter,alert,::openfl::Lib_obj::get_current());
            		}
            		else {
HXLINE( 125)			::feathers::core::PopUpManager_obj::addPopUp(alert,::openfl::Lib_obj::get_current(),true,true,null());
            		}
HXLINE( 127)		return alert;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Alert_obj,showAlert,return )

 ::feathers::utils::DisplayObjectFactory Alert_obj::defaultButtonBarFactory;

 ::feathers::utils::DisplayObjectFactory Alert_obj::defaultHeaderFactory;

 ::feathers::utils::DisplayObjectFactory Alert_obj::defaultMessageLabelFactory;


::hx::ObjectPtr< Alert_obj > Alert_obj::__new(::String __o_text) {
	::hx::ObjectPtr< Alert_obj > __this = new Alert_obj();
	__this->__construct(__o_text);
	return __this;
}

::hx::ObjectPtr< Alert_obj > Alert_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_text) {
	Alert_obj *__this = (Alert_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alert_obj), true, "feathers.controls.Alert"));
	*(void **)__this = Alert_obj::_hx_vtable;
	__this->__construct(__o_text);
	return __this;
}

Alert_obj::Alert_obj()
{
}

void Alert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alert);
	HX_MARK_MEMBER_NAME(messageLabel,"messageLabel");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_htmlText,"_htmlText");
	HX_MARK_MEMBER_NAME(alertHeader,"alertHeader");
	HX_MARK_MEMBER_NAME(_titleText,"_titleText");
	HX_MARK_MEMBER_NAME(_oldMessageLabelFactory,"_oldMessageLabelFactory");
	HX_MARK_MEMBER_NAME(_messageLabelFactory,"_messageLabelFactory");
	HX_MARK_MEMBER_NAME(_oldHeaderFactory,"_oldHeaderFactory");
	HX_MARK_MEMBER_NAME(_headerFactory,"_headerFactory");
	HX_MARK_MEMBER_NAME(_oldButtonBarFactory,"_oldButtonBarFactory");
	HX_MARK_MEMBER_NAME(_buttonBarFactory,"_buttonBarFactory");
	HX_MARK_MEMBER_NAME(buttonBar,"buttonBar");
	HX_MARK_MEMBER_NAME(_buttonsDataProvider,"_buttonsDataProvider");
	HX_MARK_MEMBER_NAME(_iconMeasurements,"_iconMeasurements");
	HX_MARK_MEMBER_NAME(_currentIcon,"_currentIcon");
	HX_MARK_MEMBER_NAME(_ignoreIconResizes,"_ignoreIconResizes");
	HX_MARK_MEMBER_NAME(_hx___icon,"__icon");
	HX_MARK_MEMBER_NAME(_hx___customButtonBarVariant,"__customButtonBarVariant");
	HX_MARK_MEMBER_NAME(_hx___customHeaderVariant,"__customHeaderVariant");
	HX_MARK_MEMBER_NAME(_hx___customMessageLabelVariant,"__customMessageLabelVariant");
	 ::feathers::controls::Panel_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(messageLabel,"messageLabel");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_htmlText,"_htmlText");
	HX_VISIT_MEMBER_NAME(alertHeader,"alertHeader");
	HX_VISIT_MEMBER_NAME(_titleText,"_titleText");
	HX_VISIT_MEMBER_NAME(_oldMessageLabelFactory,"_oldMessageLabelFactory");
	HX_VISIT_MEMBER_NAME(_messageLabelFactory,"_messageLabelFactory");
	HX_VISIT_MEMBER_NAME(_oldHeaderFactory,"_oldHeaderFactory");
	HX_VISIT_MEMBER_NAME(_headerFactory,"_headerFactory");
	HX_VISIT_MEMBER_NAME(_oldButtonBarFactory,"_oldButtonBarFactory");
	HX_VISIT_MEMBER_NAME(_buttonBarFactory,"_buttonBarFactory");
	HX_VISIT_MEMBER_NAME(buttonBar,"buttonBar");
	HX_VISIT_MEMBER_NAME(_buttonsDataProvider,"_buttonsDataProvider");
	HX_VISIT_MEMBER_NAME(_iconMeasurements,"_iconMeasurements");
	HX_VISIT_MEMBER_NAME(_currentIcon,"_currentIcon");
	HX_VISIT_MEMBER_NAME(_ignoreIconResizes,"_ignoreIconResizes");
	HX_VISIT_MEMBER_NAME(_hx___icon,"__icon");
	HX_VISIT_MEMBER_NAME(_hx___customButtonBarVariant,"__customButtonBarVariant");
	HX_VISIT_MEMBER_NAME(_hx___customHeaderVariant,"__customHeaderVariant");
	HX_VISIT_MEMBER_NAME(_hx___customMessageLabelVariant,"__customMessageLabelVariant");
	 ::feathers::controls::Panel_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alert_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"__icon") ) { return ::hx::Val( _hx___icon ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_htmlText") ) { return ::hx::Val( _htmlText ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_titleText() ); }
		if (HX_FIELD_EQ(inName,"buttonBar") ) { return ::hx::Val( buttonBar ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_titleText") ) { return ::hx::Val( _titleText ); }
		if (HX_FIELD_EQ(inName,"set_header") ) { return ::hx::Val( set_header_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_footer") ) { return ::hx::Val( set_footer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alertHeader") ) { return ::hx::Val( alertHeader ); }
		if (HX_FIELD_EQ(inName,"refreshText") ) { return ::hx::Val( refreshText_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshIcon") ) { return ::hx::Val( refreshIcon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageLabel") ) { return ::hx::Val( messageLabel ); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"_currentIcon") ) { return ::hx::Val( _currentIcon ); }
		if (HX_FIELD_EQ(inName,"createHeader") ) { return ::hx::Val( createHeader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_titleText") ) { return ::hx::Val( get_titleText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_titleText") ) { return ::hx::Val( set_titleText_dyn() ); }
		if (HX_FIELD_EQ(inName,"headerFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_headerFactory() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headerFactory") ) { return ::hx::Val( _headerFactory ); }
		if (HX_FIELD_EQ(inName,"refreshButtons") ) { return ::hx::Val( refreshButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentIcon") ) { return ::hx::Val( getCurrentIcon_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createButtonBar") ) { return ::hx::Val( createButtonBar_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_icon") ) { return ::hx::Val( clearStyle_icon_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buttonBarFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonBarFactory() ); }
		if (HX_FIELD_EQ(inName,"refreshTitleText") ) { return ::hx::Val( refreshTitleText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_oldHeaderFactory") ) { return ::hx::Val( _oldHeaderFactory ); }
		if (HX_FIELD_EQ(inName,"get_headerFactory") ) { return ::hx::Val( get_headerFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_headerFactory") ) { return ::hx::Val( set_headerFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"_buttonBarFactory") ) { return ::hx::Val( _buttonBarFactory ); }
		if (HX_FIELD_EQ(inName,"_iconMeasurements") ) { return ::hx::Val( _iconMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentIcon") ) { return ::hx::Val( removeCurrentIcon_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ignoreIconResizes") ) { return ::hx::Val( _ignoreIconResizes ); }
		if (HX_FIELD_EQ(inName,"createMessageLabel") ) { return ::hx::Val( createMessageLabel_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"messageLabelFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_messageLabelFactory() ); }
		if (HX_FIELD_EQ(inName,"buttonsDataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonsDataProvider() ); }
		if (HX_FIELD_EQ(inName,"customHeaderVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customHeaderVariant() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_messageLabelFactory") ) { return ::hx::Val( _messageLabelFactory ); }
		if (HX_FIELD_EQ(inName,"_oldButtonBarFactory") ) { return ::hx::Val( _oldButtonBarFactory ); }
		if (HX_FIELD_EQ(inName,"get_buttonBarFactory") ) { return ::hx::Val( get_buttonBarFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonBarFactory") ) { return ::hx::Val( set_buttonBarFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"_buttonsDataProvider") ) { return ::hx::Val( _buttonsDataProvider ); }
		if (HX_FIELD_EQ(inName,"initializeAlertTheme") ) { return ::hx::Val( initializeAlertTheme_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__customHeaderVariant") ) { return ::hx::Val( _hx___customHeaderVariant ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"customButtonBarVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customButtonBarVariant() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_oldMessageLabelFactory") ) { return ::hx::Val( _oldMessageLabelFactory ); }
		if (HX_FIELD_EQ(inName,"get_messageLabelFactory") ) { return ::hx::Val( get_messageLabelFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_messageLabelFactory") ) { return ::hx::Val( set_messageLabelFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonsDataProvider") ) { return ::hx::Val( get_buttonsDataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonsDataProvider") ) { return ::hx::Val( set_buttonsDataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customHeaderVariant") ) { return ::hx::Val( get_customHeaderVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customHeaderVariant") ) { return ::hx::Val( set_customHeaderVariant_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__customButtonBarVariant") ) { return ::hx::Val( _hx___customButtonBarVariant ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"customMessageLabelVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customMessageLabelVariant() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_customButtonBarVariant") ) { return ::hx::Val( get_customButtonBarVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customButtonBarVariant") ) { return ::hx::Val( set_customButtonBarVariant_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__customMessageLabelVariant") ) { return ::hx::Val( _hx___customMessageLabelVariant ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_customMessageLabelVariant") ) { return ::hx::Val( get_customMessageLabelVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customMessageLabelVariant") ) { return ::hx::Val( set_customMessageLabelVariant_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"clearStyle_customHeaderVariant") ) { return ::hx::Val( clearStyle_customHeaderVariant_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_customButtonBarVariant") ) { return ::hx::Val( clearStyle_customButtonBarVariant_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"alert_buttonBar_itemTriggerHandler") ) { return ::hx::Val( alert_buttonBar_itemTriggerHandler_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"clearStyle_customMessageLabelVariant") ) { return ::hx::Val( clearStyle_customMessageLabelVariant_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Alert_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showAlert") ) { outValue = showAlert_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_HEADER") ) { outValue = ( CHILD_VARIANT_HEADER ); return true; }
		if (HX_FIELD_EQ(inName,"defaultHeaderFactory") ) { outValue = ( defaultHeaderFactory ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"defaultButtonBarFactory") ) { outValue = ( defaultButtonBarFactory ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_BUTTON_BAR") ) { outValue = ( CHILD_VARIANT_BUTTON_BAR ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"defaultMessageLabelFactory") ) { outValue = ( defaultMessageLabelFactory ); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_MESSAGE_LABEL") ) { outValue = ( CHILD_VARIANT_MESSAGE_LABEL ); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_HEADER_FACTORY") ) { outValue = ( INVALIDATION_FLAG_HEADER_FACTORY ); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_BUTTON_BAR_FACTORY") ) { outValue = ( INVALIDATION_FLAG_BUTTON_BAR_FACTORY ); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY") ) { outValue = ( INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY ); return true; }
	}
	return false;
}

::hx::Val Alert_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__icon") ) { _hx___icon=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_htmlText") ) { _htmlText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_titleText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"buttonBar") ) { buttonBar=inValue.Cast<  ::feathers::controls::ButtonBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_titleText") ) { _titleText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alertHeader") ) { alertHeader=inValue.Cast<  ::feathers::controls::Header >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageLabel") ) { messageLabel=inValue.Cast<  ::feathers::controls::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentIcon") ) { _currentIcon=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"headerFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_headerFactory(inValue.Cast<  ::feathers::utils::DisplayObjectFactory >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_headerFactory") ) { _headerFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buttonBarFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonBarFactory(inValue.Cast<  ::feathers::utils::DisplayObjectFactory >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_oldHeaderFactory") ) { _oldHeaderFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonBarFactory") ) { _buttonBarFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconMeasurements") ) { _iconMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ignoreIconResizes") ) { _ignoreIconResizes=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"messageLabelFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_messageLabelFactory(inValue.Cast<  ::feathers::utils::DisplayObjectFactory >()) ); }
		if (HX_FIELD_EQ(inName,"buttonsDataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonsDataProvider(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"customHeaderVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customHeaderVariant(inValue.Cast< ::String >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_messageLabelFactory") ) { _messageLabelFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldButtonBarFactory") ) { _oldButtonBarFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonsDataProvider") ) { _buttonsDataProvider=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__customHeaderVariant") ) { _hx___customHeaderVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"customButtonBarVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customButtonBarVariant(inValue.Cast< ::String >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_oldMessageLabelFactory") ) { _oldMessageLabelFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__customButtonBarVariant") ) { _hx___customButtonBarVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"customMessageLabelVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customMessageLabelVariant(inValue.Cast< ::String >()) ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__customMessageLabelVariant") ) { _hx___customMessageLabelVariant=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Alert_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_HEADER") ) { CHILD_VARIANT_HEADER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultHeaderFactory") ) { defaultHeaderFactory=ioValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"defaultButtonBarFactory") ) { defaultButtonBarFactory=ioValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_BUTTON_BAR") ) { CHILD_VARIANT_BUTTON_BAR=ioValue.Cast< ::String >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"defaultMessageLabelFactory") ) { defaultMessageLabelFactory=ioValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_MESSAGE_LABEL") ) { CHILD_VARIANT_MESSAGE_LABEL=ioValue.Cast< ::String >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_HEADER_FACTORY") ) { INVALIDATION_FLAG_HEADER_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_BUTTON_BAR_FACTORY") ) { INVALIDATION_FLAG_BUTTON_BAR_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY") ) { INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
	}
	return false;
}

void Alert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("messageLabel",ad,f6,4f,c6));
	outFields->push(HX_("_text",8c,e8,0a,00));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_htmlText",17,17,ce,57));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("alertHeader",09,c2,b4,ae));
	outFields->push(HX_("_titleText",26,36,47,cc));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("_oldMessageLabelFactory",d5,f0,42,4a));
	outFields->push(HX_("_messageLabelFactory",9e,44,d4,c6));
	outFields->push(HX_("messageLabelFactory",9d,2d,7b,c7));
	outFields->push(HX_("_oldHeaderFactory",f5,3f,1e,83));
	outFields->push(HX_("_headerFactory",fe,26,47,9d));
	outFields->push(HX_("headerFactory",bd,36,f5,5e));
	outFields->push(HX_("_oldButtonBarFactory",91,55,77,ac));
	outFields->push(HX_("_buttonBarFactory",28,ba,8b,11));
	outFields->push(HX_("buttonBarFactory",c9,cb,10,79));
	outFields->push(HX_("buttonBar",01,4b,fa,4f));
	outFields->push(HX_("_buttonsDataProvider",5d,d0,a3,da));
	outFields->push(HX_("buttonsDataProvider",5c,b9,4a,db));
	outFields->push(HX_("_iconMeasurements",6f,a8,d1,97));
	outFields->push(HX_("_currentIcon",53,6e,4e,e4));
	outFields->push(HX_("_ignoreIconResizes",55,46,52,72));
	outFields->push(HX_("icon",79,e7,b2,45));
	outFields->push(HX_("customButtonBarVariant",55,85,fa,e9));
	outFields->push(HX_("customHeaderVariant",07,68,eb,c9));
	outFields->push(HX_("customMessageLabelVariant",27,74,f6,3c));
	outFields->push(HX_("__icon",99,4a,ab,f4));
	outFields->push(HX_("__customButtonBarVariant",75,30,6a,67));
	outFields->push(HX_("__customHeaderVariant",e7,88,df,37));
	outFields->push(HX_("__customMessageLabelVariant",07,7d,8a,ab));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alert_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::Label */ ,(int)offsetof(Alert_obj,messageLabel),HX_("messageLabel",ad,f6,4f,c6)},
	{::hx::fsString,(int)offsetof(Alert_obj,_text),HX_("_text",8c,e8,0a,00)},
	{::hx::fsString,(int)offsetof(Alert_obj,_htmlText),HX_("_htmlText",17,17,ce,57)},
	{::hx::fsObject /*  ::feathers::controls::Header */ ,(int)offsetof(Alert_obj,alertHeader),HX_("alertHeader",09,c2,b4,ae)},
	{::hx::fsString,(int)offsetof(Alert_obj,_titleText),HX_("_titleText",26,36,47,cc)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_oldMessageLabelFactory),HX_("_oldMessageLabelFactory",d5,f0,42,4a)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_messageLabelFactory),HX_("_messageLabelFactory",9e,44,d4,c6)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_oldHeaderFactory),HX_("_oldHeaderFactory",f5,3f,1e,83)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_headerFactory),HX_("_headerFactory",fe,26,47,9d)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_oldButtonBarFactory),HX_("_oldButtonBarFactory",91,55,77,ac)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(Alert_obj,_buttonBarFactory),HX_("_buttonBarFactory",28,ba,8b,11)},
	{::hx::fsObject /*  ::feathers::controls::ButtonBar */ ,(int)offsetof(Alert_obj,buttonBar),HX_("buttonBar",01,4b,fa,4f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Alert_obj,_buttonsDataProvider),HX_("_buttonsDataProvider",5d,d0,a3,da)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(Alert_obj,_iconMeasurements),HX_("_iconMeasurements",6f,a8,d1,97)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Alert_obj,_currentIcon),HX_("_currentIcon",53,6e,4e,e4)},
	{::hx::fsBool,(int)offsetof(Alert_obj,_ignoreIconResizes),HX_("_ignoreIconResizes",55,46,52,72)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Alert_obj,_hx___icon),HX_("__icon",99,4a,ab,f4)},
	{::hx::fsString,(int)offsetof(Alert_obj,_hx___customButtonBarVariant),HX_("__customButtonBarVariant",75,30,6a,67)},
	{::hx::fsString,(int)offsetof(Alert_obj,_hx___customHeaderVariant),HX_("__customHeaderVariant",e7,88,df,37)},
	{::hx::fsString,(int)offsetof(Alert_obj,_hx___customMessageLabelVariant),HX_("__customMessageLabelVariant",07,7d,8a,ab)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Alert_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY,HX_("INVALIDATION_FLAG_BUTTON_BAR_FACTORY",a3,53,05,4f)},
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY,HX_("INVALIDATION_FLAG_HEADER_FACTORY",8a,75,ef,de)},
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY,HX_("INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY",95,71,54,74)},
	{::hx::fsString,(void *) &Alert_obj::CHILD_VARIANT_HEADER,HX_("CHILD_VARIANT_HEADER",0a,ac,e6,6e)},
	{::hx::fsString,(void *) &Alert_obj::CHILD_VARIANT_MESSAGE_LABEL,HX_("CHILD_VARIANT_MESSAGE_LABEL",1f,51,1f,09)},
	{::hx::fsString,(void *) &Alert_obj::CHILD_VARIANT_BUTTON_BAR,HX_("CHILD_VARIANT_BUTTON_BAR",a3,fa,10,fe)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(void *) &Alert_obj::defaultButtonBarFactory,HX_("defaultButtonBarFactory",aa,d2,d0,97)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(void *) &Alert_obj::defaultHeaderFactory,HX_("defaultHeaderFactory",3c,89,46,b0)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(void *) &Alert_obj::defaultMessageLabelFactory,HX_("defaultMessageLabelFactory",5c,e9,bb,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Alert_obj_sMemberFields[] = {
	HX_("messageLabel",ad,f6,4f,c6),
	HX_("_text",8c,e8,0a,00),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("_htmlText",17,17,ce,57),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("alertHeader",09,c2,b4,ae),
	HX_("_titleText",26,36,47,cc),
	HX_("get_titleText",3c,8e,08,32),
	HX_("set_titleText",48,70,0e,77),
	HX_("_oldMessageLabelFactory",d5,f0,42,4a),
	HX_("_messageLabelFactory",9e,44,d4,c6),
	HX_("get_messageLabelFactory",34,d4,d0,cf),
	HX_("set_messageLabelFactory",40,3d,32,d2),
	HX_("_oldHeaderFactory",f5,3f,1e,83),
	HX_("_headerFactory",fe,26,47,9d),
	HX_("get_headerFactory",14,42,65,65),
	HX_("set_headerFactory",20,1a,d3,88),
	HX_("_oldButtonBarFactory",91,55,77,ac),
	HX_("_buttonBarFactory",28,ba,8b,11),
	HX_("get_buttonBarFactory",d2,30,7b,97),
	HX_("set_buttonBarFactory",46,e8,32,64),
	HX_("buttonBar",01,4b,fa,4f),
	HX_("_buttonsDataProvider",5d,d0,a3,da),
	HX_("get_buttonsDataProvider",f3,5f,a0,e3),
	HX_("set_buttonsDataProvider",ff,c8,01,e6),
	HX_("_iconMeasurements",6f,a8,d1,97),
	HX_("_currentIcon",53,6e,4e,e4),
	HX_("_ignoreIconResizes",55,46,52,72),
	HX_("set_header",ca,17,05,f1),
	HX_("set_footer",d8,4c,9d,ef),
	HX_("initializeAlertTheme",7d,62,d4,06),
	HX_("update",09,86,05,87),
	HX_("createButtonBar",65,04,ef,f0),
	HX_("createHeader",a9,49,55,1f),
	HX_("createMessageLabel",c9,33,6e,c0),
	HX_("refreshButtons",a6,61,8a,3f),
	HX_("refreshText",28,5c,95,41),
	HX_("refreshTitleText",0a,2d,a8,20),
	HX_("refreshIcon",f4,76,4e,3a),
	HX_("getCurrentIcon",5c,13,e3,05),
	HX_("removeCurrentIcon",6e,5a,95,38),
	HX_("alert_buttonBar_itemTriggerHandler",a6,13,a5,d8),
	HX_("get_styleContext",47,7d,20,4b),
	HX_("__icon",99,4a,ab,f4),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("clearStyle_icon",74,b4,31,6c),
	HX_("__customButtonBarVariant",75,30,6a,67),
	HX_("get_customButtonBarVariant",1e,d7,ff,21),
	HX_("set_customButtonBarVariant",92,9d,94,81),
	HX_("clearStyle_customButtonBarVariant",10,2d,ef,e7),
	HX_("__customHeaderVariant",e7,88,df,37),
	HX_("get_customHeaderVariant",9e,0e,41,d2),
	HX_("set_customHeaderVariant",aa,77,a2,d4),
	HX_("clearStyle_customHeaderVariant",6c,6d,2a,4e),
	HX_("__customMessageLabelVariant",07,7d,8a,ab),
	HX_("get_customMessageLabelVariant",fe,a5,35,25),
	HX_("set_customMessageLabelVariant",0a,60,0d,e7),
	HX_("clearStyle_customMessageLabelVariant",4c,13,bf,4d),
	::String(null()) };

static void Alert_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY,"INVALIDATION_FLAG_BUTTON_BAR_FACTORY");
	HX_MARK_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY,"INVALIDATION_FLAG_HEADER_FACTORY");
	HX_MARK_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY,"INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY");
	HX_MARK_MEMBER_NAME(Alert_obj::CHILD_VARIANT_HEADER,"CHILD_VARIANT_HEADER");
	HX_MARK_MEMBER_NAME(Alert_obj::CHILD_VARIANT_MESSAGE_LABEL,"CHILD_VARIANT_MESSAGE_LABEL");
	HX_MARK_MEMBER_NAME(Alert_obj::CHILD_VARIANT_BUTTON_BAR,"CHILD_VARIANT_BUTTON_BAR");
	HX_MARK_MEMBER_NAME(Alert_obj::defaultButtonBarFactory,"defaultButtonBarFactory");
	HX_MARK_MEMBER_NAME(Alert_obj::defaultHeaderFactory,"defaultHeaderFactory");
	HX_MARK_MEMBER_NAME(Alert_obj::defaultMessageLabelFactory,"defaultMessageLabelFactory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alert_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_BUTTON_BAR_FACTORY,"INVALIDATION_FLAG_BUTTON_BAR_FACTORY");
	HX_VISIT_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_HEADER_FACTORY,"INVALIDATION_FLAG_HEADER_FACTORY");
	HX_VISIT_MEMBER_NAME(Alert_obj::INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY,"INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY");
	HX_VISIT_MEMBER_NAME(Alert_obj::CHILD_VARIANT_HEADER,"CHILD_VARIANT_HEADER");
	HX_VISIT_MEMBER_NAME(Alert_obj::CHILD_VARIANT_MESSAGE_LABEL,"CHILD_VARIANT_MESSAGE_LABEL");
	HX_VISIT_MEMBER_NAME(Alert_obj::CHILD_VARIANT_BUTTON_BAR,"CHILD_VARIANT_BUTTON_BAR");
	HX_VISIT_MEMBER_NAME(Alert_obj::defaultButtonBarFactory,"defaultButtonBarFactory");
	HX_VISIT_MEMBER_NAME(Alert_obj::defaultHeaderFactory,"defaultHeaderFactory");
	HX_VISIT_MEMBER_NAME(Alert_obj::defaultMessageLabelFactory,"defaultMessageLabelFactory");
};

#endif

::hx::Class Alert_obj::__mClass;

static ::String Alert_obj_sStaticFields[] = {
	HX_("INVALIDATION_FLAG_BUTTON_BAR_FACTORY",a3,53,05,4f),
	HX_("INVALIDATION_FLAG_HEADER_FACTORY",8a,75,ef,de),
	HX_("INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY",95,71,54,74),
	HX_("CHILD_VARIANT_HEADER",0a,ac,e6,6e),
	HX_("CHILD_VARIANT_MESSAGE_LABEL",1f,51,1f,09),
	HX_("CHILD_VARIANT_BUTTON_BAR",a3,fa,10,fe),
	HX_("show",fd,d4,52,4c),
	HX_("showAlert",1f,bd,f2,4f),
	HX_("defaultButtonBarFactory",aa,d2,d0,97),
	HX_("defaultHeaderFactory",3c,89,46,b0),
	HX_("defaultMessageLabelFactory",5c,e9,bb,ec),
	::String(null())
};

void Alert_obj::__register()
{
	Alert_obj _hx_dummy;
	Alert_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.Alert",02,11,c6,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Alert_obj::__GetStatic;
	__mClass->mSetStaticField = &Alert_obj::__SetStatic;
	__mClass->mMarkFunc = Alert_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Alert_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alert_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alert_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alert_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alert_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alert_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Alert_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_50_boot)
HXDLIN(  50)		INVALIDATION_FLAG_BUTTON_BAR_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("buttonBarFactory",c9,cb,10,79));
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_51_boot)
HXDLIN(  51)		INVALIDATION_FLAG_HEADER_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("headerFactory",bd,36,f5,5e));
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_52_boot)
HXDLIN(  52)		INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("messageLabelFactory",9d,2d,7b,c7));
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_66_boot)
HXDLIN(  66)		CHILD_VARIANT_HEADER = HX_("alert_header",50,a7,92,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_80_boot)
HXDLIN(  80)		CHILD_VARIANT_MESSAGE_LABEL = HX_("alert_messageLabel",b0,c8,0f,04);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_94_boot)
HXDLIN(  94)		CHILD_VARIANT_BUTTON_BAR = HX_("alert_buttonBar",1e,69,0c,71);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_130_boot)
HXDLIN( 130)		defaultButtonBarFactory = ::feathers::utils::DisplayObjectFactory_obj::withClass(::hx::ClassOf< ::feathers::controls::ButtonBar >(),null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_132_boot)
HXDLIN( 132)		defaultHeaderFactory = ::feathers::utils::DisplayObjectFactory_obj::withClass(::hx::ClassOf< ::feathers::controls::Header >(),null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_0ffa6226c514ba7c_134_boot)
HXDLIN( 134)		defaultMessageLabelFactory = ::feathers::utils::DisplayObjectFactory_obj::withClass(::hx::ClassOf< ::feathers::controls::Label >(),null());
            	}
}

} // end namespace feathers
} // end namespace controls
