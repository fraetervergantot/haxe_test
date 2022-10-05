#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls__ButtonBar_ButtonStorage
#include <feathers/controls/_ButtonBar/ButtonStorage.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
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
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
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
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectRecycler
#include <feathers/utils/DisplayObjectRecycler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c30f7d542045fc82_878_new,"feathers.controls._ButtonBar.ButtonStorage","new",0xe17c82e9,"feathers.controls._ButtonBar.ButtonStorage.new","feathers/controls/ButtonBar.hx",878,0x8cf93d57)
namespace feathers{
namespace controls{
namespace _ButtonBar{

void ButtonStorage_obj::__construct(::String id, ::feathers::utils::DisplayObjectRecycler recycler){
            	HX_STACKFRAME(&_hx_pos_c30f7d542045fc82_878_new)
HXLINE( 888)		this->inactiveButtons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 887)		this->activeButtons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 880)		this->id = id;
HXLINE( 881)		this->buttonRecycler = recycler;
            	}

Dynamic ButtonStorage_obj::__CreateEmpty() { return new ButtonStorage_obj; }

void *ButtonStorage_obj::_hx_vtable = 0;

Dynamic ButtonStorage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonStorage_obj > _hx_result = new ButtonStorage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ButtonStorage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01f43679;
}


::hx::ObjectPtr< ButtonStorage_obj > ButtonStorage_obj::__new(::String id, ::feathers::utils::DisplayObjectRecycler recycler) {
	::hx::ObjectPtr< ButtonStorage_obj > __this = new ButtonStorage_obj();
	__this->__construct(id,recycler);
	return __this;
}

::hx::ObjectPtr< ButtonStorage_obj > ButtonStorage_obj::__alloc(::hx::Ctx *_hx_ctx,::String id, ::feathers::utils::DisplayObjectRecycler recycler) {
	ButtonStorage_obj *__this = (ButtonStorage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonStorage_obj), true, "feathers.controls._ButtonBar.ButtonStorage"));
	*(void **)__this = ButtonStorage_obj::_hx_vtable;
	__this->__construct(id,recycler);
	return __this;
}

ButtonStorage_obj::ButtonStorage_obj()
{
}

void ButtonStorage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonStorage);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(oldButtonRecycler,"oldButtonRecycler");
	HX_MARK_MEMBER_NAME(buttonRecycler,"buttonRecycler");
	HX_MARK_MEMBER_NAME(activeButtons,"activeButtons");
	HX_MARK_MEMBER_NAME(inactiveButtons,"inactiveButtons");
	HX_MARK_END_CLASS();
}

void ButtonStorage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(oldButtonRecycler,"oldButtonRecycler");
	HX_VISIT_MEMBER_NAME(buttonRecycler,"buttonRecycler");
	HX_VISIT_MEMBER_NAME(activeButtons,"activeButtons");
	HX_VISIT_MEMBER_NAME(inactiveButtons,"inactiveButtons");
}

::hx::Val ButtonStorage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeButtons") ) { return ::hx::Val( activeButtons ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonRecycler") ) { return ::hx::Val( buttonRecycler ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveButtons") ) { return ::hx::Val( inactiveButtons ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"oldButtonRecycler") ) { return ::hx::Val( oldButtonRecycler ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonStorage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeButtons") ) { activeButtons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonRecycler") ) { buttonRecycler=inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inactiveButtons") ) { inactiveButtons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"oldButtonRecycler") ) { oldButtonRecycler=inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonStorage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("oldButtonRecycler",18,c4,3b,84));
	outFields->push(HX_("buttonRecycler",11,61,92,d7));
	outFields->push(HX_("activeButtons",1b,9d,3e,82));
	outFields->push(HX_("inactiveButtons",16,f6,ec,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonStorage_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ButtonStorage_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectRecycler */ ,(int)offsetof(ButtonStorage_obj,oldButtonRecycler),HX_("oldButtonRecycler",18,c4,3b,84)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectRecycler */ ,(int)offsetof(ButtonStorage_obj,buttonRecycler),HX_("buttonRecycler",11,61,92,d7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ButtonStorage_obj,activeButtons),HX_("activeButtons",1b,9d,3e,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ButtonStorage_obj,inactiveButtons),HX_("inactiveButtons",16,f6,ec,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonStorage_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonStorage_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("oldButtonRecycler",18,c4,3b,84),
	HX_("buttonRecycler",11,61,92,d7),
	HX_("activeButtons",1b,9d,3e,82),
	HX_("inactiveButtons",16,f6,ec,43),
	::String(null()) };

::hx::Class ButtonStorage_obj::__mClass;

void ButtonStorage_obj::__register()
{
	ButtonStorage_obj _hx_dummy;
	ButtonStorage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls._ButtonBar.ButtonStorage",77,da,9c,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonStorage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonStorage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonStorage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonStorage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace _ButtonBar
