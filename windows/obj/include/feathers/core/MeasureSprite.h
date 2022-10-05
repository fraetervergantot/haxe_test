#ifndef INCLUDED_feathers_core_MeasureSprite
#define INCLUDED_feathers_core_MeasureSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES MeasureSprite_obj : public  ::feathers::core::ValidatingSprite_obj
{
	public:
		typedef  ::feathers::core::ValidatingSprite_obj super;
		typedef MeasureSprite_obj OBJ_;
		MeasureSprite_obj();

	public:
		enum { _hx_ClassId = 0x58123034 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.MeasureSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.MeasureSprite"); }
		static ::hx::ObjectPtr< MeasureSprite_obj > __new();
		static ::hx::ObjectPtr< MeasureSprite_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MeasureSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("MeasureSprite",e3,75,14,62); }

		Float actualWidth;
		Float actualHeight;
		Float actualMinWidth;
		Float actualMinHeight;
		Float actualMaxWidth;
		Float actualMaxHeight;
		Float scaledActualWidth;
		Float scaledActualHeight;
		Float scaledActualMinWidth;
		Float scaledActualMinHeight;
		Float scaledActualMaxWidth;
		Float scaledActualMaxHeight;
		Float get_width();

		Float set_width(Float value);

		Float get_height();

		Float set_height(Float value);

		Float set_scaleX(Float value);

		Float set_scaleY(Float value);

		 ::Dynamic _explicitWidth;
		 ::Dynamic get_explicitWidth();
		::Dynamic get_explicitWidth_dyn();

		 ::Dynamic set_explicitWidth( ::Dynamic value);
		::Dynamic set_explicitWidth_dyn();

		 ::Dynamic _explicitHeight;
		 ::Dynamic get_explicitHeight();
		::Dynamic get_explicitHeight_dyn();

		 ::Dynamic set_explicitHeight( ::Dynamic value);
		::Dynamic set_explicitHeight_dyn();

		 ::Dynamic _explicitMinWidth;
		 ::Dynamic get_explicitMinWidth();
		::Dynamic get_explicitMinWidth_dyn();

		 ::Dynamic set_explicitMinWidth( ::Dynamic value);
		::Dynamic set_explicitMinWidth_dyn();

		 ::Dynamic _explicitMinHeight;
		 ::Dynamic get_explicitMinHeight();
		::Dynamic get_explicitMinHeight_dyn();

		 ::Dynamic set_explicitMinHeight( ::Dynamic value);
		::Dynamic set_explicitMinHeight_dyn();

		Float get_minWidth();
		::Dynamic get_minWidth_dyn();

		Float set_minWidth(Float value);
		::Dynamic set_minWidth_dyn();

		Float get_minHeight();
		::Dynamic get_minHeight_dyn();

		Float set_minHeight(Float value);
		::Dynamic set_minHeight_dyn();

		 ::Dynamic _explicitMaxWidth;
		 ::Dynamic get_explicitMaxWidth();
		::Dynamic get_explicitMaxWidth_dyn();

		 ::Dynamic set_explicitMaxWidth( ::Dynamic value);
		::Dynamic set_explicitMaxWidth_dyn();

		 ::Dynamic _explicitMaxHeight;
		 ::Dynamic get_explicitMaxHeight();
		::Dynamic get_explicitMaxHeight_dyn();

		 ::Dynamic set_explicitMaxHeight( ::Dynamic value);
		::Dynamic set_explicitMaxHeight_dyn();

		Float get_maxWidth();
		::Dynamic get_maxWidth_dyn();

		Float set_maxWidth(Float value);
		::Dynamic set_maxWidth_dyn();

		Float get_maxHeight();
		::Dynamic get_maxHeight_dyn();

		Float set_maxHeight(Float value);
		::Dynamic set_maxHeight_dyn();

		void resetWidth();
		::Dynamic resetWidth_dyn();

		void resetHeight();
		::Dynamic resetHeight_dyn();

		void resetMinWidth();
		::Dynamic resetMinWidth_dyn();

		void resetMinHeight();
		::Dynamic resetMinHeight_dyn();

		void resetMaxWidth();
		::Dynamic resetMaxWidth_dyn();

		void resetMaxHeight();
		::Dynamic resetMaxHeight_dyn();

		 ::openfl::geom::Matrix _hx___getBoundsHelperMatrix1;
		 ::openfl::geom::Matrix _hx___getBoundsHelperMatrix2;
		 ::openfl::geom::Rectangle getBounds( ::openfl::display::DisplayObject targetCoordinateSpace);

		bool saveMeasurements(Float width,Float height,::hx::Null< Float >  minWidth,::hx::Null< Float >  minHeight, ::Dynamic maxWidth, ::Dynamic maxHeight);
		::Dynamic saveMeasurements_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_MeasureSprite */ 
