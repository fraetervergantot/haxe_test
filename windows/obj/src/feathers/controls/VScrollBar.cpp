#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
#ifndef INCLUDED_feathers_controls_IScrollBar
#include <feathers/controls/IScrollBar.h>
#endif
#ifndef INCLUDED_feathers_controls_VScrollBar
#include <feathers/controls/VScrollBar.h>
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
#ifndef INCLUDED_feathers_themes_steel_components_SteelVScrollBarStyles
#include <feathers/themes/steel/components/SteelVScrollBarStyles.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7c7510edb0f146a1_33_new,"feathers.controls.VScrollBar","new",0xe52df2fc,"feathers.controls.VScrollBar.new","feathers/controls/VScrollBar.hx",33,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_40_initializeVScrollBarTheme,"feathers.controls.VScrollBar","initializeVScrollBarTheme",0xeba9a7a5,"feathers.controls.VScrollBar.initializeVScrollBarTheme","feathers/controls/VScrollBar.hx",40,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_43_valueToLocation,"feathers.controls.VScrollBar","valueToLocation",0xe5003a3d,"feathers.controls.VScrollBar.valueToLocation","feathers/controls/VScrollBar.hx",43,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_53_locationToValue,"feathers.controls.VScrollBar","locationToValue",0x155482dd,"feathers.controls.VScrollBar.locationToValue","feathers/controls/VScrollBar.hx",53,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_62_saveThumbStart,"feathers.controls.VScrollBar","saveThumbStart",0x63cabaed,"feathers.controls.VScrollBar.saveThumbStart","feathers/controls/VScrollBar.hx",62,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_73_measure,"feathers.controls.VScrollBar","measure",0x08ff9bfa,"feathers.controls.VScrollBar.measure","feathers/controls/VScrollBar.hx",73,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_137_layoutSplitTrack,"feathers.controls.VScrollBar","layoutSplitTrack",0x4cf4547f,"feathers.controls.VScrollBar.layoutSplitTrack","feathers/controls/VScrollBar.hx",137,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_163_layoutSingleTrack,"feathers.controls.VScrollBar","layoutSingleTrack",0x3ee55bf5,"feathers.controls.VScrollBar.layoutSingleTrack","feathers/controls/VScrollBar.hx",163,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_7c7510edb0f146a1_178_layoutThumb,"feathers.controls.VScrollBar","layoutThumb",0xaa6419a8,"feathers.controls.VScrollBar.layoutThumb","feathers/controls/VScrollBar.hx",178,0xd3669c14)
HX_LOCAL_STACK_FRAME(_hx_pos_991a3714533c85f3_42_get_styleContext,"feathers.controls.VScrollBar","get_styleContext",0x8cb7e92b,"feathers.controls.VScrollBar.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
namespace feathers{
namespace controls{

void VScrollBar_obj::__construct(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener){
            		Float value = __o_value.Default(((Float)0.0));
            		Float minimum = __o_minimum.Default(((Float)0.0));
            		Float maximum = __o_maximum.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_33_new)
HXLINE(  34)		this->initializeVScrollBarTheme();
HXLINE(  36)		super::__construct(value,minimum,maximum,changeListener);
            	}

Dynamic VScrollBar_obj::__CreateEmpty() { return new VScrollBar_obj; }

void *VScrollBar_obj::_hx_vtable = 0;

Dynamic VScrollBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VScrollBar_obj > _hx_result = new VScrollBar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool VScrollBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
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
			return inClassId==(int)0x1c8e1d36 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x28846938 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}

void VScrollBar_obj::initializeVScrollBarTheme(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_40_initializeVScrollBarTheme)
HXDLIN(  40)		::feathers::themes::steel::components::SteelVScrollBarStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VScrollBar_obj,initializeVScrollBarTheme,(void))

Float VScrollBar_obj::valueToLocation(Float value){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_43_valueToLocation)
HXLINE(  45)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  46)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE(  48)		Float normalized = this->normalizeValue(value);
HXLINE(  49)		Float trackScrollableHeight = this->actualHeight;
HXDLIN(  49)		Float trackScrollableHeight1 = (trackScrollableHeight - this->get_paddingTop());
HXDLIN(  49)		Float trackScrollableHeight2 = (trackScrollableHeight1 - this->get_paddingBottom());
HXDLIN(  49)		Float trackScrollableHeight3 = (trackScrollableHeight2 - this->_currentThumbSkin->get_height());
HXLINE(  50)		return (this->get_paddingTop() + (trackScrollableHeight3 * normalized));
            	}


