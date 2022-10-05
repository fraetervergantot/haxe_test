#ifndef INCLUDED_feathers_layout_VerticalLayout
#define INCLUDED_feathers_layout_VerticalLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,HorizontalAlign)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,VerticalAlign)
HX_DECLARE_CLASS2(feathers,layout,VerticalLayout)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES VerticalLayout_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef VerticalLayout_obj OBJ_;
		VerticalLayout_obj();

	public:
		enum { _hx_ClassId = 0x253843e6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.layout.VerticalLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.layout.VerticalLayout"); }
		static ::hx::ObjectPtr< VerticalLayout_obj > __new();
		static ::hx::ObjectPtr< VerticalLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("VerticalLayout",e0,2f,92,cd); }

		Float _paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float _paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float _paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float _paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float _gap;
		Float get_gap();
		::Dynamic get_gap_dyn();

		Float set_gap(Float value);
		::Dynamic set_gap_dyn();

		Float _minGap;
		Float get_minGap();
		::Dynamic get_minGap_dyn();

		Float set_minGap(Float value);
		::Dynamic set_minGap_dyn();

		 ::feathers::layout::HorizontalAlign _horizontalAlign;
		 ::feathers::layout::HorizontalAlign get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		 ::feathers::layout::HorizontalAlign set_horizontalAlign( ::feathers::layout::HorizontalAlign value);
		::Dynamic set_horizontalAlign_dyn();

		 ::feathers::layout::VerticalAlign _verticalAlign;
		 ::feathers::layout::VerticalAlign get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign set_verticalAlign( ::feathers::layout::VerticalAlign value);
		::Dynamic set_verticalAlign_dyn();

		bool _justifyResetEnabled;
		bool get_justifyResetEnabled();
		::Dynamic get_justifyResetEnabled_dyn();

		bool set_justifyResetEnabled(bool value);
		::Dynamic set_justifyResetEnabled_dyn();

		bool _percentWidthResetEnabled;
		bool get_percentWidthResetEnabled();
		::Dynamic get_percentWidthResetEnabled_dyn();

		bool set_percentWidthResetEnabled(bool value);
		::Dynamic set_percentWidthResetEnabled_dyn();

		bool _percentHeightResetEnabled;
		bool get_percentHeightResetEnabled();
		::Dynamic get_percentHeightResetEnabled_dyn();

		bool set_percentHeightResetEnabled(bool value);
		::Dynamic set_percentHeightResetEnabled_dyn();

		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		 ::feathers::layout::LayoutBoundsResult layout(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result);
		::Dynamic layout_dyn();

		void validateItems(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements);
		::Dynamic validateItems_dyn();

		void applyHorizontalAlign(::Array< ::Dynamic> items,Float maxItemWidth,Float viewPortWidth);
		::Dynamic applyHorizontalAlign_dyn();

		void applyVerticalAlign(::Array< ::Dynamic> items,Float contentHeight,Float viewPortHeight);
		::Dynamic applyVerticalAlign_dyn();

		void applyPercentWidth(::Array< ::Dynamic> items,Float viewPortWidth);
		::Dynamic applyPercentWidth_dyn();

		void applyPercentHeight(::Array< ::Dynamic> items, ::Dynamic explicitHeight, ::Dynamic explicitMinHeight, ::Dynamic explicitMaxHeight,Float adjustedGap);
		::Dynamic applyPercentHeight_dyn();

};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_VerticalLayout */ 
