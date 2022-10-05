#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#define INCLUDED_feathers_core_IStageFocusDelegate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IStageFocusDelegate)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IStageFocusDelegate_obj {
	public:
		typedef  ::feathers::core::IFocusObject_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_willTrigger)(type);
		}
		Float (::hx::Object :: *_hx_get_x)(); 
		static inline Float get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_x)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_get_y)(); 
		static inline Float get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_y)();
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_height)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleX)(); 
		static inline Float get_scaleX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_scaleX)();
		}
		Float (::hx::Object :: *_hx_set_scaleX)(Float value); 
		static inline Float set_scaleX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_scaleX)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleY)(); 
		static inline Float get_scaleY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_scaleY)();
		}
		Float (::hx::Object :: *_hx_set_scaleY)(Float value); 
		static inline Float set_scaleY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_scaleY)(value);
		}
		Float (::hx::Object :: *_hx_get_alpha)(); 
		static inline Float get_alpha( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_alpha)();
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_alpha)(value);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_visible)(value);
		}
		bool (::hx::Object :: *_hx_get_focusEnabled)(); 
		static inline bool get_focusEnabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_focusEnabled)();
		}
		bool (::hx::Object :: *_hx_set_focusEnabled)(bool value); 
		static inline bool set_focusEnabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_focusEnabled)(value);
		}
		::Dynamic (::hx::Object :: *_hx_get_focusOwner)(); 
		static inline ::Dynamic get_focusOwner( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_focusOwner)();
		}
		::Dynamic (::hx::Object :: *_hx_set_focusOwner)(::Dynamic value); 
		static inline ::Dynamic set_focusOwner( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_set_focusOwner)(value);
		}
		void (::hx::Object :: *_hx_showFocus)(bool show); 
		static inline void showFocus( ::Dynamic _hx_,bool show) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_showFocus)(show);
		}
		 ::openfl::display::InteractiveObject (::hx::Object :: *_hx_get_stageFocusTarget)(); 
		static inline  ::openfl::display::InteractiveObject get_stageFocusTarget( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStageFocusDelegate_obj *>(_hx_.mPtr->_hx_getInterface(0x4afbe419)))->_hx_get_stageFocusTarget)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IStageFocusDelegate */ 
