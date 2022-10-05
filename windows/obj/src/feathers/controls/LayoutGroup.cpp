#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
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
#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelLayoutGroupStyles
#include <feathers/themes/steel/components/SteelLayoutGroupStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
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
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_af811a8d34d03704_60_new,"feathers.controls.LayoutGroup","new",0x437ef0cd,"feathers.controls.LayoutGroup.new","feathers/controls/LayoutGroup.hx",60,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_209_get_autoSizeMode,"feathers.controls.LayoutGroup","get_autoSizeMode",0x944c034f,"feathers.controls.LayoutGroup.get_autoSizeMode","feathers/controls/LayoutGroup.hx",209,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_212_set_autoSizeMode,"feathers.controls.LayoutGroup","set_autoSizeMode",0xea8df0c3,"feathers.controls.LayoutGroup.set_autoSizeMode","feathers/controls/LayoutGroup.hx",212,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_236_get_numChildren,"feathers.controls.LayoutGroup","get_numChildren",0xb7b2b129,"feathers.controls.LayoutGroup.get_numChildren","feathers/controls/LayoutGroup.hx",236,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_242_get__numChildren,"feathers.controls.LayoutGroup","get__numChildren",0x335663a2,"feathers.controls.LayoutGroup.get__numChildren","feathers/controls/LayoutGroup.hx",242,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_245_addChildAt,"feathers.controls.LayoutGroup","addChildAt",0xbf2a24c1,"feathers.controls.LayoutGroup.addChildAt","feathers/controls/LayoutGroup.hx",245,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_275__addChild,"feathers.controls.LayoutGroup","_addChild",0xdf937747,"feathers.controls.LayoutGroup._addChild","feathers/controls/LayoutGroup.hx",275,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_279__addChildAt,"feathers.controls.LayoutGroup","_addChildAt",0x84d5501a,"feathers.controls.LayoutGroup._addChildAt","feathers/controls/LayoutGroup.hx",279,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_282_removeChild,"feathers.controls.LayoutGroup","removeChild",0x28025c25,"feathers.controls.LayoutGroup.removeChild","feathers/controls/LayoutGroup.hx",282,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_299__removeChild,"feathers.controls.LayoutGroup","_removeChild",0x581d1eac,"feathers.controls.LayoutGroup._removeChild","feathers/controls/LayoutGroup.hx",299,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_302_removeChildAt,"feathers.controls.LayoutGroup","removeChildAt",0xf26da878,"feathers.controls.LayoutGroup.removeChildAt","feathers/controls/LayoutGroup.hx",302,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_310__removeChildAt,"feathers.controls.LayoutGroup","_removeChildAt",0x70a35abf,"feathers.controls.LayoutGroup._removeChildAt","feathers/controls/LayoutGroup.hx",310,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_314_getChildIndex,"feathers.controls.LayoutGroup","getChildIndex",0x6c0932b9,"feathers.controls.LayoutGroup.getChildIndex","feathers/controls/LayoutGroup.hx",314,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_318__getChildIndex,"feathers.controls.LayoutGroup","_getChildIndex",0xea3ee500,"feathers.controls.LayoutGroup._getChildIndex","feathers/controls/LayoutGroup.hx",318,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_321_getChildByName,"feathers.controls.LayoutGroup","getChildByName",0x965e463b,"feathers.controls.LayoutGroup.getChildByName","feathers/controls/LayoutGroup.hx",321,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_331__getChildByName,"feathers.controls.LayoutGroup","_getChildByName",0x87249214,"feathers.controls.LayoutGroup._getChildByName","feathers/controls/LayoutGroup.hx",331,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_334_removeChildren,"feathers.controls.LayoutGroup","removeChildren",0x2daae256,"feathers.controls.LayoutGroup.removeChildren","feathers/controls/LayoutGroup.hx",334,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_357__removeChildren,"feathers.controls.LayoutGroup","_removeChildren",0x1e712e2f,"feathers.controls.LayoutGroup._removeChildren","feathers/controls/LayoutGroup.hx",357,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_360_setChildIndex,"feathers.controls.LayoutGroup","setChildIndex",0xb10f14c5,"feathers.controls.LayoutGroup.setChildIndex","feathers/controls/LayoutGroup.hx",360,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_373__setChildIndex,"feathers.controls.LayoutGroup","_setChildIndex",0x2f44c70c,"feathers.controls.LayoutGroup._setChildIndex","feathers/controls/LayoutGroup.hx",373,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_377_getChildAt,"feathers.controls.LayoutGroup","getChildAt",0xa7017eec,"feathers.controls.LayoutGroup.getChildAt","feathers/controls/LayoutGroup.hx",377,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_381__getChildAt,"feathers.controls.LayoutGroup","_getChildAt",0x6cacaa45,"feathers.controls.LayoutGroup._getChildAt","feathers/controls/LayoutGroup.hx",381,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_385_initializeLayoutGroupTheme,"feathers.controls.LayoutGroup","initializeLayoutGroupTheme",0x64927c37,"feathers.controls.LayoutGroup.initializeLayoutGroupTheme","feathers/controls/LayoutGroup.hx",385,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_388_getPrivateIndexForPublicIndex,"feathers.controls.LayoutGroup","getPrivateIndexForPublicIndex",0xa6fef172,"feathers.controls.LayoutGroup.getPrivateIndexForPublicIndex","feathers/controls/LayoutGroup.hx",388,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_404_get_xmlContent,"feathers.controls.LayoutGroup","get_xmlContent",0x64a2d51e,"feathers.controls.LayoutGroup.get_xmlContent","feathers/controls/LayoutGroup.hx",404,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_407_set_xmlContent,"feathers.controls.LayoutGroup","set_xmlContent",0x84c2bd92,"feathers.controls.LayoutGroup.set_xmlContent","feathers/controls/LayoutGroup.hx",407,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_426_validateNow,"feathers.controls.LayoutGroup","validateNow",0xaed4978d,"feathers.controls.LayoutGroup.validateNow","feathers/controls/LayoutGroup.hx",426,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_438_update,"feathers.controls.LayoutGroup","update",0xbf9aa7bc,"feathers.controls.LayoutGroup.update","feathers/controls/LayoutGroup.hx",438,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_474_refreshDisabledOverlay,"feathers.controls.LayoutGroup","refreshDisabledOverlay",0xa7e4058c,"feathers.controls.LayoutGroup.refreshDisabledOverlay","feathers/controls/LayoutGroup.hx",474,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_495_refreshLayout,"feathers.controls.LayoutGroup","refreshLayout",0x09fa1d92,"feathers.controls.LayoutGroup.refreshLayout","feathers/controls/LayoutGroup.hx",495,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_509_refreshBackgroundSkin,"feathers.controls.LayoutGroup","refreshBackgroundSkin",0x6095fc73,"feathers.controls.LayoutGroup.refreshBackgroundSkin","feathers/controls/LayoutGroup.hx",509,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_519_getCurrentBackgroundSkin,"feathers.controls.LayoutGroup","getCurrentBackgroundSkin",0xd772f5a1,"feathers.controls.LayoutGroup.getCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",519,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_526_addCurrentBackgroundSkin,"feathers.controls.LayoutGroup","addCurrentBackgroundSkin",0x08ee4636,"feathers.controls.LayoutGroup.addCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",526,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_545_removeCurrentBackgroundSkin,"feathers.controls.LayoutGroup","removeCurrentBackgroundSkin",0x8e103c2d,"feathers.controls.LayoutGroup.removeCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",545,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_560_refreshMaskSkin,"feathers.controls.LayoutGroup","refreshMaskSkin",0x81de6271,"feathers.controls.LayoutGroup.refreshMaskSkin","feathers/controls/LayoutGroup.hx",560,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_571_getCurrentMaskSkin,"feathers.controls.LayoutGroup","getCurrentMaskSkin",0x4b27251f,"feathers.controls.LayoutGroup.getCurrentMaskSkin","feathers/controls/LayoutGroup.hx",571,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_574_addCurrentMaskSkin,"feathers.controls.LayoutGroup","addCurrentMaskSkin",0xe6d927f4,"feathers.controls.LayoutGroup.addCurrentMaskSkin","feathers/controls/LayoutGroup.hx",574,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_588_removeCurrentMaskSkin,"feathers.controls.LayoutGroup","removeCurrentMaskSkin",0xe869baab,"feathers.controls.LayoutGroup.removeCurrentMaskSkin","feathers/controls/LayoutGroup.hx",588,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_601_refreshViewPortBounds,"feathers.controls.LayoutGroup","refreshViewPortBounds",0xe8bd3283,"feathers.controls.LayoutGroup.refreshViewPortBounds","feathers/controls/LayoutGroup.hx",601,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_684_handleCustomLayout,"feathers.controls.LayoutGroup","handleCustomLayout",0x804b1336,"feathers.controls.LayoutGroup.handleCustomLayout","feathers/controls/LayoutGroup.hx",684,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_692_handleManualLayout,"feathers.controls.LayoutGroup","handleManualLayout",0xc78a578b,"feathers.controls.LayoutGroup.handleManualLayout","feathers/controls/LayoutGroup.hx",692,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_746_handleLayoutResult,"feathers.controls.LayoutGroup","handleLayoutResult",0x4bbdf522,"feathers.controls.LayoutGroup.handleLayoutResult","feathers/controls/LayoutGroup.hx",746,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_752_refreshMaskLayout,"feathers.controls.LayoutGroup","refreshMaskLayout",0xfc23df9e,"feathers.controls.LayoutGroup.refreshMaskLayout","feathers/controls/LayoutGroup.hx",752,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_766_refreshBackgroundLayout,"feathers.controls.LayoutGroup","refreshBackgroundLayout",0xab777e20,"feathers.controls.LayoutGroup.refreshBackgroundLayout","feathers/controls/LayoutGroup.hx",766,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_787_validateChildren,"feathers.controls.LayoutGroup","validateChildren",0x94f08b68,"feathers.controls.LayoutGroup.validateChildren","feathers/controls/LayoutGroup.hx",787,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_799_layoutGroup_addedToStageHandler,"feathers.controls.LayoutGroup","layoutGroup_addedToStageHandler",0x63f56d4a,"feathers.controls.LayoutGroup.layoutGroup_addedToStageHandler","feathers/controls/LayoutGroup.hx",799,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_810_layoutGroup_removedFromStageHandler,"feathers.controls.LayoutGroup","layoutGroup_removedFromStageHandler",0x435e6819,"feathers.controls.LayoutGroup.layoutGroup_removedFromStageHandler","feathers/controls/LayoutGroup.hx",810,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_816_layoutGroup_stage_resizeHandler,"feathers.controls.LayoutGroup","layoutGroup_stage_resizeHandler",0x772a2558,"feathers.controls.LayoutGroup.layoutGroup_stage_resizeHandler","feathers/controls/LayoutGroup.hx",816,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_819_layoutGroup_child_resizeHandler,"feathers.controls.LayoutGroup","layoutGroup_child_resizeHandler",0xb03d6cb6,"feathers.controls.LayoutGroup.layoutGroup_child_resizeHandler","feathers/controls/LayoutGroup.hx",819,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_830_layoutGroup_child_layoutDataChangeHandler,"feathers.controls.LayoutGroup","layoutGroup_child_layoutDataChangeHandler",0x824ed626,"feathers.controls.LayoutGroup.layoutGroup_child_layoutDataChangeHandler","feathers/controls/LayoutGroup.hx",830,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_841_layoutGroup_layout_changeHandler,"feathers.controls.LayoutGroup","layoutGroup_layout_changeHandler",0xdcb321a2,"feathers.controls.LayoutGroup.layoutGroup_layout_changeHandler","feathers/controls/LayoutGroup.hx",841,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_layout,"feathers.controls.LayoutGroup","get_layout",0x3a3395a6,"feathers.controls.LayoutGroup.get_layout","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_layout,"feathers.controls.LayoutGroup","set_layout",0x3db1341a,"feathers.controls.LayoutGroup.set_layout","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_layout,"feathers.controls.LayoutGroup","clearStyle_layout",0x71c71592,"feathers.controls.LayoutGroup.clearStyle_layout","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_backgroundSkin,"feathers.controls.LayoutGroup","get_backgroundSkin",0x95e3a887,"feathers.controls.LayoutGroup.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_backgroundSkin,"feathers.controls.LayoutGroup","set_backgroundSkin",0x7292dafb,"feathers.controls.LayoutGroup.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_backgroundSkin,"feathers.controls.LayoutGroup","clearStyle_backgroundSkin",0x521af473,"feathers.controls.LayoutGroup.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_disabledBackgroundSkin,"feathers.controls.LayoutGroup","get_disabledBackgroundSkin",0xbf63fb23,"feathers.controls.LayoutGroup.get_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_disabledBackgroundSkin,"feathers.controls.LayoutGroup","set_disabledBackgroundSkin",0x1ef8c197,"feathers.controls.LayoutGroup.set_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_disabledBackgroundSkin,"feathers.controls.LayoutGroup","clearStyle_disabledBackgroundSkin",0x3aeb130f,"feathers.controls.LayoutGroup.clearStyle_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_maskSkin,"feathers.controls.LayoutGroup","get_maskSkin",0x4d750785,"feathers.controls.LayoutGroup.get_maskSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_maskSkin,"feathers.controls.LayoutGroup","set_maskSkin",0x626e2af9,"feathers.controls.LayoutGroup.set_maskSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_maskSkin,"feathers.controls.LayoutGroup","clearStyle_maskSkin",0x30d95a71,"feathers.controls.LayoutGroup.clearStyle_maskSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_59a4bfa62b570069_42_get_styleContext,"feathers.controls.LayoutGroup","get_styleContext",0xb74ddcba,"feathers.controls.LayoutGroup.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_60_boot,"feathers.controls.LayoutGroup","boot",0xc3acc325,"feathers.controls.LayoutGroup.boot","feathers/controls/LayoutGroup.hx",60,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_78_boot,"feathers.controls.LayoutGroup","boot",0xc3acc325,"feathers.controls.LayoutGroup.boot","feathers/controls/LayoutGroup.hx",78,0x9fa86723)
namespace feathers{
namespace controls{

void LayoutGroup_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_60_new)
HXLINE( 186)		this->_hx___maskSkin = null();
HXLINE( 160)		this->_hx___disabledBackgroundSkin = null();
HXLINE( 139)		this->_hx___backgroundSkin = null();
HXLINE( 110)		this->_hx___layout = null();
HXLINE( 397)		this->_xmlContent = null();
HXLINE( 188)		this->_autoSizeMode = ::feathers::layout::AutoSizeMode_obj::CONTENT_dyn();
HXLINE( 162)		this->_currentMaskSkin = null();
HXLINE( 118)		this->_backgroundSkinMeasurements = null();
HXLINE( 117)		this->_currentBackgroundSkin = null();
HXLINE( 116)		this->_ignoreLayoutChanges = false;
HXLINE( 115)		this->_ignoreChangesButSetFlags = false;
HXLINE( 114)		this->_ignoreChildChanges = false;
HXLINE( 113)		this->_layoutMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,null());
HXLINE( 112)		this->_layoutResult =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
HXLINE(  92)		this->items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  86)		this->initializeLayoutGroupTheme();
HXLINE(  88)		super::__construct();
HXLINE(  89)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->layoutGroup_addedToStageHandler_dyn(),null(),null(),null());
            	}

