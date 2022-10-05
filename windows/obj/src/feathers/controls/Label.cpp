#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
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
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
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
#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelLabelStyles
#include <feathers/themes/steel/components/SteelLabelStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
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
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_StyleSheet
#include <openfl/text/StyleSheet.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_710cdd721177e2c5_53_new,"feathers.controls.Label","new",0x8bc73d8c,"feathers.controls.Label.new","feathers/controls/Label.hx",53,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_143_get_text,"feathers.controls.Label","get_text",0x5e69db8a,"feathers.controls.Label.get_text","feathers/controls/Label.hx",143,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_146_set_text,"feathers.controls.Label","set_text",0x0cc734fe,"feathers.controls.Label.set_text","feathers/controls/Label.hx",146,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_168_get_baseline,"feathers.controls.Label","get_baseline",0x76451de2,"feathers.controls.Label.get_baseline","feathers/controls/Label.hx",168,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_206_get_htmlText,"feathers.controls.Label","get_htmlText",0x75556115,"feathers.controls.Label.get_htmlText","feathers/controls/Label.hx",206,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_209_set_htmlText,"feathers.controls.Label","set_htmlText",0x8a4e8489,"feathers.controls.Label.set_htmlText","feathers/controls/Label.hx",209,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_283_get_selectable,"feathers.controls.Label","get_selectable",0x9c20c933,"feathers.controls.Label.get_selectable","feathers/controls/Label.hx",283,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_286_set_selectable,"feathers.controls.Label","set_selectable",0xbc40b1a7,"feathers.controls.Label.set_selectable","feathers/controls/Label.hx",286,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_297_get_tabEnabled,"feathers.controls.Label","get_tabEnabled",0x17ff0949,"feathers.controls.Label.get_tabEnabled","feathers/controls/Label.hx",297,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_304_get_stageFocusTarget,"feathers.controls.Label","get_stageFocusTarget",0xb6f06988,"feathers.controls.Label.get_stageFocusTarget","feathers/controls/Label.hx",304,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_316_get_selectionBeginIndex,"feathers.controls.Label","get_selectionBeginIndex",0x7a7ab158,"feathers.controls.Label.get_selectionBeginIndex","feathers/controls/Label.hx",316,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_335_get_selectionEndIndex,"feathers.controls.Label","get_selectionEndIndex",0x9e0238a6,"feathers.controls.Label.get_selectionEndIndex","feathers/controls/Label.hx",335,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_524_setPadding,"feathers.controls.Label","setPadding",0x8b8c4ea3,"feathers.controls.Label.setPadding","feathers/controls/Label.hx",524,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_532_initializeLabelTheme,"feathers.controls.Label","initializeLabelTheme",0x57adc639,"feathers.controls.Label.initializeLabelTheme","feathers/controls/Label.hx",532,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_535_initialize,"feathers.controls.Label","initialize",0x54eb01a4,"feathers.controls.Label.initialize","feathers/controls/Label.hx",535,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_544_update,"feathers.controls.Label","update",0x8ec99c5d,"feathers.controls.Label.update","feathers/controls/Label.hx",544,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_576_measure,"feathers.controls.Label","measure",0x00b96e8a,"feathers.controls.Label.measure","feathers/controls/Label.hx",576,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_660_refreshTextStyles,"feathers.controls.Label","refreshTextStyles",0xecbbe696,"feathers.controls.Label.refreshTextStyles","feathers/controls/Label.hx",660,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_699_refreshText,"feathers.controls.Label","refreshText",0x033bd554,"feathers.controls.Label.refreshText","feathers/controls/Label.hx",699,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_752_calculateExplicitWidthForTextMeasurement,"feathers.controls.Label","calculateExplicitWidthForTextMeasurement",0x2bbd5ee6,"feathers.controls.Label.calculateExplicitWidthForTextMeasurement","feathers/controls/Label.hx",752,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_768_refreshSelection,"feathers.controls.Label","refreshSelection",0x89153245,"feathers.controls.Label.refreshSelection","feathers/controls/Label.hx",768,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_775_getCurrentTextFormat,"feathers.controls.Label","getCurrentTextFormat",0x4c38c93b,"feathers.controls.Label.getCurrentTextFormat","feathers/controls/Label.hx",775,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_788_refreshBackgroundSkin,"feathers.controls.Label","refreshBackgroundSkin",0x01a364f2,"feathers.controls.Label.refreshBackgroundSkin","feathers/controls/Label.hx",788,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_798_getCurrentBackgroundSkin,"feathers.controls.Label","getCurrentBackgroundSkin",0xaea8a682,"feathers.controls.Label.getCurrentBackgroundSkin","feathers/controls/Label.hx",798,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_805_addCurrentBackgroundSkin,"feathers.controls.Label","addCurrentBackgroundSkin",0xe023f717,"feathers.controls.Label.addCurrentBackgroundSkin","feathers/controls/Label.hx",805,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_824_removeCurrentBackgroundSkin,"feathers.controls.Label","removeCurrentBackgroundSkin",0x50418dec,"feathers.controls.Label.removeCurrentBackgroundSkin","feathers/controls/Label.hx",824,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_839_layoutContent,"feathers.controls.Label","layoutContent",0x2d39abdb,"feathers.controls.Label.layoutContent","feathers/controls/Label.hx",839,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_876_layoutBackgroundSkin,"feathers.controls.Label","layoutBackgroundSkin",0x04393f29,"feathers.controls.Label.layoutBackgroundSkin","feathers/controls/Label.hx",876,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_898_label_focusInHandler,"feathers.controls.Label","label_focusInHandler",0x8cf0c5ec,"feathers.controls.Label.label_focusInHandler","feathers/controls/Label.hx",898,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_905_label_textFormat_changeHandler,"feathers.controls.Label","label_textFormat_changeHandler",0x6e10a67e,"feathers.controls.Label.label_textFormat_changeHandler","feathers/controls/Label.hx",905,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_textFormat,"feathers.controls.Label","get_textFormat",0x0c752261,"feathers.controls.Label.get_textFormat","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_textFormat,"feathers.controls.Label","set_textFormat",0x2c950ad5,"feathers.controls.Label.set_textFormat","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_textFormat,"feathers.controls.Label","clearStyle_textFormat",0x01bc732b,"feathers.controls.Label.clearStyle_textFormat","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_styleSheet,"feathers.controls.Label","get_styleSheet",0xd40c4e4b,"feathers.controls.Label.get_styleSheet","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_styleSheet,"feathers.controls.Label","set_styleSheet",0xf42c36bf,"feathers.controls.Label.set_styleSheet","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_styleSheet,"feathers.controls.Label","clearStyle_styleSheet",0xc9539f15,"feathers.controls.Label.clearStyle_styleSheet","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_embedFonts,"feathers.controls.Label","get_embedFonts",0x66d7d9c8,"feathers.controls.Label.get_embedFonts","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_embedFonts,"feathers.controls.Label","set_embedFonts",0x86f7c23c,"feathers.controls.Label.set_embedFonts","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_embedFonts,"feathers.controls.Label","clearStyle_embedFonts",0x5c1f2a92,"feathers.controls.Label.clearStyle_embedFonts","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_disabledTextFormat,"feathers.controls.Label","get_disabledTextFormat",0x4e90fffd,"feathers.controls.Label.get_disabledTextFormat","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_disabledTextFormat,"feathers.controls.Label","set_disabledTextFormat",0x823c7c71,"feathers.controls.Label.set_disabledTextFormat","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_disabledTextFormat,"feathers.controls.Label","clearStyle_disabledTextFormat",0x46252ac7,"feathers.controls.Label.clearStyle_disabledTextFormat","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_paddingTop,"feathers.controls.Label","get_paddingTop",0x11fc0fe1,"feathers.controls.Label.get_paddingTop","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_paddingTop,"feathers.controls.Label","set_paddingTop",0x321bf855,"feathers.controls.Label.set_paddingTop","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_paddingTop,"feathers.controls.Label","clearStyle_paddingTop",0x074360ab,"feathers.controls.Label.clearStyle_paddingTop","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_paddingRight,"feathers.controls.Label","get_paddingRight",0x6a3da028,"feathers.controls.Label.get_paddingRight","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_paddingRight,"feathers.controls.Label","set_paddingRight",0xc07f8d9c,"feathers.controls.Label.set_paddingRight","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_paddingRight,"feathers.controls.Label","clearStyle_paddingRight",0xbc923772,"feathers.controls.Label.clearStyle_paddingRight","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_paddingBottom,"feathers.controls.Label","get_paddingBottom",0xa301151f,"feathers.controls.Label.get_paddingBottom","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_paddingBottom,"feathers.controls.Label","set_paddingBottom",0xc66eed2b,"feathers.controls.Label.set_paddingBottom","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_paddingBottom,"feathers.controls.Label","clearStyle_paddingBottom",0x5ab0de95,"feathers.controls.Label.clearStyle_paddingBottom","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_paddingLeft,"feathers.controls.Label","get_paddingLeft",0xa540813b,"feathers.controls.Label.get_paddingLeft","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_paddingLeft,"feathers.controls.Label","set_paddingLeft",0xa10bfe47,"feathers.controls.Label.set_paddingLeft","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_paddingLeft,"feathers.controls.Label","clearStyle_paddingLeft",0x4e5fe131,"feathers.controls.Label.clearStyle_paddingLeft","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_verticalAlign,"feathers.controls.Label","get_verticalAlign",0x37e3cbf2,"feathers.controls.Label.get_verticalAlign","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_verticalAlign,"feathers.controls.Label","set_verticalAlign",0x5b51a3fe,"feathers.controls.Label.set_verticalAlign","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_verticalAlign,"feathers.controls.Label","clearStyle_verticalAlign",0xef939568,"feathers.controls.Label.clearStyle_verticalAlign","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_wordWrap,"feathers.controls.Label","get_wordWrap",0x65f85611,"feathers.controls.Label.get_wordWrap","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_wordWrap,"feathers.controls.Label","set_wordWrap",0x7af17985,"feathers.controls.Label.set_wordWrap","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_wordWrap,"feathers.controls.Label","clearStyle_wordWrap",0xb609005b,"feathers.controls.Label.clearStyle_wordWrap","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_backgroundSkin,"feathers.controls.Label","get_backgroundSkin",0xc7bf8aa8,"feathers.controls.Label.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_backgroundSkin,"feathers.controls.Label","set_backgroundSkin",0xa46ebd1c,"feathers.controls.Label.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_backgroundSkin,"feathers.controls.Label","clearStyle_backgroundSkin",0xc9e00872,"feathers.controls.Label.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_85_get_disabledBackgroundSkin,"feathers.controls.Label","get_disabledBackgroundSkin",0x14106644,"feathers.controls.Label.get_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_99_set_disabledBackgroundSkin,"feathers.controls.Label","set_disabledBackgroundSkin",0x73a52cb8,"feathers.controls.Label.set_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_539fd302e6f78923_125_clearStyle_disabledBackgroundSkin,"feathers.controls.Label","clearStyle_disabledBackgroundSkin",0x88f2be0e,"feathers.controls.Label.clearStyle_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_be95ac3aa3509b29_42_get_styleContext,"feathers.controls.Label","get_styleContext",0x9617449b,"feathers.controls.Label.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_53_boot,"feathers.controls.Label","boot",0xbaa79d86,"feathers.controls.Label.boot","feathers/controls/Label.hx",53,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_71_boot,"feathers.controls.Label","boot",0xbaa79d86,"feathers.controls.Label.boot","feathers/controls/Label.hx",71,0x4f930f44)
HX_LOCAL_STACK_FRAME(_hx_pos_710cdd721177e2c5_90_boot,"feathers.controls.Label","boot",0xbaa79d86,"feathers.controls.Label.boot","feathers/controls/Label.hx",90,0x4f930f44)
namespace feathers{
namespace controls{

void Label_obj::__construct(::String __o_text){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_53_new)
HXLINE( 512)		this->_hx___disabledBackgroundSkin = null();
HXLINE( 492)		this->_hx___backgroundSkin = null();
HXLINE( 470)		this->_hx___wordWrap = false;
HXLINE( 453)		this->_hx___verticalAlign = ::feathers::layout::VerticalAlign_obj::TOP_dyn();
HXLINE( 433)		this->_hx___paddingLeft = ((Float)0.0);
HXLINE( 415)		this->_hx___paddingBottom = ((Float)0.0);
HXLINE( 397)		this->_hx___paddingRight = ((Float)0.0);
HXLINE( 379)		this->_hx___paddingTop = ((Float)0.0);
HXLINE( 362)		this->_hx___disabledTextFormat = null();
HXLINE( 265)		this->_hx___embedFonts = false;
HXLINE( 248)		this->_hx___styleSheet = null();
HXLINE( 234)		this->_hx___textFormat = null();
HXLINE( 473)		this->_backgroundSkinMeasurements = null();
HXLINE( 472)		this->_currentBackgroundSkin = null();
HXLINE( 267)		this->_selectable = false;
HXLINE( 185)		this->_htmlText = null();
HXLINE( 118)		this->_wrappedOnMeasure = false;
HXLINE( 115)		this->_updatedTextStyles = false;
HXLINE( 114)		this->_previousSimpleTextFormat = null();
HXLINE( 113)		this->_previousTextFormat = null();
HXLINE( 112)		this->_previousHTMLText = null();
HXLINE( 111)		this->_previousText = null();
HXLINE(  98)		this->initializeLabelTheme();
HXLINE( 100)		super::__construct();
HXLINE( 102)		this->set_text(text);
HXLINE( 104)		this->set_tabEnabled(false);
HXLINE( 105)		this->set_tabChildren(false);
HXLINE( 107)		this->addEventListener(HX_("focusIn",dd,45,83,41),this->label_focusInHandler_dyn(),null(),null(),null());
            	}

Dynamic Label_obj::__CreateEmpty() { return new Label_obj; }

void *Label_obj::_hx_vtable = 0;

Dynamic Label_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Label_obj > _hx_result = new Label_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Label_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x26e7690a) {
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
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x26e7690a;
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

static ::feathers::core::IHTMLTextControl_obj _hx_feathers_controls_Label__hx_feathers_core_IHTMLTextControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::Label_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::Label_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::Label_obj::initializeNow,
	( ::String (::hx::Object::*)())&::feathers::controls::Label_obj::get_htmlText,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::Label_obj::set_htmlText,
};

