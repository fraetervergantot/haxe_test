#ifndef INCLUDED_feathers_core_ValidatingSprite
#define INCLUDED_feathers_core_ValidatingSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,core,ValidationQueue)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ValidatingSprite_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef ValidatingSprite_obj OBJ_;
		ValidatingSprite_obj();

	public:
		enum { _hx_ClassId = 0x093ab78b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core.ValidatingSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core.ValidatingSprite"); }
		static ::hx::ObjectPtr< ValidatingSprite_obj > __new();
		static ::hx::ObjectPtr< ValidatingSprite_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValidatingSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ValidatingSprite",d8,f7,61,8b); }

		bool _validating;
		bool get_validating();
		::Dynamic get_validating_dyn();

		bool _allInvalid;
		bool _allInvalidDelayed;
		 ::haxe::ds::EnumValueMap _invalidationFlags;
		 ::haxe::ds::EnumValueMap _delayedInvalidationFlags;
		int _setInvalidCount;
		 ::feathers::core::ValidationQueue _validationQueue;
		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		bool isInvalid( ::feathers::core::InvalidationFlag flag);
		::Dynamic isInvalid_dyn();

		bool _ignoreInvalidationFlags;
		void runWithoutInvalidation( ::Dynamic callback);
		::Dynamic runWithoutInvalidation_dyn();

		void setInvalid( ::feathers::core::InvalidationFlag flag);
		::Dynamic setInvalid_dyn();

		virtual void validateNow();
		::Dynamic validateNow_dyn();

		void setInvalidationFlag( ::feathers::core::InvalidationFlag flag);
		::Dynamic setInvalidationFlag_dyn();

		virtual void update();
		::Dynamic update_dyn();

		void validatingSprite_addedToStageHandler( ::openfl::events::Event event);
		::Dynamic validatingSprite_addedToStageHandler_dyn();

		void validatingSprite_removedFromStageHandler( ::openfl::events::Event event);
		::Dynamic validatingSprite_removedFromStageHandler_dyn();

};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_ValidatingSprite */ 
