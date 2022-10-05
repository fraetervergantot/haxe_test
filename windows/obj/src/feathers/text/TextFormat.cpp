#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_utils_TextFormatUtil
#include <feathers/utils/TextFormatUtil.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_36_new,"feathers.text.TextFormat","new",0xa5592af9,"feathers.text.TextFormat.new","feathers/text/TextFormat.hx",36,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_50_get_font,"feathers.text.TextFormat","get_font",0x1769b41f,"feathers.text.TextFormat.get_font","feathers/text/TextFormat.hx",50,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_53_set_font,"feathers.text.TextFormat","set_font",0xc5c70d93,"feathers.text.TextFormat.set_font","feathers/text/TextFormat.hx",53,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_70_get_size,"feathers.text.TextFormat","get_size",0x1ffcf711,"feathers.text.TextFormat.get_size","feathers/text/TextFormat.hx",70,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_73_set_size,"feathers.text.TextFormat","set_size",0xce5a5085,"feathers.text.TextFormat.set_size","feathers/text/TextFormat.hx",73,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_90_get_color,"feathers.text.TextFormat","get_color",0xaadea113,"feathers.text.TextFormat.get_color","feathers/text/TextFormat.hx",90,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_93_set_color,"feathers.text.TextFormat","set_color",0x8e2f8d1f,"feathers.text.TextFormat.set_color","feathers/text/TextFormat.hx",93,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_110_get_bold,"feathers.text.TextFormat","get_bold",0x14c4d7d5,"feathers.text.TextFormat.get_bold","feathers/text/TextFormat.hx",110,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_113_set_bold,"feathers.text.TextFormat","set_bold",0xc3223149,"feathers.text.TextFormat.set_bold","feathers/text/TextFormat.hx",113,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_130_get_italic,"feathers.text.TextFormat","get_italic",0x17cbb940,"feathers.text.TextFormat.get_italic","feathers/text/TextFormat.hx",130,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_133_set_italic,"feathers.text.TextFormat","set_italic",0x1b4957b4,"feathers.text.TextFormat.set_italic","feathers/text/TextFormat.hx",133,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_150_get_underline,"feathers.text.TextFormat","get_underline",0x7d1cdcbc,"feathers.text.TextFormat.get_underline","feathers/text/TextFormat.hx",150,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_153_set_underline,"feathers.text.TextFormat","set_underline",0xc222bec8,"feathers.text.TextFormat.set_underline","feathers/text/TextFormat.hx",153,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_170_get_url,"feathers.text.TextFormat","get_url",0x5ad70f1f,"feathers.text.TextFormat.get_url","feathers/text/TextFormat.hx",170,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_173_set_url,"feathers.text.TextFormat","set_url",0x4dd8a02b,"feathers.text.TextFormat.set_url","feathers/text/TextFormat.hx",173,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_190_get_target,"feathers.text.TextFormat","get_target",0x98547da1,"feathers.text.TextFormat.get_target","feathers/text/TextFormat.hx",190,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_193_set_target,"feathers.text.TextFormat","set_target",0x9bd21c15,"feathers.text.TextFormat.set_target","feathers/text/TextFormat.hx",193,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_210_get_align,"feathers.text.TextFormat","get_align",0x82138675,"feathers.text.TextFormat.get_align","feathers/text/TextFormat.hx",210,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_213_set_align,"feathers.text.TextFormat","set_align",0x65647281,"feathers.text.TextFormat.set_align","feathers/text/TextFormat.hx",213,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_230_get_leftMargin,"feathers.text.TextFormat","get_leftMargin",0x96811de5,"feathers.text.TextFormat.get_leftMargin","feathers/text/TextFormat.hx",230,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_233_set_leftMargin,"feathers.text.TextFormat","set_leftMargin",0xb6a10659,"feathers.text.TextFormat.set_leftMargin","feathers/text/TextFormat.hx",233,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_250_get_rightMargin,"feathers.text.TextFormat","get_rightMargin",0xd98350da,"feathers.text.TextFormat.get_rightMargin","feathers/text/TextFormat.hx",250,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_253_set_rightMargin,"feathers.text.TextFormat","set_rightMargin",0xd54ecde6,"feathers.text.TextFormat.set_rightMargin","feathers/text/TextFormat.hx",253,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_270_get_indent,"feathers.text.TextFormat","get_indent",0xa55a96bc,"feathers.text.TextFormat.get_indent","feathers/text/TextFormat.hx",270,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_273_set_indent,"feathers.text.TextFormat","set_indent",0xa8d83530,"feathers.text.TextFormat.set_indent","feathers/text/TextFormat.hx",273,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_290_get_leading,"feathers.text.TextFormat","get_leading",0x3292ae76,"feathers.text.TextFormat.get_leading","feathers/text/TextFormat.hx",290,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_293_set_leading,"feathers.text.TextFormat","set_leading",0x3cffb582,"feathers.text.TextFormat.set_leading","feathers/text/TextFormat.hx",293,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_310_get_blockIndent,"feathers.text.TextFormat","get_blockIndent",0xe94f8149,"feathers.text.TextFormat.get_blockIndent","feathers/text/TextFormat.hx",310,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_313_set_blockIndent,"feathers.text.TextFormat","set_blockIndent",0xe51afe55,"feathers.text.TextFormat.set_blockIndent","feathers/text/TextFormat.hx",313,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_330_get_bullet,"feathers.text.TextFormat","get_bullet",0xe5f81c92,"feathers.text.TextFormat.get_bullet","feathers/text/TextFormat.hx",330,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_333_set_bullet,"feathers.text.TextFormat","set_bullet",0xe975bb06,"feathers.text.TextFormat.set_bullet","feathers/text/TextFormat.hx",333,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_350_get_kerning,"feathers.text.TextFormat","get_kerning",0xd969367c,"feathers.text.TextFormat.get_kerning","feathers/text/TextFormat.hx",350,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_353_set_kerning,"feathers.text.TextFormat","set_kerning",0xe3d63d88,"feathers.text.TextFormat.set_kerning","feathers/text/TextFormat.hx",353,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_370_get_letterSpacing,"feathers.text.TextFormat","get_letterSpacing",0xffc516ed,"feathers.text.TextFormat.get_letterSpacing","feathers/text/TextFormat.hx",370,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_373_set_letterSpacing,"feathers.text.TextFormat","set_letterSpacing",0x2332eef9,"feathers.text.TextFormat.set_letterSpacing","feathers/text/TextFormat.hx",373,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_390_get_tabStops,"feathers.text.TextFormat","get_tabStops",0xd4d551ec,"feathers.text.TextFormat.get_tabStops","feathers/text/TextFormat.hx",390,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_393_set_tabStops,"feathers.text.TextFormat","set_tabStops",0xe9ce7560,"feathers.text.TextFormat.set_tabStops","feathers/text/TextFormat.hx",393,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_408_clone,"feathers.text.TextFormat","clone",0x3d670636,"feathers.text.TextFormat.clone","feathers/text/TextFormat.hx",408,0x45997e37)
HX_LOCAL_STACK_FRAME(_hx_pos_bb217a55e6bc5e26_423_toSimpleTextFormat,"feathers.text.TextFormat","toSimpleTextFormat",0xb760abb8,"feathers.text.TextFormat.toSimpleTextFormat","feathers/text/TextFormat.hx",423,0x45997e37)
namespace feathers{
namespace text{

void TextFormat_obj::__construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading){
            	HX_GC_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_36_new)
HXLINE(  37)		super::__construct(null());
HXLINE(  38)		this->_textFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
            	}

