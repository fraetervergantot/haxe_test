#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicToggleButton
#include <feathers/controls/BasicToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_TabBar
#include <feathers/controls/TabBar.h>
#endif
#ifndef INCLUDED_feathers_controls_ToggleButton
#include <feathers/controls/ToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls__TabBar_TabStorage
#include <feathers/controls/_TabBar/TabStorage.h>
#endif
#ifndef INCLUDED_feathers_controls_dataRenderers_IDataRenderer
#include <feathers/controls/dataRenderers/IDataRenderer.h>
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
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
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
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_feathers_data_TabBarItemState
#include <feathers/data/TabBarItemState.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelTabBarStyles
#include <feathers/themes/steel/components/SteelTabBarStyles.h>
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
#ifndef INCLUDED_lime_utils_ObjectPool_feathers_data_TabBarItemState
#include <lime/utils/ObjectPool_feathers_data_TabBarItemState.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0f2be383da40aeda_398_new,"feathers.controls.TabBar","new",0xac7eb70a,"feathers.controls.TabBar.new","feathers/controls/TabBar.hx",398,0xc18603c6)
HX_DEFINE_STACK_FRAME(_hx_pos_0f2be383da40aeda_88_new,"feathers.controls.TabBar","new",0xac7eb70a,"feathers.controls.TabBar.new","feathers/controls/TabBar.hx",88,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_174_get_dataProvider,"feathers.controls.TabBar","get_dataProvider",0x1565e11a,"feathers.controls.TabBar.get_dataProvider","feathers/controls/TabBar.hx",174,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_177_set_dataProvider,"feathers.controls.TabBar","set_dataProvider",0x6ba7ce8e,"feathers.controls.TabBar.set_dataProvider","feathers/controls/TabBar.hx",177,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_231_get_selectedIndex,"feathers.controls.TabBar","get_selectedIndex",0x9d0ffe38,"feathers.controls.TabBar.get_selectedIndex","feathers/controls/TabBar.hx",231,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_234_set_selectedIndex,"feathers.controls.TabBar","set_selectedIndex",0xc07dd644,"feathers.controls.TabBar.set_selectedIndex","feathers/controls/TabBar.hx",234,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_260_get_maxSelectedIndex,"feathers.controls.TabBar","get_maxSelectedIndex",0xa2584492,"feathers.controls.TabBar.get_maxSelectedIndex","feathers/controls/TabBar.hx",260,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_275_get_selectedItem,"feathers.controls.TabBar","get_selectedItem",0x5c8f88ad,"feathers.controls.TabBar.get_selectedItem","feathers/controls/TabBar.hx",275,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_278_set_selectedItem,"feathers.controls.TabBar","set_selectedItem",0xb2d17621,"feathers.controls.TabBar.set_selectedItem","feathers/controls/TabBar.hx",278,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_331_get_tabRecycler,"feathers.controls.TabBar","get_tabRecycler",0x84bee9b5,"feathers.controls.TabBar.get_tabRecycler","feathers/controls/TabBar.hx",331,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_335_set_tabRecycler,"feathers.controls.TabBar","set_tabRecycler",0x808a66c1,"feathers.controls.TabBar.set_tabRecycler","feathers/controls/TabBar.hx",335,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_382_get_tabRecyclerIDFunction,"feathers.controls.TabBar","get_tabRecyclerIDFunction",0x767e7808,"feathers.controls.TabBar.get_tabRecyclerIDFunction","feathers/controls/TabBar.hx",382,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_385_set_tabRecyclerIDFunction,"feathers.controls.TabBar","set_tabRecyclerIDFunction",0xe2d53c14,"feathers.controls.TabBar.set_tabRecyclerIDFunction","feathers/controls/TabBar.hx",385,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_427___default_itemToText,"feathers.controls.TabBar","__default_itemToText",0x00fa306f,"feathers.controls.TabBar.__default_itemToText","feathers/controls/TabBar.hx",427,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_503_itemToTab,"feathers.controls.TabBar","itemToTab",0x21a1b3b1,"feathers.controls.TabBar.itemToTab","feathers/controls/TabBar.hx",503,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_513_indexToTab,"feathers.controls.TabBar","indexToTab",0xbf2b21be,"feathers.controls.TabBar.indexToTab","feathers/controls/TabBar.hx",513,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_530_getTabRecycler,"feathers.controls.TabBar","getTabRecycler",0x3b6ded14,"feathers.controls.TabBar.getTabRecycler","feathers/controls/TabBar.hx",530,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_550_setTabRecycler,"feathers.controls.TabBar","setTabRecycler",0x5b8dd588,"feathers.controls.TabBar.setTabRecycler","feathers/controls/TabBar.hx",550,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_563_initializeTabBarTheme,"feathers.controls.TabBar","initializeTabBarTheme",0x8e21d465,"feathers.controls.TabBar.initializeTabBarTheme","feathers/controls/TabBar.hx",563,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_566_update,"feathers.controls.TabBar","update",0xc88ca59f,"feathers.controls.TabBar.update","feathers/controls/TabBar.hx",566,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_598_refreshViewPortBounds,"feathers.controls.TabBar","refreshViewPortBounds",0xcf444c00,"feathers.controls.TabBar.refreshViewPortBounds","feathers/controls/TabBar.hx",598,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_601_handleLayout,"feathers.controls.TabBar","handleLayout",0xbea0c888,"feathers.controls.TabBar.handleLayout","feathers/controls/TabBar.hx",601,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_611_handleLayoutResult,"feathers.controls.TabBar","handleLayoutResult",0x8fe6bb85,"feathers.controls.TabBar.handleLayoutResult","feathers/controls/TabBar.hx",611,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_618_validateChildren,"feathers.controls.TabBar","validateChildren",0xaa59e30b,"feathers.controls.TabBar.validateChildren","feathers/controls/TabBar.hx",618,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_626_refreshTabs,"feathers.controls.TabBar","refreshTabs",0x2062e0a3,"feathers.controls.TabBar.refreshTabs","feathers/controls/TabBar.hx",626,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_677_refreshInactiveTabs,"feathers.controls.TabBar","refreshInactiveTabs",0x2d37e2ae,"feathers.controls.TabBar.refreshInactiveTabs","feathers/controls/TabBar.hx",677,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_691_recoverInactiveTabs,"feathers.controls.TabBar","recoverInactiveTabs",0x478be4f7,"feathers.controls.TabBar.recoverInactiveTabs","feathers/controls/TabBar.hx",691,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_709_freeInactiveTabs,"feathers.controls.TabBar","freeInactiveTabs",0x9f71776b,"feathers.controls.TabBar.freeInactiveTabs","feathers/controls/TabBar.hx",709,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_723_refreshBackgroundSkin,"feathers.controls.TabBar","refreshBackgroundSkin",0x471d15f0,"feathers.controls.TabBar.refreshBackgroundSkin","feathers/controls/TabBar.hx",723,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_733_getCurrentBackgroundSkin,"feathers.controls.TabBar","getCurrentBackgroundSkin",0x58412844,"feathers.controls.TabBar.getCurrentBackgroundSkin","feathers/controls/TabBar.hx",733,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_740_addCurrentBackgroundSkin,"feathers.controls.TabBar","addCurrentBackgroundSkin",0x89bc78d9,"feathers.controls.TabBar.addCurrentBackgroundSkin","feathers/controls/TabBar.hx",740,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_759_removeCurrentBackgroundSkin,"feathers.controls.TabBar","removeCurrentBackgroundSkin",0x7a6b116a,"feathers.controls.TabBar.removeCurrentBackgroundSkin","feathers/controls/TabBar.hx",759,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_774_layoutBackgroundSkin,"feathers.controls.TabBar","layoutBackgroundSkin",0xeeb937eb,"feathers.controls.TabBar.layoutBackgroundSkin","feathers/controls/TabBar.hx",774,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_795_findUnrenderedData,"feathers.controls.TabBar","findUnrenderedData",0xeb2fac87,"feathers.controls.TabBar.findUnrenderedData","feathers/controls/TabBar.hx",795,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_834_renderUnrenderedData,"feathers.controls.TabBar","renderUnrenderedData",0x912371e4,"feathers.controls.TabBar.renderUnrenderedData","feathers/controls/TabBar.hx",834,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_851_createTab,"feathers.controls.TabBar","createTab",0x578272e3,"feathers.controls.TabBar.createTab","feathers/controls/TabBar.hx",851,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_876_destroyTab,"feathers.controls.TabBar","destroyTab",0x893a6011,"feathers.controls.TabBar.destroyTab","feathers/controls/TabBar.hx",876,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_883_itemStateToStorage,"feathers.controls.TabBar","itemStateToStorage",0xffcbd3b8,"feathers.controls.TabBar.itemStateToStorage","feathers/controls/TabBar.hx",883,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_914_populateCurrentItemState,"feathers.controls.TabBar","populateCurrentItemState",0xeda89ca5,"feathers.controls.TabBar.populateCurrentItemState","feathers/controls/TabBar.hx",914,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_923_updateTab,"feathers.controls.TabBar","updateTab",0x908179f6,"feathers.controls.TabBar.updateTab","feathers/controls/TabBar.hx",923,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_934_resetTab,"feathers.controls.TabBar","resetTab",0x591d44dc,"feathers.controls.TabBar.resetTab","feathers/controls/TabBar.hx",934,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_944_refreshTabProperties,"feathers.controls.TabBar","refreshTabProperties",0x51f799e3,"feathers.controls.TabBar.refreshTabProperties","feathers/controls/TabBar.hx",944,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_965_refreshSelectedIndicesAfterFilterOrSort,"feathers.controls.TabBar","refreshSelectedIndicesAfterFilterOrSort",0xb0d6e62e,"feathers.controls.TabBar.refreshSelectedIndicesAfterFilterOrSort","feathers/controls/TabBar.hx",965,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_974_navigateWithKeyboard,"feathers.controls.TabBar","navigateWithKeyboard",0xb8fbafb4,"feathers.controls.TabBar.navigateWithKeyboard","feathers/controls/TabBar.hx",974,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1019_tabBar_keyDownHandler,"feathers.controls.TabBar","tabBar_keyDownHandler",0xf69b8134,"feathers.controls.TabBar.tabBar_keyDownHandler","feathers/controls/TabBar.hx",1019,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1026_tabBar_tab_triggerHandler,"feathers.controls.TabBar","tabBar_tab_triggerHandler",0x69e5fde7,"feathers.controls.TabBar.tabBar_tab_triggerHandler","feathers/controls/TabBar.hx",1026,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1032_tabBar_tab_changeHandler,"feathers.controls.TabBar","tabBar_tab_changeHandler",0xe9767565,"feathers.controls.TabBar.tabBar_tab_changeHandler","feathers/controls/TabBar.hx",1032,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1048_tabBar_dataProvider_changeHandler,"feathers.controls.TabBar","tabBar_dataProvider_changeHandler",0xe74b14c1,"feathers.controls.TabBar.tabBar_dataProvider_changeHandler","feathers/controls/TabBar.hx",1048,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1051_tabBar_dataProvider_addItemHandler,"feathers.controls.TabBar","tabBar_dataProvider_addItemHandler",0x85b6e7ef,"feathers.controls.TabBar.tabBar_dataProvider_addItemHandler","feathers/controls/TabBar.hx",1051,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1061_tabBar_dataProvider_removeItemHandler,"feathers.controls.TabBar","tabBar_dataProvider_removeItemHandler",0x1941d51a,"feathers.controls.TabBar.tabBar_dataProvider_removeItemHandler","feathers/controls/TabBar.hx",1061,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1083_tabBar_dataProvider_replaceItemHandler,"feathers.controls.TabBar","tabBar_dataProvider_replaceItemHandler",0x0a6eb53c,"feathers.controls.TabBar.tabBar_dataProvider_replaceItemHandler","feathers/controls/TabBar.hx",1083,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1095_tabBar_dataProvider_removeAllHandler,"feathers.controls.TabBar","tabBar_dataProvider_removeAllHandler",0xedbadfe6,"feathers.controls.TabBar.tabBar_dataProvider_removeAllHandler","feathers/controls/TabBar.hx",1095,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1100_tabBar_dataProvider_resetHandler,"feathers.controls.TabBar","tabBar_dataProvider_resetHandler",0xd822e314,"feathers.controls.TabBar.tabBar_dataProvider_resetHandler","feathers/controls/TabBar.hx",1100,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1104_tabBar_dataProvider_sortChangeHandler,"feathers.controls.TabBar","tabBar_dataProvider_sortChangeHandler",0x69b3ca03,"feathers.controls.TabBar.tabBar_dataProvider_sortChangeHandler","feathers/controls/TabBar.hx",1104,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1108_tabBar_dataProvider_filterChangeHandler,"feathers.controls.TabBar","tabBar_dataProvider_filterChangeHandler",0xf5747129,"feathers.controls.TabBar.tabBar_dataProvider_filterChangeHandler","feathers/controls/TabBar.hx",1108,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1111_updateTabForIndex,"feathers.controls.TabBar","updateTabForIndex",0xd9a83f5f,"feathers.controls.TabBar.updateTabForIndex","feathers/controls/TabBar.hx",1111,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1131_tabBar_dataProvider_updateItemHandler,"feathers.controls.TabBar","tabBar_dataProvider_updateItemHandler",0xc35ae775,"feathers.controls.TabBar.tabBar_dataProvider_updateItemHandler","feathers/controls/TabBar.hx",1131,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_1135_tabBar_dataProvider_updateAllHandler,"feathers.controls.TabBar","tabBar_dataProvider_updateAllHandler",0x7dfd91eb,"feathers.controls.TabBar.tabBar_dataProvider_updateAllHandler","feathers/controls/TabBar.hx",1135,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_85_get_customTabVariant,"feathers.controls.TabBar","get_customTabVariant",0x45ce04e0,"feathers.controls.TabBar.get_customTabVariant","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_99_set_customTabVariant,"feathers.controls.TabBar","set_customTabVariant",0x1285bc54,"feathers.controls.TabBar.set_customTabVariant","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_125_clearStyle_customTabVariant,"feathers.controls.TabBar","clearStyle_customTabVariant",0xaf0a93e6,"feathers.controls.TabBar.clearStyle_customTabVariant","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_85_get_layout,"feathers.controls.TabBar","get_layout",0x245dc109,"feathers.controls.TabBar.get_layout","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_99_set_layout,"feathers.controls.TabBar","set_layout",0x27db5f7d,"feathers.controls.TabBar.set_layout","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_125_clearStyle_layout,"feathers.controls.TabBar","clearStyle_layout",0x188a6c8f,"feathers.controls.TabBar.clearStyle_layout","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_85_get_backgroundSkin,"feathers.controls.TabBar","get_backgroundSkin",0xda0c6eea,"feathers.controls.TabBar.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_99_set_backgroundSkin,"feathers.controls.TabBar","set_backgroundSkin",0xb6bba15e,"feathers.controls.TabBar.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_125_clearStyle_backgroundSkin,"feathers.controls.TabBar","clearStyle_backgroundSkin",0x85b91070,"feathers.controls.TabBar.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_85_get_disabledBackgroundSkin,"feathers.controls.TabBar","get_disabledBackgroundSkin",0xb61e5c86,"feathers.controls.TabBar.get_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_99_set_disabledBackgroundSkin,"feathers.controls.TabBar","set_disabledBackgroundSkin",0x15b322fa,"feathers.controls.TabBar.set_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef04ed1c854f9e7_125_clearStyle_disabledBackgroundSkin,"feathers.controls.TabBar","clearStyle_disabledBackgroundSkin",0x2b30f40c,"feathers.controls.TabBar.clearStyle_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_9d692dade35ee88b_42_get_styleContext,"feathers.controls.TabBar","get_styleContext",0xccb7345d,"feathers.controls.TabBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_108_defaultUpdateTab,"feathers.controls.TabBar","defaultUpdateTab",0xc77455e1,"feathers.controls.TabBar.defaultUpdateTab","feathers/controls/TabBar.hx",108,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_112_defaultResetTab,"feathers.controls.TabBar","defaultResetTab",0xfeab8f51,"feathers.controls.TabBar.defaultResetTab","feathers/controls/TabBar.hx",112,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_88_boot,"feathers.controls.TabBar","boot",0x3a7a7248,"feathers.controls.TabBar.boot","feathers/controls/TabBar.hx",88,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_89_boot,"feathers.controls.TabBar","boot",0x3a7a7248,"feathers.controls.TabBar.boot","feathers/controls/TabBar.hx",89,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_103_boot,"feathers.controls.TabBar","boot",0x3a7a7248,"feathers.controls.TabBar.boot","feathers/controls/TabBar.hx",103,0xc18603c6)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2be383da40aeda_105_boot,"feathers.controls.TabBar","boot",0x3a7a7248,"feathers.controls.TabBar.boot","feathers/controls/TabBar.hx",105,0xc18603c6)
namespace feathers{
namespace controls{

void TabBar_obj::__construct(::Dynamic dataProvider, ::Dynamic changeListener){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::data::TabBarItemState _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_398_new)
HXLINE( 398)			return  ::feathers::data::TabBarItemState_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_88_new)
HXLINE( 490)		this->_hx___disabledBackgroundSkin = null();
HXLINE( 470)		this->_hx___backgroundSkin = null();
HXLINE( 448)		this->_hx___layout = null();
HXLINE( 315)		this->_hx___customTabVariant = null();
HXLINE( 494)		this->_ignoreChildChanges = false;
HXLINE( 493)		this->_layoutResult =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
HXLINE( 492)		this->_layoutMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,null());
HXLINE( 451)		this->_backgroundSkinMeasurements = null();
HXLINE( 450)		this->_currentBackgroundSkin = null();
HXLINE( 402)		this->_ignoreSelectionChange = false;
HXLINE( 400)		this->_layoutItems = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 399)		this->_unrenderedData = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 398)		this->itemStatePool =  ::lime::utils::ObjectPool_feathers_data_TabBarItemState_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()),null(),null());
HXLINE( 397)		this->tabToItemState =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 396)		this->dataToTab =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 395)		this->_additionalStorage = null();
HXLINE( 394)		this->_defaultStorage =  ::feathers::controls::_TabBar::TabStorage_obj::__alloc( HX_CTX ,null(),::feathers::utils::DisplayObjectRecycler_obj::withClass(::hx::ClassOf< ::feathers::controls::ToggleButton >(),null(),null(),null()));
HXLINE( 345)		this->_recyclerMap = null();
HXLINE( 300)		this->_previousCustomTabVariant = null();
HXLINE( 267)		this->_selectedItem = null();
HXLINE( 223)		this->_selectedIndex = -1;
HXLINE( 137)		this->_dataProvider = null();
HXLINE( 121)		this->initializeTabBarTheme();
HXLINE( 123)		super::__construct();
HXLINE( 125)		this->set_dataProvider(dataProvider);
HXLINE( 127)		this->set_tabEnabled(true);
HXLINE( 128)		this->set_tabChildren(false);
HXLINE( 130)		this->addEventListener(HX_("keyDown",a1,69,47,9c),this->tabBar_keyDownHandler_dyn(),null(),null(),null());
HXLINE( 132)		if (::hx::IsNotNull( changeListener )) {
HXLINE( 133)			this->addEventListener(HX_("change",70,91,72,b7),changeListener,null(),null(),null());
            		}
            	}

