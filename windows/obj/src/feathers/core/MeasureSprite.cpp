#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
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
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_313139a37d0571ce_28_new,"feathers.core.MeasureSprite","new",0x11628d44,"feathers.core.MeasureSprite.new","feathers/core/MeasureSprite.hx",28,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_53_get_width,"feathers.core.MeasureSprite","get_width",0x29ed9241,"feathers.core.MeasureSprite.get_width","feathers/core/MeasureSprite.hx",53,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_57_set_width,"feathers.core.MeasureSprite","set_width",0x0d3e7e4d,"feathers.core.MeasureSprite.set_width","feathers/core/MeasureSprite.hx",57,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_70_get_height,"feathers.core.MeasureSprite","get_height",0x3c41df4c,"feathers.core.MeasureSprite.get_height","feathers/core/MeasureSprite.hx",70,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_74_set_height,"feathers.core.MeasureSprite","set_height",0x3fbf7dc0,"feathers.core.MeasureSprite.set_height","feathers/core/MeasureSprite.hx",74,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_86_set_scaleX,"feathers.core.MeasureSprite","set_scaleX",0x79996067,"feathers.core.MeasureSprite.set_scaleX","feathers/core/MeasureSprite.hx",86,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_96_set_scaleY,"feathers.core.MeasureSprite","set_scaleY",0x79996068,"feathers.core.MeasureSprite.set_scaleY","feathers/core/MeasureSprite.hx",96,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_113_get_explicitWidth,"feathers.core.MeasureSprite","get_explicitWidth",0x559a5dad,"feathers.core.MeasureSprite.get_explicitWidth","feathers/core/MeasureSprite.hx",113,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_116_set_explicitWidth,"feathers.core.MeasureSprite","set_explicitWidth",0x790835b9,"feathers.core.MeasureSprite.set_explicitWidth","feathers/core/MeasureSprite.hx",116,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_142_get_explicitHeight,"feathers.core.MeasureSprite","get_explicitHeight",0x47c71260,"feathers.core.MeasureSprite.get_explicitHeight","feathers/core/MeasureSprite.hx",142,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_145_set_explicitHeight,"feathers.core.MeasureSprite","set_explicitHeight",0x247644d4,"feathers.core.MeasureSprite.set_explicitHeight","feathers/core/MeasureSprite.hx",145,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_171_get_explicitMinWidth,"feathers.core.MeasureSprite","get_explicitMinWidth",0xa3c77dcd,"feathers.core.MeasureSprite.get_explicitMinWidth","feathers/core/MeasureSprite.hx",171,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_174_set_explicitMinWidth,"feathers.core.MeasureSprite","set_explicitMinWidth",0x707f3541,"feathers.core.MeasureSprite.set_explicitMinWidth","feathers/core/MeasureSprite.hx",174,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_206_get_explicitMinHeight,"feathers.core.MeasureSprite","get_explicitMinHeight",0x61160e40,"feathers.core.MeasureSprite.get_explicitMinHeight","feathers/core/MeasureSprite.hx",206,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_209_set_explicitMinHeight,"feathers.core.MeasureSprite","set_explicitMinHeight",0xb51edc4c,"feathers.core.MeasureSprite.set_explicitMinHeight","feathers/core/MeasureSprite.hx",209,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_239_get_minWidth,"feathers.core.MeasureSprite","get_minWidth",0xc6405db9,"feathers.core.MeasureSprite.get_minWidth","feathers/core/MeasureSprite.hx",239,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_242_set_minWidth,"feathers.core.MeasureSprite","set_minWidth",0xdb39812d,"feathers.core.MeasureSprite.set_minWidth","feathers/core/MeasureSprite.hx",242,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_257_get_minHeight,"feathers.core.MeasureSprite","get_minHeight",0x68611cd4,"feathers.core.MeasureSprite.get_minHeight","feathers/core/MeasureSprite.hx",257,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_260_set_minHeight,"feathers.core.MeasureSprite","set_minHeight",0xad66fee0,"feathers.core.MeasureSprite.set_minHeight","feathers/core/MeasureSprite.hx",260,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_277_get_explicitMaxWidth,"feathers.core.MeasureSprite","get_explicitMaxWidth",0x56ad637b,"feathers.core.MeasureSprite.get_explicitMaxWidth","feathers/core/MeasureSprite.hx",277,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_280_set_explicitMaxWidth,"feathers.core.MeasureSprite","set_explicitMaxWidth",0x23651aef,"feathers.core.MeasureSprite.set_explicitMaxWidth","feathers/core/MeasureSprite.hx",280,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_312_get_explicitMaxHeight,"feathers.core.MeasureSprite","get_explicitMaxHeight",0x375920d2,"feathers.core.MeasureSprite.get_explicitMaxHeight","feathers/core/MeasureSprite.hx",312,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_315_set_explicitMaxHeight,"feathers.core.MeasureSprite","set_explicitMaxHeight",0x8b61eede,"feathers.core.MeasureSprite.set_explicitMaxHeight","feathers/core/MeasureSprite.hx",315,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_345_get_maxWidth,"feathers.core.MeasureSprite","get_maxWidth",0x79264367,"feathers.core.MeasureSprite.get_maxWidth","feathers/core/MeasureSprite.hx",345,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_348_set_maxWidth,"feathers.core.MeasureSprite","set_maxWidth",0x8e1f66db,"feathers.core.MeasureSprite.set_maxWidth","feathers/core/MeasureSprite.hx",348,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_363_get_maxHeight,"feathers.core.MeasureSprite","get_maxHeight",0x3ea42f66,"feathers.core.MeasureSprite.get_maxHeight","feathers/core/MeasureSprite.hx",363,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_366_set_maxHeight,"feathers.core.MeasureSprite","set_maxHeight",0x83aa1172,"feathers.core.MeasureSprite.set_maxHeight","feathers/core/MeasureSprite.hx",366,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_380_resetWidth,"feathers.core.MeasureSprite","resetWidth",0xfc6d5553,"feathers.core.MeasureSprite.resetWidth","feathers/core/MeasureSprite.hx",380,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_388_resetHeight,"feathers.core.MeasureSprite","resetHeight",0x998ccbfa,"feathers.core.MeasureSprite.resetHeight","feathers/core/MeasureSprite.hx",388,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_396_resetMinWidth,"feathers.core.MeasureSprite","resetMinWidth",0x3da251e7,"feathers.core.MeasureSprite.resetMinWidth","feathers/core/MeasureSprite.hx",396,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_404_resetMinHeight,"feathers.core.MeasureSprite","resetMinHeight",0x66b4d0e6,"feathers.core.MeasureSprite.resetMinHeight","feathers/core/MeasureSprite.hx",404,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_412_resetMaxWidth,"feathers.core.MeasureSprite","resetMaxWidth",0xf0883795,"feathers.core.MeasureSprite.resetMaxWidth","feathers/core/MeasureSprite.hx",412,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_420_resetMaxHeight,"feathers.core.MeasureSprite","resetMaxHeight",0x3cf7e378,"feathers.core.MeasureSprite.resetMaxHeight","feathers/core/MeasureSprite.hx",420,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_426_getBounds,"feathers.core.MeasureSprite","getBounds",0xfe558f8f,"feathers.core.MeasureSprite.getBounds","feathers/core/MeasureSprite.hx",426,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_487_saveMeasurements,"feathers.core.MeasureSprite","saveMeasurements",0x0603f870,"feathers.core.MeasureSprite.saveMeasurements","feathers/core/MeasureSprite.hx",487,0x17b1e30c)
namespace feathers{
namespace core{

void MeasureSprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_28_new)
HXLINE( 304)		this->_explicitMaxHeight = null();
HXLINE( 269)		this->_explicitMaxWidth = null();
HXLINE( 198)		this->_explicitMinHeight = null();
HXLINE( 163)		this->_explicitMinWidth = null();
HXLINE( 134)		this->_explicitHeight = null();
HXLINE( 105)		this->_explicitWidth = null();
HXLINE(  40)		this->scaledActualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE(  39)		this->scaledActualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE(  38)		this->scaledActualMinHeight = ((Float)0.0);
HXLINE(  37)		this->scaledActualMinWidth = ((Float)0.0);
HXLINE(  36)		this->scaledActualHeight = ((Float)0.0);
HXLINE(  35)		this->scaledActualWidth = ((Float)0.0);
HXLINE(  34)		this->actualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE(  33)		this->actualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE(  32)		this->actualMinHeight = ((Float)0.0);
HXLINE(  31)		this->actualMinWidth = ((Float)0.0);
HXLINE(  30)		this->actualHeight = ((Float)0.0);
HXLINE(  29)		this->actualWidth = ((Float)0.0);
HXLINE(  48)		super::__construct();
            	}

