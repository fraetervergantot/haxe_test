#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
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
#ifndef INCLUDED_feathers_layout_IScrollLayout
#include <feathers/layout/IScrollLayout.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelScrollContainerStyles
#include <feathers/themes/steel/components/SteelScrollContainerStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_Scroller
#include <feathers/utils/Scroller.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7213fe46e6e46049_55_new,"feathers.controls.ScrollContainer","new",0x62de0e8c,"feathers.controls.ScrollContainer.new","feathers/controls/ScrollContainer.hx",55,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_107_get_xmlContent,"feathers.controls.ScrollContainer","get_xmlContent",0x10e1a1bf,"feathers.controls.ScrollContainer.get_xmlContent","feathers/controls/ScrollContainer.hx",107,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_110_set_xmlContent,"feathers.controls.ScrollContainer","set_xmlContent",0x31018a33,"feathers.controls.ScrollContainer.set_xmlContent","feathers/controls/ScrollContainer.hx",110,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_137_get_childFocusEnabled,"feathers.controls.ScrollContainer","get_childFocusEnabled",0xfd542348,"feathers.controls.ScrollContainer.get_childFocusEnabled","feathers/controls/ScrollContainer.hx",137,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_140_set_childFocusEnabled,"feathers.controls.ScrollContainer","set_childFocusEnabled",0x515cf154,"feathers.controls.ScrollContainer.set_childFocusEnabled","feathers/controls/ScrollContainer.hx",140,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_169_get_autoSizeMode,"feathers.controls.ScrollContainer","get_autoSizeMode",0xe74ffa30,"feathers.controls.ScrollContainer.get_autoSizeMode","feathers/controls/ScrollContainer.hx",169,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_172_set_autoSizeMode,"feathers.controls.ScrollContainer","set_autoSizeMode",0x3d91e7a4,"feathers.controls.ScrollContainer.set_autoSizeMode","feathers/controls/ScrollContainer.hx",172,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_192_get_numRawChildren,"feathers.controls.ScrollContainer","get_numRawChildren",0x8c4ababe,"feathers.controls.ScrollContainer.get_numRawChildren","feathers/controls/ScrollContainer.hx",192,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_201_get_numChildren,"feathers.controls.ScrollContainer","get_numChildren",0xc266f168,"feathers.controls.ScrollContainer.get_numChildren","feathers/controls/ScrollContainer.hx",201,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_208_addChild,"feathers.controls.ScrollContainer","addChild",0xa05fb20f,"feathers.controls.ScrollContainer.addChild","feathers/controls/ScrollContainer.hx",208,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_215_addChildAt,"feathers.controls.ScrollContainer","addChildAt",0x3d3bcce2,"feathers.controls.ScrollContainer.addChildAt","feathers/controls/ScrollContainer.hx",215,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_240_removeChild,"feathers.controls.ScrollContainer","removeChild",0xf963d0e4,"feathers.controls.ScrollContainer.removeChild","feathers/controls/ScrollContainer.hx",240,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_259_removeChildAt,"feathers.controls.ScrollContainer","removeChildAt",0xf6a50af7,"feathers.controls.ScrollContainer.removeChildAt","feathers/controls/ScrollContainer.hx",259,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_266_getChildAt,"feathers.controls.ScrollContainer","getChildAt",0x2513270d,"feathers.controls.ScrollContainer.getChildAt","feathers/controls/ScrollContainer.hx",266,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_273_getChildIndex,"feathers.controls.ScrollContainer","getChildIndex",0x70409538,"feathers.controls.ScrollContainer.getChildIndex","feathers/controls/ScrollContainer.hx",273,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_280_setChildIndex,"feathers.controls.ScrollContainer","setChildIndex",0xb5467744,"feathers.controls.ScrollContainer.setChildIndex","feathers/controls/ScrollContainer.hx",280,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_288_getChildByName,"feathers.controls.ScrollContainer","getChildByName",0x429d12dc,"feathers.controls.ScrollContainer.getChildByName","feathers/controls/ScrollContainer.hx",288,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_300_addRawChild,"feathers.controls.ScrollContainer","addRawChild",0x8e4a5c01,"feathers.controls.ScrollContainer.addRawChild","feathers/controls/ScrollContainer.hx",300,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_308_addRawChildAt,"feathers.controls.ScrollContainer","addRawChildAt",0x7a9a5754,"feathers.controls.ScrollContainer.addRawChildAt","feathers/controls/ScrollContainer.hx",308,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_316_removeRawChild,"feathers.controls.ScrollContainer","removeRawChild",0x10f7704c,"feathers.controls.ScrollContainer.removeRawChild","feathers/controls/ScrollContainer.hx",316,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_324_removeRawChildAt,"feathers.controls.ScrollContainer","removeRawChildAt",0xd1ed545f,"feathers.controls.ScrollContainer.removeRawChildAt","feathers/controls/ScrollContainer.hx",324,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_332_getRawChildByName,"feathers.controls.ScrollContainer","getRawChildByName",0xad9083d8,"feathers.controls.ScrollContainer.getRawChildByName","feathers/controls/ScrollContainer.hx",332,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_340_getRawChildAt,"feathers.controls.ScrollContainer","getRawChildAt",0x6cc36a09,"feathers.controls.ScrollContainer.getRawChildAt","feathers/controls/ScrollContainer.hx",340,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_348_getRawChildIndex,"feathers.controls.ScrollContainer","getRawChildIndex",0x5d3757bc,"feathers.controls.ScrollContainer.getRawChildIndex","feathers/controls/ScrollContainer.hx",348,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_356_setRawChildIndex,"feathers.controls.ScrollContainer","setRawChildIndex",0xb3794530,"feathers.controls.ScrollContainer.setRawChildIndex","feathers/controls/ScrollContainer.hx",356,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_363_removeChildren,"feathers.controls.ScrollContainer","removeChildren",0xd9e9aef7,"feathers.controls.ScrollContainer.removeChildren","feathers/controls/ScrollContainer.hx",363,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_389_removeRawChildren,"feathers.controls.ScrollContainer","removeRawChildren",0xdde1a08f,"feathers.controls.ScrollContainer.removeRawChildren","feathers/controls/ScrollContainer.hx",389,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_397_initializeScrollContainerTheme,"feathers.controls.ScrollContainer","initializeScrollContainerTheme",0x8a17bcb9,"feathers.controls.ScrollContainer.initializeScrollContainerTheme","feathers/controls/ScrollContainer.hx",397,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_400_dispatchEvent,"feathers.controls.ScrollContainer","dispatchEvent",0x7da2f42c,"feathers.controls.ScrollContainer.dispatchEvent","feathers/controls/ScrollContainer.hx",400,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_408_validateNow,"feathers.controls.ScrollContainer","validateNow",0x80360c4c,"feathers.controls.ScrollContainer.validateNow","feathers/controls/ScrollContainer.hx",408,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_420_update,"feathers.controls.ScrollContainer","update",0xef0b6b5d,"feathers.controls.ScrollContainer.update","feathers/controls/ScrollContainer.hx",420,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_441_measure,"feathers.controls.ScrollContainer","measure",0xda0cbf8a,"feathers.controls.ScrollContainer.measure","feathers/controls/ScrollContainer.hx",441,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_462_refreshViewPortBoundsForMeasurement,"feathers.controls.ScrollContainer","refreshViewPortBoundsForMeasurement",0x7149d315,"feathers.controls.ScrollContainer.refreshViewPortBoundsForMeasurement","feathers/controls/ScrollContainer.hx",462,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_469_refreshViewPortBoundsForLayout,"feathers.controls.ScrollContainer","refreshViewPortBoundsForLayout",0x44d3fa31,"feathers.controls.ScrollContainer.refreshViewPortBoundsForLayout","feathers/controls/ScrollContainer.hx",469,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_476_refreshScrollerValues,"feathers.controls.ScrollContainer","refreshScrollerValues",0x2f539da3,"feathers.controls.ScrollContainer.refreshScrollerValues","feathers/controls/ScrollContainer.hx",476,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_495_needsScrollMeasurement,"feathers.controls.ScrollContainer","needsScrollMeasurement",0xd5ebb626,"feathers.controls.ScrollContainer.needsScrollMeasurement","feathers/controls/ScrollContainer.hx",495,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_499_refreshLayout,"feathers.controls.ScrollContainer","refreshLayout",0x0e318011,"feathers.controls.ScrollContainer.refreshLayout","feathers/controls/ScrollContainer.hx",499,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_503_scrollContainer_addedToStageHandler,"feathers.controls.ScrollContainer","scrollContainer_addedToStageHandler",0x970c2248,"feathers.controls.ScrollContainer.scrollContainer_addedToStageHandler","feathers/controls/ScrollContainer.hx",503,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_514_scrollContainer_removedFromStageHandler,"feathers.controls.ScrollContainer","scrollContainer_removedFromStageHandler",0x19a67417,"feathers.controls.ScrollContainer.scrollContainer_removedFromStageHandler","feathers/controls/ScrollContainer.hx",514,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_520_scrollContainer_stage_resizeHandler,"feathers.controls.ScrollContainer","scrollContainer_stage_resizeHandler",0xaa40da56,"feathers.controls.ScrollContainer.scrollContainer_stage_resizeHandler","feathers/controls/ScrollContainer.hx",520,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_523_scrollContainer_child_layoutDataChangeHandler,"feathers.controls.ScrollContainer","scrollContainer_child_layoutDataChangeHandler",0xecfcf4a4,"feathers.controls.ScrollContainer.scrollContainer_child_layoutDataChangeHandler","feathers/controls/ScrollContainer.hx",523,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_534_scrollContainer_child_resizeHandler,"feathers.controls.ScrollContainer","scrollContainer_child_resizeHandler",0xe35421b4,"feathers.controls.ScrollContainer.scrollContainer_child_resizeHandler","feathers/controls/ScrollContainer.hx",534,0xee51f644)
HX_LOCAL_STACK_FRAME(_hx_pos_1e383dd8164084e3_42_get_styleContext,"feathers.controls.ScrollContainer","get_styleContext",0x0a51d39b,"feathers.controls.ScrollContainer.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_3fa71e6e102e5248_85_get_layout,"feathers.controls.ScrollContainer","get_layout",0xb8453dc7,"feathers.controls.ScrollContainer.get_layout","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3fa71e6e102e5248_99_set_layout,"feathers.controls.ScrollContainer","set_layout",0xbbc2dc3b,"feathers.controls.ScrollContainer.set_layout","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3fa71e6e102e5248_125_clearStyle_layout,"feathers.controls.ScrollContainer","clearStyle_layout",0xc23b2391,"feathers.controls.ScrollContainer.clearStyle_layout","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_7213fe46e6e46049_55_boot,"feathers.controls.ScrollContainer","boot",0x1787ac86,"feathers.controls.ScrollContainer.boot","feathers/controls/ScrollContainer.hx",55,0xee51f644)
namespace feathers{
namespace controls{

void ScrollContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7213fe46e6e46049_55_new)
HXLINE(  98)		this->_hx___layout = null();
HXLINE( 148)		this->_autoSizeMode = ::feathers::layout::AutoSizeMode_obj::CONTENT_dyn();
HXLINE( 129)		this->_childFocusEnabled = true;
HXLINE( 100)		this->_xmlContent = null();
HXLINE(  80)		this->items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  78)		this->_displayListBypassEnabled = true;
HXLINE(  77)		this->_ignoreChangesButSetFlags = false;
HXLINE(  76)		this->_ignoreChildChanges = false;
HXLINE(  62)		this->initializeScrollContainerTheme();
HXLINE(  64)		super::__construct();
HXLINE(  66)		if (::hx::IsNull( this->get_viewPort() )) {
HXLINE(  67)			this->layoutViewPort =  ::feathers::controls::supportClasses::LayoutViewPort_obj::__alloc( HX_CTX );
HXLINE(  68)			this->addRawChild(this->layoutViewPort);
HXLINE(  69)			this->set_viewPort(this->layoutViewPort);
            		}
