#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_ButtonBar
#include <feathers/controls/ButtonBar.h>
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
#ifndef INCLUDED_feathers_data_ButtonBarItemState
#include <feathers/data/ButtonBarItemState.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc519cd55b421e8c_21_new,"feathers.data.ButtonBarItemState","new",0x56cc9595,"feathers.data.ButtonBarItemState.new","feathers/data/ButtonBarItemState.hx",21,0xae67fb1b)
namespace feathers{
namespace data{

void ButtonBarItemState_obj::__construct( ::Dynamic data,::hx::Null< int >  __o_index,::String text){
            		int index = __o_index.Default(-1);
            	HX_STACKFRAME(&_hx_pos_cc519cd55b421e8c_21_new)
HXLINE(  72)		this->enabled = true;
HXLINE(  53)		this->index = -1;
HXLINE(  28)		this->data = data;
HXLINE(  29)		this->index = index;
HXLINE(  30)		this->text = text;
            	}

Dynamic ButtonBarItemState_obj::__CreateEmpty() { return new ButtonBarItemState_obj; }

void *ButtonBarItemState_obj::_hx_vtable = 0;

Dynamic ButtonBarItemState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonBarItemState_obj > _hx_result = new ButtonBarItemState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ButtonBarItemState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2893f1ff;
}


ButtonBarItemState_obj::ButtonBarItemState_obj()
{
}

void ButtonBarItemState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonBarItemState);
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(recyclerID,"recyclerID");
	HX_MARK_END_CLASS();
}

void ButtonBarItemState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(recyclerID,"recyclerID");
}

::hx::Val ButtonBarItemState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { return ::hx::Val( owner ); }
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"recyclerID") ) { return ::hx::Val( recyclerID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonBarItemState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::feathers::controls::ButtonBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"recyclerID") ) { recyclerID=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonBarItemState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("recyclerID",9a,be,43,a8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonBarItemState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::ButtonBar */ ,(int)offsetof(ButtonBarItemState_obj,owner),HX_("owner",33,98,76,38)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ButtonBarItemState_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(ButtonBarItemState_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsString,(int)offsetof(ButtonBarItemState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(ButtonBarItemState_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsString,(int)offsetof(ButtonBarItemState_obj,recyclerID),HX_("recyclerID",9a,be,43,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonBarItemState_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonBarItemState_obj_sMemberFields[] = {
	HX_("owner",33,98,76,38),
	HX_("data",2a,56,63,42),
	HX_("index",12,9b,14,be),
	HX_("text",ad,cc,f9,4c),
	HX_("enabled",81,04,31,7e),
	HX_("recyclerID",9a,be,43,a8),
	::String(null()) };

::hx::Class ButtonBarItemState_obj::__mClass;

void ButtonBarItemState_obj::__register()
{
	ButtonBarItemState_obj _hx_dummy;
	ButtonBarItemState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.data.ButtonBarItemState",23,27,eb,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonBarItemState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonBarItemState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonBarItemState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonBarItemState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace data
