#ifndef INCLUDED_feathers_core_FeathersControl
#define INCLUDED_feathers_core_FeathersControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS3(feathers,core,_FeathersControl,StyleDefinition)
HX_DECLARE_CLASS2(feathers,events,StyleProviderEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayoutData)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IStyleProvider)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES FeathersControl_obj : public  ::feathers::core::MeasureSprite_obj
{
	public:
		typedef  ::feathers::core::MeasureSprite_obj super;
		typedef FeathersControl_obj OBJ_;
		FeathersControl_obj();

	public:
		enum { _hx_ClassId = 0x4033f4be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.FeathersControl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.FeathersControl"); }
		static ::hx::ObjectPtr< FeathersControl_obj > __new();
		static ::hx::ObjectPtr< FeathersControl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FeathersControl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FeathersControl",2d,44,96,83); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool _waitingToApplyStyles;
		bool _initializing;
		bool _initialized;
		bool get_initialized();
		::Dynamic get_initialized_dyn();

		bool _created;
		bool get_created();
		::Dynamic get_created_dyn();

		bool _enabled;
		bool get_enabled();
		::Dynamic get_enabled_dyn();

		virtual bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		::String _toolTip;
		::String get_toolTip();
		::Dynamic get_toolTip_dyn();

		::String set_toolTip(::String value);
		::Dynamic set_toolTip_dyn();

		bool _themeEnabled;
		bool get_themeEnabled();
		::Dynamic get_themeEnabled_dyn();

		bool set_themeEnabled(bool value);
		::Dynamic set_themeEnabled_dyn();

		::Dynamic _currentStyleProvider;
		::Dynamic _customStyleProvider;
		::Dynamic get_styleProvider();
		::Dynamic get_styleProvider_dyn();

		::Dynamic set_styleProvider(::Dynamic value);
		::Dynamic set_styleProvider_dyn();

		virtual ::hx::Class get_styleContext();
		::Dynamic get_styleContext_dyn();

		bool _includeInLayout;
		bool get_includeInLayout();
		::Dynamic get_includeInLayout_dyn();

		bool set_includeInLayout(bool value);
		::Dynamic set_includeInLayout_dyn();

		::Dynamic _layoutData;
		::Dynamic get_layoutData();
		::Dynamic get_layoutData_dyn();

		::Dynamic set_layoutData(::Dynamic value);
		::Dynamic set_layoutData_dyn();

		Float _explicitAlpha;
		Float set_alpha(Float value);

		 ::Dynamic disabledAlpha;
		::Dynamic _focusManager;
		::Dynamic get_focusManager();
		::Dynamic get_focusManager_dyn();

		::Dynamic set_focusManager(::Dynamic value);
		::Dynamic set_focusManager_dyn();

		::Dynamic _focusOwner;
		::Dynamic get_focusOwner();
		::Dynamic get_focusOwner_dyn();

		::Dynamic set_focusOwner(::Dynamic value);
		::Dynamic set_focusOwner_dyn();

		bool get_rawTabEnabled();
		::Dynamic get_rawTabEnabled_dyn();

		bool _focusEnabled;
		bool get_focusEnabled();
		::Dynamic get_focusEnabled_dyn();

		bool set_focusEnabled(bool value);
		::Dynamic set_focusEnabled_dyn();

		virtual bool get_tabEnabled();

		 ::openfl::display::DisplayObject _focusRectSkin;
		 ::openfl::display::DisplayObject get_focusRectSkin();
		::Dynamic get_focusRectSkin_dyn();

		 ::openfl::display::DisplayObject set_focusRectSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_focusRectSkin_dyn();

		Float _focusPaddingTop;
		Float get_focusPaddingTop();
		::Dynamic get_focusPaddingTop_dyn();

		Float set_focusPaddingTop(Float value);
		::Dynamic set_focusPaddingTop_dyn();

		Float _focusPaddingRight;
		Float get_focusPaddingRight();
		::Dynamic get_focusPaddingRight_dyn();

		Float set_focusPaddingRight(Float value);
		::Dynamic set_focusPaddingRight_dyn();

		Float _focusPaddingBottom;
		Float get_focusPaddingBottom();
		::Dynamic get_focusPaddingBottom_dyn();

		Float set_focusPaddingBottom(Float value);
		::Dynamic set_focusPaddingBottom_dyn();

		Float _focusPaddingLeft;
		Float get_focusPaddingLeft();
		::Dynamic get_focusPaddingLeft_dyn();

		Float set_focusPaddingLeft(Float value);
		::Dynamic set_focusPaddingLeft_dyn();

		void setFocusPadding(Float value);
		::Dynamic setFocusPadding_dyn();

		void showFocus(bool show);
		::Dynamic showFocus_dyn();

		::Dynamic clearStyle_layoutData();
		::Dynamic clearStyle_layoutData_dyn();

		 ::openfl::display::DisplayObject clearStyle_focusRectSkin();
		::Dynamic clearStyle_focusRectSkin_dyn();

		Float clearStyle_focusPaddingTop();
		::Dynamic clearStyle_focusPaddingTop_dyn();

		Float clearStyle_focusPaddingRight();
		::Dynamic clearStyle_focusPaddingRight_dyn();

		Float clearStyle_focusPaddingBottom();
		::Dynamic clearStyle_focusPaddingBottom_dyn();

		Float clearStyle_focusPaddingLeft();
		::Dynamic clearStyle_focusPaddingLeft_dyn();

		void positionFocusRect();
		::Dynamic positionFocusRect_dyn();

		::Dynamic setLayoutDataInternal(::Dynamic value);
		::Dynamic setLayoutDataInternal_dyn();

		::String _variant;
		::String get_variant();
		::Dynamic get_variant_dyn();

		::String set_variant(::String value);
		::Dynamic set_variant_dyn();

		bool _applyingStyles;
		bool _clearingStyles;
		::Array< ::Dynamic> _styleProviderStyles;
		::Array< ::Dynamic> _restrictedStyles;
		virtual void validateNow();

		void initializeNow();
		::Dynamic initializeNow_dyn();

		void move(Float x,Float y);
		::Dynamic move_dyn();

		void setSize(Float width,Float height);
		::Dynamic setSize_dyn();

		virtual void initialize();
		::Dynamic initialize_dyn();

		bool setStyle(::String styleName, ::Dynamic state);
		::Dynamic setStyle_dyn();

		bool isStyleRestricted(::String styleName, ::Dynamic state);
		::Dynamic isStyleRestricted_dyn();

		bool containsStyleDef(::Array< ::Dynamic> target, ::feathers::core::_FeathersControl::StyleDefinition styleDef);
		::Dynamic containsStyleDef_dyn();

		void applyStyles();
		::Dynamic applyStyles_dyn();

		 ::Dynamic _previousClearStyle;
		void clearStyles();
		::Dynamic clearStyles_dyn();

		void clearStyleProvider();
		::Dynamic clearStyleProvider_dyn();

		void feathersControl_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic feathersControl_addedToStageHandler_dyn();

		void feathersControl_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic feathersControl_removedFromStageHandler_dyn();

		void feathersControl_focusInHandler( ::openfl::events::FocusEvent event);
		::Dynamic feathersControl_focusInHandler_dyn();

		void feathersControl_focusOutHandler( ::openfl::events::FocusEvent event);
		::Dynamic feathersControl_focusOutHandler_dyn();

		void styleProvider_stylesChangeHandler( ::feathers::events::StyleProviderEvent event);
		::Dynamic styleProvider_stylesChangeHandler_dyn();

		void customStyleProvider_clearHandler( ::openfl::events::Event event);
		::Dynamic customStyleProvider_clearHandler_dyn();

		void styleProvider_clearHandler( ::openfl::events::Event event);
		::Dynamic styleProvider_clearHandler_dyn();

		void layoutData_changeHandler( ::openfl::events::Event event);
		::Dynamic layoutData_changeHandler_dyn();

		void feathersControl_focusRect_enterFrameHandler( ::openfl::events::Event event);
		::Dynamic feathersControl_focusRect_enterFrameHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_FeathersControl */ 
