#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_26_new,"feathers.skins.BaseGraphicsPathSkin","new",0xdcb096c6,"feathers.skins.BaseGraphicsPathSkin.new","feathers/skins/BaseGraphicsPathSkin.hx",26,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_49_get_fill,"feathers.skins.BaseGraphicsPathSkin","get_fill",0x0b72d1e6,"feathers.skins.BaseGraphicsPathSkin.get_fill","feathers/skins/BaseGraphicsPathSkin.hx",49,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_52_set_fill,"feathers.skins.BaseGraphicsPathSkin","set_fill",0xb9d02b5a,"feathers.skins.BaseGraphicsPathSkin.set_fill","feathers/skins/BaseGraphicsPathSkin.hx",52,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_78_get_disabledFill,"feathers.skins.BaseGraphicsPathSkin","get_disabledFill",0xac4b4882,"feathers.skins.BaseGraphicsPathSkin.get_disabledFill","feathers/skins/BaseGraphicsPathSkin.hx",78,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_81_set_disabledFill,"feathers.skins.BaseGraphicsPathSkin","set_disabledFill",0x028d35f6,"feathers.skins.BaseGraphicsPathSkin.set_disabledFill","feathers/skins/BaseGraphicsPathSkin.hx",81,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_106_get_selectedFill,"feathers.skins.BaseGraphicsPathSkin","get_selectedFill",0x12a38ce1,"feathers.skins.BaseGraphicsPathSkin.get_selectedFill","feathers/skins/BaseGraphicsPathSkin.hx",106,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_109_set_selectedFill,"feathers.skins.BaseGraphicsPathSkin","set_selectedFill",0x68e57a55,"feathers.skins.BaseGraphicsPathSkin.set_selectedFill","feathers/skins/BaseGraphicsPathSkin.hx",109,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_133_get_border,"feathers.skins.BaseGraphicsPathSkin","get_border",0xca232f0f,"feathers.skins.BaseGraphicsPathSkin.get_border","feathers/skins/BaseGraphicsPathSkin.hx",133,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_136_set_border,"feathers.skins.BaseGraphicsPathSkin","set_border",0xcda0cd83,"feathers.skins.BaseGraphicsPathSkin.set_border","feathers/skins/BaseGraphicsPathSkin.hx",136,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_162_get_disabledBorder,"feathers.skins.BaseGraphicsPathSkin","get_disabledBorder",0xaafb84ab,"feathers.skins.BaseGraphicsPathSkin.get_disabledBorder","feathers/skins/BaseGraphicsPathSkin.hx",162,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_165_set_disabledBorder,"feathers.skins.BaseGraphicsPathSkin","set_disabledBorder",0x87aab71f,"feathers.skins.BaseGraphicsPathSkin.set_disabledBorder","feathers/skins/BaseGraphicsPathSkin.hx",165,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_190_get_selectedBorder,"feathers.skins.BaseGraphicsPathSkin","get_selectedBorder",0x8b34deca,"feathers.skins.BaseGraphicsPathSkin.get_selectedBorder","feathers/skins/BaseGraphicsPathSkin.hx",190,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_193_set_selectedBorder,"feathers.skins.BaseGraphicsPathSkin","set_selectedBorder",0x67e4113e,"feathers.skins.BaseGraphicsPathSkin.set_selectedBorder","feathers/skins/BaseGraphicsPathSkin.hx",193,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_217_getFillForState,"feathers.skins.BaseGraphicsPathSkin","getFillForState",0x474e6107,"feathers.skins.BaseGraphicsPathSkin.getFillForState","feathers/skins/BaseGraphicsPathSkin.hx",217,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_239_setFillForState,"feathers.skins.BaseGraphicsPathSkin","setFillForState",0x4319de13,"feathers.skins.BaseGraphicsPathSkin.setFillForState","feathers/skins/BaseGraphicsPathSkin.hx",239,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_266_getBorderForState,"feathers.skins.BaseGraphicsPathSkin","getBorderForState",0x38f56f70,"feathers.skins.BaseGraphicsPathSkin.getBorderForState","feathers/skins/BaseGraphicsPathSkin.hx",266,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_288_setBorderForState,"feathers.skins.BaseGraphicsPathSkin","setBorderForState",0x5c63477c,"feathers.skins.BaseGraphicsPathSkin.setBorderForState","feathers/skins/BaseGraphicsPathSkin.hx",288,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_303_update,"feathers.skins.BaseGraphicsPathSkin","update",0xefd44363,"feathers.skins.BaseGraphicsPathSkin.update","feathers/skins/BaseGraphicsPathSkin.hx",303,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_310_draw,"feathers.skins.BaseGraphicsPathSkin","draw",0x3740fede,"feathers.skins.BaseGraphicsPathSkin.draw","feathers/skins/BaseGraphicsPathSkin.hx",310,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_326_drawPath,"feathers.skins.BaseGraphicsPathSkin","drawPath",0xa6b7d7a3,"feathers.skins.BaseGraphicsPathSkin.drawPath","feathers/skins/BaseGraphicsPathSkin.hx",326,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_328_applyLineStyle,"feathers.skins.BaseGraphicsPathSkin","applyLineStyle",0x03c98ca9,"feathers.skins.BaseGraphicsPathSkin.applyLineStyle","feathers/skins/BaseGraphicsPathSkin.hx",328,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_391_applyFillStyle,"feathers.skins.BaseGraphicsPathSkin","applyFillStyle",0x8b75afba,"feathers.skins.BaseGraphicsPathSkin.applyFillStyle","feathers/skins/BaseGraphicsPathSkin.hx",391,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_441_getLineThickness,"feathers.skins.BaseGraphicsPathSkin","getLineThickness",0x41b57644,"feathers.skins.BaseGraphicsPathSkin.getLineThickness","feathers/skins/BaseGraphicsPathSkin.hx",441,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_461_getDefaultGradientMatrix,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrix",0xaeb23456,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrix","feathers/skins/BaseGraphicsPathSkin.hx",461,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_468_getDefaultGradientMatrixWidth,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrixWidth",0x1b1279d0,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrixWidth","feathers/skins/BaseGraphicsPathSkin.hx",468,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_472_getDefaultGradientMatrixHeight,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrixHeight",0x4b6794dd,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrixHeight","feathers/skins/BaseGraphicsPathSkin.hx",472,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_476_getDefaultGradientMatrixRadians,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrixRadians",0xd5f010bc,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrixRadians","feathers/skins/BaseGraphicsPathSkin.hx",476,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_480_getDefaultGradientMatrixTx,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrixTx",0x66e8bf7a,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrixTx","feathers/skins/BaseGraphicsPathSkin.hx",480,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_484_getDefaultGradientMatrixTy,"feathers.skins.BaseGraphicsPathSkin","getDefaultGradientMatrixTy",0x66e8bf7b,"feathers.skins.BaseGraphicsPathSkin.getDefaultGradientMatrixTy","feathers/skins/BaseGraphicsPathSkin.hx",484,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_498_getCurrentBorder,"feathers.skins.BaseGraphicsPathSkin","getCurrentBorder",0xeb462969,"feathers.skins.BaseGraphicsPathSkin.getCurrentBorder","feathers/skins/BaseGraphicsPathSkin.hx",498,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_505_getCurrentBorderWithoutCache,"feathers.skins.BaseGraphicsPathSkin","getCurrentBorderWithoutCache",0x374301e3,"feathers.skins.BaseGraphicsPathSkin.getCurrentBorderWithoutCache","feathers/skins/BaseGraphicsPathSkin.hx",505,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_544_getCurrentFill,"feathers.skins.BaseGraphicsPathSkin","getCurrentFill",0x4e1ea1c0,"feathers.skins.BaseGraphicsPathSkin.getCurrentFill","feathers/skins/BaseGraphicsPathSkin.hx",544,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_551_getCurrentFillWithoutCache,"feathers.skins.BaseGraphicsPathSkin","getCurrentFillWithoutCache",0x6d5a20ba,"feathers.skins.BaseGraphicsPathSkin.getCurrentFillWithoutCache","feathers/skins/BaseGraphicsPathSkin.hx",551,0xa15604e8)
HX_LOCAL_STACK_FRAME(_hx_pos_fc1a4e1b068e0ca2_579_needsStateUpdate,"feathers.skins.BaseGraphicsPathSkin","needsStateUpdate",0x13f8f877,"feathers.skins.BaseGraphicsPathSkin.needsStateUpdate","feathers/skins/BaseGraphicsPathSkin.hx",579,0xa15604e8)
namespace feathers{
namespace skins{

void BaseGraphicsPathSkin_obj::__construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_26_new)
HXLINE(  34)		this->_previousFill = null();
HXLINE(  33)		this->_previousBorder = null();
HXLINE(  28)		super::__construct();
HXLINE(  29)		this->set_fill(fill);
HXLINE(  30)		this->set_border(border);
            	}

