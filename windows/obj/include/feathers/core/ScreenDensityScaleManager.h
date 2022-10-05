#ifndef INCLUDED_feathers_core_ScreenDensityScaleManager
#define INCLUDED_feathers_core_ScreenDensityScaleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IScaleManager)
HX_DECLARE_CLASS2(feathers,core,ScreenDensityScaleManager)
HX_DECLARE_CLASS2(feathers,utils,ScreenDensityScaleCalculator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ScreenDensityScaleManager_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ScreenDensityScaleManager_obj OBJ_;
		ScreenDensityScaleManager_obj();

	public:
		enum { _hx_ClassId = 0x4a0f5acc };

		void __construct( ::feathers::utils::ScreenDensityScaleCalculator scaler);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.ScreenDensityScaleManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.ScreenDensityScaleManager"); }
		static ::hx::ObjectPtr< ScreenDensityScaleManager_obj > __new( ::feathers::utils::ScreenDensityScaleCalculator scaler);
		static ::hx::ObjectPtr< ScreenDensityScaleManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::feathers::utils::ScreenDensityScaleCalculator scaler);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenDensityScaleManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ScreenDensityScaleManager",df,28,66,3f); }

		 ::openfl::display::DisplayObject _target;
		 ::openfl::display::DisplayObject get_target();
		::Dynamic get_target_dyn();

		 ::openfl::display::DisplayObject set_target( ::openfl::display::DisplayObject value);
		::Dynamic set_target_dyn();

		 ::feathers::utils::ScreenDensityScaleCalculator _scaler;
		 ::feathers::utils::ScreenDensityScaleCalculator get_scaler();
		::Dynamic get_scaler_dyn();

		 ::feathers::utils::ScreenDensityScaleCalculator set_scaler( ::feathers::utils::ScreenDensityScaleCalculator value);
		::Dynamic set_scaler_dyn();

		Float getScale();
		::Dynamic getScale_dyn();

		 ::openfl::geom::Rectangle getBounds();
		::Dynamic getBounds_dyn();

		void addTargetStageListeners();
		::Dynamic addTargetStageListeners_dyn();

		void removeTargetStageListeners();
		::Dynamic removeTargetStageListeners_dyn();

		void screenDensityScaleManager_target_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic screenDensityScaleManager_target_addedToStageHandler_dyn();

		void screenDensityScaleManager_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic screenDensityScaleManager_target_removedFromStageHandler_dyn();

		void screenDensityScaleManager_stage_resizeHandler( ::openfl::events::Event event);
		::Dynamic screenDensityScaleManager_stage_resizeHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_ScreenDensityScaleManager */ 
