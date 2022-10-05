#include <hxcpp.h>

#ifndef INCLUDED_feathers_data_ButtonBarItemState
#include <feathers/data/ButtonBarItemState.h>
#endif
#ifndef INCLUDED_feathers_events_ButtonBarEvent
#include <feathers/events/ButtonBarEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_84fbed5c0fe37b8a_80_new,"feathers.events.ButtonBarEvent","new",0x321ea622,"feathers.events.ButtonBarEvent.new","feathers/events/ButtonBarEvent.hx",80,0x34e61d6e)
HX_LOCAL_STACK_FRAME(_hx_pos_84fbed5c0fe37b8a_93_clone,"feathers.events.ButtonBarEvent","clone",0xa2e05d9f,"feathers.events.ButtonBarEvent.clone","feathers/events/ButtonBarEvent.hx",93,0x34e61d6e)
HX_LOCAL_STACK_FRAME(_hx_pos_84fbed5c0fe37b8a_59_dispatch,"feathers.events.ButtonBarEvent","dispatch",0xc570d9b8,"feathers.events.ButtonBarEvent.dispatch","feathers/events/ButtonBarEvent.hx",59,0x34e61d6e)
HX_LOCAL_STACK_FRAME(_hx_pos_84fbed5c0fe37b8a_37_boot,"feathers.events.ButtonBarEvent","boot",0xa0cbb830,"feathers.events.ButtonBarEvent.boot","feathers/events/ButtonBarEvent.hx",37,0x34e61d6e)
HX_LOCAL_STACK_FRAME(_hx_pos_84fbed5c0fe37b8a_40_boot,"feathers.events.ButtonBarEvent","boot",0xa0cbb830,"feathers.events.ButtonBarEvent.boot","feathers/events/ButtonBarEvent.hx",40,0x34e61d6e)
namespace feathers{
namespace events{

void ButtonBarEvent_obj::__construct(::String type, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_80_new)
HXLINE(  81)		super::__construct(type,false,false);
HXLINE(  82)		this->state = state;
            	}

Dynamic ButtonBarEvent_obj::__CreateEmpty() { return new ButtonBarEvent_obj; }

void *ButtonBarEvent_obj::_hx_vtable = 0;

Dynamic ButtonBarEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonBarEvent_obj > _hx_result = new ButtonBarEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ButtonBarEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x254cce8a;
	}
}

 ::openfl::events::Event ButtonBarEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_93_clone)
HXDLIN(  93)		return  ::feathers::events::ButtonBarEvent_obj::__alloc( HX_CTX ,this->type,this->state);
            	}


::String ButtonBarEvent_obj::ITEM_TRIGGER;

 ::lime::utils::ObjectPool ButtonBarEvent_obj::_pool;

bool ButtonBarEvent_obj::dispatch(::Dynamic dispatcher,::String type, ::feathers::data::ButtonBarItemState state){
            	HX_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_59_dispatch)
HXLINE(  64)		 ::feathers::events::ButtonBarEvent event = ::feathers::events::ButtonBarEvent_obj::_pool->get().StaticCast<  ::feathers::events::ButtonBarEvent >();
HXLINE(  65)		event->type = type;
HXLINE(  66)		event->state = state;
HXLINE(  67)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  68)		::feathers::events::ButtonBarEvent_obj::_pool->release(event);
HXLINE(  69)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ButtonBarEvent_obj,dispatch,return )


::hx::ObjectPtr< ButtonBarEvent_obj > ButtonBarEvent_obj::__new(::String type, ::feathers::data::ButtonBarItemState state) {
	::hx::ObjectPtr< ButtonBarEvent_obj > __this = new ButtonBarEvent_obj();
	__this->__construct(type,state);
	return __this;
}

::hx::ObjectPtr< ButtonBarEvent_obj > ButtonBarEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::feathers::data::ButtonBarItemState state) {
	ButtonBarEvent_obj *__this = (ButtonBarEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonBarEvent_obj), true, "feathers.events.ButtonBarEvent"));
	*(void **)__this = ButtonBarEvent_obj::_hx_vtable;
	__this->__construct(type,state);
	return __this;
}

ButtonBarEvent_obj::ButtonBarEvent_obj()
{
}

void ButtonBarEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonBarEvent);
	HX_MARK_MEMBER_NAME(state,"state");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonBarEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonBarEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ButtonBarEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val ButtonBarEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::feathers::data::ButtonBarItemState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ButtonBarEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void ButtonBarEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonBarEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::data::ButtonBarItemState */ ,(int)offsetof(ButtonBarEvent_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ButtonBarEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ButtonBarEvent_obj::ITEM_TRIGGER,HX_("ITEM_TRIGGER",ac,da,ab,2e)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &ButtonBarEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ButtonBarEvent_obj_sMemberFields[] = {
	HX_("state",11,76,0b,84),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ButtonBarEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonBarEvent_obj::ITEM_TRIGGER,"ITEM_TRIGGER");
	HX_MARK_MEMBER_NAME(ButtonBarEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonBarEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonBarEvent_obj::ITEM_TRIGGER,"ITEM_TRIGGER");
	HX_VISIT_MEMBER_NAME(ButtonBarEvent_obj::_pool,"_pool");
};

#endif

::hx::Class ButtonBarEvent_obj::__mClass;

static ::String ButtonBarEvent_obj_sStaticFields[] = {
	HX_("ITEM_TRIGGER",ac,da,ab,2e),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void ButtonBarEvent_obj::__register()
{
	ButtonBarEvent_obj _hx_dummy;
	ButtonBarEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.ButtonBarEvent",30,ad,cc,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ButtonBarEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ButtonBarEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ButtonBarEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ButtonBarEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonBarEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonBarEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonBarEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonBarEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonBarEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ButtonBarEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_37_boot)
HXDLIN(  37)		ITEM_TRIGGER = HX_("itemTrigger",65,d0,e1,83);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::ButtonBarEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_40_boot)
HXDLIN(  40)			return  ::feathers::events::ButtonBarEvent_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::ButtonBarEvent event){
            			HX_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_40_boot)
HXLINE(  41)			event->target = null();
HXLINE(  42)			event->currentTarget = null();
HXLINE(  43)			event->_hx___preventDefault = false;
HXLINE(  44)			event->_hx___isCanceled = false;
HXLINE(  45)			event->_hx___isCanceledNow = false;
HXLINE(  46)			event->state = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_84fbed5c0fe37b8a_40_boot)
HXDLIN(  40)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
