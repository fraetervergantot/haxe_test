#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#define INCLUDED_feathers_controls_supportClasses_IViewPort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES IViewPort_obj {
	public:
		typedef  ::feathers::core::IMeasureObject_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_willTrigger)(type);
		}
		Float (::hx::Object :: *_hx_get_x)(); 
		static inline Float get_x( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_x)();
		}
		Float (::hx::Object :: *_hx_set_x)(Float value); 
		static inline Float set_x( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_x)(value);
		}
		Float (::hx::Object :: *_hx_get_y)(); 
		static inline Float get_y( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_y)();
		}
		Float (::hx::Object :: *_hx_set_y)(Float value); 
		static inline Float set_y( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_y)(value);
		}
		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_set_width)(Float value); 
		static inline Float set_width( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_width)(value);
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_height)();
		}
		Float (::hx::Object :: *_hx_set_height)(Float value); 
		static inline Float set_height( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_height)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleX)(); 
		static inline Float get_scaleX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_scaleX)();
		}
		Float (::hx::Object :: *_hx_set_scaleX)(Float value); 
		static inline Float set_scaleX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_scaleX)(value);
		}
		Float (::hx::Object :: *_hx_get_scaleY)(); 
		static inline Float get_scaleY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_scaleY)();
		}
		Float (::hx::Object :: *_hx_set_scaleY)(Float value); 
		static inline Float set_scaleY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_scaleY)(value);
		}
		Float (::hx::Object :: *_hx_get_alpha)(); 
		static inline Float get_alpha( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_alpha)();
		}
		Float (::hx::Object :: *_hx_set_alpha)(Float value); 
		static inline Float set_alpha( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_alpha)(value);
		}
		bool (::hx::Object :: *_hx_get_visible)(); 
		static inline bool get_visible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_visible)();
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_visible)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitWidth)(); 
		static inline  ::Dynamic get_explicitWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitHeight)(); 
		static inline  ::Dynamic get_explicitHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMinWidth)(); 
		static inline  ::Dynamic get_explicitMinWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitMinWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMinHeight)(); 
		static inline  ::Dynamic get_explicitMinHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitMinHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMaxWidth)(); 
		static inline  ::Dynamic get_explicitMaxWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitMaxWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_explicitMaxHeight)(); 
		static inline  ::Dynamic get_explicitMaxHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_explicitMaxHeight)();
		}
		Float (::hx::Object :: *_hx_get_minWidth)(); 
		static inline Float get_minWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_minWidth)();
		}
		Float (::hx::Object :: *_hx_set_minWidth)(Float value); 
		static inline Float set_minWidth( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_minWidth)(value);
		}
		Float (::hx::Object :: *_hx_get_minHeight)(); 
		static inline Float get_minHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_minHeight)();
		}
		Float (::hx::Object :: *_hx_set_minHeight)(Float value); 
		static inline Float set_minHeight( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_minHeight)(value);
		}
		Float (::hx::Object :: *_hx_get_maxWidth)(); 
		static inline Float get_maxWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_maxWidth)();
		}
		Float (::hx::Object :: *_hx_set_maxWidth)(Float value); 
		static inline Float set_maxWidth( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_maxWidth)(value);
		}
		Float (::hx::Object :: *_hx_get_maxHeight)(); 
		static inline Float get_maxHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_maxHeight)();
		}
		Float (::hx::Object :: *_hx_set_maxHeight)(Float value); 
		static inline Float set_maxHeight( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_maxHeight)(value);
		}
		void (::hx::Object :: *_hx_resetWidth)(); 
		static inline void resetWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetWidth)();
		}
		void (::hx::Object :: *_hx_resetHeight)(); 
		static inline void resetHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetHeight)();
		}
		void (::hx::Object :: *_hx_resetMinWidth)(); 
		static inline void resetMinWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetMinWidth)();
		}
		void (::hx::Object :: *_hx_resetMinHeight)(); 
		static inline void resetMinHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetMinHeight)();
		}
		void (::hx::Object :: *_hx_resetMaxWidth)(); 
		static inline void resetMaxWidth( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetMaxWidth)();
		}
		void (::hx::Object :: *_hx_resetMaxHeight)(); 
		static inline void resetMaxHeight( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_resetMaxHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_visibleWidth)(); 
		static inline  ::Dynamic get_visibleWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_visibleWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_visibleWidth)( ::Dynamic value); 
		static inline  ::Dynamic set_visibleWidth( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_visibleWidth)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_visibleHeight)(); 
		static inline  ::Dynamic get_visibleHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_visibleHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_visibleHeight)( ::Dynamic value); 
		static inline  ::Dynamic set_visibleHeight( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_visibleHeight)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_minVisibleWidth)(); 
		static inline  ::Dynamic get_minVisibleWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_minVisibleWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_minVisibleWidth)( ::Dynamic value); 
		static inline  ::Dynamic set_minVisibleWidth( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_minVisibleWidth)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_minVisibleHeight)(); 
		static inline  ::Dynamic get_minVisibleHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_minVisibleHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_minVisibleHeight)( ::Dynamic value); 
		static inline  ::Dynamic set_minVisibleHeight( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_minVisibleHeight)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_maxVisibleWidth)(); 
		static inline  ::Dynamic get_maxVisibleWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_maxVisibleWidth)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_maxVisibleWidth)( ::Dynamic value); 
		static inline  ::Dynamic set_maxVisibleWidth( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_maxVisibleWidth)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_maxVisibleHeight)(); 
		static inline  ::Dynamic get_maxVisibleHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_maxVisibleHeight)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_maxVisibleHeight)( ::Dynamic value); 
		static inline  ::Dynamic set_maxVisibleHeight( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_maxVisibleHeight)(value);
		}
		Float (::hx::Object :: *_hx_get_scrollX)(); 
		static inline Float get_scrollX( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_scrollX)();
		}
		Float (::hx::Object :: *_hx_set_scrollX)(Float value); 
		static inline Float set_scrollX( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_scrollX)(value);
		}
		Float (::hx::Object :: *_hx_get_scrollY)(); 
		static inline Float get_scrollY( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_get_scrollY)();
		}
		Float (::hx::Object :: *_hx_set_scrollY)(Float value); 
		static inline Float set_scrollY( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::controls::supportClasses::IViewPort_obj *>(_hx_.mPtr->_hx_getInterface(0xd5cd7712)))->_hx_set_scrollY)(value);
		}
};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_IViewPort */ 
