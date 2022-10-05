#ifndef INCLUDED_feathers_controls_supportClasses_LayoutViewPort
#define INCLUDED_feathers_controls_supportClasses_LayoutViewPort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,LayoutViewPort)
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
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES LayoutViewPort_obj : public  ::feathers::controls::LayoutGroup_obj
{
	public:
		typedef  ::feathers::controls::LayoutGroup_obj super;
		typedef LayoutViewPort_obj OBJ_;
		LayoutViewPort_obj();

	public:
		enum { _hx_ClassId = 0x5c64c42d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.supportClasses.LayoutViewPort")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.supportClasses.LayoutViewPort"); }
		static ::hx::ObjectPtr< LayoutViewPort_obj > __new();
		static ::hx::ObjectPtr< LayoutViewPort_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LayoutViewPort_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LayoutViewPort",70,31,ec,05); }

		 ::openfl::display::Sprite _viewPortBackground;
		Float _actualMinVisibleWidth;
		 ::Dynamic _explicitMinVisibleWidth;
		 ::Dynamic get_minVisibleWidth();
		::Dynamic get_minVisibleWidth_dyn();

		 ::Dynamic set_minVisibleWidth( ::Dynamic value);
		::Dynamic set_minVisibleWidth_dyn();

		 ::Dynamic _maxVisibleWidth;
		 ::Dynamic get_maxVisibleWidth();
		::Dynamic get_maxVisibleWidth_dyn();

		 ::Dynamic set_maxVisibleWidth( ::Dynamic value);
		::Dynamic set_maxVisibleWidth_dyn();

		Float _actualVisibleWidth;
		 ::Dynamic _explicitVisibleWidth;
		 ::Dynamic get_visibleWidth();
		::Dynamic get_visibleWidth_dyn();

		 ::Dynamic set_visibleWidth( ::Dynamic value);
		::Dynamic set_visibleWidth_dyn();

		Float _actualMinVisibleHeight;
		 ::Dynamic _explicitMinVisibleHeight;
		 ::Dynamic get_minVisibleHeight();
		::Dynamic get_minVisibleHeight_dyn();

		 ::Dynamic set_minVisibleHeight( ::Dynamic value);
		::Dynamic set_minVisibleHeight_dyn();

		 ::Dynamic _maxVisibleHeight;
		 ::Dynamic get_maxVisibleHeight();
		::Dynamic get_maxVisibleHeight_dyn();

		 ::Dynamic set_maxVisibleHeight( ::Dynamic value);
		::Dynamic set_maxVisibleHeight_dyn();

		Float _actualVisibleHeight;
		 ::Dynamic _explicitVisibleHeight;
		 ::Dynamic get_visibleHeight();
		::Dynamic get_visibleHeight_dyn();

		 ::Dynamic set_visibleHeight( ::Dynamic value);
		::Dynamic set_visibleHeight_dyn();

		Float _scrollX;
		Float get_scrollX();
		::Dynamic get_scrollX_dyn();

		Float set_scrollX(Float value);
		::Dynamic set_scrollX_dyn();

		Float _scrollY;
		Float get_scrollY();
		::Dynamic get_scrollY_dyn();

		Float set_scrollY(Float value);
		::Dynamic set_scrollY_dyn();

		::Array< Float > _snapPositionsX;
		::Array< Float > get_snapPositionsX();
		::Dynamic get_snapPositionsX_dyn();

		::Array< Float > _snapPositionsY;
		::Array< Float > get_snapPositionsY();
		::Dynamic get_snapPositionsY_dyn();

		void refreshViewPortBounds();

		void handleCustomLayout();

		void handleLayoutResult();

};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_LayoutViewPort */ 
