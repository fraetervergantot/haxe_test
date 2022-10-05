#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#define INCLUDED_feathers_controls_supportClasses_BaseScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IRange)
HX_DECLARE_CLASS2(feathers,controls,IScrollBar)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollBar)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
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
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES BaseScrollBar_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef BaseScrollBar_obj OBJ_;
		BaseScrollBar_obj();

	public:
		enum { _hx_ClassId = 0x28846938 };

		void __construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.supportClasses.BaseScrollBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.supportClasses.BaseScrollBar"); }
		static ::hx::ObjectPtr< BaseScrollBar_obj > __new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		static ::hx::ObjectPtr< BaseScrollBar_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseScrollBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseScrollBar",55,95,43,86); }

		bool _isDefaultValue;
		Float _value;
		Float get_value();
		::Dynamic get_value_dyn();

		Float set_value(Float value);
		::Dynamic set_value_dyn();

		Float _minimum;
		Float get_minimum();
		::Dynamic get_minimum_dyn();

		Float set_minimum(Float value);
		::Dynamic set_minimum_dyn();

		Float _maximum;
		Float get_maximum();
		::Dynamic get_maximum_dyn();

		Float set_maximum(Float value);
		::Dynamic set_maximum_dyn();

		Float _step;
		Float get_step();
		::Dynamic get_step_dyn();

		Float set_step(Float value);
		::Dynamic set_step_dyn();

		Float _snapInterval;
		Float get_snapInterval();
		::Dynamic get_snapInterval_dyn();

		Float set_snapInterval(Float value);
		::Dynamic set_snapInterval_dyn();

		Float _page;
		Float get_page();
		::Dynamic get_page_dyn();

		Float set_page(Float value);
		::Dynamic set_page_dyn();

		bool liveDragging;
		 ::openfl::display::InteractiveObject _currentThumbSkin;
		 ::feathers::layout::Measurements _thumbSkinMeasurements;
		 ::openfl::display::InteractiveObject _currentTrackSkin;
		 ::feathers::layout::Measurements _trackSkinMeasurements;
		 ::openfl::display::InteractiveObject _currentSecondaryTrackSkin;
		 ::feathers::layout::Measurements _secondaryTrackSkinMeasurements;
		bool _dragging;
		Float _pointerStartX;
		Float _pointerStartY;
		Float _thumbStartX;
		Float _thumbStartY;
		Float _previousFallbackTrackWidth;
		Float _previousFallbackTrackHeight;
		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		void applyValueRestrictions();
		::Dynamic applyValueRestrictions_dyn();

		void initialize();

		void update();

		virtual bool measure();
		::Dynamic measure_dyn();

		void refreshThumb();
		::Dynamic refreshThumb_dyn();

		void refreshTrack();
		::Dynamic refreshTrack_dyn();

		void refreshSecondaryTrack();
		::Dynamic refreshSecondaryTrack_dyn();

		void refreshEnabled();
		::Dynamic refreshEnabled_dyn();

		void layoutContent();
		::Dynamic layoutContent_dyn();

		virtual void layoutSplitTrack();
		::Dynamic layoutSplitTrack_dyn();

		virtual void layoutSingleTrack();
		::Dynamic layoutSingleTrack_dyn();

		virtual void layoutThumb();
		::Dynamic layoutThumb_dyn();

		void drawFallbackTrack();
		::Dynamic drawFallbackTrack_dyn();

		Float normalizeValue(Float value);
		::Dynamic normalizeValue_dyn();

		Float restrictValue(Float value);
		::Dynamic restrictValue_dyn();

		virtual Float valueToLocation(Float value);
		::Dynamic valueToLocation_dyn();

		virtual Float locationToValue(Float x,Float y);
		::Dynamic locationToValue_dyn();

		virtual void saveThumbStart(Float x,Float y);
		::Dynamic saveThumbStart_dyn();

		Float getAdjustedPage();
		::Dynamic getAdjustedPage_dyn();

		void thumbSkin_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic thumbSkin_mouseDownHandler_dyn();

		void thumbSkin_stage_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic thumbSkin_stage_mouseMoveHandler_dyn();

		void thumbSkin_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic thumbSkin_stage_mouseUpHandler_dyn();

		void trackSkin_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic trackSkin_mouseDownHandler_dyn();

		void trackSkin_stage_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic trackSkin_stage_mouseMoveHandler_dyn();

		void trackSkin_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic trackSkin_stage_mouseUpHandler_dyn();

		 ::openfl::display::InteractiveObject _hx___thumbSkin;
		 ::openfl::display::InteractiveObject get_thumbSkin();
		::Dynamic get_thumbSkin_dyn();

		 ::openfl::display::InteractiveObject set_thumbSkin( ::openfl::display::InteractiveObject value);
		::Dynamic set_thumbSkin_dyn();

		 ::openfl::display::InteractiveObject clearStyle_thumbSkin();
		::Dynamic clearStyle_thumbSkin_dyn();

		 ::openfl::display::InteractiveObject _hx___trackSkin;
		 ::openfl::display::InteractiveObject get_trackSkin();
		::Dynamic get_trackSkin_dyn();

		 ::openfl::display::InteractiveObject set_trackSkin( ::openfl::display::InteractiveObject value);
		::Dynamic set_trackSkin_dyn();

		 ::openfl::display::InteractiveObject clearStyle_trackSkin();
		::Dynamic clearStyle_trackSkin_dyn();

		 ::openfl::display::InteractiveObject _hx___secondaryTrackSkin;
		 ::openfl::display::InteractiveObject get_secondaryTrackSkin();
		::Dynamic get_secondaryTrackSkin_dyn();

		 ::openfl::display::InteractiveObject set_secondaryTrackSkin( ::openfl::display::InteractiveObject value);
		::Dynamic set_secondaryTrackSkin_dyn();

		 ::openfl::display::InteractiveObject clearStyle_secondaryTrackSkin();
		::Dynamic clearStyle_secondaryTrackSkin_dyn();

		bool _hx___fixedThumbSize;
		bool get_fixedThumbSize();
		::Dynamic get_fixedThumbSize_dyn();

		bool set_fixedThumbSize(bool value);
		::Dynamic set_fixedThumbSize_dyn();

		bool clearStyle_fixedThumbSize();
		::Dynamic clearStyle_fixedThumbSize_dyn();

		Float _hx___paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float clearStyle_paddingTop();
		::Dynamic clearStyle_paddingTop_dyn();

		Float _hx___paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float clearStyle_paddingRight();
		::Dynamic clearStyle_paddingRight_dyn();

		Float _hx___paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float clearStyle_paddingBottom();
		::Dynamic clearStyle_paddingBottom_dyn();

		Float _hx___paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float clearStyle_paddingLeft();
		::Dynamic clearStyle_paddingLeft_dyn();

		bool _hx___hideThumbWhenDisabled;
		bool get_hideThumbWhenDisabled();
		::Dynamic get_hideThumbWhenDisabled_dyn();

		bool set_hideThumbWhenDisabled(bool value);
		::Dynamic set_hideThumbWhenDisabled_dyn();

		bool clearStyle_hideThumbWhenDisabled();
		::Dynamic clearStyle_hideThumbWhenDisabled_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_BaseScrollBar */ 
