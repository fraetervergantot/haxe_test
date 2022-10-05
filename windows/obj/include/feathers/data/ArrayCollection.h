#ifndef INCLUDED_feathers_data_ArrayCollection
#define INCLUDED_feathers_data_ArrayCollection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
HX_DECLARE_CLASS2(feathers,data,ArrayCollection)
HX_DECLARE_CLASS2(feathers,data,IFlatCollection)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IExternalizable)

namespace feathers{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ArrayCollection_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ArrayCollection_obj OBJ_;
		ArrayCollection_obj();

	public:
		enum { _hx_ClassId = 0x0780f9f1 };

		void __construct(::cpp::VirtualArray array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.data.ArrayCollection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.data.ArrayCollection"); }
		static ::hx::ObjectPtr< ArrayCollection_obj > __new(::cpp::VirtualArray array);
		static ::hx::ObjectPtr< ArrayCollection_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayCollection_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ArrayCollection",37,a1,a7,8d); }

		static void __boot();
		static  ::Dynamic __meta__;
		::cpp::VirtualArray _filterAndSortData;
		::cpp::VirtualArray _array;
		::cpp::VirtualArray get_array();
		::Dynamic get_array_dyn();

		::cpp::VirtualArray set_array(::cpp::VirtualArray value);
		::Dynamic set_array_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		bool _pendingRefresh;
		 ::Dynamic _filterFunction;
		Dynamic _filterFunction_dyn() { return _filterFunction;}
		 ::Dynamic get_filterFunction();
		::Dynamic get_filterFunction_dyn();

		 ::Dynamic set_filterFunction( ::Dynamic value);
		::Dynamic set_filterFunction_dyn();

		 ::Dynamic _sortCompareFunction;
		Dynamic _sortCompareFunction_dyn() { return _sortCompareFunction;}
		 ::Dynamic get_sortCompareFunction();
		::Dynamic get_sortCompareFunction_dyn();

		 ::Dynamic set_sortCompareFunction( ::Dynamic value);
		::Dynamic set_sortCompareFunction_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		void set(int index, ::Dynamic item);
		::Dynamic set_dyn();

		void add( ::Dynamic item);
		::Dynamic add_dyn();

		void addAt( ::Dynamic item,int index);
		::Dynamic addAt_dyn();

		void addAll(::Dynamic collection);
		::Dynamic addAll_dyn();

		void addAllAt(::Dynamic collection,int index);
		::Dynamic addAllAt_dyn();

		void reset(::Dynamic collection);
		::Dynamic reset_dyn();

		void remove( ::Dynamic item);
		::Dynamic remove_dyn();

		 ::Dynamic removeAt(int index);
		::Dynamic removeAt_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		int indexOf( ::Dynamic item);
		::Dynamic indexOf_dyn();

		bool contains( ::Dynamic item);
		::Dynamic contains_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		void updateAt(int index);
		::Dynamic updateAt_dyn();

		void updateAll();
		::Dynamic updateAll_dyn();

		void refresh();
		::Dynamic refresh_dyn();

		 ::Dynamic find( ::Dynamic callback);
		::Dynamic find_dyn();

		int findIndex( ::Dynamic callback);
		::Dynamic findIndex_dyn();

		bool some( ::Dynamic callback);
		::Dynamic some_dyn();

		bool every( ::Dynamic callback);
		::Dynamic every_dyn();

		void forEach( ::Dynamic callback);
		::Dynamic forEach_dyn();

		 ::feathers::data::ArrayCollection map( ::Dynamic callback);
		::Dynamic map_dyn();

		void readExternal(::Dynamic input);
		::Dynamic readExternal_dyn();

		void writeExternal(::Dynamic output);
		::Dynamic writeExternal_dyn();

		void refreshFilterAndSort();
		::Dynamic refreshFilterAndSort_dyn();

		::cpp::VirtualArray toArray();
		::Dynamic toArray_dyn();

		int getSortedInsertionIndex( ::Dynamic item);
		::Dynamic getSortedInsertionIndex_dyn();

		void addAtInternal( ::Dynamic item,int index,bool dispatchEvents);
		::Dynamic addAtInternal_dyn();

};

} // end namespace feathers
} // end namespace data

#endif /* INCLUDED_feathers_data_ArrayCollection */ 
