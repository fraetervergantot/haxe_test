#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
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
#ifndef INCLUDED_feathers_core__FeathersControl_StyleDefinition
#include <feathers/core/_FeathersControl/StyleDefinition.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_StyleProviderEvent
#include <feathers/events/StyleProviderEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_Theme
#include <feathers/style/Theme.h>
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
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
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
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc095ab710aad3a1_67_new,"feathers.core.FeathersControl","new",0x1161a24e,"feathers.core.FeathersControl.new","feathers/core/FeathersControl.hx",67,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_106_get_initialized,"feathers.core.FeathersControl","get_initialized",0xe7e9ab99,"feathers.core.FeathersControl.get_initialized","feathers/core/FeathersControl.hx",106,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_131_get_created,"feathers.core.FeathersControl","get_created",0x309b85ed,"feathers.core.FeathersControl.get_created","feathers/core/FeathersControl.hx",131,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_142_get_enabled,"feathers.core.FeathersControl","get_enabled",0x9d61d486,"feathers.core.FeathersControl.get_enabled","feathers/core/FeathersControl.hx",142,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_145_set_enabled,"feathers.core.FeathersControl","set_enabled",0xa7cedb92,"feathers.core.FeathersControl.set_enabled","feathers/core/FeathersControl.hx",145,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_172_get_toolTip,"feathers.core.FeathersControl","get_toolTip",0x89a534e8,"feathers.core.FeathersControl.get_toolTip","feathers/core/FeathersControl.hx",172,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_175_set_toolTip,"feathers.core.FeathersControl","set_toolTip",0x94123bf4,"feathers.core.FeathersControl.set_toolTip","feathers/core/FeathersControl.hx",175,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_191_get_themeEnabled,"feathers.core.FeathersControl","get_themeEnabled",0xbd536f53,"feathers.core.FeathersControl.get_themeEnabled","feathers/core/FeathersControl.hx",191,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_194_set_themeEnabled,"feathers.core.FeathersControl","set_themeEnabled",0x13955cc7,"feathers.core.FeathersControl.set_themeEnabled","feathers/core/FeathersControl.hx",194,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_246_get_styleProvider,"feathers.core.FeathersControl","get_styleProvider",0x42838d47,"feathers.core.FeathersControl.get_styleProvider","feathers/core/FeathersControl.hx",246,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_253_set_styleProvider,"feathers.core.FeathersControl","set_styleProvider",0x65f16553,"feathers.core.FeathersControl.set_styleProvider","feathers/core/FeathersControl.hx",253,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_288_get_styleContext,"feathers.core.FeathersControl","get_styleContext",0x54278e99,"feathers.core.FeathersControl.get_styleContext","feathers/core/FeathersControl.hx",288,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_299_get_includeInLayout,"feathers.core.FeathersControl","get_includeInLayout",0x81fdf7bc,"feathers.core.FeathersControl.get_includeInLayout","feathers/core/FeathersControl.hx",299,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_302_set_includeInLayout,"feathers.core.FeathersControl","set_includeInLayout",0xbe9aeac8,"feathers.core.FeathersControl.set_includeInLayout","feathers/core/FeathersControl.hx",302,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_320_get_layoutData,"feathers.core.FeathersControl","get_layoutData",0xdb820f0f,"feathers.core.FeathersControl.get_layoutData","feathers/core/FeathersControl.hx",320,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_323_set_layoutData,"feathers.core.FeathersControl","set_layoutData",0xfba1f783,"feathers.core.FeathersControl.set_layoutData","feathers/core/FeathersControl.hx",323,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_345_set_alpha,"feathers.core.FeathersControl","set_alpha",0xd045e82f,"feathers.core.FeathersControl.set_alpha","feathers/core/FeathersControl.hx",345,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_371_get_focusManager,"feathers.core.FeathersControl","get_focusManager",0x78398350,"feathers.core.FeathersControl.get_focusManager","feathers/core/FeathersControl.hx",371,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_374_set_focusManager,"feathers.core.FeathersControl","set_focusManager",0xce7b70c4,"feathers.core.FeathersControl.set_focusManager","feathers/core/FeathersControl.hx",374,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_393_get_focusOwner,"feathers.core.FeathersControl","get_focusOwner",0xf9577a56,"feathers.core.FeathersControl.get_focusOwner","feathers/core/FeathersControl.hx",393,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_396_set_focusOwner,"feathers.core.FeathersControl","set_focusOwner",0x197762ca,"feathers.core.FeathersControl.set_focusOwner","feathers/core/FeathersControl.hx",396,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_408_get_rawTabEnabled,"feathers.core.FeathersControl","get_rawTabEnabled",0xfaf66479,"feathers.core.FeathersControl.get_rawTabEnabled","feathers/core/FeathersControl.hx",408,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_419_get_focusEnabled,"feathers.core.FeathersControl","get_focusEnabled",0xe2a8f564,"feathers.core.FeathersControl.get_focusEnabled","feathers/core/FeathersControl.hx",419,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_422_set_focusEnabled,"feathers.core.FeathersControl","set_focusEnabled",0x38eae2d8,"feathers.core.FeathersControl.set_focusEnabled","feathers/core/FeathersControl.hx",422,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_432_get_tabEnabled,"feathers.core.FeathersControl","get_tabEnabled",0x3e8837c7,"feathers.core.FeathersControl.get_tabEnabled","feathers/core/FeathersControl.hx",432,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_447_get_focusRectSkin,"feathers.core.FeathersControl","get_focusRectSkin",0xfbe7c77e,"feathers.core.FeathersControl.get_focusRectSkin","feathers/core/FeathersControl.hx",447,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_450_set_focusRectSkin,"feathers.core.FeathersControl","set_focusRectSkin",0x1f559f8a,"feathers.core.FeathersControl.set_focusRectSkin","feathers/core/FeathersControl.hx",450,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_475_get_focusPaddingTop,"feathers.core.FeathersControl","get_focusPaddingTop",0xf32f7c41,"feathers.core.FeathersControl.get_focusPaddingTop","feathers/core/FeathersControl.hx",475,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_478_set_focusPaddingTop,"feathers.core.FeathersControl","set_focusPaddingTop",0x2fcc6f4d,"feathers.core.FeathersControl.set_focusPaddingTop","feathers/core/FeathersControl.hx",478,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_502_get_focusPaddingRight,"feathers.core.FeathersControl","get_focusPaddingRight",0x906ce488,"feathers.core.FeathersControl.get_focusPaddingRight","feathers/core/FeathersControl.hx",502,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_505_set_focusPaddingRight,"feathers.core.FeathersControl","set_focusPaddingRight",0xe475b294,"feathers.core.FeathersControl.set_focusPaddingRight","feathers/core/FeathersControl.hx",505,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_529_get_focusPaddingBottom,"feathers.core.FeathersControl","get_focusPaddingBottom",0xe62da4bf,"feathers.core.FeathersControl.get_focusPaddingBottom","feathers/core/FeathersControl.hx",529,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_532_set_focusPaddingBottom,"feathers.core.FeathersControl","set_focusPaddingBottom",0x19d92133,"feathers.core.FeathersControl.set_focusPaddingBottom","feathers/core/FeathersControl.hx",532,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_556_get_focusPaddingLeft,"feathers.core.FeathersControl","get_focusPaddingLeft",0xd10be8db,"feathers.core.FeathersControl.get_focusPaddingLeft","feathers/core/FeathersControl.hx",556,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_559_set_focusPaddingLeft,"feathers.core.FeathersControl","set_focusPaddingLeft",0x9dc3a04f,"feathers.core.FeathersControl.set_focusPaddingLeft","feathers/core/FeathersControl.hx",559,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_581_setFocusPadding,"feathers.core.FeathersControl","setFocusPadding",0x35fd1e89,"feathers.core.FeathersControl.setFocusPadding","feathers/core/FeathersControl.hx",581,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_591_showFocus,"feathers.core.FeathersControl","showFocus",0xbaa2be09,"feathers.core.FeathersControl.showFocus","feathers/core/FeathersControl.hx",591,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_607_clearStyle_layoutData,"feathers.core.FeathersControl","clearStyle_layoutData",0x8e2cee9d,"feathers.core.FeathersControl.clearStyle_layoutData","feathers/core/FeathersControl.hx",607,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_611_clearStyle_focusRectSkin,"feathers.core.FeathersControl","clearStyle_focusRectSkin",0x93ee94b0,"feathers.core.FeathersControl.clearStyle_focusRectSkin","feathers/core/FeathersControl.hx",611,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_618_clearStyle_focusPaddingTop,"feathers.core.FeathersControl","clearStyle_focusPaddingTop",0xb46979f3,"feathers.core.FeathersControl.clearStyle_focusPaddingTop","feathers/core/FeathersControl.hx",618,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_624_clearStyle_focusPaddingRight,"feathers.core.FeathersControl","clearStyle_focusPaddingRight",0x926732ba,"feathers.core.FeathersControl.clearStyle_focusPaddingRight","feathers/core/FeathersControl.hx",624,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_630_clearStyle_focusPaddingBottom,"feathers.core.FeathersControl","clearStyle_focusPaddingBottom",0x9f37c24d,"feathers.core.FeathersControl.clearStyle_focusPaddingBottom","feathers/core/FeathersControl.hx",630,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_636_clearStyle_focusPaddingLeft,"feathers.core.FeathersControl","clearStyle_focusPaddingLeft",0x228fe6e9,"feathers.core.FeathersControl.clearStyle_focusPaddingLeft","feathers/core/FeathersControl.hx",636,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_641_positionFocusRect,"feathers.core.FeathersControl","positionFocusRect",0x24081da1,"feathers.core.FeathersControl.positionFocusRect","feathers/core/FeathersControl.hx",641,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_657_setLayoutDataInternal,"feathers.core.FeathersControl","setLayoutDataInternal",0x7b7a3b01,"feathers.core.FeathersControl.setLayoutDataInternal","feathers/core/FeathersControl.hx",657,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_683_get_variant,"feathers.core.FeathersControl","get_variant",0xfc13108a,"feathers.core.FeathersControl.get_variant","feathers/core/FeathersControl.hx",683,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_686_set_variant,"feathers.core.FeathersControl","set_variant",0x06801796,"feathers.core.FeathersControl.set_variant","feathers/core/FeathersControl.hx",686,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_708_validateNow,"feathers.core.FeathersControl","validateNow",0x63f6320e,"feathers.core.FeathersControl.validateNow","feathers/core/FeathersControl.hx",708,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_728_initializeNow,"feathers.core.FeathersControl","initializeNow",0x3a5ad914,"feathers.core.FeathersControl.initializeNow","feathers/core/FeathersControl.hx",728,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_750_move,"feathers.core.FeathersControl","move",0x236ac163,"feathers.core.FeathersControl.move","feathers/core/FeathersControl.hx",750,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_764_setSize,"feathers.core.FeathersControl","setSize",0xf6004271,"feathers.core.FeathersControl.setSize","feathers/core/FeathersControl.hx",764,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_789_initialize,"feathers.core.FeathersControl","initialize",0x235f9922,"feathers.core.FeathersControl.initialize","feathers/core/FeathersControl.hx",789,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_798_setStyle,"feathers.core.FeathersControl","setStyle",0x517e7d81,"feathers.core.FeathersControl.setStyle","feathers/core/FeathersControl.hx",798,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_817_isStyleRestricted,"feathers.core.FeathersControl","isStyleRestricted",0xc46e94d0,"feathers.core.FeathersControl.isStyleRestricted","feathers/core/FeathersControl.hx",817,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_822_containsStyleDef,"feathers.core.FeathersControl","containsStyleDef",0x4928bfa5,"feathers.core.FeathersControl.containsStyleDef","feathers/core/FeathersControl.hx",822,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_831_applyStyles,"feathers.core.FeathersControl","applyStyles",0xeb04161e,"feathers.core.FeathersControl.applyStyles","feathers/core/FeathersControl.hx",831,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_884_clearStyles,"feathers.core.FeathersControl","clearStyles",0x42f6637d,"feathers.core.FeathersControl.clearStyles","feathers/core/FeathersControl.hx",884,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_909_clearStyleProvider,"feathers.core.FeathersControl","clearStyleProvider",0x62d01f87,"feathers.core.FeathersControl.clearStyleProvider","feathers/core/FeathersControl.hx",909,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_919_feathersControl_addedToStageHandler,"feathers.core.FeathersControl","feathersControl_addedToStageHandler",0x8f978963,"feathers.core.FeathersControl.feathersControl_addedToStageHandler","feathers/core/FeathersControl.hx",919,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_931_feathersControl_removedFromStageHandler,"feathers.core.FeathersControl","feathersControl_removedFromStageHandler",0x854304b2,"feathers.core.FeathersControl.feathersControl_removedFromStageHandler","feathers/core/FeathersControl.hx",931,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_940_feathersControl_focusInHandler,"feathers.core.FeathersControl","feathersControl_focusInHandler",0x3b849f31,"feathers.core.FeathersControl.feathersControl_focusInHandler","feathers/core/FeathersControl.hx",940,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_951_feathersControl_focusOutHandler,"feathers.core.FeathersControl","feathersControl_focusOutHandler",0x6e0c0a90,"feathers.core.FeathersControl.feathersControl_focusOutHandler","feathers/core/FeathersControl.hx",951,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_958_styleProvider_stylesChangeHandler,"feathers.core.FeathersControl","styleProvider_stylesChangeHandler",0xea1372a9,"feathers.core.FeathersControl.styleProvider_stylesChangeHandler","feathers/core/FeathersControl.hx",958,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_969_customStyleProvider_clearHandler,"feathers.core.FeathersControl","customStyleProvider_clearHandler",0xb888ba3d,"feathers.core.FeathersControl.customStyleProvider_clearHandler","feathers/core/FeathersControl.hx",969,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_976_styleProvider_clearHandler,"feathers.core.FeathersControl","styleProvider_clearHandler",0xfff9abac,"feathers.core.FeathersControl.styleProvider_clearHandler","feathers/core/FeathersControl.hx",976,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_985_layoutData_changeHandler,"feathers.core.FeathersControl","layoutData_changeHandler",0xc193c8c1,"feathers.core.FeathersControl.layoutData_changeHandler","feathers/core/FeathersControl.hx",985,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_989_feathersControl_focusRect_enterFrameHandler,"feathers.core.FeathersControl","feathersControl_focusRect_enterFrameHandler",0x33d5baee,"feathers.core.FeathersControl.feathersControl_focusRect_enterFrameHandler","feathers/core/FeathersControl.hx",989,0x65999542)
HX_LOCAL_STACK_FRAME(_hx_pos_fc095ab710aad3a1_67_boot,"feathers.core.FeathersControl","boot",0x1c256284,"feathers.core.FeathersControl.boot","feathers/core/FeathersControl.hx",67,0x65999542)
namespace feathers{
namespace core{

void FeathersControl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_67_new)
HXLINE( 706)		this->_restrictedStyles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 705)		this->_styleProviderStyles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 704)		this->_clearingStyles = false;
HXLINE( 703)		this->_applyingStyles = false;
HXLINE( 544)		this->_focusPaddingLeft = ((Float)0.0);
HXLINE( 517)		this->_focusPaddingBottom = ((Float)0.0);
HXLINE( 490)		this->_focusPaddingRight = ((Float)0.0);
HXLINE( 463)		this->_focusPaddingTop = ((Float)0.0);
HXLINE( 435)		this->_focusRectSkin = null();
HXLINE( 411)		this->_focusEnabled = true;
HXLINE( 363)		this->_focusManager = null();
HXLINE( 361)		this->disabledAlpha = null();
HXLINE( 334)		this->_explicitAlpha = ((Float)1.0);
HXLINE( 291)		this->_includeInLayout = true;
HXLINE( 212)		this->_customStyleProvider = null();
HXLINE( 211)		this->_currentStyleProvider = null();
HXLINE( 183)		this->_themeEnabled = true;
HXLINE( 164)		this->_toolTip = null();
HXLINE( 134)		this->_enabled = true;
HXLINE( 109)		this->_created = false;
HXLINE(  81)		this->_initialized = false;
HXLINE(  80)		this->_initializing = false;
HXLINE(  79)		this->_waitingToApplyStyles = false;
HXLINE(  69)		super::__construct();
HXLINE(  71)		this->set_tabEnabled(::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::feathers::core::IFocusObject >()));
HXLINE(  73)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->feathersControl_addedToStageHandler_dyn(),null(),null(),null());
HXLINE(  74)		this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->feathersControl_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE(  75)		this->addEventListener(HX_("focusIn",dd,45,83,41),this->feathersControl_focusInHandler_dyn(),null(),null(),null());
HXLINE(  76)		this->addEventListener(HX_("focusOut",96,6f,5e,11),this->feathersControl_focusOutHandler_dyn(),null(),null(),null());
            	}

