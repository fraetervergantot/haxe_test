#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#define INCLUDED_feathers_motion_effects_IEffectContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES IEffectContext_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_willTrigger)(type);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_target)(); 
		static inline  ::Dynamic get_target( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_get_target)();
		}
		Float (::hx::Object :: *_hx_get_duration)(); 
		static inline Float get_duration( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_get_duration)();
		}
		Float (::hx::Object :: *_hx_get_position)(); 
		static inline Float get_position( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_get_position)();
		}
		Float (::hx::Object :: *_hx_set_position)(Float value); 
		static inline Float set_position( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_set_position)(value);
		}
		void (::hx::Object :: *_hx_play)(); 
		static inline void play( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_play)();
		}
		void (::hx::Object :: *_hx_playReverse)(); 
		static inline void playReverse( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_playReverse)();
		}
		void (::hx::Object :: *_hx_pause)(); 
		static inline void pause( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_pause)();
		}
		void (::hx::Object :: *_hx_stop)(); 
		static inline void stop( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_stop)();
		}
		void (::hx::Object :: *_hx_toEnd)(); 
		static inline void toEnd( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_toEnd)();
		}
		void (::hx::Object :: *_hx_interrupt)(); 
		static inline void interrupt( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::IEffectContext_obj *>(_hx_.mPtr->_hx_getInterface(0xa2226771)))->_hx_interrupt)();
		}
};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_IEffectContext */ 