Dynamic TextFormat_obj::__CreateEmpty() { return new TextFormat_obj; }

void *TextFormat_obj::_hx_vtable = 0;

Dynamic TextFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFormat_obj > _hx_result = new TextFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool TextFormat_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x40c307a5;
	}
}

::String TextFormat_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_50_get_font)
HXDLIN(  50)		return this->_textFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_font,return )

::String TextFormat_obj::set_font(::String value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_53_set_font)
HXLINE(  54)		if ((this->_textFormat->font == value)) {
HXLINE(  55)			return this->_textFormat->font;
            		}
HXLINE(  58)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE(  59)		this->_textFormat->font = value;
HXLINE(  60)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  61)		return this->_textFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_font,return )

 ::Dynamic TextFormat_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_70_get_size)
HXDLIN(  70)		return this->_textFormat->size;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_size,return )

int TextFormat_obj::set_size( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_73_set_size)
HXLINE(  74)		if (::hx::IsEq( this->_textFormat->size,value )) {
HXLINE(  75)			return ( (int)(this->_textFormat->size) );
            		}
HXLINE(  78)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE(  79)		this->_textFormat->size = value;
HXLINE(  80)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  81)		return ( (int)(this->_textFormat->size) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_size,return )

 ::Dynamic TextFormat_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_90_get_color)