HXLINE(  71)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->scrollContainer_addedToStageHandler_dyn(),null(),null(),null());
            	}

Dynamic ScrollContainer_obj::__CreateEmpty() { return new ScrollContainer_obj; }

void *ScrollContainer_obj::_hx_vtable = 0;

Dynamic ScrollContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollContainer_obj > _hx_result = new ScrollContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19d9e0ee) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x0498edf2) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0498edf2;
				}
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x19d9e0ee;
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

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_ScrollContainer__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::ScrollContainer_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::willTrigger,
};

static ::feathers::core::IFocusContainer_obj _hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusContainer= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::ScrollContainer_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::ScrollContainer_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::showFocus,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_childFocusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_childFocusEnabled,
};

static ::feathers::core::IFocusObject_obj _hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::ScrollContainer_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::ScrollContainer_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::showFocus,
};

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::ScrollContainer_obj::set_focusManager,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_ScrollContainer__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::ScrollContainer_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::ScrollContainer_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::ScrollContainer_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::ScrollContainer_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::ScrollContainer_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::ScrollContainer_obj::set_visible,
};

void *ScrollContainer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_controls_ScrollContainer__hx_openfl_events_IEventDispatcher;
		case (int)0xf7aca7c3: return &_hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusContainer;
		case (int)0x701686fd: return &_hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusObject;
		case (int)0x7031642f: return &_hx_feathers_controls_ScrollContainer__hx_feathers_core_IFocusManagerAware;
		case (int)0x3a979a67: return &_hx_feathers_controls_ScrollContainer__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

