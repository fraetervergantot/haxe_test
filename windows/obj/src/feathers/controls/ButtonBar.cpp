#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_ButtonBar
#include <feathers/controls/ButtonBar.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls__ButtonBar_ButtonStorage
#include <feathers/controls/_ButtonBar/ButtonStorage.h>
#endif
#ifndef INCLUDED_feathers_controls_dataRenderers_IDataRenderer
#include <feathers/controls/dataRenderers/IDataRenderer.h>
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
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
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
#ifndef INCLUDED_feathers_events_FlatCollectionEvent
#include <feathers/events/FlatCollectionEvent.h>
#endif
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutIndexObject
#include <feathers/layout/ILayoutIndexObject.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#include <feathers/layout/LayoutBoundsResult.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelButtonBarStyles
#include <feathers/themes/steel/components/SteelButtonBarStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectRecycler
#include <feathers/utils/DisplayObjectRecycler.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_feathers_data_ButtonBarItemState
#include <lime/utils/ObjectPool_feathers_data_ButtonBarItemState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7910d96b3492ddd6_275_new,"feathers.controls.ButtonBar","new",0x8a40d019,"feathers.controls.ButtonBar.new","feathers/controls/ButtonBar.hx",275,0x8cf93d57)
HX_DEFINE_STACK_FRAME(_hx_pos_7910d96b3492ddd6_74_new,"feathers.controls.ButtonBar","new",0x8a40d019,"feathers.controls.ButtonBar.new","feathers/controls/ButtonBar.hx",74,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_155_get_dataProvider,"feathers.controls.ButtonBar","get_dataProvider",0x9bb00aab,"feathers.controls.ButtonBar.get_dataProvider","feathers/controls/ButtonBar.hx",155,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_158_set_dataProvider,"feathers.controls.ButtonBar","set_dataProvider",0xf1f1f81f,"feathers.controls.ButtonBar.set_dataProvider","feathers/controls/ButtonBar.hx",158,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_208_get_buttonRecycler,"feathers.controls.ButtonBar","get_buttonRecycler",0xdd83da41,"feathers.controls.ButtonBar.get_buttonRecycler","feathers/controls/ButtonBar.hx",208,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_212_set_buttonRecycler,"feathers.controls.ButtonBar","set_buttonRecycler",0xba330cb5,"feathers.controls.ButtonBar.set_buttonRecycler","feathers/controls/ButtonBar.hx",212,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_259_get_buttonRecyclerIDFunction,"feathers.controls.ButtonBar","get_buttonRecyclerIDFunction",0xea720f94,"feathers.controls.ButtonBar.get_buttonRecyclerIDFunction","feathers/controls/ButtonBar.hx",259,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_262_set_buttonRecyclerIDFunction,"feathers.controls.ButtonBar","set_buttonRecyclerIDFunction",0xed9c5b08,"feathers.controls.ButtonBar.set_buttonRecyclerIDFunction","feathers/controls/ButtonBar.hx",262,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_304___default_itemToText,"feathers.controls.ButtonBar","__default_itemToText",0x5f26f680,"feathers.controls.ButtonBar.__default_itemToText","feathers/controls/ButtonBar.hx",304,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_380_itemToButton,"feathers.controls.ButtonBar","itemToButton",0xe1141727,"feathers.controls.ButtonBar.itemToButton","feathers/controls/ButtonBar.hx",380,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_390_indexToButton,"feathers.controls.ButtonBar","indexToButton",0x22ef03f8,"feathers.controls.ButtonBar.indexToButton","feathers/controls/ButtonBar.hx",390,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_407_getButtonRecycler,"feathers.controls.ButtonBar","getButtonRecycler",0x26e9c1c0,"feathers.controls.ButtonBar.getButtonRecycler","feathers/controls/ButtonBar.hx",407,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_427_setButtonRecycler,"feathers.controls.ButtonBar","setButtonRecycler",0x4a5799cc,"feathers.controls.ButtonBar.setButtonRecycler","feathers/controls/ButtonBar.hx",427,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_440_initializeButtonBarTheme,"feathers.controls.ButtonBar","initializeButtonBarTheme",0x12a7f05f,"feathers.controls.ButtonBar.initializeButtonBarTheme","feathers/controls/ButtonBar.hx",440,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_443_update,"feathers.controls.ButtonBar","update",0x004a5ff0,"feathers.controls.ButtonBar.update","feathers/controls/ButtonBar.hx",443,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_475_refreshViewPortBounds,"feathers.controls.ButtonBar","refreshViewPortBounds",0xd844d4cf,"feathers.controls.ButtonBar.refreshViewPortBounds","feathers/controls/ButtonBar.hx",475,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_478_handleLayout,"feathers.controls.ButtonBar","handleLayout",0xa2b09599,"feathers.controls.ButtonBar.handleLayout","feathers/controls/ButtonBar.hx",478,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_488_handleLayoutResult,"feathers.controls.ButtonBar","handleLayoutResult",0xdc3b2b56,"feathers.controls.ButtonBar.handleLayoutResult","feathers/controls/ButtonBar.hx",488,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_495_validateChildren,"feathers.controls.ButtonBar","validateChildren",0x30a40c9c,"feathers.controls.ButtonBar.validateChildren","feathers/controls/ButtonBar.hx",495,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_503_refreshButtons,"feathers.controls.ButtonBar","refreshButtons",0x96a5fa8d,"feathers.controls.ButtonBar.refreshButtons","feathers/controls/ButtonBar.hx",503,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_554_refreshInactiveButtons,"feathers.controls.ButtonBar","refreshInactiveButtons",0xccb0ca62,"feathers.controls.ButtonBar.refreshInactiveButtons","feathers/controls/ButtonBar.hx",554,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_568_recoverInactiveButtons,"feathers.controls.ButtonBar","recoverInactiveButtons",0x618a9bb9,"feathers.controls.ButtonBar.recoverInactiveButtons","feathers/controls/ButtonBar.hx",568,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_585_freeInactiveButtons,"feathers.controls.ButtonBar","freeInactiveButtons",0xbaaf4483,"feathers.controls.ButtonBar.freeInactiveButtons","feathers/controls/ButtonBar.hx",585,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_599_refreshBackgroundSkin,"feathers.controls.ButtonBar","refreshBackgroundSkin",0x501d9ebf,"feathers.controls.ButtonBar.refreshBackgroundSkin","feathers/controls/ButtonBar.hx",599,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_609_getCurrentBackgroundSkin,"feathers.controls.ButtonBar","getCurrentBackgroundSkin",0x5d18cad5,"feathers.controls.ButtonBar.getCurrentBackgroundSkin","feathers/controls/ButtonBar.hx",609,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_616_addCurrentBackgroundSkin,"feathers.controls.ButtonBar","addCurrentBackgroundSkin",0x8e941b6a,"feathers.controls.ButtonBar.addCurrentBackgroundSkin","feathers/controls/ButtonBar.hx",616,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_635_removeCurrentBackgroundSkin,"feathers.controls.ButtonBar","removeCurrentBackgroundSkin",0x4a5c9f79,"feathers.controls.ButtonBar.removeCurrentBackgroundSkin","feathers/controls/ButtonBar.hx",635,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_650_layoutBackgroundSkin,"feathers.controls.ButtonBar","layoutBackgroundSkin",0x4ce5fdfc,"feathers.controls.ButtonBar.layoutBackgroundSkin","feathers/controls/ButtonBar.hx",650,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_671_findUnrenderedData,"feathers.controls.ButtonBar","findUnrenderedData",0x37841c58,"feathers.controls.ButtonBar.findUnrenderedData","feathers/controls/ButtonBar.hx",671,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_710_renderUnrenderedData,"feathers.controls.ButtonBar","renderUnrenderedData",0xef5037f5,"feathers.controls.ButtonBar.renderUnrenderedData","feathers/controls/ButtonBar.hx",710,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_727_createButton,"feathers.controls.ButtonBar","createButton",0xf8016335,"feathers.controls.ButtonBar.createButton","feathers/controls/ButtonBar.hx",727,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_751_destroyButton,"feathers.controls.ButtonBar","destroyButton",0xfe573b85,"feathers.controls.ButtonBar.destroyButton","feathers/controls/ButtonBar.hx",751,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_758_itemStateToStorage,"feathers.controls.ButtonBar","itemStateToStorage",0x4c204389,"feathers.controls.ButtonBar.itemStateToStorage","feathers/controls/ButtonBar.hx",758,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_789_populateCurrentItemState,"feathers.controls.ButtonBar","populateCurrentItemState",0xf2803f36,"feathers.controls.ButtonBar.populateCurrentItemState","feathers/controls/ButtonBar.hx",789,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_797_updateButton,"feathers.controls.ButtonBar","updateButton",0xd56fca02,"feathers.controls.ButtonBar.updateButton","feathers/controls/ButtonBar.hx",797,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_808_resetButton,"feathers.controls.ButtonBar","resetButton",0xb7edc5da,"feathers.controls.ButtonBar.resetButton","feathers/controls/ButtonBar.hx",808,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_818_refreshButtonProperties,"feathers.controls.ButtonBar","refreshButtonProperties",0x851af2b9,"feathers.controls.ButtonBar.refreshButtonProperties","feathers/controls/ButtonBar.hx",818,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_838_buttonBar_button_triggerHandler,"feathers.controls.ButtonBar","buttonBar_button_triggerHandler",0x8ec1e09a,"feathers.controls.ButtonBar.buttonBar_button_triggerHandler","feathers/controls/ButtonBar.hx",838,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_845_buttonBar_dataProvider_changeHandler,"feathers.controls.ButtonBar","buttonBar_dataProvider_changeHandler",0x81f46d1b,"feathers.controls.ButtonBar.buttonBar_dataProvider_changeHandler","feathers/controls/ButtonBar.hx",845,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_848_updateButtonForIndex,"feathers.controls.ButtonBar","updateButtonForIndex",0x10b77b6b,"feathers.controls.ButtonBar.updateButtonForIndex","feathers/controls/ButtonBar.hx",848,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_868_buttonBar_dataProvider_updateItemHandler,"feathers.controls.ButtonBar","buttonBar_dataProvider_updateItemHandler",0x7ba074cf,"feathers.controls.ButtonBar.buttonBar_dataProvider_updateItemHandler","feathers/controls/ButtonBar.hx",868,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_872_buttonBar_dataProvider_updateAllHandler,"feathers.controls.ButtonBar","buttonBar_dataProvider_updateAllHandler",0x99386dd1,"feathers.controls.ButtonBar.buttonBar_dataProvider_updateAllHandler","feathers/controls/ButtonBar.hx",872,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_85_get_customButtonVariant,"feathers.controls.ButtonBar","get_customButtonVariant",0x61664f12,"feathers.controls.ButtonBar.get_customButtonVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_99_set_customButtonVariant,"feathers.controls.ButtonBar","set_customButtonVariant",0x63c7b81e,"feathers.controls.ButtonBar.set_customButtonVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_125_clearStyle_customButtonVariant,"feathers.controls.ButtonBar","clearStyle_customButtonVariant",0x213a328e,"feathers.controls.ButtonBar.clearStyle_customButtonVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_85_get_layout,"feathers.controls.ButtonBar","get_layout",0xa9f577da,"feathers.controls.ButtonBar.get_layout","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_99_set_layout,"feathers.controls.ButtonBar","set_layout",0xad73164e,"feathers.controls.ButtonBar.set_layout","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_125_clearStyle_layout,"feathers.controls.ButtonBar","clearStyle_layout",0x1324a1de,"feathers.controls.ButtonBar.clearStyle_layout","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_85_get_backgroundSkin,"feathers.controls.ButtonBar","get_backgroundSkin",0x2660debb,"feathers.controls.ButtonBar.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_99_set_backgroundSkin,"feathers.controls.ButtonBar","set_backgroundSkin",0x0310112f,"feathers.controls.ButtonBar.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_125_clearStyle_backgroundSkin,"feathers.controls.ButtonBar","clearStyle_backgroundSkin",0xbd8facbf,"feathers.controls.ButtonBar.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_85_get_disabledBackgroundSkin,"feathers.controls.ButtonBar","get_disabledBackgroundSkin",0x5a108557,"feathers.controls.ButtonBar.get_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_99_set_disabledBackgroundSkin,"feathers.controls.ButtonBar","set_disabledBackgroundSkin",0xb9a54bcb,"feathers.controls.ButtonBar.set_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_602a7d48bcdff012_125_clearStyle_disabledBackgroundSkin,"feathers.controls.ButtonBar","clearStyle_disabledBackgroundSkin",0x5d82f75b,"feathers.controls.ButtonBar.clearStyle_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ac83bec2568a33d8_42_get_styleContext,"feathers.controls.ButtonBar","get_styleContext",0x53015dee,"feathers.controls.ButtonBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_94_defaultUpdateButton,"feathers.controls.ButtonBar","defaultUpdateButton",0xf84a8cf5,"feathers.controls.ButtonBar.defaultUpdateButton","feathers/controls/ButtonBar.hx",94,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_98_defaultResetButton,"feathers.controls.ButtonBar","defaultResetButton",0xa36be247,"feathers.controls.ButtonBar.defaultResetButton","feathers/controls/ButtonBar.hx",98,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_74_boot,"feathers.controls.ButtonBar","boot",0x668e4659,"feathers.controls.ButtonBar.boot","feathers/controls/ButtonBar.hx",74,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_75_boot,"feathers.controls.ButtonBar","boot",0x668e4659,"feathers.controls.ButtonBar.boot","feathers/controls/ButtonBar.hx",75,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_89_boot,"feathers.controls.ButtonBar","boot",0x668e4659,"feathers.controls.ButtonBar.boot","feathers/controls/ButtonBar.hx",89,0x8cf93d57)
HX_LOCAL_STACK_FRAME(_hx_pos_7910d96b3492ddd6_91_boot,"feathers.controls.ButtonBar","boot",0x668e4659,"feathers.controls.ButtonBar.boot","feathers/controls/ButtonBar.hx",91,0x8cf93d57)
namespace feathers{
namespace controls{

void ButtonBar_obj::__construct(::Dynamic dataProvider, ::Dynamic itemTriggerListener){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::data::ButtonBarItemState _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_275_new)
HXLINE( 275)			return  ::feathers::data::ButtonBarItemState_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_74_new)
HXLINE( 367)		this->_hx___disabledBackgroundSkin = null();
HXLINE( 347)		this->_hx___backgroundSkin = null();
HXLINE( 325)		this->_hx___layout = null();
HXLINE( 192)		this->_hx___customButtonVariant = null();
HXLINE( 371)		this->_ignoreChildChanges = false;
HXLINE( 370)		this->_layoutResult =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
HXLINE( 369)		this->_layoutMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,null());
HXLINE( 328)		this->_backgroundSkinMeasurements = null();
HXLINE( 327)		this->_currentBackgroundSkin = null();
HXLINE( 279)		this->_ignoreSelectionChange = false;
HXLINE( 277)		this->_layoutItems = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 276)		this->_unrenderedData = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 275)		this->itemStatePool =  ::lime::utils::ObjectPool_feathers_data_ButtonBarItemState_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()),null(),null());
HXLINE( 274)		this->buttonToItemState =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 273)		this->dataToButton =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 272)		this->_additionalStorage = null();
HXLINE( 271)		this->_defaultStorage =  ::feathers::controls::_ButtonBar::ButtonStorage_obj::__alloc( HX_CTX ,null(),::feathers::utils::DisplayObjectRecycler_obj::withClass(::hx::ClassOf< ::feathers::controls::Button >(),null(),null(),null()));
HXLINE( 222)		this->_recyclerMap = null();
HXLINE( 177)		this->_previousCustomButtonVariant = null();
HXLINE( 107)		this->initializeButtonBarTheme();
HXLINE( 109)		super::__construct();
HXLINE( 111)		this->set_dataProvider(dataProvider);
HXLINE( 113)		if (::hx::IsNotNull( itemTriggerListener )) {
HXLINE( 114)			this->addEventListener(HX_("itemTrigger",65,d0,e1,83),itemTriggerListener,null(),null(),null());
            		}
            	}