Dynamic TabBar_obj::__CreateEmpty() { return new TabBar_obj; }

void *TabBar_obj::_hx_vtable = 0;

Dynamic TabBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBar_obj > _hx_result = new TabBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TabBar_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x1654caa8 || inClassId==(int)0x1f4df417;
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

static ::openfl::events::IEventDispatcher_obj _hx_feathers_controls_TabBar__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::TabBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::willTrigger,
};

static ::feathers::core::IDataSelector_obj _hx_feathers_controls_TabBar__hx_feathers_core_IDataSelector= {
	(  ::Dynamic (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_selectedItem,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::controls::TabBar_obj::set_selectedItem,
};

static ::feathers::core::IFocusObject_obj _hx_feathers_controls_TabBar__hx_feathers_core_IFocusObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::TabBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::TabBar_obj::set_visible,
	( bool (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_focusEnabled,
	( bool (::hx::Object::*)(bool))&::feathers::controls::TabBar_obj::set_focusEnabled,
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_focusOwner,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::TabBar_obj::set_focusOwner,
	( void (::hx::Object::*)(bool))&::feathers::controls::TabBar_obj::showFocus,
};

static ::feathers::core::IFocusManagerAware_obj _hx_feathers_controls_TabBar__hx_feathers_core_IFocusManagerAware= {
	( ::Dynamic (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_focusManager,
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::controls::TabBar_obj::set_focusManager,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_controls_TabBar__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::controls::TabBar_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::controls::TabBar_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::controls::TabBar_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::controls::TabBar_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::controls::TabBar_obj::set_visible,
};

static ::feathers::core::IIndexSelector_obj _hx_feathers_controls_TabBar__hx_feathers_core_IIndexSelector= {
	( int (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_selectedIndex,
	( int (::hx::Object::*)(int))&::feathers::controls::TabBar_obj::set_selectedIndex,
	( int (::hx::Object::*)())&::feathers::controls::TabBar_obj::get_maxSelectedIndex,
};

void *TabBar_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_controls_TabBar__hx_openfl_events_IEventDispatcher;
		case (int)0xe7e1ba63: return &_hx_feathers_controls_TabBar__hx_feathers_core_IDataSelector;
		case (int)0x701686fd: return &_hx_feathers_controls_TabBar__hx_feathers_core_IFocusObject;
		case (int)0x7031642f: return &_hx_feathers_controls_TabBar__hx_feathers_core_IFocusManagerAware;
		case (int)0x3a979a67: return &_hx_feathers_controls_TabBar__hx_feathers_core_IDisplayObject;
		case (int)0xe0b54c17: return &_hx_feathers_controls_TabBar__hx_feathers_core_IIndexSelector;
	}
	return super::_hx_getInterface(inHash);
}

::Dynamic TabBar_obj::get_dataProvider(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_174_get_dataProvider)
HXDLIN( 174)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_dataProvider,return )

::Dynamic TabBar_obj::set_dataProvider(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_177_set_dataProvider)
HXLINE( 178)		if (::hx::IsInstanceEq( this->_dataProvider,value )) {
HXLINE( 179)			return this->_dataProvider;
            		}
HXLINE( 181)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 182)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("change",70,91,72,b7),this->tabBar_dataProvider_changeHandler_dyn(),null());
HXLINE( 183)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("addItem",d4,07,fd,81),this->tabBar_dataProvider_addItemHandler_dyn(),null());
HXLINE( 184)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("removeItem",77,ff,de,c2),this->tabBar_dataProvider_removeItemHandler_dyn(),null());
HXLINE( 185)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("replaceItem",67,63,5b,5a),this->tabBar_dataProvider_replaceItemHandler_dyn(),null());
HXLINE( 186)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("removeAll",3d,17,e5,ca),this->tabBar_dataProvider_removeAllHandler_dyn(),null());
HXLINE( 187)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("reset",cf,49,c8,e6),this->tabBar_dataProvider_resetHandler_dyn(),null());
HXLINE( 188)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("sortChange",6e,07,58,14),this->tabBar_dataProvider_sortChangeHandler_dyn(),null());
HXLINE( 189)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("filterChange",48,bf,ca,c3),this->tabBar_dataProvider_filterChangeHandler_dyn(),null());
HXLINE( 190)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("updateItem",bc,af,74,fe),this->tabBar_dataProvider_updateItemHandler_dyn(),null());
HXLINE( 191)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_dataProvider,HX_("updateAll",98,d6,d6,82),this->tabBar_dataProvider_updateAllHandler_dyn(),null());
            		}
