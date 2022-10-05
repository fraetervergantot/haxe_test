#ifndef INCLUDED_feathers_data_TabBarItemState
#define INCLUDED_feathers_data_TabBarItemState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_887bbe25e2c653a2_21_new)
HX_DECLARE_CLASS2(feathers,controls,TabBar)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,TabBarItemState)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace data{


class HXCPP_CLASS_ATTRIBUTES TabBarItemState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabBarItemState_obj OBJ_;
		TabBarItemState_obj();

	public:
		enum { _hx_ClassId = 0x1f55dc02 };

		void __construct( ::Dynamic data,::hx::Null< int >  __o_index,::hx::Null< bool >  __o_selected,::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.data.TabBarItemState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.data.TabBarItemState"); }

		inline static ::hx::ObjectPtr< TabBarItemState_obj > __new( ::Dynamic data,::hx::Null< int >  __o_index,::hx::Null< bool >  __o_selected,::String text) {
			::hx::ObjectPtr< TabBarItemState_obj > __this = new TabBarItemState_obj();
			__this->__construct(data,__o_index,__o_selected,text);
			return __this;
		}

		inline static ::hx::ObjectPtr< TabBarItemState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::hx::Null< int >  __o_index,::hx::Null< bool >  __o_selected,::String text) {
			TabBarItemState_obj *__this = (TabBarItemState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBarItemState_obj), true, "feathers.data.TabBarItemState"));
			*(void **)__this = TabBarItemState_obj::_hx_vtable;
{
            		int index = __o_index.Default(-1);
            		bool selected = __o_selected.Default(false);
            	HX_STACKFRAME(&_hx_pos_887bbe25e2c653a2_21_new)
HXLINE(  83)		( ( ::feathers::data::TabBarItemState)(__this) )->enabled = true;
HXLINE(  64)		( ( ::feathers::data::TabBarItemState)(__this) )->selected = false;
HXLINE(  54)		( ( ::feathers::data::TabBarItemState)(__this) )->index = -1;
HXLINE(  28)		( ( ::feathers::data::TabBarItemState)(__this) )->data = data;
HXLINE(  29)		( ( ::feathers::data::TabBarItemState)(__this) )->index = index;
HXLINE(  30)		( ( ::feathers::data::TabBarItemState)(__this) )->selected = false;
HXLINE(  31)		( ( ::feathers::data::TabBarItemState)(__this) )->text = text;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabBarItemState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabBarItemState",80,11,81,e8); }

		 ::feathers::controls::TabBar owner;
		 ::Dynamic data;
		int index;
		bool selected;
		::String text;
		bool enabled;
		::String recyclerID;
};

} // end namespace feathers
} // end namespace data

#endif /* INCLUDED_feathers_data_TabBarItemState */ 
