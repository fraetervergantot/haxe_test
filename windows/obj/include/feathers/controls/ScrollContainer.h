#ifndef INCLUDED_feathers_controls_ScrollContainer
#define INCLUDED_feathers_controls_ScrollContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,controls,ScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,LayoutViewPort)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,FeathersEvent)
HX_DECLARE_CLASS2(feathers,layout,AutoSizeMode)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
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


class HXCPP_CLASS_ATTRIBUTES ScrollContainer_obj : public  ::feathers::controls::supportClasses::BaseScrollContainer_obj
{
	public:
		typedef  ::feathers::controls::supportClasses::BaseScrollContainer_obj super;
		typedef ScrollContainer_obj OBJ_;
		ScrollContainer_obj();

	public:
		enum { _hx_ClassId = 0x19d9e0ee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.ScrollContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.ScrollContainer"); }
		static ::hx::ObjectPtr< ScrollContainer_obj > __new();
		static ::hx::ObjectPtr< ScrollContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ScrollContainer",54,9b,da,06); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::feathers::controls::supportClasses::LayoutViewPort layoutViewPort;
		bool _ignoreChildChanges;
		bool _ignoreChangesButSetFlags;
		bool _displayListBypassEnabled;
		::Array< ::Dynamic> items;
		::Array< ::Dynamic> _xmlContent;
		::Array< ::Dynamic> get_xmlContent();
		::Dynamic get_xmlContent_dyn();

		::Array< ::Dynamic> set_xmlContent(::Array< ::Dynamic> value);
		::Dynamic set_xmlContent_dyn();

		bool _childFocusEnabled;
		bool get_childFocusEnabled();
		::Dynamic get_childFocusEnabled_dyn();

		bool set_childFocusEnabled(bool value);
		::Dynamic set_childFocusEnabled_dyn();

		 ::feathers::layout::AutoSizeMode _autoSizeMode;
		 ::feathers::layout::AutoSizeMode get_autoSizeMode();
		::Dynamic get_autoSizeMode_dyn();

		 ::feathers::layout::AutoSizeMode set_autoSizeMode( ::feathers::layout::AutoSizeMode value);
		::Dynamic set_autoSizeMode_dyn();

		int get_numRawChildren();
		::Dynamic get_numRawChildren_dyn();

		int get_numChildren();

		 ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int index);

		 ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject removeChildAt(int index);

		 ::openfl::display::DisplayObject getChildAt(int index);

		int getChildIndex( ::openfl::display::DisplayObject child);

		void setChildIndex( ::openfl::display::DisplayObject child,int index);

		 ::openfl::display::DisplayObject getChildByName(::String name);

		 ::openfl::display::DisplayObject addRawChild( ::openfl::display::DisplayObject child);
		::Dynamic addRawChild_dyn();

		 ::openfl::display::DisplayObject addRawChildAt( ::openfl::display::DisplayObject child,int index);
		::Dynamic addRawChildAt_dyn();

		 ::openfl::display::DisplayObject removeRawChild( ::openfl::display::DisplayObject child);
		::Dynamic removeRawChild_dyn();

		 ::openfl::display::DisplayObject removeRawChildAt(int index);
		::Dynamic removeRawChildAt_dyn();

		 ::openfl::display::DisplayObject getRawChildByName(::String name);
		::Dynamic getRawChildByName_dyn();

		 ::openfl::display::DisplayObject getRawChildAt(int index);
		::Dynamic getRawChildAt_dyn();

		int getRawChildIndex( ::openfl::display::DisplayObject child);
		::Dynamic getRawChildIndex_dyn();

		void setRawChildIndex( ::openfl::display::DisplayObject child,int index);
		::Dynamic setRawChildIndex_dyn();

		void removeChildren(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);

		void removeRawChildren(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic removeRawChildren_dyn();

		void initializeScrollContainerTheme();
		::Dynamic initializeScrollContainerTheme_dyn();

		bool dispatchEvent( ::openfl::events::Event event);

		void validateNow();

		virtual void update();

		bool measure();

		void refreshViewPortBoundsForMeasurement();

		void refreshViewPortBoundsForLayout();

		void refreshScrollerValues();

		bool needsScrollMeasurement();

		void refreshLayout();
		::Dynamic refreshLayout_dyn();

		void scrollContainer_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic scrollContainer_addedToStageHandler_dyn();

		void scrollContainer_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic scrollContainer_removedFromStageHandler_dyn();

		void scrollContainer_stage_resizeHandler( ::openfl::events::Event event);
		::Dynamic scrollContainer_stage_resizeHandler_dyn();

		void scrollContainer_child_layoutDataChangeHandler( ::feathers::events::FeathersEvent event);
		::Dynamic scrollContainer_child_layoutDataChangeHandler_dyn();

		void scrollContainer_child_resizeHandler( ::openfl::events::Event event);
		::Dynamic scrollContainer_child_resizeHandler_dyn();

		virtual ::hx::Class get_styleContext();

		::Dynamic _hx___layout;
		::Dynamic get_layout();
		::Dynamic get_layout_dyn();

		::Dynamic set_layout(::Dynamic value);
		::Dynamic set_layout_dyn();

		::Dynamic clearStyle_layout();
		::Dynamic clearStyle_layout_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ScrollContainer */ 