static ::feathers::core::IStageFocusDelegate_obj _hx_feathers_controls_Label__hx_feathers_core_IStageFocusDelegate= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Label_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Label_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::Label_obj::showFocus,
	(  ::openfl::display::InteractiveObject (::hx::Object::*)())&::feathers::controls::Label_obj::get_stageFocusTarget,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_Label__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
};

static ::feathers::core::ITextControl_obj _hx_feathers_controls_Label__hx_feathers_core_ITextControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::Label_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::Label_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::Label_obj::initializeNow,
	( ::String (::hx::Object::*)())&::feathers::controls::Label_obj::get_text,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::Label_obj::set_text,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_baseline,
};

static ::feathers::core::IFocusObject_obj _hx_feathers_controls_Label__hx_feathers_core_IFocusObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Label_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Label_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::Label_obj::showFocus,
};

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_Label__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::Label_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::Label_obj::set_focusManager,
};

static ::feathers::core::IUIControl_obj _hx_feathers_controls_Label__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::Label_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::Label_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::Label_obj::initializeNow,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_Label__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::Label_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::Label_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::Label_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::Label_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::Label_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::Label_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::Label_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::Label_obj::set_visible,
};

void *Label_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x13e7e7eb: return &_hx_feathers_controls_Label__hx_feathers_core_IHTMLTextControl;
		case (int)0x4afbe419: return &_hx_feathers_controls_Label__hx_feathers_core_IStageFocusDelegate;
		case (int)0x87530281: return &_hx_feathers_controls_Label__hx_openfl_events_IEventDispatcher;
		case (int)0xfccd2876: return &_hx_feathers_controls_Label__hx_feathers_core_ITextControl;
		case (int)0x701686fd: return &_hx_feathers_controls_Label__hx_feathers_core_IFocusObject;
		case (int)0x7031642f: return &_hx_feathers_controls_Label__hx_feathers_core_IFocusManagerAware;
		case (int)0x2696a04f: return &_hx_feathers_controls_Label__hx_feathers_core_IUIControl;
		case (int)0x3a979a67: return &_hx_feathers_controls_Label__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

::String Label_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_143_get_text)
HXDLIN( 143)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_text,return )

::String Label_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_146_set_text)
HXLINE( 147)		if (::hx::IsNull( value )) {
HXLINE( 149)			if ((this->_text.length == 0)) {
HXLINE( 151)				return this->_text;
            			}
HXLINE( 153)			value = HX_("",00,00,00,00);
            		}
HXLINE( 155)		if ((this->_text == value)) {
HXLINE( 156)			return this->_text;
            		}
HXLINE( 158)		this->_text = value;
HXLINE( 159)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 160)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_text,return )

Float Label_obj::get_baseline(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_168_get_baseline)
HXLINE( 169)		if (::hx::IsNull( this->textField )) {
HXLINE( 170)			return ((Float)0.0);
            		}
HXLINE( 174)		bool hasText;
HXDLIN( 174)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 174)			hasText = (this->_text.length > 0);
            		}
            		else {
HXLINE( 174)			hasText = false;
            		}
HXLINE( 175)		bool hasHTMLText;
HXDLIN( 175)		if (::hx::IsNotNull( this->_htmlText )) {
HXLINE( 175)			hasHTMLText = (this->_htmlText.length > 0);
            		}
            		else {
HXLINE( 175)			hasHTMLText = false;
            		}
HXLINE( 176)		bool _hx_tmp;
HXDLIN( 176)		if (!(hasText)) {
HXLINE( 176)			_hx_tmp = !(hasHTMLText);
            		}
            		else {
HXLINE( 176)			_hx_tmp = false;
            		}
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 177)			this->textField->set_text(HX_W(u"\u200b",ed6d,00ab));
HXLINE( 178)			Float result = this->textField->get_y();
HXDLIN( 178)			Float result1 = (result + this->textField->getLineMetrics(0)->ascent);
HXLINE( 179)			this->textField->set_text(HX_("",00,00,00,00));
HXLINE( 180)			return result1;
            		}
HXLINE( 182)		Float _hx_tmp1 = this->textField->get_y();
HXDLIN( 182)		return (_hx_tmp1 + this->textField->getLineMetrics(0)->ascent);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_baseline,return )

::String Label_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_206_get_htmlText)
HXDLIN( 206)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_htmlText,return )

::String Label_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_209_set_htmlText)
HXLINE( 210)		if ((this->_htmlText == value)) {
HXLINE( 211)			return this->_htmlText;
            		}
HXLINE( 213)		this->_htmlText = value;
HXLINE( 214)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 215)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_htmlText,return )

bool Label_obj::get_selectable(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_283_get_selectable)
HXDLIN( 283)		return this->_selectable;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_selectable,return )

bool Label_obj::set_selectable(bool value){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_286_set_selectable)
HXLINE( 287)		if ((this->_selectable == value)) {
HXLINE( 288)			return this->_selectable;
            		}
