#ifndef INCLUDED_feathers_skins_RectangleSkin
#define INCLUDED_feathers_skins_RectangleSkin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateObserver)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,graphics,FillStyle)
HX_DECLARE_CLASS2(feathers,graphics,LineStyle)
HX_DECLARE_CLASS2(feathers,skins,BaseGraphicsPathSkin)
HX_DECLARE_CLASS2(feathers,skins,IProgrammaticSkin)
HX_DECLARE_CLASS2(feathers,skins,ProgrammaticSkin)
HX_DECLARE_CLASS2(feathers,skins,RectangleSkin)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES RectangleSkin_obj : public  ::feathers::skins::BaseGraphicsPathSkin_obj
{
	public:
		typedef  ::feathers::skins::BaseGraphicsPathSkin_obj super;
		typedef RectangleSkin_obj OBJ_;
		RectangleSkin_obj();

	public:
		enum { _hx_ClassId = 0x0d92f746 };

		void __construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.skins.RectangleSkin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.skins.RectangleSkin"); }
		static ::hx::ObjectPtr< RectangleSkin_obj > __new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		static ::hx::ObjectPtr< RectangleSkin_obj > __alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RectangleSkin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RectangleSkin",2c,aa,6a,09); }

		Float _cornerRadius;
		Float get_cornerRadius();
		::Dynamic get_cornerRadius_dyn();

		Float set_cornerRadius(Float value);
		::Dynamic set_cornerRadius_dyn();

		void drawPath();

};

} // end namespace feathers
} // end namespace skins

#endif /* INCLUDED_feathers_skins_RectangleSkin */ 
