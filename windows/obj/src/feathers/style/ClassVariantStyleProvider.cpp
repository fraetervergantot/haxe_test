#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_events_StyleProviderEvent
#include <feathers/events/StyleProviderEvent.h>
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
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style__ClassVariantStyleProvider_StyleTarget
#include <feathers/style/_ClassVariantStyleProvider/StyleTarget.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7908ae37b342d1d1_69_new,"feathers.style.ClassVariantStyleProvider","new",0x868c8aec,"feathers.style.ClassVariantStyleProvider.new","feathers/style/ClassVariantStyleProvider.hx",69,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_101_setStyleFunction,"feathers.style.ClassVariantStyleProvider","setStyleFunction",0x6c8b5a5b,"feathers.style.ClassVariantStyleProvider.setStyleFunction","feathers/style/ClassVariantStyleProvider.hx",101,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_81_setStyleFunction,"feathers.style.ClassVariantStyleProvider","setStyleFunction",0x6c8b5a5b,"feathers.style.ClassVariantStyleProvider.setStyleFunction","feathers/style/ClassVariantStyleProvider.hx",81,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_115_getStyleFunction,"feathers.style.ClassVariantStyleProvider","getStyleFunction",0x16496ce7,"feathers.style.ClassVariantStyleProvider.getStyleFunction","feathers/style/ClassVariantStyleProvider.hx",115,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_123_applyStyles,"feathers.style.ClassVariantStyleProvider","applyStyles",0x9255ccbc,"feathers.style.ClassVariantStyleProvider.applyStyles","feathers/style/ClassVariantStyleProvider.hx",123,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_136_getStyleContext,"feathers.style.ClassVariantStyleProvider","getStyleContext",0x64184300,"feathers.style.ClassVariantStyleProvider.getStyleContext","feathers/style/ClassVariantStyleProvider.hx",136,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_148_getVariant,"feathers.style.ClassVariantStyleProvider","getVariant",0x4b8cb583,"feathers.style.ClassVariantStyleProvider.getVariant","feathers/style/ClassVariantStyleProvider.hx",148,0x134bebc6)
HX_LOCAL_STACK_FRAME(_hx_pos_7908ae37b342d1d1_157_getStyleFunctionInternal,"feathers.style.ClassVariantStyleProvider","getStyleFunctionInternal",0x39934f44,"feathers.style.ClassVariantStyleProvider.getStyleFunctionInternal","feathers/style/ClassVariantStyleProvider.hx",157,0x134bebc6)
namespace feathers{
namespace style{

void ClassVariantStyleProvider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_69_new)
HXDLIN(  69)		super::__construct(null());
            	}

Dynamic ClassVariantStyleProvider_obj::__CreateEmpty() { return new ClassVariantStyleProvider_obj; }

void *ClassVariantStyleProvider_obj::_hx_vtable = 0;

Dynamic ClassVariantStyleProvider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClassVariantStyleProvider_obj > _hx_result = new ClassVariantStyleProvider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClassVariantStyleProvider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x52da5278;
	}
}

static ::feathers::style::IStyleProvider_obj _hx_feathers_style_ClassVariantStyleProvider__hx_feathers_style_IStyleProvider= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::style::ClassVariantStyleProvider_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::style::ClassVariantStyleProvider_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::style::ClassVariantStyleProvider_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::style::ClassVariantStyleProvider_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::style::ClassVariantStyleProvider_obj::willTrigger,
	( void (::hx::Object::*)(::Dynamic))&::feathers::style::ClassVariantStyleProvider_obj::applyStyles,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_style_ClassVariantStyleProvider__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::style::ClassVariantStyleProvider_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::style::ClassVariantStyleProvider_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::style::ClassVariantStyleProvider_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::style::ClassVariantStyleProvider_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::style::ClassVariantStyleProvider_obj::willTrigger,
};

void *ClassVariantStyleProvider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x95abf9ba: return &_hx_feathers_style_ClassVariantStyleProvider__hx_feathers_style_IStyleProvider;
		case (int)0x87530281: return &_hx_feathers_style_ClassVariantStyleProvider__hx_openfl_events_IEventDispatcher;
	}
	return super::_hx_getInterface(inHash);
}