HXLINE( 290)		this->_selectable = value;
HXLINE( 291)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 292)		return this->_selectable;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_selectable,return )

bool Label_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_297_get_tabEnabled)
HXDLIN( 297)		bool _hx_tmp;
HXDLIN( 297)		if (this->_selectable) {
HXDLIN( 297)			_hx_tmp = this->_enabled;
            		}
            		else {
HXDLIN( 297)			_hx_tmp = false;
            		}
HXDLIN( 297)		if (_hx_tmp) {
HXDLIN( 297)			return this->get_rawTabEnabled();
            		}
            		else {
HXDLIN( 297)			return false;
            		}
HXDLIN( 297)		return false;
            	}


 ::openfl::display::InteractiveObject Label_obj::get_stageFocusTarget(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_304_get_stageFocusTarget)
HXDLIN( 304)		return this->textField;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_stageFocusTarget,return )

int Label_obj::get_selectionBeginIndex(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_316_get_selectionBeginIndex)
HXLINE( 317)		if (!(this->_selectable)) {
HXLINE( 318)			return -1;
            		}
HXLINE( 320)		if (::hx::IsNull( this->textField )) {
HXLINE( 321)			return 0;
            		}
HXLINE( 323)		return this->textField->get_selectionBeginIndex();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_selectionBeginIndex,return )

int Label_obj::get_selectionEndIndex(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_335_get_selectionEndIndex)
HXLINE( 336)		if (!(this->_selectable)) {
HXLINE( 337)			return -1;
            		}
HXLINE( 339)		if (::hx::IsNull( this->textField )) {
HXLINE( 340)			return 0;
            		}
HXLINE( 342)		return this->textField->get_selectionEndIndex();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_selectionEndIndex,return )

void Label_obj::setPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_524_setPadding)
HXLINE( 525)		this->set_paddingTop(value);
HXLINE( 526)		this->set_paddingRight(value);
HXLINE( 527)		this->set_paddingBottom(value);
HXLINE( 528)		this->set_paddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setPadding,(void))

void Label_obj::initializeLabelTheme(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_532_initializeLabelTheme)
HXDLIN( 532)		::feathers::themes::steel::components::SteelLabelStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,initializeLabelTheme,(void))

void Label_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_710cdd721177e2c5_535_initialize)
HXLINE( 536)		this->super::initialize();
HXLINE( 537)		if (::hx::IsNull( this->textField )) {
HXLINE( 538)			this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 539)			this->textField->set_multiline(true);
HXLINE( 540)			this->addChild(this->textField);
            		}
            	}


void Label_obj::update(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_544_update)
HXLINE( 545)		bool dataInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 546)		bool selectionInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 547)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 548)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 549)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 551)		this->_updatedTextStyles = false;
HXLINE( 553)		bool _hx_tmp;
HXDLIN( 553)		if (!(stylesInvalid)) {
HXLINE( 553)			_hx_tmp = stateInvalid;
            		}
            		else {
HXLINE( 553)			_hx_tmp = true;
            		}
HXDLIN( 553)		if (_hx_tmp) {
HXLINE( 554)			this->refreshBackgroundSkin();
            		}
HXLINE( 557)		bool _hx_tmp1;
HXDLIN( 557)		if (!(stylesInvalid)) {
HXLINE( 557)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 557)			_hx_tmp1 = true;
            		}
HXDLIN( 557)		if (_hx_tmp1) {
HXLINE( 558)			this->refreshTextStyles();
            		}
HXLINE( 561)		bool _hx_tmp2;
HXDLIN( 561)		bool _hx_tmp3;
HXDLIN( 561)		bool _hx_tmp4;
HXDLIN( 561)		if (!(dataInvalid)) {
HXLINE( 561)			_hx_tmp4 = stylesInvalid;
            		}
            		else {
HXLINE( 561)			_hx_tmp4 = true;
            		}
HXDLIN( 561)		if (!(_hx_tmp4)) {
HXLINE( 561)			_hx_tmp3 = stateInvalid;
            		}
            		else {
HXLINE( 561)			_hx_tmp3 = true;
            		}
HXDLIN( 561)		if (!(_hx_tmp3)) {
HXLINE( 561)			_hx_tmp2 = sizeInvalid;
            		}
            		else {
HXLINE( 561)			_hx_tmp2 = true;
            		}
HXDLIN( 561)		if (_hx_tmp2) {
HXLINE( 562)			this->refreshText(sizeInvalid);
            		}
HXLINE( 565)		bool _hx_tmp5;
HXDLIN( 565)		bool _hx_tmp6;
HXDLIN( 565)		if (!(dataInvalid)) {
HXLINE( 565)			_hx_tmp6 = stylesInvalid;
            		}
            		else {
HXLINE( 565)			_hx_tmp6 = true;
            		}
HXDLIN( 565)		if (!(_hx_tmp6)) {
HXLINE( 565)			_hx_tmp5 = selectionInvalid;
            		}
            		else {
HXLINE( 565)			_hx_tmp5 = true;
            		}
HXDLIN( 565)		if (_hx_tmp5) {
HXLINE( 566)			this->refreshSelection();
            		}
HXLINE( 569)		if (this->measure()) {
HXLINE( 569)			sizeInvalid = true;
            		}
HXLINE( 571)		bool _hx_tmp7;
HXDLIN( 571)		bool _hx_tmp8;
HXDLIN( 571)		bool _hx_tmp9;
HXDLIN( 571)		if (!(stylesInvalid)) {
HXLINE( 571)			_hx_tmp9 = stateInvalid;
            		}
            		else {
HXLINE( 571)			_hx_tmp9 = true;
            		}
HXDLIN( 571)		if (!(_hx_tmp9)) {
HXLINE( 571)			_hx_tmp8 = dataInvalid;
            		}
            		else {
HXLINE( 571)			_hx_tmp8 = true;
            		}
HXDLIN( 571)		if (!(_hx_tmp8)) {
HXLINE( 571)			_hx_tmp7 = sizeInvalid;
            		}
            		else {
HXLINE( 571)			_hx_tmp7 = true;
            		}
HXDLIN( 571)		if (_hx_tmp7) {
HXLINE( 572)			this->layoutContent();
            		}
            	}


bool Label_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_576_measure)
HXLINE( 577)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 578)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 579)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 580)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 581)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 582)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 583)		bool _hx_tmp;
HXDLIN( 583)		bool _hx_tmp1;
HXDLIN( 583)		bool _hx_tmp2;
HXDLIN( 583)		bool _hx_tmp3;
HXDLIN( 583)		bool _hx_tmp4;
HXDLIN( 583)		if (!(needsWidth)) {
HXLINE( 583)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 583)			_hx_tmp4 = false;
            		}
HXDLIN( 583)		if (_hx_tmp4) {
HXLINE( 583)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 583)			_hx_tmp3 = false;
            		}
HXDLIN( 583)		if (_hx_tmp3) {
HXLINE( 583)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 583)			_hx_tmp2 = false;
            		}
HXDLIN( 583)		if (_hx_tmp2) {
HXLINE( 583)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 583)			_hx_tmp1 = false;
            		}
HXDLIN( 583)		if (_hx_tmp1) {
HXLINE( 583)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 583)			_hx_tmp = false;
            		}
HXDLIN( 583)		if (_hx_tmp) {
HXLINE( 584)			return false;
            		}
HXLINE( 587)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 588)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 591)		::Dynamic measureSkin = null();
HXLINE( 592)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 593)			measureSkin =  ::hx::interface_check(this->_currentBackgroundSkin,0xcfc32883);
            		}
HXLINE( 596)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 597)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
HXLINE( 600)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 601)		if (needsWidth) {
HXLINE( 602)			Float newWidth1 = this->_textMeasuredWidth;
HXDLIN( 602)			Float newWidth2 = (newWidth1 + this->get_paddingLeft());
HXDLIN( 602)			newWidth = (newWidth2 + this->get_paddingRight());
HXLINE( 603)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 604)				newWidth = ::Math_obj::max(this->_currentBackgroundSkin->get_width(),( (Float)(newWidth) ));
            			}
            		}
HXLINE( 608)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 609)		if (needsHeight) {
HXLINE( 610)			Float newHeight1 = this->_textMeasuredHeight;
HXDLIN( 610)			Float newHeight2 = (newHeight1 + this->get_paddingTop());
HXDLIN( 610)			newHeight = (newHeight2 + this->get_paddingBottom());
HXLINE( 611)			if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 612)				newHeight = ::Math_obj::max(this->_currentBackgroundSkin->get_height(),( (Float)(newHeight) ));
            			}
            		}
HXLINE( 616)		 ::Dynamic newMinWidth = this->get_explicitMinWidth();
HXLINE( 617)		if (needsMinWidth) {
HXLINE( 618)			Float newMinWidth1 = this->_textMeasuredWidth;
HXDLIN( 618)			Float newMinWidth2 = (newMinWidth1 + this->get_paddingLeft());
HXDLIN( 618)			newMinWidth = (newMinWidth2 + this->get_paddingRight());
HXLINE( 619)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 620)				newMinWidth = ::Math_obj::max(::feathers::core::IMeasureObject_obj::get_minWidth(measureSkin),( (Float)(newMinWidth) ));
            			}
            			else {
HXLINE( 621)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 622)					newMinWidth = ::Math_obj::max(( (Float)(this->_backgroundSkinMeasurements->minWidth) ),( (Float)(newMinWidth) ));
            				}
            			}
            		}
