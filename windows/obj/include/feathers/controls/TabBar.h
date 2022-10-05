#ifndef INCLUDED_feathers_controls_TabBar
#define INCLUDED_feathers_controls_TabBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,BasicToggleButton)
HX_DECLARE_CLASS2(feathers,controls,IToggle)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS2(feathers,controls,TabBar)
HX_DECLARE_CLASS2(feathers,controls,ToggleButton)
HX_DECLARE_CLASS3(feathers,controls,_TabBar,TabStorage)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(feathers,data,TabBarItemState)
HX_DECLARE_CLASS2(feathers,events,FlatCollectionEvent)
HX_DECLARE_CLASS2(feathers,events,TriggerEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_feathers_data_TabBarItemState)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES TabBar_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef TabBar_obj OBJ_;
		TabBar_obj();

	public:
		enum { _hx_ClassId = 0x1654caa8 };

		void __construct(::Dynamic dataProvider, ::Dynamic changeListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.TabBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.TabBar"); }
		static ::hx::ObjectPtr< TabBar_obj > __new(::Dynamic dataProvider, ::Dynamic changeListener);
		static ::hx::ObjectPtr< TabBar_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider, ::Dynamic changeListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,TabBar_obj *_hx_obj);
		//~TabBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TabBar",9e,e6,d1,b0); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_TAB_FACTORY;
		static ::String CHILD_VARIANT_TAB;
		static  ::feathers::data::TabBarItemState RESET_TAB_STATE;
		static void defaultUpdateTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state);
		static ::Dynamic defaultUpdateTab_dyn();

		static void defaultResetTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state);
		static ::Dynamic defaultResetTab_dyn();

		::Dynamic _dataProvider;
		::Dynamic get_dataProvider();
		::Dynamic get_dataProvider_dyn();

		::Dynamic set_dataProvider(::Dynamic value);
		::Dynamic set_dataProvider_dyn();

		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		int get_maxSelectedIndex();
		::Dynamic get_maxSelectedIndex_dyn();

		 ::Dynamic _selectedItem;
		 ::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::Dynamic set_selectedItem( ::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		::String _previousCustomTabVariant;
		 ::feathers::utils::DisplayObjectRecycler get_tabRecycler();
		::Dynamic get_tabRecycler_dyn();

		 ::feathers::utils::DisplayObjectRecycler set_tabRecycler( ::feathers::utils::DisplayObjectRecycler value);
		::Dynamic set_tabRecycler_dyn();

		 ::haxe::ds::StringMap _recyclerMap;
		 ::Dynamic _tabRecyclerIDFunction;
		Dynamic _tabRecyclerIDFunction_dyn() { return _tabRecyclerIDFunction;}
		 ::Dynamic get_tabRecyclerIDFunction();
		::Dynamic get_tabRecyclerIDFunction_dyn();

		 ::Dynamic set_tabRecyclerIDFunction( ::Dynamic value);
		::Dynamic set_tabRecyclerIDFunction_dyn();

		 ::feathers::controls::_TabBar::TabStorage _defaultStorage;
		::Array< ::Dynamic> _additionalStorage;
		 ::haxe::ds::ObjectMap dataToTab;
		 ::haxe::ds::ObjectMap tabToItemState;
		 ::lime::utils::ObjectPool_feathers_data_TabBarItemState itemStatePool;
		::cpp::VirtualArray _unrenderedData;
		::Array< ::Dynamic> _layoutItems;
		bool _ignoreSelectionChange;
		::Dynamic itemToText;
		inline ::Dynamic &itemToText_dyn() {return itemToText; }

		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		 ::feathers::layout::Measurements _layoutMeasurements;
		 ::feathers::layout::LayoutBoundsResult _layoutResult;
		bool _ignoreChildChanges;
		 ::feathers::controls::ToggleButton itemToTab( ::Dynamic item);
		::Dynamic itemToTab_dyn();

		 ::feathers::controls::ToggleButton indexToTab(int index);
		::Dynamic indexToTab_dyn();

		 ::feathers::utils::DisplayObjectRecycler getTabRecycler(::String id);
		::Dynamic getTabRecycler_dyn();

		void setTabRecycler(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		::Dynamic setTabRecycler_dyn();

		void initializeTabBarTheme();
		::Dynamic initializeTabBarTheme_dyn();

		void update();

		void refreshViewPortBounds();
		::Dynamic refreshViewPortBounds_dyn();

		void handleLayout();
		::Dynamic handleLayout_dyn();

		void handleLayoutResult();
		::Dynamic handleLayoutResult_dyn();

		void validateChildren();
		::Dynamic validateChildren_dyn();

		void refreshTabs();
		::Dynamic refreshTabs_dyn();

		void refreshInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage,bool factoryInvalid);
		::Dynamic refreshInactiveTabs_dyn();

		void recoverInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage);
		::Dynamic recoverInactiveTabs_dyn();

		void freeInactiveTabs( ::feathers::controls::_TabBar::TabStorage storage);
		::Dynamic freeInactiveTabs_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		void layoutBackgroundSkin();
		::Dynamic layoutBackgroundSkin_dyn();

		void findUnrenderedData();
		::Dynamic findUnrenderedData_dyn();

		void renderUnrenderedData();
		::Dynamic renderUnrenderedData_dyn();

		 ::feathers::controls::ToggleButton createTab( ::feathers::data::TabBarItemState state);
		::Dynamic createTab_dyn();

		void destroyTab( ::feathers::controls::ToggleButton tab);
		::Dynamic destroyTab_dyn();

		 ::feathers::controls::_TabBar::TabStorage itemStateToStorage( ::feathers::data::TabBarItemState state);
		::Dynamic itemStateToStorage_dyn();

		void populateCurrentItemState( ::Dynamic item,int index, ::feathers::data::TabBarItemState state);
		::Dynamic populateCurrentItemState_dyn();

		void updateTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state, ::feathers::controls::_TabBar::TabStorage storage);
		::Dynamic updateTab_dyn();

		void resetTab( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state);
		::Dynamic resetTab_dyn();

		void refreshTabProperties( ::feathers::controls::ToggleButton tab, ::feathers::data::TabBarItemState state);
		::Dynamic refreshTabProperties_dyn();

		void refreshSelectedIndicesAfterFilterOrSort();
		::Dynamic refreshSelectedIndicesAfterFilterOrSort_dyn();

		void navigateWithKeyboard( ::openfl::events::KeyboardEvent event);
		::Dynamic navigateWithKeyboard_dyn();

		void tabBar_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic tabBar_keyDownHandler_dyn();

		void tabBar_tab_triggerHandler( ::feathers::events::TriggerEvent event);
		::Dynamic tabBar_tab_triggerHandler_dyn();

		void tabBar_tab_changeHandler( ::openfl::events::Event event);
		::Dynamic tabBar_tab_changeHandler_dyn();

		void tabBar_dataProvider_changeHandler( ::openfl::events::Event event);
		::Dynamic tabBar_dataProvider_changeHandler_dyn();

		void tabBar_dataProvider_addItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_addItemHandler_dyn();

		void tabBar_dataProvider_removeItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_removeItemHandler_dyn();

		void tabBar_dataProvider_replaceItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_replaceItemHandler_dyn();

		void tabBar_dataProvider_removeAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_removeAllHandler_dyn();

		void tabBar_dataProvider_resetHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_resetHandler_dyn();

		void tabBar_dataProvider_sortChangeHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_sortChangeHandler_dyn();

		void tabBar_dataProvider_filterChangeHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_filterChangeHandler_dyn();

		void updateTabForIndex(int index);
		::Dynamic updateTabForIndex_dyn();

		void tabBar_dataProvider_updateItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_updateItemHandler_dyn();

		void tabBar_dataProvider_updateAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabBar_dataProvider_updateAllHandler_dyn();

		::String _hx___customTabVariant;
		::String get_customTabVariant();
		::Dynamic get_customTabVariant_dyn();

		::String set_customTabVariant(::String value);
		::Dynamic set_customTabVariant_dyn();

		::String clearStyle_customTabVariant();
		::Dynamic clearStyle_customTabVariant_dyn();

		::Dynamic _hx___layout;
		::Dynamic get_layout();
		::Dynamic get_layout_dyn();

		::Dynamic set_layout(::Dynamic value);
		::Dynamic set_layout_dyn();

		::Dynamic clearStyle_layout();
		::Dynamic clearStyle_layout_dyn();

		 ::openfl::display::DisplayObject _hx___backgroundSkin;
		 ::openfl::display::DisplayObject get_backgroundSkin();
		::Dynamic get_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_backgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_backgroundSkin();
		::Dynamic clearStyle_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject _hx___disabledBackgroundSkin;
		 ::openfl::display::DisplayObject get_disabledBackgroundSkin();
		::Dynamic get_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_disabledBackgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_disabledBackgroundSkin();
		::Dynamic clearStyle_disabledBackgroundSkin_dyn();

		::hx::Class get_styleContext();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_TabBar */ 
