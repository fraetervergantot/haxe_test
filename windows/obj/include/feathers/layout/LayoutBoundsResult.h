#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#define INCLUDED_feathers_layout_LayoutBoundsResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_860434864bed074c_23_new)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES LayoutBoundsResult_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LayoutBoundsResult_obj OBJ_;
		LayoutBoundsResult_obj();

	public:
		enum { _hx_ClassId = 0x3ece475a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.layout.LayoutBoundsResult")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.layout.LayoutBoundsResult"); }

		inline static ::hx::ObjectPtr< LayoutBoundsResult_obj > __new() {
			::hx::ObjectPtr< LayoutBoundsResult_obj > __this = new LayoutBoundsResult_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LayoutBoundsResult_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LayoutBoundsResult_obj *__this = (LayoutBoundsResult_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutBoundsResult_obj), false, "feathers.layout.LayoutBoundsResult"));
			*(void **)__this = LayoutBoundsResult_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_860434864bed074c_23_new)
HXDLIN(  23)		( ( ::feathers::layout::LayoutBoundsResult)(__this) )->reset();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LayoutBoundsResult_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LayoutBoundsResult",1c,9f,db,03); }

		Float contentX;
		Float contentY;
		Float viewPortWidth;
		Float viewPortHeight;
		Float contentWidth;
		Float contentHeight;
		Float contentMinWidth;
		Float contentMinHeight;
		Float contentMaxWidth;
		Float contentMaxHeight;
		void reset();
		::Dynamic reset_dyn();

};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_LayoutBoundsResult */ 
