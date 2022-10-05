#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayoutData
#include <feathers/layout/VerticalLayoutData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_28_new,"feathers.layout.VerticalLayoutData","new",0x8fe25162,"feathers.layout.VerticalLayoutData.new","feathers/layout/VerticalLayoutData.hx",28,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_150_get_percentWidth,"feathers.layout.VerticalLayoutData","get_percentWidth",0x2ec9c348,"feathers.layout.VerticalLayoutData.get_percentWidth","feathers/layout/VerticalLayoutData.hx",150,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_153_set_percentWidth,"feathers.layout.VerticalLayoutData","set_percentWidth",0x850bb0bc,"feathers.layout.VerticalLayoutData.set_percentWidth","feathers/layout/VerticalLayoutData.hx",153,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_200_get_percentHeight,"feathers.layout.VerticalLayoutData","get_percentHeight",0x78109465,"feathers.layout.VerticalLayoutData.get_percentHeight","feathers/layout/VerticalLayoutData.hx",200,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_203_set_percentHeight,"feathers.layout.VerticalLayoutData","set_percentHeight",0x9b7e6c71,"feathers.layout.VerticalLayoutData.set_percentHeight","feathers/layout/VerticalLayoutData.hx",203,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_51_fill,"feathers.layout.VerticalLayoutData","fill",0x50de2f41,"feathers.layout.VerticalLayoutData.fill","feathers/layout/VerticalLayoutData.hx",51,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_76_fillHorizontal,"feathers.layout.VerticalLayoutData","fillHorizontal",0xecfd2b85,"feathers.layout.VerticalLayoutData.fillHorizontal","feathers/layout/VerticalLayoutData.hx",76,0x087a0a2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a5d4143de92fd2_101_fillVertical,"feathers.layout.VerticalLayoutData","fillVertical",0x843850d7,"feathers.layout.VerticalLayoutData.fillVertical","feathers/layout/VerticalLayoutData.hx",101,0x087a0a2e)
namespace feathers{
namespace layout{

void VerticalLayoutData_obj::__construct( ::Dynamic percentWidth, ::Dynamic percentHeight){
            	HX_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_28_new)
HXLINE( 162)		this->_percentHeight = null();
HXLINE( 115)		this->_percentWidth = null();
HXLINE( 110)		super::__construct(null());
HXLINE( 111)		this->set_percentWidth(percentWidth);
HXLINE( 112)		this->set_percentHeight(percentHeight);
            	}

Dynamic VerticalLayoutData_obj::__CreateEmpty() { return new VerticalLayoutData_obj; }

void *VerticalLayoutData_obj::_hx_vtable = 0;

Dynamic VerticalLayoutData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalLayoutData_obj > _hx_result = new VerticalLayoutData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VerticalLayoutData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x35c6ca68;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_layout_VerticalLayoutData__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::VerticalLayoutData_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::VerticalLayoutData_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayoutData_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::VerticalLayoutData_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayoutData_obj::willTrigger,
};

static ::feathers::layout::ILayoutData_obj _hx_feathers_layout_VerticalLayoutData__hx_feathers_layout_ILayoutData= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::VerticalLayoutData_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::VerticalLayoutData_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayoutData_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::VerticalLayoutData_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::VerticalLayoutData_obj::willTrigger,
};

void *VerticalLayoutData_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_layout_VerticalLayoutData__hx_openfl_events_IEventDispatcher;
		case (int)0x5e718643: return &_hx_feathers_layout_VerticalLayoutData__hx_feathers_layout_ILayoutData;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic VerticalLayoutData_obj::get_percentWidth(){
            	HX_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_150_get_percentWidth)
HXDLIN( 150)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayoutData_obj,get_percentWidth,return )

 ::Dynamic VerticalLayoutData_obj::set_percentWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_153_set_percentWidth)
HXLINE( 154)		if (::hx::IsEq( this->_percentWidth,value )) {
HXLINE( 155)			return this->_percentWidth;
            		}
HXLINE( 157)		this->_percentWidth = value;
HXLINE( 158)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 159)		return this->_percentWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayoutData_obj,set_percentWidth,return )

 ::Dynamic VerticalLayoutData_obj::get_percentHeight(){
            	HX_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_200_get_percentHeight)