::Array< ::Dynamic> ScrollContainer_obj::get_xmlContent(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_107_get_xmlContent)
HXDLIN( 107)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,get_xmlContent,return )

::Array< ::Dynamic> ScrollContainer_obj::set_xmlContent(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_110_set_xmlContent)
HXLINE( 111)		if (::hx::IsPointerEq( this->_xmlContent,value )) {
HXLINE( 112)			return this->_xmlContent;
            		}
HXLINE( 114)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 115)			int _g = 0;
HXDLIN( 115)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 115)				_g = (_g + 1);
HXLINE( 116)				this->removeChild(child);
            			}
            		}
HXLINE( 119)		this->_xmlContent = value;
HXLINE( 120)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 121)			int _g = 0;
HXDLIN( 121)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 121)			while((_g < _g1->length)){
HXLINE( 121)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 121)				_g = (_g + 1);
HXLINE( 122)				this->addChild(child);
            			}
            		}
HXLINE( 125)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 126)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,set_xmlContent,return )

bool ScrollContainer_obj::get_childFocusEnabled(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_137_get_childFocusEnabled)
HXDLIN( 137)		if (this->_enabled) {
HXDLIN( 137)			return this->_childFocusEnabled;
            		}
            		else {
HXDLIN( 137)			return false;
            		}
HXDLIN( 137)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,get_childFocusEnabled,return )

bool ScrollContainer_obj::set_childFocusEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_140_set_childFocusEnabled)
HXLINE( 141)		if ((this->_childFocusEnabled == value)) {
HXLINE( 142)			return this->_childFocusEnabled;
            		}
HXLINE( 144)		this->_childFocusEnabled = value;
HXLINE( 145)		return this->_childFocusEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,set_childFocusEnabled,return )

 ::feathers::layout::AutoSizeMode ScrollContainer_obj::get_autoSizeMode(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_169_get_autoSizeMode)
HXDLIN( 169)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,get_autoSizeMode,return )

 ::feathers::layout::AutoSizeMode ScrollContainer_obj::set_autoSizeMode( ::feathers::layout::AutoSizeMode value){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_172_set_autoSizeMode)
HXLINE( 173)		if (::hx::IsPointerEq( this->_autoSizeMode,value )) {
HXLINE( 174)			return this->_autoSizeMode;
            		}
HXLINE( 176)		this->_autoSizeMode = value;
HXLINE( 177)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 178)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 179)			if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 180)				this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_stage_resizeHandler_dyn(),false,0,true);
HXLINE( 181)				this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->scrollContainer_removedFromStageHandler_dyn(),null(),null(),null());
            			}
            			else {
HXLINE( 183)				this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_stage_resizeHandler_dyn(),null());
HXLINE( 184)				this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->scrollContainer_removedFromStageHandler_dyn(),null());
            			}
            		}
HXLINE( 187)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,set_autoSizeMode,return )

int ScrollContainer_obj::get_numRawChildren(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_192_get_numRawChildren)
HXLINE( 193)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 194)		this->_displayListBypassEnabled = false;
HXLINE( 195)		int result = this->get_numChildren();
HXLINE( 196)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 197)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,get_numRawChildren,return )