Dynamic LayoutGroup_obj::__CreateEmpty() { return new LayoutGroup_obj; }

void *LayoutGroup_obj::_hx_vtable = 0;

Dynamic LayoutGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutGroup_obj > _hx_result = new LayoutGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
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
			return inClassId==(int)0x11a722e7 || inClassId==(int)0x1f4df417;
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

 ::feathers::layout::AutoSizeMode LayoutGroup_obj::get_autoSizeMode(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_209_get_autoSizeMode)
HXDLIN( 209)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_autoSizeMode,return )

 ::feathers::layout::AutoSizeMode LayoutGroup_obj::set_autoSizeMode( ::feathers::layout::AutoSizeMode value){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_212_set_autoSizeMode)
HXLINE( 213)		if (::hx::IsPointerEq( this->_autoSizeMode,value )) {
HXLINE( 214)			return this->_autoSizeMode;
            		}
HXLINE( 216)		this->_autoSizeMode = value;
HXLINE( 217)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 218)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 219)			if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 220)				this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),false,0,true);
HXLINE( 221)				this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null(),null(),null());
            			}
            			else {
HXLINE( 223)				this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),null());
HXLINE( 224)				this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null());
            			}
            		}
HXLINE( 227)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_autoSizeMode,return )

int LayoutGroup_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_236_get_numChildren)
HXDLIN( 236)		return this->items->length;
            	}


