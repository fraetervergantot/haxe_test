#ifndef INCLUDED_feathers_core_DefaultFocusManager
#define INCLUDED_feathers_core_DefaultFocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManager
#include <feathers/core/IFocusManager.h>
#endif
HX_DECLARE_CLASS2(feathers,core,DefaultFocusManager)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS3(feathers,core,_DefaultFocusManager,FocusResult)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES DefaultFocusManager_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DefaultFocusManager_obj OBJ_;
		DefaultFocusManager_obj();

	public:
		enum { _hx_ClassId = 0x17998cc7 };

		void __construct( ::openfl::display::DisplayObject root);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.DefaultFocusManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.DefaultFocusManager"); }
		static ::hx::ObjectPtr< DefaultFocusManager_obj > __new( ::openfl::display::DisplayObject root);
		static ::hx::ObjectPtr< DefaultFocusManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject root);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultFocusManager_obj();

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
		::String __ToString() const { return HX_("DefaultFocusManager",b6,bf,49,45); }

		static void __boot();
		static int WRAP_OBJECT_HIGH_TAB_INDEX;
		bool _enabled;
		bool get_enabled();
		::Dynamic get_enabled_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		 ::openfl::display::DisplayObject _root;
		 ::openfl::display::DisplayObject get_root();
		::Dynamic get_root_dyn();

		 ::openfl::display::DisplayObject set_root( ::openfl::display::DisplayObject value);
		::Dynamic set_root_dyn();

		 ::openfl::display::DisplayObjectContainer _focusPane;
		 ::openfl::display::DisplayObjectContainer get_focusPane();
		::Dynamic get_focusPane_dyn();

		bool _showFocusIndicator;
		bool get_showFocusIndicator();
		::Dynamic get_showFocusIndicator_dyn();

		::Dynamic _focusToRestore;
		::Dynamic get_focus();
		::Dynamic get_focus_dyn();

		::Dynamic set_focus(::Dynamic value);
		::Dynamic set_focus_dyn();

		 ::openfl::display::InteractiveObject _wrapObject;
		void dispose();
		::Dynamic dispose_dyn();

		::Dynamic findNextFocus(::hx::Null< bool >  backward);
		::Dynamic findNextFocus_dyn();

		 ::feathers::core::_DefaultFocusManager::FocusResult findNextFocusInternal(::hx::Null< bool >  backward);
		::Dynamic findNextFocusInternal_dyn();

		 ::feathers::core::_DefaultFocusManager::FocusResult findNextRelativeFocusInternal(int keyCode);
		::Dynamic findNextRelativeFocusInternal_dyn();

		bool isValidFocusWithKeyboard(::Dynamic target);
		::Dynamic isValidFocusWithKeyboard_dyn();

		bool isValidFocus(::Dynamic target,::hx::Null< bool >  allowIfUnderModal);
		::Dynamic isValidFocus_dyn();

		void setFocusManager( ::openfl::display::DisplayObject target);
		::Dynamic setFocusManager_dyn();

		void clearFocusManager( ::openfl::display::DisplayObject target);
		::Dynamic clearFocusManager_dyn();

		::Dynamic findPreviousContainerFocus( ::openfl::display::DisplayObjectContainer container, ::openfl::display::DisplayObject beforeChild,bool fallbackToGlobal);
		::Dynamic findPreviousContainerFocus_dyn();

		::Dynamic findNextContainerFocus( ::openfl::display::DisplayObjectContainer container, ::openfl::display::DisplayObject afterChild,bool fallbackToGlobal);
		::Dynamic findNextContainerFocus_dyn();

		::Dynamic findPreviousChildFocus( ::openfl::display::DisplayObject child);
		::Dynamic findPreviousChildFocus_dyn();

		::Dynamic findNextChildFocus( ::openfl::display::DisplayObject child);
		::Dynamic findNextChildFocus_dyn();

		void setStageFocus( ::openfl::display::InteractiveObject value);
		::Dynamic setStageFocus_dyn();

		void handleRootAddedToStage( ::openfl::display::DisplayObject root);
		::Dynamic handleRootAddedToStage_dyn();

		void handleRootRemovedFromStage( ::openfl::display::DisplayObject root);
		::Dynamic handleRootRemovedFromStage_dyn();

		void defaultFocusManager_root_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_addedToStageHandler_dyn();

		void defaultFocusManager_root_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_removedFromStageHandler_dyn();

		void restoreFocus();
		::Dynamic restoreFocus_dyn();

		bool shouldBeManaged( ::openfl::display::DisplayObject target);
		::Dynamic shouldBeManaged_dyn();

		void defaultFocusManager_root_addedHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_addedHandler_dyn();

		void defaultFocusManager_root_removedHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_removedHandler_dyn();

		void defaultFocusManager_root_mouseFocusChangeHandler( ::openfl::events::FocusEvent event);
		::Dynamic defaultFocusManager_root_mouseFocusChangeHandler_dyn();

		void handleKeyDownFocusWrapping( ::openfl::events::KeyboardEvent event);
		::Dynamic handleKeyDownFocusWrapping_dyn();

		void handleDPadArrowKeys( ::openfl::events::KeyboardEvent event);
		::Dynamic handleDPadArrowKeys_dyn();

		void defaultFocusManager_root_keyDownHandler( ::openfl::events::KeyboardEvent event);
		::Dynamic defaultFocusManager_root_keyDownHandler_dyn();

		void defaultFocusManager_root_keyFocusChangeHandler( ::openfl::events::FocusEvent event);
		::Dynamic defaultFocusManager_root_keyFocusChangeHandler_dyn();

		::Dynamic findFocusForDisplayObject( ::openfl::display::DisplayObject target,::hx::Null< bool >  allowIfUnderModal);
		::Dynamic findFocusForDisplayObject_dyn();

		void defaultFocusManager_root_mouseDownCaptureHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultFocusManager_root_mouseDownCaptureHandler_dyn();

		void defaultFocusManager_root_focusInCaptureHandler( ::openfl::events::FocusEvent event);
		::Dynamic defaultFocusManager_root_focusInCaptureHandler_dyn();

		void defaultFocusManager_root_activateHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_activateHandler_dyn();

		void defaultFocusManager_root_deactivateHandler( ::openfl::events::Event event);
		::Dynamic defaultFocusManager_root_deactivateHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_DefaultFocusManager */ 