HXLINE( 193)		int oldSelectedIndex = this->_selectedIndex;
HXLINE( 194)		 ::Dynamic oldSelectedItem = this->_selectedItem;
HXLINE( 195)		this->_dataProvider = value;
HXLINE( 196)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 197)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("change",70,91,72,b7),this->tabBar_dataProvider_changeHandler_dyn(),null(),null(),null());
HXLINE( 198)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("addItem",d4,07,fd,81),this->tabBar_dataProvider_addItemHandler_dyn(),null(),null(),null());
HXLINE( 199)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("removeItem",77,ff,de,c2),this->tabBar_dataProvider_removeItemHandler_dyn(),null(),null(),null());
HXLINE( 200)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("replaceItem",67,63,5b,5a),this->tabBar_dataProvider_replaceItemHandler_dyn(),null(),null(),null());
HXLINE( 201)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("removeAll",3d,17,e5,ca),this->tabBar_dataProvider_removeAllHandler_dyn(),null(),null(),null());
HXLINE( 202)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("reset",cf,49,c8,e6),this->tabBar_dataProvider_resetHandler_dyn(),null(),null(),null());
HXLINE( 203)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("sortChange",6e,07,58,14),this->tabBar_dataProvider_sortChangeHandler_dyn(),null(),null(),null());
HXLINE( 204)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("filterChange",48,bf,ca,c3),this->tabBar_dataProvider_filterChangeHandler_dyn(),null(),null(),null());
HXLINE( 205)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("updateItem",bc,af,74,fe),this->tabBar_dataProvider_updateItemHandler_dyn(),null(),null(),null());
HXLINE( 206)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_dataProvider,HX_("updateAll",98,d6,d6,82),this->tabBar_dataProvider_updateAllHandler_dyn(),null(),null(),null());
            		}
HXLINE( 208)		bool _hx_tmp;
HXDLIN( 208)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 208)			_hx_tmp = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0);
            		}
            		else {
HXLINE( 208)			_hx_tmp = true;
            		}
HXDLIN( 208)		if (_hx_tmp) {
HXLINE( 209)			this->_selectedIndex = -1;
HXLINE( 210)			this->_selectedItem = null();
            		}
            		else {
HXLINE( 212)			this->_selectedIndex = 0;
HXLINE( 213)			this->_selectedItem = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,0);
            		}
HXLINE( 215)		bool _hx_tmp1;
HXDLIN( 215)		if ((this->_selectedIndex == oldSelectedIndex)) {
HXLINE( 215)			_hx_tmp1 = ::hx::IsNotEq( this->_selectedItem,oldSelectedItem );
            		}
            		else {
HXLINE( 215)			_hx_tmp1 = true;
            		}
HXDLIN( 215)		if (_hx_tmp1) {
HXLINE( 216)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 217)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
HXLINE( 219)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 220)		return this->_dataProvider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_dataProvider,return )

int TabBar_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_231_get_selectedIndex)
HXDLIN( 231)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_234_set_selectedIndex)
HXLINE( 235)		if (::hx::IsNull( this->_dataProvider )) {
HXLINE( 236)			value = -1;
            		}
HXLINE( 238)		if ((this->_selectedIndex == value)) {
HXLINE( 239)			return this->_selectedIndex;
            		}
HXLINE( 241)		if ((value == -1)) {
HXLINE( 242)			this->_selectedIndex = -1;
HXLINE( 243)			this->_selectedItem = null();
HXLINE( 244)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 245)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 246)			return this->_selectedIndex;
            		}
HXLINE( 248)		this->_selectedIndex = value;
HXLINE( 249)		this->_selectedItem = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,this->_selectedIndex);
HXLINE( 250)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 251)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 252)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

int TabBar_obj::get_maxSelectedIndex(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_260_get_maxSelectedIndex)
HXLINE( 261)		if (::hx::IsNull( this->_dataProvider )) {
HXLINE( 262)			return -1;
            		}
HXLINE( 264)		return (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_maxSelectedIndex,return )

 ::Dynamic TabBar_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_275_get_selectedItem)
HXDLIN( 275)		return this->_selectedItem;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedItem,return )

 ::Dynamic TabBar_obj::set_selectedItem( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_278_set_selectedItem)
HXLINE( 279)		bool _hx_tmp;
HXDLIN( 279)		if (::hx::IsNotNull( value )) {
HXLINE( 279)			_hx_tmp = ::hx::IsNull( this->_dataProvider );
            		}
            		else {
HXLINE( 279)			_hx_tmp = true;
            		}
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 281)			this->set_selectedIndex(-1);
HXLINE( 282)			return this->_selectedItem;
            		}
HXLINE( 284)		int index = ::feathers::data::IFlatCollection_obj::indexOf(this->_dataProvider,value);
HXLINE( 285)		if ((index == -1)) {
HXLINE( 287)			this->set_selectedIndex(-1);
HXLINE( 288)			return this->_selectedItem;
            		}
HXLINE( 290)		bool _hx_tmp1;
HXDLIN( 290)		if (::hx::IsEq( this->_selectedItem,value )) {
HXLINE( 290)			_hx_tmp1 = (this->_selectedIndex == index);
            		}
            		else {
HXLINE( 290)			_hx_tmp1 = false;
            		}
HXDLIN( 290)		if (_hx_tmp1) {
HXLINE( 291)			return this->_selectedItem;
            		}
HXLINE( 293)		this->_selectedIndex = index;
HXLINE( 294)		this->_selectedItem = value;
HXLINE( 295)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 296)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 297)		return this->_selectedItem;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedItem,return )

 ::feathers::utils::DisplayObjectRecycler TabBar_obj::get_tabRecycler(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_331_get_tabRecycler)
HXDLIN( 331)		return this->_defaultStorage->tabRecycler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabRecycler,return )

 ::feathers::utils::DisplayObjectRecycler TabBar_obj::set_tabRecycler( ::feathers::utils::DisplayObjectRecycler value){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_335_set_tabRecycler)
HXLINE( 336)		if (::hx::IsInstanceEq( this->_defaultStorage->tabRecycler,value )) {
HXLINE( 337)			return this->_defaultStorage->tabRecycler;
            		}
HXLINE( 339)		this->_defaultStorage->oldTabRecycler = this->_defaultStorage->tabRecycler;
HXLINE( 340)		this->_defaultStorage->tabRecycler = value;
HXLINE( 341)		this->setInvalid(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
HXLINE( 342)		return this->_defaultStorage->tabRecycler;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabRecycler,return )

 ::Dynamic TabBar_obj::get_tabRecyclerIDFunction(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_382_get_tabRecyclerIDFunction)
HXDLIN( 382)		return this->_tabRecyclerIDFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabRecyclerIDFunction,return )

 ::Dynamic TabBar_obj::set_tabRecyclerIDFunction( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_385_set_tabRecyclerIDFunction)
HXLINE( 386)		if (::hx::IsEq( this->_tabRecyclerIDFunction,value )) {
HXLINE( 387)			return this->_tabRecyclerIDFunction;
            		}
HXLINE( 389)		this->_tabRecyclerIDFunction = value;
HXLINE( 390)		this->setInvalid(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
HXLINE( 391)		return this->_tabRecyclerIDFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabRecyclerIDFunction,return )

HX_BEGIN_DEFAULT_FUNC(__default_itemToText,TabBar_obj)
::String _hx_run( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_427___default_itemToText)
HXDLIN( 427)		return ::Std_obj::string(data);
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

 ::feathers::controls::ToggleButton TabBar_obj::itemToTab( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_503_itemToTab)
HXDLIN( 503)		return ( ( ::feathers::controls::ToggleButton)(this->dataToTab->get(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,itemToTab,return )

 ::feathers::controls::ToggleButton TabBar_obj::indexToTab(int index){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_513_indexToTab)
HXLINE( 514)		bool _hx_tmp;
HXDLIN( 514)		bool _hx_tmp1;
HXDLIN( 514)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 514)			_hx_tmp1 = (index < 0);
            		}
            		else {
HXLINE( 514)			_hx_tmp1 = true;
            		}
HXDLIN( 514)		if (!(_hx_tmp1)) {
HXLINE( 514)			_hx_tmp = (index >= ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider));
            		}
            		else {
HXLINE( 514)			_hx_tmp = true;
            		}
HXDLIN( 514)		if (_hx_tmp) {
HXLINE( 515)			return null();
            		}
HXLINE( 517)		 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,index);
HXLINE( 518)		return ( ( ::feathers::controls::ToggleButton)(this->dataToTab->get(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,indexToTab,return )

 ::feathers::utils::DisplayObjectRecycler TabBar_obj::getTabRecycler(::String id){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_530_getTabRecycler)
HXLINE( 531)		if (::hx::IsNull( this->_recyclerMap )) {
HXLINE( 532)			return null();
            		}
HXLINE( 534)		return ( ( ::feathers::utils::DisplayObjectRecycler)(this->_recyclerMap->get(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,getTabRecycler,return )

void TabBar_obj::setTabRecycler(::String id, ::feathers::utils::DisplayObjectRecycler recycler){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_550_setTabRecycler)
HXLINE( 551)		if (::hx::IsNull( this->_recyclerMap )) {
HXLINE( 552)			this->_recyclerMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 554)		if (::hx::IsNull( recycler )) {
HXLINE( 555)			this->_recyclerMap->remove(id);
HXLINE( 556)			return;
            		}
HXLINE( 558)		this->_recyclerMap->set(id,recycler);
HXLINE( 559)		this->setInvalid(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,setTabRecycler,(void))

void TabBar_obj::initializeTabBarTheme(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_563_initializeTabBarTheme)
HXDLIN( 563)		::feathers::themes::steel::components::SteelTabBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,initializeTabBarTheme,(void))

void TabBar_obj::update(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_566_update)
HXLINE( 567)		bool dataInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE( 568)		bool layoutInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 569)		bool selectionInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SELECTION_dyn());
HXLINE( 570)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 571)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 572)		::String _hx_tmp = this->_previousCustomTabVariant;
HXDLIN( 572)		if ((_hx_tmp != this->get_customTabVariant())) {
HXLINE( 573)			this->setInvalidationFlag(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
            		}
HXLINE( 575)		bool tabsInvalid = this->isInvalid(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
HXLINE( 577)		bool _hx_tmp1;
HXDLIN( 577)		if (!(stylesInvalid)) {
HXLINE( 577)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 577)			_hx_tmp1 = true;
            		}
HXDLIN( 577)		if (_hx_tmp1) {
HXLINE( 578)			this->refreshBackgroundSkin();
            		}
HXLINE( 581)		bool _hx_tmp2;
HXDLIN( 581)		bool _hx_tmp3;
HXDLIN( 581)		bool _hx_tmp4;
HXDLIN( 581)		if (!(tabsInvalid)) {
HXLINE( 581)			_hx_tmp4 = selectionInvalid;
            		}
            		else {
HXLINE( 581)			_hx_tmp4 = true;
            		}
HXDLIN( 581)		if (!(_hx_tmp4)) {
HXLINE( 581)			_hx_tmp3 = stateInvalid;
            		}
            		else {
HXLINE( 581)			_hx_tmp3 = true;
            		}
HXDLIN( 581)		if (!(_hx_tmp3)) {
HXLINE( 581)			_hx_tmp2 = dataInvalid;
            		}
            		else {
HXLINE( 581)			_hx_tmp2 = true;
            		}
HXDLIN( 581)		if (_hx_tmp2) {
HXLINE( 582)			this->refreshTabs();
            		}
HXLINE( 585)		this->refreshViewPortBounds();
HXLINE( 586)		this->handleLayout();
HXLINE( 587)		this->handleLayoutResult();
HXLINE( 589)		this->layoutBackgroundSkin();
HXLINE( 592)		this->validateChildren();
HXLINE( 594)		this->_previousCustomTabVariant = this->get_customTabVariant();
            	}


