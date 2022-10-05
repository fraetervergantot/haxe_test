#ifndef INCLUDED_feathers_controls_ScrollMode
#define INCLUDED_feathers_controls_ScrollMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,ScrollMode)
namespace feathers{
namespace controls{


class ScrollMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ScrollMode_obj OBJ_;

	public:
		ScrollMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.controls.ScrollMode",aa,ee,87,7a); }
		::String __ToString() const { return HX_("ScrollMode.",fe,03,68,3a) + _hx_tag; }

		static ::feathers::controls::ScrollMode MASK;
		static inline ::feathers::controls::ScrollMode MASK_dyn() { return MASK; }
		static ::feathers::controls::ScrollMode MASKLESS;
		static inline ::feathers::controls::ScrollMode MASKLESS_dyn() { return MASKLESS; }
		static ::feathers::controls::ScrollMode SCROLL_RECT;
		static inline ::feathers::controls::ScrollMode SCROLL_RECT_dyn() { return SCROLL_RECT; }
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ScrollMode */ 
