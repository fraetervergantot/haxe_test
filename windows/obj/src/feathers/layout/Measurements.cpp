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

HX_DEFINE_STACK_FRAME(_hx_pos_d790bb13662bc5a9_19_new,"feathers.layout.Measurements","new",0xb88ad24f,"feathers.layout.Measurements.new","feathers/layout/Measurements.hx",19,0xbb031de1)
HX_LOCAL_STACK_FRAME(_hx_pos_d790bb13662bc5a9_35_save,"feathers.layout.Measurements","save",0xc4383a6e,"feathers.layout.Measurements.save","feathers/layout/Measurements.hx",35,0xbb031de1)
HX_LOCAL_STACK_FRAME(_hx_pos_d790bb13662bc5a9_68_restore,"feathers.layout.Measurements","restore",0x0dc08cbd,"feathers.layout.Measurements.restore","feathers/layout/Measurements.hx",68,0xbb031de1)
namespace feathers{
namespace layout{

void Measurements_obj::__construct( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_d790bb13662bc5a9_19_new)
HXLINE( 155)		this->maxHeight = null();
HXLINE( 147)		this->maxWidth = null();
HXLINE( 139)		this->minHeight = null();
HXLINE( 131)		this->minWidth = null();
HXLINE( 123)		this->height = null();
HXLINE( 116)		this->width = null();
HXLINE(  26)		this->save(target);
            	}

Dynamic Measurements_obj::__CreateEmpty() { return new Measurements_obj; }

void *Measurements_obj::_hx_vtable = 0;

Dynamic Measurements_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Measurements_obj > _hx_result = new Measurements_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Measurements_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1880b671;
}

void Measurements_obj::save( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_d790bb13662bc5a9_35_save)
HXLINE(  36)		if (::hx::IsNull( target )) {
HXLINE(  37)			this->width = null();
HXLINE(  38)			this->height = null();
HXLINE(  39)			this->minWidth = null();
HXLINE(  40)			this->minHeight = null();
HXLINE(  41)			this->maxWidth = null();
HXLINE(  42)			this->maxHeight = null();
HXLINE(  43)			return;
            		}
HXLINE(  45)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE(  46)			::Dynamic measureTarget =  ::hx::interface_check(target,0xcfc32883);
HXLINE(  47)			this->width = ::feathers::core::IMeasureObject_obj::get_explicitWidth(measureTarget);
HXLINE(  48)			this->height = ::feathers::core::IMeasureObject_obj::get_explicitHeight(measureTarget);
HXLINE(  49)			this->minWidth = ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureTarget);
HXLINE(  50)			this->minHeight = ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureTarget);
HXLINE(  51)			this->maxWidth = ::feathers::core::IMeasureObject_obj::get_explicitMaxWidth(measureTarget);
HXLINE(  52)			this->maxHeight = ::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(measureTarget);
HXLINE(  53)			return;
            		}
HXLINE(  55)		this->width = target->get_width();
HXLINE(  56)		this->height = target->get_height();
HXLINE(  57)		this->minWidth = this->width;
HXLINE(  58)		this->minHeight = this->height;
HXLINE(  59)		this->maxWidth = this->width;
HXLINE(  60)		this->maxHeight = this->height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Measurements_obj,save,(void))

void Measurements_obj::restore( ::openfl::display::DisplayObject target){
            	HX_STACKFRAME(&_hx_pos_d790bb13662bc5a9_68_restore)
HXLINE(  69)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE(  70)			::Dynamic measureTarget =  ::hx::interface_check(target,0xcfc32883);
HXLINE(  71)			if (::hx::IsNull( this->width )) {
HXLINE(  72)				::feathers::core::IMeasureObject_obj::resetWidth(measureTarget);
            			}
            			else {
HXLINE(  74)				::feathers::core::IDisplayObject_obj::set_width(measureTarget,this->width);
            			}
HXLINE(  76)			if (::hx::IsNull( this->height )) {
HXLINE(  77)				::feathers::core::IMeasureObject_obj::resetHeight(measureTarget);
            			}
            			else {
HXLINE(  79)				::feathers::core::IDisplayObject_obj::set_height(measureTarget,this->height);
            			}
HXLINE(  81)			if (::hx::IsNull( this->minWidth )) {
HXLINE(  82)				::feathers::core::IMeasureObject_obj::resetMinWidth(measureTarget);
            			}
            			else {
HXLINE(  84)				::feathers::core::IMeasureObject_obj::set_minWidth(measureTarget,this->minWidth);
            			}
HXLINE(  86)			if (::hx::IsNull( this->minHeight )) {
HXLINE(  87)				::feathers::core::IMeasureObject_obj::resetMinHeight(measureTarget);
            			}
            			else {
HXLINE(  89)				::feathers::core::IMeasureObject_obj::set_minHeight(measureTarget,this->minHeight);
            			}
HXLINE(  91)			if (::hx::IsNull( this->maxWidth )) {
HXLINE(  92)				::feathers::core::IMeasureObject_obj::resetMaxWidth(measureTarget);
            			}
            			else {
HXLINE(  94)				::feathers::core::IMeasureObject_obj::set_maxWidth(measureTarget,this->maxWidth);
            			}
HXLINE(  96)			if (::hx::IsNull( this->maxHeight )) {
HXLINE(  97)				::feathers::core::IMeasureObject_obj::resetMaxHeight(measureTarget);
            			}
            			else {
HXLINE(  99)				::feathers::core::IMeasureObject_obj::set_maxHeight(measureTarget,this->maxHeight);
            			}
HXLINE( 101)			return;
            		}
HXLINE( 103)		if (::hx::IsNotNull( this->width )) {
HXLINE( 104)			target->set_width(( (Float)(this->width) ));
            		}
HXLINE( 106)		if (::hx::IsNotNull( this->height )) {
HXLINE( 107)			target->set_height(( (Float)(this->height) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Measurements_obj,restore,(void))


::hx::ObjectPtr< Measurements_obj > Measurements_obj::__new( ::openfl::display::DisplayObject target) {
	::hx::ObjectPtr< Measurements_obj > __this = new Measurements_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Measurements_obj > Measurements_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target) {
	Measurements_obj *__this = (Measurements_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Measurements_obj), true, "feathers.layout.Measurements"));
	*(void **)__this = Measurements_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Measurements_obj::Measurements_obj()
{
}

void Measurements_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Measurements);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(minWidth,"minWidth");
	HX_MARK_MEMBER_NAME(minHeight,"minHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_END_CLASS();
}

void Measurements_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(minWidth,"minWidth");
	HX_VISIT_MEMBER_NAME(minHeight,"minHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
}

::hx::Val Measurements_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { return ::hx::Val( minWidth ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { return ::hx::Val( minHeight ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( maxHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Measurements_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { minWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { minHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Measurements_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("minWidth",14,23,9a,c1));
	outFields->push(HX_("minHeight",19,07,94,5b));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Measurements_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,minWidth),HX_("minWidth",14,23,9a,c1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,minHeight),HX_("minHeight",19,07,94,5b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Measurements_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Measurements_obj_sStaticStorageInfo = 0;
#endif

static ::String Measurements_obj_sMemberFields[] = {
	HX_("save",3d,8b,4d,4c),
	HX_("restore",4e,67,b0,6a),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("minWidth",14,23,9a,c1),
	HX_("minHeight",19,07,94,5b),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	::String(null()) };

::hx::Class Measurements_obj::__mClass;

void Measurements_obj::__register()
{
	Measurements_obj _hx_dummy;
	Measurements_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.Measurements",dd,fe,69,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Measurements_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Measurements_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Measurements_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Measurements_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
