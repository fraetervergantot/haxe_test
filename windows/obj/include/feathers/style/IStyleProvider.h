#ifndef INCLUDED_feathers_style_IStyleProvider
#define INCLUDED_feathers_style_IStyleProvider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IStyleProvider)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES IStyleProvider_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_willTrigger)(type);
		}
		void (::hx::Object :: *_hx_applyStyles)(::Dynamic target); 
		static inline void applyStyles( ::Dynamic _hx_,::Dynamic target) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleProvider_obj *>(_hx_.mPtr->_hx_getInterface(0x95abf9ba)))->_hx_applyStyles)(target);
		}
};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_IStyleProvider */ 
