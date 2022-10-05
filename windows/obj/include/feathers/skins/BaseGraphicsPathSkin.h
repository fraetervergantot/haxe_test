#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#define INCLUDED_feathers_skins_BaseGraphicsPathSkin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
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
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace feathers{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES BaseGraphicsPathSkin_obj : public  ::feathers::skins::ProgrammaticSkin_obj
{
	public:
		typedef  ::feathers::skins::ProgrammaticSkin_obj super;
		typedef BaseGraphicsPathSkin_obj OBJ_;
		BaseGraphicsPathSkin_obj();

	public:
		enum { _hx_ClassId = 0x33776324 };

		void __construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.skins.BaseGraphicsPathSkin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.skins.BaseGraphicsPathSkin"); }
		static ::hx::ObjectPtr< BaseGraphicsPathSkin_obj > __new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		static ::hx::ObjectPtr< BaseGraphicsPathSkin_obj > __alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseGraphicsPathSkin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseGraphicsPathSkin",fe,78,2c,e7); }

		 ::feathers::graphics::LineStyle _previousBorder;
		 ::feathers::graphics::FillStyle _previousFill;
		 ::haxe::ds::EnumValueMap _stateToFill;
		 ::feathers::graphics::FillStyle _fill;
		 ::feathers::graphics::FillStyle get_fill();
		::Dynamic get_fill_dyn();

		 ::feathers::graphics::FillStyle set_fill( ::feathers::graphics::FillStyle value);
		::Dynamic set_fill_dyn();

		 ::feathers::graphics::FillStyle _disabledFill;
		 ::feathers::graphics::FillStyle get_disabledFill();
		::Dynamic get_disabledFill_dyn();

		 ::feathers::graphics::FillStyle set_disabledFill( ::feathers::graphics::FillStyle value);
		::Dynamic set_disabledFill_dyn();

		 ::feathers::graphics::FillStyle _selectedFill;
		 ::feathers::graphics::FillStyle get_selectedFill();
		::Dynamic get_selectedFill_dyn();

		 ::feathers::graphics::FillStyle set_selectedFill( ::feathers::graphics::FillStyle value);
		::Dynamic set_selectedFill_dyn();

		 ::haxe::ds::EnumValueMap _stateToBorder;
		 ::feathers::graphics::LineStyle _border;
		 ::feathers::graphics::LineStyle get_border();
		::Dynamic get_border_dyn();

		 ::feathers::graphics::LineStyle set_border( ::feathers::graphics::LineStyle value);
		::Dynamic set_border_dyn();

		 ::feathers::graphics::LineStyle _disabledBorder;
		 ::feathers::graphics::LineStyle get_disabledBorder();
		::Dynamic get_disabledBorder_dyn();

		 ::feathers::graphics::LineStyle set_disabledBorder( ::feathers::graphics::LineStyle value);
		::Dynamic set_disabledBorder_dyn();

		 ::feathers::graphics::LineStyle _selectedBorder;
		 ::feathers::graphics::LineStyle get_selectedBorder();
		::Dynamic get_selectedBorder_dyn();

		 ::feathers::graphics::LineStyle set_selectedBorder( ::feathers::graphics::LineStyle value);
		::Dynamic set_selectedBorder_dyn();

		 ::feathers::graphics::FillStyle getFillForState( ::Dynamic state);
		::Dynamic getFillForState_dyn();

		void setFillForState( ::Dynamic state, ::feathers::graphics::FillStyle fill);
		::Dynamic setFillForState_dyn();

		 ::feathers::graphics::LineStyle getBorderForState( ::Dynamic state);
		::Dynamic getBorderForState_dyn();

		void setBorderForState( ::Dynamic state, ::feathers::graphics::LineStyle border);
		::Dynamic setBorderForState_dyn();

		void update();

		void draw();
		::Dynamic draw_dyn();

		virtual void drawPath();
		::Dynamic drawPath_dyn();

		void applyLineStyle( ::feathers::graphics::LineStyle lineStyle);
		::Dynamic applyLineStyle_dyn();

		void applyFillStyle( ::feathers::graphics::FillStyle fillStyle);
		::Dynamic applyFillStyle_dyn();

		Float getLineThickness( ::feathers::graphics::LineStyle lineStyle);
		::Dynamic getLineThickness_dyn();

		 ::openfl::geom::Matrix getDefaultGradientMatrix(Float width,Float height, ::Dynamic radians, ::Dynamic tx, ::Dynamic ty);
		::Dynamic getDefaultGradientMatrix_dyn();

		Float getDefaultGradientMatrixWidth();
		::Dynamic getDefaultGradientMatrixWidth_dyn();

		Float getDefaultGradientMatrixHeight();
		::Dynamic getDefaultGradientMatrixHeight_dyn();

		Float getDefaultGradientMatrixRadians();
		::Dynamic getDefaultGradientMatrixRadians_dyn();

		Float getDefaultGradientMatrixTx();
		::Dynamic getDefaultGradientMatrixTx_dyn();

		Float getDefaultGradientMatrixTy();
		::Dynamic getDefaultGradientMatrixTy_dyn();

		 ::feathers::graphics::LineStyle getCurrentBorder();
		::Dynamic getCurrentBorder_dyn();

		 ::feathers::graphics::LineStyle getCurrentBorderWithoutCache();
		::Dynamic getCurrentBorderWithoutCache_dyn();

		 ::feathers::graphics::FillStyle getCurrentFill();
		::Dynamic getCurrentFill_dyn();

		 ::feathers::graphics::FillStyle getCurrentFillWithoutCache();
		::Dynamic getCurrentFillWithoutCache_dyn();

		bool needsStateUpdate();

};

} // end namespace feathers
} // end namespace skins

#endif /* INCLUDED_feathers_skins_BaseGraphicsPathSkin */ 
