#ifndef INCLUDED_feathers_style_IDarkModeTheme
#define INCLUDED_feathers_style_IDarkModeTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
HX_DECLARE_CLASS2(feathers,style,IDarkModeTheme)
HX_DECLARE_CLASS2(feathers,style,ITheme)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES IDarkModeTheme_obj {
	public:
		typedef  ::feathers::style::ITheme_obj super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_getStyleProvider)(::Dynamic target); 
		static inline ::Dynamic getStyleProvider( ::Dynamic _hx_,::Dynamic target) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IDarkModeTheme_obj *>(_hx_.mPtr->_hx_getInterface(0xa443ce88)))->_hx_getStyleProvider)(target);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IDarkModeTheme_obj *>(_hx_.mPtr->_hx_getInterface(0xa443ce88)))->_hx_dispose)();
		}
		bool (::hx::Object :: *_hx_get_darkMode)(); 
		static inline bool get_darkMode( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IDarkModeTheme_obj *>(_hx_.mPtr->_hx_getInterface(0xa443ce88)))->_hx_get_darkMode)();
		}
		bool (::hx::Object :: *_hx_set_darkMode)(bool value); 
		static inline bool set_darkMode( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IDarkModeTheme_obj *>(_hx_.mPtr->_hx_getInterface(0xa443ce88)))->_hx_set_darkMode)(value);
		}
};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_IDarkModeTheme */ 
