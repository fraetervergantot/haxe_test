#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_layout_RelativePosition
#include <feathers/layout/RelativePosition.h>
#endif
#ifndef INCLUDED_feathers_utils_DPadFocusUtil
#include <feathers/utils/DPadFocusUtil.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c1414966f97eef29_41_isBetterFocusForRelativePosition,"feathers.utils.DPadFocusUtil","isBetterFocusForRelativePosition",0x12e6fdbe,"feathers.utils.DPadFocusUtil.isBetterFocusForRelativePosition","feathers/utils/DPadFocusUtil.hx",41,0xe8cd0e70)
HX_LOCAL_STACK_FRAME(_hx_pos_c1414966f97eef29_106_calculateSecondaryAxisDistanceForRelativePosition,"feathers.utils.DPadFocusUtil","calculateSecondaryAxisDistanceForRelativePosition",0xef1862fc,"feathers.utils.DPadFocusUtil.calculateSecondaryAxisDistanceForRelativePosition","feathers/utils/DPadFocusUtil.hx",106,0xe8cd0e70)
HX_LOCAL_STACK_FRAME(_hx_pos_c1414966f97eef29_114_calculateMaxPrimaryAxisDistanceForRelativePosition,"feathers.utils.DPadFocusUtil","calculateMaxPrimaryAxisDistanceForRelativePosition",0xed3391e2,"feathers.utils.DPadFocusUtil.calculateMaxPrimaryAxisDistanceForRelativePosition","feathers/utils/DPadFocusUtil.hx",114,0xe8cd0e70)
HX_LOCAL_STACK_FRAME(_hx_pos_c1414966f97eef29_149_calculateMinPrimaryAxisDistanceForRelativePosition,"feathers.utils.DPadFocusUtil","calculateMinPrimaryAxisDistanceForRelativePosition",0x6484f750,"feathers.utils.DPadFocusUtil.calculateMinPrimaryAxisDistanceForRelativePosition","feathers/utils/DPadFocusUtil.hx",149,0xe8cd0e70)
HX_LOCAL_STACK_FRAME(_hx_pos_c1414966f97eef29_184_itemsAreOnSameAxis,"feathers.utils.DPadFocusUtil","itemsAreOnSameAxis",0x1e8cd758,"feathers.utils.DPadFocusUtil.itemsAreOnSameAxis","feathers/utils/DPadFocusUtil.hx",184,0xe8cd0e70)
namespace feathers{
namespace utils{

void DPadFocusUtil_obj::__construct() { }

Dynamic DPadFocusUtil_obj::__CreateEmpty() { return new DPadFocusUtil_obj; }

void *DPadFocusUtil_obj::_hx_vtable = 0;

Dynamic DPadFocusUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DPadFocusUtil_obj > _hx_result = new DPadFocusUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DPadFocusUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55f567f2;
}

bool DPadFocusUtil_obj::isBetterFocusForRelativePosition( ::openfl::display::DisplayObject object1, ::openfl::display::DisplayObject object2, ::openfl::geom::Rectangle focusedRect, ::feathers::layout::RelativePosition relativePosition){
            	HX_STACKFRAME(&_hx_pos_c1414966f97eef29_41_isBetterFocusForRelativePosition)
HXLINE(  42)		 ::openfl::geom::Rectangle rect = object1->getBounds(object1->stage);
HXLINE(  44)		Float minPrimaryDistance1 = ::feathers::utils::DPadFocusUtil_obj::calculateMinPrimaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  45)		if ((minPrimaryDistance1 == ::Math_obj::POSITIVE_INFINITY)) {
HXLINE(  46)			return false;
            		}
HXLINE(  48)		Float maxPrimaryDistance1 = ::feathers::utils::DPadFocusUtil_obj::calculateMaxPrimaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  49)		Float secondaryDistance1 = ::feathers::utils::DPadFocusUtil_obj::calculateSecondaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  50)		bool onSameAxis1 = ::feathers::utils::DPadFocusUtil_obj::itemsAreOnSameAxis(focusedRect,rect,relativePosition);
HXLINE(  52)		Float minPrimaryDistance2 = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  53)		Float maxPrimaryDistance2 = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  54)		Float secondaryDistance2 = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  55)		bool onSameAxis2 = false;
HXLINE(  56)		if (::hx::IsNotNull( object2 )) {
HXLINE(  57)			rect = object2->getBounds(object2->stage);
HXLINE(  58)			minPrimaryDistance2 = ::feathers::utils::DPadFocusUtil_obj::calculateMinPrimaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  59)			maxPrimaryDistance2 = ::feathers::utils::DPadFocusUtil_obj::calculateMaxPrimaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  60)			secondaryDistance2 = ::feathers::utils::DPadFocusUtil_obj::calculateSecondaryAxisDistanceForRelativePosition(focusedRect,rect,relativePosition);
HXLINE(  61)			onSameAxis2 = ::feathers::utils::DPadFocusUtil_obj::itemsAreOnSameAxis(focusedRect,rect,relativePosition);
            		}
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (onSameAxis1) {
HXLINE(  64)			_hx_tmp = onSameAxis2;
            		}
            		else {
HXLINE(  64)			_hx_tmp = false;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  67)			if ((minPrimaryDistance1 > ((Float)0.0))) {
HXLINE(  67)				return (minPrimaryDistance1 < minPrimaryDistance2);
            			}
            			else {
HXLINE(  67)				return false;
            			}
            		}
