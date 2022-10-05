#ifndef INCLUDED_feathers_core_PopUpManager
#define INCLUDED_feathers_core_PopUpManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IPopUpManager)
HX_DECLARE_CLASS2(feathers,core,PopUpManager)
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


class HXCPP_CLASS_ATTRIBUTES PopUpManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PopUpManager_obj OBJ_;
		PopUpManager_obj();

	public:
		enum { _hx_ClassId = 0x223cc29c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.core.PopUpManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.core.PopUpManager"); }

		inline static ::hx::ObjectPtr< PopUpManager_obj > __new() {
			::hx::ObjectPtr< PopUpManager_obj > __this = new PopUpManager_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PopUpManager_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PopUpManager_obj *__this = (PopUpManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PopUpManager_obj), false, "feathers.core.PopUpManager"));
			*(void **)__this = PopUpManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PopUpManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PopUpManager",a1,b9,23,7e); }

		static void __boot();
		static  ::Dynamic popUpManagerFactory;
		static Dynamic popUpManagerFactory_dyn() { return popUpManagerFactory;}
		static  ::openfl::display::DisplayObjectContainer set_root( ::openfl::display::DisplayObjectContainer value);
		static ::Dynamic set_root_dyn();

		static int get_popUpCount();
		static ::Dynamic get_popUpCount_dyn();

		static  ::haxe::ds::ObjectMap stageToManager;
		static ::Dynamic forStage( ::openfl::display::Stage stage);
		static ::Dynamic forStage_dyn();

		static void dispose();
		static ::Dynamic dispose_dyn();

		static  ::openfl::display::DisplayObject addPopUp( ::openfl::display::DisplayObject popUp, ::openfl::display::DisplayObject parent,::hx::Null< bool >  isModal,::hx::Null< bool >  isCentered, ::Dynamic customOverlayFactory);
		static ::Dynamic addPopUp_dyn();

		static  ::openfl::display::DisplayObject removePopUp( ::openfl::display::DisplayObject popUp);
		static ::Dynamic removePopUp_dyn();

		static void removeAllPopUps();
		static ::Dynamic removeAllPopUps_dyn();

		static void centerPopUp( ::openfl::display::DisplayObject target);
		static ::Dynamic centerPopUp_dyn();

		static bool isPopUp( ::openfl::display::DisplayObject target);
		static ::Dynamic isPopUp_dyn();

		static bool isModal( ::openfl::display::DisplayObject target);
		static ::Dynamic isModal_dyn();

		static bool isTopLevelPopUp( ::openfl::display::DisplayObject target);
		static ::Dynamic isTopLevelPopUp_dyn();

		static ::Dynamic defaultPopUpManagerFactory( ::openfl::display::Stage stage);
		static ::Dynamic defaultPopUpManagerFactory_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_PopUpManager */ 
