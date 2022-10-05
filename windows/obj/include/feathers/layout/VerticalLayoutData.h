#ifndef INCLUDED_feathers_layout_VerticalLayoutData
#define INCLUDED_feathers_layout_VerticalLayoutData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,ILayoutData)
HX_DECLARE_CLASS2(feathers,layout,VerticalLayoutData)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES VerticalLayoutData_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef VerticalLayoutData_obj OBJ_;
		VerticalLayoutData_obj();

	public:
		enum { _hx_ClassId = 0x35c6ca68 };

		void __construct( ::Dynamic percentWidth, ::Dynamic percentHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.layout.VerticalLayoutData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.layout.VerticalLayoutData"); }
		static ::hx::ObjectPtr< VerticalLayoutData_obj > __new( ::Dynamic percentWidth, ::Dynamic percentHeight);
		static ::hx::ObjectPtr< VerticalLayoutData_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic percentWidth, ::Dynamic percentHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VerticalLayoutData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("VerticalLayoutData",2a,22,d4,fa); }

		static  ::feathers::layout::VerticalLayoutData fill();
		static ::Dynamic fill_dyn();

		static  ::feathers::layout::VerticalLayoutData fillHorizontal(::hx::Null< Float >  percentWidth);
		static ::Dynamic fillHorizontal_dyn();

		static  ::feathers::layout::VerticalLayoutData fillVertical(::hx::Null< Float >  percentHeight);
		static ::Dynamic fillVertical_dyn();

		 ::Dynamic _percentWidth;
		 ::Dynamic get_percentWidth();
		::Dynamic get_percentWidth_dyn();

		 ::Dynamic set_percentWidth( ::Dynamic value);
		::Dynamic set_percentWidth_dyn();

		 ::Dynamic _percentHeight;
		 ::Dynamic get_percentHeight();
		::Dynamic get_percentHeight_dyn();

		 ::Dynamic set_percentHeight( ::Dynamic value);
		::Dynamic set_percentHeight_dyn();

};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_VerticalLayoutData */ 
