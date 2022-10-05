#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_StyleProviderEvent
#include <feathers/events/StyleProviderEvent.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cca41e8d551f369a_73_new,"feathers.events.StyleProviderEvent","new",0x6d45e501,"feathers.events.StyleProviderEvent.new","feathers/events/StyleProviderEvent.hx",73,0x3bfb0f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cca41e8d551f369a_86_clone,"feathers.events.StyleProviderEvent","clone",0x657c523e,"feathers.events.StyleProviderEvent.clone","feathers/events/StyleProviderEvent.hx",86,0x3bfb0f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cca41e8d551f369a_59_dispatch,"feathers.events.StyleProviderEvent","dispatch",0x06de5279,"feathers.events.StyleProviderEvent.dispatch","feathers/events/StyleProviderEvent.hx",59,0x3bfb0f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cca41e8d551f369a_90_defaultAffectsTarget,"feathers.events.StyleProviderEvent","defaultAffectsTarget",0x51b44c6d,"feathers.events.StyleProviderEvent.defaultAffectsTarget","feathers/events/StyleProviderEvent.hx",90,0x3bfb0f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cca41e8d551f369a_37_boot,"feathers.events.StyleProviderEvent","boot",0x27fb7c71,"feathers.events.StyleProviderEvent.boot","feathers/events/StyleProviderEvent.hx",37,0x3bfb0f6f)
HX_LOCAL_STACK_FRAME(_hx_pos_cca41e8d551f369a_40_boot,"feathers.events.StyleProviderEvent","boot",0x27fb7c71,"feathers.events.StyleProviderEvent.boot","feathers/events/StyleProviderEvent.hx",40,0x3bfb0f6f)
namespace feathers{
namespace events{

void StyleProviderEvent_obj::__construct(::String type, ::Dynamic affectsTarget){
            	HX_STACKFRAME(&_hx_pos_cca41e8d551f369a_73_new)
HXLINE(  74)		super::__construct(type,null(),null());
HXLINE(  75)		 ::Dynamic _hx_tmp;
HXDLIN(  75)		if (::hx::IsNotNull( affectsTarget )) {
HXLINE(  75)			_hx_tmp = affectsTarget;
            		}
            		else {
HXLINE(  75)			_hx_tmp = ::feathers::events::StyleProviderEvent_obj::defaultAffectsTarget_dyn();
            		}
HXDLIN(  75)		this->affectsTarget = _hx_tmp;
            	}

Dynamic StyleProviderEvent_obj::__CreateEmpty() { return new StyleProviderEvent_obj; }

void *StyleProviderEvent_obj::_hx_vtable = 0;

Dynamic StyleProviderEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleProviderEvent_obj > _hx_result = new StyleProviderEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StyleProviderEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x64554021;
	}
}

 ::openfl::events::Event StyleProviderEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cca41e8d551f369a_86_clone)
HXDLIN(  86)		return  ::feathers::events::StyleProviderEvent_obj::__alloc( HX_CTX ,this->type,this->affectsTarget);
            	}


::String StyleProviderEvent_obj::STYLES_CHANGE;

 ::lime::utils::ObjectPool StyleProviderEvent_obj::_pool;

bool StyleProviderEvent_obj::dispatch(::Dynamic dispatcher,::String type, ::Dynamic affectsTarget){
            	HX_STACKFRAME(&_hx_pos_cca41e8d551f369a_59_dispatch)
HXLINE(  64)		 ::feathers::events::StyleProviderEvent event = ::feathers::events::StyleProviderEvent_obj::_pool->get().StaticCast<  ::feathers::events::StyleProviderEvent >();
HXLINE(  65)		event->type = type;
HXLINE(  66)		 ::Dynamic _hx_tmp;
HXDLIN(  66)		if (::hx::IsNotNull( affectsTarget )) {
HXLINE(  66)			_hx_tmp = affectsTarget;
            		}
            		else {
HXLINE(  66)			_hx_tmp = ::feathers::events::StyleProviderEvent_obj::defaultAffectsTarget_dyn();
            		}
HXDLIN(  66)		event->affectsTarget = _hx_tmp;
HXLINE(  67)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE(  68)		::feathers::events::StyleProviderEvent_obj::_pool->release(event);
HXLINE(  69)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StyleProviderEvent_obj,dispatch,return )

