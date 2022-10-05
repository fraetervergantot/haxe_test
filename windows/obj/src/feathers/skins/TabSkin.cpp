#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
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
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
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
#ifndef INCLUDED_feathers_skins_TabSkin
#include <feathers/skins/TabSkin.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95014e21601908d0_23_new,"feathers.skins.TabSkin","new",0xd960752e,"feathers.skins.TabSkin.new","feathers/skins/TabSkin.hx",23,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_44_get_cornerRadiusPosition,"feathers.skins.TabSkin","get_cornerRadiusPosition",0x2e3a9fcb,"feathers.skins.TabSkin.get_cornerRadiusPosition","feathers/skins/TabSkin.hx",44,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_47_set_cornerRadiusPosition,"feathers.skins.TabSkin","set_cornerRadiusPosition",0x4115213f,"feathers.skins.TabSkin.set_cornerRadiusPosition","feathers/skins/TabSkin.hx",47,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_66_get_drawBaseBorder,"feathers.skins.TabSkin","get_drawBaseBorder",0x127b3cbc,"feathers.skins.TabSkin.get_drawBaseBorder","feathers/skins/TabSkin.hx",66,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_69_set_drawBaseBorder,"feathers.skins.TabSkin","set_drawBaseBorder",0xef2a6f30,"feathers.skins.TabSkin.set_drawBaseBorder","feathers/skins/TabSkin.hx",69,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_89_get_cornerRadius,"feathers.skins.TabSkin","get_cornerRadius",0xb2527102,"feathers.skins.TabSkin.get_cornerRadius","feathers/skins/TabSkin.hx",89,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_92_set_cornerRadius,"feathers.skins.TabSkin","set_cornerRadius",0x08945e76,"feathers.skins.TabSkin.set_cornerRadius","feathers/skins/TabSkin.hx",92,0xe4a70744)
HX_LOCAL_STACK_FRAME(_hx_pos_95014e21601908d0_101_drawPath,"feathers.skins.TabSkin","drawPath",0x1ee0c03b,"feathers.skins.TabSkin.drawPath","feathers/skins/TabSkin.hx",101,0xe4a70744)
namespace feathers{
namespace skins{

void TabSkin_obj::__construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius){
            		Float cornerRadius = __o_cornerRadius.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_23_new)
HXLINE(  78)		this->_cornerRadius = ((Float)0.0);
HXLINE(  56)		this->_drawBaseBorder = true;
HXLINE(  34)		this->_cornerRadiusPosition = ::feathers::layout::RelativePosition_obj::TOP_dyn();
HXLINE(  30)		super::__construct(fill,border);
HXLINE(  31)		this->_cornerRadius = cornerRadius;
            	}

Dynamic TabSkin_obj::__CreateEmpty() { return new TabSkin_obj; }

void *TabSkin_obj::_hx_vtable = 0;

Dynamic TabSkin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabSkin_obj > _hx_result = new TabSkin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TabSkin_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x69a730ec || inClassId==(int)0x6b353933;
		}
	}
}

 ::feathers::layout::RelativePosition TabSkin_obj::get_cornerRadiusPosition(){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_44_get_cornerRadiusPosition)
HXDLIN(  44)		return this->_cornerRadiusPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabSkin_obj,get_cornerRadiusPosition,return )

 ::feathers::layout::RelativePosition TabSkin_obj::set_cornerRadiusPosition( ::feathers::layout::RelativePosition value){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_47_set_cornerRadiusPosition)
HXLINE(  48)		if (::hx::IsPointerEq( this->_cornerRadiusPosition,value )) {
HXLINE(  49)			return this->_cornerRadiusPosition;
            		}
HXLINE(  51)		this->_cornerRadiusPosition = value;
HXLINE(  52)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  53)		return this->_cornerRadiusPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabSkin_obj,set_cornerRadiusPosition,return )

bool TabSkin_obj::get_drawBaseBorder(){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_66_get_drawBaseBorder)
HXDLIN(  66)		return this->_drawBaseBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabSkin_obj,get_drawBaseBorder,return )

bool TabSkin_obj::set_drawBaseBorder(bool value){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_69_set_drawBaseBorder)
HXLINE(  70)		if ((this->_drawBaseBorder == value)) {
HXLINE(  71)			return this->_drawBaseBorder;
            		}