Dynamic FeathersControl_obj::__CreateEmpty() { return new FeathersControl_obj; }

void *FeathersControl_obj::_hx_vtable = 0;

Dynamic FeathersControl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FeathersControl_obj > _hx_result = new FeathersControl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FeathersControl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
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

static ::feathers::layout::ILayoutObject_obj _hx_feathers_core_FeathersControl__hx_feathers_layout_ILayoutObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::FeathersControl_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::willTrigger,
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_includeInLayout,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_includeInLayout,
	( ::Dynamic (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_layoutData,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::core::FeathersControl_obj::set_layoutData,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_FeathersControl__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::FeathersControl_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::willTrigger,
};

static ::feathers::style::IVariantStyleObject_obj _hx_feathers_core_FeathersControl__hx_feathers_style_IVariantStyleObject= {
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_themeEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_themeEnabled,
	( ::hx::Class (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_styleContext,
	( ::String (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_variant,
	( ::String (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::set_variant,
};

static ::feathers::core::IUIControl_obj _hx_feathers_core_FeathersControl__hx_feathers_core_IUIControl= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::FeathersControl_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_enabled,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_enabled,
	( ::String (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_toolTip,
	( ::String (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::set_toolTip,
	( void (::hx::Object::*)())&::feathers::core::FeathersControl_obj::initializeNow,
};

static ::feathers::style::IStyleObject_obj _hx_feathers_core_FeathersControl__hx_feathers_style_IStyleObject= {
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_themeEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_themeEnabled,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_core_FeathersControl__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::FeathersControl_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::FeathersControl_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::FeathersControl_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::FeathersControl_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::FeathersControl_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::FeathersControl_obj::set_visible,
};

void *FeathersControl_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf54ca718: return &_hx_feathers_core_FeathersControl__hx_feathers_layout_ILayoutObject;
		case (int)0x87530281: return &_hx_feathers_core_FeathersControl__hx_openfl_events_IEventDispatcher;
		case (int)0x41bc4513: return &_hx_feathers_core_FeathersControl__hx_feathers_style_IVariantStyleObject;
		case (int)0x2696a04f: return &_hx_feathers_core_FeathersControl__hx_feathers_core_IUIControl;
		case (int)0xd6c92308: return &_hx_feathers_core_FeathersControl__hx_feathers_style_IStyleObject;
		case (int)0x3a979a67: return &_hx_feathers_core_FeathersControl__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

bool FeathersControl_obj::get_initialized(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_106_get_initialized)
HXDLIN( 106)		return this->_initialized;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_initialized,return )

bool FeathersControl_obj::get_created(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_131_get_created)
HXDLIN( 131)		return this->_created;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_created,return )

bool FeathersControl_obj::get_enabled(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_142_get_enabled)
HXDLIN( 142)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_enabled,return )

bool FeathersControl_obj::set_enabled(bool value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_145_set_enabled)
HXLINE( 146)		if ((this->_enabled == value)) {
HXLINE( 147)			return this->_enabled;
            		}
HXLINE( 149)		this->_enabled = value;
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (!(this->_enabled)) {
HXLINE( 150)			_hx_tmp = ::hx::IsNull( this->disabledAlpha );
            		}
            		else {
HXLINE( 150)			_hx_tmp = true;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 151)			this->super::set_alpha(this->_explicitAlpha);
            		}
            		else {
HXLINE( 152)			bool _hx_tmp;
HXDLIN( 152)			if (!(this->_enabled)) {
HXLINE( 152)				_hx_tmp = ::hx::IsNotNull( this->disabledAlpha );
            			}
            			else {
HXLINE( 152)				_hx_tmp = false;
            			}
HXDLIN( 152)			if (_hx_tmp) {
HXLINE( 153)				this->super::set_alpha(this->disabledAlpha);
            			}
            		}
HXLINE( 155)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 156)		if (this->_enabled) {
HXLINE( 157)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("enable",83,ae,87,f8),null(),null());
            		}
            		else {
HXLINE( 159)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("disable",e8,69,58,b1),null(),null());
            		}
HXLINE( 161)		return this->_enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_enabled,return )

::String FeathersControl_obj::get_toolTip(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_172_get_toolTip)
HXDLIN( 172)		return this->_toolTip;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_toolTip,return )

::String FeathersControl_obj::set_toolTip(::String value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_175_set_toolTip)
HXLINE( 176)		if ((this->_toolTip == value)) {
HXLINE( 177)			return this->_toolTip;
            		}
HXLINE( 179)		this->_toolTip = value;
HXLINE( 180)		return this->_toolTip;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_toolTip,return )

