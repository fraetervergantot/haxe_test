#ifndef INCLUDED_feathers_skins_ProgrammaticSkin
#define INCLUDED_feathers_skins_ProgrammaticSkin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_IStateObserver
#include <feathers/core/IStateObserver.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,IStateObserver)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,FeathersEvent)
HX_DECLARE_CLASS2(feathers,skins,IProgrammaticSkin)
HX_DECLARE_CLASS2(feathers,skins,ProgrammaticSkin)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES ProgrammaticSkin_obj : public  ::feathers::core::MeasureSprite_obj
{
	public:
		typedef  ::feathers::core::MeasureSprite_obj super;
		typedef ProgrammaticSkin_obj OBJ_;
		ProgrammaticSkin_obj();

	public:
		enum { _hx_ClassId = 0x07456291 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.skins.ProgrammaticSkin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.skins.ProgrammaticSkin"); }
		static ::hx::ObjectPtr< ProgrammaticSkin_obj > __new();
		static ::hx::ObjectPtr< ProgrammaticSkin_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProgrammaticSkin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ProgrammaticSkin",33,77,e1,93); }

		::Dynamic _uiContext;
		::Dynamic get_uiContext();
		::Dynamic get_uiContext_dyn();

		::Dynamic set_uiContext(::Dynamic value);
		::Dynamic set_uiContext_dyn();

		::Dynamic _stateContext;
		::Dynamic get_stateContext();
		::Dynamic get_stateContext_dyn();

		::Dynamic set_stateContext(::Dynamic value);
		::Dynamic set_stateContext_dyn();

		void onAddUIContext();
		::Dynamic onAddUIContext_dyn();

		void onRemoveUIContext();
		::Dynamic onRemoveUIContext_dyn();

		virtual void update();

		virtual bool needsStateUpdate();
		::Dynamic needsStateUpdate_dyn();

		void checkForStateChange();
		::Dynamic checkForStateChange_dyn();

		void uiContext_stateChangeHandler( ::feathers::events::FeathersEvent event);
		::Dynamic uiContext_stateChangeHandler_dyn();

		void uiContextToggle_changeHandler( ::openfl::events::Event event);
		::Dynamic uiContextToggle_changeHandler_dyn();

		void stateContext_stateChangeHandler( ::feathers::events::FeathersEvent event);
		::Dynamic stateContext_stateChangeHandler_dyn();

		void stateContextToggle_changeHandler( ::openfl::events::Event event);
		::Dynamic stateContextToggle_changeHandler_dyn();

};

} // end namespace feathers
} // end namespace skins

#endif /* INCLUDED_feathers_skins_ProgrammaticSkin */ 