HXLINE(  73)		this->_drawBaseBorder = value;
HXLINE(  74)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  75)		return this->_drawBaseBorder;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabSkin_obj,set_drawBaseBorder,return )

Float TabSkin_obj::get_cornerRadius(){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_89_get_cornerRadius)
HXDLIN(  89)		return this->_cornerRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabSkin_obj,get_cornerRadius,return )

Float TabSkin_obj::set_cornerRadius(Float value){
            	HX_STACKFRAME(&_hx_pos_95014e21601908d0_92_set_cornerRadius)
HXLINE(  93)		if ((this->_cornerRadius == value)) {
HXLINE(  94)			return this->_cornerRadius;
            		}
HXLINE(  96)		this->_cornerRadius = value;
HXLINE(  97)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  98)		return this->_cornerRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabSkin_obj,set_cornerRadius,return )

void TabSkin_obj::drawPath(){
            	HX_GC_STACKFRAME(&_hx_pos_95014e21601908d0_101_drawPath)
HXLINE( 102)		 ::feathers::graphics::LineStyle currentBorder = this->getCurrentBorder();
HXLINE( 103)		Float thicknessOffset = (this->getLineThickness(currentBorder) / ((Float)2.0));
HXLINE( 105)		Float drawWidth = ::Math_obj::max(((Float)0.0),(this->actualWidth - thicknessOffset));
HXLINE( 106)		Float drawHeight = ::Math_obj::max(((Float)0.0),(this->actualHeight - thicknessOffset));
HXLINE( 108)		Float adjustedCornerRadius = ::Math_obj::min(this->_cornerRadius,::Math_obj::min((this->actualWidth / ((Float)2.0)),(this->actualHeight / ((Float)2.0))));
HXLINE( 110)		bool _hx_tmp;
HXDLIN( 110)		if ((adjustedCornerRadius == ((Float)0.0))) {
HXLINE( 110)			_hx_tmp = this->_drawBaseBorder;
            		}
            		else {
HXLINE( 110)			_hx_tmp = false;
            		}
HXDLIN( 110)		if (_hx_tmp) {
HXLINE( 111)			this->get_graphics()->drawRect(thicknessOffset,thicknessOffset,drawWidth,drawHeight);
            		}
            		else {
HXLINE( 113)			switch((int)(this->_cornerRadiusPosition->_hx_getIndex())){
            				case (int)0: {
HXLINE( 145)					this->get_graphics()->moveTo((thicknessOffset + adjustedCornerRadius),thicknessOffset);
HXLINE( 146)					this->get_graphics()->lineTo((drawWidth - adjustedCornerRadius),thicknessOffset);
HXLINE( 147)					this->get_graphics()->curveTo(drawWidth,thicknessOffset,drawWidth,(thicknessOffset + adjustedCornerRadius));
HXLINE( 148)					if (this->_drawBaseBorder) {
HXLINE( 149)						this->get_graphics()->lineTo(drawWidth,drawHeight);
HXLINE( 150)						this->get_graphics()->lineTo(thicknessOffset,drawHeight);
            					}
            					else {
HXLINE( 152)						this->get_graphics()->lineTo(drawWidth,this->actualHeight);
HXLINE( 153)						this->get_graphics()->lineStyle(((Float)0.0),null(),((Float)0.0),null(),null(),null(),null(),((Float)0.0));
HXLINE( 154)						this->get_graphics()->lineTo(thicknessOffset,this->actualHeight);
HXLINE( 155)						this->applyLineStyle(currentBorder);
            					}
HXLINE( 157)					this->get_graphics()->lineTo(thicknessOffset,(thicknessOffset + adjustedCornerRadius));
HXLINE( 158)					this->get_graphics()->curveTo(thicknessOffset,thicknessOffset,(thicknessOffset + adjustedCornerRadius),thicknessOffset);
            				}
            				break;
            				case (int)1: {
HXLINE( 130)					this->get_graphics()->moveTo(thicknessOffset,thicknessOffset);
HXLINE( 131)					this->get_graphics()->lineTo((drawWidth - adjustedCornerRadius),thicknessOffset);
HXLINE( 132)					this->get_graphics()->curveTo(drawWidth,thicknessOffset,drawWidth,(thicknessOffset + adjustedCornerRadius));
HXLINE( 133)					this->get_graphics()->lineTo(drawWidth,(drawHeight - adjustedCornerRadius));
HXLINE( 134)					this->get_graphics()->curveTo(drawWidth,drawHeight,(drawWidth - adjustedCornerRadius),drawHeight);
HXLINE( 135)					if (this->_drawBaseBorder) {
HXLINE( 136)						this->get_graphics()->lineTo(thicknessOffset,drawHeight);
HXLINE( 137)						this->get_graphics()->lineTo(thicknessOffset,thicknessOffset);
            					}
            					else {
HXLINE( 139)						this->get_graphics()->lineTo(((Float)0.0),drawHeight);
HXLINE( 140)						this->get_graphics()->lineStyle(((Float)0.0),null(),((Float)0.0),null(),null(),null(),null(),((Float)0.0));
HXLINE( 141)						this->get_graphics()->lineTo(((Float)0.0),thicknessOffset);
HXLINE( 142)						this->applyLineStyle(currentBorder);
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 160)					if (this->_drawBaseBorder) {
HXLINE( 161)						this->get_graphics()->moveTo(thicknessOffset,thicknessOffset);
HXLINE( 162)						this->get_graphics()->lineTo(drawWidth,thicknessOffset);
            					}
            					else {
HXLINE( 164)						this->get_graphics()->lineStyle(((Float)0.0),null(),((Float)0.0),null(),null(),null(),null(),((Float)0.0));
HXLINE( 165)						this->get_graphics()->moveTo(thicknessOffset,((Float)0.0));
HXLINE( 166)						this->get_graphics()->lineTo(drawWidth,((Float)0.0));
HXLINE( 167)						this->applyLineStyle(currentBorder);
            					}
HXLINE( 169)					this->get_graphics()->lineTo(drawWidth,(drawHeight - adjustedCornerRadius));
HXLINE( 170)					this->get_graphics()->curveTo(drawWidth,drawHeight,(drawWidth - adjustedCornerRadius),drawHeight);
HXLINE( 171)					this->get_graphics()->lineTo((thicknessOffset + adjustedCornerRadius),drawHeight);
HXLINE( 172)					this->get_graphics()->curveTo(thicknessOffset,drawHeight,thicknessOffset,(drawHeight - adjustedCornerRadius));
HXLINE( 173)					this->get_graphics()->lineTo(thicknessOffset,thicknessOffset);
            				}
            				break;
            				case (int)3: {
HXLINE( 115)					this->get_graphics()->moveTo((thicknessOffset + adjustedCornerRadius),thicknessOffset);
HXLINE( 116)					if (this->_drawBaseBorder) {
HXLINE( 117)						this->get_graphics()->lineTo(drawWidth,thicknessOffset);
HXLINE( 118)						this->get_graphics()->lineTo(drawWidth,drawHeight);
            					}
            					else {
HXLINE( 120)						this->get_graphics()->lineTo(this->actualWidth,thicknessOffset);
HXLINE( 121)						this->get_graphics()->lineStyle(((Float)0.0),null(),((Float)0.0),null(),null(),null(),null(),((Float)0.0));
HXLINE( 122)						this->get_graphics()->lineTo(this->actualWidth,drawHeight);
HXLINE( 123)						this->applyLineStyle(currentBorder);
            					}
HXLINE( 125)					this->get_graphics()->lineTo((thicknessOffset + adjustedCornerRadius),drawHeight);
HXLINE( 126)					this->get_graphics()->curveTo(thicknessOffset,drawHeight,thicknessOffset,(drawHeight - adjustedCornerRadius));
HXLINE( 127)					this->get_graphics()->lineTo(thicknessOffset,(thicknessOffset + adjustedCornerRadius));
HXLINE( 128)					this->get_graphics()->curveTo(thicknessOffset,thicknessOffset,(thicknessOffset + adjustedCornerRadius),thicknessOffset);
            				}
            				break;
            				default:{
HXLINE( 175)					HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Tab cornerRadiusPosition not supported: ",42,b9,10,e4) + ::Std_obj::string(this->_cornerRadiusPosition))));
            				}
            			}
            		}
            	}



::hx::ObjectPtr< TabSkin_obj > TabSkin_obj::__new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius) {
	::hx::ObjectPtr< TabSkin_obj > __this = new TabSkin_obj();
	__this->__construct(fill,border,__o_cornerRadius);
	return __this;
}

::hx::ObjectPtr< TabSkin_obj > TabSkin_obj::__alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border,::hx::Null< Float >  __o_cornerRadius) {
	TabSkin_obj *__this = (TabSkin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabSkin_obj), true, "feathers.skins.TabSkin"));
	*(void **)__this = TabSkin_obj::_hx_vtable;
	__this->__construct(fill,border,__o_cornerRadius);
	return __this;
}

TabSkin_obj::TabSkin_obj()
{
}

void TabSkin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabSkin);
	HX_MARK_MEMBER_NAME(_cornerRadiusPosition,"_cornerRadiusPosition");
	HX_MARK_MEMBER_NAME(_drawBaseBorder,"_drawBaseBorder");
	HX_MARK_MEMBER_NAME(_cornerRadius,"_cornerRadius");
	 ::feathers::skins::BaseGraphicsPathSkin_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabSkin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cornerRadiusPosition,"_cornerRadiusPosition");
	HX_VISIT_MEMBER_NAME(_drawBaseBorder,"_drawBaseBorder");
	HX_VISIT_MEMBER_NAME(_cornerRadius,"_cornerRadius");
	 ::feathers::skins::BaseGraphicsPathSkin_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabSkin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawPath") ) { return ::hx::Val( drawPath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cornerRadius() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cornerRadius") ) { return ::hx::Val( _cornerRadius ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBaseBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_drawBaseBorder() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_drawBaseBorder") ) { return ::hx::Val( _drawBaseBorder ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_cornerRadius") ) { return ::hx::Val( get_cornerRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cornerRadius") ) { return ::hx::Val( set_cornerRadius_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_drawBaseBorder") ) { return ::hx::Val( get_drawBaseBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_drawBaseBorder") ) { return ::hx::Val( set_drawBaseBorder_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cornerRadiusPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cornerRadiusPosition() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusPosition") ) { return ::hx::Val( _cornerRadiusPosition ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_cornerRadiusPosition") ) { return ::hx::Val( get_cornerRadiusPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusPosition") ) { return ::hx::Val( set_cornerRadiusPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabSkin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cornerRadius(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cornerRadius") ) { _cornerRadius=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBaseBorder") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_drawBaseBorder(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_drawBaseBorder") ) { _drawBaseBorder=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cornerRadiusPosition") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cornerRadiusPosition(inValue.Cast<  ::feathers::layout::RelativePosition >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusPosition") ) { _cornerRadiusPosition=inValue.Cast<  ::feathers::layout::RelativePosition >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_cornerRadiusPosition",af,d7,20,38));
	outFields->push(HX_("cornerRadiusPosition",d0,cd,85,c9));
	outFields->push(HX_("_drawBaseBorder",a0,b1,b4,68));
	outFields->push(HX_("drawBaseBorder",01,69,54,1f));
	outFields->push(HX_("_cornerRadius",e6,24,cc,6f));
	outFields->push(HX_("cornerRadius",07,92,5d,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabSkin_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::layout::RelativePosition */ ,(int)offsetof(TabSkin_obj,_cornerRadiusPosition),HX_("_cornerRadiusPosition",af,d7,20,38)},
	{::hx::fsBool,(int)offsetof(TabSkin_obj,_drawBaseBorder),HX_("_drawBaseBorder",a0,b1,b4,68)},
	{::hx::fsFloat,(int)offsetof(TabSkin_obj,_cornerRadius),HX_("_cornerRadius",e6,24,cc,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String TabSkin_obj_sMemberFields[] = {
	HX_("_cornerRadiusPosition",af,d7,20,38),
	HX_("get_cornerRadiusPosition",59,eb,21,0c),
	HX_("set_cornerRadiusPosition",cd,6c,fc,1e),
	HX_("_drawBaseBorder",a0,b1,b4,68),
	HX_("get_drawBaseBorder",ca,49,ee,ba),
	HX_("set_drawBaseBorder",3e,7c,9d,97),
	HX_("_cornerRadius",e6,24,cc,6f),
	HX_("get_cornerRadius",90,7e,fc,91),
	HX_("set_cornerRadius",04,6c,3e,e8),
	HX_("drawPath",c9,8f,bb,5e),
	::String(null()) };

::hx::Class TabSkin_obj::__mClass;

void TabSkin_obj::__register()
{
	TabSkin_obj _hx_dummy;
	TabSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.TabSkin",3c,06,9f,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabSkin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
