#ifndef INCLUDED_feathers_layout_HorizontalDistributedLayout
#define INCLUDED_feathers_layout_HorizontalDistributedLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,HorizontalDistributedLayout)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,VerticalAlign)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES HorizontalDistributedLayout_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef HorizontalDistributedLayout_obj OBJ_;
		HorizontalDistributedLayout_obj();

	public:
		enum { _hx_ClassId = 0x4e8ffd6f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.layout.HorizontalDistributedLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.layout.HorizontalDistributedLayout"); }
		static ::hx::ObjectPtr< HorizontalDistributedLayout_obj > __new();
		static ::hx::ObjectPtr< HorizontalDistributedLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HorizontalDistributedLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("HorizontalDistributedLayout",89,9d,e4,1c); }

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

		Float _maxItemWidth;
		Float get_maxItemWidth();
		::Dynamic get_maxItemWidth_dyn();

		Float set_maxItemWidth(Float value);
		::Dynamic set_maxItemWidth_dyn();

		Float _minItemWidth;
		Float get_minItemWidth();
		::Dynamic get_minItemWidth_dyn();

		Float set_minItemWidth(Float value);
		::Dynamic set_minItemWidth_dyn();

		 ::feathers::layout::VerticalAlign _verticalAlign;
		 ::feathers::layout::VerticalAlign get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign set_verticalAlign( ::feathers::layout::VerticalAlign value);
		::Dynamic set_verticalAlign_dyn();

		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		 ::feathers::layout::LayoutBoundsResult layout(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result);
		::Dynamic layout_dyn();

		void applyDistributedWidth(::Array< ::Dynamic> items, ::Dynamic explicitWidth, ::Dynamic explicitMinWidth, ::Dynamic explicitMaxWidth);
		::Dynamic applyDistributedWidth_dyn();

		void applyVerticalAlign(::Array< ::Dynamic> items,Float viewPortHeight);
		::Dynamic applyVerticalAlign_dyn();

};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_HorizontalDistributedLayout */ 
