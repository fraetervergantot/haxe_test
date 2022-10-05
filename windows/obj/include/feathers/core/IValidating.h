#ifndef INCLUDED_feathers_core_IValidating
#define INCLUDED_feathers_core_IValidating

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IValidating)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IValidating_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_depth)(); 
		static inline int get_depth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x64d4b3cd)))->_hx_get_depth)();
		}
		void (::hx::Object :: *_hx_validateNow)(); 
		static inline void validateNow( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IValidating_obj *>(_hx_.mPtr->_hx_getInterface(0x64d4b3cd)))->_hx_validateNow)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IValidating */ 