HXLINE( 626)		 ::Dynamic newMinHeight = this->get_explicitMinHeight();
HXLINE( 627)		if (needsMinHeight) {
HXLINE( 628)			Float newMinHeight1 = this->_textMeasuredHeight;
HXDLIN( 628)			Float newMinHeight2 = (newMinHeight1 + this->get_paddingTop());
HXDLIN( 628)			newMinHeight = (newMinHeight2 + this->get_paddingBottom());
HXLINE( 629)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 630)				newMinHeight = ::Math_obj::max(::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin),( (Float)(newMinHeight) ));
            			}
            			else {
HXLINE( 631)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 632)					newMinHeight = ::Math_obj::max(( (Float)(this->_backgroundSkinMeasurements->minHeight) ),( (Float)(newMinHeight) ));
            				}
            			}
            		}
HXLINE( 635)		 ::Dynamic newMaxWidth = this->get_explicitMaxWidth();
HXLINE( 636)		if (needsMaxWidth) {
HXLINE( 637)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 638)				newMaxWidth = ::feathers::core::IMeasureObject_obj::get_maxWidth(measureSkin);
            			}
            			else {
HXLINE( 639)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 640)					newMaxWidth = this->_backgroundSkinMeasurements->maxWidth;
            				}
            				else {
HXLINE( 642)					newMaxWidth = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 646)		 ::Dynamic newMaxHeight = this->get_explicitMaxHeight();
HXLINE( 647)		if (needsMaxHeight) {
HXLINE( 648)			if (::hx::IsNotNull( measureSkin )) {
HXLINE( 649)				newMaxHeight = ::feathers::core::IMeasureObject_obj::get_maxHeight(measureSkin);
            			}
            			else {
HXLINE( 650)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 651)					newMaxHeight = this->_backgroundSkinMeasurements->maxHeight;
            				}
            				else {
HXLINE( 653)					newMaxHeight = ::hx::DivByZero(((Float)1.0));
            				}
            			}
            		}
HXLINE( 657)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,newMaxHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,measure,return )

void Label_obj::refreshTextStyles(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_660_refreshTextStyles)
HXLINE( 661)		bool _hx_tmp = this->textField->get_wordWrap();
HXDLIN( 661)		if ((_hx_tmp != this->get_wordWrap())) {
HXLINE( 662)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 662)			_hx_tmp->set_wordWrap(this->get_wordWrap());
HXLINE( 663)			this->_updatedTextStyles = true;
            		}
HXLINE( 665)		bool _hx_tmp1 = this->textField->get_embedFonts();
HXDLIN( 665)		if ((_hx_tmp1 != this->get_embedFonts())) {
HXLINE( 666)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 666)			_hx_tmp->set_embedFonts(this->get_embedFonts());
HXLINE( 667)			this->_updatedTextStyles = true;
            		}
HXLINE( 670)		 ::openfl::text::StyleSheet _hx_tmp2 = this->textField->get_styleSheet();
HXDLIN( 670)		if (::hx::IsInstanceNotEq( _hx_tmp2,this->get_styleSheet() )) {
HXLINE( 671)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 671)			_hx_tmp->set_styleSheet(this->get_styleSheet());
HXLINE( 672)			this->_updatedTextStyles = true;
            		}
HXLINE( 675)		 ::feathers::text::TextFormat textFormat = this->getCurrentTextFormat();
HXLINE( 676)		 ::openfl::text::TextFormat simpleTextFormat;
HXDLIN( 676)		if (::hx::IsNotNull( textFormat )) {
HXLINE( 676)			simpleTextFormat = textFormat->toSimpleTextFormat();
            		}
            		else {
HXLINE( 676)			simpleTextFormat = null();
            		}
HXLINE( 677)		if (::hx::IsInstanceEq( simpleTextFormat,this->_previousSimpleTextFormat )) {
HXLINE( 679)			return;
            		}
HXLINE( 681)		if (::hx::IsNotNull( this->_previousTextFormat )) {
HXLINE( 682)			this->_previousTextFormat->removeEventListener(HX_("change",70,91,72,b7),this->label_textFormat_changeHandler_dyn(),null());
            		}
HXLINE( 686)		bool _hx_tmp3;
HXDLIN( 686)		if ((this->textField->get_caretIndex() != -1)) {
HXLINE( 686)			int _hx_tmp = this->textField->get_selectionBeginIndex();
HXDLIN( 686)			_hx_tmp3 = (_hx_tmp != this->textField->get_selectionEndIndex());
            		}
            		else {
HXLINE( 686)			_hx_tmp3 = false;
            		}
HXDLIN( 686)		if (_hx_tmp3) {
HXLINE( 688)			this->textField->setSelection(0,0);
            		}
HXLINE( 690)		if (::hx::IsNotNull( textFormat )) {
HXLINE( 691)			textFormat->addEventListener(HX_("change",70,91,72,b7),this->label_textFormat_changeHandler_dyn(),false,0,true);
HXLINE( 692)			this->textField->set_defaultTextFormat(simpleTextFormat);
HXLINE( 693)			this->_updatedTextStyles = true;
            		}
HXLINE( 695)		this->_previousTextFormat = textFormat;
HXLINE( 696)		this->_previousSimpleTextFormat = simpleTextFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,refreshTextStyles,(void))

void Label_obj::refreshText(bool forceMeasurement){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_699_refreshText)
HXLINE( 702)		bool hasText;
HXDLIN( 702)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 702)			hasText = (this->_text.length > 0);
            		}
            		else {
HXLINE( 702)			hasText = false;
            		}
HXLINE( 703)		bool hasHTMLText;
HXDLIN( 703)		if (::hx::IsNotNull( this->_htmlText )) {
HXLINE( 703)			hasHTMLText = (this->_htmlText.length > 0);
            		}
            		else {
HXLINE( 703)			hasHTMLText = false;
            		}
HXLINE( 704)		bool _hx_tmp;
HXDLIN( 704)		if (!(hasText)) {
HXLINE( 704)			_hx_tmp = hasHTMLText;
            		}
            		else {
HXLINE( 704)			_hx_tmp = true;
            		}
HXDLIN( 704)		this->textField->set_visible(_hx_tmp);
HXLINE( 705)		bool _hx_tmp1;
HXDLIN( 705)		bool _hx_tmp2;
HXDLIN( 705)		bool _hx_tmp3;
HXDLIN( 705)		if ((this->_text == this->_previousText)) {
HXLINE( 705)			_hx_tmp3 = (this->_htmlText == this->_previousHTMLText);
            		}
            		else {
HXLINE( 705)			_hx_tmp3 = false;
            		}
HXDLIN( 705)		if (_hx_tmp3) {
HXLINE( 705)			_hx_tmp2 = !(this->_updatedTextStyles);
            		}
            		else {
HXLINE( 705)			_hx_tmp2 = false;
            		}
HXDLIN( 705)		if (_hx_tmp2) {
HXLINE( 705)			_hx_tmp1 = !(forceMeasurement);
            		}
            		else {
HXLINE( 705)			_hx_tmp1 = false;
            		}
HXDLIN( 705)		if (_hx_tmp1) {
HXLINE( 710)			return;
            		}
HXLINE( 714)		this->textField->set_autoSize(1);
HXLINE( 715)		if (hasHTMLText) {
HXLINE( 716)			this->textField->set_htmlText(this->_htmlText);
            		}
            		else {
HXLINE( 717)			if (hasText) {
HXLINE( 718)				this->textField->set_text(this->_text);
            			}
            			else {
HXLINE( 722)				this->textField->set_text(HX_W(u"\u200b",ed6d,00ab));
            			}
            		}
HXLINE( 724)		if (this->get_wordWrap()) {
HXLINE( 726)			this->textField->set_wordWrap(false);
            		}
HXLINE( 728)		this->_textMeasuredWidth = (this->textField->get_textWidth() + 4);
HXLINE( 729)		this->_wrappedOnMeasure = false;
HXLINE( 730)		if (this->get_wordWrap()) {
HXLINE( 731)			 ::Dynamic textFieldExplicitWidth = this->calculateExplicitWidthForTextMeasurement();
HXLINE( 732)			bool _hx_tmp;
HXDLIN( 732)			if (::hx::IsNotNull( textFieldExplicitWidth )) {
HXLINE( 732)				_hx_tmp = ::hx::IsGreater( this->_textMeasuredWidth,textFieldExplicitWidth );
            			}
            			else {
HXLINE( 732)				_hx_tmp = false;
            			}
HXDLIN( 732)			if (_hx_tmp) {
HXLINE( 734)				this->textField->set_wordWrap(true);
HXLINE( 735)				this->textField->set_width(( (Float)(textFieldExplicitWidth) ));
HXLINE( 736)				this->_textMeasuredWidth = this->textField->get_width();
HXLINE( 737)				this->_wrappedOnMeasure = true;
            			}
            		}
HXLINE( 740)		this->_textMeasuredHeight = this->textField->get_height();
HXLINE( 741)		this->textField->set_autoSize(2);
HXLINE( 742)		bool _hx_tmp4 = this->textField->get_wordWrap();
HXDLIN( 742)		if ((_hx_tmp4 != this->get_wordWrap())) {
HXLINE( 743)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 743)			_hx_tmp->set_wordWrap(this->get_wordWrap());
            		}
HXLINE( 745)		bool _hx_tmp5;
HXDLIN( 745)		if (!(hasText)) {
HXLINE( 745)			_hx_tmp5 = !(hasHTMLText);
            		}
            		else {
HXLINE( 745)			_hx_tmp5 = false;
            		}
HXDLIN( 745)		if (_hx_tmp5) {
HXLINE( 746)			this->textField->set_text(HX_("",00,00,00,00));
            		}
