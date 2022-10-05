#ifndef INCLUDED_feathers_utils_ExclusivePointer
#define INCLUDED_feathers_utils_ExclusivePointer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,ExclusivePointer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
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
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ExclusivePointer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExclusivePointer_obj OBJ_;
		ExclusivePointer_obj();

	public:
		enum { _hx_ClassId = 0x037dc098 };

		void __construct( ::openfl::display::Stage stage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.utils.ExclusivePointer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.utils.ExclusivePointer"); }
		static ::hx::ObjectPtr< ExclusivePointer_obj > __new( ::openfl::display::Stage stage);
		static ::hx::ObjectPtr< ExclusivePointer_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExclusivePointer_obj();

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
		::String __ToString() const { return HX_("ExclusivePointer",9f,ef,bc,f5); }

		static void __boot();
		static  ::haxe::ds::ObjectMap stageToObject;
		static  ::feathers::utils::ExclusivePointer forStage( ::openfl::display::Stage stage);
		static ::Dynamic forStage_dyn();

		static void disposeForStage( ::openfl::display::Stage stage);
		static ::Dynamic disposeForStage_dyn();

		int _stageListenerCount;
		 ::openfl::display::Stage _stage;
		 ::openfl::display::DisplayObject _mouseClaim;
		 ::haxe::ds::IntMap _touchClaims;
		bool claimTouch(int touchPointID, ::openfl::display::DisplayObject target);
		::Dynamic claimTouch_dyn();

		bool claimMouse( ::openfl::display::DisplayObject target);
		::Dynamic claimMouse_dyn();

		void removeTouchClaim(int touchPointID);
		::Dynamic removeTouchClaim_dyn();

		void removeMouseClaim();
		::Dynamic removeMouseClaim_dyn();

		bool hasClaim();
		::Dynamic hasClaim_dyn();

		 ::openfl::display::DisplayObject getTouchClaim(int touchPointID);
		::Dynamic getTouchClaim_dyn();

		 ::openfl::display::DisplayObject getMouseClaim();
		::Dynamic getMouseClaim_dyn();

		void removeAllClaims();
		::Dynamic removeAllClaims_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		bool hasClaimOn( ::openfl::display::DisplayObject target);
		::Dynamic hasClaimOn_dyn();

		void exclusivePointer_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic exclusivePointer_target_removedFromStageHandler_dyn();

		void exclusivePointer_stage_mouseUpHandler( ::openfl::events::MouseEvent event);
		::Dynamic exclusivePointer_stage_mouseUpHandler_dyn();

		void exclusivePointer_stage_touchEndHandler( ::openfl::events::TouchEvent event);
		::Dynamic exclusivePointer_stage_touchEndHandler_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_ExclusivePointer */ 