Float VScrollBar_obj::locationToValue(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_53_locationToValue)
HXLINE(  54)		Float percentage = ((Float)0.0);
HXLINE(  55)		Float trackScrollableHeight = this->actualHeight;
HXDLIN(  55)		Float trackScrollableHeight1 = (trackScrollableHeight - this->get_paddingTop());
HXDLIN(  55)		Float trackScrollableHeight2 = (trackScrollableHeight1 - this->get_paddingBottom());
HXDLIN(  55)		Float trackScrollableHeight3 = (trackScrollableHeight2 - this->_currentThumbSkin->get_height());
HXLINE(  56)		Float yOffset = (y - this->_pointerStartY);
HXLINE(  57)		Float yPosition = ::Math_obj::min(::Math_obj::max(((Float)0.0),(this->_thumbStartY + yOffset)),trackScrollableHeight3);
HXLINE(  58)		percentage = (yPosition / trackScrollableHeight3);
HXLINE(  59)		return (this->_minimum + (percentage * (this->_maximum - this->_minimum)));
            	}


void VScrollBar_obj::saveThumbStart(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_62_saveThumbStart)
HXLINE(  63)		Float trackHeightMinusThumbHeight = this->actualHeight;
HXLINE(  64)		Float locationMinusHalfThumbHeight = y;
HXLINE(  65)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE(  66)			trackHeightMinusThumbHeight = (trackHeightMinusThumbHeight - this->_currentThumbSkin->get_height());
HXLINE(  67)			locationMinusHalfThumbHeight = (locationMinusHalfThumbHeight - (this->_currentThumbSkin->get_height() / ((Float)2.0)));
            		}
HXLINE(  69)		this->_thumbStartX = x;
HXLINE(  70)		this->_thumbStartY = ::Math_obj::min(trackHeightMinusThumbHeight,locationMinusHalfThumbHeight);
            	}


bool VScrollBar_obj::measure(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_73_measure)
HXLINE(  74)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE(  75)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE(  76)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE(  77)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE(  78)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE(  79)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		bool _hx_tmp1;
HXDLIN(  80)		bool _hx_tmp2;
HXDLIN(  80)		bool _hx_tmp3;
HXDLIN(  80)		bool _hx_tmp4;
HXDLIN(  80)		if (!(needsWidth)) {
HXLINE(  80)			_hx_tmp4 = !(needsHeight);
            		}
            		else {
HXLINE(  80)			_hx_tmp4 = false;
            		}
HXDLIN(  80)		if (_hx_tmp4) {
HXLINE(  80)			_hx_tmp3 = !(needsMinWidth);
            		}
            		else {
HXLINE(  80)			_hx_tmp3 = false;
            		}
HXDLIN(  80)		if (_hx_tmp3) {
HXLINE(  80)			_hx_tmp2 = !(needsMinHeight);
            		}
            		else {
HXLINE(  80)			_hx_tmp2 = false;
            		}
HXDLIN(  80)		if (_hx_tmp2) {
HXLINE(  80)			_hx_tmp1 = !(needsMaxWidth);
            		}
            		else {
HXLINE(  80)			_hx_tmp1 = false;
            		}
HXDLIN(  80)		if (_hx_tmp1) {
HXLINE(  80)			_hx_tmp = !(needsMaxHeight);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			return false;
            		}
HXLINE(  84)		this->_thumbSkinMeasurements->restore(this->_currentThumbSkin);
HXLINE(  85)		if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  86)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            		}
HXLINE(  88)		if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE(  89)			this->_trackSkinMeasurements->restore(this->_currentTrackSkin);
HXLINE(  90)			if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  91)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE(  94)		if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE(  95)			this->_secondaryTrackSkinMeasurements->restore(this->_currentSecondaryTrackSkin);
HXLINE(  96)			if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE(  97)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 101)		 ::Dynamic newWidth = this->get_explicitWidth();
HXLINE( 102)		if (needsWidth) {
HXLINE( 103)			Float newWidth1 = this->_currentThumbSkin->get_width();
HXDLIN( 103)			Float newWidth2 = (newWidth1 + this->get_paddingLeft());
HXDLIN( 103)			newWidth = (newWidth2 + this->get_paddingRight());
HXLINE( 104)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 105)				if (::hx::IsLess( newWidth,this->_currentTrackSkin->get_width() )) {
HXLINE( 106)					newWidth = this->_currentTrackSkin->get_width();
            				}