int LayoutGroup_obj::get__numChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_242_get__numChildren)
HXDLIN( 242)		return this->super::get_numChildren();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get__numChildren,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_245_addChildAt)
HXLINE( 246)		int oldIndex = this->items->indexOf(child,null());
HXLINE( 247)		if ((oldIndex == index)) {
HXLINE( 248)			return child;
            		}
HXLINE( 250)		if ((oldIndex >= 0)) {
HXLINE( 251)			this->items->remove(child);
            		}
HXLINE( 253)		int privateIndex = this->getPrivateIndexForPublicIndex(index);
HXLINE( 256)		this->items->insert(index,child);
HXLINE( 257)		 ::openfl::display::DisplayObject result = this->_addChildAt(child,privateIndex);
HXLINE( 260)		child->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_child_resizeHandler_dyn(),null(),null(),null());
HXLINE( 261)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 262)			child->addEventListener(HX_("layoutDataChange",84,c2,16,c9),this->layoutGroup_child_layoutDataChangeHandler_dyn(),false,0,true);
            		}
HXLINE( 264)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 265)		return result;
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_275__addChild)
HXDLIN( 275)		return this->super::addChildAt(child,this->get__numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_addChild,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::_addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_279__addChildAt)
HXDLIN( 279)		return this->super::addChildAt(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_addChildAt,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_282_removeChild)
HXLINE( 283)		bool _hx_tmp;
HXDLIN( 283)		if (::hx::IsNotNull( child )) {
HXLINE( 283)			_hx_tmp = ::hx::IsInstanceNotEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 283)			_hx_tmp = true;
            		}
HXDLIN( 283)		if (_hx_tmp) {
HXLINE( 284)			return child;
            		}
HXLINE( 286)		this->items->remove(child);
HXLINE( 287)		 ::openfl::display::DisplayObject result = this->_removeChild(child);
HXLINE( 290)		child->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_child_resizeHandler_dyn(),null());
HXLINE( 291)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 292)			child->removeEventListener(HX_("layoutDataChange",84,c2,16,c9),this->layoutGroup_child_layoutDataChangeHandler_dyn(),null());
            		}
HXLINE( 294)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 295)		return result;
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_removeChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_299__removeChild)
HXDLIN( 299)		return this->super::removeChild(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_removeChild,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_302_removeChildAt)
HXLINE( 303)		bool _hx_tmp;
HXDLIN( 303)		if ((index >= 0)) {
HXLINE( 303)			_hx_tmp = (index < this->items->length);
            		}
            		else {
HXLINE( 303)			_hx_tmp = false;
            		}
HXDLIN( 303)		if (_hx_tmp) {
HXLINE( 304)			return this->removeChild(this->items->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 306)		return null();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_310__removeChildAt)
HXDLIN( 310)		return this->super::removeChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_removeChildAt,return )

int LayoutGroup_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_314_getChildIndex)
HXDLIN( 314)		return this->items->indexOf(child,null());
            	}


int LayoutGroup_obj::_getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_318__getChildIndex)
HXDLIN( 318)		return this->super::getChildIndex(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildIndex,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_321_getChildByName)
HXLINE( 322)		{
HXLINE( 322)			int _g = 0;
HXDLIN( 322)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 322)			while((_g < _g1->length)){
HXLINE( 322)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 322)				_g = (_g + 1);
HXLINE( 323)				if ((child->get_name() == name)) {
HXLINE( 324)					return child;
            				}
            			}
            		}
HXLINE( 327)		return null();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_331__getChildByName)
HXDLIN( 331)		return this->super::getChildByName(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildByName,return )

void LayoutGroup_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_334_removeChildren)
HXLINE( 335)		if ((endIndex == (int)2147483647)) {
HXLINE( 336)			endIndex = (this->items->length - 1);
HXLINE( 338)			if ((endIndex < 0)) {
HXLINE( 339)				return;
            			}
            		}
HXLINE( 343)		if ((beginIndex > (this->items->length - 1))) {
HXLINE( 344)			return;
            		}
            		else {
HXLINE( 345)			bool _hx_tmp;
HXDLIN( 345)			bool _hx_tmp1;
HXDLIN( 345)			if ((endIndex >= beginIndex)) {
HXLINE( 345)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 345)				_hx_tmp1 = true;
            			}
HXDLIN( 345)			if (!(_hx_tmp1)) {
HXLINE( 345)				_hx_tmp = (endIndex > this->items->length);
            			}
            			else {
HXLINE( 345)				_hx_tmp = true;
            			}
HXDLIN( 345)			if (_hx_tmp) {
HXLINE( 346)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            			}
            		}
HXLINE( 349)		int numRemovals = (endIndex - beginIndex);
HXLINE( 350)		while((numRemovals >= 0)){
HXLINE( 351)			this->removeChildAt(beginIndex);
HXLINE( 352)			numRemovals = (numRemovals - 1);
            		}
            	}


void LayoutGroup_obj::_removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_357__removeChildren)
HXDLIN( 357)		this->super::removeChildren(beginIndex,endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_removeChildren,(void))

void LayoutGroup_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_360_setChildIndex)
HXLINE( 361)		int oldIndex = this->getChildIndex(child);
HXLINE( 362)		if ((oldIndex == index)) {
HXLINE( 364)			return;
            		}
HXLINE( 366)		this->_setChildIndex(child,this->getPrivateIndexForPublicIndex(index));
HXLINE( 367)		this->items->remove(child);
HXLINE( 368)		this->items->insert(index,child);
HXLINE( 369)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


void LayoutGroup_obj::_setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_373__setChildIndex)
HXDLIN( 373)		this->super::setChildIndex(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_setChildIndex,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_377_getChildAt)
HXDLIN( 377)		return this->items->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_381__getChildAt)
HXDLIN( 381)		return this->super::getChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildAt,return )

void LayoutGroup_obj::initializeLayoutGroupTheme(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_385_initializeLayoutGroupTheme)
HXDLIN( 385)		::feathers::themes::steel::components::SteelLayoutGroupStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,initializeLayoutGroupTheme,(void))

int LayoutGroup_obj::getPrivateIndexForPublicIndex(int publicIndex){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_388_getPrivateIndexForPublicIndex)
HXLINE( 389)		if ((this->items->length > 0)) {
HXLINE( 390)			return (publicIndex + this->_getChildIndex(this->items->__get(0).StaticCast<  ::openfl::display::DisplayObject >()));
            		}
            		else {
HXLINE( 391)			if ((this->get__numChildren() > 0)) {
HXLINE( 392)				return (publicIndex + this->get__numChildren());
            			}
            		}
