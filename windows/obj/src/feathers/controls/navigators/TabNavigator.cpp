#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_TabBar
#include <feathers/controls/TabBar.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabItem
#include <feathers/controls/navigators/TabItem.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabNavigator
#include <feathers/controls/navigators/TabNavigator.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
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
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
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
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_FlatCollectionEvent
#include <feathers/events/FlatCollectionEvent.h>
#endif
#ifndef INCLUDED_feathers_events_TabBarEvent
#include <feathers/events/TabBarEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_BaseDelegateEffectContext
#include <feathers/motion/effects/BaseDelegateEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_EventToPositionEffectContext
#include <feathers/motion/effects/EventToPositionEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelTabNavigatorStyles
#include <feathers/themes/steel/components/SteelTabNavigatorStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils_EdgePuller
#include <feathers/utils/EdgePuller.h>
#endif
#ifndef INCLUDED_feathers_utils_ExclusivePointer
#include <feathers/utils/ExclusivePointer.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f22d0649df5571f6_56_new,"feathers.controls.navigators.TabNavigator","new",0xce749d0c,"feathers.controls.navigators.TabNavigator.new","feathers/controls/navigators/TabNavigator.hx",56,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_110_get_dataProvider,"feathers.controls.navigators.TabNavigator","get_dataProvider",0x5c92e1d8,"feathers.controls.navigators.TabNavigator.get_dataProvider","feathers/controls/navigators/TabNavigator.hx",110,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_113_set_dataProvider,"feathers.controls.navigators.TabNavigator","set_dataProvider",0xb2d4cf4c,"feathers.controls.navigators.TabNavigator.set_dataProvider","feathers/controls/navigators/TabNavigator.hx",113,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_159_get_selectedIndex,"feathers.controls.navigators.TabNavigator","get_selectedIndex",0x9d43a3ba,"feathers.controls.navigators.TabNavigator.get_selectedIndex","feathers/controls/navigators/TabNavigator.hx",159,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_162_set_selectedIndex,"feathers.controls.navigators.TabNavigator","set_selectedIndex",0xc0b17bc6,"feathers.controls.navigators.TabNavigator.set_selectedIndex","feathers/controls/navigators/TabNavigator.hx",162,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_188_get_maxSelectedIndex,"feathers.controls.navigators.TabNavigator","get_maxSelectedIndex",0xea277c50,"feathers.controls.navigators.TabNavigator.get_maxSelectedIndex","feathers/controls/navigators/TabNavigator.hx",188,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_203_get_selectedItem,"feathers.controls.navigators.TabNavigator","get_selectedItem",0xa3bc896b,"feathers.controls.navigators.TabNavigator.get_selectedItem","feathers/controls/navigators/TabNavigator.hx",203,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_206_set_selectedItem,"feathers.controls.navigators.TabNavigator","set_selectedItem",0xf9fe76df,"feathers.controls.navigators.TabNavigator.set_selectedItem","feathers/controls/navigators/TabNavigator.hx",206,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_238_get_swipeEnabled,"feathers.controls.navigators.TabNavigator","get_swipeEnabled",0x42570b84,"feathers.controls.navigators.TabNavigator.get_swipeEnabled","feathers/controls/navigators/TabNavigator.hx",238,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_241_set_swipeEnabled,"feathers.controls.navigators.TabNavigator","set_swipeEnabled",0x9898f8f8,"feathers.controls.navigators.TabNavigator.set_swipeEnabled","feathers/controls/navigators/TabNavigator.hx",241,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_265_get_simulateTouch,"feathers.controls.navigators.TabNavigator","get_simulateTouch",0x81c14a7e,"feathers.controls.navigators.TabNavigator.get_simulateTouch","feathers/controls/navigators/TabNavigator.hx",265,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_268_set_simulateTouch,"feathers.controls.navigators.TabNavigator","set_simulateTouch",0xa52f228a,"feathers.controls.navigators.TabNavigator.set_simulateTouch","feathers/controls/navigators/TabNavigator.hx",268,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_339_get_tabBarFactory,"feathers.controls.navigators.TabNavigator","get_tabBarFactory",0x311f6aef,"feathers.controls.navigators.TabNavigator.get_tabBarFactory","feathers/controls/navigators/TabNavigator.hx",339,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_342_set_tabBarFactory,"feathers.controls.navigators.TabNavigator","set_tabBarFactory",0x548d42fb,"feathers.controls.navigators.TabNavigator.set_tabBarFactory","feathers/controls/navigators/TabNavigator.hx",342,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_353_initialize,"feathers.controls.navigators.TabNavigator","initialize",0xc3709224,"feathers.controls.navigators.TabNavigator.initialize","feathers/controls/navigators/TabNavigator.hx",353,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_371_itemToText,"feathers.controls.navigators.TabNavigator","itemToText",0x4776620f,"feathers.controls.navigators.TabNavigator.itemToText","feathers/controls/navigators/TabNavigator.hx",371,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_375_initializeTabNavigatorTheme,"feathers.controls.navigators.TabNavigator","initializeTabNavigatorTheme",0xca1e2c23,"feathers.controls.navigators.TabNavigator.initializeTabNavigatorTheme","feathers/controls/navigators/TabNavigator.hx",375,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_378_update,"feathers.controls.navigators.TabNavigator","update",0x961cecdd,"feathers.controls.navigators.TabNavigator.update","feathers/controls/navigators/TabNavigator.hx",378,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_402_measure,"feathers.controls.navigators.TabNavigator","measure",0x624c8e0a,"feathers.controls.navigators.TabNavigator.measure","feathers/controls/navigators/TabNavigator.hx",402,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_434_createTabBar,"feathers.controls.navigators.TabNavigator","createTabBar",0x9600f06e,"feathers.controls.navigators.TabNavigator.createTabBar","feathers/controls/navigators/TabNavigator.hx",434,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_456_layoutContent,"feathers.controls.navigators.TabNavigator","layoutContent",0x63296b5b,"feathers.controls.navigators.TabNavigator.layoutContent","feathers/controls/navigators/TabNavigator.hx",456,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_500_getView,"feathers.controls.navigators.TabNavigator","getView",0x463474c7,"feathers.controls.navigators.TabNavigator.getView","feathers/controls/navigators/TabNavigator.hx",500,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_505_disposeView,"feathers.controls.navigators.TabNavigator","disposeView",0x696a7350,"feathers.controls.navigators.TabNavigator.disposeView","feathers/controls/navigators/TabNavigator.hx",505,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_510_refreshSelection,"feathers.controls.navigators.TabNavigator","refreshSelection",0x06e222c5,"feathers.controls.navigators.TabNavigator.refreshSelection","feathers/controls/navigators/TabNavigator.hx",510,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_546_startPreviousDragTransition,"feathers.controls.navigators.TabNavigator","startPreviousDragTransition",0x8e23cbee,"feathers.controls.navigators.TabNavigator.startPreviousDragTransition","feathers/controls/navigators/TabNavigator.hx",546,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_543_startPreviousDragTransition,"feathers.controls.navigators.TabNavigator","startPreviousDragTransition",0x8e23cbee,"feathers.controls.navigators.TabNavigator.startPreviousDragTransition","feathers/controls/navigators/TabNavigator.hx",543,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_555_startNextDragTransition,"feathers.controls.navigators.TabNavigator","startNextDragTransition",0xcf5676aa,"feathers.controls.navigators.TabNavigator.startNextDragTransition","feathers/controls/navigators/TabNavigator.hx",555,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_552_startNextDragTransition,"feathers.controls.navigators.TabNavigator","startNextDragTransition",0xcf5676aa,"feathers.controls.navigators.TabNavigator.startNextDragTransition","feathers/controls/navigators/TabNavigator.hx",552,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_561_tabNavigator_tabBar_changeHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_tabBar_changeHandler",0xddd73002,"feathers.controls.navigators.TabNavigator.tabNavigator_tabBar_changeHandler","feathers/controls/navigators/TabNavigator.hx",561,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_570_tabNavigator_tabBar_itemTriggerHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_tabBar_itemTriggerHandler",0x33bf7d1d,"feathers.controls.navigators.TabNavigator.tabNavigator_tabBar_itemTriggerHandler","feathers/controls/navigators/TabNavigator.hx",570,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_573_tabNavigator_dataProvider_addItemHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_dataProvider_addItemHandler",0x2e485a71,"feathers.controls.navigators.TabNavigator.tabNavigator_dataProvider_addItemHandler","feathers/controls/navigators/TabNavigator.hx",573,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_589_tabNavigator_dataProvider_removeItemHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_dataProvider_removeItemHandler",0x11915fd8,"feathers.controls.navigators.TabNavigator.tabNavigator_dataProvider_removeItemHandler","feathers/controls/navigators/TabNavigator.hx",589,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_602_tabNavigator_dataProvider_replaceItemHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_dataProvider_replaceItemHandler",0x57b890be,"feathers.controls.navigators.TabNavigator.tabNavigator_dataProvider_replaceItemHandler","feathers/controls/navigators/TabNavigator.hx",602,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_613_tabNavigator_dataProvider_removeAllHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_dataProvider_removeAllHandler",0xf36f76e8,"feathers.controls.navigators.TabNavigator.tabNavigator_dataProvider_removeAllHandler","feathers/controls/navigators/TabNavigator.hx",613,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_622_tabNavigator_dataProvider_resetHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_dataProvider_resetHandler",0x373b5116,"feathers.controls.navigators.TabNavigator.tabNavigator_dataProvider_resetHandler","feathers/controls/navigators/TabNavigator.hx",622,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_631_tabNavigator_previousEdgePuller_openingHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_previousEdgePuller_openingHandler",0xdceff5e2,"feathers.controls.navigators.TabNavigator.tabNavigator_previousEdgePuller_openingHandler","feathers/controls/navigators/TabNavigator.hx",631,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_667_tabNavigator_previousEdgePuller_cancelHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_previousEdgePuller_cancelHandler",0xe85068e0,"feathers.controls.navigators.TabNavigator.tabNavigator_previousEdgePuller_cancelHandler","feathers/controls/navigators/TabNavigator.hx",667,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_680_tabNavigator_previousEdgePuller_openHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_previousEdgePuller_openHandler",0x19200090,"feathers.controls.navigators.TabNavigator.tabNavigator_previousEdgePuller_openHandler","feathers/controls/navigators/TabNavigator.hx",680,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_700_tabNavigator_nextEdgePuller_openingHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_nextEdgePuller_openingHandler",0x59548626,"feathers.controls.navigators.TabNavigator.tabNavigator_nextEdgePuller_openingHandler","feathers/controls/navigators/TabNavigator.hx",700,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_736_tabNavigator_nextEdgePuller_cancelHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_nextEdgePuller_cancelHandler",0x5bab8d1c,"feathers.controls.navigators.TabNavigator.tabNavigator_nextEdgePuller_cancelHandler","feathers/controls/navigators/TabNavigator.hx",736,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_749_tabNavigator_nextEdgePuller_openHandler,"feathers.controls.navigators.TabNavigator","tabNavigator_nextEdgePuller_openHandler",0xa6bc5dcc,"feathers.controls.navigators.TabNavigator.tabNavigator_nextEdgePuller_openHandler","feathers/controls/navigators/TabNavigator.hx",749,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_a20bca9dc2e898ff_42_get_styleContext,"feathers.controls.navigators.TabNavigator","get_styleContext",0x13e4351b,"feathers.controls.navigators.TabNavigator.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_85_get_tabBarPosition,"feathers.controls.navigators.TabNavigator","get_tabBarPosition",0x6017b2e4,"feathers.controls.navigators.TabNavigator.get_tabBarPosition","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_99_set_tabBarPosition,"feathers.controls.navigators.TabNavigator","set_tabBarPosition",0x3cc6e558,"feathers.controls.navigators.TabNavigator.set_tabBarPosition","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_125_clearStyle_tabBarPosition,"feathers.controls.navigators.TabNavigator","clearStyle_tabBarPosition",0x813f1fae,"feathers.controls.navigators.TabNavigator.clearStyle_tabBarPosition","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_85_get_previousTransition,"feathers.controls.navigators.TabNavigator","get_previousTransition",0xd3df20c9,"feathers.controls.navigators.TabNavigator.get_previousTransition","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_99_set_previousTransition,"feathers.controls.navigators.TabNavigator","set_previousTransition",0x078a9d3d,"feathers.controls.navigators.TabNavigator.set_previousTransition","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_125_clearStyle_previousTransition,"feathers.controls.navigators.TabNavigator","clearStyle_previousTransition",0xaa1dba93,"feathers.controls.navigators.TabNavigator.clearStyle_previousTransition","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_85_get_nextTransition,"feathers.controls.navigators.TabNavigator","get_nextTransition",0x97ea1a05,"feathers.controls.navigators.TabNavigator.get_nextTransition","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_99_set_nextTransition,"feathers.controls.navigators.TabNavigator","set_nextTransition",0x74994c79,"feathers.controls.navigators.TabNavigator.set_nextTransition","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_125_clearStyle_nextTransition,"feathers.controls.navigators.TabNavigator","clearStyle_nextTransition",0xb91186cf,"feathers.controls.navigators.TabNavigator.clearStyle_nextTransition","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_85_get_gap,"feathers.controls.navigators.TabNavigator","get_gap",0x4c25d859,"feathers.controls.navigators.TabNavigator.get_gap","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_99_set_gap,"feathers.controls.navigators.TabNavigator","set_gap",0x3f276965,"feathers.controls.navigators.TabNavigator.set_gap","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_125_clearStyle_gap,"feathers.controls.navigators.TabNavigator","clearStyle_gap",0x05ee034f,"feathers.controls.navigators.TabNavigator.clearStyle_gap","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_85_get_customTabBarVariant,"feathers.controls.navigators.TabNavigator","get_customTabBarVariant",0x4e75c079,"feathers.controls.navigators.TabNavigator.get_customTabBarVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_99_set_customTabBarVariant,"feathers.controls.navigators.TabNavigator","set_customTabBarVariant",0x50d72985,"feathers.controls.navigators.TabNavigator.set_customTabBarVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_8ebf80d45980d26f_125_clearStyle_customTabBarVariant,"feathers.controls.navigators.TabNavigator","clearStyle_customTabBarVariant",0xeefdb76f,"feathers.controls.navigators.TabNavigator.clearStyle_customTabBarVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_56_boot,"feathers.controls.navigators.TabNavigator","boot",0xcfadce06,"feathers.controls.navigators.TabNavigator.boot","feathers/controls/navigators/TabNavigator.hx",56,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_57_boot,"feathers.controls.navigators.TabNavigator","boot",0xcfadce06,"feathers.controls.navigators.TabNavigator.boot","feathers/controls/navigators/TabNavigator.hx",57,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_71_boot,"feathers.controls.navigators.TabNavigator","boot",0xcfadce06,"feathers.controls.navigators.TabNavigator.boot","feathers/controls/navigators/TabNavigator.hx",71,0x2397c0e3)
HX_LOCAL_STACK_FRAME(_hx_pos_f22d0649df5571f6_73_boot,"feathers.controls.navigators.TabNavigator","boot",0xcfadce06,"feathers.controls.navigators.TabNavigator.boot","feathers/controls/navigators/TabNavigator.hx",73,0x2397c0e3)
namespace feathers{
namespace controls{
namespace navigators{

void TabNavigator_obj::__construct(::Dynamic dataProvider){
            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_56_new)
HXLINE( 314)		this->_hx___customTabBarVariant = null();
HXLINE( 300)		this->_hx___gap = ((Float)0.0);
HXLINE( 291)		this->_hx___nextTransition = null();
HXLINE( 283)		this->_hx___previousTransition = null();
HXLINE( 223)		this->_hx___tabBarPosition = ::feathers::layout::RelativePosition_obj::BOTTOM_dyn();
HXLINE( 351)		this->_ignoreSelectionChange = false;
HXLINE( 250)		this->_simulateTouch = false;
HXLINE( 225)		this->_swipeEnabled = false;
HXLINE( 195)		this->_selectedItem = null();
HXLINE( 151)		this->_selectedIndex = -1;
HXLINE( 149)		this->_activeItemIndex = -1;
HXLINE(  81)		this->initializeTabNavigatorTheme();
HXLINE(  83)		super::__construct();
HXLINE(  85)		this->set_dataProvider(dataProvider);
HXLINE(  87)		this->_viewsContainer =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  88)		this->addChild(this->_viewsContainer);
            	}

Dynamic TabNavigator_obj::__CreateEmpty() { return new TabNavigator_obj; }

void *TabNavigator_obj::_hx_vtable = 0;

Dynamic TabNavigator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabNavigator_obj > _hx_result = new TabNavigator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabNavigator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2035dd84) {
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
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2035dd84;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x7b7c9414;
		}
	}
}

