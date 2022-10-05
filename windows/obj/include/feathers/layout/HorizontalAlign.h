#ifndef INCLUDED_feathers_layout_HorizontalAlign
#define INCLUDED_feathers_layout_HorizontalAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,HorizontalAlign)
namespace feathers{
namespace layout{


class HorizontalAlign_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef HorizontalAlign_obj OBJ_;

	public:
		HorizontalAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.layout.HorizontalAlign",1b,f9,2f,9f); }
		::String __ToString() const { return HX_("HorizontalAlign.",ed,a5,30,00) + _hx_tag; }

		static ::feathers::layout::HorizontalAlign CENTER;
		static inline ::feathers::layout::HorizontalAlign CENTER_dyn() { return CENTER; }
		static ::feathers::layout::HorizontalAlign JUSTIFY;
		static inline ::feathers::layout::HorizontalAlign JUSTIFY_dyn() { return JUSTIFY; }
		static ::feathers::layout::HorizontalAlign LEFT;
		static inline ::feathers::layout::HorizontalAlign LEFT_dyn() { return LEFT; }
		static ::feathers::layout::HorizontalAlign RIGHT;
		static inline ::feathers::layout::HorizontalAlign RIGHT_dyn() { return RIGHT; }
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_HorizontalAlign */ 
