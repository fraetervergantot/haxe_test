#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayoutData
#include <feathers/layout/HorizontalLayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_28_new,"feathers.layout.HorizontalLayoutData","new",0xdeefdbd0,"feathers.layout.HorizontalLayoutData.new","feathers/layout/HorizontalLayoutData.hx",28,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_153_get_percentWidth,"feathers.layout.HorizontalLayoutData","get_percentWidth",0xd107cc1a,"feathers.layout.HorizontalLayoutData.get_percentWidth","feathers/layout/HorizontalLayoutData.hx",153,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_156_set_percentWidth,"feathers.layout.HorizontalLayoutData","set_percentWidth",0x2749b98e,"feathers.layout.HorizontalLayoutData.set_percentWidth","feathers/layout/HorizontalLayoutData.hx",156,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_200_get_percentHeight,"feathers.layout.HorizontalLayoutData","get_percentHeight",0xcc1a4353,"feathers.layout.HorizontalLayoutData.get_percentHeight","feathers/layout/HorizontalLayoutData.hx",200,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_203_set_percentHeight,"feathers.layout.HorizontalLayoutData","set_percentHeight",0xef881b5f,"feathers.layout.HorizontalLayoutData.set_percentHeight","feathers/layout/HorizontalLayoutData.hx",203,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_51_fill,"feathers.layout.HorizontalLayoutData","fill",0x2da9c513,"feathers.layout.HorizontalLayoutData.fill","feathers/layout/HorizontalLayoutData.hx",51,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_76_fillHorizontal,"feathers.layout.HorizontalLayoutData","fillHorizontal",0x0068fbd7,"feathers.layout.HorizontalLayoutData.fillHorizontal","feathers/layout/HorizontalLayoutData.hx",76,0x10085f80)
HX_LOCAL_STACK_FRAME(_hx_pos_b35c7c295a8cea6c_101_fillVertical,"feathers.layout.HorizontalLayoutData","fillVertical",0x302908a9,"feathers.layout.HorizontalLayoutData.fillVertical","feathers/layout/HorizontalLayoutData.hx",101,0x10085f80)
namespace feathers{
namespace layout{

void HorizontalLayoutData_obj::__construct( ::Dynamic percentWidth, ::Dynamic percentHeight){
            	HX_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_28_new)
HXLINE( 165)		this->_percentHeight = null();
HXLINE( 115)		this->_percentWidth = null();
HXLINE( 110)		super::__construct(null());
HXLINE( 111)		this->set_percentWidth(percentWidth);
HXLINE( 112)		this->set_percentHeight(percentHeight);
            	}

Dynamic HorizontalLayoutData_obj::__CreateEmpty() { return new HorizontalLayoutData_obj; }

void *HorizontalLayoutData_obj::_hx_vtable = 0;

Dynamic HorizontalLayoutData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalLayoutData_obj > _hx_result = new HorizontalLayoutData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HorizontalLayoutData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x6f805f72;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_layout_HorizontalLayoutData__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalLayoutData_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalLayoutData_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayoutData_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalLayoutData_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayoutData_obj::willTrigger,
};

static ::feathers::layout::ILayoutData_obj _hx_feathers_layout_HorizontalLayoutData__hx_feathers_layout_ILayoutData= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalLayoutData_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalLayoutData_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayoutData_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalLayoutData_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayoutData_obj::willTrigger,
};

void *HorizontalLayoutData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_layout_HorizontalLayoutData__hx_openfl_events_IEventDispatcher;
		case (int)0x5e718643: return &_hx_feathers_layout_HorizontalLayoutData__hx_feathers_layout_ILayoutData;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic HorizontalLayoutData_obj::get_percentWidth(){
            	HX_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_153_get_percentWidth)
HXDLIN( 153)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayoutData_obj,get_percentWidth,return )

 ::Dynamic HorizontalLayoutData_obj::set_percentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_156_set_percentWidth)
HXLINE( 157)		if (::hx::IsEq( this->_percentWidth,value )) {
HXLINE( 158)			return this->_percentWidth;
            		}
HXLINE( 160)		this->_percentWidth = value;
HXLINE( 161)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 162)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayoutData_obj,set_percentWidth,return )

 ::Dynamic HorizontalLayoutData_obj::get_percentHeight(){
            	HX_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_200_get_percentHeight)
HXDLIN( 200)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayoutData_obj,get_percentHeight,return )

 ::Dynamic HorizontalLayoutData_obj::set_percentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_203_set_percentHeight)
