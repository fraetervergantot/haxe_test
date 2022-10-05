#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core__DefaultFocusManager_FocusResult
#include <feathers/core/_DefaultFocusManager/FocusResult.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe42c7cb193c7f49_1015_new,"feathers.core._DefaultFocusManager.FocusResult","new",0xc105a6e1,"feathers.core._DefaultFocusManager.FocusResult.new","feathers/core/DefaultFocusManager.hx",1015,0x2c1b51d9)
namespace feathers{
namespace core{
namespace _DefaultFocusManager{

void FocusResult_obj::__construct(::Dynamic newFocus,bool wrapped){
            	HX_STACKFRAME(&_hx_pos_fe42c7cb193c7f49_1015_new)
HXLINE(1016)		this->newFocus = newFocus;
HXLINE(1017)		this->wrapped = wrapped;
            	}

Dynamic FocusResult_obj::__CreateEmpty() { return new FocusResult_obj; }

void *FocusResult_obj::_hx_vtable = 0;

Dynamic FocusResult_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusResult_obj > _hx_result = new FocusResult_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FocusResult_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00a5b7af;
}


::hx::ObjectPtr< FocusResult_obj > FocusResult_obj::__new(::Dynamic newFocus,bool wrapped) {
	::hx::ObjectPtr< FocusResult_obj > __this = new FocusResult_obj();
	__this->__construct(newFocus,wrapped);
	return __this;
}

::hx::ObjectPtr< FocusResult_obj > FocusResult_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic newFocus,bool wrapped) {
	FocusResult_obj *__this = (FocusResult_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusResult_obj), true, "feathers.core._DefaultFocusManager.FocusResult"));
	*(void **)__this = FocusResult_obj::_hx_vtable;
	__this->__construct(newFocus,wrapped);
	return __this;
}

FocusResult_obj::FocusResult_obj()
{
}

void FocusResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusResult);
	HX_MARK_MEMBER_NAME(newFocus,"newFocus");
	HX_MARK_MEMBER_NAME(wrapped,"wrapped");
	HX_MARK_END_CLASS();
}

void FocusResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(newFocus,"newFocus");
	HX_VISIT_MEMBER_NAME(wrapped,"wrapped");
}

::hx::Val FocusResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { return ::hx::Val( wrapped ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newFocus") ) { return ::hx::Val( newFocus ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FocusResult_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"wrapped") ) { wrapped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"newFocus") ) { newFocus=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("newFocus",58,a3,d3,27));
	outFields->push(HX_("wrapped",45,d5,64,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FocusResult_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FocusResult_obj,newFocus),HX_("newFocus",58,a3,d3,27)},
	{::hx::fsBool,(int)offsetof(FocusResult_obj,wrapped),HX_("wrapped",45,d5,64,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FocusResult_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusResult_obj_sMemberFields[] = {
	HX_("newFocus",58,a3,d3,27),
	HX_("wrapped",45,d5,64,0d),
	::String(null()) };

::hx::Class FocusResult_obj::__mClass;

void FocusResult_obj::__register()
{
	FocusResult_obj _hx_dummy;
	FocusResult_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core._DefaultFocusManager.FocusResult",6f,a2,d6,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusResult_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusResult_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusResult_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
} // end namespace _DefaultFocusManager