Dynamic BaseGraphicsPathSkin_obj::__CreateEmpty() { return new BaseGraphicsPathSkin_obj; }

void *BaseGraphicsPathSkin_obj::_hx_vtable = 0;

Dynamic BaseGraphicsPathSkin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseGraphicsPathSkin_obj > _hx_result = new BaseGraphicsPathSkin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BaseGraphicsPathSkin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x07456291) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x07456291;
				}
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x33776324 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::get_fill(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_49_get_fill)
HXDLIN(  49)		return this->_fill;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_fill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::set_fill( ::feathers::graphics::FillStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_52_set_fill)
HXLINE(  53)		if (::hx::IsPointerEq( this->_fill,value )) {
HXLINE(  54)			return this->_fill;
            		}
HXLINE(  56)		if (::hx::IsPointerEq( this->_previousFill,this->_fill )) {
HXLINE(  57)			this->_previousFill = null();
            		}
HXLINE(  59)		this->_fill = value;
HXLINE(  60)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  61)		return this->_fill;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_fill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::get_disabledFill(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_78_get_disabledFill)
HXDLIN(  78)		return this->_disabledFill;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_disabledFill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::set_disabledFill( ::feathers::graphics::FillStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_81_set_disabledFill)
HXLINE(  82)		if (::hx::IsPointerEq( this->_disabledFill,value )) {
HXLINE(  83)			return this->_disabledFill;
            		}
HXLINE(  85)		if (::hx::IsPointerEq( this->_previousFill,this->_disabledFill )) {
HXLINE(  86)			this->_previousFill = null();
            		}
HXLINE(  88)		this->_disabledFill = value;
HXLINE(  89)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  90)		return this->_disabledFill;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_disabledFill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::get_selectedFill(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_106_get_selectedFill)
HXDLIN( 106)		return this->_selectedFill;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_selectedFill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::set_selectedFill( ::feathers::graphics::FillStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_109_set_selectedFill)
HXLINE( 110)		if (::hx::IsPointerEq( this->_selectedFill,value )) {
HXLINE( 111)			return this->_selectedFill;
            		}
HXLINE( 113)		if (::hx::IsPointerEq( this->_previousFill,this->_selectedFill )) {
HXLINE( 114)			this->_previousFill = null();
            		}
HXLINE( 116)		this->_selectedFill = value;
HXLINE( 117)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 118)		return this->_selectedFill;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_selectedFill,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::get_border(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_133_get_border)
HXDLIN( 133)		return this->_border;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_border,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::set_border( ::feathers::graphics::LineStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_136_set_border)
HXLINE( 137)		if (::hx::IsPointerEq( this->_border,value )) {
HXLINE( 138)			return this->_border;
            		}
HXLINE( 140)		if (::hx::IsPointerEq( this->_previousBorder,this->_border )) {
HXLINE( 141)			this->_previousBorder = null();
            		}
HXLINE( 143)		this->_border = value;
HXLINE( 144)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 145)		return this->_border;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_border,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::get_disabledBorder(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_162_get_disabledBorder)
HXDLIN( 162)		return this->_disabledBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_disabledBorder,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::set_disabledBorder( ::feathers::graphics::LineStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_165_set_disabledBorder)
HXLINE( 166)		if (::hx::IsPointerEq( this->_disabledBorder,value )) {
HXLINE( 167)			return this->_disabledBorder;
            		}
HXLINE( 169)		if (::hx::IsPointerEq( this->_previousBorder,this->_disabledBorder )) {
HXLINE( 170)			this->_previousBorder = null();
            		}
HXLINE( 172)		this->_disabledBorder = value;
HXLINE( 173)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 174)		return this->_disabledBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_disabledBorder,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::get_selectedBorder(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_190_get_selectedBorder)
HXDLIN( 190)		return this->_selectedBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,get_selectedBorder,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::set_selectedBorder( ::feathers::graphics::LineStyle value){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_193_set_selectedBorder)
HXLINE( 194)		if (::hx::IsPointerEq( this->_selectedBorder,value )) {
HXLINE( 195)			return this->_selectedBorder;
            		}
