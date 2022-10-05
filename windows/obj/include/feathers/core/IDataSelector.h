#ifndef INCLUDED_feathers_core_IDataSelector
#define INCLUDED_feathers_core_IDataSelector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IDataSelector)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IDataSelector_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_get_selectedItem)(); 
		static inline  ::Dynamic get_selectedItem( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IDataSelector_obj *>(_hx_.mPtr->_hx_getInterface(0xe7e1ba63)))->_hx_get_selectedItem)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_selectedItem)( ::Dynamic value); 
		static inline  ::Dynamic set_selectedItem( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IDataSelector_obj *>(_hx_.mPtr->_hx_getInterface(0xe7e1ba63)))->_hx_set_selectedItem)(value);
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IDataSelector */ 