int ScrollContainer_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_201_get_numChildren)
HXLINE( 202)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 203)			return this->super::get_numChildren();
            		}
HXLINE( 205)		return this->layoutViewPort->get_numChildren();
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_208_addChild)
HXLINE( 209)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 210)			return this->super::addChild(child);
            		}
HXLINE( 212)		return this->addChildAt(child,this->layoutViewPort->get_numChildren());
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_215_addChildAt)
HXLINE( 216)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 217)			return this->super::addChildAt(child,index);
            		}
HXLINE( 219)		int oldIndex = this->items->indexOf(child,null());
HXLINE( 220)		if ((oldIndex == index)) {
HXLINE( 221)			return child;
            		}
HXLINE( 223)		if ((oldIndex >= 0)) {
HXLINE( 224)			this->items->remove(child);
            		}
HXLINE( 228)		this->items->insert(index,child);
HXLINE( 229)		 ::openfl::display::DisplayObject result = this->layoutViewPort->addChildAt(child,index);
HXLINE( 232)		child->addEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_child_resizeHandler_dyn(),null(),null(),null());
HXLINE( 233)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 234)			child->addEventListener(HX_("layoutDataChange",84,c2,16,c9),this->scrollContainer_child_layoutDataChangeHandler_dyn(),false,0,true);
            		}
HXLINE( 236)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 237)		return result;
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_240_removeChild)
HXLINE( 241)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 242)			return this->super::removeChild(child);
            		}
HXLINE( 244)		bool _hx_tmp;
HXDLIN( 244)		if (::hx::IsNotNull( child )) {
HXLINE( 244)			_hx_tmp = ::hx::IsInstanceNotEq( child->parent,this->layoutViewPort );
            		}
            		else {
HXLINE( 244)			_hx_tmp = true;
            		}
HXDLIN( 244)		if (_hx_tmp) {
HXLINE( 245)			return child;
            		}
HXLINE( 247)		this->items->remove(child);
HXLINE( 248)		 ::openfl::display::DisplayObject result = this->layoutViewPort->removeChild(child);
HXLINE( 251)		child->removeEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_child_resizeHandler_dyn(),null());
HXLINE( 252)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 253)			child->removeEventListener(HX_("layoutDataChange",84,c2,16,c9),this->scrollContainer_child_layoutDataChangeHandler_dyn(),null());
            		}
HXLINE( 255)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 256)		return result;
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_259_removeChildAt)
HXLINE( 260)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 261)			return this->super::removeChildAt(index);
            		}
HXLINE( 263)		return this->removeChild(this->layoutViewPort->getChildAt(index));
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_266_getChildAt)
HXLINE( 267)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 268)			return this->super::removeChildAt(index);
            		}
HXLINE( 270)		return this->layoutViewPort->getChildAt(index);
            	}


int ScrollContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_273_getChildIndex)
HXLINE( 274)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 275)			return this->super::getChildIndex(child);
            		}
HXLINE( 277)		return this->items->indexOf(child,null());
            	}


void ScrollContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_280_setChildIndex)
HXLINE( 281)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 282)			this->super::setChildIndex(child,index);
HXDLIN( 282)			return;
            		}
HXLINE( 284)		this->items->remove(child);
HXLINE( 285)		this->items->insert(index,child);
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_288_getChildByName)
HXLINE( 289)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 290)			return this->super::getChildByName(name);
            		}
HXLINE( 292)		{
HXLINE( 292)			int _g = 0;
HXDLIN( 292)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 292)			while((_g < _g1->length)){
HXLINE( 292)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 292)				_g = (_g + 1);
HXLINE( 293)				if ((child->get_name() == name)) {
HXLINE( 294)					return child;
            				}
            			}
            		}
HXLINE( 297)		return null();
            	}


 ::openfl::display::DisplayObject ScrollContainer_obj::addRawChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_300_addRawChild)
HXLINE( 301)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 302)		this->_displayListBypassEnabled = false;
HXLINE( 303)		 ::openfl::display::DisplayObject result = this->addChild(child);
HXLINE( 304)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 305)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,addRawChild,return )

 ::openfl::display::DisplayObject ScrollContainer_obj::addRawChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_308_addRawChildAt)
HXLINE( 309)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 310)		this->_displayListBypassEnabled = false;
HXLINE( 311)		 ::openfl::display::DisplayObject result = this->addChildAt(child,index);
HXLINE( 312)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 313)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScrollContainer_obj,addRawChildAt,return )

 ::openfl::display::DisplayObject ScrollContainer_obj::removeRawChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_316_removeRawChild)
HXLINE( 317)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 318)		this->_displayListBypassEnabled = false;
HXLINE( 319)		 ::openfl::display::DisplayObject result = this->removeChild(child);
HXLINE( 320)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 321)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,removeRawChild,return )

 ::openfl::display::DisplayObject ScrollContainer_obj::removeRawChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_324_removeRawChildAt)
HXLINE( 325)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 326)		this->_displayListBypassEnabled = false;
HXLINE( 327)		 ::openfl::display::DisplayObject result = this->removeChildAt(index);
HXLINE( 328)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 329)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,removeRawChildAt,return )

 ::openfl::display::DisplayObject ScrollContainer_obj::getRawChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_332_getRawChildByName)
HXLINE( 333)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 334)		this->_displayListBypassEnabled = false;
HXLINE( 335)		 ::openfl::display::DisplayObject result = this->getChildByName(name);
HXLINE( 336)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 337)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,getRawChildByName,return )

 ::openfl::display::DisplayObject ScrollContainer_obj::getRawChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_340_getRawChildAt)
