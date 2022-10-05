#ifndef INCLUDED_feathers_skins_TabSkin
#define INCLUDED_feathers_skins_TabSkin

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
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,skins,BaseGraphicsPathSkin)
HX_DECLARE_CLASS2(feathers,skins,IProgrammaticSkin)
HX_DECLARE_CLASS2(feathers,skins,ProgrammaticSkin)
HX_DECLARE_CLASS2(feathers,skins,TabSkin)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES TabSkin_obj : public  ::feathers::skins::BaseGraphicsPathSkin_obj
{
	public:
		typedef  ::feathers::skins::BaseGraphicsPathSkin_obj super;
		typedef TabSkin_obj OBJ_;
		TabSkin_obj();

	public:
		enum { _hx_ClassId = 0x69a730ec };

		void __construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.skins.TabSkin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.skins.TabSkin"); }
		static ::hx::ObjectPtr< TabSkin_obj > __new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius);
		static ::hx::ObjectPtr< TabSkin_obj > __alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabSkin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabSkin",52,13,1c,12); }

		 ::feathers::layout::RelativePosition _cornerRadiusPosition;
		 ::feathers::layout::RelativePosition get_cornerRadiusPosition();
		::Dynamic get_cornerRadiusPosition_dyn();

		 ::feathers::layout::RelativePosition set_cornerRadiusPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_cornerRadiusPosition_dyn();

		bool _drawBaseBorder;
		bool get_drawBaseBorder();
		::Dynamic get_drawBaseBorder_dyn();

		bool set_drawBaseBorder(bool value);
		::Dynamic set_drawBaseBorder_dyn();

		Float _cornerRadius;
		Float get_cornerRadius();
		::Dynamic get_cornerRadius_dyn();

		Float set_cornerRadius(Float value);
		::Dynamic set_cornerRadius_dyn();

		void drawPath();

};

} // end namespace feathers
} // end namespace skins

#endif /* INCLUDED_feathers_skins_TabSkin */ 
