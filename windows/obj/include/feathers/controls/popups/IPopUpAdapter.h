#ifndef INCLUDED_feathers_controls_popups_IPopUpAdapter
#define INCLUDED_feathers_controls_popups_IPopUpAdapter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS3(feathers,controls,popups,IPopUpAdapter)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES IPopUpAdapter_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_willTrigger)(type);
		}
		bool (::hx::Object :: *_hx_get_active)(); 
		static inline bool get_active( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_get_active)();
		}
		bool (::hx::Object :: *_hx_get_persistent)(); 
		static inline bool get_persistent( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_get_persistent)();
		}
		void (::hx::Object :: *_hx_open)( ::openfl::display::DisplayObject content, ::openfl::display::DisplayObject source); 
		static inline void open( ::Dynamic _hx_, ::openfl::display::DisplayObject content, ::openfl::display::DisplayObject source) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_open)(content,source);
		}
		void (::hx::Object :: *_hx_close)(); 
		static inline void close( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::popups::IPopUpAdapter_obj *>(_hx_.mPtr->_hx_getInterface(0x8c7b3dbf)))->_hx_close)();
		}
};

} // end namespace feathers
} // end namespace controls
} // end namespace popups

#endif /* INCLUDED_feathers_controls_popups_IPopUpAdapter */ 
