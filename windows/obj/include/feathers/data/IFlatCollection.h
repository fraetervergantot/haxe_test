#ifndef INCLUDED_feathers_data_IFlatCollection
#define INCLUDED_feathers_data_IFlatCollection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace data{


class HXCPP_CLASS_ATTRIBUTES IFlatCollection_obj {
	public:
		typedef  ::openfl::events::IEventDispatcher_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_addEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference); 
		static inline void addEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_addEventListener)(type,listener,useCapture,priority,useWeakReference);
		}
		bool (::hx::Object :: *_hx_dispatchEvent)( ::openfl::events::Event event); 
		static inline bool dispatchEvent( ::Dynamic _hx_, ::openfl::events::Event event) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_dispatchEvent)(event);
		}
		bool (::hx::Object :: *_hx_hasEventListener)(::String type); 
		static inline bool hasEventListener( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_hasEventListener)(type);
		}
		void (::hx::Object :: *_hx_removeEventListener)(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture); 
		static inline void removeEventListener( ::Dynamic _hx_,::String type, ::Dynamic listener,::hx::Null< bool >  useCapture) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_removeEventListener)(type,listener,useCapture);
		}
		bool (::hx::Object :: *_hx_willTrigger)(::String type); 
		static inline bool willTrigger( ::Dynamic _hx_,::String type) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_willTrigger)(type);
		}
		int (::hx::Object :: *_hx_get_length)(); 
		static inline int get_length( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_get_length)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_filterFunction)(); 
		static inline  ::Dynamic get_filterFunction( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_get_filterFunction)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_filterFunction)( ::Dynamic value); 
		static inline  ::Dynamic set_filterFunction( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_set_filterFunction)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_sortCompareFunction)(); 
		static inline  ::Dynamic get_sortCompareFunction( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_get_sortCompareFunction)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_sortCompareFunction)( ::Dynamic value); 
		static inline  ::Dynamic set_sortCompareFunction( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_set_sortCompareFunction)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get)(int index); 
		static inline  ::Dynamic get( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_get)(index);
		}
		void (::hx::Object :: *_hx_set)(int index, ::Dynamic item); 
		static inline void set( ::Dynamic _hx_,int index, ::Dynamic item) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_set)(index,item);
		}
		void (::hx::Object :: *_hx_add)( ::Dynamic item); 
		static inline void add( ::Dynamic _hx_, ::Dynamic item) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_add)(item);
		}
		void (::hx::Object :: *_hx_addAt)( ::Dynamic item,int index); 
		static inline void addAt( ::Dynamic _hx_, ::Dynamic item,int index) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_addAt)(item,index);
		}
		void (::hx::Object :: *_hx_addAll)(::Dynamic collection); 
		static inline void addAll( ::Dynamic _hx_,::Dynamic collection) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_addAll)(collection);
		}
		void (::hx::Object :: *_hx_addAllAt)(::Dynamic collection,int index); 
		static inline void addAllAt( ::Dynamic _hx_,::Dynamic collection,int index) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_addAllAt)(collection,index);
		}
		void (::hx::Object :: *_hx_reset)(::Dynamic collection); 
		static inline void reset( ::Dynamic _hx_,::Dynamic collection) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_reset)(collection);
		}
		void (::hx::Object :: *_hx_remove)( ::Dynamic item); 
		static inline void remove( ::Dynamic _hx_, ::Dynamic item) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_remove)(item);
		}
		 ::Dynamic (::hx::Object :: *_hx_removeAt)(int index); 
		static inline  ::Dynamic removeAt( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_removeAt)(index);
		}
		void (::hx::Object :: *_hx_removeAll)(); 
		static inline void removeAll( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_removeAll)();
		}
		int (::hx::Object :: *_hx_indexOf)( ::Dynamic item); 
		static inline int indexOf( ::Dynamic _hx_, ::Dynamic item) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_indexOf)(item);
		}
		bool (::hx::Object :: *_hx_contains)( ::Dynamic item); 
		static inline bool contains( ::Dynamic _hx_, ::Dynamic item) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_contains)(item);
		}
		void (::hx::Object :: *_hx_updateAt)(int index); 
		static inline void updateAt( ::Dynamic _hx_,int index) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_updateAt)(index);
		}
		void (::hx::Object :: *_hx_updateAll)(); 
		static inline void updateAll( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_updateAll)();
		}
		 ::Dynamic (::hx::Object :: *_hx_iterator)(); 
		static inline  ::Dynamic iterator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_iterator)();
		}
		void (::hx::Object :: *_hx_refresh)(); 
		static inline void refresh( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::data::IFlatCollection_obj *>(_hx_.mPtr->_hx_getInterface(0xde3c5fc6)))->_hx_refresh)();
		}
};

} // end namespace feathers
} // end namespace data

#endif /* INCLUDED_feathers_data_IFlatCollection */ 