void TabBar_obj::refreshViewPortBounds(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_598_refreshViewPortBounds)
HXDLIN( 598)		this->_layoutMeasurements->save(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,refreshViewPortBounds,(void))

void TabBar_obj::handleLayout(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_601_handleLayout)
HXLINE( 602)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 603)		this->_ignoreChildChanges = true;
HXLINE( 604)		this->_layoutResult->reset();
HXLINE( 605)		if (::hx::IsNotNull( this->get_layout() )) {
HXLINE( 606)			::feathers::layout::ILayout_obj::layout(this->get_layout(),this->_layoutItems,this->_layoutMeasurements,this->_layoutResult);
            		}
HXLINE( 608)		this->_ignoreChildChanges = oldIgnoreChildChanges;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,handleLayout,(void))

void TabBar_obj::handleLayoutResult(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_611_handleLayoutResult)
HXLINE( 612)		Float viewPortWidth = this->_layoutResult->viewPortWidth;
HXLINE( 613)		Float viewPortHeight = this->_layoutResult->viewPortHeight;
HXLINE( 614)		this->saveMeasurements(viewPortWidth,viewPortHeight,viewPortWidth,viewPortHeight,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,handleLayoutResult,(void))

void TabBar_obj::validateChildren(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_618_validateChildren)
HXDLIN( 618)		int _g = 0;
HXDLIN( 618)		::Array< ::Dynamic> _g1 = this->_layoutItems;
HXDLIN( 618)		while((_g < _g1->length)){
HXDLIN( 618)			 ::openfl::display::DisplayObject tab = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 618)			_g = (_g + 1);
HXLINE( 619)			if (!(::Std_obj::isOfType(tab,::hx::ClassOf< ::feathers::core::IValidating >()))) {
HXLINE( 620)				return;
            			}
HXLINE( 622)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(tab,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,validateChildren,(void))

void TabBar_obj::refreshTabs(){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_626_refreshTabs)
HXLINE( 627)		if (::hx::IsNull( this->get_tabRecycler()->update )) {
HXLINE( 628)			this->get_tabRecycler()->update = ::feathers::controls::TabBar_obj::defaultUpdateTab_dyn();
HXLINE( 629)			if (::hx::IsNull( this->get_tabRecycler()->reset )) {
HXLINE( 630)				this->get_tabRecycler()->reset = ::feathers::controls::TabBar_obj::defaultResetTab_dyn();
            			}
            		}
HXLINE( 633)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 634)			int _g = 0;
HXDLIN( 634)			int _g1 = this->_additionalStorage->length;
HXDLIN( 634)			while((_g < _g1)){
HXLINE( 634)				_g = (_g + 1);
HXDLIN( 634)				int i = (_g - 1);
HXLINE( 635)				 ::feathers::controls::_TabBar::TabStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_TabBar::TabStorage >();
HXLINE( 636)				if (::hx::IsNull( storage->tabRecycler->update )) {
HXLINE( 637)					storage->tabRecycler->update = ::feathers::controls::TabBar_obj::defaultUpdateTab_dyn();
HXLINE( 638)					if (::hx::IsNull( storage->tabRecycler->reset )) {
HXLINE( 639)						storage->tabRecycler->reset = ::feathers::controls::TabBar_obj::defaultResetTab_dyn();
            					}
            				}
            			}
            		}
HXLINE( 645)		bool tabsInvalid = this->isInvalid(::feathers::controls::TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY);
HXLINE( 646)		this->refreshInactiveTabs(this->_defaultStorage,tabsInvalid);
HXLINE( 647)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 648)			int _g = 0;
HXDLIN( 648)			int _g1 = this->_additionalStorage->length;
HXDLIN( 648)			while((_g < _g1)){
HXLINE( 648)				_g = (_g + 1);
HXDLIN( 648)				int i = (_g - 1);
HXLINE( 649)				 ::feathers::controls::_TabBar::TabStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_TabBar::TabStorage >();
HXLINE( 650)				this->refreshInactiveTabs(storage,tabsInvalid);
            			}
            		}
HXLINE( 653)		this->findUnrenderedData();
HXLINE( 654)		this->recoverInactiveTabs(this->_defaultStorage);
HXLINE( 655)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 656)			int _g = 0;
HXDLIN( 656)			int _g1 = this->_additionalStorage->length;
HXDLIN( 656)			while((_g < _g1)){
HXLINE( 656)				_g = (_g + 1);
HXDLIN( 656)				int i = (_g - 1);
HXLINE( 657)				 ::feathers::controls::_TabBar::TabStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_TabBar::TabStorage >();
HXLINE( 658)				this->recoverInactiveTabs(storage);
            			}
            		}
HXLINE( 661)		this->renderUnrenderedData();
HXLINE( 662)		this->freeInactiveTabs(this->_defaultStorage);
HXLINE( 663)		if ((this->_defaultStorage->inactiveTabs->length > 0)) {
HXLINE( 664)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": inactive tabs should be empty after updating.",8e,81,4c,7f))));
            		}
HXLINE( 666)		if (::hx::IsNotNull( this->_additionalStorage )) {
HXLINE( 667)			int _g = 0;
HXDLIN( 667)			int _g1 = this->_additionalStorage->length;
HXDLIN( 667)			while((_g < _g1)){
HXLINE( 667)				_g = (_g + 1);
HXDLIN( 667)				int i = (_g - 1);
HXLINE( 668)				 ::feathers::controls::_TabBar::TabStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_TabBar::TabStorage >();
HXLINE( 669)				this->freeInactiveTabs(storage);
HXLINE( 670)				if ((storage->inactiveTabs->length > 0)) {
HXLINE( 671)					::String _hx_tmp = ((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": inactive tabs ",93,8c,00,94));
HXDLIN( 671)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((_hx_tmp + storage->id) + HX_(" should be empty after updating.",a1,aa,db,3b))));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,refreshTabs,(void))

void TabBar_obj::refreshInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage,bool factoryInvalid){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_677_refreshInactiveTabs)
HXLINE( 678)		::Array< ::Dynamic> temp = storage->inactiveTabs;
HXLINE( 679)		storage->inactiveTabs = storage->activeTabs;
HXLINE( 680)		storage->activeTabs = temp;
HXLINE( 681)		if ((storage->activeTabs->length > 0)) {
HXLINE( 682)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": active tabs should be empty before updating.",38,10,9a,7c))));
            		}
HXLINE( 684)		if (factoryInvalid) {
HXLINE( 685)			this->recoverInactiveTabs(storage);
HXLINE( 686)			this->freeInactiveTabs(storage);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,refreshInactiveTabs,(void))

void TabBar_obj::recoverInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_691_recoverInactiveTabs)
HXDLIN( 691)		int _g = 0;
HXDLIN( 691)		::Array< ::Dynamic> _g1 = storage->inactiveTabs;
HXDLIN( 691)		while((_g < _g1->length)){
HXDLIN( 691)			 ::feathers::controls::ToggleButton tab = _g1->__get(_g).StaticCast<  ::feathers::controls::ToggleButton >();
HXDLIN( 691)			_g = (_g + 1);
HXLINE( 692)			if (::hx::IsNull( tab )) {
HXLINE( 693)				continue;
            			}
HXLINE( 695)			 ::feathers::data::TabBarItemState state = ( ( ::feathers::data::TabBarItemState)(this->tabToItemState->get(tab)) );
HXLINE( 696)			if (::hx::IsNull( state )) {
HXLINE( 697)				return;
            			}
HXLINE( 699)			 ::Dynamic item = state->data;
HXLINE( 700)			this->tabToItemState->remove(tab);
HXLINE( 701)			this->dataToTab->remove(item);
HXLINE( 702)			tab->removeEventListener(HX_("trigger",38,55,df,25),this->tabBar_tab_triggerHandler_dyn(),null());
HXLINE( 703)			tab->removeEventListener(HX_("change",70,91,72,b7),this->tabBar_tab_changeHandler_dyn(),null());
HXLINE( 704)			this->resetTab(tab,state);
HXLINE( 705)			this->itemStatePool->release(state);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,recoverInactiveTabs,(void))

void TabBar_obj::freeInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_709_freeInactiveTabs)
HXLINE( 710)		{
HXLINE( 710)			int _g = 0;
HXDLIN( 710)			::Array< ::Dynamic> _g1 = storage->inactiveTabs;
HXDLIN( 710)			while((_g < _g1->length)){
HXLINE( 710)				 ::feathers::controls::ToggleButton tab = _g1->__get(_g).StaticCast<  ::feathers::controls::ToggleButton >();
HXDLIN( 710)				_g = (_g + 1);
HXLINE( 711)				if (::hx::IsNull( tab )) {
HXLINE( 712)					continue;
            				}
HXLINE( 714)				this->destroyTab(tab);
            			}
            		}
HXLINE( 719)		storage->inactiveTabs->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,freeInactiveTabs,(void))

void TabBar_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_723_refreshBackgroundSkin)
HXLINE( 724)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 725)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 726)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 727)			return;
            		}
HXLINE( 729)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 730)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject TabBar_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_733_getCurrentBackgroundSkin)
HXLINE( 734)		bool _hx_tmp;
HXDLIN( 734)		if (!(this->_enabled)) {
HXLINE( 734)			_hx_tmp = ::hx::IsNotNull( this->get_disabledBackgroundSkin() );
            		}
            		else {
HXLINE( 734)			_hx_tmp = false;
            		}
HXDLIN( 734)		if (_hx_tmp) {
HXLINE( 735)			return this->get_disabledBackgroundSkin();
            		}
HXLINE( 737)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,getCurrentBackgroundSkin,return )

void TabBar_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_740_addCurrentBackgroundSkin)
HXLINE( 741)		if (::hx::IsNull( skin )) {
HXLINE( 742)			this->_backgroundSkinMeasurements = null();
HXLINE( 743)			return;
            		}
HXLINE( 745)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 746)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 748)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 749)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 751)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 753)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 754)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 756)		this->addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,addCurrentBackgroundSkin,(void))

void TabBar_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_759_removeCurrentBackgroundSkin)
HXLINE( 760)		if (::hx::IsNull( skin )) {
HXLINE( 761)			return;
            		}
HXLINE( 763)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 764)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 768)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 769)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 770)			this->removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,removeCurrentBackgroundSkin,(void))

void TabBar_obj::layoutBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_774_layoutBackgroundSkin)
HXLINE( 775)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 776)			return;
            		}
HXLINE( 778)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 779)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 784)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 784)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 785)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 787)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 787)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 788)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 790)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 791)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,layoutBackgroundSkin,(void))

