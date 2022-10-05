#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_HelloWorld
#include <HelloWorld.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9453f8fd92a21d0a_304_new,"DocumentClass","new",0x4aeb0a6f,"DocumentClass.new","ApplicationMain.hx",304,0x0780ded5)

void DocumentClass_obj::__construct( ::openfl::display::DisplayObjectContainer current){
            	HX_GC_STACKFRAME(&_hx_pos_9453f8fd92a21d0a_304_new)
HXLINE( 305)		current->addChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 306)		super::__construct();
HXLINE( 307)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false));
            	}

Dynamic DocumentClass_obj::__CreateEmpty() { return new DocumentClass_obj; }

void *DocumentClass_obj::_hx_vtable = 0;

Dynamic DocumentClass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DocumentClass_obj > _hx_result = new DocumentClass_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DocumentClass_obj::_hx_isInstanceOf(int inClassId) {
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
				if (inClassId<=(int)0x1f4df417) {
					return inClassId==(int)0x1a4abc3d || inClassId==(int)0x1f4df417;
				} else {
					return inClassId==(int)0x4033f4be;
				}
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new( ::openfl::display::DisplayObjectContainer current) {
	::hx::ObjectPtr< DocumentClass_obj > __this = new DocumentClass_obj();
	__this->__construct(current);
	return __this;
}

::hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer current) {
	DocumentClass_obj *__this = (DocumentClass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DocumentClass_obj), true, "DocumentClass"));
	*(void **)__this = DocumentClass_obj::_hx_vtable;
	__this->__construct(current);
	return __this;
}

DocumentClass_obj::DocumentClass_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DocumentClass_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DocumentClass_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	DocumentClass_obj _hx_dummy;
	DocumentClass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DocumentClass",fd,a6,03,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DocumentClass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DocumentClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DocumentClass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

