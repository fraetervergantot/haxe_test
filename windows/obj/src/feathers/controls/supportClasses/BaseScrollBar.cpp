#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
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
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_ScrollEvent
#include <feathers/events/ScrollEvent.h>
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
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_ExclusivePointer
#include <feathers/utils/ExclusivePointer.h>
#endif
#ifndef INCLUDED_feathers_utils_MathUtil
#include <feathers/utils/MathUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_45_new,"feathers.controls.supportClasses.BaseScrollBar","new",0x5f5020ea,"feathers.controls.supportClasses.BaseScrollBar.new","feathers/controls/supportClasses/BaseScrollBar.hx",45,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_93_get_value,"feathers.controls.supportClasses.BaseScrollBar","get_value",0x590c2fd2,"feathers.controls.supportClasses.BaseScrollBar.get_value","feathers/controls/supportClasses/BaseScrollBar.hx",93,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_96_set_value,"feathers.controls.supportClasses.BaseScrollBar","set_value",0x3c5d1bde,"feathers.controls.supportClasses.BaseScrollBar.set_value","feathers/controls/supportClasses/BaseScrollBar.hx",96,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_137_get_minimum,"feathers.controls.supportClasses.BaseScrollBar","get_minimum",0xb3d4106f,"feathers.controls.supportClasses.BaseScrollBar.get_minimum","feathers/controls/supportClasses/BaseScrollBar.hx",137,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_140_set_minimum,"feathers.controls.supportClasses.BaseScrollBar","set_minimum",0xbe41177b,"feathers.controls.supportClasses.BaseScrollBar.set_minimum","feathers/controls/supportClasses/BaseScrollBar.hx",140,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_173_get_maximum,"feathers.controls.supportClasses.BaseScrollBar","get_maximum",0x42fafa81,"feathers.controls.supportClasses.BaseScrollBar.get_maximum","feathers/controls/supportClasses/BaseScrollBar.hx",173,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_176_set_maximum,"feathers.controls.supportClasses.BaseScrollBar","set_maximum",0x4d68018d,"feathers.controls.supportClasses.BaseScrollBar.set_maximum","feathers/controls/supportClasses/BaseScrollBar.hx",176,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_212_get_step,"feathers.controls.supportClasses.BaseScrollBar","get_step",0x55b81e0b,"feathers.controls.supportClasses.BaseScrollBar.get_step","feathers/controls/supportClasses/BaseScrollBar.hx",212,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_215_set_step,"feathers.controls.supportClasses.BaseScrollBar","set_step",0x0415777f,"feathers.controls.supportClasses.BaseScrollBar.set_step","feathers/controls/supportClasses/BaseScrollBar.hx",215,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_250_get_snapInterval,"feathers.controls.supportClasses.BaseScrollBar","get_snapInterval",0x2433736e,"feathers.controls.supportClasses.BaseScrollBar.get_snapInterval","feathers/controls/supportClasses/BaseScrollBar.hx",250,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_253_set_snapInterval,"feathers.controls.supportClasses.BaseScrollBar","set_snapInterval",0x7a7560e2,"feathers.controls.supportClasses.BaseScrollBar.set_snapInterval","feathers/controls/supportClasses/BaseScrollBar.hx",253,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_293_get_page,"feathers.controls.supportClasses.BaseScrollBar","get_page",0x53ae110e,"feathers.controls.supportClasses.BaseScrollBar.get_page","feathers/controls/supportClasses/BaseScrollBar.hx",293,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_296_set_page,"feathers.controls.supportClasses.BaseScrollBar","set_page",0x020b6a82,"feathers.controls.supportClasses.BaseScrollBar.set_page","feathers/controls/supportClasses/BaseScrollBar.hx",296,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_529_setPadding,"feathers.controls.supportClasses.BaseScrollBar","setPadding",0x74bbb305,"feathers.controls.supportClasses.BaseScrollBar.setPadding","feathers/controls/supportClasses/BaseScrollBar.hx",529,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_547_applyValueRestrictions,"feathers.controls.supportClasses.BaseScrollBar","applyValueRestrictions",0x29577860,"feathers.controls.supportClasses.BaseScrollBar.applyValueRestrictions","feathers/controls/supportClasses/BaseScrollBar.hx",547,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_550_initialize,"feathers.controls.supportClasses.BaseScrollBar","initialize",0x3e1a6606,"feathers.controls.supportClasses.BaseScrollBar.initialize","feathers/controls/supportClasses/BaseScrollBar.hx",550,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_562_update,"feathers.controls.supportClasses.BaseScrollBar","update",0xe9d2a7bf,"feathers.controls.supportClasses.BaseScrollBar.update","feathers/controls/supportClasses/BaseScrollBar.hx",562,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_583_measure,"feathers.controls.supportClasses.BaseScrollBar","measure",0x4d9a58e8,"feathers.controls.supportClasses.BaseScrollBar.measure","feathers/controls/supportClasses/BaseScrollBar.hx",583,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_586_refreshThumb,"feathers.controls.supportClasses.BaseScrollBar","refreshThumb",0xf232ec71,"feathers.controls.supportClasses.BaseScrollBar.refreshThumb","feathers/controls/supportClasses/BaseScrollBar.hx",586,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_619_refreshTrack,"feathers.controls.supportClasses.BaseScrollBar","refreshTrack",0xf8bfd8e6,"feathers.controls.supportClasses.BaseScrollBar.refreshTrack","feathers/controls/supportClasses/BaseScrollBar.hx",619,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_652_refreshSecondaryTrack,"feathers.controls.supportClasses.BaseScrollBar","refreshSecondaryTrack",0x32393cbc,"feathers.controls.supportClasses.BaseScrollBar.refreshSecondaryTrack","feathers/controls/supportClasses/BaseScrollBar.hx",652,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_688_refreshEnabled,"feathers.controls.supportClasses.BaseScrollBar","refreshEnabled",0x813cdb9c,"feathers.controls.supportClasses.BaseScrollBar.refreshEnabled","feathers/controls/supportClasses/BaseScrollBar.hx",688,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_693_layoutContent,"feathers.controls.supportClasses.BaseScrollBar","layoutContent",0x4587b0b9,"feathers.controls.supportClasses.BaseScrollBar.layoutContent","feathers/controls/supportClasses/BaseScrollBar.hx",693,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_707_layoutSplitTrack,"feathers.controls.supportClasses.BaseScrollBar","layoutSplitTrack",0x1a5d89d1,"feathers.controls.supportClasses.BaseScrollBar.layoutSplitTrack","feathers/controls/supportClasses/BaseScrollBar.hx",707,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_711_layoutSingleTrack,"feathers.controls.supportClasses.BaseScrollBar","layoutSingleTrack",0x2d8ace63,"feathers.controls.supportClasses.BaseScrollBar.layoutSingleTrack","feathers/controls/supportClasses/BaseScrollBar.hx",711,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_715_layoutThumb,"feathers.controls.supportClasses.BaseScrollBar","layoutThumb",0xa26ae596,"feathers.controls.supportClasses.BaseScrollBar.layoutThumb","feathers/controls/supportClasses/BaseScrollBar.hx",715,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_718_drawFallbackTrack,"feathers.controls.supportClasses.BaseScrollBar","drawFallbackTrack",0x4a61b26f,"feathers.controls.supportClasses.BaseScrollBar.drawFallbackTrack","feathers/controls/supportClasses/BaseScrollBar.hx",718,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_731_normalizeValue,"feathers.controls.supportClasses.BaseScrollBar","normalizeValue",0xe0c6005a,"feathers.controls.supportClasses.BaseScrollBar.normalizeValue","feathers/controls/supportClasses/BaseScrollBar.hx",731,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_744_restrictValue,"feathers.controls.supportClasses.BaseScrollBar","restrictValue",0x11970b9f,"feathers.controls.supportClasses.BaseScrollBar.restrictValue","feathers/controls/supportClasses/BaseScrollBar.hx",744,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_757_valueToLocation,"feathers.controls.supportClasses.BaseScrollBar","valueToLocation",0xb926952b,"feathers.controls.supportClasses.BaseScrollBar.valueToLocation","feathers/controls/supportClasses/BaseScrollBar.hx",757,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_761_locationToValue,"feathers.controls.supportClasses.BaseScrollBar","locationToValue",0xe97addcb,"feathers.controls.supportClasses.BaseScrollBar.locationToValue","feathers/controls/supportClasses/BaseScrollBar.hx",761,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_765_saveThumbStart,"feathers.controls.supportClasses.BaseScrollBar","saveThumbStart",0x7f2597bf,"feathers.controls.supportClasses.BaseScrollBar.saveThumbStart","feathers/controls/supportClasses/BaseScrollBar.hx",765,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_768_getAdjustedPage,"feathers.controls.supportClasses.BaseScrollBar","getAdjustedPage",0xc922e95d,"feathers.controls.supportClasses.BaseScrollBar.getAdjustedPage","feathers/controls/supportClasses/BaseScrollBar.hx",768,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_779_thumbSkin_mouseDownHandler,"feathers.controls.supportClasses.BaseScrollBar","thumbSkin_mouseDownHandler",0xb4fe9765,"feathers.controls.supportClasses.BaseScrollBar.thumbSkin_mouseDownHandler","feathers/controls/supportClasses/BaseScrollBar.hx",779,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_803_thumbSkin_stage_mouseMoveHandler,"feathers.controls.supportClasses.BaseScrollBar","thumbSkin_stage_mouseMoveHandler",0x8b4debf7,"feathers.controls.supportClasses.BaseScrollBar.thumbSkin_stage_mouseMoveHandler","feathers/controls/supportClasses/BaseScrollBar.hx",803,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_810_thumbSkin_stage_mouseUpHandler,"feathers.controls.supportClasses.BaseScrollBar","thumbSkin_stage_mouseUpHandler",0xae85da6d,"feathers.controls.supportClasses.BaseScrollBar.thumbSkin_stage_mouseUpHandler","feathers/controls/supportClasses/BaseScrollBar.hx",810,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_821_trackSkin_mouseDownHandler,"feathers.controls.supportClasses.BaseScrollBar","trackSkin_mouseDownHandler",0xff4a28d0,"feathers.controls.supportClasses.BaseScrollBar.trackSkin_mouseDownHandler","feathers/controls/supportClasses/BaseScrollBar.hx",821,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_847_trackSkin_stage_mouseMoveHandler,"feathers.controls.supportClasses.BaseScrollBar","trackSkin_stage_mouseMoveHandler",0x2994dfa2,"feathers.controls.supportClasses.BaseScrollBar.trackSkin_stage_mouseMoveHandler","feathers/controls/supportClasses/BaseScrollBar.hx",847,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_3c2c6b8d019ab331_854_trackSkin_stage_mouseUpHandler,"feathers.controls.supportClasses.BaseScrollBar","trackSkin_stage_mouseUpHandler",0x304dfd58,"feathers.controls.supportClasses.BaseScrollBar.trackSkin_stage_mouseUpHandler","feathers/controls/supportClasses/BaseScrollBar.hx",854,0xff2e5fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_thumbSkin,"feathers.controls.supportClasses.BaseScrollBar","get_thumbSkin",0x39549c94,"feathers.controls.supportClasses.BaseScrollBar.get_thumbSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_thumbSkin,"feathers.controls.supportClasses.BaseScrollBar","set_thumbSkin",0x7e5a7ea0,"feathers.controls.supportClasses.BaseScrollBar.set_thumbSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_thumbSkin,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_thumbSkin",0xf084610e,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_thumbSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_trackSkin,"feathers.controls.supportClasses.BaseScrollBar","get_trackSkin",0x64a96789,"feathers.controls.supportClasses.BaseScrollBar.get_trackSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_trackSkin,"feathers.controls.supportClasses.BaseScrollBar","set_trackSkin",0xa9af4995,"feathers.controls.supportClasses.BaseScrollBar.set_trackSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_trackSkin,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_trackSkin",0x1bd92c03,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_trackSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_secondaryTrackSkin,"feathers.controls.supportClasses.BaseScrollBar","get_secondaryTrackSkin",0xeabf5b93,"feathers.controls.supportClasses.BaseScrollBar.get_secondaryTrackSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_secondaryTrackSkin,"feathers.controls.supportClasses.BaseScrollBar","set_secondaryTrackSkin",0x1e6ad807,"feathers.controls.supportClasses.BaseScrollBar.set_secondaryTrackSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_secondaryTrackSkin,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_secondaryTrackSkin",0xfcf437d9,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_secondaryTrackSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_fixedThumbSize,"feathers.controls.supportClasses.BaseScrollBar","get_fixedThumbSize",0x86df0562,"feathers.controls.supportClasses.BaseScrollBar.get_fixedThumbSize","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_fixedThumbSize,"feathers.controls.supportClasses.BaseScrollBar","set_fixedThumbSize",0x638e37d6,"feathers.controls.supportClasses.BaseScrollBar.set_fixedThumbSize","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_fixedThumbSize,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_fixedThumbSize",0x1f92c6a8,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_fixedThumbSize","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_paddingTop,"feathers.controls.supportClasses.BaseScrollBar","get_paddingTop",0x3df24d43,"feathers.controls.supportClasses.BaseScrollBar.get_paddingTop","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_paddingTop,"feathers.controls.supportClasses.BaseScrollBar","set_paddingTop",0x5e1235b7,"feathers.controls.supportClasses.BaseScrollBar.set_paddingTop","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingTop,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_paddingTop",0xd08e7389,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_paddingTop","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_paddingRight,"feathers.controls.supportClasses.BaseScrollBar","get_paddingRight",0x2e477a0a,"feathers.controls.supportClasses.BaseScrollBar.get_paddingRight","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_paddingRight,"feathers.controls.supportClasses.BaseScrollBar","set_paddingRight",0x8489677e,"feathers.controls.supportClasses.BaseScrollBar.set_paddingRight","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingRight,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_paddingRight",0xbcee3dd0,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_paddingRight","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_paddingBottom,"feathers.controls.supportClasses.BaseScrollBar","get_paddingBottom",0x6795e0fd,"feathers.controls.supportClasses.BaseScrollBar.get_paddingBottom","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_paddingBottom,"feathers.controls.supportClasses.BaseScrollBar","set_paddingBottom",0x8b03b909,"feathers.controls.supportClasses.BaseScrollBar.set_paddingBottom","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingBottom,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_paddingBottom",0xaada6a77,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_paddingBottom","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_paddingLeft,"feathers.controls.supportClasses.BaseScrollBar","get_paddingLeft",0xf0bff999,"feathers.controls.supportClasses.BaseScrollBar.get_paddingLeft","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_paddingLeft,"feathers.controls.supportClasses.BaseScrollBar","set_paddingLeft",0xec8b76a5,"feathers.controls.supportClasses.BaseScrollBar.set_paddingLeft","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingLeft,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_paddingLeft",0xa6c55093,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_paddingLeft","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_85_get_hideThumbWhenDisabled,"feathers.controls.supportClasses.BaseScrollBar","get_hideThumbWhenDisabled",0xfed2f8cb,"feathers.controls.supportClasses.BaseScrollBar.get_hideThumbWhenDisabled","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_99_set_hideThumbWhenDisabled,"feathers.controls.supportClasses.BaseScrollBar","set_hideThumbWhenDisabled",0x6b29bcd7,"feathers.controls.supportClasses.BaseScrollBar.set_hideThumbWhenDisabled","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_6dcf85a8b028089f_125_clearStyle_hideThumbWhenDisabled,"feathers.controls.supportClasses.BaseScrollBar","clearStyle_hideThumbWhenDisabled",0xde548c45,"feathers.controls.supportClasses.BaseScrollBar.clearStyle_hideThumbWhenDisabled","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
namespace feathers{
namespace controls{
namespace supportClasses{

void BaseScrollBar_obj::__construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener){
            		Float value = __o_value.Default(((Float)0.0));
            		Float minimum = __o_minimum.Default(((Float)0.0));
            		Float maximum = __o_maximum.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_45_new)
HXLINE( 508)		this->_hx___hideThumbWhenDisabled = false;
HXLINE( 492)		this->_hx___paddingLeft = ((Float)0.0);
HXLINE( 472)		this->_hx___paddingBottom = ((Float)0.0);
HXLINE( 452)		this->_hx___paddingRight = ((Float)0.0);
HXLINE( 432)		this->_hx___paddingTop = ((Float)0.0);
HXLINE( 412)		this->_hx___fixedThumbSize = false;
HXLINE( 395)		this->_hx___secondaryTrackSkin = null();
HXLINE( 363)		this->_hx___trackSkin = null();
HXLINE( 341)		this->_hx___thumbSkin = null();
HXLINE( 517)		this->_previousFallbackTrackHeight = ((Float)0.0);
HXLINE( 516)		this->_previousFallbackTrackWidth = ((Float)0.0);
HXLINE( 514)		this->_thumbStartY = ((Float)0.0);
HXLINE( 513)		this->_thumbStartX = ((Float)0.0);
HXLINE( 512)		this->_pointerStartY = ((Float)0.0);
HXLINE( 511)		this->_pointerStartX = ((Float)0.0);
HXLINE( 510)		this->_dragging = false;
HXLINE( 366)		this->_secondaryTrackSkinMeasurements = null();
HXLINE( 365)		this->_currentSecondaryTrackSkin = null();
HXLINE( 344)		this->_trackSkinMeasurements = null();
HXLINE( 343)		this->_currentTrackSkin = null();
HXLINE( 323)		this->_thumbSkinMeasurements = null();
HXLINE( 322)		this->_currentThumbSkin = null();
HXLINE( 320)		this->liveDragging = true;
HXLINE( 262)		this->_page = ((Float)0.0);
HXLINE( 224)		this->_snapInterval = ((Float)0.0);
HXLINE( 185)		this->_step = ((Float)0.01);
HXLINE( 149)		this->_maximum = ((Float)1.0);
HXLINE( 113)		this->_minimum = ((Float)0.0);
HXLINE(  63)		this->_value = ((Float)0.0);
HXLINE(  61)		this->_isDefaultValue = true;
HXLINE(  47)		super::__construct();
HXLINE(  49)		this->set_tabChildren(false);
HXLINE(  50)		this->focusRect = null();
HXLINE(  52)		this->set_minimum(minimum);
HXLINE(  53)		this->set_maximum(maximum);
HXLINE(  54)		this->set_value(value);
HXLINE(  56)		if (::hx::IsNotNull( changeListener )) {
HXLINE(  57)			this->addEventListener(HX_("change",70,91,72,b7),changeListener,null(),null(),null());
            		}
            	}

Dynamic BaseScrollBar_obj::__CreateEmpty() { return new BaseScrollBar_obj; }

void *BaseScrollBar_obj::_hx_vtable = 0;

Dynamic BaseScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseScrollBar_obj > _hx_result = new BaseScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool BaseScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28846938) {
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
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x28846938;
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

static ::feathers::controls::IScrollBar_obj _hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_controls_IScrollBar= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::BaseScrollBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::initializeNow,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_value,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_value,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_minimum,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_minimum,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_maximum,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_maximum,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_step,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_step,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_page,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_page,
};