HXDLIN( 200)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalLayoutData_obj,get_percentHeight,return )

 ::Dynamic VerticalLayoutData_obj::set_percentHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_203_set_percentHeight)
HXLINE( 204)		if (::hx::IsEq( this->_percentHeight,value )) {
HXLINE( 205)			return this->_percentHeight;
            		}
HXLINE( 207)		this->_percentHeight = value;
HXLINE( 208)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 209)		return this->_percentHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalLayoutData_obj,set_percentHeight,return )

 ::feathers::layout::VerticalLayoutData VerticalLayoutData_obj::fill(){
            	HX_GC_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_51_fill)
HXDLIN(  51)		return  ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VerticalLayoutData_obj,fill,return )

 ::feathers::layout::VerticalLayoutData VerticalLayoutData_obj::fillHorizontal(::hx::Null< Float >  __o_percentWidth){
            		Float percentWidth = __o_percentWidth.Default(((Float)100.0));
            	HX_GC_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_76_fillHorizontal)
HXDLIN(  76)		return  ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,percentWidth,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VerticalLayoutData_obj,fillHorizontal,return )

 ::feathers::layout::VerticalLayoutData VerticalLayoutData_obj::fillVertical(::hx::Null< Float >  __o_percentHeight){
            		Float percentHeight = __o_percentHeight.Default(((Float)100.0));
            	HX_GC_STACKFRAME(&_hx_pos_e8a5d4143de92fd2_101_fillVertical)
HXDLIN( 101)		return  ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,null(),percentHeight);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VerticalLayoutData_obj,fillVertical,return )


::hx::ObjectPtr< VerticalLayoutData_obj > VerticalLayoutData_obj::__new( ::Dynamic percentWidth, ::Dynamic percentHeight) {
	::hx::ObjectPtr< VerticalLayoutData_obj > __this = new VerticalLayoutData_obj();
	__this->__construct(percentWidth,percentHeight);
	return __this;
}

::hx::ObjectPtr< VerticalLayoutData_obj > VerticalLayoutData_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic percentWidth, ::Dynamic percentHeight) {
	VerticalLayoutData_obj *__this = (VerticalLayoutData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalLayoutData_obj), true, "feathers.layout.VerticalLayoutData"));
	*(void **)__this = VerticalLayoutData_obj::_hx_vtable;
	__this->__construct(percentWidth,percentHeight);
	return __this;
}

VerticalLayoutData_obj::VerticalLayoutData_obj()
{
}

void VerticalLayoutData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VerticalLayoutData);
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VerticalLayoutData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VerticalLayoutData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool VerticalLayoutData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val VerticalLayoutData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void VerticalLayoutData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_percentWidth",e0,e3,89,e0));
	outFields->push(HX_("percentWidth",01,51,1b,fe));
	outFields->push(HX_("_percentHeight",cd,f8,6c,4e));
	outFields->push(HX_("percentHeight",8c,08,1b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VerticalLayoutData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VerticalLayoutData_obj,_percentWidth),HX_("_percentWidth",e0,e3,89,e0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VerticalLayoutData_obj,_percentHeight),HX_("_percentHeight",cd,f8,6c,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VerticalLayoutData_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalLayoutData_obj_sMemberFields[] = {
	HX_("_percentWidth",e0,e3,89,e0),
	HX_("get_percentWidth",8a,3d,ba,02),
	HX_("set_percentWidth",fe,2a,fc,58),
	HX_("_percentHeight",cd,f8,6c,4e),
	HX_("get_percentHeight",e3,13,8b,16),
	HX_("set_percentHeight",ef,eb,f8,39),
	::String(null()) };

::hx::Class VerticalLayoutData_obj::__mClass;

static ::String VerticalLayoutData_obj_sStaticFields[] = {
	HX_("fill",83,ce,bb,43),
	HX_("fillHorizontal",47,31,0f,54),
	HX_("fillVertical",19,02,8a,6e),
	::String(null())
};

void VerticalLayoutData_obj::__register()
{
	VerticalLayoutData_obj _hx_dummy;
	VerticalLayoutData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.VerticalLayoutData",70,b8,09,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VerticalLayoutData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VerticalLayoutData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalLayoutData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalLayoutData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalLayoutData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalLayoutData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
