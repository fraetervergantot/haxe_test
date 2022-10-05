#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3650103f11842c9f_29_resetFluidlyWithParentValues,"feathers.utils.MeasurementsUtil","resetFluidlyWithParentValues",0xff8a0654,"feathers.utils.MeasurementsUtil.resetFluidlyWithParentValues","feathers/utils/MeasurementsUtil.hx",29,0x9ecf5668)
HX_LOCAL_STACK_FRAME(_hx_pos_3650103f11842c9f_112_resetFluidlyWithParent,"feathers.utils.MeasurementsUtil","resetFluidlyWithParent",0x45f024d2,"feathers.utils.MeasurementsUtil.resetFluidlyWithParent","feathers/utils/MeasurementsUtil.hx",112,0x9ecf5668)
namespace feathers{
namespace utils{

void MeasurementsUtil_obj::__construct() { }

Dynamic MeasurementsUtil_obj::__CreateEmpty() { return new MeasurementsUtil_obj; }

void *MeasurementsUtil_obj::_hx_vtable = 0;

Dynamic MeasurementsUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeasurementsUtil_obj > _hx_result = new MeasurementsUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MeasurementsUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x357e2db2;
}

void MeasurementsUtil_obj::resetFluidlyWithParentValues( ::feathers::layout::Measurements measurements, ::openfl::display::DisplayObject target, ::Dynamic parentExplicitWidth, ::Dynamic parentExplicitHeight, ::Dynamic parentExplicitMinWidth, ::Dynamic parentExplicitMinHeight, ::Dynamic parentExplicitMaxWidth, ::Dynamic parentExplicitMaxHeight){
            	HX_STACKFRAME(&_hx_pos_3650103f11842c9f_29_resetFluidlyWithParentValues)
HXLINE(  30)		if (::hx::IsNull( target )) {
HXLINE(  31)			return;
            		}
HXLINE(  33)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE(  34)			::Dynamic measureTarget =  ::hx::interface_check(target,0xcfc32883);
HXLINE(  36)			 ::Dynamic width = parentExplicitWidth;
HXLINE(  37)			if (::hx::IsNull( width )) {
HXLINE(  38)				width = measurements->width;
            			}
HXLINE(  40)			if (::hx::IsNull( width )) {
HXLINE(  41)				::feathers::core::IMeasureObject_obj::resetWidth(measureTarget);
            			}
            			else {
HXLINE(  43)				::feathers::core::IDisplayObject_obj::set_width(measureTarget,width);
            			}
HXLINE(  46)			 ::Dynamic height = parentExplicitHeight;
HXLINE(  47)			if (::hx::IsNull( height )) {
HXLINE(  48)				height = measurements->height;
            			}
HXLINE(  50)			if (::hx::IsNull( height )) {
HXLINE(  51)				::feathers::core::IMeasureObject_obj::resetHeight(measureTarget);
            			}
            			else {
HXLINE(  53)				::feathers::core::IDisplayObject_obj::set_height(measureTarget,height);
            			}
HXLINE(  56)			 ::Dynamic minWidth = parentExplicitMinWidth;
HXLINE(  57)			bool _hx_tmp;
HXDLIN(  57)			if (::hx::IsNotNull( minWidth )) {
HXLINE(  57)				if (::hx::IsNotNull( ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureTarget) )) {
HXLINE(  57)					_hx_tmp = ::hx::IsGreater( ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureTarget),minWidth );
            				}
            				else {
HXLINE(  57)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(  57)				_hx_tmp = true;
            			}
HXDLIN(  57)			if (_hx_tmp) {
HXLINE(  58)				minWidth = ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureTarget);
            			}
HXLINE(  60)			if (::hx::IsNull( minWidth )) {
HXLINE(  61)				minWidth = ((Float)0.0);
            			}
HXLINE(  63)			::feathers::core::IMeasureObject_obj::set_minWidth(measureTarget,minWidth);
HXLINE(  65)			 ::Dynamic minHeight = parentExplicitMinHeight;
HXLINE(  66)			bool _hx_tmp1;
HXDLIN(  66)			if (::hx::IsNotNull( minHeight )) {
HXLINE(  66)				if (::hx::IsNotNull( ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureTarget) )) {
HXLINE(  66)					_hx_tmp1 = ::hx::IsGreater( ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureTarget),minHeight );
            				}
            				else {
HXLINE(  66)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXLINE(  66)				_hx_tmp1 = true;
            			}
HXDLIN(  66)			if (_hx_tmp1) {
HXLINE(  67)				minHeight = ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureTarget);
            			}
HXLINE(  69)			if (::hx::IsNull( minHeight )) {
HXLINE(  70)				minHeight = ((Float)0.0);
            			}