HXLINE( 197)		if (::hx::IsPointerEq( this->_previousBorder,this->_selectedBorder )) {
HXLINE( 198)			this->_previousBorder = null();
            		}
HXLINE( 200)		this->_selectedBorder = value;
HXLINE( 201)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 202)		return this->_selectedBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,set_selectedBorder,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::getFillForState( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_217_getFillForState)
HXLINE( 218)		if (::hx::IsNull( this->_stateToFill )) {
HXLINE( 219)			return null();
            		}
HXLINE( 221)		return this->_stateToFill->get(state).StaticCast<  ::feathers::graphics::FillStyle >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,getFillForState,return )

void BaseGraphicsPathSkin_obj::setFillForState( ::Dynamic state, ::feathers::graphics::FillStyle fill){
            	HX_GC_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_239_setFillForState)
HXLINE( 240)		if (::hx::IsNull( this->_stateToFill )) {
HXLINE( 241)			this->_stateToFill =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 243)		 ::feathers::graphics::FillStyle oldFill = this->_stateToFill->get(state).StaticCast<  ::feathers::graphics::FillStyle >();
HXLINE( 244)		if (::hx::IsPointerEq( oldFill,fill )) {
HXLINE( 245)			return;
            		}
HXLINE( 247)		if (::hx::IsPointerEq( this->_previousFill,oldFill )) {
HXLINE( 248)			this->_previousFill = null();
            		}
HXLINE( 250)		this->_stateToFill->set(state,fill);
HXLINE( 251)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseGraphicsPathSkin_obj,setFillForState,(void))

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::getBorderForState( ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_266_getBorderForState)
HXLINE( 267)		if (::hx::IsNull( this->_stateToBorder )) {
HXLINE( 268)			return null();
            		}
HXLINE( 270)		return this->_stateToBorder->get(state).StaticCast<  ::feathers::graphics::LineStyle >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,getBorderForState,return )

void BaseGraphicsPathSkin_obj::setBorderForState( ::Dynamic state, ::feathers::graphics::LineStyle border){
            	HX_GC_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_288_setBorderForState)
HXLINE( 289)		if (::hx::IsNull( this->_stateToBorder )) {
HXLINE( 290)			this->_stateToBorder =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 292)		 ::feathers::graphics::LineStyle oldBorder = this->_stateToBorder->get(state).StaticCast<  ::feathers::graphics::LineStyle >();
HXLINE( 293)		if (::hx::IsPointerEq( oldBorder,border )) {
HXLINE( 294)			return;
            		}
HXLINE( 296)		if (::hx::IsPointerEq( this->_previousBorder,oldBorder )) {
HXLINE( 297)			this->_previousBorder = null();
            		}
HXLINE( 299)		this->_stateToBorder->set(state,border);
HXLINE( 300)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseGraphicsPathSkin_obj,setBorderForState,(void))

void BaseGraphicsPathSkin_obj::update(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_303_update)
HXLINE( 304)		this->_previousBorder = this->getCurrentBorder();
HXLINE( 305)		this->_previousFill = this->getCurrentFill();
HXLINE( 306)		this->get_graphics()->clear();
HXLINE( 307)		this->draw();
            	}


void BaseGraphicsPathSkin_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_310_draw)
HXLINE( 311)		this->applyLineStyle(this->getCurrentBorder());
HXLINE( 312)		 ::feathers::graphics::FillStyle currentFill = this->getCurrentFill();
HXLINE( 313)		this->applyFillStyle(currentFill);
HXLINE( 314)		this->drawPath();
HXLINE( 315)		bool _hx_tmp;
HXDLIN( 315)		if (::hx::IsNotNull( currentFill )) {
HXLINE( 315)			_hx_tmp = ::hx::IsPointerNotEq( currentFill,::feathers::graphics::FillStyle_obj::None_dyn() );
            		}
            		else {
HXLINE( 315)			_hx_tmp = false;
            		}
HXDLIN( 315)		if (_hx_tmp) {
HXLINE( 316)			this->get_graphics()->endFill();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,draw,(void))

void BaseGraphicsPathSkin_obj::drawPath(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_326_drawPath)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,drawPath,(void))

void BaseGraphicsPathSkin_obj::applyLineStyle( ::feathers::graphics::LineStyle lineStyle){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_328_applyLineStyle)
HXLINE( 329)		if (::hx::IsNull( lineStyle )) {
HXLINE( 330)			return;
            		}