static ::feathers::core::IDataSelector_obj _hx_feathers_controls_navigators_TabNavigator__hx_feathers_core_IDataSelector= {
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::navigators::TabNavigator_obj::get_selectedItem_2aa2127b,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::navigators::TabNavigator_obj::set_selectedItem_a7a2487a,
};

static ::feathers::core::IIndexSelector_obj _hx_feathers_controls_navigators_TabNavigator__hx_feathers_core_IIndexSelector= {
	( int (::hx::Object::*)())&::feathers::controls::navigators::TabNavigator_obj::get_selectedIndex,
	( int (::hx::Object::*)(int))&::feathers::controls::navigators::TabNavigator_obj::set_selectedIndex,
	( int (::hx::Object::*)())&::feathers::controls::navigators::TabNavigator_obj::get_maxSelectedIndex,
};

 ::Dynamic TabNavigator_obj::set_selectedItem_a7a2487a( ::Dynamic value) {
			return set_selectedItem(value);
}

 ::Dynamic TabNavigator_obj::get_selectedItem_2aa2127b() {
			return get_selectedItem();
}
void *TabNavigator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe7e1ba63: return &_hx_feathers_controls_navigators_TabNavigator__hx_feathers_core_IDataSelector;
		case (int)0xe0b54c17: return &_hx_feathers_controls_navigators_TabNavigator__hx_feathers_core_IIndexSelector;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic TabNavigator_obj::get_dataProvider(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_110_get_dataProvider)
HXDLIN( 110)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_dataProvider,return )

::Dynamic TabNavigator_obj::set_dataProvider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_113_set_dataProvider)
HXLINE( 114)		if (::hx::IsInstanceEq( this->_dataProvider,value )) {
HXLINE( 115)			return this->_dataProvider;
            		}
HXLINE( 117)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 118)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("addItem",d4,07,fd,81),this->tabNavigator_dataProvider_addItemHandler_dyn(),null());
HXLINE( 119)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("removeItem",77,ff,de,c2),this->tabNavigator_dataProvider_removeItemHandler_dyn(),null());
HXLINE( 120)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("replaceItem",67,63,5b,5a),this->tabNavigator_dataProvider_replaceItemHandler_dyn(),null());
HXLINE( 121)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("removeAll",3d,17,e5,ca),this->tabNavigator_dataProvider_removeAllHandler_dyn(),null());
HXLINE( 122)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("reset",cf,49,c8,e6),this->tabNavigator_dataProvider_resetHandler_dyn(),null());
HXLINE( 123)			{
HXLINE( 123)				 ::Dynamic item = ::feathers::data::IFlatCollection_obj::iterator(this->_dataProvider);
HXDLIN( 123)				while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 123)					 ::feathers::controls::navigators::TabItem item1 = ( ( ::feathers::controls::navigators::TabItem)(item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 124)					this->removeItemInternal(item1->internalID);
            				}
            			}
            		}
HXLINE( 127)		this->_dataProvider = value;
HXLINE( 128)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 129)			{
HXLINE( 129)				 ::Dynamic item = ::feathers::data::IFlatCollection_obj::iterator(this->_dataProvider);
HXDLIN( 129)				while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 129)					 ::feathers::controls::navigators::TabItem item1 = ( ( ::feathers::controls::navigators::TabItem)(item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 130)					this->addItemInternal(item1->internalID,item1);
            				}
            			}
HXLINE( 132)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("addItem",d4,07,fd,81),this->tabNavigator_dataProvider_addItemHandler_dyn(),false,0,true);
HXLINE( 133)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("removeItem",77,ff,de,c2),this->tabNavigator_dataProvider_removeItemHandler_dyn(),false,0,true);
HXLINE( 134)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("replaceItem",67,63,5b,5a),this->tabNavigator_dataProvider_replaceItemHandler_dyn(),false,0,true);
HXLINE( 135)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("removeAll",3d,17,e5,ca),this->tabNavigator_dataProvider_removeAllHandler_dyn(),false,0,true);
HXLINE( 136)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("reset",cf,49,c8,e6),this->tabNavigator_dataProvider_resetHandler_dyn(),false,0,true);
            		}
HXLINE( 138)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 139)		bool _hx_tmp;
HXDLIN( 139)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 139)			_hx_tmp = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0);
            		}
            		else {
HXLINE( 139)			_hx_tmp = true;
            		}
HXDLIN( 139)		if (_hx_tmp) {
HXLINE( 141)			this->set_selectedIndex(-1);
            		}
            		else {
HXLINE( 144)			this->set_selectedIndex(0);
            		}
HXLINE( 146)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_dataProvider,return )

int TabNavigator_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_159_get_selectedIndex)
HXDLIN( 159)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_selectedIndex,return )

int TabNavigator_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_162_set_selectedIndex)
HXLINE( 163)		if (::hx::IsNull( this->_dataProvider )) {
HXLINE( 164)			value = -1;
            		}
HXLINE( 166)		if ((this->_selectedIndex == value)) {
HXLINE( 167)			return this->_selectedIndex;
            		}
HXLINE( 169)		this->_selectedIndex = value;
HXLINE( 172)		if ((this->_selectedIndex == -1)) {
HXLINE( 173)			this->_selectedItem = null();
            		}
            		else {
HXLINE( 175)			this->_selectedItem = ( ( ::feathers::controls::navigators::TabItem)(::feathers::data::IFlatCollection_obj::get(this->_dataProvider,this->_selectedIndex)) );
            		}
HXLINE( 177)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 180)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_selectedIndex,return )

int TabNavigator_obj::get_maxSelectedIndex(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_188_get_maxSelectedIndex)
HXLINE( 189)		if (::hx::IsNull( this->_dataProvider )) {
HXLINE( 190)			return -1;
            		}
HXLINE( 192)		return (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_maxSelectedIndex,return )

 ::feathers::controls::navigators::TabItem TabNavigator_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_203_get_selectedItem)
HXDLIN( 203)		return this->_selectedItem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_selectedItem,return )

 ::feathers::controls::navigators::TabItem TabNavigator_obj::set_selectedItem( ::feathers::controls::navigators::TabItem value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_206_set_selectedItem)
HXLINE( 207)		if (::hx::IsNull( this->_dataProvider )) {
HXLINE( 209)			this->set_selectedIndex(-1);
HXLINE( 210)			return this->_selectedItem;
            		}
HXLINE( 213)		this->set_selectedIndex(::feathers::data::IFlatCollection_obj::indexOf(this->_dataProvider,value));
HXLINE( 214)		return this->_selectedItem;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_selectedItem,return )

