#ifndef INCLUDED_feathers_style_ClassVariantStyleProvider
#define INCLUDED_feathers_style_ClassVariantStyleProvider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
HX_DECLARE_CLASS2(feathers,style,ClassVariantStyleProvider)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IStyleProvider)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES ClassVariantStyleProvider_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef ClassVariantStyleProvider_obj OBJ_;
		ClassVariantStyleProvider_obj();

	public:
		enum { _hx_ClassId = 0x52da5278 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.style.ClassVariantStyleProvider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.style.ClassVariantStyleProvider"); }
		static ::hx::ObjectPtr< ClassVariantStyleProvider_obj > __new();
		static ::hx::ObjectPtr< ClassVariantStyleProvider_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClassVariantStyleProvider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ClassVariantStyleProvider",f5,bb,04,2a); }

		 ::haxe::ds::EnumValueMap styleTargets;
		void setStyleFunction(::hx::Class type,::String variant, ::Dynamic callback);
		::Dynamic setStyleFunction_dyn();

		 ::Dynamic getStyleFunction(::hx::Class type,::String variant);
		::Dynamic getStyleFunction_dyn();

		void applyStyles(::Dynamic target);
		::Dynamic applyStyles_dyn();

		::hx::Class getStyleContext(::Dynamic target);
		::Dynamic getStyleContext_dyn();

		::String getVariant(::Dynamic target);
		::Dynamic getVariant_dyn();

		 ::Dynamic getStyleFunctionInternal(::hx::Class type,::String variant,bool strict);
		::Dynamic getStyleFunctionInternal_dyn();

};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_ClassVariantStyleProvider */ 