HXLINE( 332)		switch((int)(lineStyle->_hx_getIndex())){
            			case (int)0: {
HXLINE( 337)				 ::Dynamic thickness = lineStyle->_hx_getObject(0);
HXDLIN( 337)				 ::Dynamic color = lineStyle->_hx_getObject(1);
HXDLIN( 337)				 ::Dynamic alpha = lineStyle->_hx_getObject(2);
HXDLIN( 337)				 ::Dynamic pixelHinting = lineStyle->_hx_getObject(3);
HXDLIN( 337)				 ::Dynamic scaleMode = lineStyle->_hx_getObject(4);
HXDLIN( 337)				 ::Dynamic caps = lineStyle->_hx_getObject(5);
HXDLIN( 337)				 ::Dynamic joints = lineStyle->_hx_getObject(6);
HXDLIN( 337)				 ::Dynamic miterLimit = lineStyle->_hx_getObject(7);
HXLINE( 338)				{
HXLINE( 339)					if (::hx::IsNull( color )) {
HXLINE( 340)						color = 0;
            					}
HXLINE( 342)					if (::hx::IsNull( alpha )) {
HXLINE( 343)						alpha = ((Float)1.0);
            					}
HXLINE( 345)					if (::hx::IsNull( pixelHinting )) {
HXLINE( 346)						pixelHinting = false;
            					}
HXLINE( 348)					if (::hx::IsNull( scaleMode )) {
HXLINE( 349)						scaleMode = 2;
            					}
HXLINE( 351)					if (::hx::IsNull( miterLimit )) {
HXLINE( 352)						miterLimit = ((Float)3.0);
            					}
HXLINE( 354)					this->get_graphics()->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 377)				Float thickness = lineStyle->_hx_getFloat(0);
HXDLIN( 377)				 ::openfl::display::BitmapData bitmapData = lineStyle->_hx_getObject(1).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 377)				 ::openfl::geom::Matrix matrix = lineStyle->_hx_getObject(2).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN( 377)				 ::Dynamic repeat = lineStyle->_hx_getObject(3);
HXDLIN( 377)				 ::Dynamic smooth = lineStyle->_hx_getObject(4);
HXLINE( 378)				{
HXLINE( 379)					if (::hx::IsNull( repeat )) {
HXLINE( 380)						repeat = true;
            					}
HXLINE( 382)					if (::hx::IsNull( smooth )) {
HXLINE( 383)						smooth = false;
            					}
HXLINE( 385)					this->get_graphics()->lineStyle(thickness,null(),null(),null(),null(),null(),null(),null());
HXLINE( 386)					this->get_graphics()->lineBitmapStyle(bitmapData,matrix,repeat,smooth);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 356)				Float thickness = lineStyle->_hx_getFloat(0);
HXDLIN( 356)				 ::Dynamic type = lineStyle->_hx_getObject(1);
HXDLIN( 356)				::Array< int > colors = lineStyle->_hx_getObject(2).StaticCast< ::Array< int > >();
HXDLIN( 356)				::Array< Float > alphas = lineStyle->_hx_getObject(3).StaticCast< ::Array< Float > >();
HXDLIN( 356)				::Array< int > ratios = lineStyle->_hx_getObject(4).StaticCast< ::Array< int > >();
HXDLIN( 356)				 ::Dynamic matrixCallback = lineStyle->_hx_getObject(5);
HXDLIN( 356)				 ::Dynamic spreadMethod = lineStyle->_hx_getObject(6);
HXDLIN( 356)				 ::Dynamic interpolationMethod = lineStyle->_hx_getObject(7);
HXDLIN( 356)				 ::Dynamic focalPointRatio = lineStyle->_hx_getObject(8);
HXLINE( 357)				{
HXLINE( 358)					 ::Dynamic callback = matrixCallback;
HXLINE( 359)					if (::hx::IsNull( callback )) {
HXLINE( 360)						callback = this->getDefaultGradientMatrix_dyn();
            					}
HXLINE( 362)					if (::hx::IsNull( spreadMethod )) {
HXLINE( 363)						spreadMethod = 0;
            					}
HXLINE( 365)					if (::hx::IsNull( interpolationMethod )) {
HXLINE( 366)						interpolationMethod = 1;
            					}
HXLINE( 368)					if (::hx::IsNull( focalPointRatio )) {
HXLINE( 369)						focalPointRatio = ((Float)0.0);
            					}
HXLINE( 371)					Float matrix = this->getDefaultGradientMatrixWidth();
HXDLIN( 371)					Float matrix1 = this->getDefaultGradientMatrixHeight();
HXDLIN( 371)					Float matrix2 = this->getDefaultGradientMatrixRadians();
HXLINE( 372)					Float matrix3 = this->getDefaultGradientMatrixTx();
HXLINE( 371)					 ::openfl::geom::Matrix matrix4 = ( ( ::openfl::geom::Matrix)(callback(matrix,matrix1,matrix2,matrix3,this->getDefaultGradientMatrixTy())) );
HXLINE( 373)					this->get_graphics()->lineStyle(thickness,null(),null(),null(),null(),null(),null(),null());
HXLINE( 374)					this->get_graphics()->lineGradientStyle(type,colors,alphas,ratios,matrix4,spreadMethod,interpolationMethod,focalPointRatio);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 335)				this->get_graphics()->lineStyle(::Math_obj::NaN,0,((Float)0.0),null(),null(),null(),null(),null());
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,applyLineStyle,(void))

void BaseGraphicsPathSkin_obj::applyFillStyle( ::feathers::graphics::FillStyle fillStyle){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_391_applyFillStyle)
HXLINE( 392)		if (::hx::IsNull( fillStyle )) {
HXLINE( 393)			return;
            		}
HXLINE( 395)		switch((int)(fillStyle->_hx_getIndex())){
            			case (int)0: {
HXLINE( 401)				int color = fillStyle->_hx_getInt(0);
HXDLIN( 401)				 ::Dynamic alpha = fillStyle->_hx_getObject(1);
HXLINE( 402)				{
HXLINE( 403)					if (::hx::IsNull( alpha )) {
HXLINE( 404)						alpha = ((Float)1.0);
            					}
HXLINE( 406)					this->get_graphics()->beginFill(color,alpha);
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 428)				 ::openfl::display::BitmapData bitmapData = fillStyle->_hx_getObject(0).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 428)				 ::openfl::geom::Matrix matrix = fillStyle->_hx_getObject(1).StaticCast<  ::openfl::geom::Matrix >();
HXDLIN( 428)				 ::Dynamic repeat = fillStyle->_hx_getObject(2);
HXDLIN( 428)				 ::Dynamic smooth = fillStyle->_hx_getObject(3);
HXLINE( 429)				{
HXLINE( 430)					if (::hx::IsNull( repeat )) {
HXLINE( 431)						repeat = true;
            					}
HXLINE( 433)					if (::hx::IsNull( smooth )) {
HXLINE( 434)						smooth = false;
            					}
HXLINE( 436)					this->get_graphics()->beginBitmapFill(bitmapData,matrix,repeat,smooth);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 408)				 ::Dynamic type = fillStyle->_hx_getObject(0);
HXDLIN( 408)				::Array< int > colors = fillStyle->_hx_getObject(1).StaticCast< ::Array< int > >();
HXDLIN( 408)				::Array< Float > alphas = fillStyle->_hx_getObject(2).StaticCast< ::Array< Float > >();
HXDLIN( 408)				::Array< int > ratios = fillStyle->_hx_getObject(3).StaticCast< ::Array< int > >();
HXDLIN( 408)				 ::Dynamic matrixCallback = fillStyle->_hx_getObject(4);
HXDLIN( 408)				 ::Dynamic spreadMethod = fillStyle->_hx_getObject(5);
HXDLIN( 408)				 ::Dynamic interpolationMethod = fillStyle->_hx_getObject(6);
HXDLIN( 408)				 ::Dynamic focalPointRatio = fillStyle->_hx_getObject(7);
HXLINE( 409)				{
HXLINE( 410)					 ::Dynamic callback = matrixCallback;
HXLINE( 411)					if (::hx::IsNull( callback )) {
HXLINE( 412)						callback = this->getDefaultGradientMatrix_dyn();
            					}
HXLINE( 414)					if (::hx::IsNull( spreadMethod )) {
HXLINE( 415)						spreadMethod = 0;
            					}
HXLINE( 417)					if (::hx::IsNull( interpolationMethod )) {
HXLINE( 418)						interpolationMethod = 1;
            					}
HXLINE( 420)					if (::hx::IsNull( focalPointRatio )) {
HXLINE( 421)						focalPointRatio = ((Float)0.0);
            					}
HXLINE( 423)					Float matrix = this->getDefaultGradientMatrixWidth();
HXDLIN( 423)					Float matrix1 = this->getDefaultGradientMatrixHeight();
HXDLIN( 423)					Float matrix2 = this->getDefaultGradientMatrixRadians();
HXLINE( 424)					Float matrix3 = this->getDefaultGradientMatrixTx();
HXLINE( 423)					 ::openfl::geom::Matrix matrix4 = ( ( ::openfl::geom::Matrix)(callback(matrix,matrix1,matrix2,matrix3,this->getDefaultGradientMatrixTy())) );
HXLINE( 425)					this->get_graphics()->beginGradientFill(type,colors,alphas,ratios,matrix4,spreadMethod,interpolationMethod,focalPointRatio);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 399)				return;
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,applyFillStyle,(void))

