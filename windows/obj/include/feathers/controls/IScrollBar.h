#ifndef INCLUDED_feathers_controls_IScrollBar
#define INCLUDED_feathers_controls_IScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_IRange
#include <feathers/controls/IRange.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IRange)
HX_DECLARE_CLASS2(feathers,controls,IScrollBar)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES IScrollBar_obj {
	public:
		typedef  ::feathers::controls::IRange_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_willTrigger)(type);
		}
		Float (::hx::Object :: *_hx_get_x)(); 
		static inline Float get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_x)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_get_y)(); 
		static inline Float get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_y)();
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_height)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleX)(); 
		static inline Float get_scaleX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_scaleX)();
		}
		Float (::hx::Object :: *_hx_set_scaleX)(Float value); 
		static inline Float set_scaleX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_scaleX)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleY)(); 
		static inline Float get_scaleY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_scaleY)();
		}
		Float (::hx::Object :: *_hx_set_scaleY)(Float value); 
		static inline Float set_scaleY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_scaleY)(value);
		}
		Float (::hx::Object :: *_hx_get_alpha)(); 
		static inline Float get_alpha( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_alpha)();
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_alpha)(value);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_visible)(value);
		}
		bool (::hx::Object :: *_hx_get_enabled)(); 
		static inline bool get_enabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_enabled)();
		}
		bool (::hx::Object :: *_hx_set_enabled)(bool value); 
		static inline bool set_enabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_enabled)(value);
		}
		::String (::hx::Object :: *_hx_get_toolTip)(); 
		static inline ::String get_toolTip( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_toolTip)();
		}
		::String (::hx::Object :: *_hx_set_toolTip)(::String value); 
		static inline ::String set_toolTip( ::Dynamic _hx_,::String value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_toolTip)(value);
		}
		void (::hx::Object :: *_hx_initializeNow)(); 
		static inline void initializeNow( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_initializeNow)();
		}
		Float (::hx::Object :: *_hx_get_value)(); 
		static inline Float get_value( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_value)();
		}
		Float (::hx::Object :: *_hx_set_value)(Float value); 
		static inline Float set_value( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_value)(value);
		}
		Float (::hx::Object :: *_hx_get_minimum)(); 
		static inline Float get_minimum( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_minimum)();
		}
		Float (::hx::Object :: *_hx_set_minimum)(Float value); 
		static inline Float set_minimum( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_minimum)(value);
		}
		Float (::hx::Object :: *_hx_get_maximum)(); 
		static inline Float get_maximum( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_maximum)();
		}
		Float (::hx::Object :: *_hx_set_maximum)(Float value); 
		static inline Float set_maximum( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_maximum)(value);
		}
		Float (::hx::Object :: *_hx_get_step)(); 
		static inline Float get_step( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_step)();
		}
		Float (::hx::Object :: *_hx_set_step)(Float value); 
		static inline Float set_step( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_step)(value);
		}
		Float (::hx::Object :: *_hx_get_page)(); 
		static inline Float get_page( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_get_page)();
		}
		Float (::hx::Object :: *_hx_set_page)(Float value); 
		static inline Float set_page( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::IScrollBar_obj *>(_hx_.mPtr->_hx_getInterface(0xa9590423)))->_hx_set_page)(value);
		}
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_IScrollBar */ 
