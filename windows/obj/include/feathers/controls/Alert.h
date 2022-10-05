#ifndef INCLUDED_feathers_controls_Alert
#define INCLUDED_feathers_controls_Alert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,Alert)
HX_DECLARE_CLASS2(feathers,controls,ButtonBar)
HX_DECLARE_CLASS2(feathers,controls,Header)
HX_DECLARE_CLASS2(feathers,controls,Label)
HX_DECLARE_CLASS2(feathers,controls,Panel)
HX_DECLARE_CLASS2(feathers,controls,ScrollContainer)
HX_DECLARE_CLASS3(feathers,controls,popups,IPopUpAdapter)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,BaseScrollContainer)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusExtras)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStageFocusDelegate)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,ButtonBarItemState)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES Alert_obj : public  ::feathers::controls::Panel_obj
{
	public:
		typedef  ::feathers::controls::Panel_obj super;
		typedef Alert_obj OBJ_;
		Alert_obj();

	public:
		enum { _hx_ClassId = 0x6910e856 };

		void __construct(::String __o_text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.Alert")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.Alert"); }
		static ::hx::ObjectPtr< Alert_obj > __new(::String __o_text);
		static ::hx::ObjectPtr< Alert_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alert_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Alert",3c,c7,bb,b4); }

		static void __boot();
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_BUTTON_BAR_FACTORY;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_HEADER_FACTORY;
		static  ::feathers::core::InvalidationFlag INVALIDATION_FLAG_MESSAGE_LABEL_FACTORY;
		static ::String CHILD_VARIANT_HEADER;
		static ::String CHILD_VARIANT_MESSAGE_LABEL;
		static ::String CHILD_VARIANT_BUTTON_BAR;
		static  ::feathers::controls::Alert show(::String text,::String titleText,::Array< ::String > buttonsText, ::Dynamic callback, ::Dynamic alertFactory,::Dynamic popUpAdapter);
		static ::Dynamic show_dyn();

		static  ::feathers::controls::Alert showAlert( ::feathers::controls::Alert alert,::Dynamic popUpAdapter);
		static ::Dynamic showAlert_dyn();

		static  ::feathers::utils::DisplayObjectFactory defaultButtonBarFactory;
		static  ::feathers::utils::DisplayObjectFactory defaultHeaderFactory;
		static  ::feathers::utils::DisplayObjectFactory defaultMessageLabelFactory;
		 ::feathers::controls::Label messageLabel;
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

		 ::feathers::controls::Header alertHeader;
		::String _titleText;
		::String get_titleText();
		::Dynamic get_titleText_dyn();

		::String set_titleText(::String value);
		::Dynamic set_titleText_dyn();

		 ::feathers::utils::DisplayObjectFactory _oldMessageLabelFactory;
		 ::feathers::utils::DisplayObjectFactory _messageLabelFactory;
		 ::feathers::utils::DisplayObjectFactory get_messageLabelFactory();
		::Dynamic get_messageLabelFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_messageLabelFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_messageLabelFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory _oldHeaderFactory;
		 ::feathers::utils::DisplayObjectFactory _headerFactory;
		 ::feathers::utils::DisplayObjectFactory get_headerFactory();
		::Dynamic get_headerFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_headerFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_headerFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory _oldButtonBarFactory;
		 ::feathers::utils::DisplayObjectFactory _buttonBarFactory;
		 ::feathers::utils::DisplayObjectFactory get_buttonBarFactory();
		::Dynamic get_buttonBarFactory_dyn();

		 ::feathers::utils::DisplayObjectFactory set_buttonBarFactory( ::feathers::utils::DisplayObjectFactory value);
		::Dynamic set_buttonBarFactory_dyn();

		 ::feathers::controls::ButtonBar buttonBar;
		::Dynamic _buttonsDataProvider;
		::Dynamic get_buttonsDataProvider();
		::Dynamic get_buttonsDataProvider_dyn();

		::Dynamic set_buttonsDataProvider(::Dynamic value);
		::Dynamic set_buttonsDataProvider_dyn();

		 ::feathers::layout::Measurements _iconMeasurements;
		 ::openfl::display::DisplayObject _currentIcon;
		bool _ignoreIconResizes;
		 ::openfl::display::DisplayObject set_header( ::openfl::display::DisplayObject value);

		 ::openfl::display::DisplayObject set_footer( ::openfl::display::DisplayObject value);

		void initializeAlertTheme();
		::Dynamic initializeAlertTheme_dyn();

		void update();

		void createButtonBar();
		::Dynamic createButtonBar_dyn();

		void createHeader();
		::Dynamic createHeader_dyn();

		void createMessageLabel();
		::Dynamic createMessageLabel_dyn();

		void refreshButtons();
		::Dynamic refreshButtons_dyn();

		void refreshText();
		::Dynamic refreshText_dyn();

		void refreshTitleText();
		::Dynamic refreshTitleText_dyn();

		void refreshIcon();
		::Dynamic refreshIcon_dyn();

		 ::openfl::display::DisplayObject getCurrentIcon();
		::Dynamic getCurrentIcon_dyn();

		void removeCurrentIcon( ::openfl::display::DisplayObject icon);
		::Dynamic removeCurrentIcon_dyn();

		void alert_buttonBar_itemTriggerHandler( ::openfl::events::Event event);
		::Dynamic alert_buttonBar_itemTriggerHandler_dyn();

		::hx::Class get_styleContext();

		 ::openfl::display::DisplayObject _hx___icon;
		 ::openfl::display::DisplayObject get_icon();
		::Dynamic get_icon_dyn();

		 ::openfl::display::DisplayObject set_icon( ::openfl::display::DisplayObject value);
		::Dynamic set_icon_dyn();

		 ::openfl::display::DisplayObject clearStyle_icon();
		::Dynamic clearStyle_icon_dyn();

		::String _hx___customButtonBarVariant;
		::String get_customButtonBarVariant();
		::Dynamic get_customButtonBarVariant_dyn();

		::String set_customButtonBarVariant(::String value);
		::Dynamic set_customButtonBarVariant_dyn();

		::String clearStyle_customButtonBarVariant();
		::Dynamic clearStyle_customButtonBarVariant_dyn();

		::String _hx___customHeaderVariant;
		::String get_customHeaderVariant();
		::Dynamic get_customHeaderVariant_dyn();

		::String set_customHeaderVariant(::String value);
		::Dynamic set_customHeaderVariant_dyn();

		::String clearStyle_customHeaderVariant();
		::Dynamic clearStyle_customHeaderVariant_dyn();

		::String _hx___customMessageLabelVariant;
		::String get_customMessageLabelVariant();
		::Dynamic get_customMessageLabelVariant_dyn();

		::String set_customMessageLabelVariant(::String value);
		::Dynamic set_customMessageLabelVariant_dyn();

		::String clearStyle_customMessageLabelVariant();
		::Dynamic clearStyle_customMessageLabelVariant_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_Alert */ 
