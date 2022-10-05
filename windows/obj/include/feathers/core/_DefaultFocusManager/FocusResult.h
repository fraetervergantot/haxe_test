#ifndef INCLUDED_feathers_core__DefaultFocusManager_FocusResult
#define INCLUDED_feathers_core__DefaultFocusManager_FocusResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS3(feathers,core,_DefaultFocusManager,FocusResult)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace core{
namespace _DefaultFocusManager{


class HXCPP_CLASS_ATTRIBUTES FocusResult_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FocusResult_obj OBJ_;
		FocusResult_obj();

	public:
		enum { _hx_ClassId = 0x00a5b7af };

		void __construct(::Dynamic newFocus,bool wrapped);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.core._DefaultFocusManager.FocusResult")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.core._DefaultFocusManager.FocusResult"); }
		static ::hx::ObjectPtr< FocusResult_obj > __new(::Dynamic newFocus,bool wrapped);
		static ::hx::ObjectPtr< FocusResult_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic newFocus,bool wrapped);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusResult_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusResult",b5,46,c2,3f); }

		::Dynamic newFocus;
		bool wrapped;
};

} // end namespace feathers
} // end namespace core
} // end namespace _DefaultFocusManager

#endif /* INCLUDED_feathers_core__DefaultFocusManager_FocusResult */ 