void ClassVariantStyleProvider_obj::setStyleFunction(::hx::Class type,::String variant, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::feathers::style::ClassVariantStyleProvider,_gthis, ::Dynamic,callback) HXARGC(1)
            		bool _hx_run(::Dynamic target){
            			HX_GC_STACKFRAME(&_hx_pos_7908ae37b342d1d1_101_setStyleFunction)
HXLINE( 102)			::hx::Class styleContext = _gthis->getStyleContext(target);
HXLINE( 103)			::String variant = _gthis->getVariant(target);
HXLINE( 104)			 ::Dynamic otherCallback = _gthis->getStyleFunctionInternal(styleContext,variant,false);
HXLINE( 105)			if (!(::Reflect_obj::compareMethods(callback,otherCallback))) {
HXLINE( 105)				return (::Reflect_obj::compare(callback,otherCallback) == 0);
            			}
            			else {
HXLINE( 105)				return true;
            			}
HXDLIN( 105)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_7908ae37b342d1d1_81_setStyleFunction)
HXDLIN(  81)		 ::feathers::style::ClassVariantStyleProvider _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  82)		if (::hx::IsNull( this->styleTargets )) {
HXLINE(  83)			this->styleTargets =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  85)		::String typeName = ::Type_obj::getClassName(type);
HXLINE(  86)		 ::feathers::style::_ClassVariantStyleProvider::StyleTarget styleTarget;
HXDLIN(  86)		if (::hx::IsNull( variant )) {
HXLINE(  86)			styleTarget = ::feathers::style::_ClassVariantStyleProvider::StyleTarget_obj::Class(typeName);
            		}
            		else {
HXLINE(  86)			styleTarget = ::feathers::style::_ClassVariantStyleProvider::StyleTarget_obj::ClassAndVariant(typeName,variant);
            		}
HXLINE(  87)		if (::hx::IsNull( callback )) {
HXLINE(  88)			if (!(this->styleTargets->exists(styleTarget))) {
HXLINE(  90)				return;
            			}
HXLINE(  92)			this->styleTargets->remove(styleTarget);
            		}
            		else {
HXLINE(  94)			 ::Dynamic oldCallback = this->styleTargets->get(styleTarget);
HXLINE(  95)			bool _hx_tmp;
HXDLIN(  95)			if (!(::Reflect_obj::compareMethods(callback,oldCallback))) {
HXLINE(  95)				_hx_tmp = (::Reflect_obj::compare(callback,oldCallback) == 0);
            			}
            			else {
HXLINE(  95)				_hx_tmp = true;
            			}
HXDLIN(  95)			if (_hx_tmp) {
HXLINE(  97)				return;
            			}
HXLINE(  99)			this->styleTargets->set(styleTarget,callback);
            		}
HXLINE( 101)		::feathers::events::StyleProviderEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("stylesChange",32,31,e4,f9), ::Dynamic(new _hx_Closure_0(_gthis,callback)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClassVariantStyleProvider_obj,setStyleFunction,(void))

 ::Dynamic ClassVariantStyleProvider_obj::getStyleFunction(::hx::Class type,::String variant){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_115_getStyleFunction)
HXDLIN( 115)		return this->getStyleFunctionInternal(type,variant,true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClassVariantStyleProvider_obj,getStyleFunction,return )

void ClassVariantStyleProvider_obj::applyStyles(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_123_applyStyles)
HXLINE( 124)		if (::hx::IsNull( this->styleTargets )) {
HXLINE( 125)			return;
            		}
HXLINE( 127)		::hx::Class styleContext = this->getStyleContext(target);
HXLINE( 128)		::String variant = this->getVariant(target);
HXLINE( 129)		 ::Dynamic callback = this->getStyleFunctionInternal(styleContext,variant,false);
HXLINE( 130)		if (::hx::IsNull( callback )) {
HXLINE( 131)			return;
            		}
HXLINE( 133)		callback(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassVariantStyleProvider_obj,applyStyles,(void))

::hx::Class ClassVariantStyleProvider_obj::getStyleContext(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_136_getStyleContext)
HXLINE( 137)		::hx::Class styleContext = null();
HXLINE( 138)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::style::IVariantStyleObject >())) {
HXLINE( 139)			::Dynamic variantObject = target;
HXLINE( 140)			styleContext = ::feathers::style::IVariantStyleObject_obj::get_styleContext(variantObject);
            		}
HXLINE( 142)		if (::hx::IsNull( styleContext )) {
HXLINE( 143)			styleContext = ::Type_obj::getClass(target);
            		}
HXLINE( 145)		return styleContext;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassVariantStyleProvider_obj,getStyleContext,return )

