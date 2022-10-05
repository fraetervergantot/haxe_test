#ifndef INCLUDED_feathers_controls_ToggleButton
#define INCLUDED_feathers_controls_ToggleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_BasicToggleButton
#include <feathers/controls/BasicToggleButton.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,BasicToggleButton)
HX_DECLARE_CLASS2(feathers,controls,IToggle)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS2(feathers,controls,ToggleButton)
HX_DECLARE_CLASS2(feathers,controls,ToggleButtonState)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,HorizontalAlign)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,layout,VerticalAlign)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,text,TextFormat)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,text,StyleSheet)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES ToggleButton_obj : public  ::feathers::controls::BasicToggleButton_obj
{
	public:
		typedef  ::feathers::controls::BasicToggleButton_obj super;
		typedef ToggleButton_obj OBJ_;
		ToggleButton_obj();

	public:
		enum { _hx_ClassId = 0x482d5eec };

		void __construct(::String text,::hx::Null< bool >  __o_selected, ::Dynamic changeListener);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.ToggleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.ToggleButton"); }
		static ::hx::ObjectPtr< ToggleButton_obj > __new(::String text,::hx::Null< bool >  __o_selected, ::Dynamic changeListener);
		static ::hx::ObjectPtr< ToggleButton_obj > __alloc(::hx::Ctx *_hx_ctx,::String text,::hx::Null< bool >  __o_selected, ::Dynamic changeListener);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToggleButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ToggleButton",c6,c8,0c,48); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::openfl::text::TextField textField;
		::String _previousText;
		::String _previousHTMLText;
		 ::feathers::text::TextFormat _previousTextFormat;
		 ::openfl::text::TextFormat _previousSimpleTextFormat;
		bool _updatedTextStyles;
		::String _text;
		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		::String _htmlText;
		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		Float get_baseline();
		::Dynamic get_baseline_dyn();

		 ::haxe::ds::EnumValueMap _stateToIcon;
		 ::feathers::layout::Measurements _iconMeasurements;
		 ::openfl::display::DisplayObject _currentIcon;
		bool _ignoreIconResizes;
		Float _textMeasuredWidth;
		Float _textMeasuredHeight;
		bool _wrappedOnMeasure;
		 ::haxe::ds::EnumValueMap _stateToTextFormat;
		 ::feathers::text::TextFormat getTextFormatForState( ::feathers::controls::ToggleButtonState state);
		::Dynamic getTextFormatForState_dyn();

		void setTextFormatForState( ::feathers::controls::ToggleButtonState state, ::feathers::text::TextFormat textFormat);
		::Dynamic setTextFormatForState_dyn();

		 ::openfl::display::DisplayObject getIconForState( ::feathers::controls::ToggleButtonState state);
		::Dynamic getIconForState_dyn();

		void setIconForState( ::feathers::controls::ToggleButtonState state, ::openfl::display::DisplayObject icon);
		::Dynamic setIconForState_dyn();

		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		void initializeToggleButtonTheme();
		::Dynamic initializeToggleButtonTheme_dyn();

		void initialize();

		void commitChanges();

		bool measure();

		 ::Dynamic calculateExplicitWidthForTextMeasurement();
		::Dynamic calculateExplicitWidthForTextMeasurement_dyn();

		Float measureContentWidth();
		::Dynamic measureContentWidth_dyn();

		Float measureContentHeight();
		::Dynamic measureContentHeight_dyn();

		Float measureContentMinWidth();
		::Dynamic measureContentMinWidth_dyn();

		Float measureContentMinHeight();
		::Dynamic measureContentMinHeight_dyn();

		void refreshTextStyles();
		::Dynamic refreshTextStyles_dyn();

		void refreshText(bool forceMeasurement);
		::Dynamic refreshText_dyn();

		 ::feathers::text::TextFormat getCurrentTextFormat();
		::Dynamic getCurrentTextFormat_dyn();

		void layoutContent();

		void layoutChildren();
		::Dynamic layoutChildren_dyn();

		void refreshTextFieldDimensions(bool forMeasurement);
		::Dynamic refreshTextFieldDimensions_dyn();

		void positionSingleChild( ::openfl::display::DisplayObject displayObject);
		::Dynamic positionSingleChild_dyn();

		void positionTextAndIcon();
		::Dynamic positionTextAndIcon_dyn();

		void refreshIcon();
		::Dynamic refreshIcon_dyn();

		 ::openfl::display::DisplayObject getCurrentIcon();
		::Dynamic getCurrentIcon_dyn();

		void addCurrentIcon( ::openfl::display::DisplayObject icon);
		::Dynamic addCurrentIcon_dyn();

		void removeCurrentIcon( ::openfl::display::DisplayObject icon);
		::Dynamic removeCurrentIcon_dyn();

		void toggleButton_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic toggleButton_keyDownHandler_dyn();

		void toggleButton_focusInHandler( ::openfl::events::FocusEvent event);
		::Dynamic toggleButton_focusInHandler_dyn();

		void toggleButton_focusOutHandler( ::openfl::events::FocusEvent event);
		::Dynamic toggleButton_focusOutHandler_dyn();

		void toggleButton_textFormat_changeHandler( ::openfl::events::Event event);
		::Dynamic toggleButton_textFormat_changeHandler_dyn();

		void toggleButton_icon_resizeHandler( ::openfl::events::Event event);
		::Dynamic toggleButton_icon_resizeHandler_dyn();

		::hx::Class get_styleContext();

		 ::openfl::display::DisplayObject _hx___icon;
		 ::openfl::display::DisplayObject get_icon();
		::Dynamic get_icon_dyn();

		 ::openfl::display::DisplayObject set_icon( ::openfl::display::DisplayObject value);
		::Dynamic set_icon_dyn();

		 ::openfl::display::DisplayObject clearStyle_icon();
		::Dynamic clearStyle_icon_dyn();

		 ::openfl::display::DisplayObject _hx___disabledIcon;
		 ::openfl::display::DisplayObject get_disabledIcon();
		::Dynamic get_disabledIcon_dyn();

		 ::openfl::display::DisplayObject set_disabledIcon( ::openfl::display::DisplayObject value);
		::Dynamic set_disabledIcon_dyn();

		 ::openfl::display::DisplayObject clearStyle_disabledIcon();
		::Dynamic clearStyle_disabledIcon_dyn();

		 ::openfl::display::DisplayObject _hx___selectedIcon;
		 ::openfl::display::DisplayObject get_selectedIcon();
		::Dynamic get_selectedIcon_dyn();

		 ::openfl::display::DisplayObject set_selectedIcon( ::openfl::display::DisplayObject value);
		::Dynamic set_selectedIcon_dyn();

		 ::openfl::display::DisplayObject clearStyle_selectedIcon();
		::Dynamic clearStyle_selectedIcon_dyn();

		 ::feathers::text::TextFormat _hx___textFormat;
		 ::feathers::text::TextFormat get_textFormat();
		::Dynamic get_textFormat_dyn();

		 ::feathers::text::TextFormat set_textFormat( ::feathers::text::TextFormat value);
		::Dynamic set_textFormat_dyn();

		 ::feathers::text::TextFormat clearStyle_textFormat();
		::Dynamic clearStyle_textFormat_dyn();

		 ::openfl::text::StyleSheet _hx___styleSheet;
		 ::openfl::text::StyleSheet get_styleSheet();
		::Dynamic get_styleSheet_dyn();

		 ::openfl::text::StyleSheet set_styleSheet( ::openfl::text::StyleSheet value);
		::Dynamic set_styleSheet_dyn();

		 ::openfl::text::StyleSheet clearStyle_styleSheet();
		::Dynamic clearStyle_styleSheet_dyn();

		bool _hx___embedFonts;
		bool get_embedFonts();
		::Dynamic get_embedFonts_dyn();

		bool set_embedFonts(bool value);
		::Dynamic set_embedFonts_dyn();

		bool clearStyle_embedFonts();
		::Dynamic clearStyle_embedFonts_dyn();

		bool _hx___wordWrap;
		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		bool clearStyle_wordWrap();
		::Dynamic clearStyle_wordWrap_dyn();

		 ::feathers::text::TextFormat _hx___disabledTextFormat;
		 ::feathers::text::TextFormat get_disabledTextFormat();
		::Dynamic get_disabledTextFormat_dyn();

		 ::feathers::text::TextFormat set_disabledTextFormat( ::feathers::text::TextFormat value);
		::Dynamic set_disabledTextFormat_dyn();

		 ::feathers::text::TextFormat clearStyle_disabledTextFormat();
		::Dynamic clearStyle_disabledTextFormat_dyn();

		 ::feathers::text::TextFormat _hx___selectedTextFormat;
		 ::feathers::text::TextFormat get_selectedTextFormat();
		::Dynamic get_selectedTextFormat_dyn();

		 ::feathers::text::TextFormat set_selectedTextFormat( ::feathers::text::TextFormat value);
		::Dynamic set_selectedTextFormat_dyn();

		 ::feathers::text::TextFormat clearStyle_selectedTextFormat();
		::Dynamic clearStyle_selectedTextFormat_dyn();

		 ::feathers::layout::RelativePosition _hx___iconPosition;
		 ::feathers::layout::RelativePosition get_iconPosition();
		::Dynamic get_iconPosition_dyn();

		 ::feathers::layout::RelativePosition set_iconPosition( ::feathers::layout::RelativePosition value);
		::Dynamic set_iconPosition_dyn();

		 ::feathers::layout::RelativePosition clearStyle_iconPosition();
		::Dynamic clearStyle_iconPosition_dyn();

		Float _hx___gap;
		Float get_gap();
		::Dynamic get_gap_dyn();

		Float set_gap(Float value);
		::Dynamic set_gap_dyn();

		Float clearStyle_gap();
		::Dynamic clearStyle_gap_dyn();

		Float _hx___minGap;
		Float get_minGap();
		::Dynamic get_minGap_dyn();

		Float set_minGap(Float value);
		::Dynamic set_minGap_dyn();

		Float clearStyle_minGap();
		::Dynamic clearStyle_minGap_dyn();

		Float _hx___paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float clearStyle_paddingTop();
		::Dynamic clearStyle_paddingTop_dyn();

		Float _hx___paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float clearStyle_paddingRight();
		::Dynamic clearStyle_paddingRight_dyn();

		Float _hx___paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float clearStyle_paddingBottom();
		::Dynamic clearStyle_paddingBottom_dyn();

		Float _hx___paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float clearStyle_paddingLeft();
		::Dynamic clearStyle_paddingLeft_dyn();

		 ::feathers::layout::HorizontalAlign _hx___horizontalAlign;
		 ::feathers::layout::HorizontalAlign get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		 ::feathers::layout::HorizontalAlign set_horizontalAlign( ::feathers::layout::HorizontalAlign value);
		::Dynamic set_horizontalAlign_dyn();

		 ::feathers::layout::HorizontalAlign clearStyle_horizontalAlign();
		::Dynamic clearStyle_horizontalAlign_dyn();

		 ::feathers::layout::VerticalAlign _hx___verticalAlign;
		 ::feathers::layout::VerticalAlign get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign set_verticalAlign( ::feathers::layout::VerticalAlign value);
		::Dynamic set_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign clearStyle_verticalAlign();
		::Dynamic clearStyle_verticalAlign_dyn();

		Float _hx___iconOffsetX;
		Float get_iconOffsetX();
		::Dynamic get_iconOffsetX_dyn();

		Float set_iconOffsetX(Float value);
		::Dynamic set_iconOffsetX_dyn();

		Float clearStyle_iconOffsetX();
		::Dynamic clearStyle_iconOffsetX_dyn();

		Float _hx___iconOffsetY;
		Float get_iconOffsetY();
		::Dynamic get_iconOffsetY_dyn();

		Float set_iconOffsetY(Float value);
		::Dynamic set_iconOffsetY_dyn();

		Float clearStyle_iconOffsetY();
		::Dynamic clearStyle_iconOffsetY_dyn();

		Float _hx___textOffsetX;
		Float get_textOffsetX();
		::Dynamic get_textOffsetX_dyn();

		Float set_textOffsetX(Float value);
		::Dynamic set_textOffsetX_dyn();

		Float clearStyle_textOffsetX();
		::Dynamic clearStyle_textOffsetX_dyn();

		Float _hx___textOffsetY;
		Float get_textOffsetY();
		::Dynamic get_textOffsetY_dyn();

		Float set_textOffsetY(Float value);
		::Dynamic set_textOffsetY_dyn();

		Float clearStyle_textOffsetY();
		::Dynamic clearStyle_textOffsetY_dyn();

		bool _hx___showText;
		bool get_showText();
		::Dynamic get_showText_dyn();

		bool set_showText(bool value);
		::Dynamic set_showText_dyn();

		bool clearStyle_showText();
		::Dynamic clearStyle_showText_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ToggleButton */ 
