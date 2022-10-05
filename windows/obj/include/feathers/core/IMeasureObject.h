#ifndef INCLUDED_feathers_core_IMeasureObject
#define INCLUDED_feathers_core_IMeasureObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IMeasureObject_obj {
	public:
		typedef  ::feathers::core::IDisplayObject_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_willTrigger)(type);
		}
		Float (::hx::Object :: *_hx_get_x)(); 
		static inline Float get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_x)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_get_y)(); 
		static inline Float get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_y)();
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_height)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleX)(); 
		static inline Float get_scaleX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_scaleX)();
		}
		Float (::hx::Object :: *_hx_set_scaleX)(Float value); 
		static inline Float set_scaleX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_scaleX)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleY)(); 
		static inline Float get_scaleY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_scaleY)();
		}
		Float (::hx::Object :: *_hx_set_scaleY)(Float value); 
		static inline Float set_scaleY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_scaleY)(value);
		}
		Float (::hx::Object :: *_hx_get_alpha)(); 
		static inline Float get_alpha( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_alpha)();
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_alpha)(value);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_visible)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitWidth)(); 
		static inline  ::Dynamic get_explicitWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitHeight)(); 
		static inline  ::Dynamic get_explicitHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMinWidth)(); 
		static inline  ::Dynamic get_explicitMinWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitMinWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMinHeight)(); 
		static inline  ::Dynamic get_explicitMinHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitMinHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMaxWidth)(); 
		static inline  ::Dynamic get_explicitMaxWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitMaxWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMaxHeight)(); 
		static inline  ::Dynamic get_explicitMaxHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_explicitMaxHeight)();
		}
		Float (::hx::Object :: *_hx_get_minWidth)(); 
		static inline Float get_minWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_minWidth)();
		}
		Float (::hx::Object :: *_hx_set_minWidth)(Float value); 
		static inline Float set_minWidth( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_minWidth)(value);
		}
		Float (::hx::Object :: *_hx_get_minHeight)(); 
		static inline Float get_minHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_minHeight)();
		}
		Float (::hx::Object :: *_hx_set_minHeight)(Float value); 
		static inline Float set_minHeight( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_minHeight)(value);
		}
		Float (::hx::Object :: *_hx_get_maxWidth)(); 
		static inline Float get_maxWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_maxWidth)();
		}
		Float (::hx::Object :: *_hx_set_maxWidth)(Float value); 
		static inline Float set_maxWidth( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_maxWidth)(value);
		}
		Float (::hx::Object :: *_hx_get_maxHeight)(); 
		static inline Float get_maxHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_get_maxHeight)();
		}
		Float (::hx::Object :: *_hx_set_maxHeight)(Float value); 
		static inline Float set_maxHeight( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_set_maxHeight)(value);
		}
		void (::hx::Object :: *_hx_resetWidth)(); 
		static inline void resetWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetWidth)();
		}
		void (::hx::Object :: *_hx_resetHeight)(); 
		static inline void resetHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetHeight)();
		}
		void (::hx::Object :: *_hx_resetMinWidth)(); 
		static inline void resetMinWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetMinWidth)();
		}
		void (::hx::Object :: *_hx_resetMinHeight)(); 
		static inline void resetMinHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetMinHeight)();
		}
		void (::hx::Object :: *_hx_resetMaxWidth)(); 
		static inline void resetMaxWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetMaxWidth)();
		}
		void (::hx::Object :: *_hx_resetMaxHeight)(); 
		static inline void resetMaxHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IMeasureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xcfc32883)))->_hx_resetMaxHeight)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IMeasureObject */ 
