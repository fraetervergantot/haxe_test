#ifndef INCLUDED_feathers_core_DefaultToolTipManager
#define INCLUDED_feathers_core_DefaultToolTipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_IToolTipManager
#include <feathers/core/IToolTipManager.h>
#endif
HX_DECLARE_CLASS2(feathers,core,DefaultToolTipManager)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IToolTipManager)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES DefaultToolTipManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultToolTipManager_obj OBJ_;
		DefaultToolTipManager_obj();

	public:
		enum { _hx_ClassId = 0x5982079c };

		void __construct( ::openfl::display::DisplayObject root);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.DefaultToolTipManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.DefaultToolTipManager"); }
		static ::hx::ObjectPtr< DefaultToolTipManager_obj > __new( ::openfl::display::DisplayObject root);
		static ::hx::ObjectPtr< DefaultToolTipManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject root);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultToolTipManager_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("DefaultToolTipManager",4b,14,d8,79); }

		static void __boot();
		static ::String CHILD_VARIANT_TOOL_TIP;
		 ::openfl::display::DisplayObject _root;
		 ::openfl::display::DisplayObject get_root();
		::Dynamic get_root_dyn();

		::Dynamic _target;
		::Dynamic _toolTip;
		Float _toolTipStageX;
		Float _toolTipStageY;
		 ::Dynamic _delayTimeoutID;
		Float _delay;
		int _hideTime;
		Float _offsetX;
		Float _offsetY;
		void dispose();
		::Dynamic dispose_dyn();

		void initializeToolTipStyles();
		::Dynamic initializeToolTipStyles_dyn();

		void clearTarget();
		::Dynamic clearTarget_dyn();

		void hideToolTip();
		::Dynamic hideToolTip_dyn();

		void hoverDelayCallback();
		::Dynamic hoverDelayCallback_dyn();

		void defaultToolTipManager_root_mouseMoveHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultToolTipManager_root_mouseMoveHandler_dyn();

		void defaultToolTipManager_target_mouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultToolTipManager_target_mouseDownHandler_dyn();

		void defaultToolTipManager_target_rightMouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultToolTipManager_target_rightMouseDownHandler_dyn();

		void defaultToolTipManager_target_middleMouseDownHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultToolTipManager_target_middleMouseDownHandler_dyn();

		void defaultToolTipManager_target_rollOutHandler( ::openfl::events::MouseEvent event);
		::Dynamic defaultToolTipManager_target_rollOutHandler_dyn();

		void defaultToolTipManager_target_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic defaultToolTipManager_target_removedFromStageHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_DefaultToolTipManager */ 