void TabBar_obj::findUnrenderedData(){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_795_findUnrenderedData)
HXLINE( 800)		this->_layoutItems->resize(0);
HXLINE( 802)		bool _hx_tmp;
HXDLIN( 802)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 802)			_hx_tmp = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0);
            		}
            		else {
HXLINE( 802)			_hx_tmp = true;
            		}
HXDLIN( 802)		if (_hx_tmp) {
HXLINE( 803)			return;
            		}
HXLINE( 805)		::Array< ::Dynamic> _hx_tmp1 = this->_layoutItems;
HXDLIN( 805)		_hx_tmp1->resize(::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider));
HXLINE( 807)		int depthOffset;
HXDLIN( 807)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 807)			depthOffset = 1;
            		}
            		else {
HXLINE( 807)			depthOffset = 0;
            		}
HXLINE( 808)		{
HXLINE( 808)			int _g = 0;
HXDLIN( 808)			int _g1 = ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider);
HXDLIN( 808)			while((_g < _g1)){
HXLINE( 808)				_g = (_g + 1);
HXDLIN( 808)				int i = (_g - 1);
HXLINE( 809)				 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,i);
HXLINE( 810)				 ::feathers::controls::ToggleButton tab = ( ( ::feathers::controls::ToggleButton)(this->dataToTab->get(item)) );
HXLINE( 811)				if (::hx::IsNotNull( tab )) {
HXLINE( 812)					 ::feathers::data::TabBarItemState state = ( ( ::feathers::data::TabBarItemState)(this->tabToItemState->get(tab)) );
HXLINE( 813)					this->populateCurrentItemState(item,i,state);
HXLINE( 814)					::String oldRecyclerID = state->recyclerID;
HXLINE( 815)					 ::feathers::controls::_TabBar::TabStorage storage = this->itemStateToStorage(state);
HXLINE( 816)					if ((storage->id != oldRecyclerID)) {
HXLINE( 817)						this->_unrenderedData->push(item);
HXLINE( 818)						continue;
            					}
HXLINE( 820)					this->updateTab(tab,state,storage);
HXLINE( 821)					this->_layoutItems[i] = tab;
HXLINE( 822)					this->setChildIndex(tab,(i + depthOffset));
HXLINE( 823)					bool removed = storage->inactiveTabs->remove(tab);
HXLINE( 824)					if (!(removed)) {
HXLINE( 825)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((((HX_("",00,00,00,00) + ::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this)))) + HX_(": tab renderer map contains bad data for item at index ",2f,87,1a,6d)) + i) + HX_(". This may be caused by duplicate items in the data provider, which is not allowed.",2a,50,89,94))));
            					}
HXLINE( 827)					storage->activeTabs->push(tab);
            				}
            				else {
HXLINE( 829)					this->_unrenderedData->push(item);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,findUnrenderedData,(void))

void TabBar_obj::renderUnrenderedData(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_834_renderUnrenderedData)
HXLINE( 835)		int depthOffset;
HXDLIN( 835)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 835)			depthOffset = 1;
            		}
            		else {
HXLINE( 835)			depthOffset = 0;
            		}
HXLINE( 836)		{
HXLINE( 836)			int _g = 0;
HXDLIN( 836)			::cpp::VirtualArray _g1 = this->_unrenderedData;
HXDLIN( 836)			while((_g < _g1->get_length())){
HXLINE( 836)				 ::Dynamic item = _g1->__get(_g);
HXDLIN( 836)				_g = (_g + 1);
HXLINE( 837)				int index = ::feathers::data::IFlatCollection_obj::indexOf(this->_dataProvider,item);
HXLINE( 838)				 ::feathers::data::TabBarItemState state = this->itemStatePool->get();
HXLINE( 839)				this->populateCurrentItemState(item,index,state);
HXLINE( 840)				 ::feathers::controls::ToggleButton tab = this->createTab(state);
HXLINE( 841)				this->addChildAt(tab,(index + depthOffset));
HXLINE( 842)				this->_layoutItems[index] = tab;
            			}
            		}
HXLINE( 847)		this->_unrenderedData->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,renderUnrenderedData,(void))

 ::feathers::controls::ToggleButton TabBar_obj::createTab( ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_851_createTab)
HXLINE( 852)		 ::feathers::controls::_TabBar::TabStorage storage = this->itemStateToStorage(state);
HXLINE( 853)		 ::feathers::controls::ToggleButton tab = null();
HXLINE( 854)		if ((storage->inactiveTabs->length == 0)) {
HXLINE( 855)			tab = ( ( ::feathers::controls::ToggleButton)(this->get_tabRecycler()->create()) );
HXLINE( 856)			if (::hx::IsNull( tab->get_variant() )) {
HXLINE( 858)				::String variant;
HXDLIN( 858)				if (::hx::IsNotNull( this->get_customTabVariant() )) {
HXLINE( 858)					variant = this->get_customTabVariant();
            				}
            				else {
HXLINE( 858)					variant = ::feathers::controls::TabBar_obj::CHILD_VARIANT_TAB;
            				}
HXLINE( 859)				tab->set_variant(variant);
            			}
HXLINE( 863)			tab->initializeNow();
            		}
            		else {
HXLINE( 865)			tab = storage->inactiveTabs->shift().StaticCast<  ::feathers::controls::ToggleButton >();
            		}
HXLINE( 867)		this->updateTab(tab,state,storage);
HXLINE( 868)		tab->addEventListener(HX_("trigger",38,55,df,25),this->tabBar_tab_triggerHandler_dyn(),null(),null(),null());
HXLINE( 869)		tab->addEventListener(HX_("change",70,91,72,b7),this->tabBar_tab_changeHandler_dyn(),null(),null(),null());
HXLINE( 870)		this->tabToItemState->set(tab,state);
HXLINE( 871)		this->dataToTab->set(state->data,tab);
HXLINE( 872)		storage->activeTabs->push(tab);
HXLINE( 873)		return tab;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,createTab,return )

void TabBar_obj::destroyTab( ::feathers::controls::ToggleButton tab){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_876_destroyTab)
HXLINE( 877)		this->removeChild(tab);
HXLINE( 878)		if (::hx::IsNotNull( this->get_tabRecycler()->destroy )) {
HXLINE( 879)			this->get_tabRecycler()->destroy(tab);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,destroyTab,(void))

 ::feathers::controls::_TabBar::TabStorage TabBar_obj::itemStateToStorage( ::feathers::data::TabBarItemState state){
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_883_itemStateToStorage)
HXLINE( 884)		::String recyclerID = null();
HXLINE( 885)		if (::hx::IsNotNull( this->_tabRecyclerIDFunction )) {
HXLINE( 886)			recyclerID = ( (::String)(this->_tabRecyclerIDFunction(state)) );
            		}
HXLINE( 888)		 ::feathers::utils::DisplayObjectRecycler recycler = null();
HXLINE( 889)		if (::hx::IsNotNull( recyclerID )) {
HXLINE( 890)			if (::hx::IsNotNull( this->_recyclerMap )) {
HXLINE( 891)				recycler = ( ( ::feathers::utils::DisplayObjectRecycler)(this->_recyclerMap->get(recyclerID)) );
            			}
HXLINE( 893)			if (::hx::IsNull( recycler )) {
HXLINE( 894)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,((HX_("Item renderer recycler ID \"",0e,89,74,61) + recyclerID) + HX_("\" is not registered.",e7,6a,df,d7))));
            			}
            		}
HXLINE( 897)		if (::hx::IsNull( recycler )) {
HXLINE( 898)			return this->_defaultStorage;
            		}
HXLINE( 900)		if (::hx::IsNull( this->_additionalStorage )) {
HXLINE( 901)			this->_additionalStorage = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 903)		{
HXLINE( 903)			int _g = 0;
HXDLIN( 903)			int _g1 = this->_additionalStorage->length;
HXDLIN( 903)			while((_g < _g1)){
HXLINE( 903)				_g = (_g + 1);
HXDLIN( 903)				int i = (_g - 1);
HXLINE( 904)				 ::feathers::controls::_TabBar::TabStorage storage = this->_additionalStorage->__get(i).StaticCast<  ::feathers::controls::_TabBar::TabStorage >();
HXLINE( 905)				if (::hx::IsInstanceEq( storage->tabRecycler,recycler )) {
HXLINE( 906)					return storage;
            				}
            			}
            		}
HXLINE( 909)		 ::feathers::controls::_TabBar::TabStorage storage =  ::feathers::controls::_TabBar::TabStorage_obj::__alloc( HX_CTX ,recyclerID,recycler);
HXLINE( 910)		this->_additionalStorage->push(storage);
HXLINE( 911)		return storage;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,itemStateToStorage,return )

void TabBar_obj::populateCurrentItemState( ::Dynamic item,int index, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_914_populateCurrentItemState)
HXLINE( 915)		state->owner = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 916)		state->data = item;
HXLINE( 917)		state->index = index;
HXLINE( 918)		state->selected = ::hx::IsEq( item,this->_selectedItem );
HXLINE( 919)		state->enabled = this->_enabled;
HXLINE( 920)		state->text = ( (::String)(this->itemToText(item)) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(TabBar_obj,populateCurrentItemState,(void))

void TabBar_obj::updateTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state, ::feathers::controls::_TabBar::TabStorage storage){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_923_updateTab)
HXLINE( 924)		state->recyclerID = storage->id;
HXLINE( 925)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 926)		this->_ignoreSelectionChange = true;
HXLINE( 927)		if (::hx::IsNotNull( this->get_tabRecycler()->update )) {
HXLINE( 928)			this->get_tabRecycler()->update(tab,state);
            		}
HXLINE( 930)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
HXLINE( 931)		this->refreshTabProperties(tab,state);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TabBar_obj,updateTab,(void))

void TabBar_obj::resetTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_934_resetTab)
HXLINE( 935)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 936)		this->_ignoreSelectionChange = true;
HXLINE( 937)		bool _hx_tmp;
HXDLIN( 937)		if (::hx::IsNotNull( this->get_tabRecycler() )) {
HXLINE( 937)			_hx_tmp = ::hx::IsNotNull( this->get_tabRecycler()->reset );
            		}
            		else {
HXLINE( 937)			_hx_tmp = false;
            		}
HXDLIN( 937)		if (_hx_tmp) {
HXLINE( 938)			this->get_tabRecycler()->reset(tab,state);
            		}
HXLINE( 940)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
HXLINE( 941)		this->refreshTabProperties(tab,::feathers::controls::TabBar_obj::RESET_TAB_STATE);
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,resetTab,(void))

void TabBar_obj::refreshTabProperties( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_944_refreshTabProperties)
HXLINE( 945)		bool oldIgnoreSelectionChange = this->_ignoreSelectionChange;
HXLINE( 946)		this->_ignoreSelectionChange = true;
HXLINE( 947)		if (::Std_obj::isOfType(tab,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 948)			::Dynamic uiControl =  ::hx::interface_check(tab,0x2696a04f);
HXLINE( 949)			::feathers::core::IUIControl_obj::set_enabled(uiControl,state->enabled);
            		}
HXLINE( 951)		if (::Std_obj::isOfType(tab,::hx::ClassOf< ::feathers::controls::dataRenderers::IDataRenderer >())) {
HXLINE( 952)			::Dynamic dataRenderer =  ::hx::interface_check(tab,0x70798096);
HXLINE( 954)			::feathers::controls::dataRenderers::IDataRenderer_obj::set_data(dataRenderer,state->data);
            		}
HXLINE( 956)		if (::Std_obj::isOfType(tab,::hx::ClassOf< ::feathers::layout::ILayoutIndexObject >())) {
HXLINE( 957)			::Dynamic layoutObject =  ::hx::interface_check(tab,0xe7561c78);
HXLINE( 958)			::feathers::layout::ILayoutIndexObject_obj::set_layoutIndex(layoutObject,state->index);
            		}