Dynamic ButtonBar_obj::__CreateEmpty() { return new ButtonBar_obj; }

void *ButtonBar_obj::_hx_vtable = 0;

Dynamic ButtonBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonBar_obj > _hx_result = new ButtonBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ButtonBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2631e0fb) {
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
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2631e0fb;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

::Dynamic ButtonBar_obj::get_dataProvider(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_155_get_dataProvider)
HXDLIN( 155)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_dataProvider,return )

::Dynamic ButtonBar_obj::set_dataProvider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_158_set_dataProvider)
HXLINE( 159)		if (::hx::IsInstanceEq( this->_dataProvider,value )) {
HXLINE( 160)			return this->_dataProvider;
            		}
HXLINE( 162)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 163)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("change",70,91,72,b7),this->buttonBar_dataProvider_changeHandler_dyn(),null());
HXLINE( 164)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("updateItem",bc,af,74,fe),this->buttonBar_dataProvider_updateItemHandler_dyn(),null());
HXLINE( 165)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("updateAll",98,d6,d6,82),this->buttonBar_dataProvider_updateAllHandler_dyn(),null());
            		}
HXLINE( 167)		this->_dataProvider = value;
HXLINE( 168)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 169)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("change",70,91,72,b7),this->buttonBar_dataProvider_changeHandler_dyn(),null(),null(),null());
HXLINE( 170)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("updateItem",bc,af,74,fe),this->buttonBar_dataProvider_updateItemHandler_dyn(),null(),null(),null());
HXLINE( 171)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("updateAll",98,d6,d6,82),this->buttonBar_dataProvider_updateAllHandler_dyn(),null(),null(),null());
            		}
HXLINE( 173)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 174)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_dataProvider,return )

 ::feathers::utils::DisplayObjectRecycler ButtonBar_obj::get_buttonRecycler(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_208_get_buttonRecycler)
HXDLIN( 208)		return this->_defaultStorage->buttonRecycler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_buttonRecycler,return )

 ::feathers::utils::DisplayObjectRecycler ButtonBar_obj::set_buttonRecycler( ::feathers::utils::DisplayObjectRecycler value){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_212_set_buttonRecycler)
HXLINE( 213)		if (::hx::IsInstanceEq( this->_defaultStorage->buttonRecycler,value )) {
HXLINE( 214)			return this->_defaultStorage->buttonRecycler;
            		}
