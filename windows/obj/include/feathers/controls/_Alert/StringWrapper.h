#ifndef INCLUDED_feathers_controls__Alert_StringWrapper
#define INCLUDED_feathers_controls__Alert_StringWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7c1516fa6b7c28ec_629_new)
HX_DECLARE_CLASS3(feathers,controls,_Alert,StringWrapper)

namespace feathers{
namespace controls{
namespace _Alert{


class HXCPP_CLASS_ATTRIBUTES StringWrapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringWrapper_obj OBJ_;
		StringWrapper_obj();

	public:
		enum { _hx_ClassId = 0x348162fb };

		void __construct(::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls._Alert.StringWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls._Alert.StringWrapper"); }

		inline static ::hx::ObjectPtr< StringWrapper_obj > __new(::String text) {
			::hx::ObjectPtr< StringWrapper_obj > __this = new StringWrapper_obj();
			__this->__construct(text);
			return __this;
		}

		inline static ::hx::ObjectPtr< StringWrapper_obj > __alloc(::hx::Ctx *_hx_ctx,::String text) {
			StringWrapper_obj *__this = (StringWrapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringWrapper_obj), true, "feathers.controls._Alert.StringWrapper"));
			*(void **)__this = StringWrapper_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7c1516fa6b7c28ec_629_new)
HXDLIN( 629)		( ( ::feathers::controls::_Alert::StringWrapper)(__this) )->_text = text;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringWrapper",62,50,7a,2b); }

		::String _text;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace _Alert

#endif /* INCLUDED_feathers_controls__Alert_StringWrapper */ 