HXLINE( 394)		return publicIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,getPrivateIndexForPublicIndex,return )

::Array< ::Dynamic> LayoutGroup_obj::get_xmlContent(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_404_get_xmlContent)
HXDLIN( 404)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_xmlContent,return )

::Array< ::Dynamic> LayoutGroup_obj::set_xmlContent(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_407_set_xmlContent)
HXLINE( 408)		if (::hx::IsPointerEq( this->_xmlContent,value )) {
HXLINE( 409)			return this->_xmlContent;
            		}
HXLINE( 411)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 412)			int _g = 0;
HXDLIN( 412)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 412)			while((_g < _g1->length)){
HXLINE( 412)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 412)				_g = (_g + 1);
HXLINE( 413)				this->removeChild(child);
            			}
            		}
HXLINE( 416)		this->_xmlContent = value;
HXLINE( 417)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 418)			int _g = 0;
HXDLIN( 418)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 418)			while((_g < _g1->length)){
HXLINE( 418)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 418)				_g = (_g + 1);
HXLINE( 419)				this->addChild(child);
            			}
            		}
HXLINE( 422)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 423)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_xmlContent,return )

void LayoutGroup_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_426_validateNow)
HXLINE( 430)		bool oldIgnoreChildChanges = this->_ignoreChangesButSetFlags;
HXLINE( 431)		this->_ignoreChangesButSetFlags = true;
HXLINE( 432)		this->super::validateNow();
HXLINE( 435)		this->_ignoreChangesButSetFlags = oldIgnoreChildChanges;
            	}


void LayoutGroup_obj::update(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_438_update)
HXLINE( 441)		this->_ignoreChangesButSetFlags = false;
HXLINE( 443)		bool layoutInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 444)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 445)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 446)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 448)		bool _hx_tmp;
HXDLIN( 448)		if (!(stylesInvalid)) {
HXLINE( 448)			_hx_tmp = stateInvalid;
            		}
            		else {
HXLINE( 448)			_hx_tmp = true;
            		}
HXDLIN( 448)		if (_hx_tmp) {
HXLINE( 449)			this->refreshBackgroundSkin();
            		}
HXLINE( 452)		if (stylesInvalid) {
HXLINE( 453)			this->refreshMaskSkin();
HXLINE( 454)			this->refreshLayout();
            		}
HXLINE( 457)		bool _hx_tmp1;
HXDLIN( 457)		bool _hx_tmp2;
HXDLIN( 457)		bool _hx_tmp3;
HXDLIN( 457)		if (!(sizeInvalid)) {
HXLINE( 457)			_hx_tmp3 = layoutInvalid;
            		}
            		else {
HXLINE( 457)			_hx_tmp3 = true;
            		}
HXDLIN( 457)		if (!(_hx_tmp3)) {
HXLINE( 457)			_hx_tmp2 = stylesInvalid;
            		}
            		else {
HXLINE( 457)			_hx_tmp2 = true;
            		}
HXDLIN( 457)		if (!(_hx_tmp2)) {
HXLINE( 457)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 457)			_hx_tmp1 = true;
            		}
HXDLIN( 457)		if (_hx_tmp1) {
HXLINE( 458)			this->refreshViewPortBounds();
HXLINE( 459)			if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 460)				this->handleCustomLayout();
            			}
            			else {
HXLINE( 462)				this->handleManualLayout();
            			}
HXLINE( 464)			this->handleLayoutResult();
HXLINE( 465)			this->refreshBackgroundLayout();
HXLINE( 466)			this->refreshDisabledOverlay();
HXLINE( 467)			this->refreshMaskLayout();
HXLINE( 470)			this->validateChildren();
            		}
            	}


void LayoutGroup_obj::refreshDisabledOverlay(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_474_refreshDisabledOverlay)
HXLINE( 475)		if (!(this->_enabled)) {
HXLINE( 476)			if (::hx::IsNull( this->_disabledOverlay )) {
HXLINE( 477)				this->_disabledOverlay =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 478)				this->_disabledOverlay->get_graphics()->beginFill(16711935,((Float)0.0));
HXLINE( 479)				this->_disabledOverlay->get_graphics()->drawRect(((Float)0.0),((Float)0.0),((Float)1.0),((Float)1.0));
HXLINE( 480)				this->_disabledOverlay->get_graphics()->endFill();
HXLINE( 481)				this->_addChild(this->_disabledOverlay);
            			}
            			else {
HXLINE( 483)				 ::openfl::display::Sprite _hx_tmp = this->_disabledOverlay;
HXDLIN( 483)				this->_setChildIndex(_hx_tmp,(this->get__numChildren() - 1));
            			}
            		}
HXLINE( 486)		if (::hx::IsNotNull( this->_disabledOverlay )) {
HXLINE( 487)			this->_disabledOverlay->set_visible(!(this->_enabled));
HXLINE( 488)			this->_disabledOverlay->set_x(((Float)0.0));
HXLINE( 489)			this->_disabledOverlay->set_y(((Float)0.0));
HXLINE( 490)			this->_disabledOverlay->set_width(this->actualWidth);
HXLINE( 491)			this->_disabledOverlay->set_height(this->actualHeight);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshDisabledOverlay,(void))

void LayoutGroup_obj::refreshLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_495_refreshLayout)
HXLINE( 496)		::Dynamic newLayout = this->get_layout();
HXLINE( 497)		if (::hx::IsInstanceEq( this->_currentLayout,newLayout )) {
HXLINE( 498)			return;
            		}
HXLINE( 500)		if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 501)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentLayout,HX_("change",70,91,72,b7),this->layoutGroup_layout_changeHandler_dyn(),null());
            		}
HXLINE( 503)		this->_currentLayout = newLayout;
HXLINE( 504)		if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 505)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_currentLayout,HX_("change",70,91,72,b7),this->layoutGroup_layout_changeHandler_dyn(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshLayout,(void))

void LayoutGroup_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_509_refreshBackgroundSkin)
HXLINE( 510)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 511)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 512)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 513)			return;
            		}
HXLINE( 515)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 516)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_519_getCurrentBackgroundSkin)
HXLINE( 520)		bool _hx_tmp;
HXDLIN( 520)		if (!(this->_enabled)) {
HXLINE( 520)			_hx_tmp = ::hx::IsNotNull( this->get_disabledBackgroundSkin() );
            		}
            		else {
HXLINE( 520)			_hx_tmp = false;
            		}
HXDLIN( 520)		if (_hx_tmp) {
HXLINE( 521)			return this->get_disabledBackgroundSkin();
            		}
HXLINE( 523)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,getCurrentBackgroundSkin,return )

void LayoutGroup_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_526_addCurrentBackgroundSkin)
HXLINE( 527)		if (::hx::IsNull( skin )) {
HXLINE( 528)			this->_backgroundSkinMeasurements = null();
HXLINE( 529)			return;
            		}
HXLINE( 531)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 532)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 534)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 535)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 537)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 539)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 540)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 542)		this->_addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,addCurrentBackgroundSkin,(void))

void LayoutGroup_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_545_removeCurrentBackgroundSkin)
HXLINE( 546)		if (::hx::IsNull( skin )) {
HXLINE( 547)			return;
            		}
HXLINE( 549)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 550)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 554)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 555)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 556)			this->_removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,removeCurrentBackgroundSkin,(void))

void LayoutGroup_obj::refreshMaskSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_560_refreshMaskSkin)
HXLINE( 561)		 ::openfl::display::DisplayObject oldSkin = this->_currentMaskSkin;
HXLINE( 562)		this->_currentMaskSkin = this->getCurrentMaskSkin();
HXLINE( 563)		if (::hx::IsInstanceEq( this->_currentMaskSkin,oldSkin )) {
HXLINE( 564)			return;
            		}