HXDLIN(  90)		return this->_textFormat->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_color,return )

int TextFormat_obj::set_color( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_93_set_color)
HXLINE(  94)		if (::hx::IsEq( this->_textFormat->color,value )) {
HXLINE(  95)			return ( (int)(this->_textFormat->color) );
            		}
HXLINE(  98)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE(  99)		this->_textFormat->color = value;
HXLINE( 100)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 101)		return ( (int)(this->_textFormat->color) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_color,return )

 ::Dynamic TextFormat_obj::get_bold(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_110_get_bold)
HXDLIN( 110)		return this->_textFormat->bold;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_bold,return )

 ::Dynamic TextFormat_obj::set_bold( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_113_set_bold)
HXLINE( 114)		if (::hx::IsEq( this->_textFormat->bold,value )) {
HXLINE( 115)			return this->_textFormat->bold;
            		}
HXLINE( 118)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 119)		this->_textFormat->bold = value;
HXLINE( 120)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 121)		return this->_textFormat->bold;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_bold,return )

 ::Dynamic TextFormat_obj::get_italic(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_130_get_italic)
HXDLIN( 130)		return this->_textFormat->italic;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_italic,return )

 ::Dynamic TextFormat_obj::set_italic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_133_set_italic)
HXLINE( 134)		if (::hx::IsEq( this->_textFormat->italic,value )) {
HXLINE( 135)			return this->_textFormat->italic;
            		}
HXLINE( 138)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 139)		this->_textFormat->italic = value;
HXLINE( 140)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 141)		return this->_textFormat->italic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_italic,return )

 ::Dynamic TextFormat_obj::get_underline(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_150_get_underline)
HXDLIN( 150)		return this->_textFormat->underline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_underline,return )

 ::Dynamic TextFormat_obj::set_underline( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_153_set_underline)
HXLINE( 154)		if (::hx::IsEq( this->_textFormat->underline,value )) {
HXLINE( 155)			return this->_textFormat->underline;
            		}
HXLINE( 158)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 159)		this->_textFormat->underline = value;
HXLINE( 160)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 161)		return this->_textFormat->underline;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_underline,return )

::String TextFormat_obj::get_url(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_170_get_url)
HXDLIN( 170)		return this->_textFormat->url;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_url,return )

::String TextFormat_obj::set_url(::String value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_173_set_url)
HXLINE( 174)		if ((this->_textFormat->url == value)) {
HXLINE( 175)			return this->_textFormat->url;
            		}
HXLINE( 178)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 179)		this->_textFormat->url = value;
HXLINE( 180)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 181)		return this->_textFormat->url;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_url,return )

::String TextFormat_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_190_get_target)
HXDLIN( 190)		return this->_textFormat->target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_target,return )

::String TextFormat_obj::set_target(::String value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_193_set_target)
HXLINE( 194)		if ((this->_textFormat->target == value)) {
HXLINE( 195)			return this->_textFormat->target;
            		}
HXLINE( 198)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 199)		this->_textFormat->target = value;
HXLINE( 200)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 201)		return this->_textFormat->target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_target,return )

 ::Dynamic TextFormat_obj::get_align(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_210_get_align)
HXDLIN( 210)		return this->_textFormat->align;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_align,return )

 ::Dynamic TextFormat_obj::set_align( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_213_set_align)
HXLINE( 214)		if (::hx::IsEq( this->_textFormat->align,value )) {
HXLINE( 215)			return this->_textFormat->align;
            		}
HXLINE( 218)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 219)		this->_textFormat->align = value;
HXLINE( 220)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 221)		return this->_textFormat->align;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_align,return )

 ::Dynamic TextFormat_obj::get_leftMargin(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_230_get_leftMargin)
HXDLIN( 230)		return this->_textFormat->leftMargin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_leftMargin,return )

int TextFormat_obj::set_leftMargin( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_233_set_leftMargin)
HXLINE( 234)		if (::hx::IsEq( this->_textFormat->leftMargin,value )) {
HXLINE( 235)			return ( (int)(this->_textFormat->leftMargin) );
            		}