static ::feathers::controls::IRange_obj _hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_controls_IRange= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::BaseScrollBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::initializeNow,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_value,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_value,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_minimum,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_minimum,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_maximum,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_maximum,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_supportClasses_BaseScrollBar__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::BaseScrollBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::willTrigger,
};

static ::feathers::core::IUIControl_obj _hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::BaseScrollBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::initializeNow,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::supportClasses::BaseScrollBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::supportClasses::BaseScrollBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::supportClasses::BaseScrollBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::supportClasses::BaseScrollBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::supportClasses::BaseScrollBar_obj::set_visible,
};

void *BaseScrollBar_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa9590423: return &_hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_controls_IScrollBar;
		case (int)0x16fd9f9a: return &_hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_controls_IRange;
		case (int)0x87530281: return &_hx_feathers_controls_supportClasses_BaseScrollBar__hx_openfl_events_IEventDispatcher;
		case (int)0x2696a04f: return &_hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_core_IUIControl;
		case (int)0x3a979a67: return &_hx_feathers_controls_supportClasses_BaseScrollBar__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

Float BaseScrollBar_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_93_get_value)
HXDLIN(  93)		return this->_value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_value,return )

Float BaseScrollBar_obj::set_value(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_96_set_value)
HXLINE( 101)		if ((this->_value == value)) {
HXLINE( 102)			return this->_value;
            		}
