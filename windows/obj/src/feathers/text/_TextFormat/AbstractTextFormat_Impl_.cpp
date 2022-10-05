#include <hxcpp.h>

#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_text__TextFormat_AbstractTextFormat_Impl_
#include <feathers/text/_TextFormat/AbstractTextFormat_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_20002029157e0b08_445_fromSimpleTextFormat,"feathers.text._TextFormat.AbstractTextFormat_Impl_","fromSimpleTextFormat",0x75dab11a,"feathers.text._TextFormat.AbstractTextFormat_Impl_.fromSimpleTextFormat","feathers/text/TextFormat.hx",445,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_20002029157e0b08_462_toSimpleTextFormat,"feathers.text._TextFormat.AbstractTextFormat_Impl_","toSimpleTextFormat",0xba6950ab,"feathers.text._TextFormat.AbstractTextFormat_Impl_.toSimpleTextFormat","feathers/text/TextFormat.hx",462,0x45997e37)
namespace feathers{
namespace text{
namespace _TextFormat{

void AbstractTextFormat_Impl__obj::__construct() { }

Dynamic AbstractTextFormat_Impl__obj::__CreateEmpty() { return new AbstractTextFormat_Impl__obj; }

void *AbstractTextFormat_Impl__obj::_hx_vtable = 0;

Dynamic AbstractTextFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AbstractTextFormat_Impl__obj > _hx_result = new AbstractTextFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbstractTextFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x035743cc;
}

 ::feathers::text::TextFormat AbstractTextFormat_Impl__obj::fromSimpleTextFormat( ::openfl::text::TextFormat textFormat){
            	HX_GC_STACKFRAME(&_hx_pos_20002029157e0b08_445_fromSimpleTextFormat)
HXLINE( 446)		 ::feathers::text::TextFormat clone =  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,textFormat->font,textFormat->size,textFormat->color,textFormat->bold,textFormat->italic,textFormat->underline,textFormat->url,textFormat->target,textFormat->align,textFormat->leftMargin,textFormat->rightMargin,textFormat->indent,textFormat->leading);
HXLINE( 448)		clone->set_blockIndent(textFormat->blockIndent);
HXLINE( 449)		clone->set_bullet(textFormat->bullet);
HXLINE( 450)		clone->set_kerning(textFormat->kerning);
HXLINE( 451)		clone->set_letterSpacing(textFormat->letterSpacing);
HXLINE( 452)		clone->set_tabStops(textFormat->tabStops);
HXLINE( 453)		return clone;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractTextFormat_Impl__obj,fromSimpleTextFormat,return )

 ::openfl::text::TextFormat AbstractTextFormat_Impl__obj::toSimpleTextFormat( ::feathers::text::TextFormat this1){
            	HX_STACKFRAME(&_hx_pos_20002029157e0b08_462_toSimpleTextFormat)
HXDLIN( 462)		return this1->toSimpleTextFormat();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AbstractTextFormat_Impl__obj,toSimpleTextFormat,return )


AbstractTextFormat_Impl__obj::AbstractTextFormat_Impl__obj()
{
}

bool AbstractTextFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"toSimpleTextFormat") ) { outValue = toSimpleTextFormat_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromSimpleTextFormat") ) { outValue = fromSimpleTextFormat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AbstractTextFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AbstractTextFormat_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AbstractTextFormat_Impl__obj::__mClass;

static ::String AbstractTextFormat_Impl__obj_sStaticFields[] = {
	HX_("fromSimpleTextFormat",20,80,99,9e),
	HX_("toSimpleTextFormat",31,32,88,f4),
	::String(null())
};

void AbstractTextFormat_Impl__obj::__register()
{
	AbstractTextFormat_Impl__obj _hx_dummy;
	AbstractTextFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.text._TextFormat.AbstractTextFormat_Impl_",b4,65,8f,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AbstractTextFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AbstractTextFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AbstractTextFormat_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractTextFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractTextFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace text
} // end namespace _TextFormat