HXLINE(  72)			::feathers::core::IMeasureObject_obj::set_minHeight(measureTarget,minHeight);
HXLINE(  74)			 ::Dynamic maxWidth = parentExplicitMaxWidth;
HXLINE(  75)			bool _hx_tmp2;
HXDLIN(  75)			if (::hx::IsNotNull( maxWidth )) {
HXLINE(  75)				if (::hx::IsNotNull( ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(measureTarget) )) {
HXLINE(  75)					_hx_tmp2 = ::hx::IsLess( ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(measureTarget),maxWidth );
            				}
            				else {
HXLINE(  75)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(  75)				_hx_tmp2 = true;
            			}
HXDLIN(  75)			if (_hx_tmp2) {
HXLINE(  76)				maxWidth = ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(measureTarget);
            			}
HXLINE(  78)			if (::hx::IsNull( maxWidth )) {
HXLINE(  79)				maxWidth = ::hx::DivByZero(((Float)1.0));
            			}
HXLINE(  81)			::feathers::core::IMeasureObject_obj::set_maxWidth(measureTarget,maxWidth);
HXLINE(  83)			 ::Dynamic maxHeight = parentExplicitMaxHeight;
HXLINE(  84)			bool _hx_tmp3;
HXDLIN(  84)			if (::hx::IsNotNull( maxHeight )) {
HXLINE(  84)				if (::hx::IsNotNull( ::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(measureTarget) )) {
HXLINE(  84)					_hx_tmp3 = ::hx::IsLess( ::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(measureTarget),maxHeight );
            				}
            				else {
HXLINE(  84)					_hx_tmp3 = false;
            				}
            			}
            			else {
HXLINE(  84)				_hx_tmp3 = true;
            			}
HXDLIN(  84)			if (_hx_tmp3) {
HXLINE(  85)				maxHeight = ::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(measureTarget);
            			}
HXLINE(  87)			if (::hx::IsNull( maxHeight )) {
HXLINE(  88)				maxHeight = ::hx::DivByZero(((Float)1.0));
            			}
HXLINE(  90)			::feathers::core::IMeasureObject_obj::set_maxHeight(measureTarget,maxHeight);
HXLINE(  91)			return;
            		}
HXLINE(  93)		if (::hx::IsNotNull( parentExplicitWidth )) {
HXLINE(  94)			target->set_width(( (Float)(parentExplicitWidth) ));
            		}
            		else {
HXLINE(  95)			if (::hx::IsNotNull( measurements->width )) {
HXLINE(  96)				target->set_width(( (Float)(measurements->width) ));
            			}
            		}
HXLINE(  98)		if (::hx::IsNotNull( parentExplicitHeight )) {
HXLINE(  99)			target->set_height(( (Float)(parentExplicitHeight) ));
            		}
            		else {
HXLINE( 100)			if (::hx::IsNotNull( measurements->height )) {
HXLINE( 101)				target->set_height(( (Float)(measurements->height) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(MeasurementsUtil_obj,resetFluidlyWithParentValues,(void))

void MeasurementsUtil_obj::resetFluidlyWithParent( ::feathers::layout::Measurements measurements, ::openfl::display::DisplayObject target,::Dynamic parent){
            	HX_STACKFRAME(&_hx_pos_3650103f11842c9f_112_resetFluidlyWithParent)
HXDLIN( 112)		 ::Dynamic _hx_tmp = ::feathers::core::IMeasureObject_obj::get_explicitWidth(parent);
HXDLIN( 112)		 ::Dynamic _hx_tmp1 = ::feathers::core::IMeasureObject_obj::get_explicitHeight(parent);
HXDLIN( 112)		 ::Dynamic _hx_tmp2 = ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(parent);
HXLINE( 113)		 ::Dynamic _hx_tmp3 = ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(parent);
HXDLIN( 113)		 ::Dynamic _hx_tmp4 = ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(parent);
HXLINE( 112)		::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParentValues(measurements,target,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(parent));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MeasurementsUtil_obj,resetFluidlyWithParent,(void))


MeasurementsUtil_obj::MeasurementsUtil_obj()
{
}

bool MeasurementsUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"resetFluidlyWithParent") ) { outValue = resetFluidlyWithParent_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"resetFluidlyWithParentValues") ) { outValue = resetFluidlyWithParentValues_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MeasurementsUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MeasurementsUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class MeasurementsUtil_obj::__mClass;

static ::String MeasurementsUtil_obj_sStaticFields[] = {
	HX_("resetFluidlyWithParentValues",fa,ec,e6,48),
	HX_("resetFluidlyWithParent",f8,ea,44,d2),
	::String(null())
};

void MeasurementsUtil_obj::__register()
{
	MeasurementsUtil_obj _hx_dummy;
	MeasurementsUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.MeasurementsUtil",54,c3,e6,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MeasurementsUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MeasurementsUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MeasurementsUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeasurementsUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeasurementsUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