HXLINE( 108)				bool _hx_tmp;
HXDLIN( 108)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 108)					_hx_tmp = ::hx::IsLess( newWidth,this->_currentSecondaryTrackSkin->get_width() );
            				}
            				else {
HXLINE( 108)					_hx_tmp = false;
            				}
HXDLIN( 108)				if (_hx_tmp) {
HXLINE( 109)					newWidth = this->_currentSecondaryTrackSkin->get_width();
            				}
            			}
            		}
HXLINE( 114)		 ::Dynamic newHeight = this->get_explicitHeight();
HXLINE( 115)		if (needsHeight) {
HXLINE( 116)			newHeight = ((Float)0.0);
HXLINE( 117)			if (::hx::IsNotNull( this->_currentTrackSkin )) {
HXLINE( 118)				newHeight = (newHeight + this->_currentTrackSkin->get_height());
HXLINE( 119)				if (::hx::IsNotNull( this->_currentSecondaryTrackSkin )) {
HXLINE( 120)					newHeight = (newHeight + this->_currentSecondaryTrackSkin->get_height());
            				}
            			}
HXLINE( 123)			Float thumbHeight = this->_currentThumbSkin->get_height();
HXDLIN( 123)			Float thumbHeight1 = (thumbHeight + this->get_paddingTop());
HXDLIN( 123)			Float thumbHeight2 = (thumbHeight1 + this->get_paddingBottom());
HXLINE( 124)			if (::hx::IsLess( newHeight,thumbHeight2 )) {
HXLINE( 125)				newHeight = thumbHeight2;
            			}
            		}
HXLINE( 130)		 ::Dynamic newMinWidth = newWidth;
HXLINE( 131)		 ::Dynamic newMinHeight = newHeight;
HXLINE( 132)		 ::Dynamic newMaxWidth = newWidth;
HXLINE( 134)		return this->saveMeasurements(( (Float)(newWidth) ),( (Float)(newHeight) ),newMinWidth,newMinHeight,newMaxWidth,null());
            	}


void VScrollBar_obj::layoutSplitTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_137_layoutSplitTrack)
HXLINE( 138)		Float location = this->valueToLocation(this->get_value());
HXLINE( 139)		if (::hx::IsNotNull( this->_currentThumbSkin )) {
HXLINE( 140)			if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 141)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentThumbSkin,0x64d4b3cd));
            			}
HXLINE( 143)			location = (location + ::Math_obj::round((this->_currentThumbSkin->get_height() / ((Float)2.0))));
            		}
HXLINE( 146)		this->_currentSecondaryTrackSkin->set_y(((Float)0.0));
HXLINE( 147)		this->_currentSecondaryTrackSkin->set_height(location);
HXLINE( 149)		this->_currentTrackSkin->set_y(location);
HXLINE( 150)		this->_currentTrackSkin->set_height((this->actualHeight - location));
HXLINE( 152)		if (::Std_obj::isOfType(this->_currentSecondaryTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 153)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentSecondaryTrackSkin,0x64d4b3cd));
            		}
HXLINE( 155)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 156)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 159)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentSecondaryTrackSkin;
HXDLIN( 159)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 159)		_hx_tmp->set_x(((_hx_tmp1 - this->_currentSecondaryTrackSkin->get_width()) / ((Float)2.0)));
HXLINE( 160)		 ::openfl::display::InteractiveObject _hx_tmp2 = this->_currentTrackSkin;
HXDLIN( 160)		Float _hx_tmp3 = this->actualWidth;
HXDLIN( 160)		_hx_tmp2->set_x(((_hx_tmp3 - this->_currentTrackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutSingleTrack(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_163_layoutSingleTrack)
HXLINE( 164)		if (::hx::IsNull( this->_currentTrackSkin )) {
HXLINE( 165)			return;
            		}
HXLINE( 168)		this->_currentTrackSkin->set_y(((Float)0.0));
HXLINE( 169)		this->_currentTrackSkin->set_height(this->actualHeight);
HXLINE( 171)		if (::Std_obj::isOfType(this->_currentTrackSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 172)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentTrackSkin,0x64d4b3cd));
            		}
HXLINE( 175)		 ::openfl::display::InteractiveObject _hx_tmp = this->_currentTrackSkin;
HXDLIN( 175)		Float _hx_tmp1 = this->actualWidth;
HXDLIN( 175)		_hx_tmp->set_x(((_hx_tmp1 - this->_currentTrackSkin->get_width()) / ((Float)2.0)));
            	}


