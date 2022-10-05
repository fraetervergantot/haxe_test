#ifndef INCLUDED_feathers_controls_navigators_TabItem
#define INCLUDED_feathers_controls_navigators_TabItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,controls,navigators,BaseNavigator)
HX_DECLARE_CLASS3(feathers,controls,navigators,TabItem)
HX_DECLARE_CLASS3(feathers,controls,navigators,TabNavigator)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDataSelector)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusContainer)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IIndexSelector)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
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
namespace controls{
namespace navigators{


class HXCPP_CLASS_ATTRIBUTES TabItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabItem_obj OBJ_;
		TabItem_obj();

	public:
		enum { _hx_ClassId = 0x5f2d05a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.navigators.TabItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.navigators.TabItem"); }
		static ::hx::ObjectPtr< TabItem_obj > __new();
		static ::hx::ObjectPtr< TabItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabItem",e8,c1,86,0b); }

		static void __boot();
		static  ::feathers::controls::navigators::TabItem withClass(::String text,::hx::Class viewClass);
		static ::Dynamic withClass_dyn();

		static  ::feathers::controls::navigators::TabItem withFunction(::String text, ::Dynamic viewFunction);
		static ::Dynamic withFunction_dyn();

		static  ::feathers::controls::navigators::TabItem withDisplayObject(::String text, ::openfl::display::DisplayObject viewInstance);
		static ::Dynamic withDisplayObject_dyn();

		static int internalIDCounter;
		::String internalID;
		::String text;
		::hx::Class viewClass;
		 ::Dynamic viewFunction;
		Dynamic viewFunction_dyn() { return viewFunction;}
		 ::openfl::display::DisplayObject viewInstance;
		 ::openfl::display::DisplayObject getView( ::feathers::controls::navigators::TabNavigator navigator);
		::Dynamic getView_dyn();

		void returnView( ::openfl::display::DisplayObject view);
		::Dynamic returnView_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace navigators

#endif /* INCLUDED_feathers_controls_navigators_TabItem */ 
