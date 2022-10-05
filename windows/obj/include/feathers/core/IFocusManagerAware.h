#ifndef INCLUDED_feathers_core_IFocusManagerAware
#define INCLUDED_feathers_core_IFocusManagerAware

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IFocusManagerAware_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_get_focusManager)(); 
		static inline ::Dynamic get_focusManager( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManagerAware_obj *>(_hx_.mPtr->_hx_getInterface(0x7031642f)))->_hx_get_focusManager)();
		}
		::Dynamic (::hx::Object :: *_hx_set_focusManager)(::Dynamic value); 
		static inline ::Dynamic set_focusManager( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusManagerAware_obj *>(_hx_.mPtr->_hx_getInterface(0x7031642f)))->_hx_set_focusManager)(value);
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IFocusManagerAware */ 
