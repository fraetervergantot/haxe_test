#ifndef INCLUDED_feathers_controls_ScrollPolicy
#define INCLUDED_feathers_controls_ScrollPolicy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,ScrollPolicy)
namespace feathers{
namespace controls{


class ScrollPolicy_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ScrollPolicy_obj OBJ_;

	public:
		ScrollPolicy_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.controls.ScrollPolicy",f9,96,bf,57); }
		::String __ToString() const { return HX_("ScrollPolicy.",4f,03,32,c2) + _hx_tag; }

		static ::feathers::controls::ScrollPolicy AUTO;
		static inline ::feathers::controls::ScrollPolicy AUTO_dyn() { return AUTO; }
		static ::feathers::controls::ScrollPolicy OFF;
		static inline ::feathers::controls::ScrollPolicy OFF_dyn() { return OFF; }
		static ::feathers::controls::ScrollPolicy ON;
		static inline ::feathers::controls::ScrollPolicy ON_dyn() { return ON; }
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ScrollPolicy */ 
