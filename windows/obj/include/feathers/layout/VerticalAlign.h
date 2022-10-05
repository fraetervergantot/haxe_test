#ifndef INCLUDED_feathers_layout_VerticalAlign
#define INCLUDED_feathers_layout_VerticalAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,VerticalAlign)
namespace feathers{
namespace layout{


class VerticalAlign_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VerticalAlign_obj OBJ_;

	public:
		VerticalAlign_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.layout.VerticalAlign",c9,7d,6a,2f); }
		::String __ToString() const { return HX_("VerticalAlign.",ff,16,74,b2) + _hx_tag; }

		static ::feathers::layout::VerticalAlign BOTTOM;
		static inline ::feathers::layout::VerticalAlign BOTTOM_dyn() { return BOTTOM; }
		static ::feathers::layout::VerticalAlign JUSTIFY;
		static inline ::feathers::layout::VerticalAlign JUSTIFY_dyn() { return JUSTIFY; }
		static ::feathers::layout::VerticalAlign MIDDLE;
		static inline ::feathers::layout::VerticalAlign MIDDLE_dyn() { return MIDDLE; }
		static ::feathers::layout::VerticalAlign TOP;
		static inline ::feathers::layout::VerticalAlign TOP_dyn() { return TOP; }
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_VerticalAlign */ 
