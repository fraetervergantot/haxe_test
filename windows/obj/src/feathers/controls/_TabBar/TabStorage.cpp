#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls_BasicToggleButton
#include <feathers/controls/BasicToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_ToggleButton
#include <feathers/controls/ToggleButton.h>
#endif
#ifndef INCLUDED_feathers_controls__TabBar_TabStorage
#include <feathers/controls/_TabBar/TabStorage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_601449c36b95fe07_1141_new,"feathers.controls._TabBar.TabStorage","new",0x760a9203,"feathers.controls._TabBar.TabStorage.new","feathers/controls/TabBar.hx",1141,0xc18603c6)
namespace feathers{
namespace controls{
namespace _TabBar{

void TabStorage_obj::__construct(::String id, ::feathers::utils::DisplayObjectRecycler recycler){
            	HX_STACKFRAME(&_hx_pos_601449c36b95fe07_1141_new)
HXLINE(1151)		this->inactiveTabs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1150)		this->activeTabs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1143)		this->id = id;
HXLINE(1144)		this->tabRecycler = recycler;
            	}

Dynamic TabStorage_obj::__CreateEmpty() { return new TabStorage_obj; }

void *TabStorage_obj::_hx_vtable = 0;

Dynamic TabStorage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabStorage_obj > _hx_result = new TabStorage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TabStorage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68eaf29d;
}


::hx::ObjectPtr< TabStorage_obj > TabStorage_obj::__new(::String id, ::feathers::utils::DisplayObjectRecycler recycler) {
	::hx::ObjectPtr< TabStorage_obj > __this = new TabStorage_obj();
	__this->__construct(id,recycler);
	return __this;
}

::hx::ObjectPtr< TabStorage_obj > TabStorage_obj::__alloc(::hx::Ctx *_hx_ctx,::String id, ::feathers::utils::DisplayObjectRecycler recycler) {
	TabStorage_obj *__this = (TabStorage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabStorage_obj), true, "feathers.controls._TabBar.TabStorage"));
	*(void **)__this = TabStorage_obj::_hx_vtable;
	__this->__construct(id,recycler);
	return __this;
}

TabStorage_obj::TabStorage_obj()
{
}

void TabStorage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabStorage);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(oldTabRecycler,"oldTabRecycler");
	HX_MARK_MEMBER_NAME(tabRecycler,"tabRecycler");
	HX_MARK_MEMBER_NAME(activeTabs,"activeTabs");
	HX_MARK_MEMBER_NAME(inactiveTabs,"inactiveTabs");
	HX_MARK_END_CLASS();
}

void TabStorage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(oldTabRecycler,"oldTabRecycler");
	HX_VISIT_MEMBER_NAME(tabRecycler,"tabRecycler");
	HX_VISIT_MEMBER_NAME(activeTabs,"activeTabs");
	HX_VISIT_MEMBER_NAME(inactiveTabs,"inactiveTabs");
}

::hx::Val TabStorage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activeTabs") ) { return ::hx::Val( activeTabs ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabRecycler") ) { return ::hx::Val( tabRecycler ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inactiveTabs") ) { return ::hx::Val( inactiveTabs ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"oldTabRecycler") ) { return ::hx::Val( oldTabRecycler ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabStorage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activeTabs") ) { activeTabs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabRecycler") ) { tabRecycler=inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inactiveTabs") ) { inactiveTabs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"oldTabRecycler") ) { oldTabRecycler=inValue.Cast<  ::feathers::utils::DisplayObjectRecycler >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabStorage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("oldTabRecycler",0d,77,73,a7));
	outFields->push(HX_("tabRecycler",74,f4,1d,3e));
	outFields->push(HX_("activeTabs",64,79,21,f6));
	outFields->push(HX_("inactiveTabs",89,85,37,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabStorage_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabStorage_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectRecycler */ ,(int)offsetof(TabStorage_obj,oldTabRecycler),HX_("oldTabRecycler",0d,77,73,a7)},
	{::hx::fsObject /*  ::feathers::utils::DisplayObjectRecycler */ ,(int)offsetof(TabStorage_obj,tabRecycler),HX_("tabRecycler",74,f4,1d,3e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabStorage_obj,activeTabs),HX_("activeTabs",64,79,21,f6)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabStorage_obj,inactiveTabs),HX_("inactiveTabs",89,85,37,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabStorage_obj_sStaticStorageInfo = 0;
#endif

static ::String TabStorage_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("oldTabRecycler",0d,77,73,a7),
	HX_("tabRecycler",74,f4,1d,3e),
	HX_("activeTabs",64,79,21,f6),
	HX_("inactiveTabs",89,85,37,4d),
	::String(null()) };

::hx::Class TabStorage_obj::__mClass;

void TabStorage_obj::__register()
{
	TabStorage_obj _hx_dummy;
	TabStorage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls._TabBar.TabStorage",91,d4,3a,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabStorage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabStorage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabStorage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabStorage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace _TabBar
