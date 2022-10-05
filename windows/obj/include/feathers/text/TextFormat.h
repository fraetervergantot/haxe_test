#ifndef INCLUDED_feathers_text_TextFormat
#define INCLUDED_feathers_text_TextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,text,TextFormat)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace feathers{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormat_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef TextFormat_obj OBJ_;
		TextFormat_obj();

	public:
		enum { _hx_ClassId = 0x40c307a5 };

		void __construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.text.TextFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.text.TextFormat"); }
		static ::hx::ObjectPtr< TextFormat_obj > __new(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		static ::hx::ObjectPtr< TextFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormat",e4,13,30,2b); }

		 ::openfl::text::TextFormat _textFormat;
		::String get_font();
		::Dynamic get_font_dyn();

		::String set_font(::String value);
		::Dynamic set_font_dyn();

		 ::Dynamic get_size();
		::Dynamic get_size_dyn();

		int set_size( ::Dynamic value);
		::Dynamic set_size_dyn();

		 ::Dynamic get_color();
		::Dynamic get_color_dyn();

		int set_color( ::Dynamic value);
		::Dynamic set_color_dyn();

		 ::Dynamic get_bold();
		::Dynamic get_bold_dyn();

		 ::Dynamic set_bold( ::Dynamic value);
		::Dynamic set_bold_dyn();

		 ::Dynamic get_italic();
		::Dynamic get_italic_dyn();

		 ::Dynamic set_italic( ::Dynamic value);
		::Dynamic set_italic_dyn();

		 ::Dynamic get_underline();
		::Dynamic get_underline_dyn();

		 ::Dynamic set_underline( ::Dynamic value);
		::Dynamic set_underline_dyn();

		::String get_url();
		::Dynamic get_url_dyn();

		::String set_url(::String value);
		::Dynamic set_url_dyn();

		::String get_target();
		::Dynamic get_target_dyn();

		::String set_target(::String value);
		::Dynamic set_target_dyn();

		 ::Dynamic get_align();
		::Dynamic get_align_dyn();

		 ::Dynamic set_align( ::Dynamic value);
		::Dynamic set_align_dyn();

		 ::Dynamic get_leftMargin();
		::Dynamic get_leftMargin_dyn();

		int set_leftMargin( ::Dynamic value);
		::Dynamic set_leftMargin_dyn();

		 ::Dynamic get_rightMargin();
		::Dynamic get_rightMargin_dyn();

		int set_rightMargin( ::Dynamic value);
		::Dynamic set_rightMargin_dyn();

		 ::Dynamic get_indent();
		::Dynamic get_indent_dyn();

		int set_indent( ::Dynamic value);
		::Dynamic set_indent_dyn();

		 ::Dynamic get_leading();
		::Dynamic get_leading_dyn();

		int set_leading( ::Dynamic value);
		::Dynamic set_leading_dyn();

		 ::Dynamic get_blockIndent();
		::Dynamic get_blockIndent_dyn();

		int set_blockIndent( ::Dynamic value);
		::Dynamic set_blockIndent_dyn();

		 ::Dynamic get_bullet();
		::Dynamic get_bullet_dyn();

		 ::Dynamic set_bullet( ::Dynamic value);
		::Dynamic set_bullet_dyn();

		 ::Dynamic get_kerning();
		::Dynamic get_kerning_dyn();

		 ::Dynamic set_kerning( ::Dynamic value);
		::Dynamic set_kerning_dyn();

		 ::Dynamic get_letterSpacing();
		::Dynamic get_letterSpacing_dyn();

		 ::Dynamic set_letterSpacing( ::Dynamic value);
		::Dynamic set_letterSpacing_dyn();

		::Array< int > get_tabStops();
		::Dynamic get_tabStops_dyn();

		::Array< int > set_tabStops(::Array< int > value);
		::Dynamic set_tabStops_dyn();

		 ::feathers::text::TextFormat clone();
		::Dynamic clone_dyn();

		 ::openfl::text::TextFormat toSimpleTextFormat();
		::Dynamic toSimpleTextFormat_dyn();

};

} // end namespace feathers
} // end namespace text

#endif /* INCLUDED_feathers_text_TextFormat */ 
