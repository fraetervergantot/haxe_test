#ifndef INCLUDED_feathers_controls_Panel
#define INCLUDED_feathers_controls_Panel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,Panel)
HX_DECLARE_CLASS2(feathers,controls,ScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusExtras)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
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


class HXCPP_CLASS_ATTRIBUTES Panel_obj : public  ::feathers::controls::ScrollContainer_obj
{
	public:
		typedef  ::feathers::controls::ScrollContainer_obj super;
		typedef Panel_obj OBJ_;
		Panel_obj();

	public:
		enum { _hx_ClassId = 0x04d50bfe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.Panel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.Panel"); }
		static ::hx::ObjectPtr< Panel_obj > __new();
		static ::hx::ObjectPtr< Panel_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Panel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Panel",e4,ea,7f,50); }

		bool _ignoreHeaderResize;
		 ::feathers::layout::Measurements _headerMeasurements;
		 ::openfl::display::DisplayObject _header;
		 ::openfl::display::DisplayObject get_header();
		::Dynamic get_header_dyn();

		virtual  ::openfl::display::DisplayObject set_header( ::openfl::display::DisplayObject value);
		::Dynamic set_header_dyn();

		bool _ignoreFooterResize;
		 ::feathers::layout::Measurements _footerMeasurements;
		 ::openfl::display::DisplayObject _footer;
		 ::openfl::display::DisplayObject get_footer();
		::Dynamic get_footer_dyn();

		virtual  ::openfl::display::DisplayObject set_footer( ::openfl::display::DisplayObject value);
		::Dynamic set_footer_dyn();

		::Array< ::Dynamic> _focusExtrasBefore;
		::Array< ::Dynamic> get_focusExtrasBefore();
		::Dynamic get_focusExtrasBefore_dyn();

		::Array< ::Dynamic> _focusExtrasAfter;
		::Array< ::Dynamic> get_focusExtrasAfter();
		::Dynamic get_focusExtrasAfter_dyn();

		void initializePanelTheme();
		::Dynamic initializePanelTheme_dyn();

		virtual void update();

		void calculateViewPortOffsets(bool forceScrollBars,bool useActualBounds);

		void layoutHeader();
		::Dynamic layoutHeader_dyn();

		void layoutFooter();
		::Dynamic layoutFooter_dyn();

		void panel_header_resizeHandler( ::openfl::events::Event event);
		::Dynamic panel_header_resizeHandler_dyn();

		void panel_footer_resizeHandler( ::openfl::events::Event event);
		::Dynamic panel_footer_resizeHandler_dyn();

		virtual ::hx::Class get_styleContext();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_Panel */ 
