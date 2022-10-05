#ifndef INCLUDED_HelloWorld
#define INCLUDED_HelloWorld

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
HX_DECLARE_CLASS0(HelloWorld)
HX_DECLARE_CLASS2(feathers,controls,Application)
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
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



class HXCPP_CLASS_ATTRIBUTES HelloWorld_obj : public  ::feathers::controls::Application_obj
{
	public:
		typedef  ::feathers::controls::Application_obj super;
		typedef HelloWorld_obj OBJ_;
		HelloWorld_obj();

	public:
		enum { _hx_ClassId = 0x14a99f24 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HelloWorld")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HelloWorld"); }
		static ::hx::ObjectPtr< HelloWorld_obj > __new();
		static ::hx::ObjectPtr< HelloWorld_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HelloWorld_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HelloWorld",00,76,b5,bd); }

};


#endif /* INCLUDED_HelloWorld */ 
