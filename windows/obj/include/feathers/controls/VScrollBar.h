#ifndef INCLUDED_feathers_controls_VScrollBar
#define INCLUDED_feathers_controls_VScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IRange)
HX_DECLARE_CLASS2(feathers,controls,IScrollBar)
HX_DECLARE_CLASS2(feathers,controls,VScrollBar)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollBar)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
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


class HXCPP_CLASS_ATTRIBUTES VScrollBar_obj : public  ::feathers::controls::supportClasses::BaseScrollBar_obj
{
	public:
		typedef  ::feathers::controls::supportClasses::BaseScrollBar_obj super;
		typedef VScrollBar_obj OBJ_;
		VScrollBar_obj();

	public:
		enum { _hx_ClassId = 0x1c8e1d36 };

		void __construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.VScrollBar")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.VScrollBar"); }
		static ::hx::ObjectPtr< VScrollBar_obj > __new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		static ::hx::ObjectPtr< VScrollBar_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VScrollBar_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VScrollBar",90,7c,d3,78); }

		void initializeVScrollBarTheme();
		::Dynamic initializeVScrollBarTheme_dyn();

		Float valueToLocation(Float value);

		Float locationToValue(Float x,Float y);

		void saveThumbStart(Float x,Float y);

		bool measure();

		void layoutSplitTrack();

		void layoutSingleTrack();

		void layoutThumb();

		::hx::Class get_styleContext();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_VScrollBar */ 