HXLINE( 566)		this->removeCurrentMaskSkin(oldSkin);
HXLINE( 567)		this->addCurrentMaskSkin(this->_currentMaskSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshMaskSkin,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getCurrentMaskSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_571_getCurrentMaskSkin)
HXDLIN( 571)		return this->get_maskSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,getCurrentMaskSkin,return )

void LayoutGroup_obj::addCurrentMaskSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_574_addCurrentMaskSkin)
HXLINE( 575)		if (::hx::IsNull( skin )) {
HXLINE( 576)			return;
            		}
HXLINE( 578)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 579)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 581)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 582)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 584)		this->_addChild(skin);
HXLINE( 585)		this->set_mask(skin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,addCurrentMaskSkin,(void))

void LayoutGroup_obj::removeCurrentMaskSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_588_removeCurrentMaskSkin)
HXLINE( 589)		if (::hx::IsNull( skin )) {
HXLINE( 590)			return;
            		}
HXLINE( 592)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 593)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 595)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 596)			this->_removeChild(skin);
            		}
HXLINE( 598)		this->set_mask(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,removeCurrentMaskSkin,(void))

void LayoutGroup_obj::refreshViewPortBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_601_refreshViewPortBounds)
HXLINE( 602)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 603)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 604)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 605)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 606)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 607)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 609)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 610)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 611)			if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 612)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 616)		bool needsToMeasureContent;
HXDLIN( 616)		if (::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 616)			needsToMeasureContent = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 616)			needsToMeasureContent = true;
            		}
HXLINE( 617)		Float stageWidth = ((Float)0.0);
HXLINE( 618)		Float stageHeight = ((Float)0.0);
HXLINE( 619)		if (!(needsToMeasureContent)) {
HXLINE( 621)			 ::openfl::geom::Point topLeft = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 622)			 ::openfl::geom::Point bottomRight = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->stage->stageWidth,this->stage->stageHeight));
HXLINE( 623)			stageWidth = (bottomRight->x - topLeft->x);
HXLINE( 624)			stageHeight = (bottomRight->y - topLeft->y);
            		}
HXLINE( 627)		bool _hx_tmp;
HXDLIN( 627)		if (needsWidth) {
HXLINE( 627)			_hx_tmp = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 627)			_hx_tmp = false;
            		}
HXDLIN( 627)		if (_hx_tmp) {
HXLINE( 628)			this->_layoutMeasurements->width = stageWidth;
            		}
            		else {
HXLINE( 630)			this->_layoutMeasurements->width = this->get_explicitWidth();
            		}
HXLINE( 633)		bool _hx_tmp1;
HXDLIN( 633)		if (needsHeight) {
HXLINE( 633)			_hx_tmp1 = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 633)			_hx_tmp1 = false;
            		}
HXDLIN( 633)		if (_hx_tmp1) {
HXLINE( 634)			this->_layoutMeasurements->height = stageHeight;
            		}
            		else {
HXLINE( 636)			this->_layoutMeasurements->height = this->get_explicitHeight();
            		}
HXLINE( 639)		 ::Dynamic viewPortMinWidth = this->get_explicitMinWidth();
HXLINE( 640)		if (needsMinWidth) {
HXLINE( 641)			viewPortMinWidth = ((Float)0.0);
            		}
HXLINE( 643)		 ::Dynamic viewPortMinHeight = this->get_explicitMinHeight();
HXLINE( 644)		if (needsMinHeight) {
HXLINE( 645)			viewPortMinHeight = ((Float)0.0);
            		}
HXLINE( 647)		 ::Dynamic viewPortMaxWidth = this->get_explicitMaxWidth();
HXLINE( 648)		if (needsMaxWidth) {
HXLINE( 649)			viewPortMaxWidth = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 651)		 ::Dynamic viewPortMaxHeight = this->get_explicitMaxHeight();
HXLINE( 652)		if (needsMaxHeight) {
HXLINE( 653)			viewPortMaxHeight = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 655)		if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 659)			if (::hx::IsNotNull( this->_backgroundSkinMeasurements->width )) {
HXLINE( 660)				if (::hx::IsGreater( this->_backgroundSkinMeasurements->width,viewPortMinWidth )) {
HXLINE( 661)					viewPortMinWidth = this->_backgroundSkinMeasurements->width;
            				}
            			}
            			else {
HXLINE( 663)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements->minWidth )) {
HXLINE( 664)					if (::hx::IsGreater( this->_backgroundSkinMeasurements->minWidth,viewPortMinWidth )) {
HXLINE( 665)						viewPortMinWidth = this->_backgroundSkinMeasurements->minWidth;
            					}
            				}
            			}
HXLINE( 668)			if (::hx::IsNotNull( this->_backgroundSkinMeasurements->height )) {
HXLINE( 669)				if (::hx::IsGreater( this->_backgroundSkinMeasurements->height,viewPortMinHeight )) {
HXLINE( 670)					viewPortMinHeight = this->_backgroundSkinMeasurements->height;
            				}
            			}
            			else {
HXLINE( 672)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements->minHeight )) {
HXLINE( 673)					if (::hx::IsGreater( this->_backgroundSkinMeasurements->minHeight,viewPortMinHeight )) {
HXLINE( 674)						viewPortMinHeight = this->_backgroundSkinMeasurements->minHeight;
            					}
            				}
            			}
            		}
HXLINE( 678)		this->_layoutMeasurements->minWidth = viewPortMinWidth;
HXLINE( 679)		this->_layoutMeasurements->minHeight = viewPortMinHeight;
HXLINE( 680)		this->_layoutMeasurements->maxWidth = viewPortMaxWidth;
HXLINE( 681)		this->_layoutMeasurements->maxHeight = viewPortMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshViewPortBounds,(void))

void LayoutGroup_obj::handleCustomLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_684_handleCustomLayout)
HXLINE( 685)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 686)		this->_ignoreChildChanges = true;
HXLINE( 687)		this->_layoutResult->reset();
HXLINE( 688)		::feathers::layout::ILayout_obj::layout(this->_currentLayout,this->items,this->_layoutMeasurements,this->_layoutResult);
HXLINE( 689)		this->_ignoreChildChanges = oldIgnoreChildChanges;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleCustomLayout,(void))

void LayoutGroup_obj::handleManualLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_692_handleManualLayout)
HXLINE( 693)		 ::Dynamic maxX = this->_layoutMeasurements->width;
HXLINE( 694)		if (::hx::IsNull( maxX )) {
HXLINE( 695)			maxX = ((Float)0.0);
            		}
HXLINE( 697)		 ::Dynamic maxY = this->_layoutMeasurements->height;
HXLINE( 698)		if (::hx::IsNull( maxY )) {
HXLINE( 699)			maxY = ((Float)0.0);
            		}
HXLINE( 701)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 702)		this->_ignoreChildChanges = true;
HXLINE( 703)		{
HXLINE( 703)			int _g = 0;
HXDLIN( 703)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 703)			while((_g < _g1->length)){
HXLINE( 703)				 ::openfl::display::DisplayObject item = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 703)				_g = (_g + 1);
HXLINE( 704)				bool _hx_tmp;
HXDLIN( 704)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 704)					_hx_tmp = !(::feathers::layout::ILayoutObject_obj::get_includeInLayout( ::hx::interface_check(item,0xf54ca718)));
            				}
            				else {
HXLINE( 704)					_hx_tmp = false;
            				}
HXDLIN( 704)				if (_hx_tmp) {
HXLINE( 705)					continue;
            				}
HXLINE( 707)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 708)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 710)				Float itemMaxX = item->get_x();
HXDLIN( 710)				Float itemMaxX1 = (itemMaxX + item->get_width());
HXLINE( 711)				Float itemMaxY = item->get_y();
HXDLIN( 711)				Float itemMaxY1 = (itemMaxY + item->get_height());
HXLINE( 712)				if (::hx::IsLess( maxX,itemMaxX1 )) {
HXLINE( 713)					maxX = itemMaxX1;
            				}
