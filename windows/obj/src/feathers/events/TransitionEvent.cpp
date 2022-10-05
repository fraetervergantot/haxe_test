#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_TransitionEvent
#include <feathers/events/TransitionEvent.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_110_new,"feathers.events.TransitionEvent","new",0x9a2f6680,"feathers.events.TransitionEvent.new","feathers/events/TransitionEvent.hx",110,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_147_clone,"feathers.events.TransitionEvent","clone",0xc0e8717d,"feathers.events.TransitionEvent.clone","feathers/events/TransitionEvent.hx",147,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_84_dispatch,"feathers.events.TransitionEvent","dispatch",0x3e34049a,"feathers.events.TransitionEvent.dispatch","feathers/events/TransitionEvent.hx",84,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_37_boot,"feathers.events.TransitionEvent","boot",0x47634a12,"feathers.events.TransitionEvent.boot","feathers/events/TransitionEvent.hx",37,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_47_boot,"feathers.events.TransitionEvent","boot",0x47634a12,"feathers.events.TransitionEvent.boot","feathers/events/TransitionEvent.hx",47,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_58_boot,"feathers.events.TransitionEvent","boot",0x47634a12,"feathers.events.TransitionEvent.boot","feathers/events/TransitionEvent.hx",58,0x94fa6310)
HX_LOCAL_STACK_FRAME(_hx_pos_bfe272aa5bcb0c4a_61_boot,"feathers.events.TransitionEvent","boot",0x47634a12,"feathers.events.TransitionEvent.boot","feathers/events/TransitionEvent.hx",61,0x94fa6310)
namespace feathers{
namespace events{

void TransitionEvent_obj::__construct(::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView){
            	HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_110_new)
HXLINE( 111)		super::__construct(type,false,false);
HXLINE( 112)		this->previousViewID = previousViewID;
HXLINE( 113)		this->previousView = previousView;
HXLINE( 114)		this->nextViewID = nextViewID;
HXLINE( 115)		this->nextView = nextView;
            	}

Dynamic TransitionEvent_obj::__CreateEmpty() { return new TransitionEvent_obj; }

void *TransitionEvent_obj::_hx_vtable = 0;

Dynamic TransitionEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransitionEvent_obj > _hx_result = new TransitionEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TransitionEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x7b10e7bc;
	}
}

 ::openfl::events::Event TransitionEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_147_clone)
HXDLIN( 147)		return  ::feathers::events::TransitionEvent_obj::__alloc( HX_CTX ,this->type,this->previousViewID,this->previousView,this->nextViewID,this->nextView);
            	}


::String TransitionEvent_obj::TRANSITION_START;

::String TransitionEvent_obj::TRANSITION_COMPLETE;

::String TransitionEvent_obj::TRANSITION_CANCEL;

 ::lime::utils::ObjectPool TransitionEvent_obj::_pool;

bool TransitionEvent_obj::dispatch(::Dynamic dispatcher,::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView){
            	HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_84_dispatch)
HXLINE(  89)		 ::feathers::events::TransitionEvent event = ::feathers::events::TransitionEvent_obj::_pool->get().StaticCast<  ::feathers::events::TransitionEvent >();
HXLINE(  90)		event->type = type;
HXLINE(  91)		event->bubbles = false;
HXLINE(  92)		event->cancelable = false;
HXLINE(  93)		event->previousViewID = previousViewID;
HXLINE(  94)		event->previousView = previousView;
HXLINE(  95)		event->nextViewID = nextViewID;
HXLINE(  96)		event->nextView = nextView;
HXLINE(  97)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  98)		::feathers::events::TransitionEvent_obj::_pool->release(event);
HXLINE(  99)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TransitionEvent_obj,dispatch,return )


::hx::ObjectPtr< TransitionEvent_obj > TransitionEvent_obj::__new(::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView) {
	::hx::ObjectPtr< TransitionEvent_obj > __this = new TransitionEvent_obj();
	__this->__construct(type,previousViewID,previousView,nextViewID,nextView);
	return __this;
}

::hx::ObjectPtr< TransitionEvent_obj > TransitionEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::String previousViewID, ::openfl::display::DisplayObject previousView,::String nextViewID, ::openfl::display::DisplayObject nextView) {
	TransitionEvent_obj *__this = (TransitionEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransitionEvent_obj), true, "feathers.events.TransitionEvent"));
	*(void **)__this = TransitionEvent_obj::_hx_vtable;
	__this->__construct(type,previousViewID,previousView,nextViewID,nextView);
	return __this;
}

TransitionEvent_obj::TransitionEvent_obj()
{
}

void TransitionEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionEvent);
	HX_MARK_MEMBER_NAME(previousView,"previousView");
	HX_MARK_MEMBER_NAME(previousViewID,"previousViewID");
	HX_MARK_MEMBER_NAME(nextView,"nextView");
	HX_MARK_MEMBER_NAME(nextViewID,"nextViewID");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransitionEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previousView,"previousView");
	HX_VISIT_MEMBER_NAME(previousViewID,"previousViewID");
	HX_VISIT_MEMBER_NAME(nextView,"nextView");
	HX_VISIT_MEMBER_NAME(nextViewID,"nextViewID");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransitionEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextView") ) { return ::hx::Val( nextView ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nextViewID") ) { return ::hx::Val( nextViewID ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousView") ) { return ::hx::Val( previousView ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"previousViewID") ) { return ::hx::Val( previousViewID ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TransitionEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val TransitionEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"nextView") ) { nextView=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nextViewID") ) { nextViewID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousView") ) { previousView=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"previousViewID") ) { previousViewID=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TransitionEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void TransitionEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("previousView",3c,02,f1,f4));
	outFields->push(HX_("previousViewID",17,49,e3,d4));
	outFields->push(HX_("nextView",f8,d8,1b,fa));
	outFields->push(HX_("nextViewID",d3,46,7e,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransitionEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(TransitionEvent_obj,previousView),HX_("previousView",3c,02,f1,f4)},
	{::hx::fsString,(int)offsetof(TransitionEvent_obj,previousViewID),HX_("previousViewID",17,49,e3,d4)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(TransitionEvent_obj,nextView),HX_("nextView",f8,d8,1b,fa)},
	{::hx::fsString,(int)offsetof(TransitionEvent_obj,nextViewID),HX_("nextViewID",d3,46,7e,9b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TransitionEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TransitionEvent_obj::TRANSITION_START,HX_("TRANSITION_START",d8,d2,ce,62)},
	{::hx::fsString,(void *) &TransitionEvent_obj::TRANSITION_COMPLETE,HX_("TRANSITION_COMPLETE",e3,2b,da,6c)},
	{::hx::fsString,(void *) &TransitionEvent_obj::TRANSITION_CANCEL,HX_("TRANSITION_CANCEL",24,36,63,c4)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &TransitionEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TransitionEvent_obj_sMemberFields[] = {
	HX_("previousView",3c,02,f1,f4),
	HX_("previousViewID",17,49,e3,d4),
	HX_("nextView",f8,d8,1b,fa),
	HX_("nextViewID",d3,46,7e,9b),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void TransitionEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransitionEvent_obj::TRANSITION_START,"TRANSITION_START");
	HX_MARK_MEMBER_NAME(TransitionEvent_obj::TRANSITION_COMPLETE,"TRANSITION_COMPLETE");
	HX_MARK_MEMBER_NAME(TransitionEvent_obj::TRANSITION_CANCEL,"TRANSITION_CANCEL");
	HX_MARK_MEMBER_NAME(TransitionEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TransitionEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransitionEvent_obj::TRANSITION_START,"TRANSITION_START");
	HX_VISIT_MEMBER_NAME(TransitionEvent_obj::TRANSITION_COMPLETE,"TRANSITION_COMPLETE");
	HX_VISIT_MEMBER_NAME(TransitionEvent_obj::TRANSITION_CANCEL,"TRANSITION_CANCEL");
	HX_VISIT_MEMBER_NAME(TransitionEvent_obj::_pool,"_pool");
};

#endif

::hx::Class TransitionEvent_obj::__mClass;

static ::String TransitionEvent_obj_sStaticFields[] = {
	HX_("TRANSITION_START",d8,d2,ce,62),
	HX_("TRANSITION_COMPLETE",e3,2b,da,6c),
	HX_("TRANSITION_CANCEL",24,36,63,c4),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void TransitionEvent_obj::__register()
{
	TransitionEvent_obj _hx_dummy;
	TransitionEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.TransitionEvent",8e,66,62,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TransitionEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TransitionEvent_obj::__SetStatic;
	__mClass->mMarkFunc = TransitionEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TransitionEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransitionEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransitionEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TransitionEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TransitionEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_37_boot)
HXDLIN(  37)		TRANSITION_START = HX_("transitionStart",8d,fa,36,c9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_47_boot)
HXDLIN(  47)		TRANSITION_COMPLETE = HX_("transitionComplete",6e,67,80,36);
            	}
{
            	HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_58_boot)
HXDLIN(  58)		TRANSITION_CANCEL = HX_("transitionCancel",ef,cc,1d,f9);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::TransitionEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_61_boot)
HXDLIN(  61)			return  ::feathers::events::TransitionEvent_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::TransitionEvent event){
            			HX_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_61_boot)
HXLINE(  62)			event->previousViewID = null();
HXLINE(  63)			event->previousView = null();
HXLINE(  64)			event->nextViewID = null();
HXLINE(  65)			event->nextView = null();
HXLINE(  66)			event->target = null();
HXLINE(  67)			event->currentTarget = null();
HXLINE(  68)			event->_hx___preventDefault = false;
HXLINE(  69)			event->_hx___isCanceled = false;
HXLINE(  70)			event->_hx___isCanceledNow = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_bfe272aa5bcb0c4a_61_boot)
HXDLIN(  61)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
