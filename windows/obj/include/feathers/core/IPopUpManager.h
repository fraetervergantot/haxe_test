#ifndef INCLUDED_feathers_core_IPopUpManager
#define INCLUDED_feathers_core_IPopUpManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IPopUpManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IPopUpManager_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_get_overlayFactory)(); 
		static inline  ::Dynamic get_overlayFactory( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_get_overlayFactory)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_overlayFactory)( ::Dynamic value); 
		static inline  ::Dynamic set_overlayFactory( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_set_overlayFactory)(value);
		}
		 ::openfl::display::DisplayObjectContainer (::hx::Object :: *_hx_get_root)(); 
		static inline  ::openfl::display::DisplayObjectContainer get_root( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_get_root)();
		}
		 ::openfl::display::DisplayObjectContainer (::hx::Object :: *_hx_set_root)( ::openfl::display::DisplayObjectContainer value); 
		static inline  ::openfl::display::DisplayObjectContainer set_root( ::Dynamic _hx_, ::openfl::display::DisplayObjectContainer value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_set_root)(value);
		}
		int (::hx::Object :: *_hx_get_popUpCount)(); 
		static inline int get_popUpCount( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_get_popUpCount)();
		}
		int (::hx::Object :: *_hx_get_topLevelPopUpCount)(); 
		static inline int get_topLevelPopUpCount( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_get_topLevelPopUpCount)();
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_getPopUpAt)(int index); 
		static inline  ::openfl::display::DisplayObject getPopUpAt( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_getPopUpAt)(index);
		}
		bool (::hx::Object :: *_hx_isPopUp)( ::openfl::display::DisplayObject target); 
		static inline bool isPopUp( ::Dynamic _hx_, ::openfl::display::DisplayObject target) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_isPopUp)(target);
		}
		bool (::hx::Object :: *_hx_isTopLevelPopUp)( ::openfl::display::DisplayObject target); 
		static inline bool isTopLevelPopUp( ::Dynamic _hx_, ::openfl::display::DisplayObject target) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_isTopLevelPopUp)(target);
		}
		bool (::hx::Object :: *_hx_isModal)( ::openfl::display::DisplayObject target); 
		static inline bool isModal( ::Dynamic _hx_, ::openfl::display::DisplayObject target) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_isModal)(target);
		}
		bool (::hx::Object :: *_hx_hasModalPopUps)(); 
		static inline bool hasModalPopUps( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_hasModalPopUps)();
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_addPopUp)( ::openfl::display::DisplayObject popUp,::hx::Null< bool >  isModal,::hx::Null< bool >  isCentered, ::Dynamic customOverlayFactory); 
		static inline  ::openfl::display::DisplayObject addPopUp( ::Dynamic _hx_, ::openfl::display::DisplayObject popUp,::hx::Null< bool >  isModal,::hx::Null< bool >  isCentered, ::Dynamic customOverlayFactory) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_addPopUp)(popUp,isModal,isCentered,customOverlayFactory);
		}
		 ::openfl::display::DisplayObject (::hx::Object :: *_hx_removePopUp)( ::openfl::display::DisplayObject popUp); 
		static inline  ::openfl::display::DisplayObject removePopUp( ::Dynamic _hx_, ::openfl::display::DisplayObject popUp) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_removePopUp)(popUp);
		}
		void (::hx::Object :: *_hx_removeAllPopUps)(); 
		static inline void removeAllPopUps( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_removeAllPopUps)();
		}
		void (::hx::Object :: *_hx_centerPopUp)( ::openfl::display::DisplayObject popUp); 
		static inline void centerPopUp( ::Dynamic _hx_, ::openfl::display::DisplayObject popUp) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::core::IPopUpManager_obj *>(_hx_.mPtr->_hx_getInterface(0x808fa87b)))->_hx_centerPopUp)(popUp);
		}
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_IPopUpManager */ 