bool FeathersControl_obj::get_themeEnabled(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_191_get_themeEnabled)
HXDLIN( 191)		return this->_themeEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_themeEnabled,return )

bool FeathersControl_obj::set_themeEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_194_set_themeEnabled)
HXLINE( 195)		if ((this->_themeEnabled == value)) {
HXLINE( 196)			return this->_themeEnabled;
            		}
HXLINE( 198)		this->_themeEnabled = value;
HXLINE( 199)		bool _hx_tmp;
HXDLIN( 199)		if (this->_initialized) {
HXLINE( 199)			_hx_tmp = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXLINE( 199)			_hx_tmp = false;
            		}
HXDLIN( 199)		if (_hx_tmp) {
HXLINE( 203)			this->applyStyles();
            		}
            		else {
HXLINE( 205)			this->_waitingToApplyStyles = true;
            		}
HXLINE( 207)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 208)		return this->_themeEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_themeEnabled,return )

::Dynamic FeathersControl_obj::get_styleProvider(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_246_get_styleProvider)
HXLINE( 247)		if (::hx::IsNotNull( this->_customStyleProvider )) {
HXLINE( 248)			return this->_customStyleProvider;
            		}
HXLINE( 250)		return this->_currentStyleProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_styleProvider,return )

::Dynamic FeathersControl_obj::set_styleProvider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_253_set_styleProvider)
HXLINE( 254)		if (::hx::IsInstanceEq( this->_customStyleProvider,value )) {
HXLINE( 255)			return this->_customStyleProvider;
            		}
HXLINE( 257)		if (::hx::IsNotNull( this->_customStyleProvider )) {
HXLINE( 258)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_customStyleProvider,HX_("clear",8d,71,5b,48),this->customStyleProvider_clearHandler_dyn(),null());
            		}
HXLINE( 260)		this->_customStyleProvider = value;
HXLINE( 261)		if (::hx::IsNotNull( this->_customStyleProvider )) {
HXLINE( 262)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_customStyleProvider,HX_("clear",8d,71,5b,48),this->customStyleProvider_clearHandler_dyn(),false,0,true);
            		}
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if (this->_initialized) {
HXLINE( 264)			_hx_tmp = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXLINE( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (_hx_tmp) {
HXLINE( 268)			this->applyStyles();
            		}
            		else {
HXLINE( 270)			this->_waitingToApplyStyles = true;
            		}
HXLINE( 272)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 273)		return this->_customStyleProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_styleProvider,return )

::hx::Class FeathersControl_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_288_get_styleContext)
HXDLIN( 288)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_styleContext,return )

bool FeathersControl_obj::get_includeInLayout(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_299_get_includeInLayout)
HXDLIN( 299)		return this->_includeInLayout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_includeInLayout,return )

bool FeathersControl_obj::set_includeInLayout(bool value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_302_set_includeInLayout)
HXLINE( 303)		if ((this->_includeInLayout == value)) {
HXLINE( 304)			return this->_includeInLayout;
            		}
HXLINE( 306)		this->_includeInLayout = value;
HXLINE( 307)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("layoutDataChange",84,c2,16,c9),null(),null());
HXLINE( 308)		return this->_includeInLayout;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_includeInLayout,return )

::Dynamic FeathersControl_obj::get_layoutData(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_320_get_layoutData)
HXDLIN( 320)		return this->_layoutData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_layoutData,return )

::Dynamic FeathersControl_obj::set_layoutData(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_323_set_layoutData)
HXLINE( 324)		if (!(this->setStyle(HX_("layoutData",f4,cd,02,dd),null()))) {
HXLINE( 325)			return this->_layoutData;
            		}
HXLINE( 330)		this->_previousClearStyle = this->clearStyle_layoutData_dyn();
HXLINE( 331)		return this->setLayoutDataInternal(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_layoutData,return )

Float FeathersControl_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_345_set_alpha)
HXLINE( 346)		this->_explicitAlpha = value;
HXLINE( 347)		bool _hx_tmp;
HXDLIN( 347)		if (!(this->_enabled)) {
HXLINE( 347)			_hx_tmp = ::hx::IsNull( this->disabledAlpha );
            		}
            		else {
HXLINE( 347)			_hx_tmp = true;
            		}
HXDLIN( 347)		if (_hx_tmp) {
HXLINE( 348)			this->super::set_alpha(value);
            		}
HXLINE( 350)		return this->_explicitAlpha;
            	}


::Dynamic FeathersControl_obj::get_focusManager(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_371_get_focusManager)
HXDLIN( 371)		return this->_focusManager;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusManager,return )

::Dynamic FeathersControl_obj::set_focusManager(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_374_set_focusManager)
HXLINE( 375)		if (::hx::IsInstanceEq( this->_focusManager,value )) {
HXLINE( 376)			return this->_focusManager;
            		}
HXLINE( 378)		if (::hx::IsNotNull( this->_focusManager )) {
HXLINE( 379)			this->showFocus(false);
            		}
HXLINE( 381)		this->_focusManager = value;
HXLINE( 382)		return this->_focusManager;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusManager,return )

::Dynamic FeathersControl_obj::get_focusOwner(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_393_get_focusOwner)
HXDLIN( 393)		return this->_focusOwner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusOwner,return )

::Dynamic FeathersControl_obj::set_focusOwner(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_396_set_focusOwner)
HXLINE( 397)		if (::hx::IsInstanceEq( this->_focusOwner,value )) {
HXLINE( 398)			return this->_focusOwner;
            		}
HXLINE( 400)		this->_focusOwner = value;
HXLINE( 401)		return this->_focusOwner;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusOwner,return )

bool FeathersControl_obj::get_rawTabEnabled(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_408_get_rawTabEnabled)
HXDLIN( 408)		return this->super::get_tabEnabled();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_rawTabEnabled,return )

bool FeathersControl_obj::get_focusEnabled(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_419_get_focusEnabled)
HXDLIN( 419)		if (this->_enabled) {
HXDLIN( 419)			return this->_focusEnabled;
            		}
            		else {
HXDLIN( 419)			return false;
            		}
HXDLIN( 419)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusEnabled,return )

bool FeathersControl_obj::set_focusEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_422_set_focusEnabled)
HXLINE( 423)		if ((this->_focusEnabled == value)) {
HXLINE( 424)			return this->_focusEnabled;
            		}
HXLINE( 426)		this->_focusEnabled = value;
HXLINE( 427)		return this->_focusEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusEnabled,return )

bool FeathersControl_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_432_get_tabEnabled)
HXDLIN( 432)		if (this->_enabled) {
HXDLIN( 432)			return this->super::get_tabEnabled();
            		}
            		else {
HXDLIN( 432)			return false;
            		}
HXDLIN( 432)		return false;
            	}


 ::openfl::display::DisplayObject FeathersControl_obj::get_focusRectSkin(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_447_get_focusRectSkin)
HXDLIN( 447)		return this->_focusRectSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusRectSkin,return )

 ::openfl::display::DisplayObject FeathersControl_obj::set_focusRectSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_450_set_focusRectSkin)
HXLINE( 451)		if (!(this->setStyle(HX_("focusRectSkin",b9,a5,4f,18),null()))) {
HXLINE( 452)			return this->_focusRectSkin;
            		}
HXLINE( 454)		this->showFocus(false);
HXLINE( 458)		this->_previousClearStyle = this->clearStyle_focusRectSkin_dyn();
HXLINE( 459)		this->_focusRectSkin = value;
HXLINE( 460)		return this->_focusRectSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusRectSkin,return )

Float FeathersControl_obj::get_focusPaddingTop(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_475_get_focusPaddingTop)
HXDLIN( 475)		return this->_focusPaddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusPaddingTop,return )

Float FeathersControl_obj::set_focusPaddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_478_set_focusPaddingTop)
HXLINE( 479)		if (!(this->setStyle(HX_("focusPaddingTop",3c,9f,f7,df),null()))) {
HXLINE( 480)			return this->_focusPaddingTop;
            		}
HXLINE( 485)		this->_previousClearStyle = this->clearStyle_focusPaddingTop_dyn();
HXLINE( 486)		this->_focusPaddingTop = value;
HXLINE( 487)		return this->_focusPaddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusPaddingTop,return )

Float FeathersControl_obj::get_focusPaddingRight(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_502_get_focusPaddingRight)
HXDLIN( 502)		return this->_focusPaddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusPaddingRight,return )

Float FeathersControl_obj::set_focusPaddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_505_set_focusPaddingRight)
HXLINE( 506)		if (!(this->setStyle(HX_("focusPaddingRight",43,fc,bf,59),null()))) {
HXLINE( 507)			return this->_focusPaddingRight;
            		}
HXLINE( 512)		this->_previousClearStyle = this->clearStyle_focusPaddingRight_dyn();
HXLINE( 513)		this->_focusPaddingRight = value;
HXLINE( 514)		return this->_focusPaddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusPaddingRight,return )

Float FeathersControl_obj::get_focusPaddingBottom(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_529_get_focusPaddingBottom)
HXDLIN( 529)		return this->_focusPaddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusPaddingBottom,return )

Float FeathersControl_obj::set_focusPaddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_532_set_focusPaddingBottom)
HXLINE( 533)		if (!(this->setStyle(HX_("focusPaddingBottom",a4,50,8f,45),null()))) {
HXLINE( 534)			return this->_focusPaddingBottom;
            		}
HXLINE( 539)		this->_previousClearStyle = this->clearStyle_focusPaddingBottom_dyn();
HXLINE( 540)		this->_focusPaddingBottom = value;
HXLINE( 541)		return this->_focusPaddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusPaddingBottom,return )

Float FeathersControl_obj::get_focusPaddingLeft(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_556_get_focusPaddingLeft)
HXDLIN( 556)		return this->_focusPaddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_focusPaddingLeft,return )