HXLINE( 341)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 342)		this->_displayListBypassEnabled = false;
HXLINE( 343)		 ::openfl::display::DisplayObject result = this->getChildAt(index);
HXLINE( 344)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 345)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,getRawChildAt,return )

int ScrollContainer_obj::getRawChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_348_getRawChildIndex)
HXLINE( 349)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 350)		this->_displayListBypassEnabled = false;
HXLINE( 351)		int result = this->getChildIndex(child);
HXLINE( 352)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 353)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,getRawChildIndex,return )

void ScrollContainer_obj::setRawChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_356_setRawChildIndex)
HXLINE( 357)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 358)		this->_displayListBypassEnabled = false;
HXLINE( 359)		this->setChildIndex(child,index);
HXLINE( 360)		this->_displayListBypassEnabled = oldBypass;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScrollContainer_obj,setRawChildIndex,(void))

void ScrollContainer_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_7213fe46e6e46049_363_removeChildren)
HXLINE( 364)		if (!(this->_displayListBypassEnabled)) {
HXLINE( 365)			this->super::removeChildren(beginIndex,endIndex);
HXDLIN( 365)			return;
            		}
HXLINE( 368)		if ((endIndex == (int)2147483647)) {
HXLINE( 369)			endIndex = (this->items->length - 1);
HXLINE( 371)			if ((endIndex < 0)) {
HXLINE( 372)				return;
            			}
            		}
HXLINE( 376)		if ((beginIndex > (this->items->length - 1))) {
HXLINE( 377)			return;
            		}
            		else {
HXLINE( 378)			bool _hx_tmp;
HXDLIN( 378)			bool _hx_tmp1;
HXDLIN( 378)			if ((endIndex >= beginIndex)) {
HXLINE( 378)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 378)				_hx_tmp1 = true;
            			}
HXDLIN( 378)			if (!(_hx_tmp1)) {
HXLINE( 378)				_hx_tmp = (endIndex > this->items->length);
            			}
            			else {
HXLINE( 378)				_hx_tmp = true;
            			}
HXDLIN( 378)			if (_hx_tmp) {
HXLINE( 379)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            			}
            		}
HXLINE( 382)		int numRemovals = (endIndex - beginIndex);
HXLINE( 383)		while((numRemovals >= 0)){
HXLINE( 384)			this->removeChildAt(beginIndex);
HXLINE( 385)			numRemovals = (numRemovals - 1);
            		}
            	}


void ScrollContainer_obj::removeRawChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_389_removeRawChildren)
HXLINE( 390)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 391)		this->_displayListBypassEnabled = false;
HXLINE( 392)		this->removeChildren(beginIndex,endIndex);
HXLINE( 393)		this->_displayListBypassEnabled = oldBypass;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScrollContainer_obj,removeRawChildren,(void))

void ScrollContainer_obj::initializeScrollContainerTheme(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_397_initializeScrollContainerTheme)
HXDLIN( 397)		::feathers::themes::steel::components::SteelScrollContainerStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,initializeScrollContainerTheme,(void))

bool ScrollContainer_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_400_dispatchEvent)
HXLINE( 401)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 402)		this->_displayListBypassEnabled = true;
HXLINE( 403)		bool result = this->super::dispatchEvent(event);
HXLINE( 404)		this->_displayListBypassEnabled = oldBypass;
HXLINE( 405)		return result;
            	}


void ScrollContainer_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_408_validateNow)
HXLINE( 412)		bool oldIgnoreChildChanges = this->_ignoreChangesButSetFlags;
HXLINE( 413)		this->_ignoreChangesButSetFlags = true;
HXLINE( 414)		this->super::validateNow();
HXLINE( 417)		this->_ignoreChangesButSetFlags = oldIgnoreChildChanges;
            	}


void ScrollContainer_obj::update(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_420_update)
HXLINE( 423)		this->_ignoreChangesButSetFlags = false;
HXLINE( 425)		bool layoutInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 426)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 428)		bool _hx_tmp;
HXDLIN( 428)		if (!(layoutInvalid)) {
HXLINE( 428)			_hx_tmp = stylesInvalid;
            		}
            		else {
HXLINE( 428)			_hx_tmp = true;
            		}
HXDLIN( 428)		if (_hx_tmp) {
HXLINE( 429)			this->refreshLayout();
            		}
HXLINE( 432)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 433)		this->_displayListBypassEnabled = false;
HXLINE( 434)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 435)		this->_ignoreChildChanges = true;
HXLINE( 436)		this->super::update();
HXLINE( 437)		this->_ignoreChildChanges = oldIgnoreChildChanges;
HXLINE( 438)		this->_displayListBypassEnabled = oldBypass;
            	}


bool ScrollContainer_obj::measure(){
            	HX_GC_STACKFRAME(&_hx_pos_7213fe46e6e46049_441_measure)
HXLINE( 442)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 443)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 444)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 445)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 446)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 447)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 448)		bool _hx_tmp;
HXDLIN( 448)		bool _hx_tmp1;
HXDLIN( 448)		bool _hx_tmp2;
HXDLIN( 448)		bool _hx_tmp3;
HXDLIN( 448)		bool _hx_tmp4;
HXDLIN( 448)		if (!(needsWidth)) {
HXLINE( 448)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 448)			_hx_tmp4 = false;
            		}
HXDLIN( 448)		if (_hx_tmp4) {
HXLINE( 448)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 448)			_hx_tmp3 = false;
            		}
HXDLIN( 448)		if (_hx_tmp3) {
HXLINE( 448)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 448)			_hx_tmp2 = false;
            		}
HXDLIN( 448)		if (_hx_tmp2) {
HXLINE( 448)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 448)			_hx_tmp1 = false;
            		}
