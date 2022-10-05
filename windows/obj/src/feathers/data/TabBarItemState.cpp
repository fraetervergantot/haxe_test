#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_TabBar
#include <feathers/controls/TabBar.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
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
#ifndef INCLUDED_feathers_data_TabBarItemState
#include <feathers/data/TabBarItemState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_887bbe25e2c653a2_21_new,"feathers.data.TabBarItemState","new",0x8dddf56c,"feathers.data.TabBarItemState.new","feathers/data/TabBarItemState.hx",21,0xb4388fe4)
namespace feathers{
namespace data{

void TabBarItemState_obj::__construct( ::Dynamic data,::hx::Null< int >  __o_index,::hx::Null< bool >  __o_selected,::String text){
            		int index = __o_index.Default(-1);
            		bool selected = __o_selected.Default(false);
            	HX_STACKFRAME(&_hx_pos_887bbe25e2c653a2_21_new)
HXLINE(  83)		this->enabled = true;
HXLINE(  64)		this->selected = false;
HXLINE(  54)		this->index = -1;
HXLINE(  28)		this->data = data;
HXLINE(  29)		this->index = index;
HXLINE(  30)		this->selected = false;
HXLINE(  31)		this->text = text;
            	}

Dynamic TabBarItemState_obj::__CreateEmpty() { return new TabBarItemState_obj; }

void *TabBarItemState_obj::_hx_vtable = 0;

Dynamic TabBarItemState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBarItemState_obj > _hx_result = new TabBarItemState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TabBarItemState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f55dc02;
}


TabBarItemState_obj::TabBarItemState_obj()
{
}

void TabBarItemState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBarItemState);
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(recyclerID,"recyclerID");
	HX_MARK_END_CLASS();
}

void TabBarItemState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(recyclerID,"recyclerID");
}

::hx::Val TabBarItemState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"recyclerID") ) { return ::hx::Val( recyclerID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabBarItemState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::feathers::controls::TabBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"recyclerID") ) { recyclerID=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBarItemState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("owner",33,98,76,38));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("recyclerID",9a,be,43,a8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabBarItemState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::controls::TabBar */ ,(int)offsetof(TabBarItemState_obj,owner),HX_("owner",33,98,76,38)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TabBarItemState_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(TabBarItemState_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsBool,(int)offsetof(TabBarItemState_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsString,(int)offsetof(TabBarItemState_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(TabBarItemState_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsString,(int)offsetof(TabBarItemState_obj,recyclerID),HX_("recyclerID",9a,be,43,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabBarItemState_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBarItemState_obj_sMemberFields[] = {
	HX_("owner",33,98,76,38),
	HX_("data",2a,56,63,42),
	HX_("index",12,9b,14,be),
	HX_("selected",5b,2a,6d,b1),
	HX_("text",ad,cc,f9,4c),
	HX_("enabled",81,04,31,7e),
	HX_("recyclerID",9a,be,43,a8),
	::String(null()) };

::hx::Class TabBarItemState_obj::__mClass;

void TabBarItemState_obj::__register()
{
	TabBarItemState_obj _hx_dummy;
	TabBarItemState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.data.TabBarItemState",7a,0f,8c,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBarItemState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBarItemState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarItemState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarItemState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace data