HXLINE( 104)		this->_isDefaultValue = false;
HXLINE( 105)		this->_value = value;
HXLINE( 106)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (!(this->liveDragging)) {
HXLINE( 107)			_hx_tmp = !(this->_dragging);
            		}
            		else {
HXLINE( 107)			_hx_tmp = true;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 108)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
HXLINE( 110)		return this->_value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_value,return )

Float BaseScrollBar_obj::get_minimum(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_137_get_minimum)
HXDLIN( 137)		return this->_minimum;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_minimum,return )

Float BaseScrollBar_obj::set_minimum(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_140_set_minimum)
HXLINE( 141)		if ((this->_minimum == value)) {
HXLINE( 142)			return this->_minimum;
            		}
HXLINE( 144)		this->_minimum = value;
HXLINE( 145)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 146)		return this->_minimum;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_minimum,return )

Float BaseScrollBar_obj::get_maximum(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_173_get_maximum)
HXDLIN( 173)		return this->_maximum;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_maximum,return )

Float BaseScrollBar_obj::set_maximum(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_176_set_maximum)
HXLINE( 177)		if ((this->_maximum == value)) {
HXLINE( 178)			return this->_maximum;
            		}
HXLINE( 180)		this->_maximum = value;
HXLINE( 181)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 182)		return this->_maximum;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_maximum,return )

Float BaseScrollBar_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_212_get_step)
HXDLIN( 212)		return this->_step;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_step,return )

Float BaseScrollBar_obj::set_step(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_215_set_step)
HXLINE( 216)		if ((this->_step == value)) {
HXLINE( 217)			return this->_step;
            		}
HXLINE( 219)		this->_step = value;
HXLINE( 220)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 221)		return this->_step;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_step,return )

Float BaseScrollBar_obj::get_snapInterval(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_250_get_snapInterval)
HXDLIN( 250)		return this->_snapInterval;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_snapInterval,return )

Float BaseScrollBar_obj::set_snapInterval(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_253_set_snapInterval)
HXLINE( 254)		if ((this->_snapInterval == value)) {
HXLINE( 255)			return this->_snapInterval;
            		}
HXLINE( 257)		this->_snapInterval = value;
HXLINE( 258)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 259)		return this->_snapInterval;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_snapInterval,return )

Float BaseScrollBar_obj::get_page(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_293_get_page)
HXDLIN( 293)		return this->_page;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_page,return )

Float BaseScrollBar_obj::set_page(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_296_set_page)
HXLINE( 297)		if ((this->_page == value)) {
HXLINE( 298)			return this->_page;
            		}
HXLINE( 300)		this->_page = value;
HXLINE( 301)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 302)		return this->_page;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_page,return )

void BaseScrollBar_obj::setPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_529_setPadding)
HXLINE( 530)		this->set_paddingTop(value);
HXLINE( 531)		this->set_paddingRight(value);
HXLINE( 532)		this->set_paddingBottom(value);
HXLINE( 533)		this->set_paddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,setPadding,(void))

void BaseScrollBar_obj::applyValueRestrictions(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_547_applyValueRestrictions)
HXDLIN( 547)		this->set_value(this->restrictValue(this->_value));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,applyValueRestrictions,(void))

void BaseScrollBar_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_550_initialize)
HXLINE( 551)		this->super::initialize();
HXLINE( 556)		if (this->_isDefaultValue) {
HXLINE( 558)			this->set_value(this->restrictValue(this->_value));
            		}
            	}


void BaseScrollBar_obj::update(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_562_update)
HXLINE( 563)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 564)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 565)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 567)		if (stylesInvalid) {
HXLINE( 568)			this->refreshThumb();
HXLINE( 569)			this->refreshTrack();
HXLINE( 570)			this->refreshSecondaryTrack();
            		}
HXLINE( 573)		bool _hx_tmp;
HXDLIN( 573)		if (!(stateInvalid)) {
HXLINE( 573)			_hx_tmp = stylesInvalid;
            		}
            		else {
HXLINE( 573)			_hx_tmp = true;
            		}
HXDLIN( 573)		if (_hx_tmp) {
HXLINE( 574)			this->refreshEnabled();
            		}
HXLINE( 577)		if (this->measure()) {
HXLINE( 577)			sizeInvalid = true;
            		}
HXLINE( 579)		this->layoutContent();
            	}


bool BaseScrollBar_obj::measure(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_583_measure)
HXDLIN( 583)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'measure' in type ",cc,02,af,85) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
HXDLIN( 583)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,measure,return )

void BaseScrollBar_obj::refreshThumb(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_586_refreshThumb)
HXLINE( 587)		 ::openfl::display::InteractiveObject oldSkin = this->_currentThumbSkin;
HXLINE( 588)		this->_currentThumbSkin = this->get_thumbSkin();
HXLINE( 589)		if (::hx::IsInstanceEq( this->_currentThumbSkin,oldSkin )) {
HXLINE( 590)			return;
            		}
HXLINE( 592)		if (::hx::IsNotNull( oldSkin )) {
HXLINE( 593)			if (::Std_obj::isOfType(oldSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 594)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(oldSkin,0x32a0d8d6),null());
            			}
HXLINE( 596)			oldSkin->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->thumbSkin_mouseDownHandler_dyn(),null());
HXLINE( 597)			this->removeChild(oldSkin);
            		}
HXLINE( 599)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 600)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 601)				::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_currentThumbSkin,0x2696a04f));
            			}
HXLINE( 603)			if (::hx::IsNull( this->_thumbSkinMeasurements )) {
HXLINE( 604)				this->_thumbSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_currentThumbSkin);
            			}
            			else {
HXLINE( 606)				this->_thumbSkinMeasurements->save(this->_currentThumbSkin);
            			}
HXLINE( 609)			this->addChild(this->_currentThumbSkin);
HXLINE( 610)			this->_currentThumbSkin->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->thumbSkin_mouseDownHandler_dyn(),null(),null(),null());
HXLINE( 611)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 612)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(this->_currentThumbSkin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            		else {
HXLINE( 615)			this->_thumbSkinMeasurements = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,refreshThumb,(void))

void BaseScrollBar_obj::refreshTrack(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_619_refreshTrack)
HXLINE( 620)		 ::openfl::display::InteractiveObject oldSkin = this->_currentTrackSkin;
HXLINE( 621)		this->_currentTrackSkin = this->get_trackSkin();
HXLINE( 622)		if (::hx::IsInstanceEq( this->_currentTrackSkin,oldSkin )) {
HXLINE( 623)			return;
            		}
HXLINE( 625)		if (::hx::IsNotNull( oldSkin )) {
HXLINE( 626)			if (::Std_obj::isOfType(oldSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 627)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(oldSkin,0x32a0d8d6),null());
            			}
HXLINE( 629)			this->removeChild(oldSkin);
HXLINE( 630)			oldSkin->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->trackSkin_mouseDownHandler_dyn(),null());
            		}
HXLINE( 632)		if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 633)			if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 634)				::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_currentTrackSkin,0x2696a04f));
            			}
HXLINE( 636)			if (::hx::IsNull( this->_trackSkinMeasurements )) {
HXLINE( 637)				this->_trackSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_currentTrackSkin);
            			}
            			else {
HXLINE( 639)				this->_trackSkinMeasurements->save(this->_currentTrackSkin);
            			}
