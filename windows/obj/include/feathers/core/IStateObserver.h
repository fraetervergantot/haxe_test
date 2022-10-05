#ifndef INCLUDED_feathers_core_IStateObserver
#define INCLUDED_feathers_core_IStateObserver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,IStateObserver)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IStateObserver_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_get_stateContext)(); 
		static inline ::Dynamic get_stateContext( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateObserver_obj *>(_hx_.mPtr->_hx_getInterface(0xb36ec70d)))->_hx_get_stateContext)();
		}
		::Dynamic (::hx::Object :: *_hx_set_stateContext)(::Dynamic value); 
		static inline ::Dynamic set_stateContext( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IStateObserver_obj *>(_hx_.mPtr->_hx_getInterface(0xb36ec70d)))->_hx_set_stateContext)(value);
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IStateObserver */ 
