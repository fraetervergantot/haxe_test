#ifndef INCLUDED_feathers_core_IScaleManager
#define INCLUDED_feathers_core_IScaleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IScaleManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IScaleManager_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_willTrigger)(type);
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_get_target)(); 
		static inline  ::openfl::display::DisplayObject get_target( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_get_target)();
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_set_target)( ::openfl::display::DisplayObject value); 
		static inline  ::openfl::display::DisplayObject set_target( ::Dynamic _hx_, ::openfl::display::DisplayObject value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_set_target)(value);
		}
		Float (::hx::Object :: *_hx_getScale)(); 
		static inline Float getScale( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_getScale)();
		}
		 ::openfl::geom::Rectangle (::hx::Object :: *_hx_getBounds)(); 
		static inline  ::openfl::geom::Rectangle getBounds( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IScaleManager_obj *>(_hx_.mPtr->_hx_getInterface(0x75896bfd)))->_hx_getBounds)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IScaleManager */ 
