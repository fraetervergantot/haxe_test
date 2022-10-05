#ifndef INCLUDED_feathers_controls__TabBar_TabStorage
#define INCLUDED_feathers_controls__TabBar_TabStorage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,BasicToggleButton)
HX_DECLARE_CLASS2(feathers,controls,IToggle)
HX_DECLARE_CLASS2(feathers,controls,ITriggerView)
HX_DECLARE_CLASS2(feathers,controls,ToggleButton)
HX_DECLARE_CLASS3(feathers,controls,_TabBar,TabStorage)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStateContext)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace _TabBar{


class HXCPP_CLASS_ATTRIBUTES TabStorage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabStorage_obj OBJ_;
		TabStorage_obj();

	public:
		enum { _hx_ClassId = 0x68eaf29d };

		void __construct(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls._TabBar.TabStorage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls._TabBar.TabStorage"); }
		static ::hx::ObjectPtr< TabStorage_obj > __new(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		static ::hx::ObjectPtr< TabStorage_obj > __alloc(::hx::Ctx *_hx_ctx,::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabStorage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabStorage",86,d5,31,fd); }

		::String id;
		 ::feathers::utils::DisplayObjectRecycler oldTabRecycler;
		 ::feathers::utils::DisplayObjectRecycler tabRecycler;
		::Array< ::Dynamic> activeTabs;
		::Array< ::Dynamic> inactiveTabs;
};

} // end namespace feathers
} // end namespace controls
} // end namespace _TabBar

#endif /* INCLUDED_feathers_controls__TabBar_TabStorage */ 
