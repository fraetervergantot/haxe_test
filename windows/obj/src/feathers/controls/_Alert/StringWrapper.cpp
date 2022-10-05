#include <hxcpp.h>

#ifndef INCLUDED_feathers_controls__Alert_StringWrapper
#include <feathers/controls/_Alert/StringWrapper.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c1516fa6b7c28ec_629_new,"feathers.controls._Alert.StringWrapper","new",0x99b7d21d,"feathers.controls._Alert.StringWrapper.new","feathers/controls/Alert.hx",629,0x586596dc)
HX_LOCAL_STACK_FRAME(_hx_pos_7c1516fa6b7c28ec_636_toString,"feathers.controls._Alert.StringWrapper","toString",0x015a61cf,"feathers.controls._Alert.StringWrapper.toString","feathers/controls/Alert.hx",636,0x586596dc)
namespace feathers{
namespace controls{
namespace _Alert{

void StringWrapper_obj::__construct(::String text){
            	HX_STACKFRAME(&_hx_pos_7c1516fa6b7c28ec_629_new)
HXDLIN( 629)		this->_text = text;
            	}

Dynamic StringWrapper_obj::__CreateEmpty() { return new StringWrapper_obj; }

void *StringWrapper_obj::_hx_vtable = 0;

Dynamic StringWrapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringWrapper_obj > _hx_result = new StringWrapper_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StringWrapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x348162fb;
}

::String StringWrapper_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_7c1516fa6b7c28ec_636_toString)
HXDLIN( 636)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringWrapper_obj,toString,return )


StringWrapper_obj::StringWrapper_obj()
{
}

void StringWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringWrapper);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_END_CLASS();
}

void StringWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
}

::hx::Val StringWrapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringWrapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_text",8c,e8,0a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringWrapper_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StringWrapper_obj,_text),HX_("_text",8c,e8,0a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String StringWrapper_obj_sMemberFields[] = {
	HX_("_text",8c,e8,0a,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class StringWrapper_obj::__mClass;

void StringWrapper_obj::__register()
{
	StringWrapper_obj _hx_dummy;
	StringWrapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls._Alert.StringWrapper",ab,7f,4b,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringWrapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringWrapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringWrapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace controls
} // end namespace _Alert
