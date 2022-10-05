#ifndef INCLUDED_feathers_core_IFocusExclusions
#define INCLUDED_feathers_core_IFocusExclusions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IFocusExclusions)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IFocusExclusions_obj {
	public:
		typedef  ::feathers::core::IFocusManagerAware_obj super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_get_focusManager)(); 
		static inline ::Dynamic get_focusManager( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExclusions_obj *>(_hx_.mPtr->_hx_getInterface(0xa67fad23)))->_hx_get_focusManager)();
		}
		::Dynamic (::hx::Object :: *_hx_set_focusManager)(::Dynamic value); 
		static inline ::Dynamic set_focusManager( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExclusions_obj *>(_hx_.mPtr->_hx_getInterface(0xa67fad23)))->_hx_set_focusManager)(value);
		}
		::Array< ::Dynamic> (::hx::Object :: *_hx_get_focusExclusions)(); 
		static inline ::Array< ::Dynamic> get_focusExclusions( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExclusions_obj *>(_hx_.mPtr->_hx_getInterface(0xa67fad23)))->_hx_get_focusExclusions)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IFocusExclusions */ 
