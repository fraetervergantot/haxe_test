#ifndef INCLUDED_feathers_layout_ISnapLayout
#define INCLUDED_feathers_layout_ISnapLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ISnapLayout)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES ISnapLayout_obj {
	public:
		typedef  ::feathers::layout::ILayout_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_willTrigger)(type);
		}
		 ::feathers::layout::LayoutBoundsResult (::hx::Object :: *_hx_layout)(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result); 
		static inline  ::feathers::layout::LayoutBoundsResult layout( ::Dynamic _hx_,::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_layout)(items,measurements,result);
		}
		::Array< Float > (::hx::Object :: *_hx_getSnapPositionsX)(::Array< ::Dynamic> items,Float viewPortWidth,Float viewPortHeight,::Array< Float > result); 
		static inline ::Array< Float > getSnapPositionsX( ::Dynamic _hx_,::Array< ::Dynamic> items,Float viewPortWidth,Float viewPortHeight,::Array< Float > result) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_getSnapPositionsX)(items,viewPortWidth,viewPortHeight,result);
		}
		::Array< Float > (::hx::Object :: *_hx_getSnapPositionsY)(::Array< ::Dynamic> items,Float viewPortWidth,Float viewPortHeight,::Array< Float > result); 
		static inline ::Array< Float > getSnapPositionsY( ::Dynamic _hx_,::Array< ::Dynamic> items,Float viewPortWidth,Float viewPortHeight,::Array< Float > result) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::layout::ISnapLayout_obj *>(_hx_.mPtr->_hx_getInterface(0xf16c04e3)))->_hx_getSnapPositionsY)(items,viewPortWidth,viewPortHeight,result);
		}
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_ISnapLayout */ 