bool TabNavigator_obj::get_swipeEnabled(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_238_get_swipeEnabled)
HXDLIN( 238)		return this->_swipeEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_swipeEnabled,return )

bool TabNavigator_obj::set_swipeEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_241_set_swipeEnabled)
HXLINE( 242)		if ((this->_swipeEnabled == value)) {
HXLINE( 243)			return this->_swipeEnabled;
            		}
HXLINE( 245)		this->_swipeEnabled = value;
HXLINE( 246)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 247)		return this->_swipeEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_swipeEnabled,return )

bool TabNavigator_obj::get_simulateTouch(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_265_get_simulateTouch)
HXDLIN( 265)		return this->_simulateTouch;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_simulateTouch,return )

bool TabNavigator_obj::set_simulateTouch(bool value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_268_set_simulateTouch)
HXLINE( 269)		if ((this->_simulateTouch == value)) {
HXLINE( 270)			return this->_simulateTouch;
            		}
HXLINE( 272)		this->_simulateTouch = value;
HXLINE( 273)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 274)		return this->_simulateTouch;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_simulateTouch,return )

 ::feathers::utils::DisplayObjectFactory TabNavigator_obj::get_tabBarFactory(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_339_get_tabBarFactory)
HXDLIN( 339)		return this->_tabBarFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_tabBarFactory,return )

 ::feathers::utils::DisplayObjectFactory TabNavigator_obj::set_tabBarFactory( ::feathers::utils::DisplayObjectFactory value){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_342_set_tabBarFactory)
HXLINE( 343)		if (::hx::IsInstanceEq( this->_tabBarFactory,value )) {
HXLINE( 344)			return this->_tabBarFactory;
            		}
HXLINE( 346)		this->_tabBarFactory = value;
HXLINE( 347)		this->setInvalid(::feathers::controls::navigators::TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY);
HXLINE( 348)		return this->_tabBarFactory;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_tabBarFactory,return )

void TabNavigator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_353_initialize)
HXLINE( 354)		this->super::initialize();
HXLINE( 356)		if (::hx::IsNull( this->_previousEdgePuller )) {
HXLINE( 357)			this->_previousEdgePuller =  ::feathers::utils::EdgePuller_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::feathers::layout::RelativePosition_obj::LEFT_dyn(),null());
HXLINE( 358)			this->_previousEdgePuller->addEventListener(HX_("opening",58,03,45,40),this->tabNavigator_previousEdgePuller_openingHandler_dyn(),null(),null(),null());
HXLINE( 359)			this->_previousEdgePuller->addEventListener(HX_("cancel",7a,ed,33,b8),this->tabNavigator_previousEdgePuller_cancelHandler_dyn(),null(),null(),null());
HXLINE( 360)			this->_previousEdgePuller->addEventListener(HX_("open",ca,03,b4,49),this->tabNavigator_previousEdgePuller_openHandler_dyn(),null(),null(),null());
            		}
HXLINE( 362)		if (::hx::IsNull( this->_nextEdgePuller )) {
HXLINE( 363)			this->_nextEdgePuller =  ::feathers::utils::EdgePuller_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),::feathers::layout::RelativePosition_obj::RIGHT_dyn(),null());
HXLINE( 364)			this->_nextEdgePuller->addEventListener(HX_("opening",58,03,45,40),this->tabNavigator_nextEdgePuller_openingHandler_dyn(),null(),null(),null());
HXLINE( 365)			this->_nextEdgePuller->addEventListener(HX_("cancel",7a,ed,33,b8),this->tabNavigator_nextEdgePuller_cancelHandler_dyn(),null(),null(),null());
HXLINE( 366)			this->_nextEdgePuller->addEventListener(HX_("open",ca,03,b4,49),this->tabNavigator_nextEdgePuller_openHandler_dyn(),null(),null(),null());
            		}
            	}


::String TabNavigator_obj::itemToText( ::feathers::controls::navigators::TabItem item){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_371_itemToText)
HXDLIN( 371)		return item->text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,itemToText,return )

void TabNavigator_obj::initializeTabNavigatorTheme(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_375_initializeTabNavigatorTheme)
HXDLIN( 375)		::feathers::themes::steel::components::SteelTabNavigatorStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,initializeTabNavigatorTheme,(void))

void TabNavigator_obj::update(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_378_update)
HXLINE( 379)		bool dataInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 380)		bool selectionInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 381)		bool tabBarInvalid = this->isInvalid(::feathers::controls::navigators::TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY);
HXLINE( 383)		if (tabBarInvalid) {
HXLINE( 384)			this->createTabBar();
            		}
HXLINE( 387)		bool _hx_tmp;
HXDLIN( 387)		if (!(dataInvalid)) {
HXLINE( 387)			_hx_tmp = tabBarInvalid;
            		}
            		else {
HXLINE( 387)			_hx_tmp = true;
            		}
HXDLIN( 387)		if (_hx_tmp) {
HXLINE( 388)			this->tabBar->itemToText = this->itemToText_dyn();
HXLINE( 389)			this->tabBar->set_dataProvider(this->_dataProvider);
HXLINE( 391)			this->_previousEdgePuller->simulateTouch = this->_simulateTouch;
HXLINE( 392)			this->_nextEdgePuller->simulateTouch = this->_simulateTouch;
            		}
HXLINE( 395)		bool _hx_tmp1;
HXDLIN( 395)		bool _hx_tmp2;
HXDLIN( 395)		if (!(dataInvalid)) {
HXLINE( 395)			_hx_tmp2 = selectionInvalid;
            		}
            		else {
HXLINE( 395)			_hx_tmp2 = true;
            		}
HXDLIN( 395)		if (!(_hx_tmp2)) {
HXLINE( 395)			_hx_tmp1 = tabBarInvalid;
            		}
            		else {
HXLINE( 395)			_hx_tmp1 = true;
            		}
HXDLIN( 395)		if (_hx_tmp1) {
HXLINE( 396)			this->refreshSelection();
            		}
HXLINE( 399)		this->super::update();
            	}


bool TabNavigator_obj::measure(){
            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_402_measure)
HXLINE( 403)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 404)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 405)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 406)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 407)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 408)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 409)		bool _hx_tmp;
HXDLIN( 409)		bool _hx_tmp1;
HXDLIN( 409)		bool _hx_tmp2;
HXDLIN( 409)		bool _hx_tmp3;
HXDLIN( 409)		bool _hx_tmp4;
HXDLIN( 409)		if (!(needsWidth)) {
HXLINE( 409)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE( 409)			_hx_tmp4 = false;
            		}
HXDLIN( 409)		if (_hx_tmp4) {
HXLINE( 409)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE( 409)			_hx_tmp3 = false;
            		}
HXDLIN( 409)		if (_hx_tmp3) {
HXLINE( 409)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE( 409)			_hx_tmp2 = false;
            		}
HXDLIN( 409)		if (_hx_tmp2) {
HXLINE( 409)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE( 409)			_hx_tmp1 = false;
            		}
HXDLIN( 409)		if (_hx_tmp1) {
HXLINE( 409)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE( 409)			_hx_tmp = false;
            		}
HXDLIN( 409)		if (_hx_tmp) {
HXLINE( 410)			return false;
            		}
HXLINE( 413)		bool needsToMeasureContent;
HXDLIN( 413)		if (::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 413)			needsToMeasureContent = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 413)			needsToMeasureContent = true;
            		}
HXLINE( 415)		if (needsToMeasureContent) {
HXLINE( 416)			if (::hx::IsNotNull( this->get_explicitWidth() )) {
HXLINE( 417)				 ::feathers::controls::TabBar _hx_tmp = this->tabBar;
HXDLIN( 417)				_hx_tmp->set_width(( (Float)(this->get_explicitWidth()) ));
            			}
            			else {
HXLINE( 419)				this->tabBar->resetWidth();
            			}
HXLINE( 421)			this->tabBar->validateNow();
HXLINE( 422)			switch((int)(this->get_tabBarPosition()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 424)					Float _hx_tmp = this->tabBar->get_height();
HXDLIN( 424)					this->topContentOffset = (_hx_tmp + this->get_gap());
            				}
            				break;
            				case (int)2: {
HXLINE( 426)					Float _hx_tmp = this->tabBar->get_height();
HXDLIN( 426)					this->bottomContentOffset = (_hx_tmp + this->get_gap());
            				}
            				break;
            				default:{
HXLINE( 428)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid tabBarPosition ",b0,a5,57,27) + ::Std_obj::string(this->get_tabBarPosition()))));
            				}
            			}
            		}
HXLINE( 431)		return this->super::measure();
            	}


void TabNavigator_obj::createTabBar(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_434_createTabBar)
HXLINE( 435)		if (::hx::IsNotNull( this->tabBar )) {
HXLINE( 436)			this->tabBar->removeEventListener(HX_("itemTrigger",65,d0,e1,83),this->tabNavigator_tabBar_itemTriggerHandler_dyn(),null());
HXLINE( 437)			this->tabBar->removeEventListener(HX_("change",70,91,72,b7),this->tabNavigator_tabBar_changeHandler_dyn(),null());
HXLINE( 438)			this->removeChild(this->tabBar);
HXLINE( 439)			if (::hx::IsNotNull( this->_oldTabBarFactory->destroy )) {
HXLINE( 440)				this->_oldTabBarFactory->destroy(this->tabBar);
            			}
HXLINE( 442)			this->_oldTabBarFactory = null();
HXLINE( 443)			this->tabBar = null();
            		}
HXLINE( 445)		 ::feathers::utils::DisplayObjectFactory factory;
HXDLIN( 445)		if (::hx::IsNotNull( this->_tabBarFactory )) {
HXLINE( 445)			factory = this->_tabBarFactory;
            		}
            		else {
HXLINE( 445)			factory = ::feathers::controls::navigators::TabNavigator_obj::defaultTabBarFactory;
            		}
HXLINE( 446)		this->_oldTabBarFactory = factory;
HXLINE( 447)		this->tabBar = ( ( ::feathers::controls::TabBar)(factory->create()) );
HXLINE( 448)		if (::hx::IsNull( this->tabBar->get_variant() )) {
HXLINE( 449)			 ::feathers::controls::TabBar _hx_tmp = this->tabBar;
HXDLIN( 449)			::String _hx_tmp1;
HXDLIN( 449)			if (::hx::IsNotNull( this->get_customTabBarVariant() )) {
HXLINE( 449)				_hx_tmp1 = this->get_customTabBarVariant();
            			}
            			else {
HXLINE( 449)				_hx_tmp1 = ::feathers::controls::navigators::TabNavigator_obj::CHILD_VARIANT_TAB_BAR;
            			}
HXDLIN( 449)			_hx_tmp->set_variant(_hx_tmp1);
            		}
HXLINE( 451)		this->tabBar->addEventListener(HX_("itemTrigger",65,d0,e1,83),this->tabNavigator_tabBar_itemTriggerHandler_dyn(),null(),null(),null());
HXLINE( 452)		this->tabBar->addEventListener(HX_("change",70,91,72,b7),this->tabNavigator_tabBar_changeHandler_dyn(),null(),null(),null());
HXLINE( 453)		this->addChild(this->tabBar);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,createTabBar,(void))

void TabNavigator_obj::layoutContent(){
            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_456_layoutContent)