HXLINE( 715)				if (::hx::IsLess( maxY,itemMaxY1 )) {
HXLINE( 716)					maxY = itemMaxY1;
            				}
            			}
            		}
HXLINE( 719)		this->_ignoreChildChanges = oldIgnoreChildChanges;
HXLINE( 720)		this->_layoutResult->contentX = ((Float)0.0);
HXLINE( 721)		this->_layoutResult->contentY = ((Float)0.0);
HXLINE( 722)		this->_layoutResult->contentWidth = ( (Float)(maxX) );
HXLINE( 723)		this->_layoutResult->contentHeight = ( (Float)(maxY) );
HXLINE( 724)		if (::hx::IsNotNull( this->_layoutMeasurements->width )) {
HXLINE( 725)			this->_layoutResult->viewPortWidth = ( (Float)(this->_layoutMeasurements->width) );
            		}
            		else {
HXLINE( 727)			bool _hx_tmp;
HXDLIN( 727)			if (::hx::IsNotNull( this->_layoutMeasurements->minWidth )) {
HXLINE( 727)				_hx_tmp = ::hx::IsLess( maxX,this->_layoutMeasurements->minWidth );
            			}
            			else {
HXLINE( 727)				_hx_tmp = false;
            			}
HXDLIN( 727)			if (_hx_tmp) {
HXLINE( 728)				maxX = this->_layoutMeasurements->minWidth;
            			}
            			else {
HXLINE( 729)				bool _hx_tmp;
HXDLIN( 729)				if (::hx::IsNotNull( this->_layoutMeasurements->maxWidth )) {
HXLINE( 729)					_hx_tmp = ::hx::IsGreater( maxX,this->_layoutMeasurements->maxWidth );
            				}
            				else {
HXLINE( 729)					_hx_tmp = false;
            				}
HXDLIN( 729)				if (_hx_tmp) {
HXLINE( 730)					maxX = this->_layoutMeasurements->maxWidth;
            				}
            			}
HXLINE( 732)			this->_layoutResult->viewPortWidth = ( (Float)(maxX) );
            		}
HXLINE( 734)		if (::hx::IsNotNull( this->_layoutMeasurements->height )) {
HXLINE( 735)			this->_layoutResult->viewPortHeight = ( (Float)(this->_layoutMeasurements->height) );
            		}
            		else {
HXLINE( 737)			bool _hx_tmp;
HXDLIN( 737)			if (::hx::IsNotNull( this->_layoutMeasurements->minHeight )) {
HXLINE( 737)				_hx_tmp = ::hx::IsLess( maxY,this->_layoutMeasurements->minHeight );
            			}
            			else {
HXLINE( 737)				_hx_tmp = false;
            			}
HXDLIN( 737)			if (_hx_tmp) {
HXLINE( 738)				maxY = this->_layoutMeasurements->minHeight;
            			}
            			else {
HXLINE( 739)				bool _hx_tmp;
HXDLIN( 739)				if (::hx::IsNotNull( this->_layoutMeasurements->maxHeight )) {
HXLINE( 739)					_hx_tmp = ::hx::IsGreater( maxY,this->_layoutMeasurements->maxHeight );
            				}
            				else {
HXLINE( 739)					_hx_tmp = false;
            				}
HXDLIN( 739)				if (_hx_tmp) {
HXLINE( 740)					maxY = this->_layoutMeasurements->maxHeight;
            				}
            			}
HXLINE( 742)			this->_layoutResult->viewPortHeight = ( (Float)(maxY) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleManualLayout,(void))

void LayoutGroup_obj::handleLayoutResult(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_746_handleLayoutResult)
HXLINE( 747)		Float viewPortWidth = this->_layoutResult->viewPortWidth;
HXLINE( 748)		Float viewPortHeight = this->_layoutResult->viewPortHeight;
HXLINE( 749)		this->saveMeasurements(viewPortWidth,viewPortHeight,viewPortWidth,viewPortHeight,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleLayoutResult,(void))

void LayoutGroup_obj::refreshMaskLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_752_refreshMaskLayout)
HXLINE( 753)		if (::hx::IsNull( this->_currentMaskSkin )) {
HXLINE( 754)			return;
            		}
HXLINE( 757)		this->_currentMaskSkin->set_x(((Float)0.0));
HXLINE( 758)		this->_currentMaskSkin->set_y(((Float)0.0));
HXLINE( 759)		this->_currentMaskSkin->set_width(this->actualWidth);
HXLINE( 760)		this->_currentMaskSkin->set_height(this->actualHeight);
HXLINE( 761)		if (::Std_obj::isOfType(this->_currentMaskSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 762)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentMaskSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshMaskLayout,(void))

void LayoutGroup_obj::refreshBackgroundLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_766_refreshBackgroundLayout)
HXLINE( 767)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 768)			return;
            		}
HXLINE( 770)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 771)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 776)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 776)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 777)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 779)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 779)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 780)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 782)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 783)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshBackgroundLayout,(void))

void LayoutGroup_obj::validateChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_787_validateChildren)
HXLINE( 788)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 789)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
HXLINE( 791)		{
HXLINE( 791)			int _g = 0;
HXDLIN( 791)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 791)			while((_g < _g1->length)){
HXLINE( 791)				 ::openfl::display::DisplayObject item = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 791)				_g = (_g + 1);
HXLINE( 792)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 793)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,validateChildren,(void))

void LayoutGroup_obj::layoutGroup_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_799_layoutGroup_addedToStageHandler)
HXDLIN( 799)		if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 803)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 805)			this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE( 806)			this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),false,0,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_addedToStageHandler,(void))

void LayoutGroup_obj::layoutGroup_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_810_layoutGroup_removedFromStageHandler)
HXLINE( 811)		this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null());
HXLINE( 812)		this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_removedFromStageHandler,(void))

void LayoutGroup_obj::layoutGroup_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_816_layoutGroup_stage_resizeHandler)
HXDLIN( 816)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_stage_resizeHandler,(void))

void LayoutGroup_obj::layoutGroup_child_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_819_layoutGroup_child_resizeHandler)
HXLINE( 820)		if (this->_ignoreChildChanges) {
HXLINE( 821)			return;
            		}
HXLINE( 823)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 824)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 825)			return;
            		}
HXLINE( 827)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_child_resizeHandler,(void))

void LayoutGroup_obj::layoutGroup_child_layoutDataChangeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_830_layoutGroup_child_layoutDataChangeHandler)
HXLINE( 831)		if (this->_ignoreChildChanges) {
HXLINE( 832)			return;
            		}
HXLINE( 834)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 835)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 836)			return;
            		}
HXLINE( 838)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_child_layoutDataChangeHandler,(void))

void LayoutGroup_obj::layoutGroup_layout_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_841_layoutGroup_layout_changeHandler)
HXLINE( 842)		if (this->_ignoreLayoutChanges) {
HXLINE( 843)			return;
            		}
HXLINE( 845)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 846)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 847)			return;
            		}
HXLINE( 849)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_layout_changeHandler,(void))

::Dynamic LayoutGroup_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_layout)
HXDLIN(  85)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_layout,return )

::Dynamic LayoutGroup_obj::set_layout(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_layout)
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


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_layout,return )