HXLINE( 238)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 239)		this->_textFormat->leftMargin = value;
HXLINE( 240)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 241)		return ( (int)(this->_textFormat->leftMargin) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_leftMargin,return )

 ::Dynamic TextFormat_obj::get_rightMargin(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_250_get_rightMargin)
HXDLIN( 250)		return this->_textFormat->rightMargin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_rightMargin,return )

int TextFormat_obj::set_rightMargin( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_253_set_rightMargin)
HXLINE( 254)		if (::hx::IsEq( this->_textFormat->rightMargin,value )) {
HXLINE( 255)			return ( (int)(this->_textFormat->rightMargin) );
            		}
HXLINE( 258)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 259)		this->_textFormat->rightMargin = value;
HXLINE( 260)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 261)		return ( (int)(this->_textFormat->rightMargin) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_rightMargin,return )

 ::Dynamic TextFormat_obj::get_indent(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_270_get_indent)
HXDLIN( 270)		return this->_textFormat->indent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_indent,return )

int TextFormat_obj::set_indent( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_273_set_indent)
HXLINE( 274)		if (::hx::IsEq( this->_textFormat->indent,value )) {
HXLINE( 275)			return ( (int)(this->_textFormat->indent) );
            		}
HXLINE( 278)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 279)		this->_textFormat->indent = value;
HXLINE( 280)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 281)		return ( (int)(this->_textFormat->indent) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_indent,return )

 ::Dynamic TextFormat_obj::get_leading(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_290_get_leading)
HXDLIN( 290)		return this->_textFormat->leading;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_leading,return )

int TextFormat_obj::set_leading( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_293_set_leading)
HXLINE( 294)		if (::hx::IsEq( this->_textFormat->leading,value )) {
HXLINE( 295)			return ( (int)(this->_textFormat->leading) );
            		}
HXLINE( 298)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 299)		this->_textFormat->leading = value;
HXLINE( 300)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 301)		return ( (int)(this->_textFormat->leading) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_leading,return )

 ::Dynamic TextFormat_obj::get_blockIndent(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_310_get_blockIndent)
HXDLIN( 310)		return this->_textFormat->blockIndent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_blockIndent,return )

int TextFormat_obj::set_blockIndent( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_313_set_blockIndent)
HXLINE( 314)		if (::hx::IsEq( this->_textFormat->blockIndent,value )) {
HXLINE( 315)			return ( (int)(this->_textFormat->blockIndent) );
            		}
HXLINE( 318)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 319)		this->_textFormat->blockIndent = value;
HXLINE( 320)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 321)		return ( (int)(this->_textFormat->blockIndent) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_blockIndent,return )

 ::Dynamic TextFormat_obj::get_bullet(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_330_get_bullet)
HXDLIN( 330)		return this->_textFormat->bullet;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_bullet,return )

 ::Dynamic TextFormat_obj::set_bullet( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_333_set_bullet)
HXLINE( 334)		if (::hx::IsEq( this->_textFormat->bullet,value )) {
HXLINE( 335)			return this->_textFormat->bullet;
            		}
HXLINE( 338)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 339)		this->_textFormat->bullet = value;
HXLINE( 340)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 341)		return this->_textFormat->bullet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_bullet,return )

 ::Dynamic TextFormat_obj::get_kerning(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_350_get_kerning)
HXDLIN( 350)		return this->_textFormat->kerning;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_kerning,return )

 ::Dynamic TextFormat_obj::set_kerning( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_353_set_kerning)
HXLINE( 354)		if (::hx::IsEq( this->_textFormat->kerning,value )) {
HXLINE( 355)			return this->_textFormat->kerning;
            		}
HXLINE( 358)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 359)		this->_textFormat->kerning = value;
HXLINE( 360)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 361)		return this->_textFormat->kerning;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_kerning,return )

 ::Dynamic TextFormat_obj::get_letterSpacing(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_370_get_letterSpacing)
HXDLIN( 370)		return this->_textFormat->letterSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_letterSpacing,return )

 ::Dynamic TextFormat_obj::set_letterSpacing( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_373_set_letterSpacing)
HXLINE( 374)		if (::hx::IsEq( this->_textFormat->letterSpacing,value )) {
HXLINE( 375)			return this->_textFormat->letterSpacing;
            		}