HXLINE( 748)		this->_previousText = this->_text;
HXLINE( 749)		this->_previousHTMLText = this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,refreshText,(void))

 ::Dynamic Label_obj::calculateExplicitWidthForTextMeasurement(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_752_calculateExplicitWidthForTextMeasurement)
HXLINE( 753)		 ::Dynamic textFieldExplicitWidth = null();
HXLINE( 754)		if (::hx::IsNotNull( this->get_explicitWidth() )) {
HXLINE( 755)			textFieldExplicitWidth = this->get_explicitWidth();
            		}
            		else {
HXLINE( 756)			if (::hx::IsNotNull( this->get_explicitMaxWidth() )) {
HXLINE( 757)				textFieldExplicitWidth = this->get_explicitMaxWidth();
            			}
            			else {
HXLINE( 758)				bool _hx_tmp;
HXDLIN( 758)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 758)					_hx_tmp = ::hx::IsNotNull( this->_backgroundSkinMeasurements->maxWidth );
            				}
            				else {
HXLINE( 758)					_hx_tmp = false;
            				}
HXDLIN( 758)				if (_hx_tmp) {
HXLINE( 759)					textFieldExplicitWidth = this->_backgroundSkinMeasurements->maxWidth;
            				}
            			}
            		}
HXLINE( 761)		if (::hx::IsNull( textFieldExplicitWidth )) {
HXLINE( 762)			return textFieldExplicitWidth;
            		}
HXLINE( 764)		Float textFieldExplicitWidth1 = this->get_paddingLeft();
HXDLIN( 764)		textFieldExplicitWidth = (textFieldExplicitWidth - (textFieldExplicitWidth1 + this->get_paddingRight()));
HXLINE( 765)		return textFieldExplicitWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,calculateExplicitWidthForTextMeasurement,return )

void Label_obj::refreshSelection(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_768_refreshSelection)
HXLINE( 769)		bool selectable;
HXDLIN( 769)		if (this->_selectable) {
HXLINE( 769)			selectable = this->_enabled;
            		}
            		else {
HXLINE( 769)			selectable = false;
            		}
HXLINE( 770)		if ((this->textField->get_selectable() != selectable)) {
HXLINE( 771)			this->textField->set_selectable(selectable);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,refreshSelection,(void))

 ::feathers::text::TextFormat Label_obj::getCurrentTextFormat(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_775_getCurrentTextFormat)
HXLINE( 777)		if (::hx::IsNotNull( this->get_styleSheet() )) {
HXLINE( 779)			return null();
            		}
HXLINE( 782)		bool _hx_tmp;
HXDLIN( 782)		if (!(this->_enabled)) {
HXLINE( 782)			_hx_tmp = ::hx::IsNotNull( this->get_disabledTextFormat() );
            		}
            		else {
HXLINE( 782)			_hx_tmp = false;
            		}
HXDLIN( 782)		if (_hx_tmp) {
HXLINE( 783)			return this->get_disabledTextFormat();
            		}
HXLINE( 785)		return this->get_textFormat();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getCurrentTextFormat,return )

void Label_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_788_refreshBackgroundSkin)
HXLINE( 789)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 790)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 791)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 792)			return;
            		}
HXLINE( 794)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 795)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject Label_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_798_getCurrentBackgroundSkin)
HXLINE( 799)		bool _hx_tmp;
HXDLIN( 799)		if (!(this->_enabled)) {
HXLINE( 799)			_hx_tmp = ::hx::IsNotNull( this->get_disabledBackgroundSkin() );
            		}
            		else {
HXLINE( 799)			_hx_tmp = false;
            		}
HXDLIN( 799)		if (_hx_tmp) {
HXLINE( 800)			return this->get_disabledBackgroundSkin();
            		}
HXLINE( 802)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getCurrentBackgroundSkin,return )

void Label_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_710cdd721177e2c5_805_addCurrentBackgroundSkin)
HXLINE( 806)		if (::hx::IsNull( skin )) {
HXLINE( 807)			this->_backgroundSkinMeasurements = null();
HXLINE( 808)			return;
            		}
HXLINE( 810)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 811)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 813)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 814)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 816)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 818)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 819)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 821)		this->addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,addCurrentBackgroundSkin,(void))

void Label_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_824_removeCurrentBackgroundSkin)
HXLINE( 825)		if (::hx::IsNull( skin )) {
HXLINE( 826)			return;
            		}
HXLINE( 828)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 829)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 833)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 834)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 835)			this->removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,removeCurrentBackgroundSkin,(void))

void Label_obj::layoutContent(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_839_layoutContent)
HXLINE( 840)		this->layoutBackgroundSkin();
HXLINE( 842)		Float textFieldLayoutWidth = this->actualWidth;
HXDLIN( 842)		Float textFieldLayoutWidth1 = (textFieldLayoutWidth - this->get_paddingLeft());
HXDLIN( 842)		Float textFieldLayoutWidth2 = (textFieldLayoutWidth1 - this->get_paddingRight());
HXLINE( 843)		 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 843)		_hx_tmp->set_x(this->get_paddingLeft());
HXLINE( 844)		this->textField->set_width(textFieldLayoutWidth2);
HXLINE( 845)		bool wordWrap = this->get_wordWrap();
HXLINE( 846)		bool _hx_tmp1;
HXDLIN( 846)		bool _hx_tmp2;
HXDLIN( 846)		if (wordWrap) {
HXLINE( 846)			_hx_tmp2 = !(this->_wrappedOnMeasure);
            		}
            		else {
HXLINE( 846)			_hx_tmp2 = false;
            		}
HXDLIN( 846)		if (_hx_tmp2) {
HXLINE( 846)			_hx_tmp1 = (textFieldLayoutWidth2 >= this->_textMeasuredWidth);
            		}
            		else {
HXLINE( 846)			_hx_tmp1 = false;
            		}
HXDLIN( 846)		if (_hx_tmp1) {
HXLINE( 851)			wordWrap = false;
            		}
HXLINE( 853)		if ((this->textField->get_wordWrap() != wordWrap)) {
HXLINE( 854)			this->textField->set_wordWrap(wordWrap);
            		}
HXLINE( 857)		Float textFieldHeight = this->_textMeasuredHeight;
HXLINE( 858)		Float maxHeight = this->actualHeight;
HXDLIN( 858)		Float maxHeight1 = (maxHeight - this->get_paddingTop());
HXDLIN( 858)		Float maxHeight2 = (maxHeight1 - this->get_paddingBottom());
HXLINE( 859)		if ((textFieldHeight > maxHeight2)) {
HXLINE( 860)			textFieldHeight = maxHeight2;
            		}
HXLINE( 862)		this->textField->set_height(textFieldHeight);
HXLINE( 866)		switch((int)(this->get_verticalAlign()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 868)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 868)				_hx_tmp->set_y(this->get_paddingTop());
            			}
            			break;
            			case (int)2: {
HXLINE( 870)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 870)				Float _hx_tmp1 = this->actualHeight;
HXDLIN( 870)				_hx_tmp->set_y(((_hx_tmp1 - this->get_paddingBottom()) - textFieldHeight));
            			}
            			break;
            			default:{
HXLINE( 872)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 872)				_hx_tmp->set_y((this->get_paddingTop() + ((maxHeight2 - textFieldHeight) / ((Float)2.0))));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,layoutContent,(void))

void Label_obj::layoutBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_876_layoutBackgroundSkin)
HXLINE( 877)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 878)			return;
            		}
HXLINE( 880)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 881)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 886)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 886)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 887)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 889)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 889)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 890)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 892)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 893)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,layoutBackgroundSkin,(void))

void Label_obj::label_focusInHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_898_label_focusInHandler)
HXDLIN( 898)		bool _hx_tmp;
HXDLIN( 898)		if (::hx::IsNotNull( this->stage )) {
HXDLIN( 898)			 ::openfl::display::InteractiveObject _hx_tmp1 = this->stage->get_focus();
HXDLIN( 898)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->textField );
            		}
            		else {
HXDLIN( 898)			_hx_tmp = false;
            		}
HXDLIN( 898)		if (_hx_tmp) {
HXLINE( 899)			event->stopImmediatePropagation();
HXLINE( 900)			this->stage->set_focus(this->textField);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,label_focusInHandler,(void))

void Label_obj::label_textFormat_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_905_label_textFormat_changeHandler)
HXDLIN( 905)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,label_textFormat_changeHandler,(void))

 ::feathers::text::TextFormat Label_obj::get_textFormat(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_textFormat)
HXDLIN(  85)		return this->_hx___textFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_textFormat,return )

 ::feathers::text::TextFormat Label_obj::set_textFormat( ::feathers::text::TextFormat value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_textFormat)
HXLINE( 100)		if (!(this->setStyle(HX_("textFormat",c4,0f,7f,34),null()))) {
HXLINE( 101)			return this->_hx___textFormat;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___textFormat,value )) {
HXLINE( 104)			return this->_hx___textFormat;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_textFormat_dyn();
HXLINE( 110)		this->_hx___textFormat = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___textFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_textFormat,return )

 ::feathers::text::TextFormat Label_obj::clearStyle_textFormat(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_textFormat)
HXLINE( 126)		this->set_textFormat(null());
HXLINE( 127)		return this->get_textFormat();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_textFormat,return )

 ::openfl::text::StyleSheet Label_obj::get_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_styleSheet)
HXDLIN(  85)		return this->_hx___styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_styleSheet,return )

 ::openfl::text::StyleSheet Label_obj::set_styleSheet( ::openfl::text::StyleSheet value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_styleSheet)
