#ifndef INCLUDED_HomeView
#define INCLUDED_HomeView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
HX_DECLARE_CLASS0(HomeView)
HX_DECLARE_CLASS2(feathers,controls,Application)
HX_DECLARE_CLASS2(feathers,controls,BasicButton)
HX_DECLARE_CLASS2(feathers,controls,Button)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS2(feathers,controls,Label)
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStageFocusDelegate)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,TriggerEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)



class HXCPP_CLASS_ATTRIBUTES HomeView_obj : public  ::feathers::controls::Application_obj
{
	public:
		typedef  ::feathers::controls::Application_obj super;
		typedef HomeView_obj OBJ_;
		HomeView_obj();

	public:
		enum { _hx_ClassId = 0x6f16d304 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HomeView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HomeView"); }
		static ::hx::ObjectPtr< HomeView_obj > __new();
		static ::hx::ObjectPtr< HomeView_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HomeView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HomeView",44,e0,85,13); }

		 ::openfl::display::Bitmap picture;
		 ::feathers::controls::Label label_out;
		 ::feathers::controls::Button button;
		::Array< ::Dynamic> rows;
		::Array< ::Dynamic> buttons;
		void createRows();
		::Dynamic createRows_dyn();

		void createButtons();
		::Dynamic createButtons_dyn();

		void buttons_trigerHandler( ::feathers::events::TriggerEvent event);
		::Dynamic buttons_trigerHandler_dyn();

		void showMessage(int num);
		::Dynamic showMessage_dyn();

		void scrollUp( ::openfl::events::MouseEvent event);
		::Dynamic scrollUp_dyn();

		void scrollDown( ::openfl::events::MouseEvent event);
		::Dynamic scrollDown_dyn();

		void scrollLeft( ::openfl::events::MouseEvent event);
		::Dynamic scrollLeft_dyn();

		void scrollRight( ::openfl::events::MouseEvent event);
		::Dynamic scrollRight_dyn();

};


#endif /* INCLUDED_HomeView */ 
