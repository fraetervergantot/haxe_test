#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#define INCLUDED_feathers_themes_steel_BaseSteelTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
HX_DECLARE_CLASS2(feathers,graphics,FillStyle)
HX_DECLARE_CLASS2(feathers,graphics,LineStyle)
HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,text,TextFormat)
HX_DECLARE_CLASS2(feathers,themes,ClassVariantTheme)
HX_DECLARE_CLASS3(feathers,themes,steel,BaseSteelTheme)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace themes{
namespace steel{


class HXCPP_CLASS_ATTRIBUTES BaseSteelTheme_obj : public  ::feathers::themes::ClassVariantTheme_obj
{
	public:
		typedef  ::feathers::themes::ClassVariantTheme_obj super;
		typedef BaseSteelTheme_obj OBJ_;
		BaseSteelTheme_obj();

	public:
		enum { _hx_ClassId = 0x5c3db93c };

		void __construct( ::Dynamic themeColor, ::Dynamic darkThemeColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.themes.steel.BaseSteelTheme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.themes.steel.BaseSteelTheme"); }
		static ::hx::ObjectPtr< BaseSteelTheme_obj > __new( ::Dynamic themeColor, ::Dynamic darkThemeColor);
		static ::hx::ObjectPtr< BaseSteelTheme_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic themeColor, ::Dynamic darkThemeColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseSteelTheme_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BaseSteelTheme",8f,d3,03,b7); }

		bool _darkMode;
		bool get_darkMode();
		::Dynamic get_darkMode_dyn();

		bool set_darkMode(bool value);
		::Dynamic set_darkMode_dyn();

		 ::Dynamic customThemeColor;
		 ::Dynamic customDarkThemeColor;
		int themeColor;
		int offsetThemeColor;
		int rootFillColor;
		int controlFillColor1;
		int controlFillColor2;
		int controlDisabledFillColor;
		int scrollBarThumbFillColor;
		int scrollBarThumbDisabledFillColor;
		int insetFillColor;
		int disabledInsetFillColor;
		int insetBorderColor;
		int disabledInsetBorderColor;
		int selectedInsetBorderColor;
		int activeFillBorderColor;
		int selectedBorderColor;
		int focusBorderColor;
		int containerFillColor;
		int headerFillColor;
		int overlayFillColor;
		int subHeadingFillColor;
		int borderColor;
		int dividerColor;
		int subHeadingDividerColor;
		int textColor;
		int secondaryTextColor;
		int disabledTextColor;
		int dangerTextColor;
		int dangerFillColor;
		int offsetDangerFillColor;
		int dangerBorderColor;
		::String fontName;
		int fontSize;
		int headerFontSize;
		int detailFontSize;
		void refreshColors();
		::Dynamic refreshColors_dyn();

		void refreshFonts();
		::Dynamic refreshFonts_dyn();

		void refreshFontSizes();
		::Dynamic refreshFontSizes_dyn();

		 ::feathers::graphics::FillStyle getThemeFill();
		::Dynamic getThemeFill_dyn();

		 ::feathers::graphics::FillStyle getControlFill();
		::Dynamic getControlFill_dyn();

		 ::feathers::graphics::FillStyle getControlDisabledFill();
		::Dynamic getControlDisabledFill_dyn();

		 ::feathers::graphics::FillStyle getButtonFill();
		::Dynamic getButtonFill_dyn();

		 ::feathers::graphics::FillStyle getButtonDownFill();
		::Dynamic getButtonDownFill_dyn();

		 ::feathers::graphics::FillStyle getButtonDisabledFill();
		::Dynamic getButtonDisabledFill_dyn();

		 ::feathers::graphics::FillStyle getScrollBarThumbFill();
		::Dynamic getScrollBarThumbFill_dyn();

		 ::feathers::graphics::FillStyle getScrollBarThumbDisabledFill();
		::Dynamic getScrollBarThumbDisabledFill_dyn();

		 ::feathers::graphics::LineStyle getBorder(::hx::Null< Float >  thickness);
		::Dynamic getBorder_dyn();

		 ::feathers::graphics::LineStyle getButtonBorder(::hx::Null< Float >  thickness);
		::Dynamic getButtonBorder_dyn();

		 ::feathers::graphics::LineStyle getInsetBorder(::hx::Null< Float >  thickness);
		::Dynamic getInsetBorder_dyn();

		 ::feathers::graphics::LineStyle getDisabledInsetBorder(::hx::Null< Float >  thickness);
		::Dynamic getDisabledInsetBorder_dyn();

		 ::feathers::graphics::LineStyle getSelectedInsetBorder(::hx::Null< Float >  thickness);
		::Dynamic getSelectedInsetBorder_dyn();

		 ::feathers::graphics::LineStyle getThemeBorder(::hx::Null< Float >  thickness);
		::Dynamic getThemeBorder_dyn();

		 ::feathers::graphics::LineStyle getSelectedBorder(::hx::Null< Float >  thickness);
		::Dynamic getSelectedBorder_dyn();

		 ::feathers::graphics::LineStyle getActiveFillBorder(::hx::Null< Float >  thickness);
		::Dynamic getActiveFillBorder_dyn();

		 ::feathers::graphics::LineStyle getContainerBorder(::hx::Null< Float >  thickness);
		::Dynamic getContainerBorder_dyn();

		 ::feathers::graphics::LineStyle getDividerBorder(::hx::Null< Float >  thickness);
		::Dynamic getDividerBorder_dyn();

		 ::feathers::graphics::FillStyle getDividerFill();
		::Dynamic getDividerFill_dyn();

		 ::feathers::graphics::LineStyle getSubHeadingDividerBorder(::hx::Null< Float >  thickness);
		::Dynamic getSubHeadingDividerBorder_dyn();

		 ::feathers::graphics::FillStyle getSubHeadingDividerFill();
		::Dynamic getSubHeadingDividerFill_dyn();

		 ::feathers::graphics::LineStyle getFocusBorder(::hx::Null< Float >  thickness);
		::Dynamic getFocusBorder_dyn();

		 ::feathers::graphics::FillStyle getInsetFill();
		::Dynamic getInsetFill_dyn();

		 ::feathers::graphics::FillStyle getDisabledInsetFill();
		::Dynamic getDisabledInsetFill_dyn();

		 ::feathers::graphics::FillStyle getActiveThemeFill();
		::Dynamic getActiveThemeFill_dyn();

		 ::feathers::graphics::FillStyle getReversedActiveThemeFill();
		::Dynamic getReversedActiveThemeFill_dyn();

		 ::feathers::graphics::FillStyle getDangerFill();
		::Dynamic getDangerFill_dyn();

		 ::feathers::graphics::FillStyle getReversedDangerFill();
		::Dynamic getReversedDangerFill_dyn();

		 ::feathers::graphics::LineStyle getDangerBorder(::hx::Null< Float >  thickness);
		::Dynamic getDangerBorder_dyn();

		 ::feathers::graphics::FillStyle getOverlayFill();
		::Dynamic getOverlayFill_dyn();

		 ::feathers::graphics::FillStyle getRootFill();
		::Dynamic getRootFill_dyn();

		 ::feathers::graphics::FillStyle getContainerFill();
		::Dynamic getContainerFill_dyn();

		 ::feathers::graphics::FillStyle getSubHeadingFill();
		::Dynamic getSubHeadingFill_dyn();

		 ::feathers::text::TextFormat getTextFormat( ::Dynamic align);
		::Dynamic getTextFormat_dyn();

		 ::feathers::text::TextFormat getDisabledTextFormat( ::Dynamic align);
		::Dynamic getDisabledTextFormat_dyn();

		 ::feathers::text::TextFormat getSecondaryTextFormat( ::Dynamic align);
		::Dynamic getSecondaryTextFormat_dyn();

		 ::feathers::text::TextFormat getDangerTextFormat( ::Dynamic align);
		::Dynamic getDangerTextFormat_dyn();

		 ::feathers::text::TextFormat getHeaderTextFormat( ::Dynamic align);
		::Dynamic getHeaderTextFormat_dyn();

		 ::feathers::text::TextFormat getDisabledHeaderTextFormat( ::Dynamic align);
		::Dynamic getDisabledHeaderTextFormat_dyn();

		 ::feathers::text::TextFormat getDetailTextFormat( ::Dynamic align);
		::Dynamic getDetailTextFormat_dyn();

		 ::feathers::text::TextFormat getDisabledDetailTextFormat( ::Dynamic align);
		::Dynamic getDisabledDetailTextFormat_dyn();

		 ::feathers::graphics::FillStyle getHeaderFill();
		::Dynamic getHeaderFill_dyn();

		int lighten(int color,int offset);
		::Dynamic lighten_dyn();

		int darken(int color,int offset);
		::Dynamic darken_dyn();

};

} // end namespace feathers
} // end namespace themes
} // end namespace steel

#endif /* INCLUDED_feathers_themes_steel_BaseSteelTheme */ 