HXLINE( 216)		this->_defaultStorage->oldButtonRecycler = this->_defaultStorage->buttonRecycler;
HXLINE( 217)		this->_defaultStorage->buttonRecycler = value;
HXLINE( 218)		this->setInvalid(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
HXLINE( 219)		return this->_defaultStorage->buttonRecycler;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_buttonRecycler,return )

 ::Dynamic ButtonBar_obj::get_buttonRecyclerIDFunction(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_259_get_buttonRecyclerIDFunction)
HXDLIN( 259)		return this->_buttonRecyclerIDFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_buttonRecyclerIDFunction,return )

 ::Dynamic ButtonBar_obj::set_buttonRecyclerIDFunction( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_262_set_buttonRecyclerIDFunction)
HXLINE( 263)		if (::hx::IsEq( this->_buttonRecyclerIDFunction,value )) {
HXLINE( 264)			return this->_buttonRecyclerIDFunction;
            		}
HXLINE( 266)		this->_buttonRecyclerIDFunction = value;
HXLINE( 267)		this->setInvalid(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
HXLINE( 268)		return this->_buttonRecyclerIDFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_buttonRecyclerIDFunction,return )

HX_BEGIN_DEFAULT_FUNC(__default_itemToText,ButtonBar_obj)
::String _hx_run( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_304___default_itemToText)
HXDLIN( 304)		return ::Std_obj::string(data);
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

 ::feathers::controls::Button ButtonBar_obj::itemToButton( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_380_itemToButton)
HXDLIN( 380)		return ( ( ::feathers::controls::Button)(this->dataToButton->get(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,itemToButton,return )

 ::feathers::controls::Button ButtonBar_obj::indexToButton(int index){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_390_indexToButton)
HXLINE( 391)		bool _hx_tmp;
HXDLIN( 391)		bool _hx_tmp1;
HXDLIN( 391)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 391)			_hx_tmp1 = (index < 0);
            		}
            		else {
HXLINE( 391)			_hx_tmp1 = true;
            		}
HXDLIN( 391)		if (!(_hx_tmp1)) {
HXLINE( 391)			_hx_tmp = (index >= ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider));
            		}
            		else {
HXLINE( 391)			_hx_tmp = true;
            		}
HXDLIN( 391)		if (_hx_tmp) {
HXLINE( 392)			return null();
            		}
HXLINE( 394)		 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,index);
HXLINE( 395)		return ( ( ::feathers::controls::Button)(this->dataToButton->get(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,indexToButton,return )

 ::feathers::utils::DisplayObjectRecycler ButtonBar_obj::getButtonRecycler(::String id){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_407_getButtonRecycler)
HXLINE( 408)		if (::hx::IsNull( this->_recyclerMap )) {
HXLINE( 409)			return null();
            		}
HXLINE( 411)		return ( ( ::feathers::utils::DisplayObjectRecycler)(this->_recyclerMap->get(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,getButtonRecycler,return )

void ButtonBar_obj::setButtonRecycler(::String id, ::feathers::utils::DisplayObjectRecycler recycler){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_427_setButtonRecycler)
HXLINE( 428)		if (::hx::IsNull( this->_recyclerMap )) {
HXLINE( 429)			this->_recyclerMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 431)		if (::hx::IsNull( recycler )) {
HXLINE( 432)			this->_recyclerMap->remove(id);
HXLINE( 433)			return;
            		}
HXLINE( 435)		this->_recyclerMap->set(id,recycler);
HXLINE( 436)		this->setInvalid(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,setButtonRecycler,(void))

void ButtonBar_obj::initializeButtonBarTheme(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_440_initializeButtonBarTheme)
HXDLIN( 440)		::feathers::themes::steel::components::SteelButtonBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,initializeButtonBarTheme,(void))

void ButtonBar_obj::update(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_443_update)
HXLINE( 444)		bool dataInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 445)		bool layoutInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 446)		bool selectionInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 447)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 448)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 449)		::String _hx_tmp = this->_previousCustomButtonVariant;
HXDLIN( 449)		if ((_hx_tmp != this->get_customButtonVariant())) {
HXLINE( 450)			this->setInvalidationFlag(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
            		}
HXLINE( 452)		bool buttonsInvalid = this->isInvalid(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
HXLINE( 454)		bool _hx_tmp1;
HXDLIN( 454)		if (!(stylesInvalid)) {
HXLINE( 454)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 454)			_hx_tmp1 = true;
            		}
HXDLIN( 454)		if (_hx_tmp1) {
HXLINE( 455)			this->refreshBackgroundSkin();
            		}
HXLINE( 458)		bool _hx_tmp2;
HXDLIN( 458)		bool _hx_tmp3;
HXDLIN( 458)		bool _hx_tmp4;
HXDLIN( 458)		if (!(buttonsInvalid)) {
HXLINE( 458)			_hx_tmp4 = selectionInvalid;
            		}
            		else {
HXLINE( 458)			_hx_tmp4 = true;
            		}
HXDLIN( 458)		if (!(_hx_tmp4)) {
HXLINE( 458)			_hx_tmp3 = stateInvalid;
            		}
            		else {
HXLINE( 458)			_hx_tmp3 = true;
            		}
HXDLIN( 458)		if (!(_hx_tmp3)) {
HXLINE( 458)			_hx_tmp2 = dataInvalid;
            		}
            		else {
HXLINE( 458)			_hx_tmp2 = true;
            		}
HXDLIN( 458)		if (_hx_tmp2) {
HXLINE( 459)			this->refreshButtons();
            		}
HXLINE( 462)		this->refreshViewPortBounds();
HXLINE( 463)		this->handleLayout();
HXLINE( 464)		this->handleLayoutResult();
HXLINE( 466)		this->layoutBackgroundSkin();
HXLINE( 469)		this->validateChildren();
HXLINE( 471)		this->_previousCustomButtonVariant = this->get_customButtonVariant();
            	}


void ButtonBar_obj::refreshViewPortBounds(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_475_refreshViewPortBounds)
HXDLIN( 475)		this->_layoutMeasurements->save(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,refreshViewPortBounds,(void))

void ButtonBar_obj::handleLayout(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_478_handleLayout)
HXLINE( 479)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 480)		this->_ignoreChildChanges = true;
HXLINE( 481)		this->_layoutResult->reset();
HXLINE( 482)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE( 483)			::feathers::layout::ILayout_obj::layout(this->get_layout(),this->_layoutItems,this->_layoutMeasurements,this->_layoutResult);
            		}
HXLINE( 485)		this->_ignoreChildChanges = oldIgnoreChildChanges;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,handleLayout,(void))

void ButtonBar_obj::handleLayoutResult(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_488_handleLayoutResult)
HXLINE( 489)		Float viewPortWidth = this->_layoutResult->viewPortWidth;
HXLINE( 490)		Float viewPortHeight = this->_layoutResult->viewPortHeight;
HXLINE( 491)		this->saveMeasurements(viewPortWidth,viewPortHeight,viewPortWidth,viewPortHeight,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,handleLayoutResult,(void))

void ButtonBar_obj::validateChildren(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_495_validateChildren)
HXDLIN( 495)		int _g = 0;
HXDLIN( 495)		::Array< ::Dynamic> _g1 = this->_layoutItems;
HXDLIN( 495)		while((_g < _g1->length)){
HXDLIN( 495)			 ::openfl::display::DisplayObject button = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 495)			_g = (_g + 1);
HXLINE( 496)			if (!(::Std_obj::isOfType(button,::hx::ClassOf< ::feathers::core::IValidating >()))) {
HXLINE( 497)				return;
            			}
HXLINE( 499)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(button,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,validateChildren,(void))

void ButtonBar_obj::refreshButtons(){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_503_refreshButtons)
HXLINE( 504)		if (::hx::IsNull( this->get_buttonRecycler()->update )) {
HXLINE( 505)			this->get_buttonRecycler()->update = ::feathers::controls::ButtonBar_obj::defaultUpdateButton_dyn();
HXLINE( 506)			if (::hx::IsNull( this->get_buttonRecycler()->reset )) {
HXLINE( 507)				this->get_buttonRecycler()->reset = ::feathers::controls::ButtonBar_obj::defaultResetButton_dyn();
            			}
            		}
HXLINE( 510)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 511)			int _g = 0;
HXDLIN( 511)			int _g1 = this->_additionalStorage->length;
HXDLIN( 511)			while((_g < _g1)){
HXLINE( 511)				_g = (_g + 1);
HXDLIN( 511)				int i = (_g - 1);
HXLINE( 512)				 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_ButtonBar::ButtonStorage >();
HXLINE( 513)				if (::hx::IsNull( storage->buttonRecycler->update )) {
HXLINE( 514)					storage->buttonRecycler->update = ::feathers::controls::ButtonBar_obj::defaultUpdateButton_dyn();
HXLINE( 515)					if (::hx::IsNull( storage->buttonRecycler->reset )) {
HXLINE( 516)						storage->buttonRecycler->reset = ::feathers::controls::ButtonBar_obj::defaultResetButton_dyn();
            					}
            				}
            			}
            		}
HXLINE( 522)		bool buttonsInvalid = this->isInvalid(::feathers::controls::ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY);
HXLINE( 523)		this->refreshInactiveButtons(this->_defaultStorage,buttonsInvalid);
HXLINE( 524)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 525)			int _g = 0;
HXDLIN( 525)			int _g1 = this->_additionalStorage->length;
HXDLIN( 525)			while((_g < _g1)){
HXLINE( 525)				_g = (_g + 1);
HXDLIN( 525)				int i = (_g - 1);
HXLINE( 526)				 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_ButtonBar::ButtonStorage >();
HXLINE( 527)				this->refreshInactiveButtons(storage,buttonsInvalid);
            			}
            		}
