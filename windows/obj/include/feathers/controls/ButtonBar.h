#ifndef INCLUDED_feathers_controls_ButtonBar
#define INCLUDED_feathers_controls_ButtonBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,BasicButton)
HX_DECLARE_CLASS2(feathers,controls,Button)
HX_DECLARE_CLASS2(feathers,controls,ButtonBar)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS3(feathers,controls,_ButtonBar,ButtonStorage)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,ButtonBarItemState)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(feathers,events,ButtonBarEvent)
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
HX_DECLARE_CLASS2(lime,utils,ObjectPool_feathers_data_ButtonBarItemState)
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


class HXCPP_CLASS_ATTRIBUTES ButtonBar_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef ButtonBar_obj OBJ_;
		ButtonBar_obj();

	public:
		enum { _hx_ClassId = 0x2631e0fb };

		void __construct(::Dynamic dataProvider, ::Dynamic itemTriggerListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.ButtonBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.ButtonBar"); }
		static ::hx::ObjectPtr< ButtonBar_obj > __new(::Dynamic dataProvider, ::Dynamic itemTriggerListener);
		static ::hx::ObjectPtr< ButtonBar_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic dataProvider, ::Dynamic itemTriggerListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,ButtonBar_obj *_hx_obj);
		//~ButtonBar_obj();

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
		::String __ToString() const { return HX_("ButtonBar",e1,2a,cd,f1); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_BUTTON_FACTORY;
		static ::String CHILD_VARIANT_BUTTON;
		static  ::feathers::data::ButtonBarItemState RESET_BUTTON_STATE;
		static void defaultUpdateButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state);
		static ::Dynamic defaultUpdateButton_dyn();

		static void defaultResetButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state);
		static ::Dynamic defaultResetButton_dyn();

		::Dynamic _dataProvider;
		::Dynamic get_dataProvider();
		::Dynamic get_dataProvider_dyn();

		::Dynamic set_dataProvider(::Dynamic value);
		::Dynamic set_dataProvider_dyn();

		::String _previousCustomButtonVariant;
		 ::feathers::utils::DisplayObjectRecycler get_buttonRecycler();
		::Dynamic get_buttonRecycler_dyn();

		 ::feathers::utils::DisplayObjectRecycler set_buttonRecycler( ::feathers::utils::DisplayObjectRecycler value);
		::Dynamic set_buttonRecycler_dyn();

		 ::haxe::ds::StringMap _recyclerMap;
		 ::Dynamic _buttonRecyclerIDFunction;
		Dynamic _buttonRecyclerIDFunction_dyn() { return _buttonRecyclerIDFunction;}
		 ::Dynamic get_buttonRecyclerIDFunction();
		::Dynamic get_buttonRecyclerIDFunction_dyn();

		 ::Dynamic set_buttonRecyclerIDFunction( ::Dynamic value);
		::Dynamic set_buttonRecyclerIDFunction_dyn();

		 ::feathers::controls::_ButtonBar::ButtonStorage _defaultStorage;
		::Array< ::Dynamic> _additionalStorage;
		 ::haxe::ds::ObjectMap dataToButton;
		 ::haxe::ds::ObjectMap buttonToItemState;
		 ::lime::utils::ObjectPool_feathers_data_ButtonBarItemState itemStatePool;
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
		 ::feathers::controls::Button itemToButton( ::Dynamic item);
		::Dynamic itemToButton_dyn();

		 ::feathers::controls::Button indexToButton(int index);
		::Dynamic indexToButton_dyn();

		 ::feathers::utils::DisplayObjectRecycler getButtonRecycler(::String id);
		::Dynamic getButtonRecycler_dyn();

		void setButtonRecycler(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		::Dynamic setButtonRecycler_dyn();

		void initializeButtonBarTheme();
		::Dynamic initializeButtonBarTheme_dyn();

		void update();

		void refreshViewPortBounds();
		::Dynamic refreshViewPortBounds_dyn();

		void handleLayout();
		::Dynamic handleLayout_dyn();

		void handleLayoutResult();
		::Dynamic handleLayoutResult_dyn();

		void validateChildren();
		::Dynamic validateChildren_dyn();

		void refreshButtons();
		::Dynamic refreshButtons_dyn();

		void refreshInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage,bool factoryInvalid);
		::Dynamic refreshInactiveButtons_dyn();

		void recoverInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage);
		::Dynamic recoverInactiveButtons_dyn();

		void freeInactiveButtons( ::feathers::controls::_ButtonBar::ButtonStorage storage);
		::Dynamic freeInactiveButtons_dyn();

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

		 ::feathers::controls::Button createButton( ::feathers::data::ButtonBarItemState state);
		::Dynamic createButton_dyn();

		void destroyButton( ::feathers::controls::Button button);
		::Dynamic destroyButton_dyn();

		 ::feathers::controls::_ButtonBar::ButtonStorage itemStateToStorage( ::feathers::data::ButtonBarItemState state);
		::Dynamic itemStateToStorage_dyn();

		void populateCurrentItemState( ::Dynamic item,int index, ::feathers::data::ButtonBarItemState state);
		::Dynamic populateCurrentItemState_dyn();

		void updateButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state, ::feathers::controls::_ButtonBar::ButtonStorage storage);
		::Dynamic updateButton_dyn();

		void resetButton( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state);
		::Dynamic resetButton_dyn();

		void refreshButtonProperties( ::feathers::controls::Button button, ::feathers::data::ButtonBarItemState state);
		::Dynamic refreshButtonProperties_dyn();

		void buttonBar_button_triggerHandler( ::feathers::events::TriggerEvent event);
		::Dynamic buttonBar_button_triggerHandler_dyn();

		void buttonBar_dataProvider_changeHandler( ::openfl::events::Event event);
		::Dynamic buttonBar_dataProvider_changeHandler_dyn();

		void updateButtonForIndex(int index);
		::Dynamic updateButtonForIndex_dyn();

		void buttonBar_dataProvider_updateItemHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic buttonBar_dataProvider_updateItemHandler_dyn();

		void buttonBar_dataProvider_updateAllHandler( ::feathers::events::FlatCollectionEvent event);
		::Dynamic buttonBar_dataProvider_updateAllHandler_dyn();

		::String _hx___customButtonVariant;
		::String get_customButtonVariant();
		::Dynamic get_customButtonVariant_dyn();

		::String set_customButtonVariant(::String value);
		::Dynamic set_customButtonVariant_dyn();

		::String clearStyle_customButtonVariant();
		::Dynamic clearStyle_customButtonVariant_dyn();

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

#endif /* INCLUDED_feathers_controls_ButtonBar */ 