HXLINE( 100)		if (!(this->setStyle(HX_("styleSheet",ae,3b,16,fc),null()))) {
HXLINE( 101)			return this->_hx___styleSheet;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___styleSheet,value )) {
HXLINE( 104)			return this->_hx___styleSheet;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_styleSheet_dyn();
HXLINE( 110)		this->_hx___styleSheet = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_styleSheet,return )

 ::openfl::text::StyleSheet Label_obj::clearStyle_styleSheet(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_styleSheet)
HXLINE( 126)		this->set_styleSheet(null());
HXLINE( 127)		return this->get_styleSheet();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_styleSheet,return )

bool Label_obj::get_embedFonts(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_embedFonts)
HXDLIN(  85)		return this->_hx___embedFonts;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_embedFonts,return )

bool Label_obj::set_embedFonts(bool value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_embedFonts)
HXLINE( 100)		if (!(this->setStyle(HX_("embedFonts",2b,c7,e1,8e),null()))) {
HXLINE( 101)			return this->_hx___embedFonts;
            		}
HXLINE( 103)		if ((this->_hx___embedFonts == value)) {
HXLINE( 104)			return this->_hx___embedFonts;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_embedFonts_dyn();
HXLINE( 110)		this->_hx___embedFonts = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___embedFonts;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_embedFonts,return )

bool Label_obj::clearStyle_embedFonts(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_embedFonts)
HXLINE( 126)		this->set_embedFonts(false);
HXLINE( 127)		return this->get_embedFonts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_embedFonts,return )

 ::feathers::text::TextFormat Label_obj::get_disabledTextFormat(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_disabledTextFormat)
HXDLIN(  85)		return this->_hx___disabledTextFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_disabledTextFormat,return )

 ::feathers::text::TextFormat Label_obj::set_disabledTextFormat( ::feathers::text::TextFormat value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_disabledTextFormat)
HXLINE( 100)		if (!(this->setStyle(HX_("disabledTextFormat",60,88,2b,39),null()))) {
HXLINE( 101)			return this->_hx___disabledTextFormat;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___disabledTextFormat,value )) {
HXLINE( 104)			return this->_hx___disabledTextFormat;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_disabledTextFormat_dyn();
HXLINE( 110)		this->_hx___disabledTextFormat = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___disabledTextFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_disabledTextFormat,return )

 ::feathers::text::TextFormat Label_obj::clearStyle_disabledTextFormat(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_disabledTextFormat)
HXLINE( 126)		this->set_disabledTextFormat(null());
HXLINE( 127)		return this->get_disabledTextFormat();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_disabledTextFormat,return )

Float Label_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_paddingTop)
HXDLIN(  85)		return this->_hx___paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_paddingTop,return )

Float Label_obj::set_paddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_paddingTop)
HXLINE( 100)		if (!(this->setStyle(HX_("paddingTop",44,fd,05,3a),null()))) {
HXLINE( 101)			return this->_hx___paddingTop;
            		}
HXLINE( 103)		if ((this->_hx___paddingTop == value)) {
HXLINE( 104)			return this->_hx___paddingTop;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_paddingTop_dyn();
HXLINE( 110)		this->_hx___paddingTop = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_paddingTop,return )

Float Label_obj::clearStyle_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_paddingTop)
HXLINE( 126)		this->set_paddingTop(((Float)0.0));
HXLINE( 127)		return this->get_paddingTop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_paddingTop,return )

Float Label_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_paddingRight)
HXDLIN(  85)		return this->_hx___paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_paddingRight,return )

Float Label_obj::set_paddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_paddingRight)
HXLINE( 100)		if (!(this->setStyle(HX_("paddingRight",4b,ec,a7,1a),null()))) {
HXLINE( 101)			return this->_hx___paddingRight;
            		}
HXLINE( 103)		if ((this->_hx___paddingRight == value)) {
HXLINE( 104)			return this->_hx___paddingRight;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_paddingRight_dyn();
HXLINE( 110)		this->_hx___paddingRight = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_paddingRight,return )

Float Label_obj::clearStyle_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_paddingRight)
HXLINE( 126)		this->set_paddingRight(((Float)0.0));
HXLINE( 127)		return this->get_paddingRight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_paddingRight,return )

Float Label_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_paddingBottom)
HXDLIN(  85)		return this->_hx___paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_paddingBottom,return )

Float Label_obj::set_paddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_paddingBottom)
HXLINE( 100)		if (!(this->setStyle(HX_("paddingBottom",9c,67,99,4f),null()))) {
HXLINE( 101)			return this->_hx___paddingBottom;
            		}
HXLINE( 103)		if ((this->_hx___paddingBottom == value)) {
HXLINE( 104)			return this->_hx___paddingBottom;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_paddingBottom_dyn();
HXLINE( 110)		this->_hx___paddingBottom = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_paddingBottom,return )

Float Label_obj::clearStyle_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_paddingBottom)
HXLINE( 126)		this->set_paddingBottom(((Float)0.0));
HXLINE( 127)		return this->get_paddingBottom();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_paddingBottom,return )

Float Label_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_paddingLeft)
HXDLIN(  85)		return this->_hx___paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_paddingLeft,return )

Float Label_obj::set_paddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_paddingLeft)
HXLINE( 100)		if (!(this->setStyle(HX_("paddingLeft",78,4a,e6,85),null()))) {
HXLINE( 101)			return this->_hx___paddingLeft;
            		}
HXLINE( 103)		if ((this->_hx___paddingLeft == value)) {
HXLINE( 104)			return this->_hx___paddingLeft;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_paddingLeft_dyn();
HXLINE( 110)		this->_hx___paddingLeft = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_paddingLeft,return )

Float Label_obj::clearStyle_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_paddingLeft)
HXLINE( 126)		this->set_paddingLeft(((Float)0.0));
HXLINE( 127)		return this->get_paddingLeft();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_paddingLeft,return )

 ::feathers::layout::VerticalAlign Label_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_verticalAlign)
HXDLIN(  85)		return this->_hx___verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_verticalAlign,return )

 ::feathers::layout::VerticalAlign Label_obj::set_verticalAlign( ::feathers::layout::VerticalAlign value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_verticalAlign)
HXLINE( 100)		if (!(this->setStyle(HX_("verticalAlign",6f,1e,7c,e4),null()))) {
HXLINE( 101)			return this->_hx___verticalAlign;
            		}
HXLINE( 103)		if (::hx::IsPointerEq( this->_hx___verticalAlign,value )) {
HXLINE( 104)			return this->_hx___verticalAlign;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_verticalAlign_dyn();
HXLINE( 110)		this->_hx___verticalAlign = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_verticalAlign,return )

 ::feathers::layout::VerticalAlign Label_obj::clearStyle_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_verticalAlign)
HXLINE( 126)		this->set_verticalAlign(::feathers::layout::VerticalAlign_obj::TOP_dyn());
HXLINE( 127)		return this->get_verticalAlign();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_verticalAlign,return )

bool Label_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_wordWrap)
HXDLIN(  85)		return this->_hx___wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_wordWrap,return )

bool Label_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_wordWrap)
HXLINE( 100)		if (!(this->setStyle(HX_("wordWrap",b4,14,db,00),null()))) {
HXLINE( 101)			return this->_hx___wordWrap;
            		}
HXLINE( 103)		if ((this->_hx___wordWrap == value)) {
HXLINE( 104)			return this->_hx___wordWrap;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_wordWrap_dyn();
HXLINE( 110)		this->_hx___wordWrap = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_wordWrap,return )

bool Label_obj::clearStyle_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_wordWrap)
HXLINE( 126)		this->set_wordWrap(false);
HXLINE( 127)		return this->get_wordWrap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_wordWrap,return )

 ::openfl::display::DisplayObject Label_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject Label_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_backgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject Label_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject Label_obj::get_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_85_get_disabledBackgroundSkin)
HXDLIN(  85)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject Label_obj::set_disabledBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_99_set_disabledBackgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject Label_obj::clearStyle_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_539fd302e6f78923_125_clearStyle_disabledBackgroundSkin)
HXLINE( 126)		this->set_disabledBackgroundSkin(null());
HXLINE( 127)		return this->get_disabledBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,clearStyle_disabledBackgroundSkin,return )

::hx::Class Label_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_be95ac3aa3509b29_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::Label >();
            	}


::String Label_obj::VARIANT_HEADING;

::String Label_obj::VARIANT_DETAIL;


::hx::ObjectPtr< Label_obj > Label_obj::__new(::String __o_text) {
	::hx::ObjectPtr< Label_obj > __this = new Label_obj();
	__this->__construct(__o_text);
	return __this;
}

