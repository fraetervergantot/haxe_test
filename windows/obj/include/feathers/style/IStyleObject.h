#ifndef INCLUDED_feathers_style_IStyleObject
#define INCLUDED_feathers_style_IStyleObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IStyleObject)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES IStyleObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_themeEnabled)(); 
		static inline bool get_themeEnabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0xd6c92308)))->_hx_get_themeEnabled)();
		}
		bool (::hx::Object :: *_hx_set_themeEnabled)(bool value); 
		static inline bool set_themeEnabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0xd6c92308)))->_hx_set_themeEnabled)(value);
		}
};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_IStyleObject */ 
