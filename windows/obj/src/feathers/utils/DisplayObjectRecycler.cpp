#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectFactory
#include <feathers/utils/DisplayObjectFactory.h>
#endif
#ifndef INCLUDED_feathers_utils_DisplayObjectRecycler
#include <feathers/utils/DisplayObjectRecycler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_58_new,"feathers.utils.DisplayObjectRecycler","new",0xdfc70f97,"feathers.utils.DisplayObjectRecycler.new","feathers/utils/DisplayObjectRecycler.hx",58,0x83c95c7b)
HX_LOCAL_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_69___default_update,"feathers.utils.DisplayObjectRecycler","__default_update",0x3b199e90,"feathers.utils.DisplayObjectRecycler.__default_update","feathers/utils/DisplayObjectRecycler.hx",69,0x83c95c7b)
HX_LOCAL_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_78___default_reset,"feathers.utils.DisplayObjectRecycler","__default_reset",0x4b76df28,"feathers.utils.DisplayObjectRecycler.__default_reset","feathers/utils/DisplayObjectRecycler.hx",78,0x83c95c7b)
HX_LOCAL_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_34_withClass,"feathers.utils.DisplayObjectRecycler","withClass",0xfb4edec9,"feathers.utils.DisplayObjectRecycler.withClass","feathers/utils/DisplayObjectRecycler.hx",34,0x83c95c7b)
HX_LOCAL_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_32_withClass,"feathers.utils.DisplayObjectRecycler","withClass",0xfb4edec9,"feathers.utils.DisplayObjectRecycler.withClass","feathers/utils/DisplayObjectRecycler.hx",32,0x83c95c7b)
HX_LOCAL_STACK_FRAME(_hx_pos_827c4d25b15f5e0c_48_withFunction,"feathers.utils.DisplayObjectRecycler","withFunction",0xeab7f527,"feathers.utils.DisplayObjectRecycler.withFunction","feathers/utils/DisplayObjectRecycler.hx",48,0x83c95c7b)
namespace feathers{
namespace utils{

void DisplayObjectRecycler_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_58_new)
HXDLIN(  58)		super::__construct();
            	}

Dynamic DisplayObjectRecycler_obj::__CreateEmpty() { return new DisplayObjectRecycler_obj; }

void *DisplayObjectRecycler_obj::_hx_vtable = 0;

Dynamic DisplayObjectRecycler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectRecycler_obj > _hx_result = new DisplayObjectRecycler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectRecycler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2bde103f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2bde103f;
	} else {
		return inClassId==(int)0x7761b58a;
	}
}

HX_BEGIN_DEFAULT_FUNC(__default_update,DisplayObjectRecycler_obj)
void _hx_run( ::Dynamic target, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_69___default_update)
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_reset,DisplayObjectRecycler_obj)
void _hx_run( ::Dynamic target, ::Dynamic state){
            	HX_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_78___default_reset)
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

 ::feathers::utils::DisplayObjectRecycler DisplayObjectRecycler_obj::withClass(::hx::Class displayObjectType, ::Dynamic update, ::Dynamic reset, ::Dynamic destroy){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::hx::Class,displayObjectType) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_34_withClass)
HXLINE(  34)			return ::Type_obj::createInstance(displayObjectType,::cpp::VirtualArray_obj::__new(0));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_32_withClass)
HXLINE(  33)		 ::feathers::utils::DisplayObjectRecycler item =  ::feathers::utils::DisplayObjectRecycler_obj::__alloc( HX_CTX );
HXLINE(  34)		item->create =  ::Dynamic(new _hx_Closure_0(displayObjectType));
HXLINE(  37)		item->update = update;
HXLINE(  38)		item->reset = reset;
HXLINE(  39)		item->destroy = destroy;
HXLINE(  40)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DisplayObjectRecycler_obj,withClass,return )

 ::feathers::utils::DisplayObjectRecycler DisplayObjectRecycler_obj::withFunction( ::Dynamic create, ::Dynamic update, ::Dynamic reset, ::Dynamic destroy){
            	HX_GC_STACKFRAME(&_hx_pos_827c4d25b15f5e0c_48_withFunction)
HXLINE(  49)		 ::feathers::utils::DisplayObjectRecycler item =  ::feathers::utils::DisplayObjectRecycler_obj::__alloc( HX_CTX );
HXLINE(  50)		item->create = create;
HXLINE(  51)		item->update = update;
HXLINE(  52)		item->reset = reset;
HXLINE(  53)		item->destroy = destroy;
HXLINE(  54)		return item;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DisplayObjectRecycler_obj,withFunction,return )


void DisplayObjectRecycler_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,DisplayObjectRecycler_obj *_hx_obj) {
	if (!_hx_obj->reset.mPtr) _hx_obj->reset = new __default_reset(_hx_obj);
	if (!_hx_obj->update.mPtr) _hx_obj->update = new __default_update(_hx_obj);
	feathers::utils::DisplayObjectFactory_obj::__alloc_dynamic_functions(_hx_ctx,_hx_obj);
}
DisplayObjectRecycler_obj::DisplayObjectRecycler_obj()
{
	reset = new __default_reset(this);
	update = new __default_update(this);
}

void DisplayObjectRecycler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectRecycler);
	HX_MARK_MEMBER_NAME(update,"update");
	HX_MARK_MEMBER_NAME(reset,"reset");
	 ::feathers::utils::DisplayObjectFactory_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectRecycler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(update,"update");
	HX_VISIT_MEMBER_NAME(reset,"reset");
	 ::feathers::utils::DisplayObjectFactory_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectRecycler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObjectRecycler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"withClass") ) { outValue = withClass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"withFunction") ) { outValue = withFunction_dyn(); return true; }
	}
	return false;
}

::hx::Val DisplayObjectRecycler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { reset=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { update=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectRecycler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRecycler_obj,update),HX_("update",09,86,05,87)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRecycler_obj,reset),HX_("reset",cf,49,c8,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectRecycler_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectRecycler_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class DisplayObjectRecycler_obj::__mClass;

static ::String DisplayObjectRecycler_obj_sStaticFields[] = {
	HX_("withClass",52,dc,45,cc),
	HX_("withFunction",3e,53,0b,2d),
	::String(null())
};

void DisplayObjectRecycler_obj::__register()
{
	DisplayObjectRecycler_obj _hx_dummy;
	DisplayObjectRecycler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.DisplayObjectRecycler",25,f8,db,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObjectRecycler_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisplayObjectRecycler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectRecycler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectRecycler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectRecycler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectRecycler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
