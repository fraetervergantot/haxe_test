#ifndef INCLUDED_feathers_core_IHTMLTextControl
#define INCLUDED_feathers_core_IHTMLTextControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IHTMLTextControl_obj {
	public:
		typedef  ::feathers::core::IUIControl_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_willTrigger)(type);
		}
		Float (::hx::Object :: *_hx_get_x)(); 
		static inline Float get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_x)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_get_y)(); 
		static inline Float get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_y)();
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_height)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleX)(); 
		static inline Float get_scaleX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_scaleX)();
		}
		Float (::hx::Object :: *_hx_set_scaleX)(Float value); 
		static inline Float set_scaleX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_scaleX)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleY)(); 
		static inline Float get_scaleY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_scaleY)();
		}
		Float (::hx::Object :: *_hx_set_scaleY)(Float value); 
		static inline Float set_scaleY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_scaleY)(value);
		}
		Float (::hx::Object :: *_hx_get_alpha)(); 
		static inline Float get_alpha( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_alpha)();
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_alpha)(value);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_visible)(value);
		}
		bool (::hx::Object :: *_hx_get_enabled)(); 
		static inline bool get_enabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_enabled)();
		}
		bool (::hx::Object :: *_hx_set_enabled)(bool value); 
		static inline bool set_enabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_enabled)(value);
		}
		::String (::hx::Object :: *_hx_get_toolTip)(); 
		static inline ::String get_toolTip( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_toolTip)();
		}
		::String (::hx::Object :: *_hx_set_toolTip)(::String value); 
		static inline ::String set_toolTip( ::Dynamic _hx_,::String value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_toolTip)(value);
		}
		void (::hx::Object :: *_hx_initializeNow)(); 
		static inline void initializeNow( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_initializeNow)();
		}
		::String (::hx::Object :: *_hx_get_htmlText)(); 
		static inline ::String get_htmlText( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_get_htmlText)();
		}
		::String (::hx::Object :: *_hx_set_htmlText)(::String value); 
		static inline ::String set_htmlText( ::Dynamic _hx_,::String value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IHTMLTextControl_obj *>(_hx_.mPtr->_hx_getInterface(0x13e7e7eb)))->_hx_set_htmlText)(value);
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IHTMLTextControl */ 