::hx::ObjectPtr< Label_obj > Label_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_text) {
	Label_obj *__this = (Label_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Label_obj), true, "feathers.controls.Label"));
	*(void **)__this = Label_obj::_hx_vtable;
	__this->__construct(__o_text);
	return __this;
}

Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_previousText,"_previousText");
	HX_MARK_MEMBER_NAME(_previousHTMLText,"_previousHTMLText");
	HX_MARK_MEMBER_NAME(_previousTextFormat,"_previousTextFormat");
	HX_MARK_MEMBER_NAME(_previousSimpleTextFormat,"_previousSimpleTextFormat");
	HX_MARK_MEMBER_NAME(_updatedTextStyles,"_updatedTextStyles");
	HX_MARK_MEMBER_NAME(_textMeasuredWidth,"_textMeasuredWidth");
	HX_MARK_MEMBER_NAME(_textMeasuredHeight,"_textMeasuredHeight");
	HX_MARK_MEMBER_NAME(_wrappedOnMeasure,"_wrappedOnMeasure");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_htmlText,"_htmlText");
	HX_MARK_MEMBER_NAME(_selectable,"_selectable");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___styleSheet,"__styleSheet");
	HX_MARK_MEMBER_NAME(_hx___embedFonts,"__embedFonts");
	HX_MARK_MEMBER_NAME(_hx___disabledTextFormat,"__disabledTextFormat");
	HX_MARK_MEMBER_NAME(_hx___paddingTop,"__paddingTop");
	HX_MARK_MEMBER_NAME(_hx___paddingRight,"__paddingRight");
	HX_MARK_MEMBER_NAME(_hx___paddingBottom,"__paddingBottom");
	HX_MARK_MEMBER_NAME(_hx___paddingLeft,"__paddingLeft");
	HX_MARK_MEMBER_NAME(_hx___verticalAlign,"__verticalAlign");
	HX_MARK_MEMBER_NAME(_hx___wordWrap,"__wordWrap");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_previousText,"_previousText");
	HX_VISIT_MEMBER_NAME(_previousHTMLText,"_previousHTMLText");
	HX_VISIT_MEMBER_NAME(_previousTextFormat,"_previousTextFormat");
	HX_VISIT_MEMBER_NAME(_previousSimpleTextFormat,"_previousSimpleTextFormat");
	HX_VISIT_MEMBER_NAME(_updatedTextStyles,"_updatedTextStyles");
	HX_VISIT_MEMBER_NAME(_textMeasuredWidth,"_textMeasuredWidth");
	HX_VISIT_MEMBER_NAME(_textMeasuredHeight,"_textMeasuredHeight");
	HX_VISIT_MEMBER_NAME(_wrappedOnMeasure,"_wrappedOnMeasure");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_htmlText,"_htmlText");
	HX_VISIT_MEMBER_NAME(_selectable,"_selectable");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___styleSheet,"__styleSheet");
	HX_VISIT_MEMBER_NAME(_hx___embedFonts,"__embedFonts");
	HX_VISIT_MEMBER_NAME(_hx___disabledTextFormat,"__disabledTextFormat");
	HX_VISIT_MEMBER_NAME(_hx___paddingTop,"__paddingTop");
	HX_VISIT_MEMBER_NAME(_hx___paddingRight,"__paddingRight");
	HX_VISIT_MEMBER_NAME(_hx___paddingBottom,"__paddingBottom");
	HX_VISIT_MEMBER_NAME(_hx___paddingLeft,"__paddingLeft");
	HX_VISIT_MEMBER_NAME(_hx___verticalAlign,"__verticalAlign");
	HX_VISIT_MEMBER_NAME(_hx___wordWrap,"__wordWrap");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Label_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"baseline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_baseline() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"_htmlText") ) { return ::hx::Val( _htmlText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textFormat() ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleSheet() ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedFonts() ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectable() ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"__wordWrap") ) { return ::hx::Val( _hx___wordWrap ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectable") ) { return ::hx::Val( _selectable ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		if (HX_FIELD_EQ(inName,"refreshText") ) { return ::hx::Val( refreshText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_baseline") ) { return ::hx::Val( get_baseline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__styleSheet") ) { return ::hx::Val( _hx___styleSheet ); }
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { return ::hx::Val( _hx___embedFonts ); }
		if (HX_FIELD_EQ(inName,"__paddingTop") ) { return ::hx::Val( _hx___paddingTop ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_previousText") ) { return ::hx::Val( _previousText ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingLeft") ) { return ::hx::Val( _hx___paddingLeft ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return ::hx::Val( get_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return ::hx::Val( set_selectable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"get_textFormat") ) { return ::hx::Val( get_textFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textFormat") ) { return ::hx::Val( set_textFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleSheet") ) { return ::hx::Val( get_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleSheet") ) { return ::hx::Val( set_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return ::hx::Val( get_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return ::hx::Val( set_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingRight") ) { return ::hx::Val( _hx___paddingRight ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__paddingBottom") ) { return ::hx::Val( _hx___paddingBottom ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"__verticalAlign") ) { return ::hx::Val( _hx___verticalAlign ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stageFocusTarget") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_stageFocusTarget() ); }
		if (HX_FIELD_EQ(inName,"refreshSelection") ) { return ::hx::Val( refreshSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_previousHTMLText") ) { return ::hx::Val( _previousHTMLText ); }
		if (HX_FIELD_EQ(inName,"_wrappedOnMeasure") ) { return ::hx::Val( _wrappedOnMeasure ); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEndIndex() ); }
		if (HX_FIELD_EQ(inName,"refreshTextStyles") ) { return ::hx::Val( refreshTextStyles_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_updatedTextStyles") ) { return ::hx::Val( _updatedTextStyles ); }
		if (HX_FIELD_EQ(inName,"_textMeasuredWidth") ) { return ::hx::Val( _textMeasuredWidth ); }
		if (HX_FIELD_EQ(inName,"disabledTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledTextFormat() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_previousTextFormat") ) { return ::hx::Val( _previousTextFormat ); }
		if (HX_FIELD_EQ(inName,"_textMeasuredHeight") ) { return ::hx::Val( _textMeasuredHeight ); }
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionBeginIndex() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_wordWrap") ) { return ::hx::Val( clearStyle_wordWrap_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_stageFocusTarget") ) { return ::hx::Val( get_stageFocusTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeLabelTheme") ) { return ::hx::Val( initializeLabelTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentTextFormat") ) { return ::hx::Val( getCurrentTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutBackgroundSkin") ) { return ::hx::Val( layoutBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"label_focusInHandler") ) { return ::hx::Val( label_focusInHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledTextFormat") ) { return ::hx::Val( _hx___disabledTextFormat ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return ::hx::Val( get_selectionEndIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_textFormat") ) { return ::hx::Val( clearStyle_textFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_styleSheet") ) { return ::hx::Val( clearStyle_styleSheet_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_embedFonts") ) { return ::hx::Val( clearStyle_embedFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingTop") ) { return ::hx::Val( clearStyle_paddingTop_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBackgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"get_disabledTextFormat") ) { return ::hx::Val( get_disabledTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledTextFormat") ) { return ::hx::Val( set_disabledTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingLeft") ) { return ::hx::Val( clearStyle_paddingLeft_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return ::hx::Val( get_selectionBeginIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingRight") ) { return ::hx::Val( clearStyle_paddingRight_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingBottom") ) { return ::hx::Val( clearStyle_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_verticalAlign") ) { return ::hx::Val( clearStyle_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { return ::hx::Val( _hx___disabledBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousSimpleTextFormat") ) { return ::hx::Val( _previousSimpleTextFormat ); }
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
	case 29:
		if (HX_FIELD_EQ(inName,"clearStyle_disabledTextFormat") ) { return ::hx::Val( clearStyle_disabledTextFormat_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"label_textFormat_changeHandler") ) { return ::hx::Val( label_textFormat_changeHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_disabledBackgroundSkin") ) { return ::hx::Val( clearStyle_disabledBackgroundSkin_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"calculateExplicitWidthForTextMeasurement") ) { return ::hx::Val( calculateExplicitWidthForTextMeasurement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Label_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"VARIANT_DETAIL") ) { outValue = ( VARIANT_DETAIL ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"VARIANT_HEADING") ) { outValue = ( VARIANT_HEADING ); return true; }
	}
	return false;
}

::hx::Val Label_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_htmlText") ) { _htmlText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textFormat(inValue.Cast<  ::feathers::text::TextFormat >()) ); }
		if (HX_FIELD_EQ(inName,"styleSheet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleSheet(inValue.Cast<  ::openfl::text::StyleSheet >()) ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_embedFonts(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectable(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__wordWrap") ) { _hx___wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectable") ) { _selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::feathers::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__styleSheet") ) { _hx___styleSheet=inValue.Cast<  ::openfl::text::StyleSheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { _hx___embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paddingTop") ) { _hx___paddingTop=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_previousText") ) { _previousText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast<  ::feathers::layout::VerticalAlign >()) ); }
		if (HX_FIELD_EQ(inName,"__paddingLeft") ) { _hx___paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"__paddingRight") ) { _hx___paddingRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__paddingBottom") ) { _hx___paddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__verticalAlign") ) { _hx___verticalAlign=inValue.Cast<  ::feathers::layout::VerticalAlign >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_previousHTMLText") ) { _previousHTMLText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wrappedOnMeasure") ) { _wrappedOnMeasure=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_updatedTextStyles") ) { _updatedTextStyles=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textMeasuredWidth") ) { _textMeasuredWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledTextFormat") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledTextFormat(inValue.Cast<  ::feathers::text::TextFormat >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_previousTextFormat") ) { _previousTextFormat=inValue.Cast<  ::feathers::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textMeasuredHeight") ) { _textMeasuredHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__disabledTextFormat") ) { _hx___disabledTextFormat=inValue.Cast<  ::feathers::text::TextFormat >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { _hx___disabledBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousSimpleTextFormat") ) { _previousSimpleTextFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Label_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"VARIANT_DETAIL") ) { VARIANT_DETAIL=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"VARIANT_HEADING") ) { VARIANT_HEADING=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("_previousText",63,2f,0a,d6));
	outFields->push(HX_("_previousHTMLText",4e,21,22,06));
	outFields->push(HX_("_previousTextFormat",fa,5e,47,b1));
	outFields->push(HX_("_previousSimpleTextFormat",4c,a6,81,e5));
	outFields->push(HX_("_updatedTextStyles",8b,09,a3,ed));
	outFields->push(HX_("_textMeasuredWidth",b4,10,38,8f));
	outFields->push(HX_("_textMeasuredHeight",79,05,26,78));
	outFields->push(HX_("_wrappedOnMeasure",59,5c,cd,3e));
	outFields->push(HX_("_text",8c,e8,0a,00));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("baseline",85,dc,27,11));
	outFields->push(HX_("_htmlText",17,17,ce,57));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("textFormat",c4,0f,7f,34));
	outFields->push(HX_("styleSheet",ae,3b,16,fc));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("_selectable",b5,83,b4,96));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("stageFocusTarget",2b,03,77,7f));
	outFields->push(HX_("selectionBeginIndex",95,7f,17,d7));
	outFields->push(HX_("selectionEndIndex",a3,0d,42,4b));
	outFields->push(HX_("disabledTextFormat",60,88,2b,39));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("disabledBackgroundSkin",27,5c,3a,d3));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__styleSheet",ce,b6,a9,34));
	outFields->push(HX_("__embedFonts",4b,42,75,c7));
	outFields->push(HX_("__disabledTextFormat",80,23,5f,18));
	outFields->push(HX_("__paddingTop",64,78,99,72));
	outFields->push(HX_("__paddingRight",6b,6f,68,3b));
	outFields->push(HX_("__paddingBottom",7c,a0,4b,d7));
	outFields->push(HX_("__paddingLeft",58,8b,5e,ce));
	outFields->push(HX_("__verticalAlign",4f,57,2e,6c));
	outFields->push(HX_("__wordWrap",d4,87,13,a4));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__disabledBackgroundSkin",47,07,aa,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Label_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Label_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsString,(int)offsetof(Label_obj,_previousText),HX_("_previousText",63,2f,0a,d6)},
	{::hx::fsString,(int)offsetof(Label_obj,_previousHTMLText),HX_("_previousHTMLText",4e,21,22,06)},
	{::hx::fsObject /*  ::feathers::text::TextFormat */ ,(int)offsetof(Label_obj,_previousTextFormat),HX_("_previousTextFormat",fa,5e,47,b1)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(Label_obj,_previousSimpleTextFormat),HX_("_previousSimpleTextFormat",4c,a6,81,e5)},
	{::hx::fsBool,(int)offsetof(Label_obj,_updatedTextStyles),HX_("_updatedTextStyles",8b,09,a3,ed)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_textMeasuredWidth),HX_("_textMeasuredWidth",b4,10,38,8f)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_textMeasuredHeight),HX_("_textMeasuredHeight",79,05,26,78)},
	{::hx::fsBool,(int)offsetof(Label_obj,_wrappedOnMeasure),HX_("_wrappedOnMeasure",59,5c,cd,3e)},
	{::hx::fsString,(int)offsetof(Label_obj,_text),HX_("_text",8c,e8,0a,00)},
	{::hx::fsString,(int)offsetof(Label_obj,_htmlText),HX_("_htmlText",17,17,ce,57)},
	{::hx::fsBool,(int)offsetof(Label_obj,_selectable),HX_("_selectable",b5,83,b4,96)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Label_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(Label_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::feathers::text::TextFormat */ ,(int)offsetof(Label_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::StyleSheet */ ,(int)offsetof(Label_obj,_hx___styleSheet),HX_("__styleSheet",ce,b6,a9,34)},
	{::hx::fsBool,(int)offsetof(Label_obj,_hx___embedFonts),HX_("__embedFonts",4b,42,75,c7)},
	{::hx::fsObject /*  ::feathers::text::TextFormat */ ,(int)offsetof(Label_obj,_hx___disabledTextFormat),HX_("__disabledTextFormat",80,23,5f,18)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_hx___paddingTop),HX_("__paddingTop",64,78,99,72)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_hx___paddingRight),HX_("__paddingRight",6b,6f,68,3b)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_hx___paddingBottom),HX_("__paddingBottom",7c,a0,4b,d7)},
	{::hx::fsFloat,(int)offsetof(Label_obj,_hx___paddingLeft),HX_("__paddingLeft",58,8b,5e,ce)},
	{::hx::fsObject /*  ::feathers::layout::VerticalAlign */ ,(int)offsetof(Label_obj,_hx___verticalAlign),HX_("__verticalAlign",4f,57,2e,6c)},
	{::hx::fsBool,(int)offsetof(Label_obj,_hx___wordWrap),HX_("__wordWrap",d4,87,13,a4)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Label_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Label_obj,_hx___disabledBackgroundSkin),HX_("__disabledBackgroundSkin",47,07,aa,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Label_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Label_obj::VARIANT_HEADING,HX_("VARIANT_HEADING",88,06,c0,34)},
	{::hx::fsString,(void *) &Label_obj::VARIANT_DETAIL,HX_("VARIANT_DETAIL",6b,92,f4,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Label_obj_sMemberFields[] = {
	HX_("textField",cd,24,81,99),
	HX_("_previousText",63,2f,0a,d6),
	HX_("_previousHTMLText",4e,21,22,06),
	HX_("_previousTextFormat",fa,5e,47,b1),
	HX_("_previousSimpleTextFormat",4c,a6,81,e5),
	HX_("_updatedTextStyles",8b,09,a3,ed),
	HX_("_textMeasuredWidth",b4,10,38,8f),
	HX_("_textMeasuredHeight",79,05,26,78),
	HX_("_wrappedOnMeasure",59,5c,cd,3e),
	HX_("_text",8c,e8,0a,00),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_baseline",8e,90,41,c6),
	HX_("_htmlText",17,17,ce,57),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("_selectable",b5,83,b4,96),
	HX_("get_selectable",df,3e,20,3a),
	HX_("set_selectable",53,27,40,5a),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("get_stageFocusTarget",34,68,e1,9d),
	HX_("get_selectionBeginIndex",2c,26,6d,df),
	HX_("get_selectionEndIndex",7a,10,f0,c9),
	HX_("_currentBackgroundSkin",e5,c0,55,58),
	HX_("_backgroundSkinMeasurements",41,46,9b,f8),
	HX_("setPadding",4f,7e,5c,23),
	HX_("initializeLabelTheme",e5,c4,9e,3e),
	HX_("initialize",50,31,bb,ec),
	HX_("update",09,86,05,87),
	HX_("measure",5e,fb,e9,3c),
	HX_("refreshTextStyles",6a,44,c4,9f),
	HX_("refreshText",28,5c,95,41),
	HX_("calculateExplicitWidthForTextMeasurement",92,3b,8a,99),
	HX_("refreshSelection",f1,6a,1e,3e),
	HX_("getCurrentTextFormat",e7,c7,29,33),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("layoutContent",af,8f,21,da),
	HX_("layoutBackgroundSkin",d5,3d,2a,eb),
	HX_("label_focusInHandler",98,c4,e1,73),
	HX_("label_textFormat_changeHandler",2a,34,db,a4),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("get_textFormat",0d,98,74,aa),
	HX_("set_textFormat",81,80,94,ca),
	HX_("clearStyle_textFormat",ff,4a,aa,2d),
	HX_("__styleSheet",ce,b6,a9,34),
	HX_("get_styleSheet",f7,c3,0b,72),
	HX_("set_styleSheet",6b,ac,2b,92),
	HX_("clearStyle_styleSheet",e9,76,41,f5),
	HX_("__embedFonts",4b,42,75,c7),
	HX_("get_embedFonts",74,4f,d7,04),
	HX_("set_embedFonts",e8,37,f7,24),
	HX_("clearStyle_embedFonts",66,02,0d,88),
	HX_("__disabledTextFormat",80,23,5f,18),
	HX_("get_disabledTextFormat",a9,01,c0,92),
	HX_("set_disabledTextFormat",1d,7e,6b,c6),
	HX_("clearStyle_disabledTextFormat",9b,f6,2c,16),
	HX_("__paddingTop",64,78,99,72),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("clearStyle_paddingTop",7f,38,31,33),
	HX_("__paddingRight",6b,6f,68,3b),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("clearStyle_paddingRight",46,ac,84,21),
	HX_("__paddingBottom",7c,a0,4b,d7),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("clearStyle_paddingBottom",41,a3,e4,49),
	HX_("__paddingLeft",58,8b,5e,ce),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("clearStyle_paddingLeft",dd,e2,8e,92),
	HX_("__verticalAlign",4f,57,2e,6c),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("clearStyle_verticalAlign",14,5a,c7,de),
	HX_("__wordWrap",d4,87,13,a4),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("clearStyle_wordWrap",2f,7b,43,82),
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

static void Label_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::VARIANT_HEADING,"VARIANT_HEADING");
	HX_MARK_MEMBER_NAME(Label_obj::VARIANT_DETAIL,"VARIANT_DETAIL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Label_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::VARIANT_HEADING,"VARIANT_HEADING");
	HX_VISIT_MEMBER_NAME(Label_obj::VARIANT_DETAIL,"VARIANT_DETAIL");
};

#endif

::hx::Class Label_obj::__mClass;

static ::String Label_obj_sStaticFields[] = {
	HX_("VARIANT_HEADING",88,06,c0,34),
	HX_("VARIANT_DETAIL",6b,92,f4,58),
	::String(null())
};

void Label_obj::__register()
{
	Label_obj _hx_dummy;
	Label_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.Label",9a,c7,e6,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Label_obj::__GetStatic;
	__mClass->mSetStaticField = &Label_obj::__SetStatic;
	__mClass->mMarkFunc = Label_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Label_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Label_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Label_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Label_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Label_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Label_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Label_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_53_boot)
HXDLIN(  53)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("text",ad,cc,f9,4c))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_71_boot)
HXDLIN(  71)		VARIANT_HEADING = HX_("heading",c2,57,0b,63);
            	}
{
            	HX_STACKFRAME(&_hx_pos_710cdd721177e2c5_90_boot)
HXDLIN(  90)		VARIANT_DETAIL = HX_("detail",91,62,1f,70);
            	}
}

} // end namespace feathers
} // end namespace controls
