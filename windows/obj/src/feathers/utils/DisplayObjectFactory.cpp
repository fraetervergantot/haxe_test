#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_68_new,"feathers.utils.DisplayObjectFactory","new",0x5d5b6f56,"feathers.utils.DisplayObjectFactory.new","feathers/utils/DisplayObjectFactory.hx",68,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_76___default_create,"feathers.utils.DisplayObjectFactory","__default_create",0x5750f464,"feathers.utils.DisplayObjectFactory.__default_create","feathers/utils/DisplayObjectFactory.hx",76,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_84___default_destroy,"feathers.utils.DisplayObjectFactory","__default_destroy",0x22a05a92,"feathers.utils.DisplayObjectFactory.__default_destroy","feathers/utils/DisplayObjectFactory.hx",84,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_34_withDisplayObject,"feathers.utils.DisplayObjectFactory","withDisplayObject",0x3ac3ea31,"feathers.utils.DisplayObjectFactory.withDisplayObject","feathers/utils/DisplayObjectFactory.hx",34,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_31_withDisplayObject,"feathers.utils.DisplayObjectFactory","withDisplayObject",0x3ac3ea31,"feathers.utils.DisplayObjectFactory.withDisplayObject","feathers/utils/DisplayObjectFactory.hx",31,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_50_withClass,"feathers.utils.DisplayObjectFactory","withClass",0x5d7817c8,"feathers.utils.DisplayObjectFactory.withClass","feathers/utils/DisplayObjectFactory.hx",50,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_48_withClass,"feathers.utils.DisplayObjectFactory","withClass",0x5d7817c8,"feathers.utils.DisplayObjectFactory.withClass","feathers/utils/DisplayObjectFactory.hx",48,0xdfe76e58)
HX_LOCAL_STACK_FRAME(_hx_pos_71d5b5544cf8d3da_61_withFunction,"feathers.utils.DisplayObjectFactory","withFunction",0x34af2588,"feathers.utils.DisplayObjectFactory.withFunction","feathers/utils/DisplayObjectFactory.hx",61,0xdfe76e58)
namespace feathers{
namespace utils{

void DisplayObjectFactory_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_68_new)
            	}

Dynamic DisplayObjectFactory_obj::__CreateEmpty() { return new DisplayObjectFactory_obj; }

void *DisplayObjectFactory_obj::_hx_vtable = 0;

Dynamic DisplayObjectFactory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectFactory_obj > _hx_result = new DisplayObjectFactory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7761b58a;
}

HX_BEGIN_DEFAULT_FUNC(__default_create,DisplayObjectFactory_obj)
 ::Dynamic _hx_run(){
            	HX_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_76___default_create)
HXDLIN(  76)		return null();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_destroy,DisplayObjectFactory_obj)
void _hx_run( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_84___default_destroy)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

 ::feathers::utils::DisplayObjectFactory DisplayObjectFactory_obj::withDisplayObject( ::Dynamic displayObject, ::Dynamic destroy){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,displayObject) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_34_withDisplayObject)
HXLINE(  34)			return displayObject;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_31_withDisplayObject)
HXLINE(  32)		 ::feathers::utils::DisplayObjectFactory item =  ::feathers::utils::DisplayObjectFactory_obj::__alloc( HX_CTX );
HXLINE(  33)		item->create =  ::Dynamic(new _hx_Closure_0(displayObject));
HXLINE(  36)		item->destroy = destroy;
HXLINE(  37)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectFactory_obj,withDisplayObject,return )

 ::feathers::utils::DisplayObjectFactory DisplayObjectFactory_obj::withClass(::hx::Class displayObjectType, ::Dynamic destroy){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::hx::Class,displayObjectType) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_50_withClass)
HXLINE(  50)			return ::Type_obj::createInstance(displayObjectType,::cpp::VirtualArray_obj::__new(0));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_48_withClass)
HXLINE(  49)		 ::feathers::utils::DisplayObjectFactory item =  ::feathers::utils::DisplayObjectFactory_obj::__alloc( HX_CTX );
HXLINE(  50)		item->create =  ::Dynamic(new _hx_Closure_0(displayObjectType));
HXLINE(  53)		item->destroy = destroy;
HXLINE(  54)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectFactory_obj,withClass,return )

 ::feathers::utils::DisplayObjectFactory DisplayObjectFactory_obj::withFunction( ::Dynamic create, ::Dynamic destroy){
            	HX_GC_STACKFRAME(&_hx_pos_71d5b5544cf8d3da_61_withFunction)
HXLINE(  62)		 ::feathers::utils::DisplayObjectFactory item =  ::feathers::utils::DisplayObjectFactory_obj::__alloc( HX_CTX );
HXLINE(  63)		item->create = create;
HXLINE(  64)		item->destroy = destroy;
HXLINE(  65)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectFactory_obj,withFunction,return )


void DisplayObjectFactory_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,DisplayObjectFactory_obj *_hx_obj) {
	if (!_hx_obj->destroy.mPtr) _hx_obj->destroy = new __default_destroy(_hx_obj);
	if (!_hx_obj->create.mPtr) _hx_obj->create = new __default_create(_hx_obj);
}
DisplayObjectFactory_obj::DisplayObjectFactory_obj()
{
	destroy = new __default_destroy(this);
	create = new __default_create(this);
}

void DisplayObjectFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectFactory);
	HX_MARK_MEMBER_NAME(create,"create");
	HX_MARK_MEMBER_NAME(destroy,"destroy");
	HX_MARK_END_CLASS();
}

void DisplayObjectFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(create,"create");
	HX_VISIT_MEMBER_NAME(destroy,"destroy");
}

::hx::Val DisplayObjectFactory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObjectFactory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"withClass") ) { outValue = withClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"withFunction") ) { outValue = withFunction_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"withDisplayObject") ) { outValue = withDisplayObject_dyn(); return true; }
	}
	return false;
}

::hx::Val DisplayObjectFactory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { create=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { destroy=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectFactory_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectFactory_obj,create),HX_("create",fc,66,0f,7c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectFactory_obj,destroy),HX_("destroy",fa,2c,86,24)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectFactory_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectFactory_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class DisplayObjectFactory_obj::__mClass;

static ::String DisplayObjectFactory_obj_sStaticFields[] = {
	HX_("withDisplayObject",bb,48,18,49),
	HX_("withClass",52,dc,45,cc),
	HX_("withFunction",3e,53,0b,2d),
	::String(null())
};

void DisplayObjectFactory_obj::__register()
{
	DisplayObjectFactory_obj _hx_dummy;
	DisplayObjectFactory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.DisplayObjectFactory",64,cc,b7,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObjectFactory_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisplayObjectFactory_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectFactory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectFactory_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectFactory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
