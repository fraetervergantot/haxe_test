#ifndef INCLUDED_feathers_core_IFocusManager
#define INCLUDED_feathers_core_IFocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IFocusManager_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_willTrigger)(type);
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_get_root)(); 
		static inline  ::openfl::display::DisplayObject get_root( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_get_root)();
		}
		::Dynamic (::hx::Object :: *_hx_get_focus)(); 
		static inline ::Dynamic get_focus( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_get_focus)();
		}
		::Dynamic (::hx::Object :: *_hx_set_focus)(::Dynamic value); 
		static inline ::Dynamic set_focus( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_set_focus)(value);
		}
		 ::openfl::display::DisplayObjectContainer (::hx::Object :: *_hx_get_focusPane)(); 
		static inline  ::openfl::display::DisplayObjectContainer get_focusPane( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_get_focusPane)();
		}
		bool (::hx::Object :: *_hx_get_showFocusIndicator)(); 
		static inline bool get_showFocusIndicator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_get_showFocusIndicator)();
		}
		bool (::hx::Object :: *_hx_get_enabled)(); 
		static inline bool get_enabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_get_enabled)();
		}
		bool (::hx::Object :: *_hx_set_enabled)(bool value); 
		static inline bool set_enabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_set_enabled)(value);
		}
		::Dynamic (::hx::Object :: *_hx_findNextFocus)(::hx::Null< bool >  backward); 
		static inline ::Dynamic findNextFocus( ::Dynamic _hx_,::hx::Null< bool >  backward) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_findNextFocus)(backward);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManager_obj *>(_hx_.mPtr->_hx_getInterface(0x3511c06f)))->_hx_dispose)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IFocusManager */ 