Float BaseGraphicsPathSkin_obj::getLineThickness( ::feathers::graphics::LineStyle lineStyle){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_441_getLineThickness)
HXLINE( 442)		if (::hx::IsNull( lineStyle )) {
HXLINE( 443)			return ( (Float)(0) );
            		}
HXLINE( 445)		switch((int)(lineStyle->_hx_getIndex())){
            			case (int)0: {
HXLINE( 446)				 ::Dynamic _g = lineStyle->_hx_getObject(1);
HXDLIN( 446)				 ::Dynamic _g1 = lineStyle->_hx_getObject(2);
HXDLIN( 446)				 ::Dynamic _g2 = lineStyle->_hx_getObject(3);
HXDLIN( 446)				 ::Dynamic _g3 = lineStyle->_hx_getObject(4);
HXDLIN( 446)				 ::Dynamic _g4 = lineStyle->_hx_getObject(5);
HXDLIN( 446)				 ::Dynamic _g5 = lineStyle->_hx_getObject(6);
HXDLIN( 446)				 ::Dynamic _g6 = lineStyle->_hx_getObject(7);
HXDLIN( 446)				 ::Dynamic thickness = lineStyle->_hx_getObject(0);
HXLINE( 448)				return ( (Float)(thickness) );
            			}
            			break;
            			case (int)2: {
HXLINE( 450)				 ::Dynamic _g = lineStyle->_hx_getObject(5);
HXDLIN( 450)				 ::Dynamic _g1 = lineStyle->_hx_getObject(6);
HXDLIN( 450)				 ::Dynamic _g2 = lineStyle->_hx_getObject(7);
HXDLIN( 450)				 ::Dynamic _g3 = lineStyle->_hx_getObject(8);
HXDLIN( 450)				Float thickness = lineStyle->_hx_getFloat(0);
HXDLIN( 450)				 ::Dynamic colors = lineStyle->_hx_getObject(1);
HXDLIN( 450)				::Array< int > alphas = lineStyle->_hx_getObject(2).StaticCast< ::Array< int > >();
HXDLIN( 450)				::Array< Float > ratios = lineStyle->_hx_getObject(3).StaticCast< ::Array< Float > >();
HXDLIN( 450)				::Array< int > matrixCallback = lineStyle->_hx_getObject(4).StaticCast< ::Array< int > >();
HXLINE( 452)				return thickness;
            			}
            			break;
            			default:{
HXLINE( 456)				return ( (Float)(0) );
            			}
            		}
HXLINE( 445)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseGraphicsPathSkin_obj,getLineThickness,return )

 ::openfl::geom::Matrix BaseGraphicsPathSkin_obj::getDefaultGradientMatrix(Float width,Float height, ::Dynamic __o_radians, ::Dynamic __o_tx, ::Dynamic __o_ty){
            		 ::Dynamic radians = __o_radians;
            		if (::hx::IsNull(__o_radians)) radians = ((Float)0.0);
            		 ::Dynamic tx = __o_tx;
            		if (::hx::IsNull(__o_tx)) tx = ((Float)0.0);
            		 ::Dynamic ty = __o_ty;
            		if (::hx::IsNull(__o_ty)) ty = ((Float)0.0);
            	HX_GC_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_461_getDefaultGradientMatrix)
HXLINE( 462)		 ::openfl::geom::Matrix matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 463)		matrix->createGradientBox(width,height,radians,tx,ty);
HXLINE( 464)		return matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC5(BaseGraphicsPathSkin_obj,getDefaultGradientMatrix,return )

Float BaseGraphicsPathSkin_obj::getDefaultGradientMatrixWidth(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_468_getDefaultGradientMatrixWidth)
HXDLIN( 468)		return this->actualWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getDefaultGradientMatrixWidth,return )

Float BaseGraphicsPathSkin_obj::getDefaultGradientMatrixHeight(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_472_getDefaultGradientMatrixHeight)
HXDLIN( 472)		return this->actualHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getDefaultGradientMatrixHeight,return )

Float BaseGraphicsPathSkin_obj::getDefaultGradientMatrixRadians(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_476_getDefaultGradientMatrixRadians)
HXDLIN( 476)		return ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getDefaultGradientMatrixRadians,return )

Float BaseGraphicsPathSkin_obj::getDefaultGradientMatrixTx(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_480_getDefaultGradientMatrixTx)
HXDLIN( 480)		return ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getDefaultGradientMatrixTx,return )

Float BaseGraphicsPathSkin_obj::getDefaultGradientMatrixTy(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_484_getDefaultGradientMatrixTy)
HXDLIN( 484)		return ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getDefaultGradientMatrixTy,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::getCurrentBorder(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_498_getCurrentBorder)
HXLINE( 499)		if (::hx::IsNotNull( this->_previousBorder )) {
HXLINE( 500)			return this->_previousBorder;
            		}
HXLINE( 502)		return this->getCurrentBorderWithoutCache();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getCurrentBorder,return )

 ::feathers::graphics::LineStyle BaseGraphicsPathSkin_obj::getCurrentBorderWithoutCache(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_505_getCurrentBorderWithoutCache)
