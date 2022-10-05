#ifndef INCLUDED_feathers_core_IToolTipManager
#define INCLUDED_feathers_core_IToolTipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IToolTipManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IToolTipManager_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_get_root)(); 
		static inline  ::openfl::display::DisplayObject get_root( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IToolTipManager_obj *>(_hx_.mPtr->_hx_getInterface(0xec2c7544)))->_hx_get_root)();
		}
		void (::hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IToolTipManager_obj *>(_hx_.mPtr->_hx_getInterface(0xec2c7544)))->_hx_dispose)();
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IToolTipManager */ 
