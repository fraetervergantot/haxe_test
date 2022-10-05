#ifndef INCLUDED_feathers_core_IIndexSelector
#define INCLUDED_feathers_core_IIndexSelector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IIndexSelector)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IIndexSelector_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_selectedIndex)(); 
		static inline int get_selectedIndex( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IIndexSelector_obj *>(_hx_.mPtr->_hx_getInterface(0xe0b54c17)))->_hx_get_selectedIndex)();
		}
		int (::hx::Object :: *_hx_set_selectedIndex)(int value); 
		static inline int set_selectedIndex( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IIndexSelector_obj *>(_hx_.mPtr->_hx_getInterface(0xe0b54c17)))->_hx_set_selectedIndex)(value);
		}
		int (::hx::Object :: *_hx_get_maxSelectedIndex)(); 
		static inline int get_maxSelectedIndex( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IIndexSelector_obj *>(_hx_.mPtr->_hx_getInterface(0xe0b54c17)))->_hx_get_maxSelectedIndex)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IIndexSelector */ 