HXDLIN( 448)		if (_hx_tmp1) {
HXLINE( 448)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 448)			_hx_tmp = false;
            		}
HXDLIN( 448)		if (_hx_tmp) {
HXLINE( 449)			return false;
            		}
HXLINE( 451)		bool _hx_tmp5;
HXDLIN( 451)		if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 451)			_hx_tmp5 = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXLINE( 451)			_hx_tmp5 = false;
            		}
HXDLIN( 451)		if (_hx_tmp5) {
HXLINE( 453)			 ::openfl::geom::Point topLeft = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 454)			 ::openfl::geom::Point bottomRight = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->stage->stageWidth,this->stage->stageHeight));
HXLINE( 455)			Float stageWidth = (bottomRight->x - topLeft->x);
HXLINE( 456)			Float stageHeight = (bottomRight->y - topLeft->y);
HXLINE( 457)			return this->saveMeasurements(stageWidth,stageHeight,stageWidth,stageHeight,null(),null());
            		}
HXLINE( 459)		return this->super::measure();
            	}


void ScrollContainer_obj::refreshViewPortBoundsForMeasurement(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_462_refreshViewPortBoundsForMeasurement)
HXLINE( 463)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 464)		this->_displayListBypassEnabled = true;
HXLINE( 465)		this->super::refreshViewPortBoundsForMeasurement();
HXLINE( 466)		this->_displayListBypassEnabled = oldBypass;
            	}


void ScrollContainer_obj::refreshViewPortBoundsForLayout(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_469_refreshViewPortBoundsForLayout)
HXLINE( 470)		bool oldBypass = this->_displayListBypassEnabled;
HXLINE( 471)		this->_displayListBypassEnabled = true;
HXLINE( 472)		this->super::refreshViewPortBoundsForLayout();
HXLINE( 473)		this->_displayListBypassEnabled = oldBypass;
            	}


void ScrollContainer_obj::refreshScrollerValues(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_476_refreshScrollerValues)
HXLINE( 477)		this->super::refreshScrollerValues();
HXLINE( 478)		if (::Std_obj::isOfType(this->get_layout(),::hx::ClassOf< ::feathers::layout::IScrollLayout >())) {
HXLINE( 479)			::Dynamic scrollLayout = this->get_layout();
HXLINE( 480)			this->scroller->forceElasticTop = ::feathers::layout::IScrollLayout_obj::get_elasticTop(scrollLayout);
HXLINE( 481)			this->scroller->forceElasticRight = ::feathers::layout::IScrollLayout_obj::get_elasticRight(scrollLayout);
HXLINE( 482)			this->scroller->forceElasticBottom = ::feathers::layout::IScrollLayout_obj::get_elasticBottom(scrollLayout);
HXLINE( 483)			this->scroller->forceElasticLeft = ::feathers::layout::IScrollLayout_obj::get_elasticLeft(scrollLayout);
            		}
            		else {
HXLINE( 485)			this->scroller->forceElasticTop = false;
HXLINE( 486)			this->scroller->forceElasticRight = false;
HXLINE( 487)			this->scroller->forceElasticBottom = false;
HXLINE( 488)			this->scroller->forceElasticLeft = false;
            		}
HXLINE( 490)		this->scroller->snapPositionsX = this->layoutViewPort->get_snapPositionsX();
HXLINE( 491)		this->scroller->snapPositionsY = this->layoutViewPort->get_snapPositionsY();
            	}


bool ScrollContainer_obj::needsScrollMeasurement(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_495_needsScrollMeasurement)
HXDLIN( 495)		return ::Std_obj::isOfType(this->get_layout(),::hx::ClassOf< ::feathers::layout::IScrollLayout >());
            	}


void ScrollContainer_obj::refreshLayout(){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_499_refreshLayout)
HXDLIN( 499)		 ::feathers::controls::supportClasses::LayoutViewPort _hx_tmp = this->layoutViewPort;
HXDLIN( 499)		_hx_tmp->set_layout(this->get_layout());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,refreshLayout,(void))

void ScrollContainer_obj::scrollContainer_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_503_scrollContainer_addedToStageHandler)
HXDLIN( 503)		if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 507)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 509)			this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->scrollContainer_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE( 510)			this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_stage_resizeHandler_dyn(),false,0,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,scrollContainer_addedToStageHandler,(void))

void ScrollContainer_obj::scrollContainer_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_514_scrollContainer_removedFromStageHandler)
HXLINE( 515)		this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->scrollContainer_removedFromStageHandler_dyn(),null());
HXLINE( 516)		this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->scrollContainer_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,scrollContainer_removedFromStageHandler,(void))

void ScrollContainer_obj::scrollContainer_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_520_scrollContainer_stage_resizeHandler)
HXDLIN( 520)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,scrollContainer_stage_resizeHandler,(void))

void ScrollContainer_obj::scrollContainer_child_layoutDataChangeHandler( ::feathers::events::FeathersEvent event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_523_scrollContainer_child_layoutDataChangeHandler)
HXLINE( 524)		if (this->_ignoreChildChanges) {
HXLINE( 525)			return;
            		}
HXLINE( 527)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 528)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 529)			return;
            		}
HXLINE( 531)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,scrollContainer_child_layoutDataChangeHandler,(void))

void ScrollContainer_obj::scrollContainer_child_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_534_scrollContainer_child_resizeHandler)
HXLINE( 535)		if (this->_ignoreChildChanges) {
HXLINE( 536)			return;
            		}
HXLINE( 538)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 539)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 540)			return;
            		}
HXLINE( 542)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,scrollContainer_child_resizeHandler,(void))