HXLINE(  69)		bool isVertical;
HXDLIN(  69)		if (::hx::IsPointerNotEq( relativePosition,::feathers::layout::RelativePosition_obj::TOP_dyn() )) {
HXLINE(  69)			isVertical = ::hx::IsPointerEq( relativePosition,::feathers::layout::RelativePosition_obj::BOTTOM_dyn() );
            		}
            		else {
HXLINE(  69)			isVertical = true;
            		}
HXLINE(  70)		if (onSameAxis1) {
HXLINE(  71)			if (isVertical) {
HXLINE(  72)				bool _hx_tmp;
HXDLIN(  72)				if ((minPrimaryDistance1 > ((Float)0.0))) {
HXLINE(  72)					_hx_tmp = (minPrimaryDistance1 < maxPrimaryDistance2);
            				}
            				else {
HXLINE(  72)					_hx_tmp = false;
            				}
HXDLIN(  72)				if (_hx_tmp) {
HXLINE(  75)					return true;
            				}
            			}
            			else {
HXLINE(  84)				return true;
            			}
            		}
            		else {
HXLINE(  86)			if (onSameAxis2) {
HXLINE(  88)				if (isVertical) {
HXLINE(  89)					bool _hx_tmp;
HXDLIN(  89)					if ((minPrimaryDistance2 > ((Float)0.0))) {
HXLINE(  89)						_hx_tmp = (minPrimaryDistance2 < maxPrimaryDistance1);
            					}
            					else {
HXLINE(  89)						_hx_tmp = false;
            					}
HXDLIN(  89)					if (_hx_tmp) {
HXLINE(  90)						return false;
            					}
            				}
            				else {
HXLINE(  94)					return false;
            				}
            			}
            		}
HXLINE( 101)		Float weightedDistance1 = (((((Float)13.0) * minPrimaryDistance1) * minPrimaryDistance1) + (secondaryDistance1 * secondaryDistance1));
HXLINE( 102)		Float weightedDistance2 = (((((Float)13.0) * minPrimaryDistance2) * minPrimaryDistance2) + (secondaryDistance2 * secondaryDistance2));
HXLINE( 103)		return (weightedDistance1 < weightedDistance2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DPadFocusUtil_obj,isBetterFocusForRelativePosition,return )

Float DPadFocusUtil_obj::calculateSecondaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position){
            	HX_STACKFRAME(&_hx_pos_c1414966f97eef29_106_calculateSecondaryAxisDistanceForRelativePosition)
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (::hx::IsPointerNotEq( position,::feathers::layout::RelativePosition_obj::TOP_dyn() )) {
HXLINE( 107)			_hx_tmp = ::hx::IsPointerEq( position,::feathers::layout::RelativePosition_obj::BOTTOM_dyn() );
            		}
            		else {
HXLINE( 107)			_hx_tmp = true;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 108)			return ::Math_obj::abs(((globalRect1->x + (globalRect1->width / ((Float)2.0))) - (globalRect2->x + (globalRect2->width / ((Float)2.0)))));
            		}