bool StyleProviderEvent_obj::defaultAffectsTarget(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_cca41e8d551f369a_90_defaultAffectsTarget)
HXDLIN(  90)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleProviderEvent_obj,defaultAffectsTarget,return )


::hx::ObjectPtr< StyleProviderEvent_obj > StyleProviderEvent_obj::__new(::String type, ::Dynamic affectsTarget) {
	::hx::ObjectPtr< StyleProviderEvent_obj > __this = new StyleProviderEvent_obj();
	__this->__construct(type,affectsTarget);
	return __this;
}

::hx::ObjectPtr< StyleProviderEvent_obj > StyleProviderEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic affectsTarget) {
	StyleProviderEvent_obj *__this = (StyleProviderEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleProviderEvent_obj), true, "feathers.events.StyleProviderEvent"));
	*(void **)__this = StyleProviderEvent_obj::_hx_vtable;
	__this->__construct(type,affectsTarget);
	return __this;
}

StyleProviderEvent_obj::StyleProviderEvent_obj()
{
}

void StyleProviderEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleProviderEvent);
	HX_MARK_MEMBER_NAME(affectsTarget,"affectsTarget");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleProviderEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(affectsTarget,"affectsTarget");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StyleProviderEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"affectsTarget") ) { return ::hx::Val( affectsTarget ); }
	}
	return super::__Field(inName,inCallProp);
}

bool StyleProviderEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { outValue = dispatch_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"defaultAffectsTarget") ) { outValue = defaultAffectsTarget_dyn(); return true; }
	}
	return false;
}

::hx::Val StyleProviderEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"affectsTarget") ) { affectsTarget=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleProviderEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StyleProviderEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StyleProviderEvent_obj,affectsTarget),HX_("affectsTarget",af,53,12,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StyleProviderEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &StyleProviderEvent_obj::STYLES_CHANGE,HX_("STYLES_CHANGE",2d,25,80,52)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &StyleProviderEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StyleProviderEvent_obj_sMemberFields[] = {
	HX_("affectsTarget",af,53,12,be),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void StyleProviderEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleProviderEvent_obj::STYLES_CHANGE,"STYLES_CHANGE");
	HX_MARK_MEMBER_NAME(StyleProviderEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StyleProviderEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleProviderEvent_obj::STYLES_CHANGE,"STYLES_CHANGE");
	HX_VISIT_MEMBER_NAME(StyleProviderEvent_obj::_pool,"_pool");
};

#endif

::hx::Class StyleProviderEvent_obj::__mClass;

static ::String StyleProviderEvent_obj_sStaticFields[] = {
	HX_("STYLES_CHANGE",2d,25,80,52),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	HX_("defaultAffectsTarget",2e,a6,63,0f),
	::String(null())
};

void StyleProviderEvent_obj::__register()
{
	StyleProviderEvent_obj _hx_dummy;
	StyleProviderEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.StyleProviderEvent",8f,50,55,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleProviderEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &StyleProviderEvent_obj::__SetStatic;
	__mClass->mMarkFunc = StyleProviderEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StyleProviderEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleProviderEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleProviderEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StyleProviderEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleProviderEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleProviderEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StyleProviderEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cca41e8d551f369a_37_boot)
HXDLIN(  37)		STYLES_CHANGE = HX_("stylesChange",32,31,e4,f9);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::StyleProviderEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_cca41e8d551f369a_40_boot)
HXDLIN(  40)			return  ::feathers::events::StyleProviderEvent_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::StyleProviderEvent event){
            			HX_STACKFRAME(&_hx_pos_cca41e8d551f369a_40_boot)
HXLINE(  41)			event->target = null();
HXLINE(  42)			event->currentTarget = null();
HXLINE(  43)			event->_hx___preventDefault = false;
HXLINE(  44)			event->_hx___isCanceled = false;
HXLINE(  45)			event->_hx___isCanceledNow = false;
HXLINE(  46)			event->affectsTarget = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_cca41e8d551f369a_40_boot)
HXDLIN(  40)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