Dynamic MeasureSprite_obj::__CreateEmpty() { return new MeasureSprite_obj; }

void *MeasureSprite_obj::_hx_vtable = 0;

Dynamic MeasureSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeasureSprite_obj > _hx_result = new MeasureSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MeasureSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x58123034;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_MeasureSprite__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
};

static ::feathers::core::IMeasureObject_obj _hx_feathers_core_MeasureSprite__hx_feathers_core_IMeasureObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::MeasureSprite_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMaxHeight,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_core_MeasureSprite__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::MeasureSprite_obj::set_visible,
};

void *MeasureSprite_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_core_MeasureSprite__hx_openfl_events_IEventDispatcher;
		case (int)0xcfc32883: return &_hx_feathers_core_MeasureSprite__hx_feathers_core_IMeasureObject;
		case (int)0x3a979a67: return &_hx_feathers_core_MeasureSprite__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

Float MeasureSprite_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_53_get_width)
HXDLIN(  53)		return this->scaledActualWidth;
            	}


Float MeasureSprite_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_57_set_width)
HXLINE(  58)		if ((this->get_scaleX() != ((Float)1.0))) {
HXLINE(  59)			value = (value / this->get_scaleX());
            		}
HXLINE(  62)		this->set_explicitWidth(value);
HXLINE(  64)		return this->scaledActualWidth;
            	}


Float MeasureSprite_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_70_get_height)
HXDLIN(  70)		return this->scaledActualHeight;
            	}


Float MeasureSprite_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_74_set_height)
HXLINE(  75)		if ((this->get_scaleY() != ((Float)1.0))) {
HXLINE(  76)			value = (value / this->get_scaleY());
            		}
HXLINE(  79)		this->set_explicitHeight(value);
HXLINE(  81)		return this->scaledActualHeight;
            	}


Float MeasureSprite_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_86_set_scaleX)
HXLINE(  87)		this->super::set_scaleX(value);
HXLINE(  88)		this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE(  91)		return this->get_scaleX();
            	}


Float MeasureSprite_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_96_set_scaleY)
HXLINE(  97)		this->super::set_scaleY(value);
HXLINE(  98)		this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 101)		return this->get_scaleY();
            	}


 ::Dynamic MeasureSprite_obj::get_explicitWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_113_get_explicitWidth)
HXDLIN( 113)		return this->_explicitWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_116_set_explicitWidth)
HXLINE( 117)		if (::hx::IsEq( this->_explicitWidth,value )) {
HXLINE( 118)			return this->_explicitWidth;
            		}
HXLINE( 120)		this->_explicitWidth = value;
HXLINE( 121)		if (::hx::IsNull( value )) {
HXLINE( 122)			this->actualWidth = ((Float)0.0);
HXLINE( 123)			this->scaledActualWidth = ((Float)0.0);
HXLINE( 124)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 126)			bool result = this->saveMeasurements(( (Float)(value) ),this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 127)			if (result) {
HXLINE( 128)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 131)		return this->_explicitWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_142_get_explicitHeight)
HXDLIN( 142)		return this->_explicitHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_145_set_explicitHeight)
HXLINE( 146)		if (::hx::IsEq( this->_explicitHeight,value )) {
HXLINE( 147)			return this->_explicitHeight;
            		}