Float FeathersControl_obj::set_focusPaddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_559_set_focusPaddingLeft)
HXLINE( 560)		if (!(this->setStyle(HX_("focusPaddingLeft",80,61,62,13),null()))) {
HXLINE( 561)			return this->_focusPaddingLeft;
            		}
HXLINE( 566)		this->_previousClearStyle = this->clearStyle_focusPaddingLeft_dyn();
HXLINE( 567)		this->_focusPaddingLeft = value;
HXLINE( 568)		return this->_focusPaddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_focusPaddingLeft,return )

void FeathersControl_obj::setFocusPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_581_setFocusPadding)
HXLINE( 582)		this->set_focusPaddingTop(value);
HXLINE( 583)		this->set_focusPaddingRight(value);
HXLINE( 584)		this->set_focusPaddingBottom(value);
HXLINE( 585)		this->set_focusPaddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,setFocusPadding,(void))

void FeathersControl_obj::showFocus(bool show){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_591_showFocus)
HXLINE( 592)		bool _hx_tmp;
HXDLIN( 592)		if (::hx::IsNotNull( this->_focusManager )) {
HXLINE( 592)			_hx_tmp = ::hx::IsNull( this->_focusRectSkin );
            		}
            		else {
HXLINE( 592)			_hx_tmp = true;
            		}
HXDLIN( 592)		if (_hx_tmp) {
HXLINE( 593)			return;
            		}
HXLINE( 595)		if (show) {
HXLINE( 596)			::feathers::core::IFocusManager_obj::get_focusPane(this->_focusManager)->addChild(this->_focusRectSkin);
HXLINE( 597)			this->addEventListener(HX_("enterFrame",f5,03,50,02),this->feathersControl_focusRect_enterFrameHandler_dyn(),null(),null(),null());
HXLINE( 598)			this->positionFocusRect();
            		}
            		else {
HXLINE( 599)			if (::hx::IsNotNull( this->_focusRectSkin->parent )) {
HXLINE( 600)				this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->feathersControl_focusRect_enterFrameHandler_dyn(),null());
HXLINE( 601)				this->_focusRectSkin->parent->removeChild(this->_focusRectSkin);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,showFocus,(void))

::Dynamic FeathersControl_obj::clearStyle_layoutData(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_607_clearStyle_layoutData)
HXDLIN( 607)		return this->setLayoutDataInternal(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_layoutData,return )

 ::openfl::display::DisplayObject FeathersControl_obj::clearStyle_focusRectSkin(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_611_clearStyle_focusRectSkin)
HXLINE( 612)		this->showFocus(false);
HXLINE( 613)		this->_focusRectSkin = null();
HXLINE( 614)		return this->_focusRectSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_focusRectSkin,return )

Float FeathersControl_obj::clearStyle_focusPaddingTop(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_618_clearStyle_focusPaddingTop)
HXLINE( 619)		this->_focusPaddingTop = ((Float)0.0);
HXLINE( 620)		return this->_focusPaddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_focusPaddingTop,return )

Float FeathersControl_obj::clearStyle_focusPaddingRight(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_624_clearStyle_focusPaddingRight)
HXLINE( 625)		this->_focusPaddingRight = ((Float)0.0);
HXLINE( 626)		return this->_focusPaddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_focusPaddingRight,return )

Float FeathersControl_obj::clearStyle_focusPaddingBottom(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_630_clearStyle_focusPaddingBottom)
HXLINE( 631)		this->_focusPaddingBottom = ((Float)0.0);
HXLINE( 632)		return this->_focusPaddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_focusPaddingBottom,return )

Float FeathersControl_obj::clearStyle_focusPaddingLeft(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_636_clearStyle_focusPaddingLeft)
HXLINE( 637)		this->_focusPaddingLeft = ((Float)0.0);
HXLINE( 638)		return this->_focusPaddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyle_focusPaddingLeft,return )

void FeathersControl_obj::positionFocusRect(){
            	HX_GC_STACKFRAME(&_hx_pos_fc095ab710aad3a1_641_positionFocusRect)
HXLINE( 642)		bool _hx_tmp;
HXDLIN( 642)		bool _hx_tmp1;
HXDLIN( 642)		if (::hx::IsNotNull( this->_focusManager )) {
HXLINE( 642)			_hx_tmp1 = ::hx::IsNull( this->_focusRectSkin );
            		}
            		else {
HXLINE( 642)			_hx_tmp1 = true;
            		}
HXDLIN( 642)		if (!(_hx_tmp1)) {
HXLINE( 642)			_hx_tmp = ::hx::IsNull( this->_focusRectSkin->parent );
            		}
            		else {
HXLINE( 642)			_hx_tmp = true;
            		}
HXDLIN( 642)		if (_hx_tmp) {
HXLINE( 643)			return;
            		}
HXLINE( 645)		 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,-(this->_focusPaddingLeft),-(this->_focusPaddingTop));
HXLINE( 646)		point = this->localToGlobal(point);
HXLINE( 647)		point = ::feathers::core::IFocusManager_obj::get_focusPane(this->_focusManager)->globalToLocal(point);
HXLINE( 648)		this->_focusRectSkin->set_x(point->x);
HXLINE( 649)		this->_focusRectSkin->set_y(point->y);
HXLINE( 650)		point->setTo((this->actualWidth + this->_focusPaddingRight),(this->actualHeight + this->_focusPaddingBottom));
HXLINE( 651)		point = this->localToGlobal(point);
HXLINE( 652)		point = ::feathers::core::IFocusManager_obj::get_focusPane(this->_focusManager)->globalToLocal(point);
HXLINE( 653)		 ::openfl::display::DisplayObject _hx_tmp2 = this->_focusRectSkin;
HXDLIN( 653)		Float point1 = point->x;
HXDLIN( 653)		_hx_tmp2->set_width((point1 - this->_focusRectSkin->get_x()));
HXLINE( 654)		 ::openfl::display::DisplayObject _hx_tmp3 = this->_focusRectSkin;
HXDLIN( 654)		Float point2 = point->y;
HXDLIN( 654)		_hx_tmp3->set_height((point2 - this->_focusRectSkin->get_y()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,positionFocusRect,(void))

::Dynamic FeathersControl_obj::setLayoutDataInternal(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_657_setLayoutDataInternal)
HXLINE( 658)		if (::hx::IsInstanceEq( this->_layoutData,value )) {
HXLINE( 659)			return this->_layoutData;
            		}
HXLINE( 661)		if (::hx::IsNotNull( this->_layoutData )) {
HXLINE( 662)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_layoutData,HX_("change",70,91,72,b7),this->layoutData_changeHandler_dyn(),null());
            		}
HXLINE( 664)		this->_layoutData = value;
HXLINE( 665)		if (::hx::IsNotNull( this->_layoutData )) {
HXLINE( 666)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_layoutData,HX_("change",70,91,72,b7),this->layoutData_changeHandler_dyn(),false,0,true);
            		}
HXLINE( 668)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("layoutDataChange",84,c2,16,c9),null(),null());
HXLINE( 669)		return this->_layoutData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,setLayoutDataInternal,return )

::String FeathersControl_obj::get_variant(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_683_get_variant)
HXDLIN( 683)		return this->_variant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,get_variant,return )

::String FeathersControl_obj::set_variant(::String value){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_686_set_variant)
HXLINE( 687)		if ((this->_variant == value)) {
HXLINE( 688)			return this->_variant;
            		}
HXLINE( 690)		this->_variant = value;
HXLINE( 691)		bool _hx_tmp;
HXDLIN( 691)		if (this->_initialized) {
HXLINE( 691)			_hx_tmp = ::hx::IsNotNull( this->stage );
            		}
            		else {
HXLINE( 691)			_hx_tmp = false;
            		}
HXDLIN( 691)		if (_hx_tmp) {
HXLINE( 695)			this->applyStyles();
            		}
            		else {
HXLINE( 697)			this->_waitingToApplyStyles = true;
            		}
HXLINE( 699)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 700)		return this->_variant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,set_variant,return )

void FeathersControl_obj::validateNow(){
            	HX_GC_STACKFRAME(&_hx_pos_fc095ab710aad3a1_708_validateNow)
HXLINE( 709)		if (!(this->_initialized)) {
HXLINE( 710)			if (this->_initializing) {
HXLINE( 711)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("A component cannot validate until after it has finished initializing.",d9,ea,17,6f)));
            			}
HXLINE( 713)			this->initializeNow();
            		}
HXLINE( 715)		if (this->_waitingToApplyStyles) {
HXLINE( 716)			this->applyStyles();
            		}
HXLINE( 718)		this->super::validateNow();
HXLINE( 719)		if (!(this->_created)) {
HXLINE( 720)			this->_created = true;
HXLINE( 721)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("creationComplete",f8,fb,74,9f),null(),null());
            		}
            	}


void FeathersControl_obj::initializeNow(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_728_initializeNow)
HXLINE( 729)		bool _hx_tmp;
HXDLIN( 729)		if (!(this->_initialized)) {
HXLINE( 729)			_hx_tmp = this->_initializing;
            		}
            		else {
HXLINE( 729)			_hx_tmp = true;
            		}
HXDLIN( 729)		if (_hx_tmp) {
HXLINE( 730)			return;
            		}
HXLINE( 732)		this->_waitingToApplyStyles = true;
HXLINE( 733)		this->_initializing = true;
HXLINE( 734)		this->initialize();
HXLINE( 735)		this->setInvalid(null());
HXLINE( 736)		this->_initializing = false;
HXLINE( 737)		this->_initialized = true;
HXLINE( 738)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("initialize",50,31,bb,ec),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,initializeNow,(void))

void FeathersControl_obj::move(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_750_move)
HXLINE( 751)		this->set_x(x);
HXLINE( 752)		this->set_y(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FeathersControl_obj,move,(void))

void FeathersControl_obj::setSize(Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_764_setSize)
HXLINE( 765)		this->set_width(width);
HXLINE( 766)		this->set_height(height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FeathersControl_obj,setSize,(void))

void FeathersControl_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_789_initialize)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,initialize,(void))

bool FeathersControl_obj::setStyle(::String styleName, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_798_setStyle)
HXLINE( 799)		 ::feathers::core::_FeathersControl::StyleDefinition styleDef;
HXDLIN( 799)		if (::hx::IsNull( state )) {
HXLINE( 799)			styleDef = ::feathers::core::_FeathersControl::StyleDefinition_obj::Name(styleName);
            		}
            		else {
HXLINE( 799)			styleDef = ::feathers::core::_FeathersControl::StyleDefinition_obj::NameAndState(styleName,state);
            		}