HXLINE( 960)		tab->set_selected(state->selected);
HXLINE( 961)		tab->set_enabled(state->enabled);
HXLINE( 962)		this->_ignoreSelectionChange = oldIgnoreSelectionChange;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,refreshTabProperties,(void))

void TabBar_obj::refreshSelectedIndicesAfterFilterOrSort(){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_965_refreshSelectedIndicesAfterFilterOrSort)
HXLINE( 966)		if ((this->_selectedIndex == -1)) {
HXLINE( 967)			return;
            		}
HXLINE( 971)		this->set_selectedIndex(::feathers::data::IFlatCollection_obj::indexOf(this->_dataProvider,this->_selectedItem));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,refreshSelectedIndicesAfterFilterOrSort,(void))

void TabBar_obj::navigateWithKeyboard( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_974_navigateWithKeyboard)
HXLINE( 975)		if (event->isDefaultPrevented()) {
HXLINE( 976)			return;
            		}
HXLINE( 978)		bool _hx_tmp;
HXDLIN( 978)		if (::hx::IsNotNull( this->_dataProvider )) {
HXLINE( 978)			_hx_tmp = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) == 0);
            		}
            		else {
HXLINE( 978)			_hx_tmp = true;
            		}
HXDLIN( 978)		if (_hx_tmp) {
HXLINE( 979)			return;
            		}
HXLINE( 981)		int result = this->_selectedIndex;
HXLINE( 982)		switch((int)(event->keyCode)){
            			case (int)33: {
HXLINE( 998)				result = (result - 1);
            			}
            			break;
            			case (int)34: {
HXLINE(1000)				result = (result + 1);
            			}
            			break;
            			case (int)35: {
HXLINE(1004)				result = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) - 1);
            			}
            			break;
            			case (int)36: {
HXLINE(1002)				result = 0;
            			}
            			break;
            			case (int)37: {
HXLINE( 994)				result = (result - 1);
            			}
            			break;
            			case (int)38: {
HXLINE( 984)				if ((event->keyLocation == 4)) {
HXLINE( 985)					return;
            				}
HXLINE( 987)				result = (result - 1);
            			}
            			break;
            			case (int)39: {
HXLINE( 996)				result = (result + 1);
            			}
            			break;
            			case (int)40: {
HXLINE( 989)				if ((event->keyLocation == 4)) {
HXLINE( 990)					return;
            				}
HXLINE( 992)				result = (result + 1);
            			}
            			break;
            			default:{
HXLINE(1007)				return;
            			}
            		}
HXLINE(1009)		if ((result < 0)) {
HXLINE(1010)			result = 0;
            		}
            		else {
HXLINE(1011)			if ((result >= ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider))) {
HXLINE(1012)				result = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) - 1);
            			}
            		}
HXLINE(1014)		event->preventDefault();
HXLINE(1016)		this->set_selectedIndex(result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,navigateWithKeyboard,(void))

void TabBar_obj::tabBar_keyDownHandler( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1019_tabBar_keyDownHandler)
HXLINE(1020)		if (!(this->_enabled)) {
HXLINE(1021)			return;
            		}
HXLINE(1023)		this->navigateWithKeyboard(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_keyDownHandler,(void))

void TabBar_obj::tabBar_tab_triggerHandler( ::feathers::events::TriggerEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1026_tabBar_tab_triggerHandler)
HXLINE(1027)		 ::feathers::controls::ToggleButton tab = ::hx::TCast<  ::feathers::controls::ToggleButton >::cast(event->currentTarget);
HXLINE(1028)		 ::feathers::data::TabBarItemState state = ( ( ::feathers::data::TabBarItemState)(this->tabToItemState->get(tab)) );
HXLINE(1029)		::feathers::events::TabBarEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("itemTrigger",65,d0,e1,83),state);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_tab_triggerHandler,(void))

void TabBar_obj::tabBar_tab_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1032_tabBar_tab_changeHandler)
HXLINE(1033)		if (this->_ignoreSelectionChange) {
HXLINE(1034)			return;
            		}
HXLINE(1036)		 ::feathers::controls::ToggleButton tab = ::hx::TCast<  ::feathers::controls::ToggleButton >::cast(event->currentTarget);
HXLINE(1037)		if (!(tab->get_selected())) {
HXLINE(1039)			tab->set_selected(true);
HXLINE(1040)			return;
            		}
HXLINE(1042)		 ::feathers::data::TabBarItemState state = ( ( ::feathers::data::TabBarItemState)(this->tabToItemState->get(tab)) );
HXLINE(1044)		this->set_selectedItem(state->data);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_tab_changeHandler,(void))

void TabBar_obj::tabBar_dataProvider_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1048_tabBar_dataProvider_changeHandler)
HXDLIN(1048)		this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_changeHandler,(void))

void TabBar_obj::tabBar_dataProvider_addItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1051_tabBar_dataProvider_addItemHandler)
HXLINE(1052)		if ((this->_selectedIndex == -1)) {
HXLINE(1053)			return;
            		}
HXLINE(1055)		if ((this->_selectedIndex >= event->index)) {
HXLINE(1056)			this->_selectedIndex++;
HXLINE(1057)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_addItemHandler,(void))

void TabBar_obj::tabBar_dataProvider_removeItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1061_tabBar_dataProvider_removeItemHandler)
HXLINE(1062)		if ((this->_selectedIndex == -1)) {
HXLINE(1063)			return;
            		}
HXLINE(1065)		if ((this->_selectedIndex == event->index)) {
HXLINE(1066)			int event1 = event->index;
HXDLIN(1066)			if ((event1 == ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider))) {
HXLINE(1068)				this->_selectedIndex = (::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider) - 1);
            			}
HXLINE(1070)			if ((this->_selectedIndex == -1)) {
HXLINE(1071)				this->_selectedItem = null();
            			}
            			else {
HXLINE(1073)				this->_selectedItem = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,this->_selectedIndex);
            			}
HXLINE(1075)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            		else {
HXLINE(1076)			if ((this->_selectedIndex > event->index)) {
HXLINE(1077)				this->_selectedIndex--;
HXLINE(1079)				::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_removeItemHandler,(void))

void TabBar_obj::tabBar_dataProvider_replaceItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1083_tabBar_dataProvider_replaceItemHandler)
HXLINE(1084)		if ((this->_selectedIndex == -1)) {
HXLINE(1085)			return;
            		}
HXLINE(1087)		if ((this->_selectedIndex == event->index)) {
HXLINE(1088)			this->_selectedItem = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,this->_selectedIndex);
HXLINE(1089)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_replaceItemHandler,(void))

void TabBar_obj::tabBar_dataProvider_removeAllHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1095_tabBar_dataProvider_removeAllHandler)
HXDLIN(1095)		this->set_selectedIndex(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_removeAllHandler,(void))

void TabBar_obj::tabBar_dataProvider_resetHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1100_tabBar_dataProvider_resetHandler)
HXDLIN(1100)		this->set_selectedIndex(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_resetHandler,(void))

void TabBar_obj::tabBar_dataProvider_sortChangeHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1104_tabBar_dataProvider_sortChangeHandler)
HXDLIN(1104)		this->refreshSelectedIndicesAfterFilterOrSort();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_sortChangeHandler,(void))

void TabBar_obj::tabBar_dataProvider_filterChangeHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1108_tabBar_dataProvider_filterChangeHandler)
HXDLIN(1108)		this->refreshSelectedIndicesAfterFilterOrSort();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_filterChangeHandler,(void))

void TabBar_obj::updateTabForIndex(int index){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1111_updateTabForIndex)
HXLINE(1112)		 ::Dynamic item = ::feathers::data::IFlatCollection_obj::get(this->_dataProvider,index);
HXLINE(1113)		 ::feathers::controls::ToggleButton tab = ( ( ::feathers::controls::ToggleButton)(this->dataToTab->get(item)) );
HXLINE(1114)		if (::hx::IsNull( tab )) {
HXLINE(1116)			this->setInvalid(::feathers::core::InvalidationFlag_obj::DATA_dyn());
HXLINE(1117)			return;
            		}
HXLINE(1119)		 ::feathers::data::TabBarItemState state = ( ( ::feathers::data::TabBarItemState)(this->tabToItemState->get(tab)) );
HXLINE(1120)		 ::feathers::controls::_TabBar::TabStorage storage = this->itemStateToStorage(state);
HXLINE(1121)		this->populateCurrentItemState(item,index,state);
HXLINE(1125)		this->resetTab(tab,state);
HXLINE(1126)		this->updateTab(tab,state,storage);
HXLINE(1127)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,updateTabForIndex,(void))

void TabBar_obj::tabBar_dataProvider_updateItemHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1131_tabBar_dataProvider_updateItemHandler)
HXDLIN(1131)		this->updateTabForIndex(event->index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_updateItemHandler,(void))

void TabBar_obj::tabBar_dataProvider_updateAllHandler( ::feathers::events::FlatCollectionEvent event){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_1135_tabBar_dataProvider_updateAllHandler)
HXDLIN(1135)		int _g = 0;
HXDLIN(1135)		int _g1 = ::feathers::data::IFlatCollection_obj::get_length(this->_dataProvider);
HXDLIN(1135)		while((_g < _g1)){
HXDLIN(1135)			_g = (_g + 1);
HXDLIN(1135)			int i = (_g - 1);
HXLINE(1136)			this->updateTabForIndex(i);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabBar_dataProvider_updateAllHandler,(void))

::String TabBar_obj::get_customTabVariant(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_85_get_customTabVariant)
HXDLIN(  85)		return this->_hx___customTabVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_customTabVariant,return )

::String TabBar_obj::set_customTabVariant(::String value){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_99_set_customTabVariant)
HXLINE( 100)		if (!(this->setStyle(HX_("customTabVariant",c1,a5,d4,23),null()))) {
HXLINE( 101)			return this->_hx___customTabVariant;
            		}
HXLINE( 103)		if ((this->_hx___customTabVariant == value)) {
HXLINE( 104)			return this->_hx___customTabVariant;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_customTabVariant_dyn();
HXLINE( 110)		this->_hx___customTabVariant = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___customTabVariant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_customTabVariant,return )

::String TabBar_obj::clearStyle_customTabVariant(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_125_clearStyle_customTabVariant)
HXLINE( 126)		this->set_customTabVariant(null());
HXLINE( 127)		return this->get_customTabVariant();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,clearStyle_customTabVariant,return )

::Dynamic TabBar_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_85_get_layout)
HXDLIN(  85)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_layout,return )

::Dynamic TabBar_obj::set_layout(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_99_set_layout)
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


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_layout,return )

::Dynamic TabBar_obj::clearStyle_layout(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_125_clearStyle_layout)
HXLINE( 126)		this->set_layout(null());
HXLINE( 127)		return this->get_layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,clearStyle_layout,return )

 ::openfl::display::DisplayObject TabBar_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject TabBar_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_99_set_backgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject TabBar_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject TabBar_obj::get_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_85_get_disabledBackgroundSkin)
HXDLIN(  85)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject TabBar_obj::set_disabledBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_99_set_disabledBackgroundSkin)
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


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject TabBar_obj::clearStyle_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_3ef04ed1c854f9e7_125_clearStyle_disabledBackgroundSkin)
HXLINE( 126)		this->set_disabledBackgroundSkin(null());
HXLINE( 127)		return this->get_disabledBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,clearStyle_disabledBackgroundSkin,return )