HXLINE( 642)			this->addChildAt(this->_currentTrackSkin,0);
HXLINE( 643)			this->_currentTrackSkin->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->trackSkin_mouseDownHandler_dyn(),null(),null(),null());
HXLINE( 644)			if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 645)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(this->_currentTrackSkin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            		else {
HXLINE( 648)			this->_trackSkinMeasurements = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,refreshTrack,(void))

void BaseScrollBar_obj::refreshSecondaryTrack(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_652_refreshSecondaryTrack)
HXLINE( 653)		 ::openfl::display::InteractiveObject oldSkin = this->_currentSecondaryTrackSkin;
HXLINE( 654)		this->_currentSecondaryTrackSkin = this->get_secondaryTrackSkin();
HXLINE( 655)		if (::hx::IsInstanceEq( this->_currentSecondaryTrackSkin,oldSkin )) {
HXLINE( 656)			return;
            		}
HXLINE( 658)		if (::hx::IsNotNull( oldSkin )) {
HXLINE( 659)			if (::Std_obj::isOfType(oldSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 660)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(oldSkin,0x32a0d8d6),null());
            			}
HXLINE( 662)			this->removeChild(oldSkin);
HXLINE( 663)			oldSkin->removeEventListener(HX_("mouseDown",27,b1,c2,ee),this->trackSkin_mouseDownHandler_dyn(),null());
            		}
HXLINE( 665)		if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 666)			if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 667)				::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x2696a04f));
            			}
HXLINE( 669)			if (::hx::IsNull( this->_secondaryTrackSkinMeasurements )) {
HXLINE( 670)				this->_secondaryTrackSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,this->_currentSecondaryTrackSkin);
            			}
            			else {
HXLINE( 672)				this->_secondaryTrackSkinMeasurements->save(this->_currentSecondaryTrackSkin);
            			}
HXLINE( 676)			int index;
HXDLIN( 676)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 676)				index = 1;
            			}
            			else {
HXLINE( 676)				index = 0;
            			}
HXLINE( 677)			this->addChildAt(this->_currentSecondaryTrackSkin,index);
HXLINE( 678)			this->_currentSecondaryTrackSkin->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->trackSkin_mouseDownHandler_dyn(),null(),null(),null());
HXLINE( 679)			if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 680)				::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            		else {
HXLINE( 683)			this->_secondaryTrackSkinMeasurements = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,refreshSecondaryTrack,(void))

void BaseScrollBar_obj::refreshEnabled(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_688_refreshEnabled)
HXDLIN( 688)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 689)			::feathers::core::IUIControl_obj::set_enabled( ::hx::interface_check(this->_currentThumbSkin,0x2696a04f),this->_enabled);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,refreshEnabled,(void))

void BaseScrollBar_obj::layoutContent(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_693_layoutContent)
HXLINE( 694)		bool _hx_tmp;
HXDLIN( 694)		if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 694)			_hx_tmp = ::hx::IsNotNull( this->_currentSecondaryTrackSkin );
            		}
            		else {
HXLINE( 694)			_hx_tmp = false;
            		}
HXDLIN( 694)		if (_hx_tmp) {
HXLINE( 695)			this->get_graphics()->clear();
HXLINE( 696)			this->layoutSplitTrack();
            		}
            		else {
HXLINE( 697)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 698)				this->get_graphics()->clear();
HXLINE( 699)				this->layoutSingleTrack();
            			}
            			else {
HXLINE( 701)				this->drawFallbackTrack();
            			}
            		}
HXLINE( 703)		this->layoutThumb();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,layoutContent,(void))

void BaseScrollBar_obj::layoutSplitTrack(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_707_layoutSplitTrack)
HXDLIN( 707)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'layoutSplitTrack' in type ",b5,e6,8d,3e) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,layoutSplitTrack,(void))

void BaseScrollBar_obj::layoutSingleTrack(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_711_layoutSingleTrack)
HXDLIN( 711)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'layoutSingleTrack' in type ",07,68,20,0a) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,layoutSingleTrack,(void))

void BaseScrollBar_obj::layoutThumb(){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_715_layoutThumb)
HXDLIN( 715)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'layoutThumb' in type ",fa,84,83,a9) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,layoutThumb,(void))

void BaseScrollBar_obj::drawFallbackTrack(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_718_drawFallbackTrack)
HXLINE( 719)		bool _hx_tmp;
HXDLIN( 719)		if ((this->actualWidth == this->_previousFallbackTrackWidth)) {
HXLINE( 719)			_hx_tmp = (this->actualHeight == this->_previousFallbackTrackHeight);
            		}
            		else {
HXLINE( 719)			_hx_tmp = false;
            		}
HXDLIN( 719)		if (_hx_tmp) {
HXLINE( 721)			return;
            		}
HXLINE( 723)		this->get_graphics()->clear();
HXLINE( 724)		this->get_graphics()->beginFill(16711935,((Float)0.0));
HXLINE( 725)		this->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),this->actualWidth,this->actualHeight);
HXLINE( 726)		this->get_graphics()->endFill();
HXLINE( 727)		this->_previousFallbackTrackWidth = this->actualWidth;
HXLINE( 728)		this->_previousFallbackTrackHeight = this->actualHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,drawFallbackTrack,(void))

Float BaseScrollBar_obj::normalizeValue(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_731_normalizeValue)
HXLINE( 732)		Float normalized = ((Float)0.0);
HXLINE( 733)		if ((this->_minimum != this->_maximum)) {
HXLINE( 734)			normalized = ((value - this->_minimum) / (this->_maximum - this->_minimum));
HXLINE( 735)			if ((normalized < ((Float)0.0))) {
HXLINE( 736)				normalized = ((Float)0.0);
            			}
            			else {
HXLINE( 737)				if ((normalized > ((Float)1.0))) {
HXLINE( 738)					normalized = ((Float)1.0);
            				}
            			}
            		}
HXLINE( 741)		return normalized;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,normalizeValue,return )

Float BaseScrollBar_obj::restrictValue(Float value){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_744_restrictValue)
HXLINE( 745)		bool _hx_tmp;
HXDLIN( 745)		bool _hx_tmp1;
HXDLIN( 745)		if ((this->_snapInterval != ((Float)0.0))) {
HXLINE( 745)			_hx_tmp1 = (value != this->_minimum);
            		}
            		else {
HXLINE( 745)			_hx_tmp1 = false;
            		}
HXDLIN( 745)		if (_hx_tmp1) {
HXLINE( 745)			_hx_tmp = (value != this->_maximum);
            		}
            		else {
HXLINE( 745)			_hx_tmp = false;
            		}
HXDLIN( 745)		if (_hx_tmp) {
HXLINE( 746)			value = ::feathers::utils::MathUtil_obj::roundToNearest(value,this->_snapInterval);
            		}
HXLINE( 748)		if ((value < this->_minimum)) {
HXLINE( 749)			value = this->_minimum;
            		}
            		else {
HXLINE( 750)			if ((value > this->_maximum)) {
HXLINE( 751)				value = this->_maximum;
            			}
            		}
HXLINE( 753)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,restrictValue,return )

Float BaseScrollBar_obj::valueToLocation(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_757_valueToLocation)
HXDLIN( 757)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'valueToLocation' in type ",cf,70,3c,d7) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
HXDLIN( 757)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,valueToLocation,return )

Float BaseScrollBar_obj::locationToValue(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_761_locationToValue)
HXDLIN( 761)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'locationToValue' in type ",6f,c1,bd,51) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
HXDLIN( 761)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScrollBar_obj,locationToValue,return )

void BaseScrollBar_obj::saveThumbStart(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_765_saveThumbStart)
HXDLIN( 765)		HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,(HX_("Missing override for 'saveThumbStart' in type ",23,f2,cd,c0) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScrollBar_obj,saveThumbStart,(void))

Float BaseScrollBar_obj::getAdjustedPage(){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_768_getAdjustedPage)
HXLINE( 769)		Float range = (this->_maximum - this->_minimum);
HXLINE( 770)		Float adjustedPage = this->_page;
HXLINE( 771)		if ((adjustedPage == ((Float)0.0))) {
HXLINE( 772)			adjustedPage = this->_step;
            		}
            		else {
HXLINE( 773)			if ((adjustedPage > range)) {
HXLINE( 774)				adjustedPage = range;
            			}
            		}
HXLINE( 776)		return adjustedPage;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,getAdjustedPage,return )

void BaseScrollBar_obj::thumbSkin_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_779_thumbSkin_mouseDownHandler)
HXLINE( 780)		bool _hx_tmp;
HXDLIN( 780)		if (this->_enabled) {
HXLINE( 780)			_hx_tmp = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 780)			_hx_tmp = true;
            		}
HXDLIN( 780)		if (_hx_tmp) {
HXLINE( 781)			return;
            		}
HXLINE( 784)		 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 785)		bool result = exclusivePointer->claimMouse(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 786)		if (!(result)) {
HXLINE( 787)			return;
            		}
HXLINE( 790)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->thumbSkin_stage_mouseMoveHandler_dyn(),false,0,true);
HXLINE( 791)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->thumbSkin_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 793)		this->_thumbStartX = this->_currentThumbSkin->get_x();
HXLINE( 794)		this->_thumbStartY = this->_currentThumbSkin->get_y();
HXLINE( 797)		this->_pointerStartX = this->get_mouseX();
HXLINE( 798)		this->_pointerStartY = this->get_mouseY();
HXLINE( 799)		this->_dragging = true;
HXLINE( 800)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollStart",15,bd,e8,cd),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,thumbSkin_mouseDownHandler,(void))

