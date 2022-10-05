#ifndef INCLUDED_feathers_data_ButtonBarItemState
#define INCLUDED_feathers_data_ButtonBarItemState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cc519cd55b421e8c_21_new)
HX_DECLARE_CLASS2(feathers,controls,ButtonBar)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,data,ButtonBarItemState)
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


class HXCPP_CLASS_ATTRIBUTES ButtonBarItemState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ButtonBarItemState_obj OBJ_;
		ButtonBarItemState_obj();

	public:
		enum { _hx_ClassId = 0x2893f1ff };

		void __construct( ::Dynamic data,::hx::Null< int >  __o_index,::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.data.ButtonBarItemState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.data.ButtonBarItemState"); }

		inline static ::hx::ObjectPtr< ButtonBarItemState_obj > __new( ::Dynamic data,::hx::Null< int >  __o_index,::String text) {
			::hx::ObjectPtr< ButtonBarItemState_obj > __this = new ButtonBarItemState_obj();
			__this->__construct(data,__o_index,text);
			return __this;
		}

		inline static ::hx::ObjectPtr< ButtonBarItemState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::hx::Null< int >  __o_index,::String text) {
			ButtonBarItemState_obj *__this = (ButtonBarItemState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonBarItemState_obj), true, "feathers.data.ButtonBarItemState"));
			*(void **)__this = ButtonBarItemState_obj::_hx_vtable;
{
            		int index = __o_index.Default(-1);
            	HX_STACKFRAME(&_hx_pos_cc519cd55b421e8c_21_new)
HXLINE(  72)		( ( ::feathers::data::ButtonBarItemState)(__this) )->enabled = true;
HXLINE(  53)		( ( ::feathers::data::ButtonBarItemState)(__this) )->index = -1;
HXLINE(  28)		( ( ::feathers::data::ButtonBarItemState)(__this) )->data = data;
HXLINE(  29)		( ( ::feathers::data::ButtonBarItemState)(__this) )->index = index;
HXLINE(  30)		( ( ::feathers::data::ButtonBarItemState)(__this) )->text = text;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonBarItemState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonBarItemState",dd,ac,7a,4b); }

		 ::feathers::controls::ButtonBar owner;
		 ::Dynamic data;
		int index;
		::String text;
		bool enabled;
		::String recyclerID;
};

} // end namespace feathers
} // end namespace data

#endif /* INCLUDED_feathers_data_ButtonBarItemState */ 