::String ClassVariantStyleProvider_obj::getVariant(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_148_getVariant)
HXLINE( 149)		::String variant = null();
HXLINE( 150)		if (::Std_obj::isOfType(target,::hx::ClassOf< ::feathers::style::IVariantStyleObject >())) {
HXLINE( 151)			::Dynamic variantObject = target;
HXLINE( 152)			variant = ::feathers::style::IVariantStyleObject_obj::get_variant(variantObject);
            		}
HXLINE( 154)		return variant;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassVariantStyleProvider_obj,getVariant,return )

 ::Dynamic ClassVariantStyleProvider_obj::getStyleFunctionInternal(::hx::Class type,::String variant,bool strict){
            	HX_STACKFRAME(&_hx_pos_7908ae37b342d1d1_157_getStyleFunctionInternal)
HXLINE( 158)		if (::hx::IsNull( this->styleTargets )) {
HXLINE( 159)			return null();
            		}
HXLINE( 161)		::String typeName = ::Type_obj::getClassName(type);
HXLINE( 162)		 ::feathers::style::_ClassVariantStyleProvider::StyleTarget styleTarget;
HXDLIN( 162)		if (::hx::IsNull( variant )) {
HXLINE( 162)			styleTarget = ::feathers::style::_ClassVariantStyleProvider::StyleTarget_obj::Class(typeName);
            		}
            		else {
HXLINE( 162)			styleTarget = ::feathers::style::_ClassVariantStyleProvider::StyleTarget_obj::ClassAndVariant(typeName,variant);
            		}
HXLINE( 163)		 ::Dynamic result = this->styleTargets->get(styleTarget);
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (::hx::IsNull( result )) {
HXLINE( 164)			_hx_tmp = strict;
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 165)			return result;
            		}
HXLINE( 168)		return this->styleTargets->get(::feathers::style::_ClassVariantStyleProvider::StyleTarget_obj::Class(typeName));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ClassVariantStyleProvider_obj,getStyleFunctionInternal,return )


::hx::ObjectPtr< ClassVariantStyleProvider_obj > ClassVariantStyleProvider_obj::__new() {
	::hx::ObjectPtr< ClassVariantStyleProvider_obj > __this = new ClassVariantStyleProvider_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClassVariantStyleProvider_obj > ClassVariantStyleProvider_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClassVariantStyleProvider_obj *__this = (ClassVariantStyleProvider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClassVariantStyleProvider_obj), true, "feathers.style.ClassVariantStyleProvider"));
	*(void **)__this = ClassVariantStyleProvider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClassVariantStyleProvider_obj::ClassVariantStyleProvider_obj()
{
}

void ClassVariantStyleProvider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassVariantStyleProvider);
	HX_MARK_MEMBER_NAME(styleTargets,"styleTargets");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClassVariantStyleProvider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(styleTargets,"styleTargets");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ClassVariantStyleProvider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getVariant") ) { return ::hx::Val( getVariant_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyStyles") ) { return ::hx::Val( applyStyles_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"styleTargets") ) { return ::hx::Val( styleTargets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStyleContext") ) { return ::hx::Val( getStyleContext_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setStyleFunction") ) { return ::hx::Val( setStyleFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStyleFunction") ) { return ::hx::Val( getStyleFunction_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getStyleFunctionInternal") ) { return ::hx::Val( getStyleFunctionInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClassVariantStyleProvider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"styleTargets") ) { styleTargets=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassVariantStyleProvider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("styleTargets",d1,ee,71,b5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClassVariantStyleProvider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(ClassVariantStyleProvider_obj,styleTargets),HX_("styleTargets",d1,ee,71,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClassVariantStyleProvider_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassVariantStyleProvider_obj_sMemberFields[] = {
	HX_("styleTargets",d1,ee,71,b5),
	HX_("setStyleFunction",67,bc,66,10),
	HX_("getStyleFunction",f3,ce,24,ba),
	HX_("applyStyles",30,a6,cd,51),
	HX_("getStyleContext",74,e6,6b,69),
	HX_("getVariant",8f,c6,43,2c),
	HX_("getStyleFunctionInternal",50,9d,f1,fd),
	::String(null()) };

::hx::Class ClassVariantStyleProvider_obj::__mClass;

void ClassVariantStyleProvider_obj::__register()
{
	ClassVariantStyleProvider_obj _hx_dummy;
	ClassVariantStyleProvider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.style.ClassVariantStyleProvider",fa,e4,e1,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClassVariantStyleProvider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClassVariantStyleProvider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassVariantStyleProvider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassVariantStyleProvider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace style
