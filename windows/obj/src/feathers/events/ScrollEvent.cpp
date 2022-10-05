#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_ScrollEvent
#include <feathers/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38997300b37a6a5f_95_new,"feathers.events.ScrollEvent","new",0x0f3cb488,"feathers.events.ScrollEvent.new","feathers/events/ScrollEvent.hx",95,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_99_clone,"feathers.events.ScrollEvent","clone",0x8e6b5185,"feathers.events.ScrollEvent.clone","feathers/events/ScrollEvent.hx",99,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_72_dispatch,"feathers.events.ScrollEvent","dispatch",0x6306d992,"feathers.events.ScrollEvent.dispatch","feathers/events/ScrollEvent.hx",72,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_36_boot,"feathers.events.ScrollEvent","boot",0x3dfa430a,"feathers.events.ScrollEvent.boot","feathers/events/ScrollEvent.hx",36,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_44_boot,"feathers.events.ScrollEvent","boot",0x3dfa430a,"feathers.events.ScrollEvent.boot","feathers/events/ScrollEvent.hx",44,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_51_boot,"feathers.events.ScrollEvent","boot",0x3dfa430a,"feathers.events.ScrollEvent.boot","feathers/events/ScrollEvent.hx",51,0xb49f1e08)
HX_LOCAL_STACK_FRAME(_hx_pos_38997300b37a6a5f_54_boot,"feathers.events.ScrollEvent","boot",0x3dfa430a,"feathers.events.ScrollEvent.boot","feathers/events/ScrollEvent.hx",54,0xb49f1e08)
namespace feathers{
namespace events{

void ScrollEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_95_new)
HXDLIN(  95)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic ScrollEvent_obj::__CreateEmpty() { return new ScrollEvent_obj; }

void *ScrollEvent_obj::_hx_vtable = 0;

Dynamic ScrollEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollEvent_obj > _hx_result = new ScrollEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ScrollEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x4b8ce2c4;
	}
}

 ::openfl::events::Event ScrollEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_38997300b37a6a5f_99_clone)
HXDLIN(  99)		return  ::feathers::events::ScrollEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable);
            	}


::String ScrollEvent_obj::SCROLL_START;

::String ScrollEvent_obj::SCROLL_COMPLETE;

::String ScrollEvent_obj::SCROLL;

 ::lime::utils::ObjectPool ScrollEvent_obj::_pool;

bool ScrollEvent_obj::dispatch(::Dynamic dispatcher,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_72_dispatch)
HXLINE(  77)		 ::feathers::events::ScrollEvent event = ::feathers::events::ScrollEvent_obj::_pool->get().StaticCast<  ::feathers::events::ScrollEvent >();
HXLINE(  78)		event->type = type;
HXLINE(  79)		event->bubbles = bubbles;
HXLINE(  80)		event->cancelable = cancelable;
HXLINE(  81)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  82)		::feathers::events::ScrollEvent_obj::_pool->release(event);
HXLINE(  83)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ScrollEvent_obj,dispatch,return )


::hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< ScrollEvent_obj > __this = new ScrollEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< ScrollEvent_obj > ScrollEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	ScrollEvent_obj *__this = (ScrollEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollEvent_obj), true, "feathers.events.ScrollEvent"));
	*(void **)__this = ScrollEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

ScrollEvent_obj::ScrollEvent_obj()
{
}

::hx::Val ScrollEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ScrollEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { outValue = dispatch_dyn(); return true; }
	}
	return false;
}

bool ScrollEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ScrollEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ScrollEvent_obj::SCROLL_START,HX_("SCROLL_START",50,7f,da,0c)},
	{::hx::fsString,(void *) &ScrollEvent_obj::SCROLL_COMPLETE,HX_("SCROLL_COMPLETE",6b,9a,b3,5b)},
	{::hx::fsString,(void *) &ScrollEvent_obj::SCROLL,HX_("SCROLL",0d,84,e7,f9)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &ScrollEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ScrollEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::SCROLL_START,"SCROLL_START");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::SCROLL_COMPLETE,"SCROLL_COMPLETE");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(ScrollEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::SCROLL_START,"SCROLL_START");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::SCROLL_COMPLETE,"SCROLL_COMPLETE");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(ScrollEvent_obj::_pool,"_pool");
};

#endif

::hx::Class ScrollEvent_obj::__mClass;

static ::String ScrollEvent_obj_sStaticFields[] = {
	HX_("SCROLL_START",50,7f,da,0c),
	HX_("SCROLL_COMPLETE",6b,9a,b3,5b),
	HX_("SCROLL",0d,84,e7,f9),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void ScrollEvent_obj::__register()
{
	ScrollEvent_obj _hx_dummy;
	ScrollEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.ScrollEvent",96,10,1e,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScrollEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ScrollEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ScrollEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScrollEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_36_boot)
HXDLIN(  36)		SCROLL_START = HX_("scrollStart",15,bd,e8,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_44_boot)
HXDLIN(  44)		SCROLL_COMPLETE = HX_("scrollComplete",e6,e9,b8,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_51_boot)
HXDLIN(  51)		SCROLL = HX_("scroll",0d,d8,64,47);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::ScrollEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_38997300b37a6a5f_54_boot)
HXDLIN(  54)			return  ::feathers::events::ScrollEvent_obj::__alloc( HX_CTX ,null(),false,false);
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::ScrollEvent event){
            			HX_STACKFRAME(&_hx_pos_38997300b37a6a5f_54_boot)
HXLINE(  55)			event->target = null();
HXLINE(  56)			event->currentTarget = null();
HXLINE(  57)			event->_hx___preventDefault = false;
HXLINE(  58)			event->_hx___isCanceled = false;
HXLINE(  59)			event->_hx___isCanceledNow = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_38997300b37a6a5f_54_boot)
HXDLIN(  54)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
