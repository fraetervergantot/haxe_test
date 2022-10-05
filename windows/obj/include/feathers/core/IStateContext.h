#ifndef INCLUDED_feathers_core_IStateContext
#define INCLUDED_feathers_core_IStateContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IStateContext_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_willTrigger)(type);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_currentState)(); 
		static inline  ::Dynamic get_currentState( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa18fd6d8)))->_hx_get_currentState)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IStateContext */ 