HXLINE( 457)		this->tabBar->set_x(((Float)0.0));
HXLINE( 458)		this->tabBar->set_width(this->actualWidth);
HXLINE( 459)		this->tabBar->validateNow();
HXLINE( 460)		switch((int)(this->get_tabBarPosition()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 462)				this->tabBar->set_y(((Float)0.0));
            			}
            			break;
            			case (int)2: {
HXLINE( 464)				 ::feathers::controls::TabBar _hx_tmp = this->tabBar;
HXDLIN( 464)				Float _hx_tmp1 = this->actualHeight;
HXDLIN( 464)				_hx_tmp->set_y((_hx_tmp1 - this->tabBar->get_height()));
            			}
            			break;
            			default:{
HXLINE( 466)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid tabBarPosition ",b0,a5,57,27) + ::Std_obj::string(this->get_tabBarPosition()))));
            			}
            		}
HXLINE( 469)		this->_viewsContainer->set_x(((Float)0.0));
HXLINE( 470)		switch((int)(this->get_tabBarPosition()->_hx_getIndex())){
            			case (int)0: {
HXLINE( 472)				 ::openfl::display::DisplayObjectContainer _hx_tmp = this->_viewsContainer;
HXDLIN( 472)				Float _hx_tmp1 = this->tabBar->get_height();
HXDLIN( 472)				_hx_tmp->set_y((_hx_tmp1 + this->get_gap()));
            			}
            			break;
            			case (int)2: {
HXLINE( 474)				this->_viewsContainer->set_y(((Float)0.0));
            			}
            			break;
            			default:{
HXLINE( 476)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Invalid tabBarPosition ",b0,a5,57,27) + ::Std_obj::string(this->get_tabBarPosition()))));
            			}
            		}
HXLINE( 478)		this->_viewsContainer->set_width(this->actualWidth);
HXLINE( 479)		 ::openfl::display::DisplayObjectContainer _hx_tmp = this->_viewsContainer;
HXDLIN( 479)		Float _hx_tmp1 = this->actualHeight;
HXDLIN( 479)		Float _hx_tmp2 = (_hx_tmp1 - this->tabBar->get_height());
HXDLIN( 479)		_hx_tmp->set_height((_hx_tmp2 - this->get_gap()));
HXLINE( 481)		if (::hx::IsNotNull( this->_activeItemView )) {
HXLINE( 482)			this->_activeItemView->set_x(((Float)0.0));
HXLINE( 483)			this->_activeItemView->set_y(((Float)0.0));
HXLINE( 484)			 ::openfl::display::DisplayObject _hx_tmp = this->_activeItemView;
HXDLIN( 484)			_hx_tmp->set_width(this->_viewsContainer->get_width());
HXLINE( 485)			 ::openfl::display::DisplayObject _hx_tmp1 = this->_activeItemView;
HXDLIN( 485)			_hx_tmp1->set_height(this->_viewsContainer->get_height());
            		}
HXLINE( 488)		if (::hx::IsNotNull( this->_nextViewInTransition )) {
HXLINE( 489)			this->_nextViewInTransition->set_x(((Float)0.0));
HXLINE( 490)			this->_nextViewInTransition->set_y(((Float)0.0));
HXLINE( 491)			 ::openfl::display::DisplayObject _hx_tmp = this->_nextViewInTransition;
HXDLIN( 491)			_hx_tmp->set_width(this->_viewsContainer->get_width());
HXLINE( 492)			 ::openfl::display::DisplayObject _hx_tmp1 = this->_nextViewInTransition;
HXDLIN( 492)			_hx_tmp1->set_height(this->_viewsContainer->get_height());
            		}
HXLINE( 495)		if (::Std_obj::isOfType(this->_viewsContainer,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 496)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_viewsContainer,0x64d4b3cd));
            		}
            	}


 ::openfl::display::DisplayObject TabNavigator_obj::getView(::String id){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_500_getView)
HXLINE( 501)		 ::feathers::controls::navigators::TabItem item = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(this->_addedItems->get(id));
HXLINE( 502)		return item->getView(::hx::ObjectPtr<OBJ_>(this));
            	}


void TabNavigator_obj::disposeView(::String id, ::openfl::display::DisplayObject view){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_505_disposeView)
HXLINE( 506)		 ::feathers::controls::navigators::TabItem item = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(this->_addedItems->get(id));
HXLINE( 507)		item->returnView(view);
            	}


void TabNavigator_obj::refreshSelection(){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_510_refreshSelection)
HXLINE( 511)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 512)		this->_ignoreSelectionChange = true;
HXLINE( 513)		this->tabBar->set_selectedIndex(this->_selectedIndex);
HXLINE( 514)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
HXLINE( 516)		if (::hx::IsNull( this->_selectedItem )) {
HXLINE( 517)			this->_activeItemIndex = -1;
HXLINE( 518)			if (::hx::IsNotNull( this->get_activeItemID() )) {
HXLINE( 519)				this->clearActiveItemInternal(null());
            			}
            		}
            		else {
HXLINE( 521)			if (::hx::IsNotNull( this->_selectedItem )) {
HXLINE( 522)				int oldIndex = this->_activeItemIndex;
HXLINE( 523)				this->_activeItemIndex = this->_selectedIndex;
HXLINE( 524)				bool _hx_tmp;
HXDLIN( 524)				if (!(this->_previousEdgePuller->get_active())) {
HXLINE( 524)					_hx_tmp = !(this->_nextEdgePuller->get_active());
            				}
            				else {
HXLINE( 524)					_hx_tmp = false;
            				}
HXDLIN( 524)				if (_hx_tmp) {
HXLINE( 525)					::String activeID;
HXDLIN( 525)					if (this->_transitionActive) {
HXLINE( 525)						activeID = this->_nextViewInTransitionID;
            					}
            					else {
HXLINE( 525)						activeID = this->_activeItemID;
            					}
HXLINE( 526)					if ((activeID != this->_selectedItem->internalID)) {
HXLINE( 527)						 ::Dynamic transition = null();
HXLINE( 528)						bool _hx_tmp;
HXDLIN( 528)						if ((oldIndex != -1)) {
HXLINE( 528)							_hx_tmp = (oldIndex != this->_selectedIndex);
            						}
            						else {
HXLINE( 528)							_hx_tmp = false;
            						}
HXDLIN( 528)						if (_hx_tmp) {
HXLINE( 529)							if ((oldIndex < this->_selectedIndex)) {
HXLINE( 529)								transition = this->get_nextTransition();
            							}
            							else {
HXLINE( 529)								transition = this->get_previousTransition();
            							}
            						}
HXLINE( 531)						this->showItemInternal(this->_selectedItem->internalID,transition);
            					}
            				}
            			}
            		}
HXLINE( 536)		bool _hx_tmp;
HXDLIN( 536)		bool _hx_tmp1;
HXDLIN( 536)		bool _hx_tmp2;
HXDLIN( 536)		if (this->_enabled) {
HXLINE( 536)			_hx_tmp2 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 536)			_hx_tmp2 = false;
            		}
HXDLIN( 536)		if (_hx_tmp2) {
HXLINE( 536)			_hx_tmp1 = (this->_selectedIndex > 0);
            		}
            		else {
HXLINE( 536)			_hx_tmp1 = false;
            		}
HXDLIN( 536)		if (_hx_tmp1) {
HXLINE( 536)			_hx_tmp = !(this->_nextEdgePuller->get_active());
            		}
            		else {
HXLINE( 536)			_hx_tmp = false;
            		}
HXDLIN( 536)		this->_previousEdgePuller->enabled = _hx_tmp;
HXLINE( 537)		bool _hx_tmp3;
HXDLIN( 537)		bool _hx_tmp4;
HXDLIN( 537)		bool _hx_tmp5;
HXDLIN( 537)		if (this->_enabled) {
HXLINE( 537)			_hx_tmp5 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 537)			_hx_tmp5 = false;
            		}
HXDLIN( 537)		if (_hx_tmp5) {
HXLINE( 539)			int _hx_tmp = this->_selectedIndex;
HXLINE( 537)			_hx_tmp4 = (_hx_tmp < this->get_maxSelectedIndex());
            		}
            		else {
HXLINE( 537)			_hx_tmp4 = false;
            		}
HXDLIN( 537)		if (_hx_tmp4) {
HXLINE( 537)			_hx_tmp3 = !(this->_previousEdgePuller->get_active());
            		}
            		else {
HXLINE( 537)			_hx_tmp3 = false;
            		}
HXDLIN( 537)		this->_nextEdgePuller->enabled = _hx_tmp3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,refreshSelection,(void))

::Dynamic TabNavigator_obj::startPreviousDragTransition( ::openfl::display::DisplayObject one, ::openfl::display::DisplayObject two){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::controls::navigators::TabNavigator,_gthis) HXARGC(1)
            		Float _hx_run( ::openfl::events::Event event){
            			HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_546_startPreviousDragTransition)
HXLINE( 547)			 ::feathers::motion::effects::EventToPositionEffectContext _gthis1 = _gthis->_dragTransitionContext;
HXDLIN( 547)			Float _hx_tmp = _gthis->_previousEdgePuller->get_pullDistance();
HXLINE( 546)			return _gthis1->set_position((_hx_tmp / _gthis->actualWidth));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_543_startPreviousDragTransition)
HXDLIN( 543)		 ::feathers::controls::navigators::TabNavigator _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 544)		::Dynamic effectContext = this->get_previousTransition()(one,two);
HXLINE( 545)		 ::feathers::utils::EdgePuller _hx_tmp = this->_previousEdgePuller;
HXDLIN( 545)		_hx_tmp->set_snapDuration(::feathers::motion::effects::IEffectContext_obj::get_duration(effectContext));
HXLINE( 546)		this->_dragTransitionContext =  ::feathers::motion::effects::EventToPositionEffectContext_obj::__alloc( HX_CTX ,effectContext,this->_previousEdgePuller,HX_("change",70,91,72,b7), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 549)		return this->_dragTransitionContext;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabNavigator_obj,startPreviousDragTransition,return )

::Dynamic TabNavigator_obj::startNextDragTransition( ::openfl::display::DisplayObject one, ::openfl::display::DisplayObject two){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::feathers::controls::navigators::TabNavigator,_gthis) HXARGC(1)
            		Float _hx_run( ::openfl::events::Event event){
            			HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_555_startNextDragTransition)
HXLINE( 556)			 ::feathers::motion::effects::EventToPositionEffectContext _gthis1 = _gthis->_dragTransitionContext;
HXDLIN( 556)			Float _hx_tmp = _gthis->_nextEdgePuller->get_pullDistance();
HXLINE( 555)			return _gthis1->set_position((_hx_tmp / _gthis->actualWidth));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_f22d0649df5571f6_552_startNextDragTransition)
HXDLIN( 552)		 ::feathers::controls::navigators::TabNavigator _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 553)		::Dynamic effectContext = this->get_nextTransition()(one,two);
HXLINE( 554)		 ::feathers::utils::EdgePuller _hx_tmp = this->_nextEdgePuller;
HXDLIN( 554)		_hx_tmp->set_snapDuration(::feathers::motion::effects::IEffectContext_obj::get_duration(effectContext));
HXLINE( 555)		this->_dragTransitionContext =  ::feathers::motion::effects::EventToPositionEffectContext_obj::__alloc( HX_CTX ,effectContext,this->_nextEdgePuller,HX_("change",70,91,72,b7), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 558)		return this->_dragTransitionContext;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabNavigator_obj,startNextDragTransition,return )

void TabNavigator_obj::tabNavigator_tabBar_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_561_tabNavigator_tabBar_changeHandler)
HXLINE( 562)		if (this->_ignoreSelectionChange) {
HXLINE( 563)			return;
            		}
HXLINE( 566)		this->set_selectedIndex(this->tabBar->get_selectedIndex());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_tabBar_changeHandler,(void))

void TabNavigator_obj::tabNavigator_tabBar_itemTriggerHandler( ::feathers::events::TabBarEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_570_tabNavigator_tabBar_itemTriggerHandler)
HXDLIN( 570)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_tabBar_itemTriggerHandler,(void))

