#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FlatCollectionEvent
#include <feathers/events/FlatCollectionEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_29a3de50fae932e6_168_new,"feathers.events.FlatCollectionEvent","new",0x281c20de,"feathers.events.FlatCollectionEvent.new","feathers/events/FlatCollectionEvent.hx",168,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_200_clone,"feathers.events.FlatCollectionEvent","clone",0x2f3eff5b,"feathers.events.FlatCollectionEvent.clone","feathers/events/FlatCollectionEvent.hx",200,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_143_dispatch,"feathers.events.FlatCollectionEvent","dispatch",0xaf70f57c,"feathers.events.FlatCollectionEvent.dispatch","feathers/events/FlatCollectionEvent.hx",143,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_39_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",39,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_50_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",50,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_60_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",60,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_70_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",70,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_80_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",80,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_88_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",88,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_99_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",99,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_109_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",109,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_119_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",119,0xd1792e72)
HX_LOCAL_STACK_FRAME(_hx_pos_29a3de50fae932e6_122_boot,"feathers.events.FlatCollectionEvent","boot",0xe899a1f4,"feathers.events.FlatCollectionEvent.boot","feathers/events/FlatCollectionEvent.hx",122,0xd1792e72)
namespace feathers{
namespace events{

void FlatCollectionEvent_obj::__construct(::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_168_new)
HXLINE( 169)		super::__construct(type,bubbles,cancelable);
HXLINE( 170)		this->index = index;
HXLINE( 171)		this->addedItem = addedItem;
HXLINE( 172)		this->removedItem = removedItem;
            	}

Dynamic FlatCollectionEvent_obj::__CreateEmpty() { return new FlatCollectionEvent_obj; }

void *FlatCollectionEvent_obj::_hx_vtable = 0;

Dynamic FlatCollectionEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlatCollectionEvent_obj > _hx_result = new FlatCollectionEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlatCollectionEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0455d252) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0455d252;
	} else {
		return inClassId==(int)0x08ec4c31;
	}
}

 ::openfl::events::Event FlatCollectionEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_29a3de50fae932e6_200_clone)
HXDLIN( 200)		return  ::feathers::events::FlatCollectionEvent_obj::__alloc( HX_CTX ,this->type,this->index,this->addedItem,this->removedItem,this->bubbles,this->cancelable);
            	}


::String FlatCollectionEvent_obj::ADD_ITEM;

::String FlatCollectionEvent_obj::REMOVE_ITEM;

::String FlatCollectionEvent_obj::REPLACE_ITEM;

::String FlatCollectionEvent_obj::UPDATE_ITEM;

::String FlatCollectionEvent_obj::UPDATE_ALL;

::String FlatCollectionEvent_obj::RESET;

::String FlatCollectionEvent_obj::REMOVE_ALL;

::String FlatCollectionEvent_obj::FILTER_CHANGE;

::String FlatCollectionEvent_obj::SORT_CHANGE;

 ::lime::utils::ObjectPool FlatCollectionEvent_obj::_pool;

bool FlatCollectionEvent_obj::dispatch(::Dynamic dispatcher,::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_143_dispatch)
HXLINE( 148)		 ::feathers::events::FlatCollectionEvent event = ::feathers::events::FlatCollectionEvent_obj::_pool->get().StaticCast<  ::feathers::events::FlatCollectionEvent >();
HXLINE( 149)		event->type = type;
HXLINE( 150)		event->index = index;
HXLINE( 151)		event->addedItem = addedItem;
HXLINE( 152)		event->removedItem = removedItem;
HXLINE( 153)		event->bubbles = bubbles;
HXLINE( 154)		event->cancelable = cancelable;
HXLINE( 155)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE( 156)		::feathers::events::FlatCollectionEvent_obj::_pool->release(event);
HXLINE( 157)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlatCollectionEvent_obj,dispatch,return )


::hx::ObjectPtr< FlatCollectionEvent_obj > FlatCollectionEvent_obj::__new(::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< FlatCollectionEvent_obj > __this = new FlatCollectionEvent_obj();
	__this->__construct(type,index,addedItem,removedItem,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< FlatCollectionEvent_obj > FlatCollectionEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,int index, ::Dynamic addedItem, ::Dynamic removedItem,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	FlatCollectionEvent_obj *__this = (FlatCollectionEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlatCollectionEvent_obj), true, "feathers.events.FlatCollectionEvent"));
	*(void **)__this = FlatCollectionEvent_obj::_hx_vtable;
	__this->__construct(type,index,addedItem,removedItem,__o_bubbles,__o_cancelable);
	return __this;
}

FlatCollectionEvent_obj::FlatCollectionEvent_obj()
{
}

void FlatCollectionEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlatCollectionEvent);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(addedItem,"addedItem");
	HX_MARK_MEMBER_NAME(removedItem,"removedItem");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlatCollectionEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(addedItem,"addedItem");
	HX_VISIT_MEMBER_NAME(removedItem,"removedItem");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlatCollectionEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addedItem") ) { return ::hx::Val( addedItem ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removedItem") ) { return ::hx::Val( removedItem ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlatCollectionEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val FlatCollectionEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addedItem") ) { addedItem=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removedItem") ) { removedItem=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlatCollectionEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void FlatCollectionEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("addedItem",f3,25,46,aa));
	outFields->push(HX_("removedItem",d3,60,b1,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlatCollectionEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlatCollectionEvent_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlatCollectionEvent_obj,addedItem),HX_("addedItem",f3,25,46,aa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlatCollectionEvent_obj,removedItem),HX_("removedItem",d3,60,b1,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlatCollectionEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::ADD_ITEM,HX_("ADD_ITEM",51,b7,58,a5)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::REMOVE_ITEM,HX_("REMOVE_ITEM",2e,ea,e5,a6)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::REPLACE_ITEM,HX_("REPLACE_ITEM",5e,44,53,64)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::UPDATE_ITEM,HX_("UPDATE_ITEM",49,76,4a,8e)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::UPDATE_ALL,HX_("UPDATE_ALL",8b,44,21,14)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::RESET,HX_("RESET",af,81,b6,64)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::REMOVE_ALL,HX_("REMOVE_ALL",46,94,8b,d8)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::FILTER_CHANGE,HX_("FILTER_CHANGE",57,ea,55,32)},
	{::hx::fsString,(void *) &FlatCollectionEvent_obj::SORT_CHANGE,HX_("SORT_CHANGE",71,27,65,4d)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &FlatCollectionEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlatCollectionEvent_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("addedItem",f3,25,46,aa),
	HX_("removedItem",d3,60,b1,2f),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void FlatCollectionEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::ADD_ITEM,"ADD_ITEM");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::REMOVE_ITEM,"REMOVE_ITEM");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::REPLACE_ITEM,"REPLACE_ITEM");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::UPDATE_ITEM,"UPDATE_ITEM");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::UPDATE_ALL,"UPDATE_ALL");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::RESET,"RESET");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::REMOVE_ALL,"REMOVE_ALL");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::FILTER_CHANGE,"FILTER_CHANGE");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::SORT_CHANGE,"SORT_CHANGE");
	HX_MARK_MEMBER_NAME(FlatCollectionEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlatCollectionEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::ADD_ITEM,"ADD_ITEM");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::REMOVE_ITEM,"REMOVE_ITEM");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::REPLACE_ITEM,"REPLACE_ITEM");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::UPDATE_ITEM,"UPDATE_ITEM");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::UPDATE_ALL,"UPDATE_ALL");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::RESET,"RESET");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::REMOVE_ALL,"REMOVE_ALL");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::FILTER_CHANGE,"FILTER_CHANGE");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::SORT_CHANGE,"SORT_CHANGE");
	HX_VISIT_MEMBER_NAME(FlatCollectionEvent_obj::_pool,"_pool");
};

#endif

::hx::Class FlatCollectionEvent_obj::__mClass;

static ::String FlatCollectionEvent_obj_sStaticFields[] = {
	HX_("ADD_ITEM",51,b7,58,a5),
	HX_("REMOVE_ITEM",2e,ea,e5,a6),
	HX_("REPLACE_ITEM",5e,44,53,64),
	HX_("UPDATE_ITEM",49,76,4a,8e),
	HX_("UPDATE_ALL",8b,44,21,14),
	HX_("RESET",af,81,b6,64),
	HX_("REMOVE_ALL",46,94,8b,d8),
	HX_("FILTER_CHANGE",57,ea,55,32),
	HX_("SORT_CHANGE",71,27,65,4d),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void FlatCollectionEvent_obj::__register()
{
	FlatCollectionEvent_obj _hx_dummy;
	FlatCollectionEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.FlatCollectionEvent",ec,19,cf,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlatCollectionEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &FlatCollectionEvent_obj::__SetStatic;
	__mClass->mMarkFunc = FlatCollectionEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlatCollectionEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlatCollectionEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlatCollectionEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlatCollectionEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlatCollectionEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlatCollectionEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlatCollectionEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_39_boot)
HXDLIN(  39)		ADD_ITEM = HX_("addItem",d4,07,fd,81);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_50_boot)
HXDLIN(  50)		REMOVE_ITEM = HX_("removeItem",77,ff,de,c2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_60_boot)
HXDLIN(  60)		REPLACE_ITEM = HX_("replaceItem",67,63,5b,5a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_70_boot)
HXDLIN(  70)		UPDATE_ITEM = HX_("updateItem",bc,af,74,fe);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_80_boot)
HXDLIN(  80)		UPDATE_ALL = HX_("updateAll",98,d6,d6,82);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_88_boot)
HXDLIN(  88)		RESET = HX_("reset",cf,49,c8,e6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_99_boot)
HXDLIN(  99)		REMOVE_ALL = HX_("removeAll",3d,17,e5,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_109_boot)
HXDLIN( 109)		FILTER_CHANGE = HX_("filterChange",48,bf,ca,c3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_119_boot)
HXDLIN( 119)		SORT_CHANGE = HX_("sortChange",6e,07,58,14);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::FlatCollectionEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_29a3de50fae932e6_122_boot)
HXDLIN( 122)			return  ::feathers::events::FlatCollectionEvent_obj::__alloc( HX_CTX ,null(),-1,false,false,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::FlatCollectionEvent event){
            			HX_STACKFRAME(&_hx_pos_29a3de50fae932e6_122_boot)
HXLINE( 123)			event->target = null();
HXLINE( 124)			event->currentTarget = null();
HXLINE( 125)			event->_hx___preventDefault = false;
HXLINE( 126)			event->_hx___isCanceled = false;
HXLINE( 127)			event->_hx___isCanceledNow = false;
HXLINE( 128)			event->addedItem = null();
HXLINE( 129)			event->removedItem = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_29a3de50fae932e6_122_boot)
HXDLIN( 122)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