HXLINE( 111)		return ::Math_obj::abs(((globalRect1->y + (globalRect1->height / ((Float)2.0))) - (globalRect2->y + (globalRect2->height / ((Float)2.0)))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DPadFocusUtil_obj,calculateSecondaryAxisDistanceForRelativePosition,return )

Float DPadFocusUtil_obj::calculateMaxPrimaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position){
            	HX_STACKFRAME(&_hx_pos_c1414966f97eef29_114_calculateMaxPrimaryAxisDistanceForRelativePosition)
HXLINE( 115)		switch((int)(position->_hx_getIndex())){
            			case (int)0: {
HXLINE( 117)				bool _hx_tmp;
HXDLIN( 117)				Float _hx_tmp1 = globalRect1->get_bottom();
HXDLIN( 117)				if (!((_hx_tmp1 > globalRect2->get_bottom()))) {
HXLINE( 117)					Float globalRect11 = globalRect1->y;
HXDLIN( 117)					_hx_tmp = (globalRect11 >= globalRect2->get_bottom());
            				}
            				else {
HXLINE( 117)					_hx_tmp = true;
            				}
HXDLIN( 117)				if (_hx_tmp) {
HXLINE( 118)					Float result = globalRect1->get_bottom();
HXDLIN( 118)					Float result1 = (result - globalRect2->y);
HXLINE( 119)					if ((result1 > ((Float)0.0))) {
HXLINE( 120)						return result1;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 124)				bool _hx_tmp;
HXDLIN( 124)				if (!((globalRect1->x < globalRect2->x))) {
HXLINE( 124)					Float _hx_tmp1 = globalRect1->get_right();
HXDLIN( 124)					_hx_tmp = (_hx_tmp1 <= globalRect2->x);
            				}
            				else {
HXLINE( 124)					_hx_tmp = true;
            				}
HXDLIN( 124)				if (_hx_tmp) {
HXLINE( 125)					Float result = globalRect2->get_right();
HXDLIN( 125)					Float result1 = (result - globalRect1->x);
HXLINE( 126)					if ((result1 > ((Float)0.0))) {
HXLINE( 127)						return result1;
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 131)				bool _hx_tmp;
HXDLIN( 131)				if (!((globalRect1->y < globalRect2->y))) {
HXLINE( 131)					Float _hx_tmp1 = globalRect1->get_bottom();
HXDLIN( 131)					_hx_tmp = (_hx_tmp1 <= globalRect2->y);
            				}
            				else {
HXLINE( 131)					_hx_tmp = true;
            				}
HXDLIN( 131)				if (_hx_tmp) {
HXLINE( 132)					Float result = globalRect2->get_bottom();
HXDLIN( 132)					Float result1 = (result - globalRect1->y);
HXLINE( 133)					if ((result1 > ((Float)0.0))) {
HXLINE( 134)						return result1;
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 138)				bool _hx_tmp;
HXDLIN( 138)				Float _hx_tmp1 = globalRect1->get_right();
HXDLIN( 138)				if (!((_hx_tmp1 > globalRect2->get_right()))) {
HXLINE( 138)					Float globalRect11 = globalRect1->x;
HXDLIN( 138)					_hx_tmp = (globalRect11 >= globalRect2->get_right());
            				}
            				else {
HXLINE( 138)					_hx_tmp = true;
            				}
HXDLIN( 138)				if (_hx_tmp) {
HXLINE( 139)					Float result = globalRect1->get_right();
HXDLIN( 139)					Float result1 = (result - globalRect2->x);
HXLINE( 140)					if ((result1 > ((Float)0.0))) {
HXLINE( 141)						return result1;
            					}
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 146)		return ::Math_obj::POSITIVE_INFINITY;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DPadFocusUtil_obj,calculateMaxPrimaryAxisDistanceForRelativePosition,return )

Float DPadFocusUtil_obj::calculateMinPrimaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position){
            	HX_STACKFRAME(&_hx_pos_c1414966f97eef29_149_calculateMinPrimaryAxisDistanceForRelativePosition)
HXLINE( 150)		switch((int)(position->_hx_getIndex())){
            			case (int)0: {
HXLINE( 152)				bool _hx_tmp;
HXDLIN( 152)				Float _hx_tmp1 = globalRect1->get_bottom();
HXDLIN( 152)				if (!((_hx_tmp1 > globalRect2->get_bottom()))) {
HXLINE( 152)					Float globalRect11 = globalRect1->y;
HXDLIN( 152)					_hx_tmp = (globalRect11 >= globalRect2->get_bottom());
            				}
            				else {
HXLINE( 152)					_hx_tmp = true;
            				}
HXDLIN( 152)				if (_hx_tmp) {
HXLINE( 153)					Float result = globalRect1->get_bottom();
HXDLIN( 153)					Float result1 = (result - globalRect2->get_bottom());
HXLINE( 154)					if ((result1 > ((Float)0.0))) {
HXLINE( 155)						return result1;
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 159)				bool _hx_tmp;
HXDLIN( 159)				if (!((globalRect1->x < globalRect2->x))) {
HXLINE( 159)					Float _hx_tmp1 = globalRect1->get_right();
HXDLIN( 159)					_hx_tmp = (_hx_tmp1 <= globalRect2->x);
            				}
            				else {
HXLINE( 159)					_hx_tmp = true;
            				}
HXDLIN( 159)				if (_hx_tmp) {
HXLINE( 160)					Float result = (globalRect2->x - globalRect1->x);
HXLINE( 161)					if ((result > ((Float)0.0))) {
HXLINE( 162)						return result;
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 166)				bool _hx_tmp;
HXDLIN( 166)				if (!((globalRect1->y < globalRect2->y))) {
HXLINE( 166)					Float _hx_tmp1 = globalRect1->get_bottom();
HXDLIN( 166)					_hx_tmp = (_hx_tmp1 <= globalRect2->y);
            				}
            				else {
HXLINE( 166)					_hx_tmp = true;
            				}
HXDLIN( 166)				if (_hx_tmp) {
HXLINE( 167)					Float result = (globalRect2->y - globalRect1->y);
HXLINE( 168)					if ((result > ((Float)0.0))) {
HXLINE( 169)						return result;
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 173)				bool _hx_tmp;
HXDLIN( 173)				Float _hx_tmp1 = globalRect1->get_right();
HXDLIN( 173)				if (!((_hx_tmp1 > globalRect2->get_right()))) {
HXLINE( 173)					Float globalRect11 = globalRect1->x;
HXDLIN( 173)					_hx_tmp = (globalRect11 >= globalRect2->get_right());
            				}
            				else {
HXLINE( 173)					_hx_tmp = true;
            				}
HXDLIN( 173)				if (_hx_tmp) {
HXLINE( 174)					Float result = globalRect1->get_right();
HXDLIN( 174)					Float result1 = (result - globalRect2->get_right());
HXLINE( 175)					if ((result1 > ((Float)0.0))) {
HXLINE( 176)						return result1;
            					}
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 181)		return ::Math_obj::POSITIVE_INFINITY;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DPadFocusUtil_obj,calculateMinPrimaryAxisDistanceForRelativePosition,return )

bool DPadFocusUtil_obj::itemsAreOnSameAxis( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position){
            	HX_STACKFRAME(&_hx_pos_c1414966f97eef29_184_itemsAreOnSameAxis)
HXLINE( 185)		bool _hx_tmp;
HXDLIN( 185)		if (::hx::IsPointerNotEq( position,::feathers::layout::RelativePosition_obj::TOP_dyn() )) {
HXLINE( 185)			_hx_tmp = ::hx::IsPointerEq( position,::feathers::layout::RelativePosition_obj::BOTTOM_dyn() );
            		}
            		else {
HXLINE( 185)			_hx_tmp = true;
            		}
HXDLIN( 185)		if (_hx_tmp) {
HXLINE( 186)			Float globalRect11 = globalRect1->x;
HXDLIN( 186)			if ((globalRect11 <= globalRect2->get_right())) {
HXLINE( 186)				Float globalRect21 = globalRect2->x;
HXDLIN( 186)				return (globalRect21 <= globalRect1->get_right());
            			}
            			else {
HXLINE( 186)				return false;
            			}
            		}
HXLINE( 189)		Float globalRect11 = globalRect1->y;
HXDLIN( 189)		if ((globalRect11 <= globalRect2->get_bottom())) {
HXLINE( 189)			Float globalRect21 = globalRect2->y;
HXDLIN( 189)			return (globalRect21 <= globalRect1->get_bottom());
            		}
            		else {
HXLINE( 189)			return false;
            		}
HXDLIN( 189)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DPadFocusUtil_obj,itemsAreOnSameAxis,return )


DPadFocusUtil_obj::DPadFocusUtil_obj()
{
}

bool DPadFocusUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"itemsAreOnSameAxis") ) { outValue = itemsAreOnSameAxis_dyn(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"isBetterFocusForRelativePosition") ) { outValue = isBetterFocusForRelativePosition_dyn(); return true; }
		break;
	case 49:
		if (HX_FIELD_EQ(inName,"calculateSecondaryAxisDistanceForRelativePosition") ) { outValue = calculateSecondaryAxisDistanceForRelativePosition_dyn(); return true; }
		break;
	case 50:
		if (HX_FIELD_EQ(inName,"calculateMaxPrimaryAxisDistanceForRelativePosition") ) { outValue = calculateMaxPrimaryAxisDistanceForRelativePosition_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calculateMinPrimaryAxisDistanceForRelativePosition") ) { outValue = calculateMinPrimaryAxisDistanceForRelativePosition_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DPadFocusUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DPadFocusUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DPadFocusUtil_obj::__mClass;

static ::String DPadFocusUtil_obj_sStaticFields[] = {
	HX_("isBetterFocusForRelativePosition",a0,b0,b5,c7),
	HX_("calculateSecondaryAxisDistanceForRelativePosition",da,51,da,aa),
	HX_("calculateMaxPrimaryAxisDistanceForRelativePosition",44,a5,22,7b),
	HX_("calculateMinPrimaryAxisDistanceForRelativePosition",b2,0a,74,f2),
	HX_("itemsAreOnSameAxis",ba,22,bb,5e),
	::String(null())
};

void DPadFocusUtil_obj::__register()
{
	DPadFocusUtil_obj _hx_dummy;
	DPadFocusUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.DPadFocusUtil",10,d9,7d,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DPadFocusUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DPadFocusUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DPadFocusUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DPadFocusUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DPadFocusUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