void TabNavigator_obj::tabNavigator_dataProvider_addItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_573_tabNavigator_dataProvider_addItemHandler)
HXLINE( 574)		 ::feathers::controls::navigators::TabItem item = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(event->addedItem);
HXLINE( 575)		this->addItemInternal(item->internalID,item);
HXLINE( 577)		if ((this->_selectedIndex >= event->index)) {
HXLINE( 579)			this->set_selectedIndex((this->get_selectedIndex() + 1));
            		}
            		else {
HXLINE( 580)			if ((this->_selectedIndex == -1)) {
HXLINE( 585)				this->set_selectedIndex(0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_dataProvider_addItemHandler,(void))

void TabNavigator_obj::tabNavigator_dataProvider_removeItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_589_tabNavigator_dataProvider_removeItemHandler)
HXLINE( 590)		 ::feathers::controls::navigators::TabItem item = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(event->removedItem);
HXLINE( 591)		this->removeItemInternal(item->internalID);
HXLINE( 593)		if ((::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0)) {
HXLINE( 595)			this->set_selectedIndex(-1);
            		}
            		else {
HXLINE( 596)			if ((this->_selectedIndex >= event->index)) {
HXLINE( 598)				this->set_selectedIndex((this->get_selectedIndex() - 1));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_dataProvider_removeItemHandler,(void))

void TabNavigator_obj::tabNavigator_dataProvider_replaceItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_602_tabNavigator_dataProvider_replaceItemHandler)
HXLINE( 603)		 ::feathers::controls::navigators::TabItem addedItem = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(event->addedItem);
HXLINE( 604)		 ::feathers::controls::navigators::TabItem removedItem = ::hx::TCast<  ::feathers::controls::navigators::TabItem >::cast(event->removedItem);
HXLINE( 605)		this->removeItemInternal(removedItem->internalID);
HXLINE( 606)		this->addItemInternal(addedItem->internalID,addedItem);
HXLINE( 608)		if ((this->_selectedIndex == event->index)) {
HXLINE( 609)			this->set_selectedItem(( ( ::feathers::controls::navigators::TabItem)(::feathers::data::IFlatCollection_obj::get(this->_dataProvider,this->_selectedIndex)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_dataProvider_replaceItemHandler,(void))

void TabNavigator_obj::tabNavigator_dataProvider_removeAllHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_613_tabNavigator_dataProvider_removeAllHandler)
HXLINE( 615)		this->set_selectedIndex(-1);
HXLINE( 616)		{
HXLINE( 616)			 ::Dynamic id = this->_addedItems->keys();
HXDLIN( 616)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 616)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 617)				 ::Dynamic item = this->_addedItems->get(id1);
HXLINE( 618)				this->removeItemInternal(( (::String)(item->__Field(HX_("internalID",58,b0,4c,00),::hx::paccDynamic)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_dataProvider_removeAllHandler,(void))

void TabNavigator_obj::tabNavigator_dataProvider_resetHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_622_tabNavigator_dataProvider_resetHandler)
HXLINE( 624)		this->set_selectedIndex(-1);
HXLINE( 625)		{
HXLINE( 625)			 ::Dynamic id = this->_addedItems->keys();
HXDLIN( 625)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 625)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 626)				 ::Dynamic item = this->_addedItems->get(id1);
HXLINE( 627)				this->removeItemInternal(( (::String)(item->__Field(HX_("internalID",58,b0,4c,00),::hx::paccDynamic)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_dataProvider_resetHandler,(void))

void TabNavigator_obj::tabNavigator_previousEdgePuller_openingHandler( ::feathers::events::FeathersEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_631_tabNavigator_previousEdgePuller_openingHandler)
HXLINE( 632)		int newIndex = (this->_selectedIndex - 1);
HXLINE( 633)		if ((newIndex < 0)) {
HXLINE( 634)			event->preventDefault();
HXLINE( 635)			return;
            		}
HXLINE( 638)		 ::Dynamic touchPointID = this->_previousEdgePuller->get_touchPointID();
HXLINE( 639)		if (::hx::IsNotNull( touchPointID )) {
HXLINE( 640)			 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 641)			bool result = exclusivePointer->claimTouch(( (int)(touchPointID) ),::hx::ObjectPtr<OBJ_>(this));
HXLINE( 642)			if (!(result)) {
HXLINE( 643)				event->preventDefault();
HXLINE( 644)				return;
            			}
            		}
            		else {
HXLINE( 646)			if (this->_previousEdgePuller->get_touchPointIsSimulated()) {
HXLINE( 647)				 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 648)				bool result = exclusivePointer->claimMouse(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 649)				if (!(result)) {
HXLINE( 650)					event->preventDefault();
HXLINE( 651)					return;
            				}
            			}
            		}
HXLINE( 655)		if (::hx::IsNotNull( this->get_previousTransition() )) {
HXLINE( 657)			this->_nextEdgePuller->enabled = false;
HXLINE( 659)			 ::feathers::controls::navigators::TabItem item = ( ( ::feathers::controls::navigators::TabItem)(::feathers::data::IFlatCollection_obj::get(this->_dataProvider,newIndex)) );
HXLINE( 660)			this->showItemInternal(item->internalID,this->startPreviousDragTransition_dyn());
            		}
            		else {
HXLINE( 662)			event->preventDefault();
HXLINE( 663)			this->set_selectedIndex(newIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_previousEdgePuller_openingHandler,(void))

void TabNavigator_obj::tabNavigator_previousEdgePuller_cancelHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_667_tabNavigator_previousEdgePuller_cancelHandler)
HXLINE( 668)		bool _hx_tmp;
HXDLIN( 668)		bool _hx_tmp1;
HXDLIN( 668)		if (this->_enabled) {
HXLINE( 668)			_hx_tmp1 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 668)			_hx_tmp1 = false;
            		}
HXDLIN( 668)		if (_hx_tmp1) {
HXLINE( 668)			_hx_tmp = (this->_selectedIndex > 0);
            		}
            		else {
HXLINE( 668)			_hx_tmp = false;
            		}
HXDLIN( 668)		this->_previousEdgePuller->enabled = _hx_tmp;
HXLINE( 669)		bool _hx_tmp2;
HXDLIN( 669)		bool _hx_tmp3;
HXDLIN( 669)		if (this->_enabled) {
HXLINE( 669)			_hx_tmp3 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 669)			_hx_tmp3 = false;
            		}
HXDLIN( 669)		if (_hx_tmp3) {
HXLINE( 669)			int _hx_tmp = this->_selectedIndex;
HXDLIN( 669)			_hx_tmp2 = (_hx_tmp < this->get_maxSelectedIndex());
            		}
            		else {
HXLINE( 669)			_hx_tmp2 = false;
            		}
HXDLIN( 669)		this->_nextEdgePuller->enabled = _hx_tmp2;
HXLINE( 671)		 ::feathers::motion::effects::EventToPositionEffectContext context = this->_dragTransitionContext;
HXLINE( 672)		this->_dragTransitionContext = null();
HXLINE( 674)		if (::hx::IsNotNull( context )) {
HXLINE( 675)			context->set_dispatcher(null());
HXLINE( 676)			::feathers::events::FeathersEvent_obj::dispatch(context,HX_("cancel",7a,ed,33,b8),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_previousEdgePuller_cancelHandler,(void))

void TabNavigator_obj::tabNavigator_previousEdgePuller_openHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_680_tabNavigator_previousEdgePuller_openHandler)
HXLINE( 682)		Float oldSnapDuration = this->_previousEdgePuller->get_snapDuration();
HXLINE( 684)		this->_previousEdgePuller->set_snapDuration(((Float)0.0));
HXLINE( 685)		this->_previousEdgePuller->set_opened(false);
HXLINE( 686)		this->_previousEdgePuller->set_snapDuration(oldSnapDuration);
HXLINE( 688)		this->set_selectedIndex((this->get_selectedIndex() - 1));
HXLINE( 689)		bool _hx_tmp;
HXDLIN( 689)		bool _hx_tmp1;
HXDLIN( 689)		if (this->_enabled) {
HXLINE( 689)			_hx_tmp1 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 689)			_hx_tmp1 = false;
            		}
HXDLIN( 689)		if (_hx_tmp1) {
HXLINE( 689)			_hx_tmp = (this->_selectedIndex > 0);
            		}
            		else {
HXLINE( 689)			_hx_tmp = false;
            		}
HXDLIN( 689)		this->_previousEdgePuller->enabled = _hx_tmp;
HXLINE( 690)		bool _hx_tmp2;
HXDLIN( 690)		bool _hx_tmp3;
HXDLIN( 690)		if (this->_enabled) {
HXLINE( 690)			_hx_tmp3 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 690)			_hx_tmp3 = false;
            		}
HXDLIN( 690)		if (_hx_tmp3) {
HXLINE( 690)			int _hx_tmp = this->_selectedIndex;
HXDLIN( 690)			_hx_tmp2 = (_hx_tmp < this->get_maxSelectedIndex());
            		}
            		else {
HXLINE( 690)			_hx_tmp2 = false;
            		}
HXDLIN( 690)		this->_nextEdgePuller->enabled = _hx_tmp2;
HXLINE( 692)		 ::feathers::motion::effects::EventToPositionEffectContext context = this->_dragTransitionContext;
HXLINE( 693)		this->_dragTransitionContext = null();
HXLINE( 694)		if (::hx::IsNotNull( context )) {
HXLINE( 695)			context->set_dispatcher(null());
HXLINE( 696)			::feathers::events::FeathersEvent_obj::dispatch(context,HX_("complete",b9,00,c8,7f),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_previousEdgePuller_openHandler,(void))

void TabNavigator_obj::tabNavigator_nextEdgePuller_openingHandler( ::feathers::events::FeathersEvent event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_700_tabNavigator_nextEdgePuller_openingHandler)
HXLINE( 701)		int newIndex = (this->_selectedIndex + 1);
HXLINE( 702)		if ((newIndex > this->get_maxSelectedIndex())) {
HXLINE( 703)			event->preventDefault();
HXLINE( 704)			return;
            		}
HXLINE( 707)		 ::Dynamic touchPointID = this->_nextEdgePuller->get_touchPointID();
HXLINE( 708)		if (::hx::IsNotNull( touchPointID )) {
HXLINE( 709)			 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 710)			bool result = exclusivePointer->claimTouch(( (int)(touchPointID) ),::hx::ObjectPtr<OBJ_>(this));
HXLINE( 711)			if (!(result)) {
HXLINE( 712)				event->preventDefault();
HXLINE( 713)				return;
            			}
            		}
            		else {
HXLINE( 715)			if (this->_nextEdgePuller->get_touchPointIsSimulated()) {
HXLINE( 716)				 ::feathers::utils::ExclusivePointer exclusivePointer = ::feathers::utils::ExclusivePointer_obj::forStage(this->stage);
HXLINE( 717)				bool result = exclusivePointer->claimMouse(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 718)				if (!(result)) {
HXLINE( 719)					event->preventDefault();
HXLINE( 720)					return;
            				}
            			}
            		}
HXLINE( 724)		if (::hx::IsNotNull( this->get_nextTransition() )) {
HXLINE( 726)			this->_previousEdgePuller->enabled = false;
HXLINE( 728)			 ::feathers::controls::navigators::TabItem item = ( ( ::feathers::controls::navigators::TabItem)(::feathers::data::IFlatCollection_obj::get(this->_dataProvider,newIndex)) );
HXLINE( 729)			this->showItemInternal(item->internalID,this->startNextDragTransition_dyn());
            		}
            		else {
HXLINE( 731)			event->preventDefault();
HXLINE( 732)			this->set_selectedIndex(newIndex);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_nextEdgePuller_openingHandler,(void))