HXLINE( 204)		if (::hx::IsEq( this->_percentHeight,value )) {
HXLINE( 205)			return this->_percentHeight;
            		}
HXLINE( 207)		this->_percentHeight = value;
HXLINE( 208)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 209)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayoutData_obj,set_percentHeight,return )

 ::feathers::layout::HorizontalLayoutData HorizontalLayoutData_obj::fill(){
            	HX_GC_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_51_fill)
HXDLIN(  51)		return  ::feathers::layout::HorizontalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayoutData_obj,fill,return )

 ::feathers::layout::HorizontalLayoutData HorizontalLayoutData_obj::fillHorizontal(::hx::Null< Float >  __o_percentWidth){
            		Float percentWidth = __o_percentWidth.Default(((Float)100.0));
            	HX_GC_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_76_fillHorizontal)
HXDLIN(  76)		return  ::feathers::layout::HorizontalLayoutData_obj::__alloc( HX_CTX ,percentWidth,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayoutData_obj,fillHorizontal,return )

 ::feathers::layout::HorizontalLayoutData HorizontalLayoutData_obj::fillVertical(::hx::Null< Float >  __o_percentHeight){
            		Float percentHeight = __o_percentHeight.Default(((Float)100.0));
            	HX_GC_STACKFRAME(&_hx_pos_b35c7c295a8cea6c_101_fillVertical)
HXDLIN( 101)		return  ::feathers::layout::HorizontalLayoutData_obj::__alloc( HX_CTX ,null(),percentHeight);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayoutData_obj,fillVertical,return )


::hx::ObjectPtr< HorizontalLayoutData_obj > HorizontalLayoutData_obj::__new( ::Dynamic percentWidth, ::Dynamic percentHeight) {
	::hx::ObjectPtr< HorizontalLayoutData_obj > __this = new HorizontalLayoutData_obj();
	__this->__construct(percentWidth,percentHeight);
	return __this;
}

::hx::ObjectPtr< HorizontalLayoutData_obj > HorizontalLayoutData_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic percentWidth, ::Dynamic percentHeight) {
	HorizontalLayoutData_obj *__this = (HorizontalLayoutData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalLayoutData_obj), true, "feathers.layout.HorizontalLayoutData"));
	*(void **)__this = HorizontalLayoutData_obj::_hx_vtable;
	__this->__construct(percentWidth,percentHeight);
	return __this;
}

HorizontalLayoutData_obj::HorizontalLayoutData_obj()
{
}

void HorizontalLayoutData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HorizontalLayoutData);
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HorizontalLayoutData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HorizontalLayoutData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentWidth() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return ::hx::Val( _percentWidth ); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentHeight() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return ::hx::Val( _percentHeight ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return ::hx::Val( get_percentWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return ::hx::Val( set_percentWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return ::hx::Val( get_percentHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return ::hx::Val( set_percentHeight_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HorizontalLayoutData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fillVertical") ) { outValue = fillVertical_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillHorizontal") ) { outValue = fillHorizontal_dyn(); return true; }
	}
	return false;
}

::hx::Val HorizontalLayoutData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalLayoutData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_percentWidth",e0,e3,89,e0));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("_percentHeight",cd,f8,6c,4e));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HorizontalLayoutData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HorizontalLayoutData_obj,_percentWidth),HX_("_percentWidth",e0,e3,89,e0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HorizontalLayoutData_obj,_percentHeight),HX_("_percentHeight",cd,f8,6c,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HorizontalLayoutData_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalLayoutData_obj_sMemberFields[] = {
	HX_("_percentWidth",e0,e3,89,e0),
	HX_("get_percentWidth",8a,3d,ba,02),
	HX_("set_percentWidth",fe,2a,fc,58),
	HX_("_percentHeight",cd,f8,6c,4e),
	HX_("get_percentHeight",e3,13,8b,16),
	HX_("set_percentHeight",ef,eb,f8,39),
	::String(null()) };

::hx::Class HorizontalLayoutData_obj::__mClass;

static ::String HorizontalLayoutData_obj_sStaticFields[] = {
	HX_("fill",83,ce,bb,43),
	HX_("fillHorizontal",47,31,0f,54),
	HX_("fillVertical",19,02,8a,6e),
	::String(null())
};

void HorizontalLayoutData_obj::__register()
{
	HorizontalLayoutData_obj _hx_dummy;
	HorizontalLayoutData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.HorizontalLayoutData",de,f3,c9,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HorizontalLayoutData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HorizontalLayoutData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalLayoutData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalLayoutData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalLayoutData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalLayoutData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