HXLINE( 800)		bool restricted = this->containsStyleDef(this->_restrictedStyles,styleDef);
HXLINE( 801)		bool _hx_tmp;
HXDLIN( 801)		if (this->_applyingStyles) {
HXLINE( 801)			_hx_tmp = restricted;
            		}
            		else {
HXLINE( 801)			_hx_tmp = false;
            		}
HXDLIN( 801)		if (_hx_tmp) {
HXLINE( 802)			return false;
            		}
HXLINE( 804)		if (this->_applyingStyles) {
HXLINE( 805)			bool _hx_tmp;
HXDLIN( 805)			if (!(this->_clearingStyles)) {
HXLINE( 805)				_hx_tmp = !(this->containsStyleDef(this->_styleProviderStyles,styleDef));
            			}
            			else {
HXLINE( 805)				_hx_tmp = false;
            			}
HXDLIN( 805)			if (_hx_tmp) {
HXLINE( 806)				this->_styleProviderStyles->push(styleDef);
            			}
            		}
            		else {
HXLINE( 808)			if (!(restricted)) {
HXLINE( 809)				bool _hx_tmp;
HXDLIN( 809)				if (!(this->_clearingStyles)) {
HXLINE( 809)					_hx_tmp = this->containsStyleDef(this->_styleProviderStyles,styleDef);
            				}
            				else {
HXLINE( 809)					_hx_tmp = false;
            				}
HXDLIN( 809)				if (_hx_tmp) {
HXLINE( 810)					this->_styleProviderStyles->remove(styleDef);
            				}
HXLINE( 812)				this->_restrictedStyles->push(styleDef);
            			}
            		}
HXLINE( 814)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FeathersControl_obj,setStyle,return )

bool FeathersControl_obj::isStyleRestricted(::String styleName, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_817_isStyleRestricted)
HXLINE( 818)		 ::feathers::core::_FeathersControl::StyleDefinition styleDef;
HXDLIN( 818)		if (::hx::IsNull( state )) {
HXLINE( 818)			styleDef = ::feathers::core::_FeathersControl::StyleDefinition_obj::Name(styleName);
            		}
            		else {
HXLINE( 818)			styleDef = ::feathers::core::_FeathersControl::StyleDefinition_obj::NameAndState(styleName,state);
            		}
HXLINE( 819)		return this->containsStyleDef(this->_restrictedStyles,styleDef);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FeathersControl_obj,isStyleRestricted,return )

bool FeathersControl_obj::containsStyleDef(::Array< ::Dynamic> target, ::feathers::core::_FeathersControl::StyleDefinition styleDef){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_822_containsStyleDef)
HXLINE( 823)		{
HXLINE( 823)			int _g = 0;
HXDLIN( 823)			while((_g < target->length)){
HXLINE( 823)				 ::feathers::core::_FeathersControl::StyleDefinition other = target->__get(_g).StaticCast<  ::feathers::core::_FeathersControl::StyleDefinition >();
HXDLIN( 823)				_g = (_g + 1);
HXLINE( 824)				if (__hxcpp_enum_eq(styleDef,other)) {
HXLINE( 825)					return true;
            				}
            			}
            		}
HXLINE( 828)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FeathersControl_obj,containsStyleDef,return )

void FeathersControl_obj::applyStyles(){
            	HX_GC_STACKFRAME(&_hx_pos_fc095ab710aad3a1_831_applyStyles)
HXLINE( 832)		if (!(this->_initialized)) {
HXLINE( 833)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot apply styles until after a Feathers UI component has initialized.",93,b3,d3,93)));
            		}
HXLINE( 835)		this->_waitingToApplyStyles = false;
HXLINE( 836)		::Dynamic styleProvider = this->_customStyleProvider;
HXLINE( 837)		if (::hx::IsNull( styleProvider )) {
HXLINE( 838)			::Dynamic theme = ::feathers::style::Theme_obj::getTheme(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 839)			if (::hx::IsNotNull( theme )) {
HXLINE( 840)				styleProvider = ::feathers::style::ITheme_obj::getStyleProvider(theme,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 843)		bool _hx_tmp;
HXDLIN( 843)		if (this->_themeEnabled) {
HXLINE( 843)			_hx_tmp = ::hx::IsNull( styleProvider );
            		}
            		else {
HXLINE( 843)			_hx_tmp = false;
            		}
HXDLIN( 843)		if (_hx_tmp) {
HXLINE( 844)			::Dynamic theme = ::feathers::style::Theme_obj::get_fallbackTheme();
HXLINE( 845)			if (::hx::IsNotNull( theme )) {
HXLINE( 846)				styleProvider = ::feathers::style::ITheme_obj::getStyleProvider(theme,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
HXLINE( 849)		if (::hx::IsNull( styleProvider )) {
HXLINE( 851)			styleProvider = this->_currentStyleProvider;
            		}
HXLINE( 853)		if (::hx::IsInstanceNotEq( this->_currentStyleProvider,styleProvider )) {
HXLINE( 854)			if (::hx::IsNotNull( this->_currentStyleProvider )) {
HXLINE( 855)				::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentStyleProvider,HX_("stylesChange",32,31,e4,f9),this->styleProvider_stylesChangeHandler_dyn(),null());
HXLINE( 856)				::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentStyleProvider,HX_("clear",8d,71,5b,48),this->styleProvider_clearHandler_dyn(),null());
            			}
HXLINE( 858)			this->_currentStyleProvider = styleProvider;
HXLINE( 859)			if (::hx::IsNotNull( this->_currentStyleProvider )) {
HXLINE( 860)				::openfl::events::IEventDispatcher_obj::addEventListener(this->_currentStyleProvider,HX_("stylesChange",32,31,e4,f9),this->styleProvider_stylesChangeHandler_dyn(),false,0,true);
HXLINE( 861)				::openfl::events::IEventDispatcher_obj::addEventListener(this->_currentStyleProvider,HX_("clear",8d,71,5b,48),this->styleProvider_clearHandler_dyn(),false,0,true);
            			}
            		}
HXLINE( 865)		bool oldApplyingStyles = this->_applyingStyles;
HXLINE( 868)		this->_applyingStyles = true;
HXLINE( 872)		this->clearStyles();
HXLINE( 875)		if (::hx::IsNotNull( this->_currentStyleProvider )) {
HXLINE( 876)			::feathers::style::IStyleProvider_obj::applyStyles(this->_currentStyleProvider,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 879)		this->_applyingStyles = oldApplyingStyles;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,applyStyles,(void))

void FeathersControl_obj::clearStyles(){
            	HX_GC_STACKFRAME(&_hx_pos_fc095ab710aad3a1_884_clearStyles)
HXLINE( 885)		bool oldClearingStyles = this->_clearingStyles;
HXLINE( 886)		this->_clearingStyles = true;
HXLINE( 887)		{
HXLINE( 887)			int _g = 0;
HXDLIN( 887)			::Array< ::Dynamic> _g1 = this->_styleProviderStyles;
HXDLIN( 887)			while((_g < _g1->length)){
HXLINE( 887)				 ::feathers::core::_FeathersControl::StyleDefinition styleDef = _g1->__get(_g).StaticCast<  ::feathers::core::_FeathersControl::StyleDefinition >();
HXDLIN( 887)				_g = (_g + 1);
HXLINE( 888)				switch((int)(styleDef->_hx_getIndex())){
            					case (int)0: {
HXLINE( 889)						::String name = styleDef->_hx_getString(0);
HXLINE( 890)						{
HXLINE( 891)							::String clearMethodName = (HX_("clearStyle_",7b,f3,bf,a9) + name);
HXLINE( 892)							 ::Dynamic clearMethod = ::Reflect_obj::field(::hx::ObjectPtr<OBJ_>(this),clearMethodName);
HXLINE( 893)							if (::hx::IsNull( clearMethod )) {
HXLINE( 894)								HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,((HX_("Missing @style method: '",ab,64,95,d1) + clearMethodName) + HX_("'",27,00,00,00))));
            							}
HXLINE( 896)							::Reflect_obj::callMethod(::hx::ObjectPtr<OBJ_>(this),clearMethod,::cpp::VirtualArray_obj::__new(0));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 898)						::String name = styleDef->_hx_getString(0);
HXDLIN( 898)						 ::Dynamic state = styleDef->_hx_getObject(1);
HXLINE( 899)						{
HXLINE( 900)							 ::Dynamic method = ::Reflect_obj::field(::hx::ObjectPtr<OBJ_>(this),name);
HXLINE( 901)							::Reflect_obj::callMethod(::hx::ObjectPtr<OBJ_>(this),method,::cpp::VirtualArray_obj::__new(2)->init(0,state)->init(1,null()));
            						}
            					}
            					break;
            				}
            			}
            		}
HXLINE( 905)		this->_styleProviderStyles = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 906)		this->_clearingStyles = oldClearingStyles;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyles,(void))

void FeathersControl_obj::clearStyleProvider(){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_909_clearStyleProvider)
HXLINE( 910)		if (::hx::IsNull( this->_currentStyleProvider )) {
HXLINE( 911)			return;
            		}
HXLINE( 913)		::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentStyleProvider,HX_("stylesChange",32,31,e4,f9),this->styleProvider_stylesChangeHandler_dyn(),null());
HXLINE( 914)		::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentStyleProvider,HX_("clear",8d,71,5b,48),this->styleProvider_clearHandler_dyn(),null());
HXLINE( 915)		this->_currentStyleProvider = null();
HXLINE( 916)		this->_waitingToApplyStyles = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FeathersControl_obj,clearStyleProvider,(void))

void FeathersControl_obj::feathersControl_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_919_feathersControl_addedToStageHandler)
HXLINE( 923)		if (!(this->_initialized)) {
HXLINE( 924)			this->initializeNow();
            		}
HXLINE( 926)		if (this->_waitingToApplyStyles) {
HXLINE( 927)			this->applyStyles();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,feathersControl_addedToStageHandler,(void))

void FeathersControl_obj::feathersControl_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_931_feathersControl_removedFromStageHandler)
HXLINE( 932)		this->showFocus(false);
HXLINE( 937)		this->clearStyleProvider();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,feathersControl_removedFromStageHandler,(void))