HXLINE( 506)		::Dynamic stateContext = this->_stateContext;
HXLINE( 507)		bool _hx_tmp;
HXDLIN( 507)		if (::hx::IsNull( stateContext )) {
HXLINE( 507)			_hx_tmp = ::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::core::IStateContext >());
            		}
            		else {
HXLINE( 507)			_hx_tmp = false;
            		}
HXDLIN( 507)		if (_hx_tmp) {
HXLINE( 508)			stateContext = this->_uiContext;
            		}
HXLINE( 510)		bool _hx_tmp1;
HXDLIN( 510)		if (::hx::IsNotNull( this->_stateToBorder )) {
HXLINE( 510)			_hx_tmp1 = ::hx::IsNotNull( stateContext );
            		}
            		else {
HXLINE( 510)			_hx_tmp1 = false;
            		}
HXDLIN( 510)		if (_hx_tmp1) {
HXLINE( 511)			::Dynamic this1 = this->_stateToBorder;
HXDLIN( 511)			 ::feathers::graphics::LineStyle result = ( ( ::haxe::ds::EnumValueMap)(this1) )->get(::feathers::core::IStateContext_obj::get_currentState(stateContext)).StaticCast<  ::feathers::graphics::LineStyle >();
HXLINE( 512)			if (::hx::IsNotNull( result )) {
HXLINE( 513)				return result;
            			}
            		}
HXLINE( 516)		if (::hx::IsNull( this->_uiContext )) {
HXLINE( 517)			return this->_border;
            		}
HXLINE( 519)		if (::hx::IsNotNull( this->_disabledBorder )) {
HXLINE( 520)			if (!(::feathers::core::IUIControl_obj::get_enabled(this->_uiContext))) {
HXLINE( 521)				return this->_disabledBorder;
            			}
            		}
HXLINE( 524)		bool _hx_tmp2;
HXDLIN( 524)		if (::hx::IsNotNull( this->_selectedBorder )) {
HXLINE( 524)			_hx_tmp2 = ::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::controls::IToggle >());
            		}
            		else {
HXLINE( 524)			_hx_tmp2 = false;
            		}
HXDLIN( 524)		if (_hx_tmp2) {
HXLINE( 525)			::Dynamic toggle = this->_uiContext;
HXLINE( 526)			if (::feathers::controls::IToggle_obj::get_selected(toggle)) {
HXLINE( 527)				return this->_selectedBorder;
            			}
            		}
HXLINE( 530)		return this->_border;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getCurrentBorderWithoutCache,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::getCurrentFill(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_544_getCurrentFill)
HXLINE( 545)		if (::hx::IsNotNull( this->_previousFill )) {
HXLINE( 546)			return this->_previousFill;
            		}
HXLINE( 548)		return this->getCurrentFillWithoutCache();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getCurrentFill,return )

 ::feathers::graphics::FillStyle BaseGraphicsPathSkin_obj::getCurrentFillWithoutCache(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_551_getCurrentFillWithoutCache)
HXLINE( 552)		::Dynamic stateContext = this->_stateContext;
HXLINE( 553)		bool _hx_tmp;
HXDLIN( 553)		if (::hx::IsNull( stateContext )) {
HXLINE( 553)			_hx_tmp = ::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::core::IStateContext >());
            		}
            		else {
HXLINE( 553)			_hx_tmp = false;
            		}
HXDLIN( 553)		if (_hx_tmp) {
HXLINE( 554)			stateContext = this->_uiContext;
            		}
HXLINE( 556)		bool _hx_tmp1;
HXDLIN( 556)		if (::hx::IsNotNull( this->_stateToFill )) {
HXLINE( 556)			_hx_tmp1 = ::hx::IsNotNull( stateContext );
            		}
            		else {
HXLINE( 556)			_hx_tmp1 = false;
            		}
HXDLIN( 556)		if (_hx_tmp1) {
HXLINE( 557)			::Dynamic this1 = this->_stateToFill;
HXDLIN( 557)			 ::feathers::graphics::FillStyle result = ( ( ::haxe::ds::EnumValueMap)(this1) )->get(::feathers::core::IStateContext_obj::get_currentState(stateContext)).StaticCast<  ::feathers::graphics::FillStyle >();
HXLINE( 558)			if (::hx::IsNotNull( result )) {
HXLINE( 559)				return result;
            			}
            		}
HXLINE( 562)		if (::hx::IsNull( this->_uiContext )) {
HXLINE( 563)			return this->_fill;
            		}
HXLINE( 565)		if (::hx::IsNotNull( this->_disabledFill )) {
HXLINE( 566)			if (!(::feathers::core::IUIControl_obj::get_enabled(this->_uiContext))) {
HXLINE( 567)				return this->_disabledFill;
            			}
            		}
HXLINE( 570)		bool _hx_tmp2;
HXDLIN( 570)		if (::hx::IsNotNull( this->_selectedFill )) {
HXLINE( 570)			_hx_tmp2 = ::Std_obj::isOfType(this->_uiContext,::hx::ClassOf< ::feathers::controls::IToggle >());
            		}
            		else {
HXLINE( 570)			_hx_tmp2 = false;
            		}
HXDLIN( 570)		if (_hx_tmp2) {
HXLINE( 571)			::Dynamic toggle = this->_uiContext;
HXLINE( 572)			if (::feathers::controls::IToggle_obj::get_selected(toggle)) {
HXLINE( 573)				return this->_selectedFill;
            			}
            		}
HXLINE( 576)		return this->_fill;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseGraphicsPathSkin_obj,getCurrentFillWithoutCache,return )

bool BaseGraphicsPathSkin_obj::needsStateUpdate(){
            	HX_STACKFRAME(&_hx_pos_fc1a4e1b068e0ca2_579_needsStateUpdate)
HXLINE( 580)		bool updated = false;
HXLINE( 581)		 ::feathers::graphics::LineStyle _hx_tmp = this->_previousBorder;
HXDLIN( 581)		if (::hx::IsPointerNotEq( _hx_tmp,this->getCurrentBorderWithoutCache() )) {
HXLINE( 582)			this->_previousBorder = null();
HXLINE( 583)			updated = true;
            		}
HXLINE( 585)		 ::feathers::graphics::FillStyle _hx_tmp1 = this->_previousFill;
HXDLIN( 585)		if (::hx::IsPointerNotEq( _hx_tmp1,this->getCurrentFillWithoutCache() )) {
HXLINE( 586)			this->_previousFill = null();
HXLINE( 587)			updated = true;
            		}
HXLINE( 589)		return updated;
            	}



