#ifndef INCLUDED_feathers_controls_LayoutGroup
#define INCLUDED_feathers_controls_LayoutGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,AutoSizeMode)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
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


class HXCPP_CLASS_ATTRIBUTES LayoutGroup_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef LayoutGroup_obj OBJ_;
		LayoutGroup_obj();

	public:
		enum { _hx_ClassId = 0x11a722e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.LayoutGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.LayoutGroup"); }
		static ::hx::ObjectPtr< LayoutGroup_obj > __new();
		static ::hx::ObjectPtr< LayoutGroup_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LayoutGroup_obj();

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
		::String __ToString() const { return HX_("LayoutGroup",15,a4,10,2f); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String VARIANT_TOOL_BAR;
		::Array< ::Dynamic> items;
		 ::feathers::layout::LayoutBoundsResult _layoutResult;
		 ::feathers::layout::Measurements _layoutMeasurements;
		bool _ignoreChildChanges;
		bool _ignoreChangesButSetFlags;
		bool _ignoreLayoutChanges;
		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		 ::openfl::display::DisplayObject _currentMaskSkin;
		 ::feathers::layout::AutoSizeMode _autoSizeMode;
		 ::feathers::layout::AutoSizeMode get_autoSizeMode();
		::Dynamic get_autoSizeMode_dyn();

		 ::feathers::layout::AutoSizeMode set_autoSizeMode( ::feathers::layout::AutoSizeMode value);
		::Dynamic set_autoSizeMode_dyn();

		 ::openfl::display::Sprite _disabledOverlay;
		::Dynamic _currentLayout;
		int get_numChildren();

		int get__numChildren();
		::Dynamic get__numChildren_dyn();

		 ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int index);

		 ::openfl::display::DisplayObject _addChild( ::openfl::display::DisplayObject child);
		::Dynamic _addChild_dyn();

		 ::openfl::display::DisplayObject _addChildAt( ::openfl::display::DisplayObject child,int index);
		::Dynamic _addChildAt_dyn();

		 ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject _removeChild( ::openfl::display::DisplayObject child);
		::Dynamic _removeChild_dyn();

		 ::openfl::display::DisplayObject removeChildAt(int index);

		 ::openfl::display::DisplayObject _removeChildAt(int index);
		::Dynamic _removeChildAt_dyn();

		int getChildIndex( ::openfl::display::DisplayObject child);

		int _getChildIndex( ::openfl::display::DisplayObject child);
		::Dynamic _getChildIndex_dyn();

		 ::openfl::display::DisplayObject getChildByName(::String name);

		 ::openfl::display::DisplayObject _getChildByName(::String name);
		::Dynamic _getChildByName_dyn();

		void removeChildren(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);

		void _removeChildren(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic _removeChildren_dyn();

		void setChildIndex( ::openfl::display::DisplayObject child,int index);

		void _setChildIndex( ::openfl::display::DisplayObject child,int index);
		::Dynamic _setChildIndex_dyn();

		 ::openfl::display::DisplayObject getChildAt(int index);

		 ::openfl::display::DisplayObject _getChildAt(int index);
		::Dynamic _getChildAt_dyn();

		void initializeLayoutGroupTheme();
		::Dynamic initializeLayoutGroupTheme_dyn();

		int getPrivateIndexForPublicIndex(int publicIndex);
		::Dynamic getPrivateIndexForPublicIndex_dyn();

		::Array< ::Dynamic> _xmlContent;
		::Array< ::Dynamic> get_xmlContent();
		::Dynamic get_xmlContent_dyn();

		::Array< ::Dynamic> set_xmlContent(::Array< ::Dynamic> value);
		::Dynamic set_xmlContent_dyn();

		void validateNow();

		virtual void update();

		void refreshDisabledOverlay();
		::Dynamic refreshDisabledOverlay_dyn();

		void refreshLayout();
		::Dynamic refreshLayout_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		void refreshMaskSkin();
		::Dynamic refreshMaskSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentMaskSkin();
		::Dynamic getCurrentMaskSkin_dyn();

		void addCurrentMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentMaskSkin_dyn();

		void removeCurrentMaskSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentMaskSkin_dyn();

		virtual void refreshViewPortBounds();
		::Dynamic refreshViewPortBounds_dyn();

		virtual void handleCustomLayout();
		::Dynamic handleCustomLayout_dyn();

		void handleManualLayout();
		::Dynamic handleManualLayout_dyn();

		virtual void handleLayoutResult();
		::Dynamic handleLayoutResult_dyn();

		void refreshMaskLayout();
		::Dynamic refreshMaskLayout_dyn();

		void refreshBackgroundLayout();
		::Dynamic refreshBackgroundLayout_dyn();

		void validateChildren();
		::Dynamic validateChildren_dyn();

		void layoutGroup_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_addedToStageHandler_dyn();

		void layoutGroup_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_removedFromStageHandler_dyn();

		void layoutGroup_stage_resizeHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_stage_resizeHandler_dyn();

		void layoutGroup_child_resizeHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_child_resizeHandler_dyn();

		void layoutGroup_child_layoutDataChangeHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_child_layoutDataChangeHandler_dyn();

		void layoutGroup_layout_changeHandler( ::openfl::events::Event event);
		::Dynamic layoutGroup_layout_changeHandler_dyn();

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

		 ::openfl::display::DisplayObject _hx___maskSkin;
		 ::openfl::display::DisplayObject get_maskSkin();
		::Dynamic get_maskSkin_dyn();

		 ::openfl::display::DisplayObject set_maskSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_maskSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_maskSkin();
		::Dynamic clearStyle_maskSkin_dyn();

		virtual ::hx::Class get_styleContext();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_LayoutGroup */ 
