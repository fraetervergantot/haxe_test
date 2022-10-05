#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_feathers_skins_BaseGraphicsPathSkin
#include <feathers/skins/BaseGraphicsPathSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#include <feathers/skins/ProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_skins_RectangleSkin
#include <feathers/skins/RectangleSkin.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e556d9f7b6188cd8_21_new,"feathers.skins.RectangleSkin","new",0x56184c88,"feathers.skins.RectangleSkin.new","feathers/skins/RectangleSkin.hx",21,0xa31b36aa)
HX_LOCAL_STACK_FRAME(_hx_pos_e556d9f7b6188cd8_42_get_cornerRadius,"feathers.skins.RectangleSkin","get_cornerRadius",0x512f8968,"feathers.skins.RectangleSkin.get_cornerRadius","feathers/skins/RectangleSkin.hx",42,0xa31b36aa)
HX_LOCAL_STACK_FRAME(_hx_pos_e556d9f7b6188cd8_45_set_cornerRadius,"feathers.skins.RectangleSkin","set_cornerRadius",0xa77176dc,"feathers.skins.RectangleSkin.set_cornerRadius","feathers/skins/RectangleSkin.hx",45,0xa31b36aa)
HX_LOCAL_STACK_FRAME(_hx_pos_e556d9f7b6188cd8_54_drawPath,"feathers.skins.RectangleSkin","drawPath",0xe17c02a1,"feathers.skins.RectangleSkin.drawPath","feathers/skins/RectangleSkin.hx",54,0xa31b36aa)
namespace feathers{
namespace skins{

void RectangleSkin_obj::__construct( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border){
            	HX_STACKFRAME(&_hx_pos_e556d9f7b6188cd8_21_new)
HXLINE(  31)		this->_cornerRadius = ((Float)0.0);
HXLINE(  28)		super::__construct(fill,border);
            	}

Dynamic RectangleSkin_obj::__CreateEmpty() { return new RectangleSkin_obj; }

void *RectangleSkin_obj::_hx_vtable = 0;

Dynamic RectangleSkin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RectangleSkin_obj > _hx_result = new RectangleSkin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RectangleSkin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d92f746) {
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
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x0d92f746;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x33776324) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x33776324;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}

Float RectangleSkin_obj::get_cornerRadius(){
            	HX_STACKFRAME(&_hx_pos_e556d9f7b6188cd8_42_get_cornerRadius)
HXDLIN(  42)		return this->_cornerRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RectangleSkin_obj,get_cornerRadius,return )

Float RectangleSkin_obj::set_cornerRadius(Float value){
            	HX_STACKFRAME(&_hx_pos_e556d9f7b6188cd8_45_set_cornerRadius)
HXLINE(  46)		if ((this->_cornerRadius == value)) {
HXLINE(  47)			return this->_cornerRadius;
            		}
HXLINE(  49)		this->_cornerRadius = value;
HXLINE(  50)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE(  51)		return this->_cornerRadius;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleSkin_obj,set_cornerRadius,return )

void RectangleSkin_obj::drawPath(){
            	HX_STACKFRAME(&_hx_pos_e556d9f7b6188cd8_54_drawPath)
HXLINE(  55)		 ::feathers::graphics::LineStyle currentBorder = this->getCurrentBorder();
HXLINE(  56)		Float thickness = this->getLineThickness(currentBorder);
HXLINE(  57)		Float thicknessOffset = (thickness / ((Float)2.0));
HXLINE(  59)		Float drawWidth = ::Math_obj::max(((Float)0.0),(this->actualWidth - thickness));
HXLINE(  60)		Float drawHeight = ::Math_obj::max(((Float)0.0),(this->actualHeight - thickness));
HXLINE(  62)		if ((this->_cornerRadius == ((Float)0.0))) {
HXLINE(  63)			this->get_graphics()->drawRect(thicknessOffset,thicknessOffset,drawWidth,drawHeight);
            		}
            		else {
HXLINE(  65)			Float ellipseSize = (this->_cornerRadius * ((Float)2.0));
HXLINE(  66)			ellipseSize = ::Math_obj::min(ellipseSize,::Math_obj::min(this->actualWidth,this->actualHeight));
HXLINE(  67)			this->get_graphics()->drawRoundRect(thicknessOffset,thicknessOffset,drawWidth,drawHeight,ellipseSize,null());
            		}
            	}



::hx::ObjectPtr< RectangleSkin_obj > RectangleSkin_obj::__new( ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border) {
	::hx::ObjectPtr< RectangleSkin_obj > __this = new RectangleSkin_obj();
	__this->__construct(fill,border);
	return __this;
}

::hx::ObjectPtr< RectangleSkin_obj > RectangleSkin_obj::__alloc(::hx::Ctx *_hx_ctx, ::feathers::graphics::FillStyle fill, ::feathers::graphics::LineStyle border) {
	RectangleSkin_obj *__this = (RectangleSkin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RectangleSkin_obj), true, "feathers.skins.RectangleSkin"));
	*(void **)__this = RectangleSkin_obj::_hx_vtable;
	__this->__construct(fill,border);
	return __this;
}

RectangleSkin_obj::RectangleSkin_obj()
{
}

::hx::Val RectangleSkin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 16:
		if (HX_FIELD_EQ(inName,"get_cornerRadius") ) { return ::hx::Val( get_cornerRadius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cornerRadius") ) { return ::hx::Val( set_cornerRadius_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RectangleSkin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cornerRadius(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cornerRadius") ) { _cornerRadius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_cornerRadius",e6,24,cc,6f));
	outFields->push(HX_("cornerRadius",07,92,5d,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RectangleSkin_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(RectangleSkin_obj,_cornerRadius),HX_("_cornerRadius",e6,24,cc,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RectangleSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String RectangleSkin_obj_sMemberFields[] = {
	HX_("_cornerRadius",e6,24,cc,6f),
	HX_("get_cornerRadius",90,7e,fc,91),
	HX_("set_cornerRadius",04,6c,3e,e8),
	HX_("drawPath",c9,8f,bb,5e),
	::String(null()) };

::hx::Class RectangleSkin_obj::__mClass;

void RectangleSkin_obj::__register()
{
	RectangleSkin_obj _hx_dummy;
	RectangleSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.skins.RectangleSkin",96,a8,4d,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RectangleSkin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RectangleSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RectangleSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RectangleSkin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace skins