void FeathersControl_obj::feathersControl_focusInHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_940_feathersControl_focusInHandler)
HXLINE( 941)		::Dynamic focusThis = null();
HXLINE( 942)		if (::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::feathers::core::IFocusObject >())) {
HXLINE( 943)			focusThis =  ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x701686fd);
            		}
HXLINE( 945)		bool _hx_tmp;
HXDLIN( 945)		bool _hx_tmp1;
HXDLIN( 945)		if (::hx::IsNotNull( this->_focusManager )) {
HXLINE( 945)			_hx_tmp1 = !(::feathers::core::IFocusManager_obj::get_showFocusIndicator(this->_focusManager));
            		}
            		else {
HXLINE( 945)			_hx_tmp1 = true;
            		}
HXDLIN( 945)		if (!(_hx_tmp1)) {
HXLINE( 945)			_hx_tmp = ::hx::IsInstanceNotEq( ::feathers::core::IFocusManager_obj::get_focus(this->_focusManager),focusThis );
            		}
            		else {
HXLINE( 945)			_hx_tmp = true;
            		}
HXDLIN( 945)		if (_hx_tmp) {
HXLINE( 946)			return;
            		}
HXLINE( 948)		this->showFocus(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,feathersControl_focusInHandler,(void))

void FeathersControl_obj::feathersControl_focusOutHandler( ::openfl::events::FocusEvent event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_951_feathersControl_focusOutHandler)
HXLINE( 952)		if (::hx::IsNull( this->_focusManager )) {
HXLINE( 953)			return;
            		}
HXLINE( 955)		this->showFocus(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,feathersControl_focusOutHandler,(void))

void FeathersControl_obj::styleProvider_stylesChangeHandler( ::feathers::events::StyleProviderEvent event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_958_styleProvider_stylesChangeHandler)
HXLINE( 959)		if (!(( (bool)(event->affectsTarget(::hx::ObjectPtr<OBJ_>(this))) ))) {
HXLINE( 960)			return;
            		}
HXLINE( 962)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 963)			this->applyStyles();
            		}
            		else {
HXLINE( 965)			this->_waitingToApplyStyles = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,styleProvider_stylesChangeHandler,(void))

void FeathersControl_obj::customStyleProvider_clearHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_969_customStyleProvider_clearHandler)
HXLINE( 970)		::openfl::events::IEventDispatcher_obj::removeEventListener(this->_customStyleProvider,HX_("clear",8d,71,5b,48),this->customStyleProvider_clearHandler_dyn(),null());
HXLINE( 971)		this->_customStyleProvider = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,customStyleProvider_clearHandler,(void))

void FeathersControl_obj::styleProvider_clearHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_976_styleProvider_clearHandler)
HXLINE( 978)		this->clearStyleProvider();
HXLINE( 979)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 980)			this->applyStyles();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,styleProvider_clearHandler,(void))

void FeathersControl_obj::layoutData_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_985_layoutData_changeHandler)
HXDLIN( 985)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("layoutDataChange",84,c2,16,c9),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,layoutData_changeHandler,(void))

void FeathersControl_obj::feathersControl_focusRect_enterFrameHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_989_feathersControl_focusRect_enterFrameHandler)
HXDLIN( 989)		this->positionFocusRect();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FeathersControl_obj,feathersControl_focusRect_enterFrameHandler,(void))


::hx::ObjectPtr< FeathersControl_obj > FeathersControl_obj::__new() {
	::hx::ObjectPtr< FeathersControl_obj > __this = new FeathersControl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FeathersControl_obj > FeathersControl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FeathersControl_obj *__this = (FeathersControl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FeathersControl_obj), true, "feathers.core.FeathersControl"));
	*(void **)__this = FeathersControl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FeathersControl_obj::FeathersControl_obj()
{
}

void FeathersControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FeathersControl);
	HX_MARK_MEMBER_NAME(_waitingToApplyStyles,"_waitingToApplyStyles");
	HX_MARK_MEMBER_NAME(_initializing,"_initializing");
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_created,"_created");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_toolTip,"_toolTip");
	HX_MARK_MEMBER_NAME(_themeEnabled,"_themeEnabled");
	HX_MARK_MEMBER_NAME(_currentStyleProvider,"_currentStyleProvider");
	HX_MARK_MEMBER_NAME(_customStyleProvider,"_customStyleProvider");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_layoutData,"_layoutData");
	HX_MARK_MEMBER_NAME(_explicitAlpha,"_explicitAlpha");
	HX_MARK_MEMBER_NAME(disabledAlpha,"disabledAlpha");
	HX_MARK_MEMBER_NAME(_focusManager,"_focusManager");
	HX_MARK_MEMBER_NAME(_focusOwner,"_focusOwner");
	HX_MARK_MEMBER_NAME(_focusEnabled,"_focusEnabled");
	HX_MARK_MEMBER_NAME(_focusRectSkin,"_focusRectSkin");
	HX_MARK_MEMBER_NAME(_focusPaddingTop,"_focusPaddingTop");
	HX_MARK_MEMBER_NAME(_focusPaddingRight,"_focusPaddingRight");
	HX_MARK_MEMBER_NAME(_focusPaddingBottom,"_focusPaddingBottom");
	HX_MARK_MEMBER_NAME(_focusPaddingLeft,"_focusPaddingLeft");
	HX_MARK_MEMBER_NAME(_variant,"_variant");
	HX_MARK_MEMBER_NAME(_applyingStyles,"_applyingStyles");
	HX_MARK_MEMBER_NAME(_clearingStyles,"_clearingStyles");
	HX_MARK_MEMBER_NAME(_styleProviderStyles,"_styleProviderStyles");
	HX_MARK_MEMBER_NAME(_restrictedStyles,"_restrictedStyles");
	HX_MARK_MEMBER_NAME(_previousClearStyle,"_previousClearStyle");
	 ::feathers::core::MeasureSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FeathersControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_waitingToApplyStyles,"_waitingToApplyStyles");
	HX_VISIT_MEMBER_NAME(_initializing,"_initializing");
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_created,"_created");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_toolTip,"_toolTip");
	HX_VISIT_MEMBER_NAME(_themeEnabled,"_themeEnabled");
	HX_VISIT_MEMBER_NAME(_currentStyleProvider,"_currentStyleProvider");
	HX_VISIT_MEMBER_NAME(_customStyleProvider,"_customStyleProvider");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_layoutData,"_layoutData");
	HX_VISIT_MEMBER_NAME(_explicitAlpha,"_explicitAlpha");
	HX_VISIT_MEMBER_NAME(disabledAlpha,"disabledAlpha");
	HX_VISIT_MEMBER_NAME(_focusManager,"_focusManager");
	HX_VISIT_MEMBER_NAME(_focusOwner,"_focusOwner");
	HX_VISIT_MEMBER_NAME(_focusEnabled,"_focusEnabled");
	HX_VISIT_MEMBER_NAME(_focusRectSkin,"_focusRectSkin");
	HX_VISIT_MEMBER_NAME(_focusPaddingTop,"_focusPaddingTop");
	HX_VISIT_MEMBER_NAME(_focusPaddingRight,"_focusPaddingRight");
	HX_VISIT_MEMBER_NAME(_focusPaddingBottom,"_focusPaddingBottom");
	HX_VISIT_MEMBER_NAME(_focusPaddingLeft,"_focusPaddingLeft");
	HX_VISIT_MEMBER_NAME(_variant,"_variant");
	HX_VISIT_MEMBER_NAME(_applyingStyles,"_applyingStyles");
	HX_VISIT_MEMBER_NAME(_clearingStyles,"_clearingStyles");
	HX_VISIT_MEMBER_NAME(_styleProviderStyles,"_styleProviderStyles");
	HX_VISIT_MEMBER_NAME(_restrictedStyles,"_restrictedStyles");
	HX_VISIT_MEMBER_NAME(_previousClearStyle,"_previousClearStyle");
	 ::feathers::core::MeasureSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FeathersControl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return ::hx::Val( move_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"created") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_created() ); }
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_enabled() ); }
		if (HX_FIELD_EQ(inName,"toolTip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_toolTip() ); }
		if (HX_FIELD_EQ(inName,"variant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_variant() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_created") ) { return ::hx::Val( _created ); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return ::hx::Val( _enabled ); }
		if (HX_FIELD_EQ(inName,"_toolTip") ) { return ::hx::Val( _toolTip ); }
		if (HX_FIELD_EQ(inName,"_variant") ) { return ::hx::Val( _variant ); }
		if (HX_FIELD_EQ(inName,"setStyle") ) { return ::hx::Val( setStyle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"showFocus") ) { return ::hx::Val( showFocus_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layoutData() ); }
		if (HX_FIELD_EQ(inName,"focusOwner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusOwner() ); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_initialized() ); }
		if (HX_FIELD_EQ(inName,"get_created") ) { return ::hx::Val( get_created_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return ::hx::Val( get_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return ::hx::Val( set_enabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_toolTip") ) { return ::hx::Val( get_toolTip_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_toolTip") ) { return ::hx::Val( set_toolTip_dyn() ); }
		if (HX_FIELD_EQ(inName,"_layoutData") ) { return ::hx::Val( _layoutData ); }
		if (HX_FIELD_EQ(inName,"_focusOwner") ) { return ::hx::Val( _focusOwner ); }
		if (HX_FIELD_EQ(inName,"get_variant") ) { return ::hx::Val( get_variant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_variant") ) { return ::hx::Val( set_variant_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyStyles") ) { return ::hx::Val( applyStyles_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyles") ) { return ::hx::Val( clearStyles_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { return ::hx::Val( _initialized ); }
		if (HX_FIELD_EQ(inName,"themeEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_themeEnabled() ); }
		if (HX_FIELD_EQ(inName,"styleContext") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleContext() ); }
		if (HX_FIELD_EQ(inName,"focusManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusManager() ); }
		if (HX_FIELD_EQ(inName,"focusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusEnabled() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initializing") ) { return ::hx::Val( _initializing ); }
		if (HX_FIELD_EQ(inName,"_themeEnabled") ) { return ::hx::Val( _themeEnabled ); }
		if (HX_FIELD_EQ(inName,"styleProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_styleProvider() ); }
		if (HX_FIELD_EQ(inName,"disabledAlpha") ) { return ::hx::Val( disabledAlpha ); }
		if (HX_FIELD_EQ(inName,"_focusManager") ) { return ::hx::Val( _focusManager ); }
		if (HX_FIELD_EQ(inName,"rawTabEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rawTabEnabled() ); }
		if (HX_FIELD_EQ(inName,"_focusEnabled") ) { return ::hx::Val( _focusEnabled ); }
		if (HX_FIELD_EQ(inName,"focusRectSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusRectSkin() ); }
		if (HX_FIELD_EQ(inName,"initializeNow") ) { return ::hx::Val( initializeNow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layoutData") ) { return ::hx::Val( get_layoutData_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutData") ) { return ::hx::Val( set_layoutData_dyn() ); }
		if (HX_FIELD_EQ(inName,"_explicitAlpha") ) { return ::hx::Val( _explicitAlpha ); }
		if (HX_FIELD_EQ(inName,"get_focusOwner") ) { return ::hx::Val( get_focusOwner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusOwner") ) { return ::hx::Val( set_focusOwner_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_focusRectSkin") ) { return ::hx::Val( _focusRectSkin ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_initialized") ) { return ::hx::Val( get_initialized_dyn() ); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_includeInLayout() ); }
		if (HX_FIELD_EQ(inName,"focusPaddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusPaddingTop() ); }
		if (HX_FIELD_EQ(inName,"setFocusPadding") ) { return ::hx::Val( setFocusPadding_dyn() ); }
		if (HX_FIELD_EQ(inName,"_applyingStyles") ) { return ::hx::Val( _applyingStyles ); }
		if (HX_FIELD_EQ(inName,"_clearingStyles") ) { return ::hx::Val( _clearingStyles ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_themeEnabled") ) { return ::hx::Val( get_themeEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_themeEnabled") ) { return ::hx::Val( set_themeEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return ::hx::Val( _includeInLayout ); }
		if (HX_FIELD_EQ(inName,"get_focusManager") ) { return ::hx::Val( get_focusManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusManager") ) { return ::hx::Val( set_focusManager_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_focusEnabled") ) { return ::hx::Val( get_focusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusEnabled") ) { return ::hx::Val( set_focusEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"_focusPaddingTop") ) { return ::hx::Val( _focusPaddingTop ); }
		if (HX_FIELD_EQ(inName,"focusPaddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusPaddingLeft() ); }
		if (HX_FIELD_EQ(inName,"containsStyleDef") ) { return ::hx::Val( containsStyleDef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_styleProvider") ) { return ::hx::Val( get_styleProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_styleProvider") ) { return ::hx::Val( set_styleProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rawTabEnabled") ) { return ::hx::Val( get_rawTabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_focusRectSkin") ) { return ::hx::Val( get_focusRectSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusRectSkin") ) { return ::hx::Val( set_focusRectSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"focusPaddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusPaddingRight() ); }
		if (HX_FIELD_EQ(inName,"_focusPaddingLeft") ) { return ::hx::Val( _focusPaddingLeft ); }
		if (HX_FIELD_EQ(inName,"positionFocusRect") ) { return ::hx::Val( positionFocusRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"_restrictedStyles") ) { return ::hx::Val( _restrictedStyles ); }
		if (HX_FIELD_EQ(inName,"isStyleRestricted") ) { return ::hx::Val( isStyleRestricted_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_focusPaddingRight") ) { return ::hx::Val( _focusPaddingRight ); }
		if (HX_FIELD_EQ(inName,"focusPaddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focusPaddingBottom() ); }
		if (HX_FIELD_EQ(inName,"clearStyleProvider") ) { return ::hx::Val( clearStyleProvider_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return ::hx::Val( get_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return ::hx::Val( set_includeInLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_focusPaddingTop") ) { return ::hx::Val( get_focusPaddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusPaddingTop") ) { return ::hx::Val( set_focusPaddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"_focusPaddingBottom") ) { return ::hx::Val( _focusPaddingBottom ); }
		if (HX_FIELD_EQ(inName,"_previousClearStyle") ) { return ::hx::Val( _previousClearStyle ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_customStyleProvider") ) { return ::hx::Val( _customStyleProvider ); }
		if (HX_FIELD_EQ(inName,"get_focusPaddingLeft") ) { return ::hx::Val( get_focusPaddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusPaddingLeft") ) { return ::hx::Val( set_focusPaddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"_styleProviderStyles") ) { return ::hx::Val( _styleProviderStyles ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_waitingToApplyStyles") ) { return ::hx::Val( _waitingToApplyStyles ); }
		if (HX_FIELD_EQ(inName,"_currentStyleProvider") ) { return ::hx::Val( _currentStyleProvider ); }
		if (HX_FIELD_EQ(inName,"get_focusPaddingRight") ) { return ::hx::Val( get_focusPaddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusPaddingRight") ) { return ::hx::Val( set_focusPaddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layoutData") ) { return ::hx::Val( clearStyle_layoutData_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLayoutDataInternal") ) { return ::hx::Val( setLayoutDataInternal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_focusPaddingBottom") ) { return ::hx::Val( get_focusPaddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focusPaddingBottom") ) { return ::hx::Val( set_focusPaddingBottom_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"clearStyle_focusRectSkin") ) { return ::hx::Val( clearStyle_focusRectSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutData_changeHandler") ) { return ::hx::Val( layoutData_changeHandler_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"clearStyle_focusPaddingTop") ) { return ::hx::Val( clearStyle_focusPaddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"styleProvider_clearHandler") ) { return ::hx::Val( styleProvider_clearHandler_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"clearStyle_focusPaddingLeft") ) { return ::hx::Val( clearStyle_focusPaddingLeft_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"clearStyle_focusPaddingRight") ) { return ::hx::Val( clearStyle_focusPaddingRight_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"clearStyle_focusPaddingBottom") ) { return ::hx::Val( clearStyle_focusPaddingBottom_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"feathersControl_focusInHandler") ) { return ::hx::Val( feathersControl_focusInHandler_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"feathersControl_focusOutHandler") ) { return ::hx::Val( feathersControl_focusOutHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"customStyleProvider_clearHandler") ) { return ::hx::Val( customStyleProvider_clearHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"styleProvider_stylesChangeHandler") ) { return ::hx::Val( styleProvider_stylesChangeHandler_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"feathersControl_addedToStageHandler") ) { return ::hx::Val( feathersControl_addedToStageHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"feathersControl_removedFromStageHandler") ) { return ::hx::Val( feathersControl_removedFromStageHandler_dyn() ); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"feathersControl_focusRect_enterFrameHandler") ) { return ::hx::Val( feathersControl_focusRect_enterFrameHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FeathersControl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"toolTip") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_toolTip(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"variant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_variant(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_created") ) { _created=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTip") ) { _toolTip=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_variant") ) { _variant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layoutData(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"focusOwner") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusOwner(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutData") ) { _layoutData=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusOwner") ) { _focusOwner=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"themeEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_themeEnabled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"focusManager") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusManager(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"focusEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusEnabled(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initializing") ) { _initializing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_themeEnabled") ) { _themeEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_styleProvider(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"disabledAlpha") ) { disabledAlpha=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusManager") ) { _focusManager=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusEnabled") ) { _focusEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusRectSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusRectSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_explicitAlpha") ) { _explicitAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusRectSkin") ) { _focusRectSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_includeInLayout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"focusPaddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusPaddingTop(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_applyingStyles") ) { _applyingStyles=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clearingStyles") ) { _clearingStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusPaddingTop") ) { _focusPaddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusPaddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusPaddingLeft(inValue.Cast< Float >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"focusPaddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusPaddingRight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_focusPaddingLeft") ) { _focusPaddingLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_restrictedStyles") ) { _restrictedStyles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_focusPaddingRight") ) { _focusPaddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusPaddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focusPaddingBottom(inValue.Cast< Float >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_focusPaddingBottom") ) { _focusPaddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_previousClearStyle") ) { _previousClearStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_customStyleProvider") ) { _customStyleProvider=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleProviderStyles") ) { _styleProviderStyles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_waitingToApplyStyles") ) { _waitingToApplyStyles=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentStyleProvider") ) { _currentStyleProvider=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FeathersControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_waitingToApplyStyles",87,60,96,78));
	outFields->push(HX_("_initializing",6c,21,58,d9));
	outFields->push(HX_("_initialized",15,a3,19,9d));
	outFields->push(HX_("initialized",14,f5,0f,37));
	outFields->push(HX_("_created",69,0f,23,4b));
	outFields->push(HX_("created",e8,b5,6a,11));
	outFields->push(HX_("_enabled",02,5e,e9,b7));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("_toolTip",64,be,2c,a4));
	outFields->push(HX_("toolTip",e3,64,74,6a));
	outFields->push(HX_("_themeEnabled",57,04,1c,92));
	outFields->push(HX_("themeEnabled",78,71,ad,af));
	outFields->push(HX_("_currentStyleProvider",68,39,19,4f));
	outFields->push(HX_("_customStyleProvider",12,90,30,94));
	outFields->push(HX_("styleProvider",82,6b,eb,5e));
	outFields->push(HX_("styleContext",be,90,81,46));
	outFields->push(HX_("_includeInLayout",38,5d,a5,59));
	outFields->push(HX_("includeInLayout",b7,1a,c6,6e));
	outFields->push(HX_("_layoutData",13,9b,8c,af));
	outFields->push(HX_("layoutData",f4,cd,02,dd));
	outFields->push(HX_("_explicitAlpha",0b,30,b6,dd));
	outFields->push(HX_("disabledAlpha",42,f4,f4,f0));
	outFields->push(HX_("_focusManager",54,18,02,4d));
	outFields->push(HX_("focusManager",75,85,93,6a));
	outFields->push(HX_("_focusOwner",5a,06,62,cd));
	outFields->push(HX_("focusOwner",3b,39,d8,fa));
	outFields->push(HX_("rawTabEnabled",b4,42,5e,17));
	outFields->push(HX_("_focusEnabled",68,8a,71,b7));
	outFields->push(HX_("focusEnabled",89,f7,02,d5));
	outFields->push(HX_("_focusRectSkin",fa,95,a1,56));
	outFields->push(HX_("focusRectSkin",b9,a5,4f,18));
	outFields->push(HX_("_focusPaddingTop",bd,e1,d6,ca));
	outFields->push(HX_("focusPaddingTop",3c,9f,f7,df));
	outFields->push(HX_("_focusPaddingRight",04,a1,d5,2c));
	outFields->push(HX_("focusPaddingRight",43,fc,bf,59));
	outFields->push(HX_("_focusPaddingBottom",c3,d4,69,25));
	outFields->push(HX_("focusPaddingBottom",a4,50,8f,45));
	outFields->push(HX_("_focusPaddingLeft",df,4f,dd,ab));
	outFields->push(HX_("focusPaddingLeft",80,61,62,13));
	outFields->push(HX_("_variant",06,9a,9a,16));
	outFields->push(HX_("variant",85,40,e2,dc));
	outFields->push(HX_("_applyingStyles",15,e2,46,b4));
	outFields->push(HX_("_clearingStyles",16,fa,cd,83));
	outFields->push(HX_("_styleProviderStyles",45,6a,74,c1));
	outFields->push(HX_("_restrictedStyles",7c,19,a2,50));
	outFields->push(HX_("_previousClearStyle",9a,33,f0,d5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FeathersControl_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_waitingToApplyStyles),HX_("_waitingToApplyStyles",87,60,96,78)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_initializing),HX_("_initializing",6c,21,58,d9)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_initialized),HX_("_initialized",15,a3,19,9d)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_created),HX_("_created",69,0f,23,4b)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_enabled),HX_("_enabled",02,5e,e9,b7)},
	{::hx::fsString,(int)offsetof(FeathersControl_obj,_toolTip),HX_("_toolTip",64,be,2c,a4)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_themeEnabled),HX_("_themeEnabled",57,04,1c,92)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_currentStyleProvider),HX_("_currentStyleProvider",68,39,19,4f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_customStyleProvider),HX_("_customStyleProvider",12,90,30,94)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_includeInLayout),HX_("_includeInLayout",38,5d,a5,59)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_layoutData),HX_("_layoutData",13,9b,8c,af)},
	{::hx::fsFloat,(int)offsetof(FeathersControl_obj,_explicitAlpha),HX_("_explicitAlpha",0b,30,b6,dd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FeathersControl_obj,disabledAlpha),HX_("disabledAlpha",42,f4,f4,f0)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_focusManager),HX_("_focusManager",54,18,02,4d)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_focusOwner),HX_("_focusOwner",5a,06,62,cd)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_focusEnabled),HX_("_focusEnabled",68,8a,71,b7)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(FeathersControl_obj,_focusRectSkin),HX_("_focusRectSkin",fa,95,a1,56)},
	{::hx::fsFloat,(int)offsetof(FeathersControl_obj,_focusPaddingTop),HX_("_focusPaddingTop",bd,e1,d6,ca)},
	{::hx::fsFloat,(int)offsetof(FeathersControl_obj,_focusPaddingRight),HX_("_focusPaddingRight",04,a1,d5,2c)},
	{::hx::fsFloat,(int)offsetof(FeathersControl_obj,_focusPaddingBottom),HX_("_focusPaddingBottom",c3,d4,69,25)},
	{::hx::fsFloat,(int)offsetof(FeathersControl_obj,_focusPaddingLeft),HX_("_focusPaddingLeft",df,4f,dd,ab)},
	{::hx::fsString,(int)offsetof(FeathersControl_obj,_variant),HX_("_variant",06,9a,9a,16)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_applyingStyles),HX_("_applyingStyles",15,e2,46,b4)},
	{::hx::fsBool,(int)offsetof(FeathersControl_obj,_clearingStyles),HX_("_clearingStyles",16,fa,cd,83)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FeathersControl_obj,_styleProviderStyles),HX_("_styleProviderStyles",45,6a,74,c1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FeathersControl_obj,_restrictedStyles),HX_("_restrictedStyles",7c,19,a2,50)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FeathersControl_obj,_previousClearStyle),HX_("_previousClearStyle",9a,33,f0,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FeathersControl_obj_sStaticStorageInfo = 0;
#endif

static ::String FeathersControl_obj_sMemberFields[] = {
	HX_("_waitingToApplyStyles",87,60,96,78),
	HX_("_initializing",6c,21,58,d9),
	HX_("_initialized",15,a3,19,9d),
	HX_("get_initialized",ab,ac,f1,f7),
	HX_("_created",69,0f,23,4b),
	HX_("get_created",ff,15,65,97),
	HX_("_enabled",02,5e,e9,b7),
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("_toolTip",64,be,2c,a4),
	HX_("get_toolTip",fa,c4,6e,f0),
	HX_("set_toolTip",06,cc,db,fa),
	HX_("_themeEnabled",57,04,1c,92),
	HX_("get_themeEnabled",01,5e,4c,b4),
	HX_("set_themeEnabled",75,4b,8e,0a),
	HX_("_currentStyleProvider",68,39,19,4f),
	HX_("_customStyleProvider",12,90,30,94),
	HX_("get_styleProvider",d9,76,5b,65),
	HX_("set_styleProvider",e5,4e,c9,88),
	HX_("get_styleContext",47,7d,20,4b),
	HX_("_includeInLayout",38,5d,a5,59),
	HX_("get_includeInLayout",ce,e9,d0,f9),
	HX_("set_includeInLayout",da,dc,6d,36),
	HX_("_layoutData",13,9b,8c,af),
	HX_("get_layoutData",3d,56,f8,52),
	HX_("set_layoutData",b1,3e,18,73),
	HX_("_explicitAlpha",0b,30,b6,dd),
	HX_("set_alpha",c1,ef,90,48),
	HX_("disabledAlpha",42,f4,f4,f0),
	HX_("_focusManager",54,18,02,4d),
	HX_("get_focusManager",fe,71,32,6f),
	HX_("set_focusManager",72,5f,74,c5),
	HX_("_focusOwner",5a,06,62,cd),
	HX_("get_focusOwner",84,c1,cd,70),
	HX_("set_focusOwner",f8,a9,ed,90),
	HX_("get_rawTabEnabled",0b,4e,ce,1d),
	HX_("_focusEnabled",68,8a,71,b7),
	HX_("get_focusEnabled",12,e4,a1,d9),
	HX_("set_focusEnabled",86,d1,e3,2f),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("_focusRectSkin",fa,95,a1,56),
	HX_("get_focusRectSkin",10,b1,bf,1e),
	HX_("set_focusRectSkin",1c,89,2d,42),
	HX_("_focusPaddingTop",bd,e1,d6,ca),
	HX_("get_focusPaddingTop",53,6e,02,6b),
	HX_("set_focusPaddingTop",5f,61,9f,a7),
	HX_("_focusPaddingRight",04,a1,d5,2c),
	HX_("get_focusPaddingRight",1a,ff,6d,d8),
	HX_("set_focusPaddingRight",26,cd,76,2c),
	HX_("_focusPaddingBottom",c3,d4,69,25),
	HX_("get_focusPaddingBottom",ed,c9,23,9f),
	HX_("set_focusPaddingBottom",61,46,cf,d2),
	HX_("_focusPaddingLeft",df,4f,dd,ab),
	HX_("get_focusPaddingLeft",89,c6,cc,31),
	HX_("set_focusPaddingLeft",fd,7d,84,fe),
	HX_("setFocusPadding",9b,1f,05,46),
	HX_("showFocus",9b,c5,ed,32),
	HX_("clearStyle_layoutData",2f,09,2e,d6),
	HX_("clearStyle_focusRectSkin",5e,e1,9a,12),
	HX_("clearStyle_focusPaddingTop",21,ce,44,70),
	HX_("clearStyle_focusPaddingRight",68,6e,e2,7a),
	HX_("clearStyle_focusPaddingBottom",df,be,90,22),
	HX_("clearStyle_focusPaddingLeft",fb,3a,9e,c6),
	HX_("positionFocusRect",33,07,e0,46),
	HX_("setLayoutDataInternal",93,55,7b,c3),
	HX_("_variant",06,9a,9a,16),
	HX_("get_variant",9c,a0,dc,62),
	HX_("set_variant",a8,a7,49,6d),
	HX_("_applyingStyles",15,e2,46,b4),
	HX_("_clearingStyles",16,fa,cd,83),
	HX_("_styleProviderStyles",45,6a,74,c1),
	HX_("_restrictedStyles",7c,19,a2,50),
	HX_("validateNow",20,c2,bf,ca),
	HX_("initializeNow",a6,11,b6,12),
	HX_("move",11,e3,60,48),
	HX_("setSize",83,e1,d7,11),
	HX_("initialize",50,31,bb,ec),
	HX_("setStyle",2f,0e,52,92),
	HX_("isStyleRestricted",62,7e,46,e7),
	HX_("containsStyleDef",53,ae,21,40),
	HX_("applyStyles",30,a6,cd,51),
	HX_("_previousClearStyle",9a,33,f0,d5),
	HX_("clearStyles",8f,f3,bf,a9),
	HX_("clearStyleProvider",b5,95,e4,bc),
	HX_("feathersControl_addedToStageHandler",75,3f,13,fd),
	HX_("feathersControl_removedFromStageHandler",c4,2b,08,17),
	HX_("feathersControl_focusInHandler",5f,a2,08,a6),
	HX_("feathersControl_focusOutHandler",a2,cf,0a,37),
	HX_("styleProvider_stylesChangeHandler",3b,20,1b,04),
	HX_("customStyleProvider_clearHandler",eb,64,76,ce),
	HX_("styleProvider_clearHandler",da,ff,d4,bb),
	HX_("layoutData_changeHandler",6f,15,40,40),
	HX_("feathersControl_focusRect_enterFrameHandler",00,d3,f0,89),
	::String(null()) };

::hx::Class FeathersControl_obj::__mClass;

void FeathersControl_obj::__register()
{
	FeathersControl_obj _hx_dummy;
	FeathersControl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.FeathersControl",5c,23,fb,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FeathersControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FeathersControl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FeathersControl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FeathersControl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FeathersControl_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fc095ab710aad3a1_67_boot)
HXDLIN(  67)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(6)
            				->setFixed(0,HX_("layoutData",f4,cd,02,dd), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null())))
            				->setFixed(1,HX_("focusPaddingTop",3c,9f,f7,df), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null())))
            				->setFixed(2,HX_("focusPaddingLeft",80,61,62,13), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null())))
            				->setFixed(3,HX_("focusRectSkin",b9,a5,4f,18), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null())))
            				->setFixed(4,HX_("focusPaddingBottom",a4,50,8f,45), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null())))
            				->setFixed(5,HX_("focusPaddingRight",43,fc,bf,59), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("style",31,a5,1d,84),null()))))));
            	}
}

} // end namespace feathers
} // end namespace core
