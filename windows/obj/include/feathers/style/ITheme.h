#ifndef INCLUDED_feathers_style_ITheme
#define INCLUDED_feathers_style_ITheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IStyleProvider)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES ITheme_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_getStyleProvider)(::Dynamic target); 
		static inline ::Dynamic getStyleProvider( ::Dynamic _hx_,::Dynamic target) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::ITheme_obj *>(_hx_.mPtr->_hx_getInterface(0xcaf21441)))->_hx_getStyleProvider)(target);
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::ITheme_obj *>(_hx_.mPtr->_hx_getInterface(0xcaf21441)))->_hx_dispose)();
		}
};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_ITheme */ 