HXLINE( 530)		this->findUnrenderedData();
HXLINE( 531)		this->recoverInactiveButtons(this->_defaultStorage);
HXLINE( 532)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 533)			int _g = 0;
HXDLIN( 533)			int _g1 = this->_additionalStorage->length;
HXDLIN( 533)			while((_g < _g1)){
HXLINE( 533)				_g = (_g + 1);
HXDLIN( 533)				int i = (_g - 1);
HXLINE( 534)				 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_ButtonBar::ButtonStorage >();
HXLINE( 535)				this->recoverInactiveButtons(storage);
            			}
            		}
HXLINE( 538)		this->renderUnrenderedData();
HXLINE( 539)		this->freeInactiveButtons(this->_defaultStorage);
HXLINE( 540)		if ((this->_defaultStorage->inactiveButtons->length > 0)) {
HXLINE( 541)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": inactive buttons should be empty after updating.",d3,a1,e5,c9))));
            		}
HXLINE( 543)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 544)			int _g = 0;
HXDLIN( 544)			int _g1 = this->_additionalStorage->length;
HXDLIN( 544)			while((_g < _g1)){
HXLINE( 544)				_g = (_g + 1);
HXDLIN( 544)				int i = (_g - 1);
HXLINE( 545)				 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_ButtonBar::ButtonStorage >();
HXLINE( 546)				this->freeInactiveButtons(storage);
HXLINE( 547)				if ((storage->inactiveButtons->length > 0)) {
HXLINE( 548)					::String _hx_tmp = ((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": inactive buttons ",ae,5c,89,0b));
HXDLIN( 548)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((_hx_tmp + storage->id) + HX_(" should be empty after updating.",a1,aa,db,3b))));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,refreshButtons,(void))

void ButtonBar_obj::refreshInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage,bool factoryInvalid){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_554_refreshInactiveButtons)
HXLINE( 555)		::Array< ::Dynamic> temp = storage->inactiveButtons;
HXLINE( 556)		storage->inactiveButtons = storage->activeButtons;
HXLINE( 557)		storage->activeButtons = temp;
HXLINE( 558)		if ((storage->activeButtons->length > 0)) {
HXLINE( 559)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": active buttons should be empty before updating.",fd,60,99,eb))));
            		}
HXLINE( 561)		if (factoryInvalid) {
HXLINE( 562)			this->recoverInactiveButtons(storage);
HXLINE( 563)			this->freeInactiveButtons(storage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,refreshInactiveButtons,(void))

void ButtonBar_obj::recoverInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_568_recoverInactiveButtons)
HXDLIN( 568)		int _g = 0;
HXDLIN( 568)		::Array< ::Dynamic> _g1 = storage->inactiveButtons;
HXDLIN( 568)		while((_g < _g1->length)){
HXDLIN( 568)			 ::feathers::controls::Button button = _g1->__get(_g).StaticCast<  ::feathers::controls::Button >();
HXDLIN( 568)			_g = (_g + 1);
HXLINE( 569)			if (::hx::IsNull( button )) {
HXLINE( 570)				continue;
            			}
HXLINE( 572)			 ::feathers::data::ButtonBarItemState state = ( ( ::feathers::data::ButtonBarItemState)(this->buttonToItemState->get(button)) );
HXLINE( 573)			if (::hx::IsNull( state )) {
HXLINE( 574)				return;
            			}
HXLINE( 576)			 ::Dynamic item = state->data;
HXLINE( 577)			this->buttonToItemState->remove(button);
HXLINE( 578)			this->dataToButton->remove(item);
HXLINE( 579)			button->removeEventListener(HX_("trigger",38,55,df,25),this->buttonBar_button_triggerHandler_dyn(),null());
HXLINE( 580)			this->resetButton(button,state);
HXLINE( 581)			this->itemStatePool->release(state);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,recoverInactiveButtons,(void))

void ButtonBar_obj::freeInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_585_freeInactiveButtons)
HXLINE( 586)		{
HXLINE( 586)			int _g = 0;
HXDLIN( 586)			::Array< ::Dynamic> _g1 = storage->inactiveButtons;
HXDLIN( 586)			while((_g < _g1->length)){
HXLINE( 586)				 ::feathers::controls::Button button = _g1->__get(_g).StaticCast<  ::feathers::controls::Button >();
HXDLIN( 586)				_g = (_g + 1);
HXLINE( 587)				if (::hx::IsNull( button )) {
HXLINE( 588)					continue;
            				}
HXLINE( 590)				this->destroyButton(button);
            			}
            		}
HXLINE( 595)		storage->inactiveButtons->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,freeInactiveButtons,(void))

void ButtonBar_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_599_refreshBackgroundSkin)
HXLINE( 600)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 601)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 602)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 603)			return;
            		}
HXLINE( 605)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 606)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject ButtonBar_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_609_getCurrentBackgroundSkin)
HXLINE( 610)		bool _hx_tmp;
HXDLIN( 610)		if (!(this->_enabled)) {
HXLINE( 610)			_hx_tmp = ::hx::IsNotNull( this->get_disabledBackgroundSkin() );
            		}
            		else {
HXLINE( 610)			_hx_tmp = false;
            		}
HXDLIN( 610)		if (_hx_tmp) {
HXLINE( 611)			return this->get_disabledBackgroundSkin();
            		}
HXLINE( 613)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,getCurrentBackgroundSkin,return )

void ButtonBar_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_616_addCurrentBackgroundSkin)
HXLINE( 617)		if (::hx::IsNull( skin )) {
HXLINE( 618)			this->_backgroundSkinMeasurements = null();
HXLINE( 619)			return;
            		}
HXLINE( 621)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 622)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 624)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 625)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 627)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 629)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 630)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 632)		this->addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,addCurrentBackgroundSkin,(void))

void ButtonBar_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_635_removeCurrentBackgroundSkin)
HXLINE( 636)		if (::hx::IsNull( skin )) {
HXLINE( 637)			return;
            		}
HXLINE( 639)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 640)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 644)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 645)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 646)			this->removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,removeCurrentBackgroundSkin,(void))

void ButtonBar_obj::layoutBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_650_layoutBackgroundSkin)
HXLINE( 651)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 652)			return;
            		}
HXLINE( 654)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 655)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 660)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 660)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 661)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 663)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 663)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 664)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 666)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 667)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,layoutBackgroundSkin,(void))

void ButtonBar_obj::findUnrenderedData(){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_671_findUnrenderedData)
HXLINE( 676)		this->_layoutItems->resize(0);
HXLINE( 678)		bool _hx_tmp;
HXDLIN( 678)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 678)			_hx_tmp = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0);
            		}
            		else {
HXLINE( 678)			_hx_tmp = true;
            		}
HXDLIN( 678)		if (_hx_tmp) {
HXLINE( 679)			return;
            		}
HXLINE( 681)		::Array< ::Dynamic> _hx_tmp1 = this->_layoutItems;
HXDLIN( 681)		_hx_tmp1->resize(::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider));
HXLINE( 683)		int depthOffset;
HXDLIN( 683)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 683)			depthOffset = 1;
            		}
            		else {
HXLINE( 683)			depthOffset = 0;
            		}
HXLINE( 684)		{
HXLINE( 684)			int _g = 0;
HXDLIN( 684)			int _g1 = ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider);
HXDLIN( 684)			while((_g < _g1)){
HXLINE( 684)				_g = (_g + 1);
HXDLIN( 684)				int i = (_g - 1);
HXLINE( 685)				 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,i);
HXLINE( 686)				 ::feathers::controls::Button button = ( ( ::feathers::controls::Button)(this->dataToButton->get(item)) );
HXLINE( 687)				if (::hx::IsNotNull( button )) {
HXLINE( 688)					 ::feathers::data::ButtonBarItemState state = ( ( ::feathers::data::ButtonBarItemState)(this->buttonToItemState->get(button)) );
HXLINE( 689)					this->populateCurrentItemState(item,i,state);
HXLINE( 690)					::String oldRecyclerID = state->recyclerID;
HXLINE( 691)					 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->itemStateToStorage(state);
HXLINE( 692)					if ((storage->id != oldRecyclerID)) {
HXLINE( 693)						this->_unrenderedData->push(item);
HXLINE( 694)						continue;
            					}
HXLINE( 696)					this->updateButton(button,state,storage);
HXLINE( 697)					this->_layoutItems[i] = button;
HXLINE( 698)					this->setChildIndex(button,(i + depthOffset));
HXLINE( 699)					bool removed = storage->inactiveButtons->remove(button);
HXLINE( 700)					if (!(removed)) {
HXLINE( 701)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": button renderer map contains bad data for item at index ",18,ab,b5,fd)) + i) + HX_(". This may be caused by duplicate items in the data provider, which is not allowed.",2a,50,89,94))));
            					}
HXLINE( 703)					storage->activeButtons->push(button);
            				}
            				else {
HXLINE( 705)					this->_unrenderedData->push(item);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,findUnrenderedData,(void))

void ButtonBar_obj::renderUnrenderedData(){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_710_renderUnrenderedData)
HXLINE( 711)		int depthOffset;
HXDLIN( 711)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 711)			depthOffset = 1;
            		}
            		else {
HXLINE( 711)			depthOffset = 0;
            		}
