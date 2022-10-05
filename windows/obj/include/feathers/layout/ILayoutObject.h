#ifndef INCLUDED_feathers_layout_ILayoutObject
#define INCLUDED_feathers_layout_ILayoutObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,ILayoutData)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES ILayoutObject_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_willTrigger)(type);
		}
		bool (::hx::Object :: *_hx_get_includeInLayout)(); 
		static inline bool get_includeInLayout( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_get_includeInLayout)();
		}
		bool (::hx::Object :: *_hx_set_includeInLayout)(bool value); 
		static inline bool set_includeInLayout( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_set_includeInLayout)(value);
		}
		::Dynamic (::hx::Object :: *_hx_get_layoutData)(); 
		static inline ::Dynamic get_layoutData( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_get_layoutData)();
		}
		::Dynamic (::hx::Object :: *_hx_set_layoutData)(::Dynamic value); 
		static inline ::Dynamic set_layoutData( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutObject_obj *>(_hx_.mPtr->_hx_getInterface(0xf54ca718)))->_hx_set_layoutData)(value);
		}
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_ILayoutObject */ 
