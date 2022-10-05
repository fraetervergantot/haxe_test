#include <hxcpp.h>

#ifndef INCLUDED_HelloWorld
#include <HelloWorld.h>
#endif
#ifndef INCLUDED_HomeView
#include <HomeView.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_BaseNavigator
#include <feathers/controls/navigators/BaseNavigator.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabItem
#include <feathers/controls/navigators/TabItem.h>
#endif
#ifndef INCLUDED_feathers_controls_navigators_TabNavigator
#include <feathers/controls/navigators/TabNavigator.h>
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
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
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
#ifndef INCLUDED_feathers_data_ArrayCollection
#include <feathers/data/ArrayCollection.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
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
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f236767cf17b6b76_10_new,"HelloWorld","new",0xa36416f2,"HelloWorld.new","HelloWorld.hx",10,0x00bb8cbe)

void HelloWorld_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f236767cf17b6b76_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		 ::feathers::controls::navigators::TabNavigator navigator =  ::feathers::controls::navigators::TabNavigator_obj::__alloc( HX_CTX ,null());
HXLINE(  13)		this->addChild(navigator);
HXLINE(  15)		 ::feathers::controls::navigators::TabItem _hx_tmp = ::feathers::controls::navigators::TabItem_obj::withClass(HX_("1 tab",e6,9a,21,4c),::hx::ClassOf< ::HomeView >());
HXLINE(  16)		 ::feathers::controls::navigators::TabItem _hx_tmp1 = ::feathers::controls::navigators::TabItem_obj::withClass(HX_("2 tab",67,2f,88,df),::hx::ClassOf< ::HomeView >());
HXLINE(  14)		navigator->set_dataProvider( ::feathers::data::ArrayCollection_obj::__alloc( HX_CTX ,::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,::feathers::controls::navigators::TabItem_obj::withClass(HX_("3 tab",e8,c3,ee,72),::hx::ClassOf< ::HomeView >()))));
            	}

Dynamic HelloWorld_obj::__CreateEmpty() { return new HelloWorld_obj; }

void *HelloWorld_obj::_hx_vtable = 0;

Dynamic HelloWorld_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HelloWorld_obj > _hx_result = new HelloWorld_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HelloWorld_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x14a99f24) {
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
			if (inClassId<=(int)0x128a091e) {
				return inClassId==(int)0x11a722e7 || inClassId==(int)0x128a091e;
			} else {
				return inClassId==(int)0x14a99f24;
			}
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< HelloWorld_obj > HelloWorld_obj::__new() {
	::hx::ObjectPtr< HelloWorld_obj > __this = new HelloWorld_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HelloWorld_obj > HelloWorld_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HelloWorld_obj *__this = (HelloWorld_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HelloWorld_obj), true, "HelloWorld"));
	*(void **)__this = HelloWorld_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HelloWorld_obj::HelloWorld_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HelloWorld_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HelloWorld_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HelloWorld_obj::__mClass;

void HelloWorld_obj::__register()
{
	HelloWorld_obj _hx_dummy;
	HelloWorld_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HelloWorld",00,76,b5,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HelloWorld_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HelloWorld_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HelloWorld_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