void TabNavigator_obj::tabNavigator_nextEdgePuller_cancelHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_736_tabNavigator_nextEdgePuller_cancelHandler)
HXLINE( 737)		bool _hx_tmp;
HXDLIN( 737)		bool _hx_tmp1;
HXDLIN( 737)		if (this->_enabled) {
HXLINE( 737)			_hx_tmp1 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 737)			_hx_tmp1 = false;
            		}
HXDLIN( 737)		if (_hx_tmp1) {
HXLINE( 737)			_hx_tmp = (this->_selectedIndex > 0);
            		}
            		else {
HXLINE( 737)			_hx_tmp = false;
            		}
HXDLIN( 737)		this->_previousEdgePuller->enabled = _hx_tmp;
HXLINE( 738)		bool _hx_tmp2;
HXDLIN( 738)		bool _hx_tmp3;
HXDLIN( 738)		if (this->_enabled) {
HXLINE( 738)			_hx_tmp3 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 738)			_hx_tmp3 = false;
            		}
HXDLIN( 738)		if (_hx_tmp3) {
HXLINE( 738)			int _hx_tmp = this->_selectedIndex;
HXDLIN( 738)			_hx_tmp2 = (_hx_tmp < this->get_maxSelectedIndex());
            		}
            		else {
HXLINE( 738)			_hx_tmp2 = false;
            		}
HXDLIN( 738)		this->_nextEdgePuller->enabled = _hx_tmp2;
HXLINE( 740)		 ::feathers::motion::effects::EventToPositionEffectContext context = this->_dragTransitionContext;
HXLINE( 741)		this->_dragTransitionContext = null();
HXLINE( 743)		if (::hx::IsNotNull( context )) {
HXLINE( 744)			context->set_dispatcher(null());
HXLINE( 745)			::feathers::events::FeathersEvent_obj::dispatch(context,HX_("cancel",7a,ed,33,b8),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_nextEdgePuller_cancelHandler,(void))

void TabNavigator_obj::tabNavigator_nextEdgePuller_openHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_749_tabNavigator_nextEdgePuller_openHandler)
HXLINE( 751)		Float oldSnapDuration = this->_nextEdgePuller->get_snapDuration();
HXLINE( 753)		this->_nextEdgePuller->set_snapDuration(((Float)0.0));
HXLINE( 754)		this->_nextEdgePuller->set_opened(false);
HXLINE( 755)		this->_nextEdgePuller->set_snapDuration(oldSnapDuration);
HXLINE( 757)		this->set_selectedIndex((this->get_selectedIndex() + 1));
HXLINE( 758)		bool _hx_tmp;
HXDLIN( 758)		bool _hx_tmp1;
HXDLIN( 758)		if (this->_enabled) {
HXLINE( 758)			_hx_tmp1 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 758)			_hx_tmp1 = false;
            		}
HXDLIN( 758)		if (_hx_tmp1) {
HXLINE( 758)			_hx_tmp = (this->_selectedIndex > 0);
            		}
            		else {
HXLINE( 758)			_hx_tmp = false;
            		}
HXDLIN( 758)		this->_previousEdgePuller->enabled = _hx_tmp;
HXLINE( 759)		bool _hx_tmp2;
HXDLIN( 759)		bool _hx_tmp3;
HXDLIN( 759)		if (this->_enabled) {
HXLINE( 759)			_hx_tmp3 = this->_swipeEnabled;
            		}
            		else {
HXLINE( 759)			_hx_tmp3 = false;
            		}
HXDLIN( 759)		if (_hx_tmp3) {
HXLINE( 759)			int _hx_tmp = this->_selectedIndex;
HXDLIN( 759)			_hx_tmp2 = (_hx_tmp < this->get_maxSelectedIndex());
            		}
            		else {
HXLINE( 759)			_hx_tmp2 = false;
            		}
HXDLIN( 759)		this->_nextEdgePuller->enabled = _hx_tmp2;
HXLINE( 761)		 ::feathers::motion::effects::EventToPositionEffectContext context = this->_dragTransitionContext;
HXLINE( 762)		this->_dragTransitionContext = null();
HXLINE( 763)		if (::hx::IsNotNull( context )) {
HXLINE( 764)			context->set_dispatcher(null());
HXLINE( 765)			::feathers::events::FeathersEvent_obj::dispatch(context,HX_("complete",b9,00,c8,7f),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,tabNavigator_nextEdgePuller_openHandler,(void))

::hx::Class TabNavigator_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_a20bca9dc2e898ff_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::navigators::TabNavigator >();
            	}


 ::feathers::layout::RelativePosition TabNavigator_obj::get_tabBarPosition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_85_get_tabBarPosition)
HXDLIN(  85)		return this->_hx___tabBarPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_tabBarPosition,return )

 ::feathers::layout::RelativePosition TabNavigator_obj::set_tabBarPosition( ::feathers::layout::RelativePosition value){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_99_set_tabBarPosition)
HXLINE( 100)		if (!(this->setStyle(HX_("tabBarPosition",47,7d,7d,79),null()))) {
HXLINE( 101)			return this->_hx___tabBarPosition;
            		}
HXLINE( 103)		if (::hx::IsPointerEq( this->_hx___tabBarPosition,value )) {
HXLINE( 104)			return this->_hx___tabBarPosition;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_tabBarPosition_dyn();
HXLINE( 110)		this->_hx___tabBarPosition = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___tabBarPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_tabBarPosition,return )

 ::feathers::layout::RelativePosition TabNavigator_obj::clearStyle_tabBarPosition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_125_clearStyle_tabBarPosition)
HXLINE( 126)		this->set_tabBarPosition(::feathers::layout::RelativePosition_obj::BOTTOM_dyn());
HXLINE( 127)		return this->get_tabBarPosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,clearStyle_tabBarPosition,return )

 ::Dynamic TabNavigator_obj::get_previousTransition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_85_get_previousTransition)
HXDLIN(  85)		return this->_hx___previousTransition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_previousTransition,return )

 ::Dynamic TabNavigator_obj::set_previousTransition( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_99_set_previousTransition)
HXLINE( 100)		if (!(this->setStyle(HX_("previousTransition",ac,58,9d,f5),null()))) {
HXLINE( 101)			return this->_hx___previousTransition;
            		}
HXLINE( 103)		if (::hx::IsEq( this->_hx___previousTransition,value )) {
HXLINE( 104)			return this->_hx___previousTransition;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_previousTransition_dyn();
HXLINE( 110)		this->_hx___previousTransition = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___previousTransition;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_previousTransition,return )

 ::Dynamic TabNavigator_obj::clearStyle_previousTransition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_125_clearStyle_previousTransition)
HXLINE( 126)		this->set_previousTransition(null());
HXLINE( 127)		return this->get_previousTransition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,clearStyle_previousTransition,return )

 ::Dynamic TabNavigator_obj::get_nextTransition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_85_get_nextTransition)
HXDLIN(  85)		return this->_hx___nextTransition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_nextTransition,return )

 ::Dynamic TabNavigator_obj::set_nextTransition( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_99_set_nextTransition)
HXLINE( 100)		if (!(this->setStyle(HX_("nextTransition",68,e4,4f,b1),null()))) {
HXLINE( 101)			return this->_hx___nextTransition;
            		}
HXLINE( 103)		if (::hx::IsEq( this->_hx___nextTransition,value )) {
HXLINE( 104)			return this->_hx___nextTransition;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_nextTransition_dyn();
HXLINE( 110)		this->_hx___nextTransition = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___nextTransition;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_nextTransition,return )

 ::Dynamic TabNavigator_obj::clearStyle_nextTransition(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_125_clearStyle_nextTransition)
HXLINE( 126)		this->set_nextTransition(null());
HXLINE( 127)		return this->get_nextTransition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,clearStyle_nextTransition,return )

Float TabNavigator_obj::get_gap(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_85_get_gap)
HXDLIN(  85)		return this->_hx___gap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_gap,return )

Float TabNavigator_obj::set_gap(Float value){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_99_set_gap)
HXLINE( 100)		if (!(this->setStyle(HX_("gap",16,7d,4e,00),null()))) {
HXLINE( 101)			return this->_hx___gap;
            		}
HXLINE( 103)		if ((this->_hx___gap == value)) {
HXLINE( 104)			return this->_hx___gap;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_gap_dyn();
HXLINE( 110)		this->_hx___gap = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___gap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_gap,return )

Float TabNavigator_obj::clearStyle_gap(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_125_clearStyle_gap)
HXLINE( 126)		this->set_gap(((Float)0.0));
HXLINE( 127)		return this->get_gap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,clearStyle_gap,return )

::String TabNavigator_obj::get_customTabBarVariant(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_85_get_customTabBarVariant)
HXDLIN(  85)		return this->_hx___customTabBarVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,get_customTabBarVariant,return )

::String TabNavigator_obj::set_customTabBarVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_99_set_customTabBarVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customTabBarVariant",36,6f,28,b3),null()))) {
HXLINE( 101)			return this->_hx___customTabBarVariant;
            		}
HXLINE( 103)		if ((this->_hx___customTabBarVariant == value)) {
HXLINE( 104)			return this->_hx___customTabBarVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customTabBarVariant_dyn();
HXLINE( 110)		this->_hx___customTabBarVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customTabBarVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabNavigator_obj,set_customTabBarVariant,return )

::String TabNavigator_obj::clearStyle_customTabBarVariant(){
            	HX_STACKFRAME(&_hx_pos_8ebf80d45980d26f_125_clearStyle_customTabBarVariant)
HXLINE( 126)		this->set_customTabBarVariant(null());
HXLINE( 127)		return this->get_customTabBarVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabNavigator_obj,clearStyle_customTabBarVariant,return )

 ::feathers::core::InvalidationFlag TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY;

::String TabNavigator_obj::CHILD_VARIANT_TAB_BAR;

 ::feathers::utils::DisplayObjectFactory TabNavigator_obj::defaultTabBarFactory;


::hx::ObjectPtr< TabNavigator_obj > TabNavigator_obj::__new(::Dynamic dataProvider) {
	::hx::ObjectPtr< TabNavigator_obj > __this = new TabNavigator_obj();
	__this->__construct(dataProvider);
	return __this;
}

::hx::ObjectPtr< TabNavigator_obj > TabNavigator_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider) {
	TabNavigator_obj *__this = (TabNavigator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabNavigator_obj), true, "feathers.controls.navigators.TabNavigator"));
	*(void **)__this = TabNavigator_obj::_hx_vtable;
	__this->__construct(dataProvider);
	return __this;
}

TabNavigator_obj::TabNavigator_obj()
{
}

