#ifndef INCLUDED_feathers_controls_Application
#define INCLUDED_feathers_controls_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,Application)
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IScaleManager)
HX_DECLARE_CLASS2(feathers,core,IToolTipManager)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
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


class HXCPP_CLASS_ATTRIBUTES Application_obj : public  ::feathers::controls::LayoutGroup_obj
{
	public:
		typedef  ::feathers::controls::LayoutGroup_obj super;
		typedef Application_obj OBJ_;
		Application_obj();

	public:
		enum { _hx_ClassId = 0x128a091e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.Application")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.Application"); }
		static ::hx::ObjectPtr< Application_obj > __new();
		static ::hx::ObjectPtr< Application_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Application_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Application",30,43,71,0e); }

		static  ::feathers::controls::Application _topLevelApplication;
		static  ::feathers::controls::Application get_topLevelApplication();
		static ::Dynamic get_topLevelApplication_dyn();

		static  ::openfl::display::DisplayObjectContainer defaultPopUpContainerFactory();
		static ::Dynamic defaultPopUpContainerFactory_dyn();

		Float _scaleFactor;
		Float get_scaleFactor();
		::Dynamic get_scaleFactor_dyn();

		::Dynamic _currentScaleManager;
		 ::Dynamic popUpContainerFactory;
		Dynamic popUpContainerFactory_dyn() { return popUpContainerFactory;}
		 ::openfl::display::DisplayObjectContainer _applicationPopUpContainer;
		::Dynamic _applicationFocusManager;
		::Dynamic _applicationToolTipManager;
		void initializeApplicationTheme();
		::Dynamic initializeApplicationTheme_dyn();

		void update();

		void refreshScaleManager();
		::Dynamic refreshScaleManager_dyn();

		void refreshDimensions();
		::Dynamic refreshDimensions_dyn();

		void preparePopUpManager();
		::Dynamic preparePopUpManager_dyn();

		void cleanupPopUpManager();
		::Dynamic cleanupPopUpManager_dyn();

		void prepareFocusManager();
		::Dynamic prepareFocusManager_dyn();

		void cleanupFocusManager();
		::Dynamic cleanupFocusManager_dyn();

		void prepareToolTipManager();
		::Dynamic prepareToolTipManager_dyn();

		void cleanupToolTipManager();
		::Dynamic cleanupToolTipManager_dyn();

		void application_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic application_addedToStageHandler_dyn();

		void application_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic application_removedFromStageHandler_dyn();

		void application_scaleManager_changeHandler( ::openfl::events::Event event);
		::Dynamic application_scaleManager_changeHandler_dyn();

		::hx::Class get_styleContext();

		::Dynamic _hx___scaleManager;
		::Dynamic get_scaleManager();
		::Dynamic get_scaleManager_dyn();

		::Dynamic set_scaleManager(::Dynamic value);
		::Dynamic set_scaleManager_dyn();

		::Dynamic clearStyle_scaleManager();
		::Dynamic clearStyle_scaleManager_dyn();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_Application */ 