HXLINE( 378)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 379)		this->_textFormat->letterSpacing = value;
HXLINE( 380)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 381)		return this->_textFormat->letterSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_letterSpacing,return )

::Array< int > TextFormat_obj::get_tabStops(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_390_get_tabStops)
HXDLIN( 390)		return this->_textFormat->tabStops;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,get_tabStops,return )

::Array< int > TextFormat_obj::set_tabStops(::Array< int > value){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_393_set_tabStops)
HXLINE( 394)		if (::hx::IsPointerEq( this->_textFormat->tabStops,value )) {
HXLINE( 395)			return this->_textFormat->tabStops;
            		}
HXLINE( 397)		this->_textFormat = ::feathers::utils::TextFormatUtil_obj::clone(this->_textFormat);
HXLINE( 398)		this->_textFormat->tabStops = value;
HXLINE( 399)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 400)		return this->_textFormat->tabStops;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,set_tabStops,return )

 ::feathers::text::TextFormat TextFormat_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_408_clone)
HXLINE( 409)		::String clone = this->get_font();
HXDLIN( 409)		 ::Dynamic clone1 = this->get_size();
HXDLIN( 409)		 ::Dynamic clone2 = this->get_color();
HXDLIN( 409)		 ::Dynamic clone3 = this->get_bold();
HXDLIN( 409)		 ::Dynamic clone4 = this->get_italic();
HXDLIN( 409)		 ::Dynamic clone5 = this->get_underline();
HXDLIN( 409)		::String clone6 = this->get_url();
HXDLIN( 409)		::String clone7 = this->get_target();
HXDLIN( 409)		 ::Dynamic clone8 = this->get_align();
HXLINE( 410)		 ::Dynamic clone9 = this->get_leftMargin();
HXDLIN( 410)		 ::Dynamic clone10 = this->get_rightMargin();
HXDLIN( 410)		 ::Dynamic clone11 = this->get_indent();
HXLINE( 409)		 ::feathers::text::TextFormat clone12 =  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,clone,clone1,clone2,clone3,clone4,clone5,clone6,clone7,clone8,clone9,clone10,clone11,this->get_leading());
HXLINE( 411)		clone12->_textFormat->blockIndent = this->get_blockIndent();
HXLINE( 412)		clone12->_textFormat->bullet = this->get_bullet();
HXLINE( 413)		clone12->_textFormat->kerning = this->get_kerning();
HXLINE( 414)		clone12->_textFormat->letterSpacing = this->get_letterSpacing();
HXLINE( 415)		clone12->_textFormat->tabStops = this->get_tabStops();
HXLINE( 416)		return clone12;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,clone,return )

 ::openfl::text::TextFormat TextFormat_obj::toSimpleTextFormat(){
            	HX_STACKFRAME(&_hx_pos_bb217a55e6bc5e26_423_toSimpleTextFormat)
HXDLIN( 423)		return this->_textFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,toSimpleTextFormat,return )


::hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
	::hx::ObjectPtr< TextFormat_obj > __this = new TextFormat_obj();
	__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return __this;
}

::hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__alloc(::hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading) {
	TextFormat_obj *__this = (TextFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFormat_obj), true, "feathers.text.TextFormat"));
	*(void **)__this = TextFormat_obj::_hx_vtable;
	__this->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return __this;
}

TextFormat_obj::TextFormat_obj()
{
}

void TextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormat);
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_url() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_font() ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bold() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_align() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_italic() ); }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		if (HX_FIELD_EQ(inName,"indent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_indent() ); }
		if (HX_FIELD_EQ(inName,"bullet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bullet() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_url") ) { return ::hx::Val( get_url_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_url") ) { return ::hx::Val( set_url_dyn() ); }
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_leading() ); }
		if (HX_FIELD_EQ(inName,"kerning") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_kerning() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return ::hx::Val( get_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return ::hx::Val( set_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"tabStops") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabStops() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { return ::hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_underline() ); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return ::hx::Val( get_align_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return ::hx::Val( set_align_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_italic") ) { return ::hx::Val( get_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return ::hx::Val( set_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"leftMargin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_leftMargin() ); }
		if (HX_FIELD_EQ(inName,"get_indent") ) { return ::hx::Val( get_indent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_indent") ) { return ::hx::Val( set_indent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bullet") ) { return ::hx::Val( get_bullet_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bullet") ) { return ::hx::Val( set_bullet_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return ::hx::Val( _textFormat ); }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rightMargin() ); }
		if (HX_FIELD_EQ(inName,"get_leading") ) { return ::hx::Val( get_leading_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_leading") ) { return ::hx::Val( set_leading_dyn() ); }
		if (HX_FIELD_EQ(inName,"blockIndent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_blockIndent() ); }
		if (HX_FIELD_EQ(inName,"get_kerning") ) { return ::hx::Val( get_kerning_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_kerning") ) { return ::hx::Val( set_kerning_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_tabStops") ) { return ::hx::Val( get_tabStops_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabStops") ) { return ::hx::Val( set_tabStops_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_underline") ) { return ::hx::Val( get_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_underline") ) { return ::hx::Val( set_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_letterSpacing() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_leftMargin") ) { return ::hx::Val( get_leftMargin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_leftMargin") ) { return ::hx::Val( set_leftMargin_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_rightMargin") ) { return ::hx::Val( get_rightMargin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rightMargin") ) { return ::hx::Val( set_rightMargin_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blockIndent") ) { return ::hx::Val( get_blockIndent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blockIndent") ) { return ::hx::Val( set_blockIndent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_letterSpacing") ) { return ::hx::Val( get_letterSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return ::hx::Val( set_letterSpacing_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"toSimpleTextFormat") ) { return ::hx::Val( toSimpleTextFormat_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_url(inValue.Cast< ::String >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bold(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_align(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_italic(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"indent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_indent(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"bullet") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bullet(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_leading(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"kerning") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_kerning(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabStops(inValue.Cast< ::Array< int > >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_underline(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_leftMargin(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rightMargin(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"blockIndent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blockIndent(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_letterSpacing(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_textFormat",e3,dc,08,07));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("underline",0c,15,d1,87));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("align",c5,56,91,21));
	outFields->push(HX_("leftMargin",95,2b,7e,e9));
	outFields->push(HX_("rightMargin",2a,3d,f2,23));
	outFields->push(HX_("indent",6c,0c,f3,93));
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("blockIndent",99,6d,be,33));
	outFields->push(HX_("bullet",42,92,90,d4));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("tabStops",9c,93,ba,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextFormat_obj,_textFormat),HX_("_textFormat",e3,dc,08,07)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFormat_obj_sMemberFields[] = {
	HX_("_textFormat",e3,dc,08,07),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("get_color",ba,cd,05,8e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_bold",0e,3d,d6,c0),
	HX_("set_bold",82,96,33,6f),
	HX_("get_italic",b9,9e,eb,f6),
	HX_("set_italic",2d,3d,69,fa),
	HX_("get_underline",e3,e8,34,49),
	HX_("set_underline",ef,ca,3a,8e),
	HX_("get_url",06,f4,cd,26),
	HX_("set_url",12,85,cf,19),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("get_align",1c,b3,3a,65),
	HX_("set_align",28,9f,8b,48),
	HX_("get_leftMargin",de,b3,73,5f),
	HX_("set_leftMargin",52,9c,93,7f),
	HX_("get_rightMargin",c1,f4,d3,e4),
	HX_("set_rightMargin",cd,71,9f,e0),
	HX_("get_indent",35,7c,7a,84),
	HX_("set_indent",a9,1a,f8,87),
	HX_("get_leading",dd,92,5b,8f),
	HX_("set_leading",e9,99,c8,99),
	HX_("get_blockIndent",30,25,a0,f4),
	HX_("set_blockIndent",3c,a2,6b,f0),
	HX_("get_bullet",0b,02,18,c5),
	HX_("set_bullet",7f,a0,95,c8),
	HX_("get_kerning",e3,1a,32,36),
	HX_("set_kerning",ef,21,9f,40),
	HX_("get_letterSpacing",94,c2,73,fb),
	HX_("set_letterSpacing",a0,9a,e1,1e),
	HX_("get_tabStops",a5,47,d4,a7),
	HX_("set_tabStops",19,6b,cd,bc),
	HX_("clone",5d,13,63,48),
	HX_("toSimpleTextFormat",31,32,88,f4),
	::String(null()) };

::hx::Class TextFormat_obj::__mClass;

void TextFormat_obj::__register()
{
	TextFormat_obj _hx_dummy;
	TextFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.text.TextFormat",87,3a,e0,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace text