void TabNavigator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabNavigator);
	HX_MARK_MEMBER_NAME(tabBar,"tabBar");
	HX_MARK_MEMBER_NAME(_previousEdgePuller,"_previousEdgePuller");
	HX_MARK_MEMBER_NAME(_nextEdgePuller,"_nextEdgePuller");
	HX_MARK_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_MARK_MEMBER_NAME(_activeItemIndex,"_activeItemIndex");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_selectedItem,"_selectedItem");
	HX_MARK_MEMBER_NAME(_swipeEnabled,"_swipeEnabled");
	HX_MARK_MEMBER_NAME(_simulateTouch,"_simulateTouch");
	HX_MARK_MEMBER_NAME(_dragTransitionContext,"_dragTransitionContext");
	HX_MARK_MEMBER_NAME(_oldTabBarFactory,"_oldTabBarFactory");
	HX_MARK_MEMBER_NAME(_tabBarFactory,"_tabBarFactory");
	HX_MARK_MEMBER_NAME(_ignoreSelectionChange,"_ignoreSelectionChange");
	HX_MARK_MEMBER_NAME(_hx___tabBarPosition,"__tabBarPosition");
	HX_MARK_MEMBER_NAME(_hx___previousTransition,"__previousTransition");
	HX_MARK_MEMBER_NAME(_hx___nextTransition,"__nextTransition");
	HX_MARK_MEMBER_NAME(_hx___gap,"__gap");
	HX_MARK_MEMBER_NAME(_hx___customTabBarVariant,"__customTabBarVariant");
	 ::feathers::controls::navigators::BaseNavigator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabNavigator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabBar,"tabBar");
	HX_VISIT_MEMBER_NAME(_previousEdgePuller,"_previousEdgePuller");
	HX_VISIT_MEMBER_NAME(_nextEdgePuller,"_nextEdgePuller");
	HX_VISIT_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_VISIT_MEMBER_NAME(_activeItemIndex,"_activeItemIndex");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_selectedItem,"_selectedItem");
	HX_VISIT_MEMBER_NAME(_swipeEnabled,"_swipeEnabled");
	HX_VISIT_MEMBER_NAME(_simulateTouch,"_simulateTouch");
	HX_VISIT_MEMBER_NAME(_dragTransitionContext,"_dragTransitionContext");
	HX_VISIT_MEMBER_NAME(_oldTabBarFactory,"_oldTabBarFactory");
	HX_VISIT_MEMBER_NAME(_tabBarFactory,"_tabBarFactory");
	HX_VISIT_MEMBER_NAME(_ignoreSelectionChange,"_ignoreSelectionChange");
	HX_VISIT_MEMBER_NAME(_hx___tabBarPosition,"__tabBarPosition");
	HX_VISIT_MEMBER_NAME(_hx___previousTransition,"__previousTransition");
	HX_VISIT_MEMBER_NAME(_hx___nextTransition,"__nextTransition");
	HX_VISIT_MEMBER_NAME(_hx___gap,"__gap");
	HX_VISIT_MEMBER_NAME(_hx___customTabBarVariant,"__customTabBarVariant");
	 ::feathers::controls::navigators::BaseNavigator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabNavigator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gap() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__gap") ) { return ::hx::Val( _hx___gap ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tabBar") ) { return ::hx::Val( tabBar ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		if (HX_FIELD_EQ(inName,"getView") ) { return ::hx::Val( getView_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_gap") ) { return ::hx::Val( get_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gap") ) { return ::hx::Val( set_gap_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemToText") ) { return ::hx::Val( itemToText_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disposeView") ) { return ::hx::Val( disposeView_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataProvider() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"swipeEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_swipeEnabled() ); }
		if (HX_FIELD_EQ(inName,"createTabBar") ) { return ::hx::Val( createTabBar_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { return ::hx::Val( _dataProvider ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"_selectedItem") ) { return ::hx::Val( _selectedItem ); }
		if (HX_FIELD_EQ(inName,"_swipeEnabled") ) { return ::hx::Val( _swipeEnabled ); }
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_simulateTouch() ); }
		if (HX_FIELD_EQ(inName,"tabBarFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabBarFactory() ); }
		if (HX_FIELD_EQ(inName,"layoutContent") ) { return ::hx::Val( layoutContent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return ::hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"tabBarPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabBarPosition() ); }
		if (HX_FIELD_EQ(inName,"_simulateTouch") ) { return ::hx::Val( _simulateTouch ); }
		if (HX_FIELD_EQ(inName,"nextTransition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_nextTransition() ); }
		if (HX_FIELD_EQ(inName,"_tabBarFactory") ) { return ::hx::Val( _tabBarFactory ); }
		if (HX_FIELD_EQ(inName,"clearStyle_gap") ) { return ::hx::Val( clearStyle_gap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_nextEdgePuller") ) { return ::hx::Val( _nextEdgePuller ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dataProvider") ) { return ::hx::Val( get_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataProvider") ) { return ::hx::Val( set_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"_activeItemIndex") ) { return ::hx::Val( _activeItemIndex ); }
		if (HX_FIELD_EQ(inName,"maxSelectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSelectedIndex() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_swipeEnabled") ) { return ::hx::Val( get_swipeEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_swipeEnabled") ) { return ::hx::Val( set_swipeEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshSelection") ) { return ::hx::Val( refreshSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabBarPosition") ) { return ::hx::Val( _hx___tabBarPosition ); }
		if (HX_FIELD_EQ(inName,"__nextTransition") ) { return ::hx::Val( _hx___nextTransition ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_simulateTouch") ) { return ::hx::Val( get_simulateTouch_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_simulateTouch") ) { return ::hx::Val( set_simulateTouch_dyn() ); }
		if (HX_FIELD_EQ(inName,"_oldTabBarFactory") ) { return ::hx::Val( _oldTabBarFactory ); }
		if (HX_FIELD_EQ(inName,"get_tabBarFactory") ) { return ::hx::Val( get_tabBarFactory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabBarFactory") ) { return ::hx::Val( set_tabBarFactory_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"previousTransition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_previousTransition() ); }
		if (HX_FIELD_EQ(inName,"get_tabBarPosition") ) { return ::hx::Val( get_tabBarPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabBarPosition") ) { return ::hx::Val( set_tabBarPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_nextTransition") ) { return ::hx::Val( get_nextTransition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_nextTransition") ) { return ::hx::Val( set_nextTransition_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_previousEdgePuller") ) { return ::hx::Val( _previousEdgePuller ); }
		if (HX_FIELD_EQ(inName,"customTabBarVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customTabBarVariant() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_maxSelectedIndex") ) { return ::hx::Val( get_maxSelectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__previousTransition") ) { return ::hx::Val( _hx___previousTransition ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__customTabBarVariant") ) { return ::hx::Val( _hx___customTabBarVariant ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dragTransitionContext") ) { return ::hx::Val( _dragTransitionContext ); }
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { return ::hx::Val( _ignoreSelectionChange ); }
		if (HX_FIELD_EQ(inName,"get_previousTransition") ) { return ::hx::Val( get_previousTransition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_previousTransition") ) { return ::hx::Val( set_previousTransition_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"startNextDragTransition") ) { return ::hx::Val( startNextDragTransition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customTabBarVariant") ) { return ::hx::Val( get_customTabBarVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customTabBarVariant") ) { return ::hx::Val( set_customTabBarVariant_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"clearStyle_tabBarPosition") ) { return ::hx::Val( clearStyle_tabBarPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_nextTransition") ) { return ::hx::Val( clearStyle_nextTransition_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"initializeTabNavigatorTheme") ) { return ::hx::Val( initializeTabNavigatorTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"startPreviousDragTransition") ) { return ::hx::Val( startPreviousDragTransition_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"clearStyle_previousTransition") ) { return ::hx::Val( clearStyle_previousTransition_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"clearStyle_customTabBarVariant") ) { return ::hx::Val( clearStyle_customTabBarVariant_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"tabNavigator_tabBar_changeHandler") ) { return ::hx::Val( tabNavigator_tabBar_changeHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"tabNavigator_tabBar_itemTriggerHandler") ) { return ::hx::Val( tabNavigator_tabBar_itemTriggerHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabNavigator_dataProvider_resetHandler") ) { return ::hx::Val( tabNavigator_dataProvider_resetHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"tabNavigator_nextEdgePuller_openHandler") ) { return ::hx::Val( tabNavigator_nextEdgePuller_openHandler_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"tabNavigator_dataProvider_addItemHandler") ) { return ::hx::Val( tabNavigator_dataProvider_addItemHandler_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"tabNavigator_nextEdgePuller_cancelHandler") ) { return ::hx::Val( tabNavigator_nextEdgePuller_cancelHandler_dyn() ); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"tabNavigator_dataProvider_removeAllHandler") ) { return ::hx::Val( tabNavigator_dataProvider_removeAllHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabNavigator_nextEdgePuller_openingHandler") ) { return ::hx::Val( tabNavigator_nextEdgePuller_openingHandler_dyn() ); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"tabNavigator_dataProvider_removeItemHandler") ) { return ::hx::Val( tabNavigator_dataProvider_removeItemHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabNavigator_previousEdgePuller_openHandler") ) { return ::hx::Val( tabNavigator_previousEdgePuller_openHandler_dyn() ); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"tabNavigator_dataProvider_replaceItemHandler") ) { return ::hx::Val( tabNavigator_dataProvider_replaceItemHandler_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"tabNavigator_previousEdgePuller_cancelHandler") ) { return ::hx::Val( tabNavigator_previousEdgePuller_cancelHandler_dyn() ); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"tabNavigator_previousEdgePuller_openingHandler") ) { return ::hx::Val( tabNavigator_previousEdgePuller_openingHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TabNavigator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"defaultTabBarFactory") ) { outValue = ( defaultTabBarFactory ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TAB_BAR") ) { outValue = ( CHILD_VARIANT_TAB_BAR ); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_TAB_BAR_FACTORY") ) { outValue = ( INVALIDATION_FLAG_TAB_BAR_FACTORY ); return true; }
	}
	return false;
}

::hx::Val TabNavigator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gap(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__gap") ) { _hx___gap=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tabBar") ) { tabBar=inValue.Cast<  ::feathers::controls::TabBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataProvider(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::feathers::controls::navigators::TabItem >()) ); }
		if (HX_FIELD_EQ(inName,"swipeEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_swipeEnabled(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { _dataProvider=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_selectedItem") ) { _selectedItem=inValue.Cast<  ::feathers::controls::navigators::TabItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_swipeEnabled") ) { _swipeEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateTouch") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_simulateTouch(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"tabBarFactory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabBarFactory(inValue.Cast<  ::feathers::utils::DisplayObjectFactory >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabBarPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabBarPosition(inValue.Cast<  ::feathers::layout::RelativePosition >()) ); }
		if (HX_FIELD_EQ(inName,"_simulateTouch") ) { _simulateTouch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextTransition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_nextTransition(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_tabBarFactory") ) { _tabBarFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_nextEdgePuller") ) { _nextEdgePuller=inValue.Cast<  ::feathers::utils::EdgePuller >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_activeItemIndex") ) { _activeItemIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabBarPosition") ) { _hx___tabBarPosition=inValue.Cast<  ::feathers::layout::RelativePosition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__nextTransition") ) { _hx___nextTransition=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_oldTabBarFactory") ) { _oldTabBarFactory=inValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"previousTransition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_previousTransition(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_previousEdgePuller") ) { _previousEdgePuller=inValue.Cast<  ::feathers::utils::EdgePuller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customTabBarVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customTabBarVariant(inValue.Cast< ::String >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__previousTransition") ) { _hx___previousTransition=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__customTabBarVariant") ) { _hx___customTabBarVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dragTransitionContext") ) { _dragTransitionContext=inValue.Cast<  ::feathers::motion::effects::EventToPositionEffectContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { _ignoreSelectionChange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TabNavigator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"defaultTabBarFactory") ) { defaultTabBarFactory=ioValue.Cast<  ::feathers::utils::DisplayObjectFactory >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TAB_BAR") ) { CHILD_VARIANT_TAB_BAR=ioValue.Cast< ::String >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_TAB_BAR_FACTORY") ) { INVALIDATION_FLAG_TAB_BAR_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
	}
	return false;
}

void TabNavigator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabBar",7e,72,3d,7c));
	outFields->push(HX_("_previousEdgePuller",c5,76,de,cd));
	outFields->push(HX_("_nextEdgePuller",01,c7,16,f3));
	outFields->push(HX_("_dataProvider",5a,d0,9e,71));
	outFields->push(HX_("dataProvider",7b,3d,30,8f));
	outFields->push(HX_("_activeItemIndex",da,78,b4,dd));
	outFields->push(HX_("_selectedIndex",f8,66,a8,f2));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("maxSelectedIndex",73,e5,5e,80));
	outFields->push(HX_("_selectedItem",ed,77,c8,b8));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("tabBarPosition",47,7d,7d,79));
	outFields->push(HX_("_swipeEnabled",06,fa,62,57));
	outFields->push(HX_("swipeEnabled",27,67,f4,74));
	outFields->push(HX_("_simulateTouch",bc,0d,26,d7));
	outFields->push(HX_("_dragTransitionContext",87,b7,b3,ef));
	outFields->push(HX_("simulateTouch",7b,1d,d4,98));
	outFields->push(HX_("gap",16,7d,4e,00));
	outFields->push(HX_("customTabBarVariant",36,6f,28,b3));
	outFields->push(HX_("_oldTabBarFactory",24,47,5b,6c));
	outFields->push(HX_("_tabBarFactory",2d,2e,84,86));
	outFields->push(HX_("tabBarFactory",ec,3d,32,48));
	outFields->push(HX_("_ignoreSelectionChange",2b,2b,f7,83));
	outFields->push(HX_("__tabBarPosition",67,08,bd,ad));
	outFields->push(HX_("__gap",f6,dd,2a,f2));
	outFields->push(HX_("__customTabBarVariant",16,90,1c,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabNavigator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::TabBar */ ,(int)offsetof(TabNavigator_obj,tabBar),HX_("tabBar",7e,72,3d,7c)},
	{::hx::fsObject /*  ::feathers::utils::EdgePuller */ ,(int)offsetof(TabNavigator_obj,_previousEdgePuller),HX_("_previousEdgePuller",c5,76,de,cd)},
	{::hx::fsObject /*  ::feathers::utils::EdgePuller */ ,(int)offsetof(TabNavigator_obj,_nextEdgePuller),HX_("_nextEdgePuller",01,c7,16,f3)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(TabNavigator_obj,_dataProvider),HX_("_dataProvider",5a,d0,9e,71)},
	{::hx::fsInt,(int)offsetof(TabNavigator_obj,_activeItemIndex),HX_("_activeItemIndex",da,78,b4,dd)},
	{::hx::fsInt,(int)offsetof(TabNavigator_obj,_selectedIndex),HX_("_selectedIndex",f8,66,a8,f2)},
	{::hx::fsObject /*  ::feathers::controls::navigators::TabItem */ ,(int)offsetof(TabNavigator_obj,_selectedItem),HX_("_selectedItem",ed,77,c8,b8)},
	{::hx::fsBool,(int)offsetof(TabNavigator_obj,_swipeEnabled),HX_("_swipeEnabled",06,fa,62,57)},
	{::hx::fsBool,(int)offsetof(TabNavigator_obj,_simulateTouch),HX_("_simulateTouch",bc,0d,26,d7)},
	{::hx::fsObject /*  ::feathers::motion::effects::EventToPositionEffectContext */ ,(int)offsetof(TabNavigator_obj,_dragTransitionContext),HX_("_dragTransitionContext",87,b7,b3,ef)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(TabNavigator_obj,_oldTabBarFactory),HX_("_oldTabBarFactory",24,47,5b,6c)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(int)offsetof(TabNavigator_obj,_tabBarFactory),HX_("_tabBarFactory",2d,2e,84,86)},
	{::hx::fsBool,(int)offsetof(TabNavigator_obj,_ignoreSelectionChange),HX_("_ignoreSelectionChange",2b,2b,f7,83)},
	{::hx::fsObject /*  ::feathers::layout::RelativePosition */ ,(int)offsetof(TabNavigator_obj,_hx___tabBarPosition),HX_("__tabBarPosition",67,08,bd,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabNavigator_obj,_hx___previousTransition),HX_("__previousTransition",cc,f3,d0,d4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabNavigator_obj,_hx___nextTransition),HX_("__nextTransition",88,6f,8f,e5)},
	{::hx::fsFloat,(int)offsetof(TabNavigator_obj,_hx___gap),HX_("__gap",f6,dd,2a,f2)},
	{::hx::fsString,(int)offsetof(TabNavigator_obj,_hx___customTabBarVariant),HX_("__customTabBarVariant",16,90,1c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TabNavigator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY,HX_("INVALIDATION_FLAG_TAB_BAR_FACTORY",82,b9,6c,2d)},
	{::hx::fsString,(void *) &TabNavigator_obj::CHILD_VARIANT_TAB_BAR,HX_("CHILD_VARIANT_TAB_BAR",4c,fe,c0,99)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectFactory */ ,(void *) &TabNavigator_obj::defaultTabBarFactory,HX_("defaultTabBarFactory",6b,90,83,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TabNavigator_obj_sMemberFields[] = {
	HX_("tabBar",7e,72,3d,7c),
	HX_("_previousEdgePuller",c5,76,de,cd),
	HX_("_nextEdgePuller",01,c7,16,f3),
	HX_("_dataProvider",5a,d0,9e,71),
	HX_("get_dataProvider",04,2a,cf,93),
	HX_("set_dataProvider",78,17,11,ea),
	HX_("_activeItemIndex",da,78,b4,dd),
	HX_("_selectedIndex",f8,66,a8,f2),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_maxSelectedIndex",7c,4a,c9,9e),
	HX_("_selectedItem",ed,77,c8,b8),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("_swipeEnabled",06,fa,62,57),
	HX_("get_swipeEnabled",b0,53,93,79),
	HX_("set_swipeEnabled",24,41,d5,cf),
	HX_("_simulateTouch",bc,0d,26,d7),
	HX_("_dragTransitionContext",87,b7,b3,ef),
	HX_("get_simulateTouch",d2,28,44,9f),
	HX_("set_simulateTouch",de,00,b2,c2),
	HX_("_oldTabBarFactory",24,47,5b,6c),
	HX_("_tabBarFactory",2d,2e,84,86),
	HX_("get_tabBarFactory",43,49,a2,4e),
	HX_("set_tabBarFactory",4f,21,10,72),
	HX_("_ignoreSelectionChange",2b,2b,f7,83),
	HX_("initialize",50,31,bb,ec),
	HX_("itemToText",3b,01,c1,70),
	HX_("initializeTabNavigatorTheme",77,bb,1d,c8),
	HX_("update",09,86,05,87),
	HX_("measure",5e,fb,e9,3c),
	HX_("createTabBar",9a,b2,92,9e),
	HX_("layoutContent",af,8f,21,da),
	HX_("getView",1b,e2,d1,20),
	HX_("disposeView",a4,1a,6b,61),
	HX_("refreshSelection",f1,6a,1e,3e),
	HX_("startPreviousDragTransition",42,5b,23,8c),
	HX_("startNextDragTransition",fe,cb,5e,3c),
	HX_("tabNavigator_tabBar_changeHandler",56,f6,76,07),
	HX_("tabNavigator_tabBar_itemTriggerHandler",49,46,2c,09),
	HX_("tabNavigator_dataProvider_addItemHandler",9d,c6,5a,cf),
	HX_("tabNavigator_dataProvider_removeItemHandler",2c,d7,df,67),
	HX_("tabNavigator_dataProvider_replaceItemHandler",ea,82,12,86),
	HX_("tabNavigator_dataProvider_removeAllHandler",14,46,16,cf),
	HX_("tabNavigator_dataProvider_resetHandler",42,1a,a8,0c),
	HX_("tabNavigator_previousEdgePuller_openingHandler",0e,cb,4b,cb),
	HX_("tabNavigator_previousEdgePuller_cancelHandler",34,5d,aa,48),
	HX_("tabNavigator_previousEdgePuller_openHandler",e4,77,6e,6f),
	HX_("tabNavigator_nextEdgePuller_openingHandler",52,55,fb,34),
	HX_("tabNavigator_nextEdgePuller_cancelHandler",70,c7,b7,aa),
	HX_("tabNavigator_nextEdgePuller_openHandler",20,9b,7f,90),
	HX_("get_styleContext",47,7d,20,4b),
	HX_("__tabBarPosition",67,08,bd,ad),
	HX_("get_tabBarPosition",10,5e,17,15),
	HX_("set_tabBarPosition",84,90,c6,f1),
	HX_("clearStyle_tabBarPosition",02,72,06,81),
	HX_("__previousTransition",cc,f3,d0,d4),
	HX_("get_previousTransition",f5,d1,31,4f),
	HX_("set_previousTransition",69,4e,dd,82),
	HX_("clearStyle_previousTransition",e7,c6,9e,d2),
	HX_("__nextTransition",88,6f,8f,e5),
	HX_("get_nextTransition",31,c5,e9,4c),
	HX_("set_nextTransition",a5,f7,98,29),
	HX_("clearStyle_nextTransition",23,d9,d8,b8),
	HX_("__gap",f6,dd,2a,f2),
	HX_("get_gap",ad,45,c3,26),
	HX_("set_gap",b9,d6,c4,19),
	HX_("clearStyle_gap",7b,a8,15,a8),
	HX_("__customTabBarVariant",16,90,1c,21),
	HX_("get_customTabBarVariant",cd,15,7e,bb),
	HX_("set_customTabBarVariant",d9,7e,df,bd),
	HX_("clearStyle_customTabBarVariant",9b,74,67,37),
	::String(null()) };

static void TabNavigator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY,"INVALIDATION_FLAG_TAB_BAR_FACTORY");
	HX_MARK_MEMBER_NAME(TabNavigator_obj::CHILD_VARIANT_TAB_BAR,"CHILD_VARIANT_TAB_BAR");
	HX_MARK_MEMBER_NAME(TabNavigator_obj::defaultTabBarFactory,"defaultTabBarFactory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabNavigator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabNavigator_obj::INVALIDATION_FLAG_TAB_BAR_FACTORY,"INVALIDATION_FLAG_TAB_BAR_FACTORY");
	HX_VISIT_MEMBER_NAME(TabNavigator_obj::CHILD_VARIANT_TAB_BAR,"CHILD_VARIANT_TAB_BAR");
	HX_VISIT_MEMBER_NAME(TabNavigator_obj::defaultTabBarFactory,"defaultTabBarFactory");
};

#endif

::hx::Class TabNavigator_obj::__mClass;

static ::String TabNavigator_obj_sStaticFields[] = {
	HX_("INVALIDATION_FLAG_TAB_BAR_FACTORY",82,b9,6c,2d),
	HX_("CHILD_VARIANT_TAB_BAR",4c,fe,c0,99),
	HX_("defaultTabBarFactory",6b,90,83,99),
	::String(null())
};

void TabNavigator_obj::__register()
{
	TabNavigator_obj _hx_dummy;
	TabNavigator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.navigators.TabNavigator",1a,67,8e,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabNavigator_obj::__GetStatic;
	__mClass->mSetStaticField = &TabNavigator_obj::__SetStatic;
	__mClass->mMarkFunc = TabNavigator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabNavigator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabNavigator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabNavigator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabNavigator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabNavigator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabNavigator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabNavigator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_56_boot)
HXDLIN(  56)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("dataProvider",7b,3d,30,8f))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_57_boot)
HXDLIN(  57)		INVALIDATION_FLAG_TAB_BAR_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("tabBarFactory",ec,3d,32,48));
            	}
{
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_71_boot)
HXDLIN(  71)		CHILD_VARIANT_TAB_BAR = HX_("tabNavigator_tabBar",9b,f8,de,22);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f22d0649df5571f6_73_boot)
HXDLIN(  73)		defaultTabBarFactory = ::feathers::utils::DisplayObjectFactory_obj::withClass(::hx::ClassOf< ::feathers::controls::TabBar >(),null());
            	}
}

} // end namespace feathers
} // end namespace controls
} // end namespace navigators