::hx::Class ScrollContainer_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_1e383dd8164084e3_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::ScrollContainer >();
            	}


::Dynamic ScrollContainer_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_3fa71e6e102e5248_85_get_layout)
HXDLIN(  85)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,get_layout,return )

::Dynamic ScrollContainer_obj::set_layout(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3fa71e6e102e5248_99_set_layout)
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


HX_DEFINE_DYNAMIC_FUNC1(ScrollContainer_obj,set_layout,return )

::Dynamic ScrollContainer_obj::clearStyle_layout(){
            	HX_STACKFRAME(&_hx_pos_3fa71e6e102e5248_125_clearStyle_layout)
HXLINE( 126)		this->set_layout(null());
HXLINE( 127)		return this->get_layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollContainer_obj,clearStyle_layout,return )


::hx::ObjectPtr< ScrollContainer_obj > ScrollContainer_obj::__new() {
	::hx::ObjectPtr< ScrollContainer_obj > __this = new ScrollContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScrollContainer_obj > ScrollContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScrollContainer_obj *__this = (ScrollContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollContainer_obj), true, "feathers.controls.ScrollContainer"));
	*(void **)__this = ScrollContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollContainer_obj::ScrollContainer_obj()
{
}

void ScrollContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollContainer);
	HX_MARK_MEMBER_NAME(layoutViewPort,"layoutViewPort");
	HX_MARK_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_MARK_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_MARK_MEMBER_NAME(_displayListBypassEnabled,"_displayListBypassEnabled");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_MARK_MEMBER_NAME(_childFocusEnabled,"_childFocusEnabled");
	HX_MARK_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_MARK_MEMBER_NAME(_hx___layout,"__layout");
	 ::feathers::controls::supportClasses::BaseScrollContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layoutViewPort,"layoutViewPort");
	HX_VISIT_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_VISIT_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_VISIT_MEMBER_NAME(_displayListBypassEnabled,"_displayListBypassEnabled");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_VISIT_MEMBER_NAME(_childFocusEnabled,"_childFocusEnabled");
	HX_VISIT_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_VISIT_MEMBER_NAME(_hx___layout,"__layout");
	 ::feathers::controls::supportClasses::BaseScrollContainer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { return ::hx::Val( _hx___layout ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_xmlContent() ); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { return ::hx::Val( _xmlContent ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"addRawChild") ) { return ::hx::Val( addRawChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSizeMode() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { return ::hx::Val( _autoSizeMode ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"addRawChildAt") ) { return ::hx::Val( addRawChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRawChildAt") ) { return ::hx::Val( getRawChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshLayout") ) { return ::hx::Val( refreshLayout_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"layoutViewPort") ) { return ::hx::Val( layoutViewPort ); }
		if (HX_FIELD_EQ(inName,"get_xmlContent") ) { return ::hx::Val( get_xmlContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xmlContent") ) { return ::hx::Val( set_xmlContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"numRawChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numRawChildren() ); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRawChild") ) { return ::hx::Val( removeRawChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_autoSizeMode") ) { return ::hx::Val( get_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSizeMode") ) { return ::hx::Val( set_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRawChildAt") ) { return ::hx::Val( removeRawChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRawChildIndex") ) { return ::hx::Val( getRawChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRawChildIndex") ) { return ::hx::Val( setRawChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childFocusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_childFocusEnabled() ); }
		if (HX_FIELD_EQ(inName,"getRawChildByName") ) { return ::hx::Val( getRawChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeRawChildren") ) { return ::hx::Val( removeRawChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layout") ) { return ::hx::Val( clearStyle_layout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_childFocusEnabled") ) { return ::hx::Val( _childFocusEnabled ); }
		if (HX_FIELD_EQ(inName,"get_numRawChildren") ) { return ::hx::Val( get_numRawChildren_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { return ::hx::Val( _ignoreChildChanges ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_childFocusEnabled") ) { return ::hx::Val( get_childFocusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_childFocusEnabled") ) { return ::hx::Val( set_childFocusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshScrollerValues") ) { return ::hx::Val( refreshScrollerValues_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"needsScrollMeasurement") ) { return ::hx::Val( needsScrollMeasurement_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { return ::hx::Val( _ignoreChangesButSetFlags ); }
		if (HX_FIELD_EQ(inName,"_displayListBypassEnabled") ) { return ::hx::Val( _displayListBypassEnabled ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"initializeScrollContainerTheme") ) { return ::hx::Val( initializeScrollContainerTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshViewPortBoundsForLayout") ) { return ::hx::Val( refreshViewPortBoundsForLayout_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"refreshViewPortBoundsForMeasurement") ) { return ::hx::Val( refreshViewPortBoundsForMeasurement_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollContainer_addedToStageHandler") ) { return ::hx::Val( scrollContainer_addedToStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollContainer_stage_resizeHandler") ) { return ::hx::Val( scrollContainer_stage_resizeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollContainer_child_resizeHandler") ) { return ::hx::Val( scrollContainer_child_resizeHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"scrollContainer_removedFromStageHandler") ) { return ::hx::Val( scrollContainer_removedFromStageHandler_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"scrollContainer_child_layoutDataChangeHandler") ) { return ::hx::Val( scrollContainer_child_layoutDataChangeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__layout") ) { _hx___layout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xmlContent(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { _xmlContent=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSizeMode(inValue.Cast<  ::feathers::layout::AutoSizeMode >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { _autoSizeMode=inValue.Cast<  ::feathers::layout::AutoSizeMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"layoutViewPort") ) { layoutViewPort=inValue.Cast<  ::feathers::controls::supportClasses::LayoutViewPort >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childFocusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_childFocusEnabled(inValue.Cast< bool >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_childFocusEnabled") ) { _childFocusEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { _ignoreChildChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { _ignoreChangesButSetFlags=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_displayListBypassEnabled") ) { _displayListBypassEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layoutViewPort",50,9d,96,5b));
	outFields->push(HX_("_ignoreChildChanges",18,b7,88,de));
	outFields->push(HX_("_ignoreChangesButSetFlags",74,fb,7a,8a));
	outFields->push(HX_("_displayListBypassEnabled",b8,f0,0d,31));
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_xmlContent",41,8d,4c,ce));
	outFields->push(HX_("xmlContent",22,c0,c2,fb));
	outFields->push(HX_("_childFocusEnabled",06,8c,8a,7b));
	outFields->push(HX_("childFocusEnabled",45,e7,74,a8));
	outFields->push(HX_("_autoSizeMode",32,4a,ee,05));
	outFields->push(HX_("autoSizeMode",53,b7,7f,23));
	outFields->push(HX_("numRawChildren",a1,46,be,01));
	outFields->push(HX_("__layout",ca,19,e8,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::supportClasses::LayoutViewPort */ ,(int)offsetof(ScrollContainer_obj,layoutViewPort),HX_("layoutViewPort",50,9d,96,5b)},
	{::hx::fsBool,(int)offsetof(ScrollContainer_obj,_ignoreChildChanges),HX_("_ignoreChildChanges",18,b7,88,de)},
	{::hx::fsBool,(int)offsetof(ScrollContainer_obj,_ignoreChangesButSetFlags),HX_("_ignoreChangesButSetFlags",74,fb,7a,8a)},
	{::hx::fsBool,(int)offsetof(ScrollContainer_obj,_displayListBypassEnabled),HX_("_displayListBypassEnabled",b8,f0,0d,31)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScrollContainer_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScrollContainer_obj,_xmlContent),HX_("_xmlContent",41,8d,4c,ce)},
	{::hx::fsBool,(int)offsetof(ScrollContainer_obj,_childFocusEnabled),HX_("_childFocusEnabled",06,8c,8a,7b)},
	{::hx::fsObject /*  ::feathers::layout::AutoSizeMode */ ,(int)offsetof(ScrollContainer_obj,_autoSizeMode),HX_("_autoSizeMode",32,4a,ee,05)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ScrollContainer_obj,_hx___layout),HX_("__layout",ca,19,e8,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollContainer_obj_sMemberFields[] = {
	HX_("layoutViewPort",50,9d,96,5b),
	HX_("_ignoreChildChanges",18,b7,88,de),
	HX_("_ignoreChangesButSetFlags",74,fb,7a,8a),
	HX_("_displayListBypassEnabled",b8,f0,0d,31),
	HX_("items",00,ac,0c,c2),
	HX_("_xmlContent",41,8d,4c,ce),
	HX_("get_xmlContent",6b,48,b8,71),
	HX_("set_xmlContent",df,30,d8,91),
	HX_("_childFocusEnabled",06,8c,8a,7b),
	HX_("get_childFocusEnabled",1c,ea,22,27),
	HX_("set_childFocusEnabled",28,b8,2b,7b),
	HX_("_autoSizeMode",32,4a,ee,05),
	HX_("get_autoSizeMode",dc,a3,1e,28),
	HX_("set_autoSizeMode",50,91,60,7e),
	HX_("get_numRawChildren",6a,27,58,9d),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("getChildByName",88,b9,73,a3),
	HX_("addRawChild",d5,11,d4,d8),
	HX_("addRawChildAt",28,2a,5c,c3),
	HX_("removeRawChild",f8,16,ce,71),
	HX_("removeRawChildAt",0b,fe,bb,12),
	HX_("getRawChildByName",ac,50,96,21),
	HX_("getRawChildAt",dd,3c,85,b5),
	HX_("getRawChildIndex",68,01,06,9e),
	HX_("setRawChildIndex",dc,ee,47,f4),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("removeRawChildren",63,6d,e7,51),
	HX_("initializeScrollContainerTheme",65,7b,eb,8c),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("validateNow",20,c2,bf,ca),
	HX_("update",09,86,05,87),
	HX_("measure",5e,fb,e9,3c),
	HX_("refreshViewPortBoundsForMeasurement",e9,64,87,e5),
	HX_("refreshViewPortBoundsForLayout",dd,b8,a7,47),
	HX_("refreshScrollerValues",77,64,22,59),
	HX_("needsScrollMeasurement",d2,e8,0a,41),
	HX_("refreshLayout",e5,52,f3,56),
	HX_("scrollContainer_addedToStageHandler",1c,b4,49,0b),
	HX_("scrollContainer_removedFromStageHandler",eb,7f,73,1b),
	HX_("scrollContainer_stage_resizeHandler",2a,6c,7e,1e),
	HX_("scrollContainer_child_layoutDataChangeHandler",78,97,6a,a2),
	HX_("scrollContainer_child_resizeHandler",88,b3,91,57),
	HX_("get_styleContext",47,7d,20,4b),
	HX_("__layout",ca,19,e8,00),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("clearStyle_layout",65,f0,40,36),
	::String(null()) };

::hx::Class ScrollContainer_obj::__mClass;

void ScrollContainer_obj::__register()
{
	ScrollContainer_obj _hx_dummy;
	ScrollContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.ScrollContainer",9a,18,01,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollContainer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7213fe46e6e46049_55_boot)
HXDLIN(  55)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("xmlContent",22,c0,c2,fb))))));
            	}
}

} // end namespace feathers
} // end namespace controls
