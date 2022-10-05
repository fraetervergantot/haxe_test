#include <hxcpp.h>

#ifndef INCLUDED_feathers_data_TabBarItemState
#include <feathers/data/TabBarItemState.h>
#endif
#ifndef INCLUDED_feathers_events_TabBarEvent
#include <feathers/events/TabBarEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_71a34e5a7d915ee3_80_new,"feathers.events.TabBarEvent","new",0x2c5fc3f7,"feathers.events.TabBarEvent.new","feathers/events/TabBarEvent.hx",80,0xd7311179)
HX_LOCAL_STACK_FRAME(_hx_pos_71a34e5a7d915ee3_93_clone,"feathers.events.TabBarEvent","clone",0x86045ab4,"feathers.events.TabBarEvent.clone","feathers/events/TabBarEvent.hx",93,0xd7311179)
HX_LOCAL_STACK_FRAME(_hx_pos_71a34e5a7d915ee3_59_dispatch,"feathers.events.TabBarEvent","dispatch",0x830a77c3,"feathers.events.TabBarEvent.dispatch","feathers/events/TabBarEvent.hx",59,0xd7311179)
HX_LOCAL_STACK_FRAME(_hx_pos_71a34e5a7d915ee3_37_boot,"feathers.events.TabBarEvent","boot",0x9f84b4bb,"feathers.events.TabBarEvent.boot","feathers/events/TabBarEvent.hx",37,0xd7311179)
HX_LOCAL_STACK_FRAME(_hx_pos_71a34e5a7d915ee3_40_boot,"feathers.events.TabBarEvent","boot",0x9f84b4bb,"feathers.events.TabBarEvent.boot","feathers/events/TabBarEvent.hx",40,0xd7311179)
namespace feathers{
namespace events{

void TabBarEvent_obj::__construct(::String type, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_80_new)
HXLINE(  81)		super::__construct(type,false,false);
HXLINE(  82)		this->state = state;
            	}

Dynamic TabBarEvent_obj::__CreateEmpty() { return new TabBarEvent_obj; }

void *TabBarEvent_obj::_hx_vtable = 0;

Dynamic TabBarEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBarEvent_obj > _hx_result = new TabBarEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TabBarEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x7efad233;
	}
}

 ::openfl::events::Event TabBarEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_93_clone)
HXDLIN(  93)		return  ::feathers::events::TabBarEvent_obj::__alloc( HX_CTX ,this->type,this->state);
            	}


::String TabBarEvent_obj::ITEM_TRIGGER;

 ::lime::utils::ObjectPool TabBarEvent_obj::_pool;

bool TabBarEvent_obj::dispatch(::Dynamic dispatcher,::String type, ::feathers::data::TabBarItemState state){
            	HX_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_59_dispatch)
HXLINE(  64)		 ::feathers::events::TabBarEvent event = ::feathers::events::TabBarEvent_obj::_pool->get().StaticCast<  ::feathers::events::TabBarEvent >();
HXLINE(  65)		event->type = type;
HXLINE(  66)		event->state = state;
HXLINE(  67)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  68)		::feathers::events::TabBarEvent_obj::_pool->release(event);
HXLINE(  69)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TabBarEvent_obj,dispatch,return )


::hx::ObjectPtr< TabBarEvent_obj > TabBarEvent_obj::__new(::String type, ::feathers::data::TabBarItemState state) {
	::hx::ObjectPtr< TabBarEvent_obj > __this = new TabBarEvent_obj();
	__this->__construct(type,state);
	return __this;
}

::hx::ObjectPtr< TabBarEvent_obj > TabBarEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::feathers::data::TabBarItemState state) {
	TabBarEvent_obj *__this = (TabBarEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBarEvent_obj), true, "feathers.events.TabBarEvent"));
	*(void **)__this = TabBarEvent_obj::_hx_vtable;
	__this->__construct(type,state);
	return __this;
}

TabBarEvent_obj::TabBarEvent_obj()
{
}

void TabBarEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBarEvent);
	HX_MARK_MEMBER_NAME(state,"state");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabBarEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TabBarEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TabBarEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val TabBarEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast<  ::feathers::data::TabBarItemState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TabBarEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void TabBarEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("state",11,76,0b,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabBarEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::feathers::data::TabBarItemState */ ,(int)offsetof(TabBarEvent_obj,state),HX_("state",11,76,0b,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TabBarEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TabBarEvent_obj::ITEM_TRIGGER,HX_("ITEM_TRIGGER",ac,da,ab,2e)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &TabBarEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TabBarEvent_obj_sMemberFields[] = {
	HX_("state",11,76,0b,84),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void TabBarEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBarEvent_obj::ITEM_TRIGGER,"ITEM_TRIGGER");
	HX_MARK_MEMBER_NAME(TabBarEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TabBarEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBarEvent_obj::ITEM_TRIGGER,"ITEM_TRIGGER");
	HX_VISIT_MEMBER_NAME(TabBarEvent_obj::_pool,"_pool");
};

#endif

::hx::Class TabBarEvent_obj::__mClass;

static ::String TabBarEvent_obj_sStaticFields[] = {
	HX_("ITEM_TRIGGER",ac,da,ab,2e),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void TabBarEvent_obj::__register()
{
	TabBarEvent_obj _hx_dummy;
	TabBarEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.TabBarEvent",85,fc,2a,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TabBarEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TabBarEvent_obj::__SetStatic;
	__mClass->mMarkFunc = TabBarEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TabBarEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBarEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBarEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TabBarEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBarEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBarEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TabBarEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_37_boot)
HXDLIN(  37)		ITEM_TRIGGER = HX_("itemTrigger",65,d0,e1,83);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::TabBarEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_40_boot)
HXDLIN(  40)			return  ::feathers::events::TabBarEvent_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::TabBarEvent event){
            			HX_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_40_boot)
HXLINE(  41)			event->target = null();
HXLINE(  42)			event->currentTarget = null();
HXLINE(  43)			event->_hx___preventDefault = false;
HXLINE(  44)			event->_hx___isCanceled = false;
HXLINE(  45)			event->_hx___isCanceledNow = false;
HXLINE(  46)			event->state = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_71a34e5a7d915ee3_40_boot)
HXDLIN(  40)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
