#ifndef INCLUDED_feathers_core_IFocusExtras
#define INCLUDED_feathers_core_IFocusExtras

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IFocusExtras)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IFocusExtras_obj {
	public:
		typedef  ::feathers::core::IFocusManagerAware_obj super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_get_focusManager)(); 
		static inline ::Dynamic get_focusManager( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExtras_obj *>(_hx_.mPtr->_hx_getInterface(0x21fbac21)))->_hx_get_focusManager)();
		}
		::Dynamic (::hx::Object :: *_hx_set_focusManager)(::Dynamic value); 
		static inline ::Dynamic set_focusManager( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExtras_obj *>(_hx_.mPtr->_hx_getInterface(0x21fbac21)))->_hx_set_focusManager)(value);
		}
		::Array< ::Dynamic> (::hx::Object :: *_hx_get_focusExtrasBefore)(); 
		static inline ::Array< ::Dynamic> get_focusExtrasBefore( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExtras_obj *>(_hx_.mPtr->_hx_getInterface(0x21fbac21)))->_hx_get_focusExtrasBefore)();
		}
		::Array< ::Dynamic> (::hx::Object :: *_hx_get_focusExtrasAfter)(); 
		static inline ::Array< ::Dynamic> get_focusExtrasAfter( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IFocusExtras_obj *>(_hx_.mPtr->_hx_getInterface(0x21fbac21)))->_hx_get_focusExtrasAfter)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IFocusExtras */ 
