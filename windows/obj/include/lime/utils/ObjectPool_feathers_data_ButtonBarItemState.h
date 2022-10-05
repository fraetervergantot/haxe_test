#ifndef INCLUDED_lime_utils_ObjectPool_feathers_data_ButtonBarItemState
#define INCLUDED_lime_utils_ObjectPool_feathers_data_ButtonBarItemState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,data,ButtonBarItemState)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_feathers_data_ButtonBarItemState)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ObjectPool_feathers_data_ButtonBarItemState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ObjectPool_feathers_data_ButtonBarItemState_obj OBJ_;
		ObjectPool_feathers_data_ButtonBarItemState_obj();

	public:
		enum { _hx_ClassId = 0x109827ab };

		void __construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.ObjectPool_feathers_data_ButtonBarItemState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.ObjectPool_feathers_data_ButtonBarItemState"); }
		static ::hx::ObjectPtr< ObjectPool_feathers_data_ButtonBarItemState_obj > __new( ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		static ::hx::ObjectPtr< ObjectPool_feathers_data_ButtonBarItemState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,ObjectPool_feathers_data_ButtonBarItemState_obj *_hx_obj);
		//~ObjectPool_feathers_data_ButtonBarItemState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ObjectPool_feathers_data_ButtonBarItemState",27,f2,4d,08); }

		int activeObjects;
		int inactiveObjects;
		 ::feathers::data::ButtonBarItemState _hx___inactiveObject0;
		 ::feathers::data::ButtonBarItemState _hx___inactiveObject1;
		 ::haxe::ds::List _hx___inactiveObjectList;
		 ::haxe::ds::ObjectMap _hx___pool;
		 ::Dynamic _hx___size;
		void add( ::feathers::data::ButtonBarItemState object);
		::Dynamic add_dyn();

		::Dynamic clean;
		inline ::Dynamic &clean_dyn() {return clean; }

		void clear();
		::Dynamic clear_dyn();

		::Dynamic create;
		inline ::Dynamic &create_dyn() {return create; }

		 ::feathers::data::ButtonBarItemState get();
		::Dynamic get_dyn();

		void release( ::feathers::data::ButtonBarItemState object);
		::Dynamic release_dyn();

		void remove( ::feathers::data::ButtonBarItemState object);
		::Dynamic remove_dyn();

		void _hx___addInactive( ::feathers::data::ButtonBarItemState object);
		::Dynamic _hx___addInactive_dyn();

		 ::feathers::data::ButtonBarItemState _hx___getInactive();
		::Dynamic _hx___getInactive_dyn();

		void _hx___removeInactive(int count);
		::Dynamic _hx___removeInactive_dyn();

		 ::Dynamic get_size();
		::Dynamic get_size_dyn();

		 ::Dynamic set_size( ::Dynamic value);
		::Dynamic set_size_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ObjectPool_feathers_data_ButtonBarItemState */ 
