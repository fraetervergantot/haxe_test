#ifndef INCLUDED_feathers_core_ValidationQueue
#define INCLUDED_feathers_core_ValidationQueue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,ValidationQueue)
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


class HXCPP_CLASS_ATTRIBUTES ValidationQueue_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValidationQueue_obj OBJ_;
		ValidationQueue_obj();

	public:
		enum { _hx_ClassId = 0x23e0bb09 };

		void __construct( ::openfl::display::Stage stage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.ValidationQueue")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.ValidationQueue"); }
		static ::hx::ObjectPtr< ValidationQueue_obj > __new( ::openfl::display::Stage stage);
		static ::hx::ObjectPtr< ValidationQueue_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValidationQueue_obj();

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
		::String __ToString() const { return HX_("ValidationQueue",78,0a,43,67); }

		static void __boot();
		static  ::haxe::ds::ObjectMap STAGE_TO_VALIDATION_QUEUE;
		static  ::feathers::core::ValidationQueue forStage( ::openfl::display::Stage stage);
		static ::Dynamic forStage_dyn();

		 ::openfl::display::Stage _stage;
		::Array< ::Dynamic> _queue;
		bool _validating;
		bool get_validating();
		::Dynamic get_validating_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void addControl(::Dynamic control);
		::Dynamic addControl_dyn();

		void validateNow();
		::Dynamic validateNow_dyn();

		void validationQueue_stage_renderHandler( ::openfl::events::Event event);
		::Dynamic validationQueue_stage_renderHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_ValidationQueue */ 
