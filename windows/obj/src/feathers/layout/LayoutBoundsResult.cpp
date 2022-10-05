#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#include <feathers/layout/LayoutBoundsResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_860434864bed074c_23_new,"feathers.layout.LayoutBoundsResult","new",0x2f502f54,"feathers.layout.LayoutBoundsResult.new","feathers/layout/LayoutBoundsResult.hx",23,0xb43db07c)
HX_LOCAL_STACK_FRAME(_hx_pos_860434864bed074c_105_reset,"feathers.layout.LayoutBoundsResult","reset",0x14d14dc3,"feathers.layout.LayoutBoundsResult.reset","feathers/layout/LayoutBoundsResult.hx",105,0xb43db07c)
namespace feathers{
namespace layout{

void LayoutBoundsResult_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_860434864bed074c_23_new)
HXDLIN(  23)		this->reset();
            	}

Dynamic LayoutBoundsResult_obj::__CreateEmpty() { return new LayoutBoundsResult_obj; }

void *LayoutBoundsResult_obj::_hx_vtable = 0;

Dynamic LayoutBoundsResult_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutBoundsResult_obj > _hx_result = new LayoutBoundsResult_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutBoundsResult_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ece475a;
}

void LayoutBoundsResult_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_860434864bed074c_105_reset)
HXLINE( 106)		this->contentX = ((Float)0.0);
HXLINE( 107)		this->contentY = ((Float)0.0);
HXLINE( 108)		this->contentWidth = ((Float)0.0);
HXLINE( 109)		this->contentHeight = ((Float)0.0);
HXLINE( 110)		this->contentMinWidth = ((Float)0.0);
HXLINE( 111)		this->contentMinHeight = ((Float)0.0);
HXLINE( 112)		this->contentMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 113)		this->contentMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 114)		this->viewPortWidth = ((Float)0.0);
HXLINE( 115)		this->viewPortHeight = ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutBoundsResult_obj,reset,(void))


LayoutBoundsResult_obj::LayoutBoundsResult_obj()
{
}

::hx::Val LayoutBoundsResult_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contentX") ) { return ::hx::Val( contentX ); }
		if (HX_FIELD_EQ(inName,"contentY") ) { return ::hx::Val( contentY ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { return ::hx::Val( contentWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewPortWidth") ) { return ::hx::Val( viewPortWidth ); }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { return ::hx::Val( contentHeight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewPortHeight") ) { return ::hx::Val( viewPortHeight ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"contentMinWidth") ) { return ::hx::Val( contentMinWidth ); }
		if (HX_FIELD_EQ(inName,"contentMaxWidth") ) { return ::hx::Val( contentMaxWidth ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"contentMinHeight") ) { return ::hx::Val( contentMinHeight ); }
		if (HX_FIELD_EQ(inName,"contentMaxHeight") ) { return ::hx::Val( contentMaxHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LayoutBoundsResult_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contentX") ) { contentX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentY") ) { contentY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { contentWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewPortWidth") ) { viewPortWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { contentHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"viewPortHeight") ) { viewPortHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"contentMinWidth") ) { contentMinWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentMaxWidth") ) { contentMaxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"contentMinHeight") ) { contentMinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentMaxHeight") ) { contentMaxHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayoutBoundsResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("contentX",ff,04,24,2f));
	outFields->push(HX_("contentY",00,05,24,2f));
	outFields->push(HX_("viewPortWidth",a0,07,71,54));
	outFields->push(HX_("viewPortHeight",0d,1d,c5,44));
	outFields->push(HX_("contentWidth",0d,0a,f1,b0));
	outFields->push(HX_("contentHeight",00,3a,47,d8));
	outFields->push(HX_("contentMinWidth",6d,cd,58,72));
	outFields->push(HX_("contentMinHeight",a0,6a,aa,51));
	outFields->push(HX_("contentMaxWidth",1b,b3,3e,25));
	outFields->push(HX_("contentMaxHeight",32,7d,ed,27));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LayoutBoundsResult_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentX),HX_("contentX",ff,04,24,2f)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentY),HX_("contentY",00,05,24,2f)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,viewPortWidth),HX_("viewPortWidth",a0,07,71,54)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,viewPortHeight),HX_("viewPortHeight",0d,1d,c5,44)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentWidth),HX_("contentWidth",0d,0a,f1,b0)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentHeight),HX_("contentHeight",00,3a,47,d8)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentMinWidth),HX_("contentMinWidth",6d,cd,58,72)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentMinHeight),HX_("contentMinHeight",a0,6a,aa,51)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentMaxWidth),HX_("contentMaxWidth",1b,b3,3e,25)},
	{::hx::fsFloat,(int)offsetof(LayoutBoundsResult_obj,contentMaxHeight),HX_("contentMaxHeight",32,7d,ed,27)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LayoutBoundsResult_obj_sStaticStorageInfo = 0;
#endif

static ::String LayoutBoundsResult_obj_sMemberFields[] = {
	HX_("contentX",ff,04,24,2f),
	HX_("contentY",00,05,24,2f),
	HX_("viewPortWidth",a0,07,71,54),
	HX_("viewPortHeight",0d,1d,c5,44),
	HX_("contentWidth",0d,0a,f1,b0),
	HX_("contentHeight",00,3a,47,d8),
	HX_("contentMinWidth",6d,cd,58,72),
	HX_("contentMinHeight",a0,6a,aa,51),
	HX_("contentMaxWidth",1b,b3,3e,25),
	HX_("contentMaxHeight",32,7d,ed,27),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class LayoutBoundsResult_obj::__mClass;

void LayoutBoundsResult_obj::__register()
{
	LayoutBoundsResult_obj _hx_dummy;
	LayoutBoundsResult_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.LayoutBoundsResult",62,35,11,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LayoutBoundsResult_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LayoutBoundsResult_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutBoundsResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutBoundsResult_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
