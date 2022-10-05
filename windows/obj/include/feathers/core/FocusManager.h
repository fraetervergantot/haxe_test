#ifndef INCLUDED_feathers_core_FocusManager
#define INCLUDED_feathers_core_FocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,FocusManager)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManager)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES FocusManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FocusManager_obj OBJ_;
		FocusManager_obj();

	public:
		enum { _hx_ClassId = 0x61ab8c64 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.core.FocusManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.core.FocusManager"); }

		inline static ::hx::ObjectPtr< FocusManager_obj > __new() {
			::hx::ObjectPtr< FocusManager_obj > __this = new FocusManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FocusManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FocusManager_obj *__this = (FocusManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusManager_obj), false, "feathers.core.FocusManager"));
			*(void **)__this = FocusManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusManager",95,d1,a5,32); }

		static void __boot();
		static  ::haxe::ds::ObjectMap stageToManager;
		static ::Dynamic defaultFocusManagerFactory( ::openfl::display::DisplayObject root);
		static ::Dynamic defaultFocusManagerFactory_dyn();

		static  ::Dynamic _focusManagerFactory;
		static Dynamic _focusManagerFactory_dyn() { return _focusManagerFactory;}
		static  ::Dynamic get_focusManagerFactory();
		static ::Dynamic get_focusManagerFactory_dyn();

		static  ::Dynamic set_focusManagerFactory( ::Dynamic value);
		static ::Dynamic set_focusManagerFactory_dyn();

		static bool hasRoot( ::openfl::display::Stage stage);
		static ::Dynamic hasRoot_dyn();

		static ::Dynamic addRoot( ::openfl::display::Stage stage);
		static ::Dynamic addRoot_dyn();

		static void removeRoot( ::openfl::display::Stage stage);
		static ::Dynamic removeRoot_dyn();

		static void dispose();
		static ::Dynamic dispose_dyn();

		static void setFocus(::Dynamic focusable);
		static ::Dynamic setFocus_dyn();

		static void focusManager_clearHandler( ::openfl::events::Event event);
		static ::Dynamic focusManager_clearHandler_dyn();

		void FocusManager();
		::Dynamic FocusManager_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_FocusManager */ 