::Dynamic LayoutGroup_obj::clearStyle_layout(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_layout)
HXLINE( 126)		this->set_layout(null());
HXLINE( 127)		return this->get_layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_layout,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_backgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_disabledBackgroundSkin)
HXDLIN(  85)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_disabledBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_disabledBackgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_disabledBackgroundSkin)
HXLINE( 126)		this->set_disabledBackgroundSkin(null());
HXLINE( 127)		return this->get_disabledBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_maskSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_maskSkin)
HXDLIN(  85)		return this->_hx___maskSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_maskSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_maskSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_maskSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("maskSkin",89,69,35,ea),null()))) {
HXLINE( 101)			return this->_hx___maskSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___maskSkin,value )) {
HXLINE( 104)			return this->_hx___maskSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_maskSkin_dyn();
HXLINE( 110)		this->_hx___maskSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___maskSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_maskSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_maskSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_maskSkin)
HXLINE( 126)		this->set_maskSkin(null());
HXLINE( 127)		return this->get_maskSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_maskSkin,return )

::hx::Class LayoutGroup_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_59a4bfa62b570069_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::LayoutGroup >();
            	}


::String LayoutGroup_obj::VARIANT_TOOL_BAR;


::hx::ObjectPtr< LayoutGroup_obj > LayoutGroup_obj::__new() {
	::hx::ObjectPtr< LayoutGroup_obj > __this = new LayoutGroup_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LayoutGroup_obj > LayoutGroup_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LayoutGroup_obj *__this = (LayoutGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutGroup_obj), true, "feathers.controls.LayoutGroup"));
	*(void **)__this = LayoutGroup_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LayoutGroup_obj::LayoutGroup_obj()
{
}

void LayoutGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayoutGroup);
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_MARK_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_MARK_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_MARK_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_MARK_MEMBER_NAME(_ignoreLayoutChanges,"_ignoreLayoutChanges");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentMaskSkin,"_currentMaskSkin");
	HX_MARK_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_MARK_MEMBER_NAME(_disabledOverlay,"_disabledOverlay");
	HX_MARK_MEMBER_NAME(_currentLayout,"_currentLayout");
	HX_MARK_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_MARK_MEMBER_NAME(_hx___layout,"__layout");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___maskSkin,"__maskSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayoutGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_VISIT_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_VISIT_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_VISIT_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_VISIT_MEMBER_NAME(_ignoreLayoutChanges,"_ignoreLayoutChanges");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentMaskSkin,"_currentMaskSkin");
	HX_VISIT_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_VISIT_MEMBER_NAME(_disabledOverlay,"_disabledOverlay");
	HX_VISIT_MEMBER_NAME(_currentLayout,"_currentLayout");
	HX_VISIT_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_VISIT_MEMBER_NAME(_hx___layout,"__layout");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___maskSkin,"__maskSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LayoutGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maskSkin() ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { return ::hx::Val( _hx___layout ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_addChild") ) { return ::hx::Val( _addChild_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_xmlContent() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"__maskSkin") ) { return ::hx::Val( _hx___maskSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_addChildAt") ) { return ::hx::Val( _addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildAt") ) { return ::hx::Val( _getChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { return ::hx::Val( _xmlContent ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSizeMode() ); }
		if (HX_FIELD_EQ(inName,"_numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__numChildren() ); }
		if (HX_FIELD_EQ(inName,"_removeChild") ) { return ::hx::Val( _removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maskSkin") ) { return ::hx::Val( get_maskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maskSkin") ) { return ::hx::Val( set_maskSkin_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { return ::hx::Val( _layoutResult ); }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { return ::hx::Val( _autoSizeMode ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshLayout") ) { return ::hx::Val( refreshLayout_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"_currentLayout") ) { return ::hx::Val( _currentLayout ); }
		if (HX_FIELD_EQ(inName,"_removeChildAt") ) { return ::hx::Val( _removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildIndex") ) { return ::hx::Val( _getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_setChildIndex") ) { return ::hx::Val( _setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_xmlContent") ) { return ::hx::Val( get_xmlContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xmlContent") ) { return ::hx::Val( set_xmlContent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildByName") ) { return ::hx::Val( _getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"_removeChildren") ) { return ::hx::Val( _removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshMaskSkin") ) { return ::hx::Val( refreshMaskSkin_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentMaskSkin") ) { return ::hx::Val( _currentMaskSkin ); }
		if (HX_FIELD_EQ(inName,"get_autoSizeMode") ) { return ::hx::Val( get_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSizeMode") ) { return ::hx::Val( set_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"_disabledOverlay") ) { return ::hx::Val( _disabledOverlay ); }
		if (HX_FIELD_EQ(inName,"get__numChildren") ) { return ::hx::Val( get__numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateChildren") ) { return ::hx::Val( validateChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"refreshMaskLayout") ) { return ::hx::Val( refreshMaskLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layout") ) { return ::hx::Val( clearStyle_layout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCurrentMaskSkin") ) { return ::hx::Val( getCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentMaskSkin") ) { return ::hx::Val( addCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleCustomLayout") ) { return ::hx::Val( handleCustomLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleManualLayout") ) { return ::hx::Val( handleManualLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleLayoutResult") ) { return ::hx::Val( handleLayoutResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { return ::hx::Val( _layoutMeasurements ); }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { return ::hx::Val( _ignoreChildChanges ); }
		if (HX_FIELD_EQ(inName,"clearStyle_maskSkin") ) { return ::hx::Val( clearStyle_maskSkin_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ignoreLayoutChanges") ) { return ::hx::Val( _ignoreLayoutChanges ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeCurrentMaskSkin") ) { return ::hx::Val( removeCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshViewPortBounds") ) { return ::hx::Val( refreshViewPortBounds_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBackgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"refreshDisabledOverlay") ) { return ::hx::Val( refreshDisabledOverlay_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"refreshBackgroundLayout") ) { return ::hx::Val( refreshBackgroundLayout_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { return ::hx::Val( _hx___disabledBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { return ::hx::Val( _ignoreChangesButSetFlags ); }
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"initializeLayoutGroupTheme") ) { return ::hx::Val( initializeLayoutGroupTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_disabledBackgroundSkin") ) { return ::hx::Val( get_disabledBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledBackgroundSkin") ) { return ::hx::Val( set_disabledBackgroundSkin_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getPrivateIndexForPublicIndex") ) { return ::hx::Val( getPrivateIndexForPublicIndex_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"layoutGroup_addedToStageHandler") ) { return ::hx::Val( layoutGroup_addedToStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutGroup_stage_resizeHandler") ) { return ::hx::Val( layoutGroup_stage_resizeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutGroup_child_resizeHandler") ) { return ::hx::Val( layoutGroup_child_resizeHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"layoutGroup_layout_changeHandler") ) { return ::hx::Val( layoutGroup_layout_changeHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_disabledBackgroundSkin") ) { return ::hx::Val( clearStyle_disabledBackgroundSkin_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"layoutGroup_removedFromStageHandler") ) { return ::hx::Val( layoutGroup_removedFromStageHandler_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"layoutGroup_child_layoutDataChangeHandler") ) { return ::hx::Val( layoutGroup_child_layoutDataChangeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LayoutGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VARIANT_TOOL_BAR") ) { outValue = ( VARIANT_TOOL_BAR ); return true; }
	}
	return false;
}

::hx::Val LayoutGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maskSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { _hx___layout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xmlContent(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"__maskSkin") ) { _hx___maskSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { _xmlContent=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSizeMode(inValue.Cast<  ::feathers::layout::AutoSizeMode >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { _layoutResult=inValue.Cast<  ::feathers::layout::LayoutBoundsResult >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { _autoSizeMode=inValue.Cast<  ::feathers::layout::AutoSizeMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"_currentLayout") ) { _currentLayout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentMaskSkin") ) { _currentMaskSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledOverlay") ) { _disabledOverlay=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { _layoutMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { _ignoreChildChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ignoreLayoutChanges") ) { _ignoreLayoutChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { _hx___disabledBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { _ignoreChangesButSetFlags=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LayoutGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VARIANT_TOOL_BAR") ) { VARIANT_TOOL_BAR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void LayoutGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_layoutResult",06,7a,37,06));
	outFields->push(HX_("_layoutMeasurements",e0,8a,1d,e1));
	outFields->push(HX_("_ignoreChildChanges",18,b7,88,de));
	outFields->push(HX_("_ignoreChangesButSetFlags",74,fb,7a,8a));
	outFields->push(HX_("_ignoreLayoutChanges",08,9e,67,16));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("disabledBackgroundSkin",27,5c,3a,d3));
	outFields->push(HX_("_currentMaskSkin",63,65,66,a9));
	outFields->push(HX_("maskSkin",89,69,35,ea));
	outFields->push(HX_("_autoSizeMode",32,4a,ee,05));
	outFields->push(HX_("autoSizeMode",53,b7,7f,23));
	outFields->push(HX_("_disabledOverlay",f5,d3,25,b1));
	outFields->push(HX_("_currentLayout",04,20,67,7a));
	outFields->push(HX_("_numChildren",a6,17,8a,c2));
	outFields->push(HX_("_xmlContent",41,8d,4c,ce));
	outFields->push(HX_("xmlContent",22,c0,c2,fb));
	outFields->push(HX_("__layout",ca,19,e8,00));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__disabledBackgroundSkin",47,07,aa,50));
	outFields->push(HX_("__maskSkin",a9,dc,6d,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LayoutGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LayoutGroup_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /*  ::feathers::layout::LayoutBoundsResult */ ,(int)offsetof(LayoutGroup_obj,_layoutResult),HX_("_layoutResult",06,7a,37,06)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(LayoutGroup_obj,_layoutMeasurements),HX_("_layoutMeasurements",e0,8a,1d,e1)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreChildChanges),HX_("_ignoreChildChanges",18,b7,88,de)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreChangesButSetFlags),HX_("_ignoreChangesButSetFlags",74,fb,7a,8a)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreLayoutChanges),HX_("_ignoreLayoutChanges",08,9e,67,16)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(LayoutGroup_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_currentMaskSkin),HX_("_currentMaskSkin",63,65,66,a9)},
	{::hx::fsObject /*  ::feathers::layout::AutoSizeMode */ ,(int)offsetof(LayoutGroup_obj,_autoSizeMode),HX_("_autoSizeMode",32,4a,ee,05)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(LayoutGroup_obj,_disabledOverlay),HX_("_disabledOverlay",f5,d3,25,b1)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LayoutGroup_obj,_currentLayout),HX_("_currentLayout",04,20,67,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LayoutGroup_obj,_xmlContent),HX_("_xmlContent",41,8d,4c,ce)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LayoutGroup_obj,_hx___layout),HX_("__layout",ca,19,e8,00)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___disabledBackgroundSkin),HX_("__disabledBackgroundSkin",47,07,aa,50)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___maskSkin),HX_("__maskSkin",a9,dc,6d,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LayoutGroup_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LayoutGroup_obj::VARIANT_TOOL_BAR,HX_("VARIANT_TOOL_BAR",66,f0,2e,84)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LayoutGroup_obj_sMemberFields[] = {
	HX_("items",00,ac,0c,c2),
	HX_("_layoutResult",06,7a,37,06),
	HX_("_layoutMeasurements",e0,8a,1d,e1),
	HX_("_ignoreChildChanges",18,b7,88,de),
	HX_("_ignoreChangesButSetFlags",74,fb,7a,8a),
	HX_("_ignoreLayoutChanges",08,9e,67,16),
	HX_("_currentBackgroundSkin",e5,c0,55,58),
	HX_("_backgroundSkinMeasurements",41,46,9b,f8),
	HX_("_currentMaskSkin",63,65,66,a9),
	HX_("_autoSizeMode",32,4a,ee,05),
	HX_("get_autoSizeMode",dc,a3,1e,28),
	HX_("set_autoSizeMode",50,91,60,7e),
	HX_("_disabledOverlay",f5,d3,25,b1),
	HX_("_currentLayout",04,20,67,7a),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get__numChildren",2f,04,29,c7),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("_addChild",1a,c7,ac,06),
	HX_("_addChildAt",ad,7a,c0,a0),
	HX_("removeChild",b8,86,ed,43),
	HX_("_removeChild",b9,34,f7,a9),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("_removeChildAt",0c,ce,b8,7d),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("_getChildIndex",4d,58,54,f7),
	HX_("getChildByName",88,b9,73,a3),
	HX_("_getChildByName",27,02,d4,ec),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("_removeChildren",42,9e,20,84),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("_setChildIndex",59,3a,5a,3c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("_getChildAt",d8,d4,97,88),
	HX_("initializeLayoutGroupTheme",04,2f,6e,b0),
	HX_("getPrivateIndexForPublicIndex",c5,3c,7f,25),
	HX_("_xmlContent",41,8d,4c,ce),
	HX_("get_xmlContent",6b,48,b8,71),
	HX_("set_xmlContent",df,30,d8,91),
	HX_("validateNow",20,c2,bf,ca),
	HX_("update",09,86,05,87),
	HX_("refreshDisabledOverlay",d9,0d,c1,36),
	HX_("refreshLayout",e5,52,f3,56),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("refreshMaskSkin",84,d2,8d,e7),
	HX_("getCurrentMaskSkin",ec,c2,4c,71),
	HX_("addCurrentMaskSkin",c1,c5,fe,0c),
	HX_("removeCurrentMaskSkin",fe,fa,64,b5),
	HX_("refreshViewPortBounds",d6,72,b8,b5),
	HX_("handleCustomLayout",03,b1,70,a6),
	HX_("handleManualLayout",58,f5,af,ed),
	HX_("handleLayoutResult",ef,92,e3,71),
	HX_("refreshMaskLayout",71,ba,9d,c0),
	HX_("refreshBackgroundLayout",33,b9,01,1e),
	HX_("validateChildren",f5,2b,c3,28),
	HX_("layoutGroup_addedToStageHandler",5d,73,9d,bb),
	HX_("layoutGroup_removedFromStageHandler",ac,73,1e,e7),
	HX_("layoutGroup_stage_resizeHandler",6b,2b,d2,ce),
	HX_("layoutGroup_child_resizeHandler",c9,72,e5,07),
	HX_("layoutGroup_child_layoutDataChangeHandler",f9,51,fc,c2),
	HX_("layoutGroup_layout_changeHandler",2f,6c,10,38),
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
	HX_("__maskSkin",a9,dc,6d,8d),
	HX_("get_maskSkin",92,1d,4f,9f),
	HX_("set_maskSkin",06,41,48,b4),
	HX_("clearStyle_maskSkin",04,d0,9d,6b),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

static void LayoutGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayoutGroup_obj::VARIANT_TOOL_BAR,"VARIANT_TOOL_BAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LayoutGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayoutGroup_obj::VARIANT_TOOL_BAR,"VARIANT_TOOL_BAR");
};

#endif

::hx::Class LayoutGroup_obj::__mClass;

static ::String LayoutGroup_obj_sStaticFields[] = {
	HX_("VARIANT_TOOL_BAR",66,f0,2e,84),
	::String(null())
};

void LayoutGroup_obj::__register()
{
	LayoutGroup_obj _hx_dummy;
	LayoutGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.LayoutGroup",5b,86,11,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LayoutGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &LayoutGroup_obj::__SetStatic;
	__mClass->mMarkFunc = LayoutGroup_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LayoutGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LayoutGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LayoutGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LayoutGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LayoutGroup_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_60_boot)
HXDLIN(  60)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("xmlContent",22,c0,c2,fb))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_78_boot)
HXDLIN(  78)		VARIANT_TOOL_BAR = HX_("toolBar",5b,b5,66,6a);
            	}
}

} // end namespace feathers
} // end namespace controls
