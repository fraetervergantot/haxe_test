#ifndef INCLUDED_feathers_style_IVariantStyleObject
#define INCLUDED_feathers_style_IVariantStyleObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES IVariantStyleObject_obj {
	public:
		typedef  ::feathers::style::IStyleObject_obj super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_get_themeEnabled)(); 
		static inline bool get_themeEnabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IVariantStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0x41bc4513)))->_hx_get_themeEnabled)();
		}
		bool (::hx::Object :: *_hx_set_themeEnabled)(bool value); 
		static inline bool set_themeEnabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IVariantStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0x41bc4513)))->_hx_set_themeEnabled)(value);
		}
		::hx::Class (::hx::Object :: *_hx_get_styleContext)(); 
		static inline ::hx::Class get_styleContext( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IVariantStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0x41bc4513)))->_hx_get_styleContext)();
		}
		::String (::hx::Object :: *_hx_get_variant)(); 
		static inline ::String get_variant( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IVariantStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0x41bc4513)))->_hx_get_variant)();
		}
		::String (::hx::Object :: *_hx_set_variant)(::String value); 
		static inline ::String set_variant( ::Dynamic _hx_,::String value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::style::IVariantStyleObject_obj *>(_hx_.mPtr->_hx_getInterface(0x41bc4513)))->_hx_set_variant)(value);
		}
};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_IVariantStyleObject */ 