::hx::ObjectPtr< BaseGraphicsPathSkin_obj > BaseGraphicsPathSkin_obj::__new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border) {
	::hx::ObjectPtr< BaseGraphicsPathSkin_obj > __this = new BaseGraphicsPathSkin_obj();
	__this->__construct(fill,border);
	return __this;
}

::hx::ObjectPtr< BaseGraphicsPathSkin_obj > BaseGraphicsPathSkin_obj::__alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border) {
	BaseGraphicsPathSkin_obj *__this = (BaseGraphicsPathSkin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseGraphicsPathSkin_obj), true, "feathers.skins.BaseGraphicsPathSkin"));
	*(void **)__this = BaseGraphicsPathSkin_obj::_hx_vtable;
	__this->__construct(fill,border);
	return __this;
}

BaseGraphicsPathSkin_obj::BaseGraphicsPathSkin_obj()
{
}

void BaseGraphicsPathSkin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseGraphicsPathSkin);
	HX_MARK_MEMBER_NAME(_previousBorder,"_previousBorder");
	HX_MARK_MEMBER_NAME(_previousFill,"_previousFill");
	HX_MARK_MEMBER_NAME(_stateToFill,"_stateToFill");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_disabledFill,"_disabledFill");
	HX_MARK_MEMBER_NAME(_selectedFill,"_selectedFill");
	HX_MARK_MEMBER_NAME(_stateToBorder,"_stateToBorder");
	HX_MARK_MEMBER_NAME(_border,"_border");
	HX_MARK_MEMBER_NAME(_disabledBorder,"_disabledBorder");
	HX_MARK_MEMBER_NAME(_selectedBorder,"_selectedBorder");
	 ::feathers::skins::ProgrammaticSkin_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseGraphicsPathSkin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_previousBorder,"_previousBorder");
	HX_VISIT_MEMBER_NAME(_previousFill,"_previousFill");
	HX_VISIT_MEMBER_NAME(_stateToFill,"_stateToFill");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_disabledFill,"_disabledFill");
	HX_VISIT_MEMBER_NAME(_selectedFill,"_selectedFill");
	HX_VISIT_MEMBER_NAME(_stateToBorder,"_stateToBorder");
	HX_VISIT_MEMBER_NAME(_border,"_border");
	HX_VISIT_MEMBER_NAME(_disabledBorder,"_disabledBorder");
	HX_VISIT_MEMBER_NAME(_selectedBorder,"_selectedBorder");
	 ::feathers::skins::ProgrammaticSkin_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseGraphicsPathSkin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fill() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fill") ) { return ::hx::Val( _fill ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_border() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_border") ) { return ::hx::Val( _border ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_fill") ) { return ::hx::Val( get_fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fill") ) { return ::hx::Val( set_fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return ::hx::Val( drawPath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_border") ) { return ::hx::Val( get_border_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return ::hx::Val( set_border_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stateToFill") ) { return ::hx::Val( _stateToFill ); }
		if (HX_FIELD_EQ(inName,"disabledFill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledFill() ); }
		if (HX_FIELD_EQ(inName,"selectedFill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedFill() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_previousFill") ) { return ::hx::Val( _previousFill ); }
		if (HX_FIELD_EQ(inName,"_disabledFill") ) { return ::hx::Val( _disabledFill ); }
		if (HX_FIELD_EQ(inName,"_selectedFill") ) { return ::hx::Val( _selectedFill ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_stateToBorder") ) { return ::hx::Val( _stateToBorder ); }
		if (HX_FIELD_EQ(inName,"disabledBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBorder() ); }
		if (HX_FIELD_EQ(inName,"selectedBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedBorder() ); }
		if (HX_FIELD_EQ(inName,"applyLineStyle") ) { return ::hx::Val( applyLineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFillStyle") ) { return ::hx::Val( applyFillStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentFill") ) { return ::hx::Val( getCurrentFill_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_previousBorder") ) { return ::hx::Val( _previousBorder ); }
		if (HX_FIELD_EQ(inName,"_disabledBorder") ) { return ::hx::Val( _disabledBorder ); }
		if (HX_FIELD_EQ(inName,"_selectedBorder") ) { return ::hx::Val( _selectedBorder ); }
		if (HX_FIELD_EQ(inName,"getFillForState") ) { return ::hx::Val( getFillForState_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFillForState") ) { return ::hx::Val( setFillForState_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_disabledFill") ) { return ::hx::Val( get_disabledFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledFill") ) { return ::hx::Val( set_disabledFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedFill") ) { return ::hx::Val( get_selectedFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedFill") ) { return ::hx::Val( set_selectedFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineThickness") ) { return ::hx::Val( getLineThickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentBorder") ) { return ::hx::Val( getCurrentBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"needsStateUpdate") ) { return ::hx::Val( needsStateUpdate_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getBorderForState") ) { return ::hx::Val( getBorderForState_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBorderForState") ) { return ::hx::Val( setBorderForState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_disabledBorder") ) { return ::hx::Val( get_disabledBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledBorder") ) { return ::hx::Val( set_disabledBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedBorder") ) { return ::hx::Val( get_selectedBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedBorder") ) { return ::hx::Val( set_selectedBorder_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrix") ) { return ::hx::Val( getDefaultGradientMatrix_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrixTx") ) { return ::hx::Val( getDefaultGradientMatrixTx_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrixTy") ) { return ::hx::Val( getDefaultGradientMatrixTy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCurrentFillWithoutCache") ) { return ::hx::Val( getCurrentFillWithoutCache_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getCurrentBorderWithoutCache") ) { return ::hx::Val( getCurrentBorderWithoutCache_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrixWidth") ) { return ::hx::Val( getDefaultGradientMatrixWidth_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrixHeight") ) { return ::hx::Val( getDefaultGradientMatrixHeight_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"getDefaultGradientMatrixRadians") ) { return ::hx::Val( getDefaultGradientMatrixRadians_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseGraphicsPathSkin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fill(inValue.Cast<  ::feathers::graphics::FillStyle >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast<  ::feathers::graphics::FillStyle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_border(inValue.Cast<  ::feathers::graphics::LineStyle >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_border") ) { _border=inValue.Cast<  ::feathers::graphics::LineStyle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stateToFill") ) { _stateToFill=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledFill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledFill(inValue.Cast<  ::feathers::graphics::FillStyle >()) ); }
		if (HX_FIELD_EQ(inName,"selectedFill") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedFill(inValue.Cast<  ::feathers::graphics::FillStyle >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_previousFill") ) { _previousFill=inValue.Cast<  ::feathers::graphics::FillStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledFill") ) { _disabledFill=inValue.Cast<  ::feathers::graphics::FillStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedFill") ) { _selectedFill=inValue.Cast<  ::feathers::graphics::FillStyle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_stateToBorder") ) { _stateToBorder=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBorder(inValue.Cast<  ::feathers::graphics::LineStyle >()) ); }
		if (HX_FIELD_EQ(inName,"selectedBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedBorder(inValue.Cast<  ::feathers::graphics::LineStyle >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_previousBorder") ) { _previousBorder=inValue.Cast<  ::feathers::graphics::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledBorder") ) { _disabledBorder=inValue.Cast<  ::feathers::graphics::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedBorder") ) { _selectedBorder=inValue.Cast<  ::feathers::graphics::LineStyle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseGraphicsPathSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_previousBorder",22,49,11,9c));
	outFields->push(HX_("_previousFill",39,31,cc,cc));
	outFields->push(HX_("_stateToFill",90,34,08,5a));
	outFields->push(HX_("_fill",62,ea,cc,f6));
	outFields->push(HX_("fill",83,ce,bb,43));
	outFields->push(HX_("_disabledFill",fe,3c,6c,50));
	outFields->push(HX_("disabledFill",1f,aa,fd,6d));
	outFields->push(HX_("_selectedFill",5d,81,c4,b6));
	outFields->push(HX_("selectedFill",7e,ee,55,d4));
	outFields->push(HX_("_stateToBorder",39,10,d6,f2));
	outFields->push(HX_("_border",8b,5e,91,d2));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("_disabledBorder",27,90,9f,50));
	outFields->push(HX_("disabledBorder",88,47,3f,07));
	outFields->push(HX_("_selectedBorder",46,ea,d8,30));
	outFields->push(HX_("selectedBorder",a7,a1,78,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseGraphicsPathSkin_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::graphics::LineStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_previousBorder),HX_("_previousBorder",22,49,11,9c)},
	{::hx::fsObject /*  ::feathers::graphics::FillStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_previousFill),HX_("_previousFill",39,31,cc,cc)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_stateToFill),HX_("_stateToFill",90,34,08,5a)},
	{::hx::fsObject /*  ::feathers::graphics::FillStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_fill),HX_("_fill",62,ea,cc,f6)},
	{::hx::fsObject /*  ::feathers::graphics::FillStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_disabledFill),HX_("_disabledFill",fe,3c,6c,50)},
	{::hx::fsObject /*  ::feathers::graphics::FillStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_selectedFill),HX_("_selectedFill",5d,81,c4,b6)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_stateToBorder),HX_("_stateToBorder",39,10,d6,f2)},
	{::hx::fsObject /*  ::feathers::graphics::LineStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_border),HX_("_border",8b,5e,91,d2)},
	{::hx::fsObject /*  ::feathers::graphics::LineStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_disabledBorder),HX_("_disabledBorder",27,90,9f,50)},
	{::hx::fsObject /*  ::feathers::graphics::LineStyle */ ,(int)offsetof(BaseGraphicsPathSkin_obj,_selectedBorder),HX_("_selectedBorder",46,ea,d8,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseGraphicsPathSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseGraphicsPathSkin_obj_sMemberFields[] = {
	HX_("_previousBorder",22,49,11,9c),
	HX_("_previousFill",39,31,cc,cc),
	HX_("_stateToFill",90,34,08,5a),
	HX_("_fill",62,ea,cc,f6),
	HX_("get_fill",0c,8a,76,c3),
	HX_("set_fill",80,e3,d3,71),
	HX_("_disabledFill",fe,3c,6c,50),
	HX_("get_disabledFill",a8,96,9c,72),
	HX_("set_disabledFill",1c,84,de,c8),
	HX_("_selectedFill",5d,81,c4,b6),
	HX_("get_selectedFill",07,db,f4,d8),
	HX_("set_selectedFill",7b,c8,36,2f),
	HX_("_stateToBorder",39,10,d6,f2),
	HX_("_border",8b,5e,91,d2),
	HX_("get_border",b5,bc,a1,54),
	HX_("set_border",29,5b,1f,58),
	HX_("_disabledBorder",27,90,9f,50),
	HX_("get_disabledBorder",51,28,d9,a2),
	HX_("set_disabledBorder",c5,5a,88,7f),
	HX_("_selectedBorder",46,ea,d8,30),
	HX_("get_selectedBorder",70,82,12,83),
	HX_("set_selectedBorder",e4,b4,c1,5f),
	HX_("getFillForState",a1,99,2e,a5),
	HX_("setFillForState",ad,16,fa,a0),
	HX_("getBorderForState",8a,82,c8,f9),
	HX_("setBorderForState",96,5a,36,1d),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("drawPath",c9,8f,bb,5e),
	HX_("applyLineStyle",4f,e5,96,b9),
	HX_("applyFillStyle",60,08,43,41),
	HX_("getLineThickness",6a,c4,06,08),
	HX_("getDefaultGradientMatrix",7c,18,d7,8b),
	HX_("getDefaultGradientMatrixWidth",ea,cb,42,ab),
	HX_("getDefaultGradientMatrixHeight",83,19,7f,e5),
	HX_("getDefaultGradientMatrixRadians",56,9d,6c,10),
	HX_("getDefaultGradientMatrixTx",20,79,2b,82),
	HX_("getDefaultGradientMatrixTy",21,79,2b,82),
	HX_("getCurrentBorder",8f,77,97,b1),
	HX_("getCurrentBorderWithoutCache",09,f1,e3,b3),
	HX_("getCurrentFill",66,fa,eb,03),
	HX_("getCurrentFillWithoutCache",60,da,9c,88),
	HX_("needsStateUpdate",9d,46,4a,da),
	::String(null()) };

::hx::Class BaseGraphicsPathSkin_obj::__mClass;

void BaseGraphicsPathSkin_obj::__register()
{
	BaseGraphicsPathSkin_obj _hx_dummy;
	BaseGraphicsPathSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.BaseGraphicsPathSkin",d4,7b,a8,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseGraphicsPathSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseGraphicsPathSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseGraphicsPathSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseGraphicsPathSkin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
