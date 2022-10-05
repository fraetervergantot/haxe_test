#ifndef INCLUDED_feathers_core_DefaultPopUpManager
#define INCLUDED_feathers_core_DefaultPopUpManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IPopUpManager
#include <feathers/core/IPopUpManager.h>
#endif
HX_DECLARE_CLASS2(feathers,core,DefaultPopUpManager)
HX_DECLARE_CLASS2(feathers,core,IPopUpManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES DefaultPopUpManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultPopUpManager_obj OBJ_;
		DefaultPopUpManager_obj();

	public:
		enum { _hx_ClassId = 0x631774d3 };

		void __construct( ::openfl::display::DisplayObjectContainer root);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.DefaultPopUpManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.DefaultPopUpManager"); }
		static ::hx::ObjectPtr< DefaultPopUpManager_obj > __new( ::openfl::display::DisplayObjectContainer root);
		static ::hx::ObjectPtr< DefaultPopUpManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer root);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultPopUpManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DefaultPopUpManager",c2,a7,c7,90); }

		static  ::openfl::display::DisplayObject defaultOverlayFactory();
		static ::Dynamic defaultOverlayFactory_dyn();

		bool _ignoreRemoval;
		 ::openfl::display::DisplayObjectContainer _root;
		 ::openfl::display::DisplayObjectContainer get_root();
		::Dynamic get_root_dyn();

		 ::openfl::display::DisplayObjectContainer set_root( ::openfl::display::DisplayObjectContainer value);
		::Dynamic set_root_dyn();

		::Array< ::Dynamic> popUps;
		::Array< ::Dynamic> _centeredPopUps;
		 ::haxe::ds::ObjectMap _popUpToOverlay;
		 ::Dynamic _overlayFactory;
		Dynamic _overlayFactory_dyn() { return _overlayFactory;}
		 ::Dynamic get_overlayFactory();
		::Dynamic get_overlayFactory_dyn();

		 ::Dynamic set_overlayFactory( ::Dynamic value);
		::Dynamic set_overlayFactory_dyn();

		int get_popUpCount();
		::Dynamic get_popUpCount_dyn();

		int get_topLevelPopUpCount();
		::Dynamic get_topLevelPopUpCount_dyn();

		 ::openfl::display::DisplayObject getPopUpAt(int index);
		::Dynamic getPopUpAt_dyn();

		bool isPopUp( ::openfl::display::DisplayObject target);
		::Dynamic isPopUp_dyn();

		bool isTopLevelPopUp( ::openfl::display::DisplayObject target);
		::Dynamic isTopLevelPopUp_dyn();

		bool isModal( ::openfl::display::DisplayObject target);
		::Dynamic isModal_dyn();

		bool hasModalPopUps();
		::Dynamic hasModalPopUps_dyn();

		 ::openfl::display::DisplayObject addPopUp( ::openfl::display::DisplayObject popUp,::hx::Null< bool >  isModal,::hx::Null< bool >  isCentered, ::Dynamic customOverlayFactory);
		::Dynamic addPopUp_dyn();

		 ::openfl::display::DisplayObject removePopUp( ::openfl::display::DisplayObject popUp);
		::Dynamic removePopUp_dyn();

		void removeAllPopUps();
		::Dynamic removeAllPopUps_dyn();

		void centerPopUp( ::openfl::display::DisplayObject popUp);
		::Dynamic centerPopUp_dyn();

		void cleanupOverlay( ::openfl::display::DisplayObject popUp);
		::Dynamic cleanupOverlay_dyn();

		void defaultPopUpManager_popUp_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic defaultPopUpManager_popUp_removedFromStageHandler_dyn();

		void defaultPopUpManager_popUp_resizeHandler( ::openfl::events::Event event);
		::Dynamic defaultPopUpManager_popUp_resizeHandler_dyn();

		void defaultPopUpManager_stage_resizeHandler( ::openfl::events::Event event);
		::Dynamic defaultPopUpManager_stage_resizeHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_DefaultPopUpManager */ 
