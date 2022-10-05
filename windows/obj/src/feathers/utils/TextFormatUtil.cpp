#include <hxcpp.h>

#ifndef INCLUDED_feathers_utils_TextFormatUtil
#include <feathers/utils/TextFormatUtil.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a958ba7c08c61f47_24_clone,"feathers.utils.TextFormatUtil","clone",0xfed79f10,"feathers.utils.TextFormatUtil.clone","feathers/utils/TextFormatUtil.hx",24,0x4c86a07b)
namespace feathers{
namespace utils{

void TextFormatUtil_obj::__construct() { }

Dynamic TextFormatUtil_obj::__CreateEmpty() { return new TextFormatUtil_obj; }

void *TextFormatUtil_obj::_hx_vtable = 0;

Dynamic TextFormatUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFormatUtil_obj > _hx_result = new TextFormatUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFormatUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x174d3c87;
}

 ::openfl::text::TextFormat TextFormatUtil_obj::clone( ::openfl::text::TextFormat original){
            	HX_GC_STACKFRAME(&_hx_pos_a958ba7c08c61f47_24_clone)
HXLINE(  25)		 ::openfl::text::TextFormat clone =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,original->font,original->size,original->color,original->bold,original->italic,original->underline,original->url,original->target,original->align,original->leftMargin,original->rightMargin,original->indent,original->leading);
HXLINE(  27)		clone->blockIndent = original->blockIndent;
HXLINE(  28)		clone->bullet = original->bullet;
HXLINE(  29)		clone->kerning = original->kerning;
HXLINE(  30)		clone->letterSpacing = original->letterSpacing;
HXLINE(  31)		clone->tabStops = original->tabStops;
HXLINE(  32)		return clone;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFormatUtil_obj,clone,return )


TextFormatUtil_obj::TextFormatUtil_obj()
{
}

bool TextFormatUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextFormatUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextFormatUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TextFormatUtil_obj::__mClass;

static ::String TextFormatUtil_obj_sStaticFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null())
};

void TextFormatUtil_obj::__register()
{
	TextFormatUtil_obj _hx_dummy;
	TextFormatUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.utils.TextFormatUtil",e1,53,2c,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFormatUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextFormatUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TextFormatUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormatUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormatUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace utils