void VScrollBar_obj::layoutThumb(){
            	HX_STACKFRAME(&_hx_pos_7c7510edb0f146a1_178_layoutThumb)
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
HXLINE( 204)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->height )) {
HXLINE( 205)				this->_currentThumbSkin->set_height(( (Float)(this->_thumbSkinMeasurements->height) ));
            			}
            		}
            		else {
HXLINE( 208)			Float adjustedPage = this->getAdjustedPage();
HXLINE( 209)			Float thumbHeight = ((contentHeight2 * adjustedPage) / (range + adjustedPage));
HXLINE( 210)			if ((thumbHeight > ((Float)0.0))) {
HXLINE( 211)				Float heightOffset = (contentHeight2 - thumbHeight);
HXLINE( 212)				if ((heightOffset > thumbHeight)) {
HXLINE( 213)					heightOffset = thumbHeight;
            				}
HXLINE( 215)				heightOffset = (heightOffset * (valueOffset / ((range * thumbHeight) / contentHeight2)));
HXLINE( 216)				thumbHeight = (thumbHeight - heightOffset);
            			}
HXLINE( 218)			if (::hx::IsNotNull( this->_thumbSkinMeasurements->minHeight )) {
HXLINE( 219)				if (::hx::IsLess( thumbHeight,this->_thumbSkinMeasurements->minHeight )) {
HXLINE( 220)					thumbHeight = ( (Float)(this->_thumbSkinMeasurements->minHeight) );
            				}
            			}
            			else {
HXLINE( 222)				if (::Std_obj::isOfType(this->_currentThumbSkin,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 223)					::Dynamic measureSkin =  ::hx::interface_check(this->_currentThumbSkin,0xcfc32883);
HXLINE( 224)					if ((thumbHeight < ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin))) {
HXLINE( 225)						thumbHeight = ::feathers::core::IMeasureObject_obj::get_minHeight(measureSkin);
            					}
            				}
            			}
HXLINE( 228)			if ((thumbHeight < ((Float)0.0))) {
HXLINE( 229)				thumbHeight = ((Float)0.0);
            			}
HXLINE( 231)			this->_currentThumbSkin->set_height(thumbHeight);
            		}
HXLINE( 233)		 ::openfl::display::InteractiveObject _hx_tmp3 = this->_currentThumbSkin;
HXDLIN( 233)		Float _hx_tmp4 = this->get_paddingLeft();
HXDLIN( 233)		_hx_tmp3->set_x((_hx_tmp4 + ((contentWidth2 - this->_currentThumbSkin->get_width()) / ((Float)2.0))));
HXLINE( 234)		 ::openfl::display::InteractiveObject _hx_tmp5 = this->_currentThumbSkin;
HXDLIN( 234)		_hx_tmp5->set_y(this->valueToLocation(this->_value));
            	}


::hx::Class VScrollBar_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_991a3714533c85f3_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::VScrollBar >();
            	}



::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__new(::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	::hx::ObjectPtr< VScrollBar_obj > __this = new VScrollBar_obj();
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

::hx::ObjectPtr< VScrollBar_obj > VScrollBar_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_value,::hx::Null< Float >  __o_minimum,::hx::Null< Float >  __o_maximum, ::Dynamic changeListener) {
	VScrollBar_obj *__this = (VScrollBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VScrollBar_obj), true, "feathers.controls.VScrollBar"));
	*(void **)__this = VScrollBar_obj::_hx_vtable;
	__this->__construct(__o_value,__o_minimum,__o_maximum,changeListener);
	return __this;
}

VScrollBar_obj::VScrollBar_obj()
{
}

::hx::Val VScrollBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"initializeVScrollBarTheme") ) { return ::hx::Val( initializeVScrollBarTheme_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VScrollBar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VScrollBar_obj_sStaticStorageInfo = 0;
#endif

static ::String VScrollBar_obj_sMemberFields[] = {
	HX_("initializeVScrollBarTheme",09,b0,b3,35),
	HX_("valueToLocation",a1,9d,2e,0f),
	HX_("locationToValue",41,e6,82,3f),
	HX_("saveThumbStart",09,d0,2e,f1),
	HX_("measure",5e,fb,e9,3c),
	HX_("layoutSplitTrack",9b,e8,5c,0b),
	HX_("layoutSingleTrack",59,60,fe,1b),
	HX_("layoutThumb",0c,fb,7b,c0),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

::hx::Class VScrollBar_obj::__mClass;

void VScrollBar_obj::__register()
{
	VScrollBar_obj _hx_dummy;
	VScrollBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.VScrollBar",0a,05,8a,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VScrollBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VScrollBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VScrollBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VScrollBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
