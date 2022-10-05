#ifndef INCLUDED_feathers_layout_ILayoutIndexObject
#define INCLUDED_feathers_layout_ILayoutIndexObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,ILayoutIndexObject)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES ILayoutIndexObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_layoutIndex)(); 
		static inline int get_layoutIndex( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutIndexObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe7561c78)))->_hx_get_layoutIndex)();
		}
		int (::hx::Object :: *_hx_set_layoutIndex)(int value); 
		static inline int set_layoutIndex( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ILayoutIndexObject_obj *>(_hx_.mPtr->_hx_getInterface(0xe7561c78)))->_hx_set_layoutIndex)(value);
		}
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_ILayoutIndexObject */ 
