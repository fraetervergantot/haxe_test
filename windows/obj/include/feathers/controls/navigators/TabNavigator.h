#ifndef INCLUDED_feathers_controls_navigators_TabNavigator
#define INCLUDED_feathers_controls_navigators_TabNavigator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,TabBar)
HX_DECLARE_CLASS3(feathers,controls,navigators,BaseNavigator)
HX_DECLARE_CLASS3(feathers,controls,navigators,TabItem)
HX_DECLARE_CLASS3(feathers,controls,navigators,TabNavigator)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(feathers,events,FeathersEvent)
HX_DECLARE_CLASS2(feathers,events,FlatCollectionEvent)
HX_DECLARE_CLASS2(feathers,events,TabBarEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS3(feathers,motion,effects,BaseDelegateEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,EventToPositionEffectContext)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,EdgePuller)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace navigators{


class HXCPP_CLASS_ATTRIBUTES TabNavigator_obj : public  ::feathers::controls::navigators::BaseNavigator_obj
{
	public:
		typedef  ::feathers::controls::navigators::BaseNavigator_obj super;
		typedef TabNavigator_obj OBJ_;
		TabNavigator_obj();

	public:
		enum { _hx_ClassId = 0x7b7c9414 };

		void __construct(::Dynamic dataProvider);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.navigators.TabNavigator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.navigators.TabNavigator"); }
		static ::hx::ObjectPtr< TabNavigator_obj > __new(::Dynamic dataProvider);
		static ::hx::ObjectPtr< TabNavigator_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabNavigator_obj();

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
		 ::Dynamic set_selectedItem_a7a2487a( ::Dynamic value);

		 ::Dynamic get_selectedItem_2aa2127b();
		::String __ToString() const { return HX_("TabNavigator",e2,33,5d,aa); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_TAB_BAR_FACTORY;
		static ::String CHILD_VARIANT_TAB_BAR;
		static  ::feathers::utils::DisplayObjectFactory defaultTabBarFactory;
		 ::feathers::controls::TabBar tabBar;
		 ::feathers::utils::EdgePuller _previousEdgePuller;
		 ::feathers::utils::EdgePuller _nextEdgePuller;
		::Dynamic _dataProvider;
		::Dynamic get_dataProvider();
		::Dynamic get_dataProvider_dyn();

		::Dynamic set_dataProvider(::Dynamic value);
		::Dynamic set_dataProvider_dyn();

		int _activeItemIndex;
		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		int get_maxSelectedIndex();
		::Dynamic get_maxSelectedIndex_dyn();

		 ::feathers::controls::navigators::TabItem _selectedItem;
		 ::feathers::controls::navigators::TabItem get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		 ::feathers::controls::navigators::TabItem set_selectedItem( ::feathers::controls::navigators::TabItem value);
		::Dynamic set_selectedItem_dyn();

		bool _swipeEnabled;
		bool get_swipeEnabled();
		::Dynamic get_swipeEnabled_dyn();

		bool set_swipeEnabled(bool value);
		::Dynamic set_swipeEnabled_dyn();

		bool _simulateTouch;
		 ::feathers::motion::effects::EventToPositionEffectContext _dragTransitionContext;
		bool get_simulateTouch();
		::Dynamic get_simulateTouch_dyn();

		bool set_simulateTouch(bool value);
		::Dynamic set_simulateTouch_dyn();

		 ::feathers::utils::DisplayObjectFactory _oldTabBarFactory;
		 ::feathers::utils::DisplayObjectFactory _tabBarFactory;
		 ::feathers::utils::DisplayObjectFactory get_tabBarFactory();
		::Dynamic get_tabBarFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_tabBarFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_tabBarFactory_dyn();

		bool _ignoreSelectionChange;
		void initialize();

		::String itemToText( ::feathers::controls::navigators::TabItem item);
		::Dynamic itemToText_dyn();

		void initializeTabNavigatorTheme();
		::Dynamic initializeTabNavigatorTheme_dyn();

		void update();

		bool measure();

		void createTabBar();
		::Dynamic createTabBar_dyn();

		void layoutContent();

		 ::openfl::display::DisplayObject getView(::String id);

		void disposeView(::String id, ::openfl::display::DisplayObject view);

		void refreshSelection();
		::Dynamic refreshSelection_dyn();

		::Dynamic startPreviousDragTransition( ::openfl::display::DisplayObject one, ::openfl::display::DisplayObject two);
		::Dynamic startPreviousDragTransition_dyn();

		::Dynamic startNextDragTransition( ::openfl::display::DisplayObject one, ::openfl::display::DisplayObject two);
		::Dynamic startNextDragTransition_dyn();

		void tabNavigator_tabBar_changeHandler( ::openfl::events::Event event);
		::Dynamic tabNavigator_tabBar_changeHandler_dyn();

		void tabNavigator_tabBar_itemTriggerHandler( ::feathers::events::TabBarEvent event);
		::Dynamic tabNavigator_tabBar_itemTriggerHandler_dyn();

		void tabNavigator_dataProvider_addItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabNavigator_dataProvider_addItemHandler_dyn();

		void tabNavigator_dataProvider_removeItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabNavigator_dataProvider_removeItemHandler_dyn();

		void tabNavigator_dataProvider_replaceItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabNavigator_dataProvider_replaceItemHandler_dyn();

		void tabNavigator_dataProvider_removeAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabNavigator_dataProvider_removeAllHandler_dyn();

		void tabNavigator_dataProvider_resetHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic tabNavigator_dataProvider_resetHandler_dyn();

		void tabNavigator_previousEdgePuller_openingHandler( ::feathers::events::FeathersEvent event);
		::Dynamic tabNavigator_previousEdgePuller_openingHandler_dyn();

		void tabNavigator_previousEdgePuller_cancelHandler( ::openfl::events::Event event);
		::Dynamic tabNavigator_previousEdgePuller_cancelHandler_dyn();

		void tabNavigator_previousEdgePuller_openHandler( ::openfl::events::Event event);
		::Dynamic tabNavigator_previousEdgePuller_openHandler_dyn();

		void tabNavigator_nextEdgePuller_openingHandler( ::feathers::events::FeathersEvent event);
		::Dynamic tabNavigator_nextEdgePuller_openingHandler_dyn();

		void tabNavigator_nextEdgePuller_cancelHandler( ::openfl::events::Event event);
		::Dynamic tabNavigator_nextEdgePuller_cancelHandler_dyn();

		void tabNavigator_nextEdgePuller_openHandler( ::openfl::events::Event event);
		::Dynamic tabNavigator_nextEdgePuller_openHandler_dyn();

		::hx::Class get_styleContext();

		 ::feathers::layout::RelativePosition _hx___tabBarPosition;
		 ::feathers::layout::RelativePosition get_tabBarPosition();
		::Dynamic get_tabBarPosition_dyn();

		 ::feathers::layout::RelativePosition set_tabBarPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_tabBarPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_tabBarPosition();
		::Dynamic clearStyle_tabBarPosition_dyn();

		 ::Dynamic _hx___previousTransition;
		Dynamic _hx___previousTransition_dyn() { return _hx___previousTransition;}
		 ::Dynamic get_previousTransition();
		::Dynamic get_previousTransition_dyn();

		 ::Dynamic set_previousTransition( ::Dynamic value);
		::Dynamic set_previousTransition_dyn();

		 ::Dynamic clearStyle_previousTransition();
		::Dynamic clearStyle_previousTransition_dyn();

		 ::Dynamic _hx___nextTransition;
		Dynamic _hx___nextTransition_dyn() { return _hx___nextTransition;}
		 ::Dynamic get_nextTransition();
		::Dynamic get_nextTransition_dyn();

		 ::Dynamic set_nextTransition( ::Dynamic value);
		::Dynamic set_nextTransition_dyn();

		 ::Dynamic clearStyle_nextTransition();
		::Dynamic clearStyle_nextTransition_dyn();

		Float _hx___gap;
		Float get_gap();
		::Dynamic get_gap_dyn();

		Float set_gap(Float value);
		::Dynamic set_gap_dyn();

		Float clearStyle_gap();
		::Dynamic clearStyle_gap_dyn();

		::String _hx___customTabBarVariant;
		::String get_customTabBarVariant();
		::Dynamic get_customTabBarVariant_dyn();

		::String set_customTabBarVariant(::String value);
		::Dynamic set_customTabBarVariant_dyn();

		::String clearStyle_customTabBarVariant();
		::Dynamic clearStyle_customTabBarVariant_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace navigators

#endif /* INCLUDED_feathers_controls_navigators_TabNavigator */ 