HXLINE( 149)		this->_explicitHeight = value;
HXLINE( 150)		if (::hx::IsNull( value )) {
HXLINE( 151)			this->actualHeight = ((Float)0.0);
HXLINE( 152)			this->scaledActualHeight = ((Float)0.0);
HXLINE( 153)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 155)			bool result = this->saveMeasurements(this->actualWidth,( (Float)(value) ),this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 156)			if (result) {
HXLINE( 157)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 160)		return this->_explicitHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitHeight,return )

 ::Dynamic MeasureSprite_obj::get_explicitMinWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_171_get_explicitMinWidth)
HXDLIN( 171)		return this->_explicitMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMinWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitMinWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_174_set_explicitMinWidth)
HXLINE( 175)		if (::hx::IsEq( this->_explicitMinWidth,value )) {
HXLINE( 176)			return this->_explicitMinWidth;
            		}
HXLINE( 178)		 ::Dynamic oldValue = this->_explicitMinWidth;
HXLINE( 179)		this->_explicitMinWidth = value;
HXLINE( 180)		if (::hx::IsNull( value )) {
HXLINE( 181)			this->actualMinWidth = ((Float)0.0);
HXLINE( 182)			this->scaledActualMinWidth = ((Float)0.0);
HXLINE( 183)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 187)			Float actualWidth = this->actualWidth;
HXLINE( 188)			this->saveMeasurements(this->actualWidth,this->actualHeight,value,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 189)			bool _hx_tmp;
HXDLIN( 189)			if (::hx::IsNull( this->_explicitWidth )) {
HXLINE( 189)				if (!(::hx::IsLess( actualWidth,value ))) {
HXLINE( 189)					_hx_tmp = ::hx::IsEq( actualWidth,oldValue );
            				}
            				else {
HXLINE( 189)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 189)				_hx_tmp = false;
            			}
HXDLIN( 189)			if (_hx_tmp) {
HXLINE( 192)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 195)		return this->_explicitMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMinWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitMinHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_206_get_explicitMinHeight)
HXDLIN( 206)		return this->_explicitMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMinHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitMinHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_209_set_explicitMinHeight)
HXLINE( 210)		if (::hx::IsEq( this->_explicitMinHeight,value )) {
HXLINE( 211)			return this->_explicitMinHeight;
            		}
HXLINE( 213)		 ::Dynamic oldValue = this->_explicitMinHeight;
HXLINE( 214)		this->_explicitMinHeight = value;
HXLINE( 215)		if (::hx::IsNull( value )) {
HXLINE( 216)			this->actualMinHeight = ((Float)0.0);
HXLINE( 217)			this->scaledActualMinHeight = ((Float)0.0);
HXLINE( 218)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 222)			Float actualHeight = this->actualHeight;
HXLINE( 223)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,value,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 224)			bool _hx_tmp;
HXDLIN( 224)			if (::hx::IsNull( this->_explicitHeight )) {
HXLINE( 224)				if (!(::hx::IsLess( actualHeight,value ))) {
HXLINE( 224)					_hx_tmp = ::hx::IsEq( actualHeight,oldValue );
            				}
            				else {
HXLINE( 224)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 224)				_hx_tmp = false;
            			}
HXDLIN( 224)			if (_hx_tmp) {
HXLINE( 227)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 230)		return this->_explicitMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMinHeight,return )

Float MeasureSprite_obj::get_minWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_239_get_minWidth)
HXDLIN( 239)		return this->scaledActualMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_minWidth,return )

Float MeasureSprite_obj::set_minWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_242_set_minWidth)
HXLINE( 243)		if ((this->get_scaleX() != 1)) {
HXLINE( 244)			value = (value / this->get_scaleX());
            		}
HXLINE( 247)		this->set_explicitMinWidth(value);
HXLINE( 248)		return this->scaledActualMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_minWidth,return )

Float MeasureSprite_obj::get_minHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_257_get_minHeight)
HXDLIN( 257)		return this->scaledActualMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_minHeight,return )

Float MeasureSprite_obj::set_minHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_260_set_minHeight)
HXLINE( 261)		if ((this->get_scaleY() != 1)) {
HXLINE( 262)			value = (value / this->get_scaleY());
            		}
HXLINE( 265)		this->set_explicitMinHeight(value);
HXLINE( 266)		return this->scaledActualMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_minHeight,return )

 ::Dynamic MeasureSprite_obj::get_explicitMaxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_277_get_explicitMaxWidth)
HXDLIN( 277)		return this->_explicitMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMaxWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitMaxWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_280_set_explicitMaxWidth)
HXLINE( 281)		if (::hx::IsEq( this->_explicitMaxWidth,value )) {
HXLINE( 282)			return this->_explicitMaxWidth;
            		}
HXLINE( 284)		 ::Dynamic oldValue = this->_explicitMaxWidth;
HXLINE( 285)		this->_explicitMaxWidth = value;
HXLINE( 286)		if (::hx::IsNull( value )) {
HXLINE( 287)			this->actualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 288)			this->scaledActualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 289)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 293)			Float actualWidth = this->actualWidth;
HXLINE( 294)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,value,this->actualMaxHeight);
HXLINE( 295)			bool _hx_tmp;
HXDLIN( 295)			if (::hx::IsNull( this->_explicitWidth )) {
HXLINE( 295)				if (!(::hx::IsGreater( actualWidth,value ))) {
HXLINE( 295)					_hx_tmp = ::hx::IsEq( actualWidth,oldValue );
            				}
            				else {
HXLINE( 295)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 295)				_hx_tmp = false;
            			}
HXDLIN( 295)			if (_hx_tmp) {
HXLINE( 298)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 301)		return this->_explicitMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMaxWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitMaxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_312_get_explicitMaxHeight)
HXDLIN( 312)		return this->_explicitMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMaxHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitMaxHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_315_set_explicitMaxHeight)
HXLINE( 316)		if (::hx::IsEq( this->_explicitMaxHeight,value )) {
HXLINE( 317)			return this->_explicitMaxHeight;
            		}
HXLINE( 319)		 ::Dynamic oldValue = this->_explicitMaxHeight;
HXLINE( 320)		this->_explicitMaxHeight = value;
HXLINE( 321)		if (::hx::IsNull( value )) {
HXLINE( 322)			this->actualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 323)			this->scaledActualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 324)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 328)			Float actualHeight = this->actualHeight;
HXLINE( 329)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,value);
HXLINE( 330)			bool _hx_tmp;
HXDLIN( 330)			if (::hx::IsNull( this->_explicitHeight )) {
HXLINE( 330)				if (!(::hx::IsGreater( actualHeight,value ))) {
HXLINE( 330)					_hx_tmp = ::hx::IsEq( actualHeight,oldValue );
            				}
            				else {
HXLINE( 330)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 330)				_hx_tmp = false;
            			}
HXDLIN( 330)			if (_hx_tmp) {
HXLINE( 333)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 336)		return this->_explicitMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMaxHeight,return )

Float MeasureSprite_obj::get_maxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_345_get_maxWidth)
HXDLIN( 345)		return this->scaledActualMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_maxWidth,return )

Float MeasureSprite_obj::set_maxWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_348_set_maxWidth)
HXLINE( 349)		if ((this->get_scaleX() != 1)) {
HXLINE( 350)			value = (value / this->get_scaleX());
            		}
HXLINE( 353)		this->set_explicitMaxWidth(value);
HXLINE( 354)		return this->scaledActualMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_maxWidth,return )

Float MeasureSprite_obj::get_maxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_363_get_maxHeight)
HXDLIN( 363)		return this->scaledActualMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_maxHeight,return )

Float MeasureSprite_obj::set_maxHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_366_set_maxHeight)
HXLINE( 367)		if ((this->get_scaleY() != 1)) {
HXLINE( 368)			value = (value / this->get_scaleY());
            		}
HXLINE( 371)		this->set_explicitMaxHeight(value);
HXLINE( 372)		return this->scaledActualMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_maxHeight,return )

void MeasureSprite_obj::resetWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_380_resetWidth)
HXDLIN( 380)		this->set_explicitWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetWidth,(void))

void MeasureSprite_obj::resetHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_388_resetHeight)
HXDLIN( 388)		this->set_explicitHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetHeight,(void))

void MeasureSprite_obj::resetMinWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_396_resetMinWidth)
HXDLIN( 396)		this->set_explicitMinWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMinWidth,(void))

void MeasureSprite_obj::resetMinHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_404_resetMinHeight)
HXDLIN( 404)		this->set_explicitMinHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMinHeight,(void))

void MeasureSprite_obj::resetMaxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_412_resetMaxWidth)
HXDLIN( 412)		this->set_explicitMaxWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMaxWidth,(void))

void MeasureSprite_obj::resetMaxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_420_resetMaxHeight)
HXDLIN( 420)		this->set_explicitMaxHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMaxHeight,(void))

 ::openfl::geom::Rectangle MeasureSprite_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
            	HX_GC_STACKFRAME(&_hx_pos_313139a37d0571ce_426_getBounds)
HXLINE( 427)		if (::hx::IsNull( this->_hx___getBoundsHelperMatrix1 )) {
HXLINE( 428)			this->_hx___getBoundsHelperMatrix1 =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 430)			this->_hx___getBoundsHelperMatrix1->identity();
            		}
HXLINE( 433)		bool _hx_tmp;
HXDLIN( 433)		if (::hx::IsNotNull( targetCoordinateSpace )) {
HXLINE( 433)			_hx_tmp = ::hx::IsInstanceNotEq( targetCoordinateSpace,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 433)			_hx_tmp = false;
            		}
HXDLIN( 433)		if (_hx_tmp) {
HXLINE( 434)			if (::hx::IsNull( this->_hx___getBoundsHelperMatrix2 )) {
HXLINE( 435)				this->_hx___getBoundsHelperMatrix2 =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            			}
HXLINE( 440)			 ::openfl::geom::Matrix worldTransform1 = this->_hx___getWorldTransform();
HXLINE( 441)			this->_hx___getBoundsHelperMatrix1->copyFrom(worldTransform1);
HXLINE( 454)			 ::openfl::geom::Matrix worldTransform2 = targetCoordinateSpace->_hx___getWorldTransform();
HXLINE( 456)			this->_hx___getBoundsHelperMatrix2->copyFrom(worldTransform2);
HXLINE( 457)			this->_hx___getBoundsHelperMatrix2->invert();
HXLINE( 459)			this->_hx___getBoundsHelperMatrix1->concat(this->_hx___getBoundsHelperMatrix2);
HXLINE( 461)			this->_hx___getBoundsHelperMatrix2->identity();
            		}
HXLINE( 464)		Float x = this->_hx___getBoundsHelperMatrix1->tx;
HXLINE( 465)		Float y = this->_hx___getBoundsHelperMatrix1->ty;
HXLINE( 466)		Float w = ((((this->actualWidth * this->_hx___getBoundsHelperMatrix1->a) + (this->actualHeight * this->_hx___getBoundsHelperMatrix1->c)) + this->_hx___getBoundsHelperMatrix1->tx) - x);
HXLINE( 470)		Float h = ((((this->actualWidth * this->_hx___getBoundsHelperMatrix1->b) + (this->actualHeight * this->_hx___getBoundsHelperMatrix1->d)) + this->_hx___getBoundsHelperMatrix1->ty) - y);
HXLINE( 475)		this->_hx___getBoundsHelperMatrix1->identity();
HXLINE( 476)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,w,h);
            	}


bool MeasureSprite_obj::saveMeasurements(Float width,Float height,::hx::Null< Float >  __o_minWidth,::hx::Null< Float >  __o_minHeight, ::Dynamic maxWidth, ::Dynamic maxHeight){
            		Float minWidth = __o_minWidth.Default(((Float)0.0));
            		Float minHeight = __o_minHeight.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_487_saveMeasurements)
HXLINE( 488)		if (::hx::IsNull( maxWidth )) {
HXLINE( 489)			maxWidth = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 491)		if (::hx::IsNull( maxHeight )) {
HXLINE( 492)			maxHeight = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 496)		if (::hx::IsNotNull( this->_explicitMinWidth )) {
HXLINE( 497)			minWidth = ( (Float)(this->_explicitMinWidth) );
            		}
HXLINE( 499)		if (::hx::IsNotNull( this->_explicitMinHeight )) {
HXLINE( 500)			minHeight = ( (Float)(this->_explicitMinHeight) );
            		}
HXLINE( 502)		if (::hx::IsNotNull( this->_explicitMaxWidth )) {
HXLINE( 503)			maxWidth = this->_explicitMaxWidth;
            		}
            		else {
HXLINE( 504)			if (::hx::IsNull( maxWidth )) {
HXLINE( 506)				maxWidth = ::hx::DivByZero(((Float)1.0));
            			}
            		}
HXLINE( 508)		if (::hx::IsNotNull( this->_explicitMaxHeight )) {
HXLINE( 509)			maxHeight = this->_explicitMaxHeight;
            		}
            		else {
HXLINE( 510)			if (::hx::IsNull( maxHeight )) {
HXLINE( 512)				maxHeight = ::hx::DivByZero(((Float)1.0));
            			}
            		}
HXLINE( 519)		bool _hx_tmp;
HXDLIN( 519)		if (::hx::IsNull( this->_explicitMaxWidth )) {
HXLINE( 519)			_hx_tmp = ::hx::IsLess( maxWidth,minWidth );
            		}
            		else {
HXLINE( 519)			_hx_tmp = false;
            		}
HXDLIN( 519)		if (_hx_tmp) {
HXLINE( 520)			maxWidth = minWidth;
            		}
HXLINE( 522)		bool _hx_tmp1;
HXDLIN( 522)		if (::hx::IsNull( this->_explicitMinWidth )) {
HXLINE( 522)			_hx_tmp1 = ::hx::IsGreater( minWidth,maxWidth );
            		}
            		else {
HXLINE( 522)			_hx_tmp1 = false;
            		}
HXDLIN( 522)		if (_hx_tmp1) {
HXLINE( 523)			minWidth = ( (Float)(maxWidth) );
            		}
HXLINE( 525)		bool _hx_tmp2;
HXDLIN( 525)		if (::hx::IsNull( this->_explicitMaxHeight )) {
HXLINE( 525)			_hx_tmp2 = ::hx::IsLess( maxHeight,minHeight );
            		}
            		else {
HXLINE( 525)			_hx_tmp2 = false;
            		}
HXDLIN( 525)		if (_hx_tmp2) {
HXLINE( 526)			maxHeight = minHeight;
            		}
HXLINE( 528)		bool _hx_tmp3;
HXDLIN( 528)		if (::hx::IsNull( this->_explicitMinHeight )) {
HXLINE( 528)			_hx_tmp3 = ::hx::IsGreater( minHeight,maxHeight );
            		}
            		else {
HXLINE( 528)			_hx_tmp3 = false;
            		}
HXDLIN( 528)		if (_hx_tmp3) {
HXLINE( 529)			minHeight = ( (Float)(maxHeight) );
            		}
HXLINE( 534)		if (::hx::IsNotNull( this->_explicitWidth )) {
HXLINE( 535)			width = ( (Float)(this->_explicitWidth) );
            		}
            		else {
HXLINE( 537)			if ((width < minWidth)) {
HXLINE( 538)				width = minWidth;
            			}
            			else {
HXLINE( 539)				if (::hx::IsGreater( width,maxWidth )) {
HXLINE( 540)					width = ( (Float)(maxWidth) );
            				}
            			}
            		}
HXLINE( 543)		if (::hx::IsNotNull( this->_explicitHeight )) {
HXLINE( 544)			height = ( (Float)(this->_explicitHeight) );
            		}
            		else {
HXLINE( 546)			if ((height < minHeight)) {
HXLINE( 547)				height = minHeight;
            			}
            			else {
HXLINE( 548)				if (::hx::IsGreater( height,maxHeight )) {
HXLINE( 549)					height = ( (Float)(maxHeight) );
            				}
            			}
            		}
HXLINE( 553)		Float scaleX = this->get_scaleX();
HXLINE( 554)		if ((scaleX < ((Float)0.0))) {
HXLINE( 555)			scaleX = -(scaleX);
            		}
HXLINE( 557)		Float scaleY = this->get_scaleY();
HXLINE( 558)		if ((scaleY < ((Float)0.0))) {
HXLINE( 559)			scaleY = -(scaleY);
            		}
HXLINE( 562)		bool resized = false;
HXLINE( 563)		if ((this->actualWidth != width)) {
HXLINE( 564)			this->actualWidth = width;
HXLINE( 565)			resized = true;
            		}
HXLINE( 567)		if ((this->actualHeight != height)) {
HXLINE( 568)			this->actualHeight = height;
HXLINE( 569)			resized = true;
            		}
HXLINE( 571)		if ((this->actualMinWidth != minWidth)) {
HXLINE( 572)			this->actualMinWidth = minWidth;
HXLINE( 573)			resized = true;
            		}
HXLINE( 575)		if ((this->actualMinHeight != minHeight)) {
HXLINE( 576)			this->actualMinHeight = minHeight;
HXLINE( 577)			resized = true;
            		}
HXLINE( 579)		if (::hx::IsNotEq( this->actualMaxWidth,maxWidth )) {
HXLINE( 580)			this->actualMaxWidth = ( (Float)(maxWidth) );
HXLINE( 581)			resized = true;
            		}
HXLINE( 583)		if (::hx::IsNotEq( this->actualMaxHeight,maxHeight )) {
HXLINE( 584)			this->actualMaxHeight = ( (Float)(maxHeight) );
HXLINE( 585)			resized = true;
            		}
HXLINE( 588)		width = this->scaledActualWidth;
HXLINE( 589)		height = this->scaledActualHeight;
HXLINE( 590)		this->scaledActualWidth = (this->actualWidth * scaleX);
HXLINE( 591)		this->scaledActualHeight = (this->actualHeight * scaleY);
HXLINE( 592)		this->scaledActualMinWidth = (this->actualMinWidth * scaleX);
HXLINE( 593)		this->scaledActualMinHeight = (this->actualMinHeight * scaleY);
HXLINE( 594)		this->scaledActualMaxWidth = (this->actualMaxWidth * scaleX);
HXLINE( 595)		this->scaledActualMaxHeight = (this->actualMaxHeight * scaleY);
HXLINE( 596)		bool _hx_tmp4;
HXDLIN( 596)		if ((width == this->scaledActualWidth)) {
HXLINE( 596)			_hx_tmp4 = (height != this->scaledActualHeight);
            		}
            		else {
HXLINE( 596)			_hx_tmp4 = true;
            		}
HXDLIN( 596)		if (_hx_tmp4) {
HXLINE( 597)			resized = true;
HXLINE( 598)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("resize",f4,59,7b,08),null(),null());
            		}
HXLINE( 600)		return resized;
            	}


HX_DEFINE_DYNAMIC_FUNC6(MeasureSprite_obj,saveMeasurements,return )


::hx::ObjectPtr< MeasureSprite_obj > MeasureSprite_obj::__new() {
	::hx::ObjectPtr< MeasureSprite_obj > __this = new MeasureSprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MeasureSprite_obj > MeasureSprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MeasureSprite_obj *__this = (MeasureSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeasureSprite_obj), true, "feathers.core.MeasureSprite"));
	*(void **)__this = MeasureSprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MeasureSprite_obj::MeasureSprite_obj()
{
}

void MeasureSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeasureSprite);
	HX_MARK_MEMBER_NAME(actualWidth,"actualWidth");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	HX_MARK_MEMBER_NAME(actualMinWidth,"actualMinWidth");
	HX_MARK_MEMBER_NAME(actualMinHeight,"actualMinHeight");
	HX_MARK_MEMBER_NAME(actualMaxWidth,"actualMaxWidth");
	HX_MARK_MEMBER_NAME(actualMaxHeight,"actualMaxHeight");
	HX_MARK_MEMBER_NAME(scaledActualWidth,"scaledActualWidth");
	HX_MARK_MEMBER_NAME(scaledActualHeight,"scaledActualHeight");
	HX_MARK_MEMBER_NAME(scaledActualMinWidth,"scaledActualMinWidth");
	HX_MARK_MEMBER_NAME(scaledActualMinHeight,"scaledActualMinHeight");
	HX_MARK_MEMBER_NAME(scaledActualMaxWidth,"scaledActualMaxWidth");
	HX_MARK_MEMBER_NAME(scaledActualMaxHeight,"scaledActualMaxHeight");
	HX_MARK_MEMBER_NAME(_explicitWidth,"_explicitWidth");
	HX_MARK_MEMBER_NAME(_explicitHeight,"_explicitHeight");
	HX_MARK_MEMBER_NAME(_explicitMinWidth,"_explicitMinWidth");
	HX_MARK_MEMBER_NAME(_explicitMinHeight,"_explicitMinHeight");
	HX_MARK_MEMBER_NAME(_explicitMaxWidth,"_explicitMaxWidth");
	HX_MARK_MEMBER_NAME(_explicitMaxHeight,"_explicitMaxHeight");
	HX_MARK_MEMBER_NAME(_hx___getBoundsHelperMatrix1,"__getBoundsHelperMatrix1");
	HX_MARK_MEMBER_NAME(_hx___getBoundsHelperMatrix2,"__getBoundsHelperMatrix2");
	 ::feathers::core::ValidatingSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeasureSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actualWidth,"actualWidth");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	HX_VISIT_MEMBER_NAME(actualMinWidth,"actualMinWidth");
	HX_VISIT_MEMBER_NAME(actualMinHeight,"actualMinHeight");
	HX_VISIT_MEMBER_NAME(actualMaxWidth,"actualMaxWidth");
	HX_VISIT_MEMBER_NAME(actualMaxHeight,"actualMaxHeight");
	HX_VISIT_MEMBER_NAME(scaledActualWidth,"scaledActualWidth");
	HX_VISIT_MEMBER_NAME(scaledActualHeight,"scaledActualHeight");
	HX_VISIT_MEMBER_NAME(scaledActualMinWidth,"scaledActualMinWidth");
	HX_VISIT_MEMBER_NAME(scaledActualMinHeight,"scaledActualMinHeight");
	HX_VISIT_MEMBER_NAME(scaledActualMaxWidth,"scaledActualMaxWidth");
	HX_VISIT_MEMBER_NAME(scaledActualMaxHeight,"scaledActualMaxHeight");
	HX_VISIT_MEMBER_NAME(_explicitWidth,"_explicitWidth");
	HX_VISIT_MEMBER_NAME(_explicitHeight,"_explicitHeight");
	HX_VISIT_MEMBER_NAME(_explicitMinWidth,"_explicitMinWidth");
	HX_VISIT_MEMBER_NAME(_explicitMinHeight,"_explicitMinHeight");
	HX_VISIT_MEMBER_NAME(_explicitMaxWidth,"_explicitMaxWidth");
	HX_VISIT_MEMBER_NAME(_explicitMaxHeight,"_explicitMaxHeight");
	HX_VISIT_MEMBER_NAME(_hx___getBoundsHelperMatrix1,"__getBoundsHelperMatrix1");
	HX_VISIT_MEMBER_NAME(_hx___getBoundsHelperMatrix2,"__getBoundsHelperMatrix2");
	 ::feathers::core::ValidatingSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MeasureSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minWidth() ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxWidth() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minHeight() ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxHeight() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetWidth") ) { return ::hx::Val( resetWidth_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { return ::hx::Val( actualWidth ); }
		if (HX_FIELD_EQ(inName,"resetHeight") ) { return ::hx::Val( resetHeight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return ::hx::Val( actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_minWidth") ) { return ::hx::Val( get_minWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return ::hx::Val( set_minWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxWidth") ) { return ::hx::Val( get_maxWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return ::hx::Val( set_maxWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explicitWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitWidth() ); }
		if (HX_FIELD_EQ(inName,"get_minHeight") ) { return ::hx::Val( get_minHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return ::hx::Val( set_minHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxHeight") ) { return ::hx::Val( get_maxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return ::hx::Val( set_maxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMinWidth") ) { return ::hx::Val( resetMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMaxWidth") ) { return ::hx::Val( resetMaxWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actualMinWidth") ) { return ::hx::Val( actualMinWidth ); }
		if (HX_FIELD_EQ(inName,"actualMaxWidth") ) { return ::hx::Val( actualMaxWidth ); }
		if (HX_FIELD_EQ(inName,"_explicitWidth") ) { return ::hx::Val( _explicitWidth ); }
		if (HX_FIELD_EQ(inName,"explicitHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitHeight() ); }
		if (HX_FIELD_EQ(inName,"resetMinHeight") ) { return ::hx::Val( resetMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMaxHeight") ) { return ::hx::Val( resetMaxHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actualMinHeight") ) { return ::hx::Val( actualMinHeight ); }
		if (HX_FIELD_EQ(inName,"actualMaxHeight") ) { return ::hx::Val( actualMaxHeight ); }
		if (HX_FIELD_EQ(inName,"_explicitHeight") ) { return ::hx::Val( _explicitHeight ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"explicitMinWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMinWidth() ); }
		if (HX_FIELD_EQ(inName,"explicitMaxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMaxWidth() ); }
		if (HX_FIELD_EQ(inName,"saveMeasurements") ) { return ::hx::Val( saveMeasurements_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scaledActualWidth") ) { return ::hx::Val( scaledActualWidth ); }
		if (HX_FIELD_EQ(inName,"get_explicitWidth") ) { return ::hx::Val( get_explicitWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitWidth") ) { return ::hx::Val( set_explicitWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_explicitMinWidth") ) { return ::hx::Val( _explicitMinWidth ); }
		if (HX_FIELD_EQ(inName,"explicitMinHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMinHeight() ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxWidth") ) { return ::hx::Val( _explicitMaxWidth ); }
		if (HX_FIELD_EQ(inName,"explicitMaxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMaxHeight() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scaledActualHeight") ) { return ::hx::Val( scaledActualHeight ); }
		if (HX_FIELD_EQ(inName,"get_explicitHeight") ) { return ::hx::Val( get_explicitHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitHeight") ) { return ::hx::Val( set_explicitHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_explicitMinHeight") ) { return ::hx::Val( _explicitMinHeight ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxHeight") ) { return ::hx::Val( _explicitMaxHeight ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaledActualMinWidth") ) { return ::hx::Val( scaledActualMinWidth ); }
		if (HX_FIELD_EQ(inName,"scaledActualMaxWidth") ) { return ::hx::Val( scaledActualMaxWidth ); }
		if (HX_FIELD_EQ(inName,"get_explicitMinWidth") ) { return ::hx::Val( get_explicitMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMinWidth") ) { return ::hx::Val( set_explicitMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_explicitMaxWidth") ) { return ::hx::Val( get_explicitMaxWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMaxWidth") ) { return ::hx::Val( set_explicitMaxWidth_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"scaledActualMinHeight") ) { return ::hx::Val( scaledActualMinHeight ); }
		if (HX_FIELD_EQ(inName,"scaledActualMaxHeight") ) { return ::hx::Val( scaledActualMaxHeight ); }
		if (HX_FIELD_EQ(inName,"get_explicitMinHeight") ) { return ::hx::Val( get_explicitMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMinHeight") ) { return ::hx::Val( set_explicitMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_explicitMaxHeight") ) { return ::hx::Val( get_explicitMaxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMaxHeight") ) { return ::hx::Val( set_explicitMaxHeight_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix1") ) { return ::hx::Val( _hx___getBoundsHelperMatrix1 ); }
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix2") ) { return ::hx::Val( _hx___getBoundsHelperMatrix2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeasureSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minWidth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxWidth(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxHeight(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { actualWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explicitWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actualMinWidth") ) { actualMinWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualMaxWidth") ) { actualMaxWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitWidth") ) { _explicitWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actualMinHeight") ) { actualMinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualMaxHeight") ) { actualMaxHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitHeight") ) { _explicitHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"explicitMinWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMinWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"explicitMaxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMaxWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scaledActualWidth") ) { scaledActualWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMinWidth") ) { _explicitMinWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitMinHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMinHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxWidth") ) { _explicitMaxWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitMaxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMaxHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scaledActualHeight") ) { scaledActualHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMinHeight") ) { _explicitMinHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMaxHeight") ) { _explicitMaxHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaledActualMinWidth") ) { scaledActualMinWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledActualMaxWidth") ) { scaledActualMaxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"scaledActualMinHeight") ) { scaledActualMinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledActualMaxHeight") ) { scaledActualMaxHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix1") ) { _hx___getBoundsHelperMatrix1=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix2") ) { _hx___getBoundsHelperMatrix2=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeasureSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("actualWidth",98,d8,41,38));
	outFields->push(HX_("actualHeight",15,25,ab,b7));
	outFields->push(HX_("actualMinWidth",c2,67,dd,e2));
	outFields->push(HX_("actualMinHeight",ab,da,2c,55));
	outFields->push(HX_("actualMaxWidth",70,4d,c3,95));
	outFields->push(HX_("actualMaxHeight",3d,ed,6f,2b));
	outFields->push(HX_("scaledActualWidth",1e,b8,ca,bf));
	outFields->push(HX_("scaledActualHeight",cf,da,e5,c7));
	outFields->push(HX_("scaledActualMinWidth",fc,7f,7c,7f));
	outFields->push(HX_("scaledActualMinHeight",31,f5,c2,c3));
	outFields->push(HX_("scaledActualMaxWidth",aa,65,62,32));
	outFields->push(HX_("scaledActualMaxHeight",c3,07,06,9a));
	outFields->push(HX_("_explicitWidth",b3,3e,82,86));
	outFields->push(HX_("explicitWidth",72,4e,30,48));
	outFields->push(HX_("_explicitHeight",9a,16,c4,e1));
	outFields->push(HX_("explicitHeight",fb,cd,63,98));
	outFields->push(HX_("_explicitMinWidth",87,84,39,7a));
	outFields->push(HX_("explicitMinWidth",28,96,be,e1));
	outFields->push(HX_("_explicitMinHeight",46,ea,69,2e));
	outFields->push(HX_("explicitMinHeight",85,45,54,5b));
	outFields->push(HX_("minWidth",14,23,9a,c1));
	outFields->push(HX_("minHeight",19,07,94,5b));
	outFields->push(HX_("_explicitMaxWidth",35,6a,1f,2d));
	outFields->push(HX_("explicitMaxWidth",d6,7b,a4,94));
	outFields->push(HX_("_explicitMaxHeight",d8,fc,ac,04));
	outFields->push(HX_("explicitMaxHeight",17,58,97,31));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("__getBoundsHelperMatrix1",77,d3,a5,73));
	outFields->push(HX_("__getBoundsHelperMatrix2",78,d3,a5,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeasureSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualWidth),HX_("actualWidth",98,d8,41,38)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualHeight),HX_("actualHeight",15,25,ab,b7)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMinWidth),HX_("actualMinWidth",c2,67,dd,e2)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMinHeight),HX_("actualMinHeight",ab,da,2c,55)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMaxWidth),HX_("actualMaxWidth",70,4d,c3,95)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMaxHeight),HX_("actualMaxHeight",3d,ed,6f,2b)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualWidth),HX_("scaledActualWidth",1e,b8,ca,bf)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualHeight),HX_("scaledActualHeight",cf,da,e5,c7)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMinWidth),HX_("scaledActualMinWidth",fc,7f,7c,7f)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMinHeight),HX_("scaledActualMinHeight",31,f5,c2,c3)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMaxWidth),HX_("scaledActualMaxWidth",aa,65,62,32)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMaxHeight),HX_("scaledActualMaxHeight",c3,07,06,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitWidth),HX_("_explicitWidth",b3,3e,82,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitHeight),HX_("_explicitHeight",9a,16,c4,e1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMinWidth),HX_("_explicitMinWidth",87,84,39,7a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMinHeight),HX_("_explicitMinHeight",46,ea,69,2e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMaxWidth),HX_("_explicitMaxWidth",35,6a,1f,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMaxHeight),HX_("_explicitMaxHeight",d8,fc,ac,04)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(MeasureSprite_obj,_hx___getBoundsHelperMatrix1),HX_("__getBoundsHelperMatrix1",77,d3,a5,73)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(MeasureSprite_obj,_hx___getBoundsHelperMatrix2),HX_("__getBoundsHelperMatrix2",78,d3,a5,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeasureSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String MeasureSprite_obj_sMemberFields[] = {
	HX_("actualWidth",98,d8,41,38),
	HX_("actualHeight",15,25,ab,b7),
	HX_("actualMinWidth",c2,67,dd,e2),
	HX_("actualMinHeight",ab,da,2c,55),
	HX_("actualMaxWidth",70,4d,c3,95),
	HX_("actualMaxHeight",3d,ed,6f,2b),
	HX_("scaledActualWidth",1e,b8,ca,bf),
	HX_("scaledActualHeight",cf,da,e5,c7),
	HX_("scaledActualMinWidth",fc,7f,7c,7f),
	HX_("scaledActualMinHeight",31,f5,c2,c3),
	HX_("scaledActualMaxWidth",aa,65,62,32),
	HX_("scaledActualMaxHeight",c3,07,06,9a),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("_explicitWidth",b3,3e,82,86),
	HX_("get_explicitWidth",c9,59,a0,4e),
	HX_("set_explicitWidth",d5,31,0e,72),
	HX_("_explicitHeight",9a,16,c4,e1),
	HX_("get_explicitHeight",c4,ae,fd,33),
	HX_("set_explicitHeight",38,e1,ac,10),
	HX_("_explicitMinWidth",87,84,39,7a),
	HX_("get_explicitMinWidth",31,fb,28,00),
	HX_("set_explicitMinWidth",a5,b2,e0,cc),
	HX_("_explicitMinHeight",46,ea,69,2e),
	HX_("get_explicitMinHeight",5c,48,02,da),
	HX_("set_explicitMinHeight",68,16,0b,2e),
	HX_("get_minWidth",1d,d7,b3,76),
	HX_("set_minWidth",91,fa,ac,8b),
	HX_("get_minHeight",f0,da,f7,1c),
	HX_("set_minHeight",fc,bc,fd,61),
	HX_("_explicitMaxWidth",35,6a,1f,2d),
	HX_("get_explicitMaxWidth",df,e0,0e,b3),
	HX_("set_explicitMaxWidth",53,98,c6,7f),
	HX_("_explicitMaxHeight",d8,fc,ac,04),
	HX_("get_explicitMaxHeight",ee,5a,45,b0),
	HX_("set_explicitMaxHeight",fa,28,4e,04),
	HX_("get_maxWidth",cb,bc,99,29),
	HX_("set_maxWidth",3f,e0,92,3e),
	HX_("get_maxHeight",82,ed,3a,f3),
	HX_("set_maxHeight",8e,cf,40,38),
	HX_("resetWidth",b7,ed,fe,b2),
	HX_("resetHeight",16,8b,60,a2),
	HX_("resetMinWidth",03,10,39,f2),
	HX_("resetMinHeight",4a,6b,04,b6),
	HX_("resetMaxWidth",b1,f5,1e,a5),
	HX_("resetMaxHeight",dc,7d,47,8c),
	HX_("__getBoundsHelperMatrix1",77,d3,a5,73),
	HX_("__getBoundsHelperMatrix2",78,d3,a5,73),
	HX_("getBounds",ab,0f,74,e2),
	HX_("saveMeasurements",d4,f3,39,7c),
	::String(null()) };

::hx::Class MeasureSprite_obj::__mClass;

void MeasureSprite_obj::__register()
{
	MeasureSprite_obj _hx_dummy;
	MeasureSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.MeasureSprite",52,db,41,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeasureSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeasureSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeasureSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeasureSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