HXLINE( 712)		{
HXLINE( 712)			int _g = 0;
HXDLIN( 712)			::cpp::VirtualArray _g1 = this->_unrenderedData;
HXDLIN( 712)			while((_g < _g1->get_length())){
HXLINE( 712)				 ::Dynamic item = _g1->__get(_g);
HXDLIN( 712)				_g = (_g + 1);
HXLINE( 713)				int index = ::feathers::data::IFlatCollection_obj::indexOf(this->_dataProvider,item);
HXLINE( 714)				 ::feathers::data::ButtonBarItemState state = this->itemStatePool->get();
HXLINE( 715)				this->populateCurrentItemState(item,index,state);
HXLINE( 716)				 ::feathers::controls::Button button = this->createButton(state);
HXLINE( 717)				this->addChildAt(button,(index + depthOffset));
HXLINE( 718)				this->_layoutItems[index] = button;
            			}
            		}
HXLINE( 723)		this->_unrenderedData->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,renderUnrenderedData,(void))

 ::feathers::controls::Button ButtonBar_obj::createButton( ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_727_createButton)
HXLINE( 728)		 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->itemStateToStorage(state);
HXLINE( 729)		 ::feathers::controls::Button button = null();
HXLINE( 730)		if ((storage->inactiveButtons->length == 0)) {
HXLINE( 731)			button = ( ( ::feathers::controls::Button)(this->get_buttonRecycler()->create()) );
HXLINE( 732)			if (::hx::IsNull( button->get_variant() )) {
HXLINE( 734)				::String variant;
HXDLIN( 734)				if (::hx::IsNotNull( this->get_customButtonVariant() )) {
HXLINE( 734)					variant = this->get_customButtonVariant();
            				}
            				else {
HXLINE( 734)					variant = ::feathers::controls::ButtonBar_obj::CHILD_VARIANT_BUTTON;
            				}
HXLINE( 735)				button->set_variant(variant);
            			}
HXLINE( 739)			button->initializeNow();
            		}
            		else {
HXLINE( 741)			button = storage->inactiveButtons->shift().StaticCast<  ::feathers::controls::Button >();
            		}
HXLINE( 743)		this->updateButton(button,state,storage);
HXLINE( 744)		button->addEventListener(HX_("trigger",38,55,df,25),this->buttonBar_button_triggerHandler_dyn(),null(),null(),null());
HXLINE( 745)		this->buttonToItemState->set(button,state);
HXLINE( 746)		this->dataToButton->set(state->data,button);
HXLINE( 747)		storage->activeButtons->push(button);
HXLINE( 748)		return button;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,createButton,return )

void ButtonBar_obj::destroyButton( ::feathers::controls::Button button){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_751_destroyButton)
HXLINE( 752)		this->removeChild(button);
HXLINE( 753)		if (::hx::IsNotNull( this->get_buttonRecycler()->destroy )) {
HXLINE( 754)			this->get_buttonRecycler()->destroy(button);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,destroyButton,(void))

 ::feathers::controls::_ButtonBar::ButtonStorage ButtonBar_obj::itemStateToStorage( ::feathers::data::ButtonBarItemState state){
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_758_itemStateToStorage)
HXLINE( 759)		::String recyclerID = null();
HXLINE( 760)		if (::hx::IsNotNull( this->_buttonRecyclerIDFunction )) {
HXLINE( 761)			recyclerID = ( (::String)(this->_buttonRecyclerIDFunction(state)) );
            		}
HXLINE( 763)		 ::feathers::utils::DisplayObjectRecycler recycler = null();
HXLINE( 764)		if (::hx::IsNotNull( recyclerID )) {
HXLINE( 765)			if (::hx::IsNotNull( this->_recyclerMap )) {
HXLINE( 766)				recycler = ( ( ::feathers::utils::DisplayObjectRecycler)(this->_recyclerMap->get(recyclerID)) );
            			}
HXLINE( 768)			if (::hx::IsNull( recycler )) {
HXLINE( 769)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("Item renderer recycler ID \"",0e,89,74,61) + recyclerID) + HX_("\" is not registered.",e7,6a,df,d7))));
            			}
            		}
HXLINE( 772)		if (::hx::IsNull( recycler )) {
HXLINE( 773)			return this->_defaultStorage;
            		}
HXLINE( 775)		if (::hx::IsNull( this->_additionalStorage )) {
HXLINE( 776)			this->_additionalStorage = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 778)		{
HXLINE( 778)			int _g = 0;
HXDLIN( 778)			int _g1 = this->_additionalStorage->length;
HXDLIN( 778)			while((_g < _g1)){
HXLINE( 778)				_g = (_g + 1);
HXDLIN( 778)				int i = (_g - 1);
HXLINE( 779)				 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_ButtonBar::ButtonStorage >();
HXLINE( 780)				if (::hx::IsInstanceEq( storage->buttonRecycler,recycler )) {
HXLINE( 781)					return storage;
            				}
            			}
            		}
HXLINE( 784)		 ::feathers::controls::_ButtonBar::ButtonStorage storage =  ::feathers::controls::_ButtonBar::ButtonStorage_obj::__alloc( HX_CTX ,recyclerID,recycler);
HXLINE( 785)		this->_additionalStorage->push(storage);
HXLINE( 786)		return storage;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,itemStateToStorage,return )

void ButtonBar_obj::populateCurrentItemState( ::Dynamic item,int index, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_789_populateCurrentItemState)
HXLINE( 790)		state->owner = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 791)		state->data = item;
HXLINE( 792)		state->index = index;
HXLINE( 793)		state->enabled = this->_enabled;
HXLINE( 794)		state->text = ( (::String)(this->itemToText(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(ButtonBar_obj,populateCurrentItemState,(void))

void ButtonBar_obj::updateButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state, ::feathers::controls::_ButtonBar::ButtonStorage storage){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_797_updateButton)
HXLINE( 798)		state->recyclerID = storage->id;
HXLINE( 799)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 800)		this->_ignoreSelectionChange = true;
HXLINE( 801)		if (::hx::IsNotNull( this->get_buttonRecycler()->update )) {
HXLINE( 802)			this->get_buttonRecycler()->update(button,state);
            		}
HXLINE( 804)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
HXLINE( 805)		this->refreshButtonProperties(button,state);
            	}


HX_DEFINE_DYNAMIC_FUNC3(ButtonBar_obj,updateButton,(void))

void ButtonBar_obj::resetButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_808_resetButton)
HXLINE( 809)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 810)		this->_ignoreSelectionChange = true;
HXLINE( 811)		bool _hx_tmp;
HXDLIN( 811)		if (::hx::IsNotNull( this->get_buttonRecycler() )) {
HXLINE( 811)			_hx_tmp = ::hx::IsNotNull( this->get_buttonRecycler()->reset );
            		}
            		else {
HXLINE( 811)			_hx_tmp = false;
            		}
HXDLIN( 811)		if (_hx_tmp) {
HXLINE( 812)			this->get_buttonRecycler()->reset(button,state);
            		}
HXLINE( 814)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
HXLINE( 815)		this->refreshButtonProperties(button,::feathers::controls::ButtonBar_obj::RESET_BUTTON_STATE);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,resetButton,(void))

void ButtonBar_obj::refreshButtonProperties( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_818_refreshButtonProperties)
HXLINE( 819)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 820)		this->_ignoreSelectionChange = true;
HXLINE( 821)		if (::Std_obj::isOfType(button,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 822)			::Dynamic uiControl =  ::hx::interface_check(button,0x2696a04f);
HXLINE( 823)			::feathers::core::IUIControl_obj::set_enabled(uiControl,state->enabled);
            		}
HXLINE( 825)		if (::Std_obj::isOfType(button,::hx::ClassOf< ::feathers::controls::dataRenderers::IDataRenderer >())) {
HXLINE( 826)			::Dynamic dataRenderer =  ::hx::interface_check(button,0x70798096);
HXLINE( 828)			::feathers::controls::dataRenderers::IDataRenderer_obj::set_data(dataRenderer,state->data);
            		}
HXLINE( 830)		if (::Std_obj::isOfType(button,::hx::ClassOf< ::feathers::layout::ILayoutIndexObject >())) {
HXLINE( 831)			::Dynamic layoutObject =  ::hx::interface_check(button,0xe7561c78);
HXLINE( 832)			::feathers::layout::ILayoutIndexObject_obj::set_layoutIndex(layoutObject,state->index);
            		}
HXLINE( 834)		button->set_enabled(state->enabled);
HXLINE( 835)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,refreshButtonProperties,(void))

void ButtonBar_obj::buttonBar_button_triggerHandler( ::feathers::events::TriggerEvent event){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_838_buttonBar_button_triggerHandler)
HXLINE( 839)		 ::feathers::controls::Button button = ::hx::TCast<  ::feathers::controls::Button >::cast(event->currentTarget);
HXLINE( 840)		 ::feathers::data::ButtonBarItemState state = ( ( ::feathers::data::ButtonBarItemState)(this->buttonToItemState->get(button)) );
HXLINE( 841)		::feathers::events::ButtonBarEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("itemTrigger",65,d0,e1,83),state);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,buttonBar_button_triggerHandler,(void))

void ButtonBar_obj::buttonBar_dataProvider_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_845_buttonBar_dataProvider_changeHandler)
HXDLIN( 845)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,buttonBar_dataProvider_changeHandler,(void))