::hx::Class TabBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_9d692dade35ee88b_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::TabBar >();
            	}


 ::feathers::core::InvalidationFlag TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY;

::String TabBar_obj::CHILD_VARIANT_TAB;

 ::feathers::data::TabBarItemState TabBar_obj::RESET_TAB_STATE;

void TabBar_obj::defaultUpdateTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_108_defaultUpdateTab)
HXDLIN( 108)		tab->set_text(state->text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,defaultUpdateTab,(void))

void TabBar_obj::defaultResetTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_112_defaultResetTab)
HXDLIN( 112)		tab->set_text(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,defaultResetTab,(void))


void TabBar_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,TabBar_obj *_hx_obj) {
	if (!_hx_obj->itemToText.mPtr) _hx_obj->itemToText = new __default_itemToText(_hx_obj);
}
::hx::ObjectPtr< TabBar_obj > TabBar_obj::__new(::Dynamic dataProvider, ::Dynamic changeListener) {
	::hx::ObjectPtr< TabBar_obj > __this = new TabBar_obj();
	__this->__construct(dataProvider,changeListener);
	return __this;
}

::hx::ObjectPtr< TabBar_obj > TabBar_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider, ::Dynamic changeListener) {
	TabBar_obj *__this = (TabBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBar_obj), true, "feathers.controls.TabBar"));
	*(void **)__this = TabBar_obj::_hx_vtable;
	feathers::controls::TabBar_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(dataProvider,changeListener);
	return __this;
}

TabBar_obj::TabBar_obj()
{
	itemToText = new __default_itemToText(this);
}

void TabBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBar);
	HX_MARK_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_selectedItem,"_selectedItem");
	HX_MARK_MEMBER_NAME(_previousCustomTabVariant,"_previousCustomTabVariant");
	HX_MARK_MEMBER_NAME(_recyclerMap,"_recyclerMap");
	HX_MARK_MEMBER_NAME(_tabRecyclerIDFunction,"_tabRecyclerIDFunction");
	HX_MARK_MEMBER_NAME(_defaultStorage,"_defaultStorage");
	HX_MARK_MEMBER_NAME(_additionalStorage,"_additionalStorage");
	HX_MARK_MEMBER_NAME(dataToTab,"dataToTab");
	HX_MARK_MEMBER_NAME(tabToItemState,"tabToItemState");
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
	HX_MARK_MEMBER_NAME(_hx___customTabVariant,"__customTabVariant");
	HX_MARK_MEMBER_NAME(_hx___layout,"__layout");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataProvider,"_dataProvider");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_selectedItem,"_selectedItem");
	HX_VISIT_MEMBER_NAME(_previousCustomTabVariant,"_previousCustomTabVariant");
	HX_VISIT_MEMBER_NAME(_recyclerMap,"_recyclerMap");
	HX_VISIT_MEMBER_NAME(_tabRecyclerIDFunction,"_tabRecyclerIDFunction");
	HX_VISIT_MEMBER_NAME(_defaultStorage,"_defaultStorage");
	HX_VISIT_MEMBER_NAME(_additionalStorage,"_additionalStorage");
	HX_VISIT_MEMBER_NAME(dataToTab,"dataToTab");
	HX_VISIT_MEMBER_NAME(tabToItemState,"tabToItemState");
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
	HX_VISIT_MEMBER_NAME(_hx___customTabVariant,"__customTabVariant");
	HX_VISIT_MEMBER_NAME(_hx___layout,"__layout");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resetTab") ) { return ::hx::Val( resetTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { return ::hx::Val( _hx___layout ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dataToTab") ) { return ::hx::Val( dataToTab ); }
		if (HX_FIELD_EQ(inName,"itemToTab") ) { return ::hx::Val( itemToTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTab") ) { return ::hx::Val( createTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTab") ) { return ::hx::Val( updateTab_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemToText") ) { return ::hx::Val( itemToText ); }
		if (HX_FIELD_EQ(inName,"indexToTab") ) { return ::hx::Val( indexToTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyTab") ) { return ::hx::Val( destroyTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabRecycler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabRecycler() ); }
		if (HX_FIELD_EQ(inName,"refreshTabs") ) { return ::hx::Val( refreshTabs_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataProvider() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"_recyclerMap") ) { return ::hx::Val( _recyclerMap ); }
		if (HX_FIELD_EQ(inName,"_layoutItems") ) { return ::hx::Val( _layoutItems ); }
		if (HX_FIELD_EQ(inName,"handleLayout") ) { return ::hx::Val( handleLayout_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { return ::hx::Val( _dataProvider ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		if (HX_FIELD_EQ(inName,"_selectedItem") ) { return ::hx::Val( _selectedItem ); }
		if (HX_FIELD_EQ(inName,"itemStatePool") ) { return ::hx::Val( itemStatePool ); }
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { return ::hx::Val( _layoutResult ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return ::hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"tabToItemState") ) { return ::hx::Val( tabToItemState ); }
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"getTabRecycler") ) { return ::hx::Val( getTabRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTabRecycler") ) { return ::hx::Val( setTabRecycler_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_tabRecycler") ) { return ::hx::Val( get_tabRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabRecycler") ) { return ::hx::Val( set_tabRecycler_dyn() ); }
		if (HX_FIELD_EQ(inName,"_defaultStorage") ) { return ::hx::Val( _defaultStorage ); }
		if (HX_FIELD_EQ(inName,"_unrenderedData") ) { return ::hx::Val( _unrenderedData ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dataProvider") ) { return ::hx::Val( get_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataProvider") ) { return ::hx::Val( set_dataProvider_dyn() ); }
		if (HX_FIELD_EQ(inName,"maxSelectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSelectedIndex() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"customTabVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_customTabVariant() ); }
		if (HX_FIELD_EQ(inName,"validateChildren") ) { return ::hx::Val( validateChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"freeInactiveTabs") ) { return ::hx::Val( freeInactiveTabs_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTabForIndex") ) { return ::hx::Val( updateTabForIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layout") ) { return ::hx::Val( clearStyle_layout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_additionalStorage") ) { return ::hx::Val( _additionalStorage ); }
		if (HX_FIELD_EQ(inName,"handleLayoutResult") ) { return ::hx::Val( handleLayoutResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"findUnrenderedData") ) { return ::hx::Val( findUnrenderedData_dyn() ); }
		if (HX_FIELD_EQ(inName,"itemStateToStorage") ) { return ::hx::Val( itemStateToStorage_dyn() ); }
		if (HX_FIELD_EQ(inName,"__customTabVariant") ) { return ::hx::Val( _hx___customTabVariant ); }
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { return ::hx::Val( _layoutMeasurements ); }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { return ::hx::Val( _ignoreChildChanges ); }
		if (HX_FIELD_EQ(inName,"refreshInactiveTabs") ) { return ::hx::Val( refreshInactiveTabs_dyn() ); }
		if (HX_FIELD_EQ(inName,"recoverInactiveTabs") ) { return ::hx::Val( recoverInactiveTabs_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_maxSelectedIndex") ) { return ::hx::Val( get_maxSelectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutBackgroundSkin") ) { return ::hx::Val( layoutBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderUnrenderedData") ) { return ::hx::Val( renderUnrenderedData_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshTabProperties") ) { return ::hx::Val( refreshTabProperties_dyn() ); }
		if (HX_FIELD_EQ(inName,"navigateWithKeyboard") ) { return ::hx::Val( navigateWithKeyboard_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_customTabVariant") ) { return ::hx::Val( get_customTabVariant_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customTabVariant") ) { return ::hx::Val( set_customTabVariant_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tabRecyclerIDFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabRecyclerIDFunction() ); }
		if (HX_FIELD_EQ(inName,"initializeTabBarTheme") ) { return ::hx::Val( initializeTabBarTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshViewPortBounds") ) { return ::hx::Val( refreshViewPortBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_keyDownHandler") ) { return ::hx::Val( tabBar_keyDownHandler_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_tabRecyclerIDFunction") ) { return ::hx::Val( _tabRecyclerIDFunction ); }
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { return ::hx::Val( _ignoreSelectionChange ); }
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBackgroundSkin() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"populateCurrentItemState") ) { return ::hx::Val( populateCurrentItemState_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_tab_changeHandler") ) { return ::hx::Val( tabBar_tab_changeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { return ::hx::Val( _hx___disabledBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousCustomTabVariant") ) { return ::hx::Val( _previousCustomTabVariant ); }
		if (HX_FIELD_EQ(inName,"get_tabRecyclerIDFunction") ) { return ::hx::Val( get_tabRecyclerIDFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabRecyclerIDFunction") ) { return ::hx::Val( set_tabRecyclerIDFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_tab_triggerHandler") ) { return ::hx::Val( tabBar_tab_triggerHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"get_disabledBackgroundSkin") ) { return ::hx::Val( get_disabledBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledBackgroundSkin") ) { return ::hx::Val( set_disabledBackgroundSkin_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_customTabVariant") ) { return ::hx::Val( clearStyle_customTabVariant_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_resetHandler") ) { return ::hx::Val( tabBar_dataProvider_resetHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_changeHandler") ) { return ::hx::Val( tabBar_dataProvider_changeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_disabledBackgroundSkin") ) { return ::hx::Val( clearStyle_disabledBackgroundSkin_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_addItemHandler") ) { return ::hx::Val( tabBar_dataProvider_addItemHandler_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_removeAllHandler") ) { return ::hx::Val( tabBar_dataProvider_removeAllHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_updateAllHandler") ) { return ::hx::Val( tabBar_dataProvider_updateAllHandler_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_removeItemHandler") ) { return ::hx::Val( tabBar_dataProvider_removeItemHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_sortChangeHandler") ) { return ::hx::Val( tabBar_dataProvider_sortChangeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_updateItemHandler") ) { return ::hx::Val( tabBar_dataProvider_updateItemHandler_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_replaceItemHandler") ) { return ::hx::Val( tabBar_dataProvider_replaceItemHandler_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"refreshSelectedIndicesAfterFilterOrSort") ) { return ::hx::Val( refreshSelectedIndicesAfterFilterOrSort_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabBar_dataProvider_filterChangeHandler") ) { return ::hx::Val( tabBar_dataProvider_filterChangeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TabBar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"RESET_TAB_STATE") ) { outValue = ( RESET_TAB_STATE ); return true; }
		if (HX_FIELD_EQ(inName,"defaultResetTab") ) { outValue = defaultResetTab_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultUpdateTab") ) { outValue = defaultUpdateTab_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TAB") ) { outValue = ( CHILD_VARIANT_TAB ); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_TAB_FACTORY") ) { outValue = ( INVALIDATION_FLAG_TAB_FACTORY ); return true; }
	}
	return false;
}

::hx::Val TabBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__layout") ) { _hx___layout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dataToTab") ) { dataToTab=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemToText") ) { itemToText=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabRecycler") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabRecycler(inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataProvider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataProvider(inValue.Cast< ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_recyclerMap") ) { _recyclerMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layoutItems") ) { _layoutItems=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_dataProvider") ) { _dataProvider=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_selectedItem") ) { _selectedItem=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemStatePool") ) { itemStatePool=inValue.Cast<  ::lime::utils::ObjectPool_feathers_data_TabBarItemState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { _layoutResult=inValue.Cast<  ::feathers::layout::LayoutBoundsResult >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabToItemState") ) { tabToItemState=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultStorage") ) { _defaultStorage=inValue.Cast<  ::feathers::controls::_TabBar::TabStorage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unrenderedData") ) { _unrenderedData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"customTabVariant") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customTabVariant(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_additionalStorage") ) { _additionalStorage=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__customTabVariant") ) { _hx___customTabVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { _layoutMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { _ignoreChildChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tabRecyclerIDFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabRecyclerIDFunction(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_tabRecyclerIDFunction") ) { _tabRecyclerIDFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreSelectionChange") ) { _ignoreSelectionChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { _hx___disabledBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_previousCustomTabVariant") ) { _previousCustomTabVariant=inValue.Cast< ::String >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TabBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"RESET_TAB_STATE") ) { RESET_TAB_STATE=ioValue.Cast<  ::feathers::data::TabBarItemState >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CHILD_VARIANT_TAB") ) { CHILD_VARIANT_TAB=ioValue.Cast< ::String >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALIDATION_FLAG_TAB_FACTORY") ) { INVALIDATION_FLAG_TAB_FACTORY=ioValue.Cast<  ::feathers::core::InvalidationFlag >(); return true; }
	}
	return false;
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dataProvider",5a,d0,9e,71));
	outFields->push(HX_("dataProvider",7b,3d,30,8f));
	outFields->push(HX_("_selectedIndex",f8,66,a8,f2));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("maxSelectedIndex",73,e5,5e,80));
	outFields->push(HX_("_selectedItem",ed,77,c8,b8));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("_previousCustomTabVariant",77,41,c9,4b));
	outFields->push(HX_("customTabVariant",c1,a5,d4,23));
	outFields->push(HX_("tabRecycler",74,f4,1d,3e));
	outFields->push(HX_("_recyclerMap",de,d8,0f,f9));
	outFields->push(HX_("_defaultStorage",19,81,49,bd));
	outFields->push(HX_("_additionalStorage",d5,ad,91,7f));
	outFields->push(HX_("dataToTab",10,8d,09,5a));
	outFields->push(HX_("tabToItemState",ae,32,d0,9e));
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
	outFields->push(HX_("__customTabVariant",e1,38,65,8f));
	outFields->push(HX_("__layout",ca,19,e8,00));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__disabledBackgroundSkin",47,07,aa,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabBar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(TabBar_obj,_dataProvider),HX_("_dataProvider",5a,d0,9e,71)},
	{::hx::fsInt,(int)offsetof(TabBar_obj,_selectedIndex),HX_("_selectedIndex",f8,66,a8,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabBar_obj,_selectedItem),HX_("_selectedItem",ed,77,c8,b8)},
	{::hx::fsString,(int)offsetof(TabBar_obj,_previousCustomTabVariant),HX_("_previousCustomTabVariant",77,41,c9,4b)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TabBar_obj,_recyclerMap),HX_("_recyclerMap",de,d8,0f,f9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabBar_obj,_tabRecyclerIDFunction),HX_("_tabRecyclerIDFunction",c8,a0,cd,6b)},
	{::hx::fsObject /*  ::feathers::controls::_TabBar::TabStorage */ ,(int)offsetof(TabBar_obj,_defaultStorage),HX_("_defaultStorage",19,81,49,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabBar_obj,_additionalStorage),HX_("_additionalStorage",d5,ad,91,7f)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(TabBar_obj,dataToTab),HX_("dataToTab",10,8d,09,5a)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(TabBar_obj,tabToItemState),HX_("tabToItemState",ae,32,d0,9e)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool_feathers_data_TabBarItemState */ ,(int)offsetof(TabBar_obj,itemStatePool),HX_("itemStatePool",fa,5f,fd,ec)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(TabBar_obj,_unrenderedData),HX_("_unrenderedData",77,d6,68,99)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabBar_obj,_layoutItems),HX_("_layoutItems",f7,b2,ff,d8)},
	{::hx::fsBool,(int)offsetof(TabBar_obj,_ignoreSelectionChange),HX_("_ignoreSelectionChange",2b,2b,f7,83)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabBar_obj,itemToText),HX_("itemToText",3b,01,c1,70)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(TabBar_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(TabBar_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(TabBar_obj,_layoutMeasurements),HX_("_layoutMeasurements",e0,8a,1d,e1)},
	{::hx::fsObject /*  ::feathers::layout::LayoutBoundsResult */ ,(int)offsetof(TabBar_obj,_layoutResult),HX_("_layoutResult",06,7a,37,06)},
	{::hx::fsBool,(int)offsetof(TabBar_obj,_ignoreChildChanges),HX_("_ignoreChildChanges",18,b7,88,de)},
	{::hx::fsString,(int)offsetof(TabBar_obj,_hx___customTabVariant),HX_("__customTabVariant",e1,38,65,8f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(TabBar_obj,_hx___layout),HX_("__layout",ca,19,e8,00)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(TabBar_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(TabBar_obj,_hx___disabledBackgroundSkin),HX_("__disabledBackgroundSkin",47,07,aa,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TabBar_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::core::InvalidationFlag */ ,(void *) &TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY,HX_("INVALIDATION_FLAG_TAB_FACTORY",4e,85,0f,ad)},
	{::hx::fsString,(void *) &TabBar_obj::CHILD_VARIANT_TAB,HX_("CHILD_VARIANT_TAB",98,bf,8f,d9)},
	{::hx::fsObject /*  ::feathers::data::TabBarItemState */ ,(void *) &TabBar_obj::RESET_TAB_STATE,HX_("RESET_TAB_STATE",57,8f,5e,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TabBar_obj_sMemberFields[] = {
	HX_("_dataProvider",5a,d0,9e,71),
	HX_("get_dataProvider",04,2a,cf,93),
	HX_("set_dataProvider",78,17,11,ea),
	HX_("_selectedIndex",f8,66,a8,f2),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_maxSelectedIndex",7c,4a,c9,9e),
	HX_("_selectedItem",ed,77,c8,b8),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("_previousCustomTabVariant",77,41,c9,4b),
	HX_("get_tabRecycler",0b,ac,ff,fe),
	HX_("set_tabRecycler",17,29,cb,fa),
	HX_("_recyclerMap",de,d8,0f,f9),
	HX_("_tabRecyclerIDFunction",c8,a0,cd,6b),
	HX_("get_tabRecyclerIDFunction",de,c1,bd,18),
	HX_("set_tabRecyclerIDFunction",ea,85,14,85),
	HX_("_defaultStorage",19,81,49,bd),
	HX_("_additionalStorage",d5,ad,91,7f),
	HX_("dataToTab",10,8d,09,5a),
	HX_("tabToItemState",ae,32,d0,9e),
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
	HX_("itemToTab",87,71,05,14),
	HX_("indexToTab",28,7f,0d,e4),
	HX_("getTabRecycler",7e,47,bc,c5),
	HX_("setTabRecycler",f2,2f,dc,e5),
	HX_("initializeTabBarTheme",3b,fb,95,74),
	HX_("update",09,86,05,87),
	HX_("refreshViewPortBounds",d6,72,b8,b5),
	HX_("handleLayout",72,d4,e4,a6),
	HX_("handleLayoutResult",ef,92,e3,71),
	HX_("validateChildren",f5,2b,c3,28),
	HX_("refreshTabs",f9,3f,92,41),
	HX_("refreshInactiveTabs",04,88,77,08),
	HX_("recoverInactiveTabs",4d,8a,cb,22),
	HX_("freeInactiveTabs",55,c0,da,1d),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("layoutBackgroundSkin",d5,3d,2a,eb),
	HX_("findUnrenderedData",f1,83,2c,cd),
	HX_("renderUnrenderedData",ce,77,94,8d),
	HX_("createTab",b9,30,e6,49),
	HX_("destroyTab",7b,bd,1c,ae),
	HX_("itemStateToStorage",22,ab,c8,e1),
	HX_("populateCurrentItemState",8f,df,43,33),
	HX_("updateTab",cc,37,e5,82),
	HX_("resetTab",c6,93,de,4f),
	HX_("refreshTabProperties",cd,9f,68,4e),
	HX_("refreshSelectedIndicesAfterFilterOrSort",84,7a,3b,6e),
	HX_("navigateWithKeyboard",9e,b5,6c,b5),
	HX_("tabBar_keyDownHandler",0a,a8,0f,dd),
	HX_("tabBar_tab_triggerHandler",bd,47,25,0c),
	HX_("tabBar_tab_changeHandler",4f,b8,11,2f),
	HX_("tabBar_dataProvider_changeHandler",97,24,49,8d),
	HX_("tabBar_dataProvider_addItemHandler",59,b3,06,1e),
	HX_("tabBar_dataProvider_removeItemHandler",f0,87,b3,d0),
	HX_("tabBar_dataProvider_replaceItemHandler",a6,7d,79,d6),
	HX_("tabBar_dataProvider_removeAllHandler",d0,d9,23,12),
	HX_("tabBar_dataProvider_resetHandler",fe,1f,7a,be),
	HX_("tabBar_dataProvider_sortChangeHandler",d9,7c,25,21),
	HX_("tabBar_dataProvider_filterChangeHandler",7f,05,d9,b2),
	HX_("updateTabForIndex",35,c3,5e,f7),
	HX_("tabBar_dataProvider_updateItemHandler",4b,9a,cc,7a),
	HX_("tabBar_dataProvider_updateAllHandler",d5,8b,66,a2),
	HX_("__customTabVariant",e1,38,65,8f),
	HX_("get_customTabVariant",ca,0a,3f,42),
	HX_("set_customTabVariant",3e,c2,f6,0e),
	HX_("clearStyle_customTabVariant",3c,7f,10,d7),
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

static void TabBar_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY,"INVALIDATION_FLAG_TAB_FACTORY");
	HX_MARK_MEMBER_NAME(TabBar_obj::CHILD_VARIANT_TAB,"CHILD_VARIANT_TAB");
	HX_MARK_MEMBER_NAME(TabBar_obj::RESET_TAB_STATE,"RESET_TAB_STATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabBar_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBar_obj::INVALIDATION_FLAG_TAB_FACTORY,"INVALIDATION_FLAG_TAB_FACTORY");
	HX_VISIT_MEMBER_NAME(TabBar_obj::CHILD_VARIANT_TAB,"CHILD_VARIANT_TAB");
	HX_VISIT_MEMBER_NAME(TabBar_obj::RESET_TAB_STATE,"RESET_TAB_STATE");
};

#endif

::hx::Class TabBar_obj::__mClass;

static ::String TabBar_obj_sStaticFields[] = {
	HX_("INVALIDATION_FLAG_TAB_FACTORY",4e,85,0f,ad),
	HX_("CHILD_VARIANT_TAB",98,bf,8f,d9),
	HX_("RESET_TAB_STATE",57,8f,5e,9f),
	HX_("defaultUpdateTab",cb,9e,dd,45),
	HX_("defaultResetTab",a7,51,ec,78),
	::String(null())
};

void TabBar_obj::__register()
{
	TabBar_obj _hx_dummy;
	TabBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.TabBar",18,2a,c8,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabBar_obj::__GetStatic;
	__mClass->mSetStaticField = &TabBar_obj::__SetStatic;
	__mClass->mMarkFunc = TabBar_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabBar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBar_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabBar_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabBar_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_88_boot)
HXDLIN(  88)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("dataProvider",7b,3d,30,8f))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_89_boot)
HXDLIN(  89)		INVALIDATION_FLAG_TAB_FACTORY = ::feathers::core::InvalidationFlag_obj::CUSTOM(HX_("tabFactory",f5,0e,b0,69));
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f2be383da40aeda_103_boot)
HXDLIN( 103)		CHILD_VARIANT_TAB = HX_("tabBar_tab",d4,28,7f,58);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_0f2be383da40aeda_105_boot)
HXDLIN( 105)		RESET_TAB_STATE =  ::feathers::data::TabBarItemState_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace feathers
} // end namespace controls