void BaseScrollBar_obj::thumbSkin_stage_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_803_thumbSkin_stage_mouseMoveHandler)
HXLINE( 804)		Float newValue = this->get_mouseX();
HXDLIN( 804)		Float newValue1 = this->locationToValue(newValue,this->get_mouseY());
HXLINE( 805)		newValue1 = this->restrictValue(newValue1);
HXLINE( 807)		this->set_value(newValue1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,thumbSkin_stage_mouseMoveHandler,(void))

void BaseScrollBar_obj::thumbSkin_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_810_thumbSkin_stage_mouseUpHandler)
HXLINE( 811)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 812)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->thumbSkin_stage_mouseMoveHandler_dyn(),null());
HXLINE( 813)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->thumbSkin_stage_mouseUpHandler_dyn(),null());
HXLINE( 814)		this->_dragging = false;
HXLINE( 815)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollComplete",e6,e9,b8,0b),null(),null());
HXLINE( 816)		if (!(this->liveDragging)) {
HXLINE( 817)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,thumbSkin_stage_mouseUpHandler,(void))

void BaseScrollBar_obj::trackSkin_mouseDownHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_821_trackSkin_mouseDownHandler)
HXLINE( 822)		bool _hx_tmp;
HXDLIN( 822)		if (this->_enabled) {
HXLINE( 822)			_hx_tmp = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 822)			_hx_tmp = true;
            		}
HXDLIN( 822)		if (_hx_tmp) {
HXLINE( 823)			return;
            		}
HXLINE( 826)		 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 827)		bool result = exclusivePointer->claimMouse(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 828)		if (!(result)) {
HXLINE( 829)			return;
            		}
HXLINE( 832)		this->stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->trackSkin_stage_mouseMoveHandler_dyn(),false,0,true);
HXLINE( 833)		this->stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->trackSkin_stage_mouseUpHandler_dyn(),false,0,true);
HXLINE( 835)		Float _hx_tmp1 = this->get_mouseX();
HXDLIN( 835)		this->saveThumbStart(_hx_tmp1,this->get_mouseY());
HXLINE( 836)		this->_pointerStartX = this->get_mouseX();
HXLINE( 837)		this->_pointerStartY = this->get_mouseY();
HXLINE( 838)		this->_dragging = true;
HXLINE( 839)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollStart",15,bd,e8,cd),null(),null());
HXLINE( 841)		Float newValue = this->get_mouseX();
HXDLIN( 841)		Float newValue1 = this->locationToValue(newValue,this->get_mouseY());
HXLINE( 842)		newValue1 = this->restrictValue(newValue1);
HXLINE( 844)		this->set_value(newValue1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,trackSkin_mouseDownHandler,(void))

void BaseScrollBar_obj::trackSkin_stage_mouseMoveHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_847_trackSkin_stage_mouseMoveHandler)
HXLINE( 848)		Float newValue = this->get_mouseX();
HXDLIN( 848)		Float newValue1 = this->locationToValue(newValue,this->get_mouseY());
HXLINE( 849)		newValue1 = this->restrictValue(newValue1);
HXLINE( 851)		this->set_value(newValue1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,trackSkin_stage_mouseMoveHandler,(void))

void BaseScrollBar_obj::trackSkin_stage_mouseUpHandler( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3c2c6b8d019ab331_854_trackSkin_stage_mouseUpHandler)
HXLINE( 855)		 ::openfl::display::Stage stage = ::hx::TCast<  ::openfl::display::Stage >::cast(event->currentTarget);
HXLINE( 856)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->trackSkin_stage_mouseMoveHandler_dyn(),null());
HXLINE( 857)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),this->trackSkin_stage_mouseUpHandler_dyn(),null());
HXLINE( 858)		this->_dragging = false;
HXLINE( 859)		::feathers::events::ScrollEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("scrollComplete",e6,e9,b8,0b),null(),null());
HXLINE( 860)		if (!(this->liveDragging)) {
HXLINE( 861)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,trackSkin_stage_mouseUpHandler,(void))

 ::openfl::display::InteractiveObject BaseScrollBar_obj::get_thumbSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_thumbSkin)
HXDLIN(  85)		return this->_hx___thumbSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_thumbSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::set_thumbSkin( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_thumbSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("thumbSkin",b3,a7,8a,0c),null()))) {
HXLINE( 101)			return this->_hx___thumbSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___thumbSkin,value )) {
HXLINE( 104)			return this->_hx___thumbSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_thumbSkin_dyn();
HXLINE( 110)		this->_hx___thumbSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___thumbSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_thumbSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::clearStyle_thumbSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_thumbSkin)
HXLINE( 126)		this->set_thumbSkin(null());
HXLINE( 127)		return this->get_thumbSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_thumbSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::get_trackSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_trackSkin)
HXDLIN(  85)		return this->_hx___trackSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_trackSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::set_trackSkin( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_trackSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("trackSkin",a8,72,df,37),null()))) {
HXLINE( 101)			return this->_hx___trackSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___trackSkin,value )) {
HXLINE( 104)			return this->_hx___trackSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_trackSkin_dyn();
HXLINE( 110)		this->_hx___trackSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___trackSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_trackSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::clearStyle_trackSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_trackSkin)
HXLINE( 126)		this->set_trackSkin(null());
HXLINE( 127)		return this->get_trackSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_trackSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::get_secondaryTrackSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_secondaryTrackSkin)
HXDLIN(  85)		return this->_hx___secondaryTrackSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_secondaryTrackSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::set_secondaryTrackSkin( ::openfl::display::InteractiveObject value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_secondaryTrackSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("secondaryTrackSkin",94,74,f4,7c),null()))) {
HXLINE( 101)			return this->_hx___secondaryTrackSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___secondaryTrackSkin,value )) {
HXLINE( 104)			return this->_hx___secondaryTrackSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_secondaryTrackSkin_dyn();
HXLINE( 110)		this->_hx___secondaryTrackSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___secondaryTrackSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_secondaryTrackSkin,return )

 ::openfl::display::InteractiveObject BaseScrollBar_obj::clearStyle_secondaryTrackSkin(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_secondaryTrackSkin)
HXLINE( 126)		this->set_secondaryTrackSkin(null());
HXLINE( 127)		return this->get_secondaryTrackSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_secondaryTrackSkin,return )

bool BaseScrollBar_obj::get_fixedThumbSize(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_fixedThumbSize)
HXDLIN(  85)		return this->_hx___fixedThumbSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_fixedThumbSize,return )

bool BaseScrollBar_obj::set_fixedThumbSize(bool value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_fixedThumbSize)
HXLINE( 100)		if (!(this->setStyle(HX_("fixedThumbSize",e3,49,f1,a1),null()))) {
HXLINE( 101)			return this->_hx___fixedThumbSize;
            		}
HXLINE( 103)		if ((this->_hx___fixedThumbSize == value)) {
HXLINE( 104)			return this->_hx___fixedThumbSize;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_fixedThumbSize_dyn();
HXLINE( 110)		this->_hx___fixedThumbSize = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___fixedThumbSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_fixedThumbSize,return )

bool BaseScrollBar_obj::clearStyle_fixedThumbSize(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_fixedThumbSize)
HXLINE( 126)		this->set_fixedThumbSize(false);
HXLINE( 127)		return this->get_fixedThumbSize();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_fixedThumbSize,return )

Float BaseScrollBar_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_paddingTop)
HXDLIN(  85)		return this->_hx___paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_paddingTop,return )

Float BaseScrollBar_obj::set_paddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_paddingTop)
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


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_paddingTop,return )

Float BaseScrollBar_obj::clearStyle_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingTop)
HXLINE( 126)		this->set_paddingTop(((Float)0.0));
HXLINE( 127)		return this->get_paddingTop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_paddingTop,return )

Float BaseScrollBar_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_paddingRight)
HXDLIN(  85)		return this->_hx___paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_paddingRight,return )

Float BaseScrollBar_obj::set_paddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_paddingRight)
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


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_paddingRight,return )

Float BaseScrollBar_obj::clearStyle_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingRight)
HXLINE( 126)		this->set_paddingRight(((Float)0.0));
HXLINE( 127)		return this->get_paddingRight();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_paddingRight,return )

Float BaseScrollBar_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_paddingBottom)
HXDLIN(  85)		return this->_hx___paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_paddingBottom,return )

Float BaseScrollBar_obj::set_paddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_paddingBottom)
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


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_paddingBottom,return )

Float BaseScrollBar_obj::clearStyle_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingBottom)
HXLINE( 126)		this->set_paddingBottom(((Float)0.0));
HXLINE( 127)		return this->get_paddingBottom();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_paddingBottom,return )

Float BaseScrollBar_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_paddingLeft)
HXDLIN(  85)		return this->_hx___paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_paddingLeft,return )

Float BaseScrollBar_obj::set_paddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_paddingLeft)
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


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_paddingLeft,return )

Float BaseScrollBar_obj::clearStyle_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_paddingLeft)
HXLINE( 126)		this->set_paddingLeft(((Float)0.0));
HXLINE( 127)		return this->get_paddingLeft();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_paddingLeft,return )

