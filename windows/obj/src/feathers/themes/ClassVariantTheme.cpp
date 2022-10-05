#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_style_ClassVariantStyleProvider
#include <feathers/style/ClassVariantStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_Theme
#include <feathers/style/Theme.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b28af5e792945e57_36_new,"feathers.themes.ClassVariantTheme","new",0x4fc39f88,"feathers.themes.ClassVariantTheme.new","feathers/themes/ClassVariantTheme.hx",36,0x0198eb08)
HX_LOCAL_STACK_FRAME(_hx_pos_b28af5e792945e57_39_getStyleProvider,"feathers.themes.ClassVariantTheme","getStyleProvider",0xd1bbece4,"feathers.themes.ClassVariantTheme.getStyleProvider","feathers/themes/ClassVariantTheme.hx",39,0x0198eb08)
HX_LOCAL_STACK_FRAME(_hx_pos_b28af5e792945e57_88_dispose,"feathers.themes.ClassVariantTheme","dispose",0xe85703c7,"feathers.themes.ClassVariantTheme.dispose","feathers/themes/ClassVariantTheme.hx",88,0x0198eb08)
namespace feathers{
namespace themes{

void ClassVariantTheme_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b28af5e792945e57_36_new)
HXDLIN(  36)		this->styleProvider =  ::feathers::style::ClassVariantStyleProvider_obj::__alloc( HX_CTX );
            	}

Dynamic ClassVariantTheme_obj::__CreateEmpty() { return new ClassVariantTheme_obj; }

void *ClassVariantTheme_obj::_hx_vtable = 0;

Dynamic ClassVariantTheme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClassVariantTheme_obj > _hx_result = new ClassVariantTheme_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClassVariantTheme_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2da0fa7a;
}

static ::feathers::style::ITheme_obj _hx_feathers_themes_ClassVariantTheme__hx_feathers_style_ITheme= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::themes::ClassVariantTheme_obj::getStyleProvider,
	( void (::hx::Object::*)())&::feathers::themes::ClassVariantTheme_obj::dispose,
};

void *ClassVariantTheme_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcaf21441: return &_hx_feathers_themes_ClassVariantTheme__hx_feathers_style_ITheme;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic ClassVariantTheme_obj::getStyleProvider(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_b28af5e792945e57_39_getStyleProvider)
HXLINE(  40)		::hx::Class styleContext = null();
HXLINE(  41)		::String variant = null();
HXLINE(  42)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::style::IVariantStyleObject >())) {
HXLINE(  43)			::Dynamic variantObject = target;
HXLINE(  44)			styleContext = ::feathers::style::IVariantStyleObject_obj::get_styleContext(variantObject);
HXLINE(  45)			variant = ::feathers::style::IVariantStyleObject_obj::get_variant(variantObject);
            		}
HXLINE(  47)		if (::hx::IsNull( styleContext )) {
HXLINE(  48)			styleContext = ::Type_obj::getClass(target);
            		}
HXLINE(  51)		 ::Dynamic styleFunction = this->styleProvider->getStyleFunction(styleContext,variant);
HXLINE(  52)		if (::hx::IsNotNull( styleFunction )) {
HXLINE(  53)			return this->styleProvider;
            		}
HXLINE(  55)		if (::hx::IsNull( variant )) {
HXLINE(  58)			return null();
            		}
HXLINE(  62)		::Dynamic fallbackTheme = ::feathers::style::Theme_obj::get_fallbackTheme();
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		bool _hx_tmp1;
HXDLIN(  63)		if (::hx::IsNotNull( fallbackTheme )) {
HXLINE(  63)			_hx_tmp1 = ::hx::IsInstanceNotEq( fallbackTheme,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(  63)			_hx_tmp1 = false;
            		}
HXDLIN(  63)		if (_hx_tmp1) {
HXLINE(  63)			_hx_tmp = ::Std_obj::isOfType(fallbackTheme,::hx::ClassOf< ::feathers::themes::ClassVariantTheme >());
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  68)			 ::feathers::style::ClassVariantStyleProvider fallbackStyleProvider = ( ( ::feathers::style::ClassVariantStyleProvider)(::Std_obj::downcast(::feathers::style::ITheme_obj::getStyleProvider(fallbackTheme,target),::hx::ClassOf< ::feathers::style::ClassVariantStyleProvider >())) );
HXLINE(  69)			if (::hx::IsNotNull( fallbackStyleProvider )) {
HXLINE(  70)				 ::Dynamic styleFunction = fallbackStyleProvider->getStyleFunction(styleContext,variant);
HXLINE(  71)				if (::hx::IsNotNull( styleFunction )) {
HXLINE(  72)					return null();
            				}
            			}
            		}
HXLINE(  78)		styleFunction = this->styleProvider->getStyleFunction(styleContext,null());
HXLINE(  79)		if (::hx::IsNotNull( styleFunction )) {
HXLINE(  80)			return this->styleProvider;
            		}
HXLINE(  83)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassVariantTheme_obj,getStyleProvider,return )

void ClassVariantTheme_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_b28af5e792945e57_88_dispose)
HXDLIN(  88)		::feathers::events::FeathersEvent_obj::dispatch(this->styleProvider,HX_("clear",8d,71,5b,48),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassVariantTheme_obj,dispose,(void))


::hx::ObjectPtr< ClassVariantTheme_obj > ClassVariantTheme_obj::__new() {
	::hx::ObjectPtr< ClassVariantTheme_obj > __this = new ClassVariantTheme_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClassVariantTheme_obj > ClassVariantTheme_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClassVariantTheme_obj *__this = (ClassVariantTheme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClassVariantTheme_obj), true, "feathers.themes.ClassVariantTheme"));
	*(void **)__this = ClassVariantTheme_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClassVariantTheme_obj::ClassVariantTheme_obj()
{
}

void ClassVariantTheme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassVariantTheme);
	HX_MARK_MEMBER_NAME(styleProvider,"styleProvider");
	HX_MARK_END_CLASS();
}

void ClassVariantTheme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(styleProvider,"styleProvider");
}

::hx::Val ClassVariantTheme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"styleProvider") ) { return ::hx::Val( styleProvider ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStyleProvider") ) { return ::hx::Val( getStyleProvider_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClassVariantTheme_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"styleProvider") ) { styleProvider=inValue.Cast<  ::feathers::style::ClassVariantStyleProvider >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassVariantTheme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("styleProvider",82,6b,eb,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClassVariantTheme_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::style::ClassVariantStyleProvider */ ,(int)offsetof(ClassVariantTheme_obj,styleProvider),HX_("styleProvider",82,6b,eb,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClassVariantTheme_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassVariantTheme_obj_sMemberFields[] = {
	HX_("styleProvider",82,6b,eb,5e),
	HX_("getStyleProvider",0c,15,0c,c9),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class ClassVariantTheme_obj::__mClass;

void ClassVariantTheme_obj::__register()
{
	ClassVariantTheme_obj _hx_dummy;
	ClassVariantTheme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.ClassVariantTheme",96,7b,13,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClassVariantTheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClassVariantTheme_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassVariantTheme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassVariantTheme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
