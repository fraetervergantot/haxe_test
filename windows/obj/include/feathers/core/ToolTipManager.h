#ifndef INCLUDED_feathers_core_ToolTipManager
#define INCLUDED_feathers_core_ToolTipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IToolTipManager)
HX_DECLARE_CLASS2(feathers,core,ToolTipManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ToolTipManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ToolTipManager_obj OBJ_;
		ToolTipManager_obj();

	public:
		enum { _hx_ClassId = 0x5de10941 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.core.ToolTipManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.core.ToolTipManager"); }

		inline static ::hx::ObjectPtr< ToolTipManager_obj > __new() {
			::hx::ObjectPtr< ToolTipManager_obj > __this = new ToolTipManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ToolTipManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ToolTipManager_obj *__this = (ToolTipManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolTipManager_obj), false, "feathers.core.ToolTipManager"));
			*(void **)__this = ToolTipManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ToolTipManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ToolTipManager",ea,9b,c3,83); }

		static void __boot();
		static ::Dynamic defaultToolTipManagerFactory( ::openfl::display::DisplayObject root);
		static ::Dynamic defaultToolTipManagerFactory_dyn();

		static  ::Dynamic _toolTipManagerFactory;
		static Dynamic _toolTipManagerFactory_dyn() { return _toolTipManagerFactory;}
		static  ::Dynamic get_toolTipManagerFactory();
		static ::Dynamic get_toolTipManagerFactory_dyn();

		static  ::Dynamic set_toolTipManagerFactory( ::Dynamic value);
		static ::Dynamic set_toolTipManagerFactory_dyn();

		static  ::haxe::ds::ObjectMap stageToManager;
		static bool hasRoot( ::openfl::display::Stage stage);
		static ::Dynamic hasRoot_dyn();

		static ::Dynamic forRoot( ::openfl::display::Stage stage);
		static ::Dynamic forRoot_dyn();

		static ::Dynamic addRoot( ::openfl::display::Stage stage);
		static ::Dynamic addRoot_dyn();

		static void removeRoot( ::openfl::display::Stage stage);
		static ::Dynamic removeRoot_dyn();

		static void dispose();
		static ::Dynamic dispose_dyn();

		void ToolTipManager();
		::Dynamic ToolTipManager_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_ToolTipManager */ 