void ButtonBar_obj::updateButtonForIndex(int index){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_848_updateButtonForIndex)
HXLINE( 849)		 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,index);
HXLINE( 850)		 ::feathers::controls::Button button = ( ( ::feathers::controls::Button)(this->dataToButton->get(item)) );
HXLINE( 851)		if (::hx::IsNull( button )) {
HXLINE( 853)			this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 854)			return;
            		}
HXLINE( 856)		 ::feathers::data::ButtonBarItemState state = ( ( ::feathers::data::ButtonBarItemState)(this->buttonToItemState->get(button)) );
HXLINE( 857)		 ::feathers::controls::_ButtonBar::ButtonStorage storage = this->itemStateToStorage(state);
HXLINE( 858)		this->populateCurrentItemState(item,index,state);
HXLINE( 862)		this->resetButton(button,state);
HXLINE( 863)		this->updateButton(button,state,storage);
HXLINE( 864)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,updateButtonForIndex,(void))

void ButtonBar_obj::buttonBar_dataProvider_updateItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_868_buttonBar_dataProvider_updateItemHandler)
HXDLIN( 868)		this->updateButtonForIndex(event->index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,buttonBar_dataProvider_updateItemHandler,(void))

void ButtonBar_obj::buttonBar_dataProvider_updateAllHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_872_buttonBar_dataProvider_updateAllHandler)
HXDLIN( 872)		int _g = 0;
HXDLIN( 872)		int _g1 = ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider);
HXDLIN( 872)		while((_g < _g1)){
HXDLIN( 872)			_g = (_g + 1);
HXDLIN( 872)			int i = (_g - 1);
HXLINE( 873)			this->updateButtonForIndex(i);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,buttonBar_dataProvider_updateAllHandler,(void))

::String ButtonBar_obj::get_customButtonVariant(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_85_get_customButtonVariant)
HXDLIN(  85)		return this->_hx___customButtonVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_customButtonVariant,return )

::String ButtonBar_obj::set_customButtonVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_99_set_customButtonVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customButtonVariant",42,16,2d,31),null()))) {
HXLINE( 101)			return this->_hx___customButtonVariant;
            		}
HXLINE( 103)		if ((this->_hx___customButtonVariant == value)) {
HXLINE( 104)			return this->_hx___customButtonVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customButtonVariant_dyn();
HXLINE( 110)		this->_hx___customButtonVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customButtonVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_customButtonVariant,return )

::String ButtonBar_obj::clearStyle_customButtonVariant(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_125_clearStyle_customButtonVariant)
HXLINE( 126)		this->set_customButtonVariant(null());
HXLINE( 127)		return this->get_customButtonVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,clearStyle_customButtonVariant,return )

::Dynamic ButtonBar_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_85_get_layout)
HXDLIN(  85)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_layout,return )

::Dynamic ButtonBar_obj::set_layout(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_99_set_layout)
HXLINE( 100)		if (!(this->setStyle(HX_("layout",aa,ae,b8,58),null()))) {
HXLINE( 101)			return this->_hx___layout;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___layout,value )) {
HXLINE( 104)			return this->_hx___layout;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_layout_dyn();
HXLINE( 110)		this->_hx___layout = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_layout,return )

::Dynamic ButtonBar_obj::clearStyle_layout(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_125_clearStyle_layout)
HXLINE( 126)		this->set_layout(null());
HXLINE( 127)		return this->get_layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,clearStyle_layout,return )

 ::openfl::display::DisplayObject ButtonBar_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject ButtonBar_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_99_set_backgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("backgroundSkin",8b,65,6f,20),null()))) {
HXLINE( 101)			return this->_hx___backgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___backgroundSkin,value )) {
HXLINE( 104)			return this->_hx___backgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_backgroundSkin_dyn();
HXLINE( 110)		this->_hx___backgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject ButtonBar_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject ButtonBar_obj::get_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_85_get_disabledBackgroundSkin)
HXDLIN(  85)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,get_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject ButtonBar_obj::set_disabledBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_99_set_disabledBackgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("disabledBackgroundSkin",27,5c,3a,d3),null()))) {
HXLINE( 101)			return this->_hx___disabledBackgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___disabledBackgroundSkin,value )) {
HXLINE( 104)			return this->_hx___disabledBackgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_disabledBackgroundSkin_dyn();
HXLINE( 110)		this->_hx___disabledBackgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonBar_obj,set_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject ButtonBar_obj::clearStyle_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_602a7d48bcdff012_125_clearStyle_disabledBackgroundSkin)
HXLINE( 126)		this->set_disabledBackgroundSkin(null());
HXLINE( 127)		return this->get_disabledBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ButtonBar_obj,clearStyle_disabledBackgroundSkin,return )

::hx::Class ButtonBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_ac83bec2568a33d8_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::ButtonBar >();
            	}


 ::feathers::core::InvalidationFlag ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY;

::String ButtonBar_obj::CHILD_VARIANT_BUTTON;

 ::feathers::data::ButtonBarItemState ButtonBar_obj::RESET_BUTTON_STATE;

void ButtonBar_obj::defaultUpdateButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_94_defaultUpdateButton)
HXDLIN(  94)		button->set_text(state->text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,defaultUpdateButton,(void))

void ButtonBar_obj::defaultResetButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_98_defaultResetButton)
HXDLIN(  98)		button->set_text(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ButtonBar_obj,defaultResetButton,(void))


void ButtonBar_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,ButtonBar_obj *_hx_obj) {
	if (!_hx_obj->itemToText.mPtr) _hx_obj->itemToText = new __default_itemToText(_hx_obj);
}
::hx::ObjectPtr< ButtonBar_obj > ButtonBar_obj::__new(::Dynamic dataProvider, ::Dynamic itemTriggerListener) {
	::hx::ObjectPtr< ButtonBar_obj > __this = new ButtonBar_obj();
	__this->__construct(dataProvider,itemTriggerListener);
	return __this;
}

::hx::ObjectPtr< ButtonBar_obj > ButtonBar_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider, ::Dynamic itemTriggerListener) {
	ButtonBar_obj *__this = (ButtonBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonBar_obj), true, "feathers.controls.ButtonBar"));
	*(void **)__this = ButtonBar_obj::_hx_vtable;
	feathers::controls::ButtonBar_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(dataProvider,itemTriggerListener);
	return __this;
}

ButtonBar_obj::ButtonBar_obj()
{
	itemToText = new __default_itemToText(this);
}

void ButtonBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonBar);
	HX_MARK_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_MARK_MEMBER_NAME(_previousCustomButtonVariant,"_previousCustomButtonVariant");
	HX_MARK_MEMBER_NAME(_recyclerMap,"_recyclerMap");
	HX_MARK_MEMBER_NAME(_buttonRecyclerIDFunction,"_buttonRecyclerIDFunction");
	HX_MARK_MEMBER_NAME(_defaultStorage,"_defaultStorage");
	HX_MARK_MEMBER_NAME(_additionalStorage,"_additionalStorage");
	HX_MARK_MEMBER_NAME(dataToButton,"dataToButton");
	HX_MARK_MEMBER_NAME(buttonToItemState,"buttonToItemState");
	HX_MARK_MEMBER_NAME(itemStatePool,"itemStatePool");
	HX_MARK_MEMBER_NAME(_unrenderedData,"_unrenderedData");
	HX_MARK_MEMBER_NAME(_layoutItems,"_layoutItems");
	HX_MARK_MEMBER_NAME(_ignoreSelectionChange,"_ignoreSelectionChange");
	HX_MARK_MEMBER_NAME(itemToText,"itemToText");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_MARK_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_MARK_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_MARK_MEMBER_NAME(_hx___customButtonVariant,"__customButtonVariant");
	HX_MARK_MEMBER_NAME(_hx___layout,"__layout");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_VISIT_MEMBER_NAME(_previousCustomButtonVariant,"_previousCustomButtonVariant");
	HX_VISIT_MEMBER_NAME(_recyclerMap,"_recyclerMap");
	HX_VISIT_MEMBER_NAME(_buttonRecyclerIDFunction,"_buttonRecyclerIDFunction");
	HX_VISIT_MEMBER_NAME(_defaultStorage,"_defaultStorage");
	HX_VISIT_MEMBER_NAME(_additionalStorage,"_additionalStorage");
	HX_VISIT_MEMBER_NAME(dataToButton,"dataToButton");
	HX_VISIT_MEMBER_NAME(buttonToItemState,"buttonToItemState");
	HX_VISIT_MEMBER_NAME(itemStatePool,"itemStatePool");
	HX_VISIT_MEMBER_NAME(_unrenderedData,"_unrenderedData");
	HX_VISIT_MEMBER_NAME(_layoutItems,"_layoutItems");
	HX_VISIT_MEMBER_NAME(_ignoreSelectionChange,"_ignoreSelectionChange");
	HX_VISIT_MEMBER_NAME(itemToText,"itemToText");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_VISIT_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_VISIT_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_VISIT_MEMBER_NAME(_hx___customButtonVariant,"__customButtonVariant");
	HX_VISIT_MEMBER_NAME(_hx___layout,"__layout");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__layout") ) { return ::hx::Val( _hx___layout ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemToText") ) { return ::hx::Val( itemToText ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetButton") ) { return ::hx::Val( resetButton_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataProvider() ); }
		if (HX_FIELD_EQ(inName,"_recyclerMap") ) { return ::hx::Val( _recyclerMap ); }
		if (HX_FIELD_EQ(inName,"dataToButton") ) { return ::hx::Val( dataToButton ); }
		if (HX_FIELD_EQ(inName,"_layoutItems") ) { return ::hx::Val( _layoutItems ); }
		if (HX_FIELD_EQ(inName,"itemToButton") ) { return ::hx::Val( itemToButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleLayout") ) { return ::hx::Val( handleLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"createButton") ) { return ::hx::Val( createButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return ::hx::Val( updateButton_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { return ::hx::Val( _dataProvider ); }
		if (HX_FIELD_EQ(inName,"itemStatePool") ) { return ::hx::Val( itemStatePool ); }
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { return ::hx::Val( _layoutResult ); }
		if (HX_FIELD_EQ(inName,"indexToButton") ) { return ::hx::Val( indexToButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyButton") ) { return ::hx::Val( destroyButton_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonRecycler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonRecycler() ); }
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"refreshButtons") ) { return ::hx::Val( refreshButtons_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultStorage") ) { return ::hx::Val( _defaultStorage ); }
		if (HX_FIELD_EQ(inName,"_unrenderedData") ) { return ::hx::Val( _unrenderedData ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dataProvider") ) { return ::hx::Val( get_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataProvider") ) { return ::hx::Val( set_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateChildren") ) { return ::hx::Val( validateChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buttonToItemState") ) { return ::hx::Val( buttonToItemState ); }
		if (HX_FIELD_EQ(inName,"getButtonRecycler") ) { return ::hx::Val( getButtonRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"setButtonRecycler") ) { return ::hx::Val( setButtonRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layout") ) { return ::hx::Val( clearStyle_layout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_buttonRecycler") ) { return ::hx::Val( get_buttonRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonRecycler") ) { return ::hx::Val( set_buttonRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"_additionalStorage") ) { return ::hx::Val( _additionalStorage ); }
		if (HX_FIELD_EQ(inName,"handleLayoutResult") ) { return ::hx::Val( handleLayoutResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"findUnrenderedData") ) { return ::hx::Val( findUnrenderedData_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemStateToStorage") ) { return ::hx::Val( itemStateToStorage_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customButtonVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customButtonVariant() ); }
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { return ::hx::Val( _layoutMeasurements ); }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { return ::hx::Val( _ignoreChildChanges ); }
		if (HX_FIELD_EQ(inName,"freeInactiveButtons") ) { return ::hx::Val( freeInactiveButtons_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"layoutBackgroundSkin") ) { return ::hx::Val( layoutBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderUnrenderedData") ) { return ::hx::Val( renderUnrenderedData_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateButtonForIndex") ) { return ::hx::Val( updateButtonForIndex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"refreshViewPortBounds") ) { return ::hx::Val( refreshViewPortBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__customButtonVariant") ) { return ::hx::Val( _hx___customButtonVariant ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { return ::hx::Val( _ignoreSelectionChange ); }
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBackgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"refreshInactiveButtons") ) { return ::hx::Val( refreshInactiveButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"recoverInactiveButtons") ) { return ::hx::Val( recoverInactiveButtons_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"refreshButtonProperties") ) { return ::hx::Val( refreshButtonProperties_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customButtonVariant") ) { return ::hx::Val( get_customButtonVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customButtonVariant") ) { return ::hx::Val( set_customButtonVariant_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"buttonRecyclerIDFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonRecyclerIDFunction() ); }
		if (HX_FIELD_EQ(inName,"initializeButtonBarTheme") ) { return ::hx::Val( initializeButtonBarTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"populateCurrentItemState") ) { return ::hx::Val( populateCurrentItemState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { return ::hx::Val( _hx___disabledBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_buttonRecyclerIDFunction") ) { return ::hx::Val( _buttonRecyclerIDFunction ); }
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_disabledBackgroundSkin") ) { return ::hx::Val( get_disabledBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledBackgroundSkin") ) { return ::hx::Val( set_disabledBackgroundSkin_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_previousCustomButtonVariant") ) { return ::hx::Val( _previousCustomButtonVariant ); }
		if (HX_FIELD_EQ(inName,"get_buttonRecyclerIDFunction") ) { return ::hx::Val( get_buttonRecyclerIDFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonRecyclerIDFunction") ) { return ::hx::Val( set_buttonRecyclerIDFunction_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"clearStyle_customButtonVariant") ) { return ::hx::Val( clearStyle_customButtonVariant_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"buttonBar_button_triggerHandler") ) { return ::hx::Val( buttonBar_button_triggerHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_disabledBackgroundSkin") ) { return ::hx::Val( clearStyle_disabledBackgroundSkin_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"buttonBar_dataProvider_changeHandler") ) { return ::hx::Val( buttonBar_dataProvider_changeHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"buttonBar_dataProvider_updateAllHandler") ) { return ::hx::Val( buttonBar_dataProvider_updateAllHandler_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"buttonBar_dataProvider_updateItemHandler") ) { return ::hx::Val( buttonBar_dataProvider_updateItemHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ButtonBar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RESET_BUTTON_STATE") ) { outValue = ( RESET_BUTTON_STATE ); return true; }
		if (HX_FIELD_EQ(inName,"defaultResetButton") ) { outValue = defaultResetButton_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultUpdateButton") ) { outValue = defaultUpdateButton_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_BUTTON") ) { outValue = ( CHILD_VARIANT_BUTTON ); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_BUTTON_FACTORY") ) { outValue = ( INVALIDATION_FLAG_BUTTON_FACTORY ); return true; }
	}
	return false;
}

::hx::Val ButtonBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__layout") ) { _hx___layout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemToText") ) { itemToText=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataProvider(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_recyclerMap") ) { _recyclerMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataToButton") ) { dataToButton=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layoutItems") ) { _layoutItems=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { _dataProvider=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemStatePool") ) { itemStatePool=inValue.Cast<  ::lime::utils::ObjectPool_feathers_data_ButtonBarItemState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { _layoutResult=inValue.Cast<  ::feathers::layout::LayoutBoundsResult >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonRecycler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonRecycler(inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >()) ); }
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultStorage") ) { _defaultStorage=inValue.Cast<  ::feathers::controls::_ButtonBar::ButtonStorage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unrenderedData") ) { _unrenderedData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buttonToItemState") ) { buttonToItemState=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_additionalStorage") ) { _additionalStorage=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customButtonVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customButtonVariant(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { _layoutMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { _ignoreChildChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__customButtonVariant") ) { _hx___customButtonVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { _ignoreSelectionChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"buttonRecyclerIDFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonRecyclerIDFunction(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { _hx___disabledBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_buttonRecyclerIDFunction") ) { _buttonRecyclerIDFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_previousCustomButtonVariant") ) { _previousCustomButtonVariant=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ButtonBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"RESET_BUTTON_STATE") ) { RESET_BUTTON_STATE=ioValue.Cast<  ::feathers::data::ButtonBarItemState >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_BUTTON") ) { CHILD_VARIANT_BUTTON=ioValue.Cast< ::String >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_BUTTON_FACTORY") ) { INVALIDATION_FLAG_BUTTON_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
	}
	return false;
}

void ButtonBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dataProvider",5a,d0,9e,71));
	outFields->push(HX_("dataProvider",7b,3d,30,8f));
	outFields->push(HX_("_previousCustomButtonVariant",4c,30,18,66));
	outFields->push(HX_("customButtonVariant",42,16,2d,31));
	outFields->push(HX_("buttonRecycler",11,61,92,d7));
	outFields->push(HX_("_recyclerMap",de,d8,0f,f9));
	outFields->push(HX_("_defaultStorage",19,81,49,bd));
	outFields->push(HX_("_additionalStorage",d5,ad,91,7f));
	outFields->push(HX_("dataToButton",17,56,15,6d));
	outFields->push(HX_("buttonToItemState",31,c6,ad,30));
	outFields->push(HX_("itemStatePool",fa,5f,fd,ec));
	outFields->push(HX_("_unrenderedData",77,d6,68,99));
	outFields->push(HX_("_layoutItems",f7,b2,ff,d8));
	outFields->push(HX_("_ignoreSelectionChange",2b,2b,f7,83));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("disabledBackgroundSkin",27,5c,3a,d3));
	outFields->push(HX_("_layoutMeasurements",e0,8a,1d,e1));
	outFields->push(HX_("_layoutResult",06,7a,37,06));
	outFields->push(HX_("_ignoreChildChanges",18,b7,88,de));
	outFields->push(HX_("__customButtonVariant",22,37,21,9f));
	outFields->push(HX_("__layout",ca,19,e8,00));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__disabledBackgroundSkin",47,07,aa,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonBar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ButtonBar_obj,_dataProvider),HX_("_dataProvider",5a,d0,9e,71)},
	{::hx::fsString,(int)offsetof(ButtonBar_obj,_previousCustomButtonVariant),HX_("_previousCustomButtonVariant",4c,30,18,66)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ButtonBar_obj,_recyclerMap),HX_("_recyclerMap",de,d8,0f,f9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ButtonBar_obj,_buttonRecyclerIDFunction),HX_("_buttonRecyclerIDFunction",c3,1f,8a,bc)},
	{::hx::fsObject /*  ::feathers::controls::_ButtonBar::ButtonStorage */ ,(int)offsetof(ButtonBar_obj,_defaultStorage),HX_("_defaultStorage",19,81,49,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ButtonBar_obj,_additionalStorage),HX_("_additionalStorage",d5,ad,91,7f)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(ButtonBar_obj,dataToButton),HX_("dataToButton",17,56,15,6d)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(ButtonBar_obj,buttonToItemState),HX_("buttonToItemState",31,c6,ad,30)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool_feathers_data_ButtonBarItemState */ ,(int)offsetof(ButtonBar_obj,itemStatePool),HX_("itemStatePool",fa,5f,fd,ec)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ButtonBar_obj,_unrenderedData),HX_("_unrenderedData",77,d6,68,99)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ButtonBar_obj,_layoutItems),HX_("_layoutItems",f7,b2,ff,d8)},
	{::hx::fsBool,(int)offsetof(ButtonBar_obj,_ignoreSelectionChange),HX_("_ignoreSelectionChange",2b,2b,f7,83)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ButtonBar_obj,itemToText),HX_("itemToText",3b,01,c1,70)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ButtonBar_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(ButtonBar_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(ButtonBar_obj,_layoutMeasurements),HX_("_layoutMeasurements",e0,8a,1d,e1)},
	{::hx::fsObject /*  ::feathers::layout::LayoutBoundsResult */ ,(int)offsetof(ButtonBar_obj,_layoutResult),HX_("_layoutResult",06,7a,37,06)},
	{::hx::fsBool,(int)offsetof(ButtonBar_obj,_ignoreChildChanges),HX_("_ignoreChildChanges",18,b7,88,de)},
	{::hx::fsString,(int)offsetof(ButtonBar_obj,_hx___customButtonVariant),HX_("__customButtonVariant",22,37,21,9f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ButtonBar_obj,_hx___layout),HX_("__layout",ca,19,e8,00)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ButtonBar_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ButtonBar_obj,_hx___disabledBackgroundSkin),HX_("__disabledBackgroundSkin",47,07,aa,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ButtonBar_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY,HX_("INVALIDATION_FLAG_BUTTON_FACTORY",ef,3a,26,d1)},
	{::hx::fsString,(void *) &ButtonBar_obj::CHILD_VARIANT_BUTTON,HX_("CHILD_VARIANT_BUTTON",6f,04,c7,4b)},
	{::hx::fsObject /*  ::feathers::data::ButtonBarItemState */ ,(void *) &ButtonBar_obj::RESET_BUTTON_STATE,HX_("RESET_BUTTON_STATE",74,74,4d,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ButtonBar_obj_sMemberFields[] = {
	HX_("_dataProvider",5a,d0,9e,71),
	HX_("get_dataProvider",04,2a,cf,93),
	HX_("set_dataProvider",78,17,11,ea),
	HX_("_previousCustomButtonVariant",4c,30,18,66),
	HX_("get_buttonRecycler",da,41,2c,73),
	HX_("set_buttonRecycler",4e,74,db,4f),
	HX_("_recyclerMap",de,d8,0f,f9),
	HX_("_buttonRecyclerIDFunction",c3,1f,8a,bc),
	HX_("get_buttonRecyclerIDFunction",6d,50,2f,a4),
	HX_("set_buttonRecyclerIDFunction",e1,9b,59,a7),
	HX_("_defaultStorage",19,81,49,bd),
	HX_("_additionalStorage",d5,ad,91,7f),
	HX_("dataToButton",17,56,15,6d),
	HX_("buttonToItemState",31,c6,ad,30),
	HX_("itemStatePool",fa,5f,fd,ec),
	HX_("_unrenderedData",77,d6,68,99),
	HX_("_layoutItems",f7,b2,ff,d8),
	HX_("_ignoreSelectionChange",2b,2b,f7,83),
	HX_("itemToText",3b,01,c1,70),
	HX_("_currentBackgroundSkin",e5,c0,55,58),
	HX_("_backgroundSkinMeasurements",41,46,9b,f8),
	HX_("_layoutMeasurements",e0,8a,1d,e1),
	HX_("_layoutResult",06,7a,37,06),
	HX_("_ignoreChildChanges",18,b7,88,de),
	HX_("itemToButton",00,56,48,e5),
	HX_("indexToButton",ff,c2,71,cc),
	HX_("getButtonRecycler",47,10,06,4a),
	HX_("setButtonRecycler",53,e8,73,6d),
	HX_("initializeButtonBarTheme",b8,90,6b,53),
	HX_("update",09,86,05,87),
	HX_("refreshViewPortBounds",d6,72,b8,b5),
	HX_("handleLayout",72,d4,e4,a6),
	HX_("handleLayoutResult",ef,92,e3,71),
	HX_("validateChildren",f5,2b,c3,28),
	HX_("refreshButtons",a6,61,8a,3f),
	HX_("refreshInactiveButtons",7b,72,67,b4),
	HX_("recoverInactiveButtons",d2,43,41,49),
	HX_("freeInactiveButtons",ca,82,61,18),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("layoutBackgroundSkin",d5,3d,2a,eb),
	HX_("findUnrenderedData",f1,83,2c,cd),
	HX_("renderUnrenderedData",ce,77,94,8d),
	HX_("createButton",0e,a2,35,fc),
	HX_("destroyButton",8c,fa,d9,a7),
	HX_("itemStateToStorage",22,ab,c8,e1),
	HX_("populateCurrentItemState",8f,df,43,33),
	HX_("updateButton",db,08,a4,d9),
	HX_("resetButton",21,e5,f4,79),
	HX_("refreshButtonProperties",80,60,37,5d),
	HX_("buttonBar_button_triggerHandler",61,ed,3b,a6),
	HX_("buttonBar_dataProvider_changeHandler",f4,ae,93,e9),
	HX_("updateButtonForIndex",44,bb,fb,ae),
	HX_("buttonBar_dataProvider_updateItemHandler",28,17,68,9c),
	HX_("buttonBar_dataProvider_updateAllHandler",98,19,47,05),
	HX_("__customButtonVariant",22,37,21,9f),
	HX_("get_customButtonVariant",d9,bc,82,39),
	HX_("set_customButtonVariant",e5,25,e4,3b),
	HX_("clearStyle_customButtonVariant",a7,1b,6c,b5),
	HX_("__layout",ca,19,e8,00),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("clearStyle_layout",65,f0,40,36),
	HX_("__backgroundSkin",ab,f0,ae,54),
	HX_("get_backgroundSkin",54,46,09,bc),
	HX_("set_backgroundSkin",c8,78,b8,98),
	HX_("clearStyle_backgroundSkin",46,5a,f8,27),
	HX_("__disabledBackgroundSkin",47,07,aa,50),
	HX_("get_disabledBackgroundSkin",f0,ad,3f,0b),
	HX_("set_disabledBackgroundSkin",64,74,d4,6a),
	HX_("clearStyle_disabledBackgroundSkin",e2,03,2f,d1),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

static void ButtonBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY,"INVALIDATION_FLAG_BUTTON_FACTORY");
	HX_MARK_MEMBER_NAME(ButtonBar_obj::CHILD_VARIANT_BUTTON,"CHILD_VARIANT_BUTTON");
	HX_MARK_MEMBER_NAME(ButtonBar_obj::RESET_BUTTON_STATE,"RESET_BUTTON_STATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonBar_obj::INVALIDATION_FLAG_BUTTON_FACTORY,"INVALIDATION_FLAG_BUTTON_FACTORY");
	HX_VISIT_MEMBER_NAME(ButtonBar_obj::CHILD_VARIANT_BUTTON,"CHILD_VARIANT_BUTTON");
	HX_VISIT_MEMBER_NAME(ButtonBar_obj::RESET_BUTTON_STATE,"RESET_BUTTON_STATE");
};

#endif

::hx::Class ButtonBar_obj::__mClass;

static ::String ButtonBar_obj_sStaticFields[] = {
	HX_("INVALIDATION_FLAG_BUTTON_FACTORY",ef,3a,26,d1),
	HX_("CHILD_VARIANT_BUTTON",6f,04,c7,4b),
	HX_("RESET_BUTTON_STATE",74,74,4d,0c),
	HX_("defaultUpdateButton",3c,cb,fc,55),
	HX_("defaultResetButton",e0,49,14,39),
	::String(null())
};

void ButtonBar_obj::__register()
{
	ButtonBar_obj _hx_dummy;
	ButtonBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.ButtonBar",a7,cf,86,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ButtonBar_obj::__GetStatic;
	__mClass->mSetStaticField = &ButtonBar_obj::__SetStatic;
	__mClass->mMarkFunc = ButtonBar_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ButtonBar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ButtonBar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_74_boot)
HXDLIN(  74)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("dataProvider",7b,3d,30,8f))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_75_boot)
HXDLIN(  75)		INVALIDATION_FLAG_BUTTON_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("buttonFactory",f8,e4,36,c6));
            	}
{
            	HX_STACKFRAME(&_hx_pos_7910d96b3492ddd6_89_boot)
HXDLIN(  89)		CHILD_VARIANT_BUTTON = HX_("buttonBar_button",b0,fa,3e,4c);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7910d96b3492ddd6_91_boot)
HXDLIN(  91)		RESET_BUTTON_STATE =  ::feathers::data::ButtonBarItemState_obj::__alloc( HX_CTX ,null(),null(),null());
            	}
}

} // end namespace feathers
} // end namespace controls
