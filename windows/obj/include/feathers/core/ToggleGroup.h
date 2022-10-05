#ifndef INCLUDED_feathers_core_ToggleGroup
#define INCLUDED_feathers_core_ToggleGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,IToggle)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,ToggleGroup)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ToggleGroup_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ToggleGroup_obj OBJ_;
		ToggleGroup_obj();

	public:
		enum { _hx_ClassId = 0x0187fb6c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.ToggleGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.ToggleGroup"); }
		static ::hx::ObjectPtr< ToggleGroup_obj > __new();
		static ::hx::ObjectPtr< ToggleGroup_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToggleGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic set_selectedItem_a7a2487a( ::Dynamic value);

		 ::Dynamic get_selectedItem_2aa2127b();
		::String __ToString() const { return HX_("ToggleGroup",eb,02,ee,a5); }

		::Array< ::Dynamic> _items;
		int get_numItems();
		::Dynamic get_numItems_dyn();

		bool _ignoreChanges;
		int _selectedIndex;
		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		int get_maxSelectedIndex();
		::Dynamic get_maxSelectedIndex_dyn();

		::Dynamic get_selectedItem();
		::Dynamic get_selectedItem_dyn();

		::Dynamic set_selectedItem(::Dynamic value);
		::Dynamic set_selectedItem_dyn();

		bool _requireSelection;
		bool get_requireSelection();
		::Dynamic get_requireSelection_dyn();

		bool set_requireSelection(bool value);
		::Dynamic set_requireSelection_dyn();

		void addItem(::Dynamic item);
		::Dynamic addItem_dyn();

		void removeItem(::Dynamic item);
		::Dynamic removeItem_dyn();

		void removeAllItems();
		::Dynamic removeAllItems_dyn();

		bool hasItem(::Dynamic item);
		::Dynamic hasItem_dyn();

		::Dynamic getItemAt(int index);
		::Dynamic getItemAt_dyn();

		int getItemIndex(::Dynamic item);
		::Dynamic getItemIndex_dyn();

		void setItemIndex(::Dynamic item,int index);
		::Dynamic setItemIndex_dyn();

		void item_changeHandler( ::openfl::events::Event event);
		::Dynamic item_changeHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_ToggleGroup */ 