bool BaseScrollBar_obj::get_hideThumbWhenDisabled(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_85_get_hideThumbWhenDisabled)
HXDLIN(  85)		return this->_hx___hideThumbWhenDisabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,get_hideThumbWhenDisabled,return )

bool BaseScrollBar_obj::set_hideThumbWhenDisabled(bool value){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_99_set_hideThumbWhenDisabled)
HXLINE( 100)		if (!(this->setStyle(HX_("hideThumbWhenDisabled",6a,b6,bc,82),null()))) {
HXLINE( 101)			return this->_hx___hideThumbWhenDisabled;
            		}
HXLINE( 103)		if ((this->_hx___hideThumbWhenDisabled == value)) {
HXLINE( 104)			return this->_hx___hideThumbWhenDisabled;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_hideThumbWhenDisabled_dyn();
HXLINE( 110)		this->_hx___hideThumbWhenDisabled = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___hideThumbWhenDisabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseScrollBar_obj,set_hideThumbWhenDisabled,return )

bool BaseScrollBar_obj::clearStyle_hideThumbWhenDisabled(){
            	HX_STACKFRAME(&_hx_pos_6dcf85a8b028089f_125_clearStyle_hideThumbWhenDisabled)
HXLINE( 126)		this->set_hideThumbWhenDisabled(false);
HXLINE( 127)		return this->get_hideThumbWhenDisabled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScrollBar_obj,clearStyle_hideThumbWhenDisabled,return )


::hx::ObjectPtr< BaseScrollBar_obj > BaseScrollBar_obj::__new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	::hx::ObjectPtr< BaseScrollBar_obj > __this = new BaseScrollBar_obj();
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

::hx::ObjectPtr< BaseScrollBar_obj > BaseScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	BaseScrollBar_obj *__this = (BaseScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseScrollBar_obj), true, "feathers.controls.supportClasses.BaseScrollBar"));
	*(void **)__this = BaseScrollBar_obj::_hx_vtable;
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

BaseScrollBar_obj::BaseScrollBar_obj()
{
}

void BaseScrollBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScrollBar);
	HX_MARK_MEMBER_NAME(_isDefaultValue,"_isDefaultValue");
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_minimum,"_minimum");
	HX_MARK_MEMBER_NAME(_maximum,"_maximum");
	HX_MARK_MEMBER_NAME(_step,"_step");
	HX_MARK_MEMBER_NAME(_snapInterval,"_snapInterval");
	HX_MARK_MEMBER_NAME(_page,"_page");
	HX_MARK_MEMBER_NAME(liveDragging,"liveDragging");
	HX_MARK_MEMBER_NAME(_currentThumbSkin,"_currentThumbSkin");
	HX_MARK_MEMBER_NAME(_thumbSkinMeasurements,"_thumbSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentTrackSkin,"_currentTrackSkin");
	HX_MARK_MEMBER_NAME(_trackSkinMeasurements,"_trackSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentSecondaryTrackSkin,"_currentSecondaryTrackSkin");
	HX_MARK_MEMBER_NAME(_secondaryTrackSkinMeasurements,"_secondaryTrackSkinMeasurements");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_pointerStartX,"_pointerStartX");
	HX_MARK_MEMBER_NAME(_pointerStartY,"_pointerStartY");
	HX_MARK_MEMBER_NAME(_thumbStartX,"_thumbStartX");
	HX_MARK_MEMBER_NAME(_thumbStartY,"_thumbStartY");
	HX_MARK_MEMBER_NAME(_previousFallbackTrackWidth,"_previousFallbackTrackWidth");
	HX_MARK_MEMBER_NAME(_previousFallbackTrackHeight,"_previousFallbackTrackHeight");
	HX_MARK_MEMBER_NAME(_hx___thumbSkin,"__thumbSkin");
	HX_MARK_MEMBER_NAME(_hx___trackSkin,"__trackSkin");
	HX_MARK_MEMBER_NAME(_hx___secondaryTrackSkin,"__secondaryTrackSkin");
	HX_MARK_MEMBER_NAME(_hx___fixedThumbSize,"__fixedThumbSize");
	HX_MARK_MEMBER_NAME(_hx___paddingTop,"__paddingTop");
	HX_MARK_MEMBER_NAME(_hx___paddingRight,"__paddingRight");
	HX_MARK_MEMBER_NAME(_hx___paddingBottom,"__paddingBottom");
	HX_MARK_MEMBER_NAME(_hx___paddingLeft,"__paddingLeft");
	HX_MARK_MEMBER_NAME(_hx___hideThumbWhenDisabled,"__hideThumbWhenDisabled");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseScrollBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isDefaultValue,"_isDefaultValue");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_minimum,"_minimum");
	HX_VISIT_MEMBER_NAME(_maximum,"_maximum");
	HX_VISIT_MEMBER_NAME(_step,"_step");
	HX_VISIT_MEMBER_NAME(_snapInterval,"_snapInterval");
	HX_VISIT_MEMBER_NAME(_page,"_page");
	HX_VISIT_MEMBER_NAME(liveDragging,"liveDragging");
	HX_VISIT_MEMBER_NAME(_currentThumbSkin,"_currentThumbSkin");
	HX_VISIT_MEMBER_NAME(_thumbSkinMeasurements,"_thumbSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentTrackSkin,"_currentTrackSkin");
	HX_VISIT_MEMBER_NAME(_trackSkinMeasurements,"_trackSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentSecondaryTrackSkin,"_currentSecondaryTrackSkin");
	HX_VISIT_MEMBER_NAME(_secondaryTrackSkinMeasurements,"_secondaryTrackSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_pointerStartX,"_pointerStartX");
	HX_VISIT_MEMBER_NAME(_pointerStartY,"_pointerStartY");
	HX_VISIT_MEMBER_NAME(_thumbStartX,"_thumbStartX");
	HX_VISIT_MEMBER_NAME(_thumbStartY,"_thumbStartY");
	HX_VISIT_MEMBER_NAME(_previousFallbackTrackWidth,"_previousFallbackTrackWidth");
	HX_VISIT_MEMBER_NAME(_previousFallbackTrackHeight,"_previousFallbackTrackHeight");
	HX_VISIT_MEMBER_NAME(_hx___thumbSkin,"__thumbSkin");
	HX_VISIT_MEMBER_NAME(_hx___trackSkin,"__trackSkin");
	HX_VISIT_MEMBER_NAME(_hx___secondaryTrackSkin,"__secondaryTrackSkin");
	HX_VISIT_MEMBER_NAME(_hx___fixedThumbSize,"__fixedThumbSize");
	HX_VISIT_MEMBER_NAME(_hx___paddingTop,"__paddingTop");
	HX_VISIT_MEMBER_NAME(_hx___paddingRight,"__paddingRight");
	HX_VISIT_MEMBER_NAME(_hx___paddingBottom,"__paddingBottom");
	HX_VISIT_MEMBER_NAME(_hx___paddingLeft,"__paddingLeft");
	HX_VISIT_MEMBER_NAME(_hx___hideThumbWhenDisabled,"__hideThumbWhenDisabled");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_step() ); }
		if (HX_FIELD_EQ(inName,"page") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_page() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_value() ); }
		if (HX_FIELD_EQ(inName,"_step") ) { return ::hx::Val( _step ); }
		if (HX_FIELD_EQ(inName,"_page") ) { return ::hx::Val( _page ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return ::hx::Val( _value ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minimum() ); }
		if (HX_FIELD_EQ(inName,"maximum") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maximum() ); }
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_minimum") ) { return ::hx::Val( _minimum ); }
		if (HX_FIELD_EQ(inName,"_maximum") ) { return ::hx::Val( _maximum ); }
		if (HX_FIELD_EQ(inName,"get_step") ) { return ::hx::Val( get_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_step") ) { return ::hx::Val( set_step_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_page") ) { return ::hx::Val( get_page_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_page") ) { return ::hx::Val( set_page_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"thumbSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thumbSkin() ); }
		if (HX_FIELD_EQ(inName,"trackSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_trackSkin() ); }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return ::hx::Val( _dragging ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_minimum") ) { return ::hx::Val( get_minimum_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minimum") ) { return ::hx::Val( set_minimum_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maximum") ) { return ::hx::Val( get_maximum_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maximum") ) { return ::hx::Val( set_maximum_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		if (HX_FIELD_EQ(inName,"layoutThumb") ) { return ::hx::Val( layoutThumb_dyn() ); }
		if (HX_FIELD_EQ(inName,"__thumbSkin") ) { return ::hx::Val( _hx___thumbSkin ); }
		if (HX_FIELD_EQ(inName,"__trackSkin") ) { return ::hx::Val( _hx___trackSkin ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"snapInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_snapInterval() ); }
		if (HX_FIELD_EQ(inName,"liveDragging") ) { return ::hx::Val( liveDragging ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"_thumbStartX") ) { return ::hx::Val( _thumbStartX ); }
		if (HX_FIELD_EQ(inName,"_thumbStartY") ) { return ::hx::Val( _thumbStartY ); }
		if (HX_FIELD_EQ(inName,"refreshThumb") ) { return ::hx::Val( refreshThumb_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshTrack") ) { return ::hx::Val( refreshTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingTop") ) { return ::hx::Val( _hx___paddingTop ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_snapInterval") ) { return ::hx::Val( _snapInterval ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"restrictValue") ) { return ::hx::Val( restrictValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_thumbSkin") ) { return ::hx::Val( get_thumbSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thumbSkin") ) { return ::hx::Val( set_thumbSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_trackSkin") ) { return ::hx::Val( get_trackSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_trackSkin") ) { return ::hx::Val( set_trackSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingLeft") ) { return ::hx::Val( _hx___paddingLeft ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixedThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fixedThumbSize() ); }
		if (HX_FIELD_EQ(inName,"_pointerStartX") ) { return ::hx::Val( _pointerStartX ); }
		if (HX_FIELD_EQ(inName,"_pointerStartY") ) { return ::hx::Val( _pointerStartY ); }
		if (HX_FIELD_EQ(inName,"refreshEnabled") ) { return ::hx::Val( refreshEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalizeValue") ) { return ::hx::Val( normalizeValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveThumbStart") ) { return ::hx::Val( saveThumbStart_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingRight") ) { return ::hx::Val( _hx___paddingRight ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_isDefaultValue") ) { return ::hx::Val( _isDefaultValue ); }
		if (HX_FIELD_EQ(inName,"valueToLocation") ) { return ::hx::Val( valueToLocation_dyn() ); }
		if (HX_FIELD_EQ(inName,"locationToValue") ) { return ::hx::Val( locationToValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAdjustedPage") ) { return ::hx::Val( getAdjustedPage_dyn() ); }
		if (HX_FIELD_EQ(inName,"__paddingBottom") ) { return ::hx::Val( _hx___paddingBottom ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_snapInterval") ) { return ::hx::Val( get_snapInterval_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_snapInterval") ) { return ::hx::Val( set_snapInterval_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutSplitTrack") ) { return ::hx::Val( layoutSplitTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fixedThumbSize") ) { return ::hx::Val( _hx___fixedThumbSize ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentThumbSkin") ) { return ::hx::Val( _currentThumbSkin ); }
		if (HX_FIELD_EQ(inName,"_currentTrackSkin") ) { return ::hx::Val( _currentTrackSkin ); }
		if (HX_FIELD_EQ(inName,"layoutSingleTrack") ) { return ::hx::Val( layoutSingleTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFallbackTrack") ) { return ::hx::Val( drawFallbackTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"secondaryTrackSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_secondaryTrackSkin() ); }
		if (HX_FIELD_EQ(inName,"get_fixedThumbSize") ) { return ::hx::Val( get_fixedThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fixedThumbSize") ) { return ::hx::Val( set_fixedThumbSize_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"clearStyle_thumbSkin") ) { return ::hx::Val( clearStyle_thumbSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_trackSkin") ) { return ::hx::Val( clearStyle_trackSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__secondaryTrackSkin") ) { return ::hx::Val( _hx___secondaryTrackSkin ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hideThumbWhenDisabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hideThumbWhenDisabled() ); }
		if (HX_FIELD_EQ(inName,"refreshSecondaryTrack") ) { return ::hx::Val( refreshSecondaryTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingTop") ) { return ::hx::Val( clearStyle_paddingTop_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_thumbSkinMeasurements") ) { return ::hx::Val( _thumbSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"_trackSkinMeasurements") ) { return ::hx::Val( _trackSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"applyValueRestrictions") ) { return ::hx::Val( applyValueRestrictions_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_secondaryTrackSkin") ) { return ::hx::Val( get_secondaryTrackSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_secondaryTrackSkin") ) { return ::hx::Val( set_secondaryTrackSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_paddingLeft") ) { return ::hx::Val( clearStyle_paddingLeft_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"clearStyle_paddingRight") ) { return ::hx::Val( clearStyle_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hideThumbWhenDisabled") ) { return ::hx::Val( _hx___hideThumbWhenDisabled ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"clearStyle_paddingBottom") ) { return ::hx::Val( clearStyle_paddingBottom_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"clearStyle_fixedThumbSize") ) { return ::hx::Val( clearStyle_fixedThumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hideThumbWhenDisabled") ) { return ::hx::Val( get_hideThumbWhenDisabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hideThumbWhenDisabled") ) { return ::hx::Val( set_hideThumbWhenDisabled_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_currentSecondaryTrackSkin") ) { return ::hx::Val( _currentSecondaryTrackSkin ); }
		if (HX_FIELD_EQ(inName,"thumbSkin_mouseDownHandler") ) { return ::hx::Val( thumbSkin_mouseDownHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"trackSkin_mouseDownHandler") ) { return ::hx::Val( trackSkin_mouseDownHandler_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_previousFallbackTrackWidth") ) { return ::hx::Val( _previousFallbackTrackWidth ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_previousFallbackTrackHeight") ) { return ::hx::Val( _previousFallbackTrackHeight ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"clearStyle_secondaryTrackSkin") ) { return ::hx::Val( clearStyle_secondaryTrackSkin_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"thumbSkin_stage_mouseUpHandler") ) { return ::hx::Val( thumbSkin_stage_mouseUpHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"trackSkin_stage_mouseUpHandler") ) { return ::hx::Val( trackSkin_stage_mouseUpHandler_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_secondaryTrackSkinMeasurements") ) { return ::hx::Val( _secondaryTrackSkinMeasurements ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"thumbSkin_stage_mouseMoveHandler") ) { return ::hx::Val( thumbSkin_stage_mouseMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"trackSkin_stage_mouseMoveHandler") ) { return ::hx::Val( trackSkin_stage_mouseMoveHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_hideThumbWhenDisabled") ) { return ::hx::Val( clearStyle_hideThumbWhenDisabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseScrollBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_step(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"page") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_page(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_step") ) { _step=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_page") ) { _page=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minimum") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minimum(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maximum") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maximum(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_minimum") ) { _minimum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maximum") ) { _maximum=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thumbSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thumbSkin(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		if (HX_FIELD_EQ(inName,"trackSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_trackSkin(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__thumbSkin") ) { _hx___thumbSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__trackSkin") ) { _hx___trackSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"snapInterval") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_snapInterval(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"liveDragging") ) { liveDragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_thumbStartX") ) { _thumbStartX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thumbStartY") ) { _thumbStartY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paddingTop") ) { _hx___paddingTop=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_snapInterval") ) { _snapInterval=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__paddingLeft") ) { _hx___paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fixedThumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fixedThumbSize(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_pointerStartX") ) { _pointerStartX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointerStartY") ) { _pointerStartY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paddingRight") ) { _hx___paddingRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_isDefaultValue") ) { _isDefaultValue=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paddingBottom") ) { _hx___paddingBottom=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fixedThumbSize") ) { _hx___fixedThumbSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentThumbSkin") ) { _currentThumbSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentTrackSkin") ) { _currentTrackSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"secondaryTrackSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_secondaryTrackSkin(inValue.Cast<  ::openfl::display::InteractiveObject >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__secondaryTrackSkin") ) { _hx___secondaryTrackSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hideThumbWhenDisabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hideThumbWhenDisabled(inValue.Cast< bool >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_thumbSkinMeasurements") ) { _thumbSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_trackSkinMeasurements") ) { _trackSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__hideThumbWhenDisabled") ) { _hx___hideThumbWhenDisabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_currentSecondaryTrackSkin") ) { _currentSecondaryTrackSkin=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_previousFallbackTrackWidth") ) { _previousFallbackTrackWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_previousFallbackTrackHeight") ) { _previousFallbackTrackHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_secondaryTrackSkinMeasurements") ) { _secondaryTrackSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseScrollBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_isDefaultValue",99,e2,15,27));
	outFields->push(HX_("_value",b2,c6,9f,2d));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("_minimum",4f,1f,a3,85));
	outFields->push(HX_("minimum",ce,c5,ea,4b));
	outFields->push(HX_("_maximum",61,09,ca,14));
	outFields->push(HX_("maximum",e0,af,11,db));
	outFields->push(HX_("_step",2b,03,6d,ff));
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("_snapInterval",8e,78,02,f3));
	outFields->push(HX_("snapInterval",af,e5,93,10));
	outFields->push(HX_("_page",2e,f6,62,fd));
	outFields->push(HX_("page",4f,da,51,4a));
	outFields->push(HX_("liveDragging",db,e3,cb,84));
	outFields->push(HX_("_currentThumbSkin",99,0a,36,98));
	outFields->push(HX_("_thumbSkinMeasurements",8b,82,78,b1));
	outFields->push(HX_("thumbSkin",b3,a7,8a,0c));
	outFields->push(HX_("_currentTrackSkin",8e,d5,8a,c3));
	outFields->push(HX_("_trackSkinMeasurements",00,69,0c,2f));
	outFields->push(HX_("trackSkin",a8,72,df,37));
	outFields->push(HX_("_currentSecondaryTrackSkin",ee,84,b4,e8));
	outFields->push(HX_("_secondaryTrackSkinMeasurements",4a,ba,64,e6));
	outFields->push(HX_("secondaryTrackSkin",94,74,f4,7c));
	outFields->push(HX_("fixedThumbSize",e3,49,f1,a1));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("hideThumbWhenDisabled",6a,b6,bc,82));
	outFields->push(HX_("_dragging",2e,34,22,7f));
	outFields->push(HX_("_pointerStartX",94,32,2b,a5));
	outFields->push(HX_("_pointerStartY",95,32,2b,a5));
	outFields->push(HX_("_thumbStartX",6d,da,a8,d1));
	outFields->push(HX_("_thumbStartY",6e,da,a8,d1));
	outFields->push(HX_("_previousFallbackTrackWidth",73,a7,a9,84));
	outFields->push(HX_("_previousFallbackTrackHeight",da,55,18,46));
	outFields->push(HX_("__thumbSkin",93,f0,b6,3a));
	outFields->push(HX_("__trackSkin",88,bb,0b,66));
	outFields->push(HX_("__secondaryTrackSkin",b4,0f,28,5c));
	outFields->push(HX_("__fixedThumbSize",03,d5,30,d6));
	outFields->push(HX_("__paddingTop",64,78,99,72));
	outFields->push(HX_("__paddingRight",6b,6f,68,3b));
	outFields->push(HX_("__paddingBottom",7c,a0,4b,d7));
	outFields->push(HX_("__paddingLeft",58,8b,5e,ce));
	outFields->push(HX_("__hideThumbWhenDisabled",4a,cf,a2,6e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseScrollBar_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BaseScrollBar_obj,_isDefaultValue),HX_("_isDefaultValue",99,e2,15,27)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_value),HX_("_value",b2,c6,9f,2d)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_minimum),HX_("_minimum",4f,1f,a3,85)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_maximum),HX_("_maximum",61,09,ca,14)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_step),HX_("_step",2b,03,6d,ff)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_snapInterval),HX_("_snapInterval",8e,78,02,f3)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_page),HX_("_page",2e,f6,62,fd)},
	{::hx::fsBool,(int)offsetof(BaseScrollBar_obj,liveDragging),HX_("liveDragging",db,e3,cb,84)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_currentThumbSkin),HX_("_currentThumbSkin",99,0a,36,98)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BaseScrollBar_obj,_thumbSkinMeasurements),HX_("_thumbSkinMeasurements",8b,82,78,b1)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_currentTrackSkin),HX_("_currentTrackSkin",8e,d5,8a,c3)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BaseScrollBar_obj,_trackSkinMeasurements),HX_("_trackSkinMeasurements",00,69,0c,2f)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_currentSecondaryTrackSkin),HX_("_currentSecondaryTrackSkin",ee,84,b4,e8)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(BaseScrollBar_obj,_secondaryTrackSkinMeasurements),HX_("_secondaryTrackSkinMeasurements",4a,ba,64,e6)},
	{::hx::fsBool,(int)offsetof(BaseScrollBar_obj,_dragging),HX_("_dragging",2e,34,22,7f)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_pointerStartX),HX_("_pointerStartX",94,32,2b,a5)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_pointerStartY),HX_("_pointerStartY",95,32,2b,a5)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_thumbStartX),HX_("_thumbStartX",6d,da,a8,d1)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_thumbStartY),HX_("_thumbStartY",6e,da,a8,d1)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_previousFallbackTrackWidth),HX_("_previousFallbackTrackWidth",73,a7,a9,84)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_previousFallbackTrackHeight),HX_("_previousFallbackTrackHeight",da,55,18,46)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_hx___thumbSkin),HX_("__thumbSkin",93,f0,b6,3a)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_hx___trackSkin),HX_("__trackSkin",88,bb,0b,66)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(BaseScrollBar_obj,_hx___secondaryTrackSkin),HX_("__secondaryTrackSkin",b4,0f,28,5c)},
	{::hx::fsBool,(int)offsetof(BaseScrollBar_obj,_hx___fixedThumbSize),HX_("__fixedThumbSize",03,d5,30,d6)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_hx___paddingTop),HX_("__paddingTop",64,78,99,72)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_hx___paddingRight),HX_("__paddingRight",6b,6f,68,3b)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_hx___paddingBottom),HX_("__paddingBottom",7c,a0,4b,d7)},
	{::hx::fsFloat,(int)offsetof(BaseScrollBar_obj,_hx___paddingLeft),HX_("__paddingLeft",58,8b,5e,ce)},
	{::hx::fsBool,(int)offsetof(BaseScrollBar_obj,_hx___hideThumbWhenDisabled),HX_("__hideThumbWhenDisabled",4a,cf,a2,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseScrollBar_obj_sMemberFields[] = {
	HX_("_isDefaultValue",99,e2,15,27),
	HX_("_value",b2,c6,9f,2d),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("_minimum",4f,1f,a3,85),
	HX_("get_minimum",e5,25,e5,d1),
	HX_("set_minimum",f1,2c,52,dc),
	HX_("_maximum",61,09,ca,14),
	HX_("get_maximum",f7,0f,0c,61),
	HX_("set_maximum",03,17,79,6b),
	HX_("_step",2b,03,6d,ff),
	HX_("get_step",d5,a2,16,cc),
	HX_("set_step",49,fc,73,7a),
	HX_("_snapInterval",8e,78,02,f3),
	HX_("get_snapInterval",38,d2,32,15),
	HX_("set_snapInterval",ac,bf,74,6b),
	HX_("_page",2e,f6,62,fd),
	HX_("get_page",d8,95,0c,ca),
	HX_("set_page",4c,ef,69,78),
	HX_("liveDragging",db,e3,cb,84),
	HX_("_currentThumbSkin",99,0a,36,98),
	HX_("_thumbSkinMeasurements",8b,82,78,b1),
	HX_("_currentTrackSkin",8e,d5,8a,c3),
	HX_("_trackSkinMeasurements",00,69,0c,2f),
	HX_("_currentSecondaryTrackSkin",ee,84,b4,e8),
	HX_("_secondaryTrackSkinMeasurements",4a,ba,64,e6),
	HX_("_dragging",2e,34,22,7f),
	HX_("_pointerStartX",94,32,2b,a5),
	HX_("_pointerStartY",95,32,2b,a5),
	HX_("_thumbStartX",6d,da,a8,d1),
	HX_("_thumbStartY",6e,da,a8,d1),
	HX_("_previousFallbackTrackWidth",73,a7,a9,84),
	HX_("_previousFallbackTrackHeight",da,55,18,46),
	HX_("setPadding",4f,7e,5c,23),
	HX_("applyValueRestrictions",aa,0a,21,15),
	HX_("initialize",50,31,bb,ec),
	HX_("update",09,86,05,87),
	HX_("measure",5e,fb,e9,3c),
	HX_("refreshThumb",3b,9e,14,23),
	HX_("refreshTrack",b0,8a,a1,29),
	HX_("refreshSecondaryTrack",b2,01,dc,94),
	HX_("refreshEnabled",e6,13,46,f3),
	HX_("layoutContent",af,8f,21,da),
	HX_("layoutSplitTrack",9b,e8,5c,0b),
	HX_("layoutSingleTrack",59,60,fe,1b),
	HX_("layoutThumb",0c,fb,7b,c0),
	HX_("drawFallbackTrack",65,44,d5,38),
	HX_("normalizeValue",a4,38,cf,52),
	HX_("restrictValue",95,ea,30,a6),
	HX_("valueToLocation",a1,9d,2e,0f),
	HX_("locationToValue",41,e6,82,3f),
	HX_("saveThumbStart",09,d0,2e,f1),
	HX_("getAdjustedPage",d3,f1,2a,1f),
	HX_("thumbSkin_mouseDownHandler",af,16,a0,d5),
	HX_("thumbSkin_stage_mouseMoveHandler",c1,fe,cc,85),
	HX_("thumbSkin_stage_mouseUpHandler",b7,c6,f9,b2),
	HX_("trackSkin_mouseDownHandler",1a,a8,eb,1f),
	HX_("trackSkin_stage_mouseMoveHandler",6c,f2,13,24),
	HX_("trackSkin_stage_mouseUpHandler",a2,e9,c1,34),
	HX_("__thumbSkin",93,f0,b6,3a),
	HX_("get_thumbSkin",8a,7b,ee,cd),
	HX_("set_thumbSkin",96,5d,f4,12),
	HX_("clearStyle_thumbSkin",d8,ec,7b,c6),
	HX_("__trackSkin",88,bb,0b,66),
	HX_("get_trackSkin",7f,46,43,f9),
	HX_("set_trackSkin",8b,28,49,3e),
	HX_("clearStyle_trackSkin",cd,b7,d0,f1),
	HX_("__secondaryTrackSkin",b4,0f,28,5c),
	HX_("get_secondaryTrackSkin",dd,ed,88,d6),
	HX_("set_secondaryTrackSkin",51,6a,34,0a),
	HX_("clearStyle_secondaryTrackSkin",cf,e2,f5,59),
	HX_("__fixedThumbSize",03,d5,30,d6),
	HX_("get_fixedThumbSize",ac,2a,8b,3d),
	HX_("set_fixedThumbSize",20,5d,3a,1a),
	HX_("clearStyle_fixedThumbSize",9e,3e,7a,a9),
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
	HX_("__hideThumbWhenDisabled",4a,cf,a2,6e),
	HX_("get_hideThumbWhenDisabled",c1,70,ba,88),
	HX_("set_hideThumbWhenDisabled",cd,34,11,f5),
	HX_("clearStyle_hideThumbWhenDisabled",0f,9f,d3,d8),
	::String(null()) };

::hx::Class BaseScrollBar_obj::__mClass;

void BaseScrollBar_obj::__register()
{
	BaseScrollBar_obj _hx_dummy;
	BaseScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.supportClasses.BaseScrollBar",f8,23,67,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses
