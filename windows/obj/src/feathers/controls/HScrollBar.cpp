#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_HScrollBar
#include <feathers/controls/HScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollBar
#include <feathers/controls/supportClasses/BaseScrollBar.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelHScrollBarStyles
#include <feathers/themes/steel/components/SteelHScrollBarStyles.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_34_new,"feathers.controls.HScrollBar","new",0x3fb363ca,"feathers.controls.HScrollBar.new","feathers/controls/HScrollBar.hx",34,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_41_initializeHScrollBarTheme,"feathers.controls.HScrollBar","initializeHScrollBarTheme",0x4cdde665,"feathers.controls.HScrollBar.initializeHScrollBarTheme","feathers/controls/HScrollBar.hx",41,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_44_valueToLocation,"feathers.controls.HScrollBar","valueToLocation",0xcad2a80b,"feathers.controls.HScrollBar.valueToLocation","feathers/controls/HScrollBar.hx",44,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_54_locationToValue,"feathers.controls.HScrollBar","locationToValue",0xfb26f0ab,"feathers.controls.HScrollBar.locationToValue","feathers/controls/HScrollBar.hx",54,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_63_saveThumbStart,"feathers.controls.HScrollBar","saveThumbStart",0xe56580df,"feathers.controls.HScrollBar.saveThumbStart","feathers/controls/HScrollBar.hx",63,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_74_measure,"feathers.controls.HScrollBar","measure",0x07888bc8,"feathers.controls.HScrollBar.measure","feathers/controls/HScrollBar.hx",74,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_138_layoutSplitTrack,"feathers.controls.HScrollBar","layoutSplitTrack",0x7f41faf1,"feathers.controls.HScrollBar.layoutSplitTrack","feathers/controls/HScrollBar.hx",138,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_164_layoutSingleTrack,"feathers.controls.HScrollBar","layoutSingleTrack",0x10895943,"feathers.controls.HScrollBar.layoutSingleTrack","feathers/controls/HScrollBar.hx",164,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_b60b2bd14bc92e54_178_layoutThumb,"feathers.controls.HScrollBar","layoutThumb",0xee1c0876,"feathers.controls.HScrollBar.layoutThumb","feathers/controls/HScrollBar.hx",178,0x02dfbf06)
HX_LOCAL_STACK_FRAME(_hx_pos_ed703b4a618d8646_42_get_styleContext,"feathers.controls.HScrollBar","get_styleContext",0xbf058f9d,"feathers.controls.HScrollBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
namespace feathers{
namespace controls{

void HScrollBar_obj::__construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener){
            		Float value = __o_value.Default(((Float)0.0));
            		Float minimum = __o_minimum.Default(((Float)0.0));
            		Float maximum = __o_maximum.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_34_new)
HXLINE(  35)		this->initializeHScrollBarTheme();
HXLINE(  37)		super::__construct(value,minimum,maximum,changeListener);
            	}

Dynamic HScrollBar_obj::__CreateEmpty() { return new HScrollBar_obj; }

void *HScrollBar_obj::_hx_vtable = 0;

Dynamic HScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScrollBar_obj > _hx_result = new HScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool HScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28846938) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x28846938;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x61879f68 || inClassId==(int)0x6b353933;
		}
	}
}

void HScrollBar_obj::initializeHScrollBarTheme(){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_41_initializeHScrollBarTheme)
HXDLIN(  41)		::feathers::themes::steel::components::SteelHScrollBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HScrollBar_obj,initializeHScrollBarTheme,(void))

Float HScrollBar_obj::valueToLocation(Float value){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_44_valueToLocation)
HXLINE(  46)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  47)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE(  49)		Float normalized = this->normalizeValue(value);
HXLINE(  50)		Float trackScrollableWidth = this->actualWidth;
HXDLIN(  50)		Float trackScrollableWidth1 = (trackScrollableWidth - this->get_paddingLeft());
HXDLIN(  50)		Float trackScrollableWidth2 = (trackScrollableWidth1 - this->get_paddingRight());
HXDLIN(  50)		Float trackScrollableWidth3 = (trackScrollableWidth2 - this->_currentThumbSkin->get_width());
HXLINE(  51)		return (this->get_paddingLeft() + (trackScrollableWidth3 * normalized));
            	}


Float HScrollBar_obj::locationToValue(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_54_locationToValue)
HXLINE(  55)		Float percentage = ((Float)0.0);
HXLINE(  56)		Float trackScrollableWidth = this->actualWidth;
HXDLIN(  56)		Float trackScrollableWidth1 = (trackScrollableWidth - this->get_paddingLeft());
HXDLIN(  56)		Float trackScrollableWidth2 = (trackScrollableWidth1 - this->get_paddingRight());
HXDLIN(  56)		Float trackScrollableWidth3 = (trackScrollableWidth2 - this->_currentThumbSkin->get_width());
HXLINE(  57)		Float xOffset = (x - this->_pointerStartX);
HXLINE(  58)		Float xPosition = ::Math_obj::min(::Math_obj::max(((Float)0.0),(this->_thumbStartX + xOffset)),trackScrollableWidth3);
HXLINE(  59)		percentage = (xPosition / trackScrollableWidth3);
HXLINE(  60)		return (this->_minimum + (percentage * (this->_maximum - this->_minimum)));
            	}


void HScrollBar_obj::saveThumbStart(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_63_saveThumbStart)
HXLINE(  64)		Float trackWidthMinusThumbWidth = this->actualWidth;
HXLINE(  65)		Float locationMinusHalfThumbWidth = x;
HXLINE(  66)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE(  67)			trackWidthMinusThumbWidth = (trackWidthMinusThumbWidth - this->_currentThumbSkin->get_width());
HXLINE(  68)			locationMinusHalfThumbWidth = (locationMinusHalfThumbWidth - (this->_currentThumbSkin->get_width() / ((Float)2.0)));
            		}
HXLINE(  70)		this->_thumbStartX = ::Math_obj::min(trackWidthMinusThumbWidth,locationMinusHalfThumbWidth);
HXLINE(  71)		this->_thumbStartY = y;
            	}


bool HScrollBar_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_74_measure)
HXLINE(  75)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE(  76)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE(  77)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE(  78)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE(  79)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE(  80)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		bool _hx_tmp1;
HXDLIN(  81)		bool _hx_tmp2;
HXDLIN(  81)		bool _hx_tmp3;
HXDLIN(  81)		bool _hx_tmp4;
HXDLIN(  81)		if (!(needsWidth)) {
HXLINE(  81)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = false;
            		}
HXDLIN(  81)		if (_hx_tmp4) {
HXLINE(  81)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE(  81)			_hx_tmp3 = false;
            		}
HXDLIN(  81)		if (_hx_tmp3) {
HXLINE(  81)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp2 = false;
            		}
HXDLIN(  81)		if (_hx_tmp2) {
HXLINE(  81)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE(  81)			_hx_tmp1 = false;
            		}
HXDLIN(  81)		if (_hx_tmp1) {
HXLINE(  81)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			return false;
            		}
HXLINE(  85)		this->_thumbSkinMeasurements->restore(this->_currentThumbSkin);
HXLINE(  86)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  87)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE(  89)		if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE(  90)			this->_trackSkinMeasurements->restore(this->_currentTrackSkin);
HXLINE(  91)			if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  92)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE(  95)		if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE(  96)			this->_secondaryTrackSkinMeasurements->restore(this->_currentSecondaryTrackSkin);
HXLINE(  97)			if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  98)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 102)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 103)		if (needsWidth) {
HXLINE( 104)			newWidth = ((Float)0.0);
HXLINE( 105)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 106)				newWidth = (newWidth + this->_currentTrackSkin->get_width());
HXLINE( 107)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 108)					newWidth = (newWidth + this->_currentSecondaryTrackSkin->get_width());
            				}
            			}
HXLINE( 111)			Float thumbWidth = this->_currentThumbSkin->get_width();
HXDLIN( 111)			Float thumbWidth1 = (thumbWidth + this->get_paddingLeft());
HXDLIN( 111)			Float thumbWidth2 = (thumbWidth1 + this->get_paddingRight());
HXLINE( 112)			if (::hx::IsLess( newWidth,thumbWidth2 )) {
HXLINE( 113)				newWidth = thumbWidth2;
            			}
            		}
HXLINE( 117)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 118)		if (needsHeight) {
HXLINE( 119)			Float newHeight1 = this->_currentThumbSkin->get_height();
HXDLIN( 119)			Float newHeight2 = (newHeight1 + this->get_paddingTop());
HXDLIN( 119)			newHeight = (newHeight2 + this->get_paddingBottom());
HXLINE( 120)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 121)				if (::hx::IsLess( newHeight,this->_currentTrackSkin->get_height() )) {
HXLINE( 122)					newHeight = this->_currentTrackSkin->get_height();
            				}
HXLINE( 124)				bool _hx_tmp;
HXDLIN( 124)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 124)					_hx_tmp = ::hx::IsLess( newHeight,this->_currentSecondaryTrackSkin->get_height() );
            				}
            				else {
HXLINE( 124)					_hx_tmp = false;
            				}
HXDLIN( 124)				if (_hx_tmp) {
HXLINE( 125)					newHeight = this->_currentSecondaryTrackSkin->get_height();
            				}
            			}
            		}
HXLINE( 131)		 ::Dynamic newMinWidth = newWidth;
HXLINE( 132)		 ::Dynamic newMinHeight = newHeight;
HXLINE( 133)		 ::Dynamic newMaxHeight = newHeight;
HXLINE( 135)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,null(),newMaxHeight);
            	}


void HScrollBar_obj::layoutSplitTrack(){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_138_layoutSplitTrack)
HXLINE( 139)		Float location = this->valueToLocation(this->get_value());
HXLINE( 140)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 141)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 142)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            			}
HXLINE( 144)			location = (location + ::Math_obj::round((this->_currentThumbSkin->get_width() / ((Float)2.0))));
            		}
HXLINE( 147)		this->_currentTrackSkin->set_x(((Float)0.0));
HXLINE( 148)		this->_currentTrackSkin->set_width(location);
HXLINE( 150)		this->_currentSecondaryTrackSkin->set_x(location);
HXLINE( 151)		this->_currentSecondaryTrackSkin->set_width((this->actualWidth - location));
HXLINE( 153)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 154)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 156)		if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 157)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            		}
HXLINE( 160)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentTrackSkin;
HXDLIN( 160)		Float _hx_tmp1 = this->actualHeight;
HXDLIN( 160)		_hx_tmp->set_y(((_hx_tmp1 - this->_currentTrackSkin->get_height()) / ((Float)2.0)));
HXLINE( 161)		 ::openfl::display::InteractiveObject _hx_tmp2 = this->_currentSecondaryTrackSkin;
HXDLIN( 161)		Float _hx_tmp3 = this->actualHeight;
HXDLIN( 161)		_hx_tmp2->set_y(((_hx_tmp3 - this->_currentSecondaryTrackSkin->get_height()) / ((Float)2.0)));
            	}


void HScrollBar_obj::layoutSingleTrack(){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_164_layoutSingleTrack)
HXLINE( 165)		if (::hx::IsNull( this->_currentTrackSkin )) {
HXLINE( 166)			return;
            		}
HXLINE( 168)		this->_currentTrackSkin->set_x(((Float)0.0));
HXLINE( 169)		this->_currentTrackSkin->set_width(this->actualWidth);
HXLINE( 171)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 172)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 175)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentTrackSkin;
HXDLIN( 175)		Float _hx_tmp1 = this->actualHeight;
HXDLIN( 175)		_hx_tmp->set_y(((_hx_tmp1 - this->_currentTrackSkin->get_height()) / ((Float)2.0)));
            	}


void HScrollBar_obj::layoutThumb(){
            	HX_STACKFRAME(&_hx_pos_b60b2bd14bc92e54_178_layoutThumb)
HXLINE( 179)		if (::hx::IsNull( this->_currentThumbSkin )) {
HXLINE( 180)			return;
            		}
HXLINE( 183)		Float range = (this->_maximum - this->_minimum);
HXLINE( 184)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentThumbSkin;
HXDLIN( 184)		bool _hx_tmp1;
HXDLIN( 184)		bool _hx_tmp2;
HXDLIN( 184)		if (this->get_hideThumbWhenDisabled()) {
HXLINE( 184)			_hx_tmp2 = this->_enabled;
            		}
            		else {
HXLINE( 184)			_hx_tmp2 = true;
            		}
HXDLIN( 184)		if (_hx_tmp2) {
HXLINE( 184)			_hx_tmp1 = (range > ((Float)0.0));
            		}
            		else {
HXLINE( 184)			_hx_tmp1 = false;
            		}
HXDLIN( 184)		_hx_tmp->set_visible(_hx_tmp1);
HXLINE( 185)		if (!(this->_currentThumbSkin->get_visible())) {
HXLINE( 186)			return;
            		}
HXLINE( 189)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 190)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE( 193)		Float valueOffset = ((Float)0.0);
HXLINE( 194)		if ((this->_value < this->_minimum)) {
HXLINE( 195)			valueOffset = (this->_minimum - this->_value);
            		}
            		else {
HXLINE( 196)			if ((this->_value > this->_maximum)) {
HXLINE( 197)				valueOffset = (this->_value - this->_maximum);
            			}
            		}
HXLINE( 200)		Float contentWidth = this->actualWidth;
HXDLIN( 200)		Float contentWidth1 = (contentWidth - this->get_paddingLeft());
HXDLIN( 200)		Float contentWidth2 = (contentWidth1 - this->get_paddingRight());
HXLINE( 201)		Float contentHeight = this->actualHeight;
HXDLIN( 201)		Float contentHeight1 = (contentHeight - this->get_paddingTop());
HXDLIN( 201)		Float contentHeight2 = (contentHeight1 - this->get_paddingBottom());
HXLINE( 203)		if (this->get_fixedThumbSize()) {
HXLINE( 204)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->width )) {
HXLINE( 205)				this->_currentThumbSkin->set_width(( (Float)(this->_thumbSkinMeasurements->width) ));
            			}
            		}
            		else {
HXLINE( 208)			Float adjustedPage = this->getAdjustedPage();
HXLINE( 209)			Float thumbWidth = ((contentWidth2 * adjustedPage) / (range + adjustedPage));
HXLINE( 210)			if ((thumbWidth > ((Float)0.0))) {
HXLINE( 211)				Float widthOffset = (contentWidth2 - thumbWidth);
HXLINE( 212)				if ((widthOffset > thumbWidth)) {
HXLINE( 213)					widthOffset = thumbWidth;
            				}
HXLINE( 215)				widthOffset = (widthOffset * (valueOffset / ((range * thumbWidth) / contentWidth2)));
HXLINE( 216)				thumbWidth = (thumbWidth - widthOffset);
            			}
HXLINE( 218)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->minWidth )) {
HXLINE( 219)				if (::hx::IsLess( thumbWidth,this->_thumbSkinMeasurements->minWidth )) {
HXLINE( 220)					thumbWidth = ( (Float)(this->_thumbSkinMeasurements->minWidth) );
            				}
            			}
            			else {
HXLINE( 222)				if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 223)					::Dynamic measureSkin =  ::hx::interface_check(this->_currentThumbSkin,0xcfc32883);
HXLINE( 224)					if ((thumbWidth < ::feathers::core::IMeasureObject_obj::get_minWidth(measureSkin))) {
HXLINE( 225)						thumbWidth = ::feathers::core::IMeasureObject_obj::get_minWidth(measureSkin);
            					}
            				}
            			}
HXLINE( 228)			if ((thumbWidth < ((Float)0.0))) {
HXLINE( 229)				thumbWidth = ((Float)0.0);
            			}
HXLINE( 231)			this->_currentThumbSkin->set_width(thumbWidth);
            		}
HXLINE( 233)		 ::openfl::display::InteractiveObject _hx_tmp3 = this->_currentThumbSkin;
HXDLIN( 233)		_hx_tmp3->set_x(this->valueToLocation(this->_value));
HXLINE( 234)		 ::openfl::display::InteractiveObject _hx_tmp4 = this->_currentThumbSkin;
HXDLIN( 234)		Float _hx_tmp5 = this->get_paddingTop();
HXDLIN( 234)		_hx_tmp4->set_y((_hx_tmp5 + ((contentHeight2 - this->_currentThumbSkin->get_height()) / ((Float)2.0))));
            	}


::hx::Class HScrollBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_ed703b4a618d8646_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::HScrollBar >();
            	}



::hx::ObjectPtr< HScrollBar_obj > HScrollBar_obj::__new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	::hx::ObjectPtr< HScrollBar_obj > __this = new HScrollBar_obj();
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

::hx::ObjectPtr< HScrollBar_obj > HScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	HScrollBar_obj *__this = (HScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScrollBar_obj), true, "feathers.controls.HScrollBar"));
	*(void **)__this = HScrollBar_obj::_hx_vtable;
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

HScrollBar_obj::HScrollBar_obj()
{
}

::hx::Val HScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return ::hx::Val( measure_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"layoutThumb") ) { return ::hx::Val( layoutThumb_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"saveThumbStart") ) { return ::hx::Val( saveThumbStart_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"valueToLocation") ) { return ::hx::Val( valueToLocation_dyn() ); }
		if (HX_FIELD_EQ(inName,"locationToValue") ) { return ::hx::Val( locationToValue_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"layoutSplitTrack") ) { return ::hx::Val( layoutSplitTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"layoutSingleTrack") ) { return ::hx::Val( layoutSingleTrack_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"initializeHScrollBarTheme") ) { return ::hx::Val( initializeHScrollBarTheme_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HScrollBar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String HScrollBar_obj_sMemberFields[] = {
	HX_("initializeHScrollBarTheme",7b,f3,f0,0f),
	HX_("valueToLocation",a1,9d,2e,0f),
	HX_("locationToValue",41,e6,82,3f),
	HX_("saveThumbStart",09,d0,2e,f1),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutSplitTrack",9b,e8,5c,0b),
	HX_("layoutSingleTrack",59,60,fe,1b),
	HX_("layoutThumb",0c,fb,7b,c0),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

::hx::Class HScrollBar_obj::__mClass;

void HScrollBar_obj::__register()
{
	HScrollBar_obj _hx_dummy;
	HScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.HScrollBar",d8,76,77,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
