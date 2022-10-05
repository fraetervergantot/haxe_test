#ifndef INCLUDED_feathers_controls_ToggleButtonState
#define INCLUDED_feathers_controls_ToggleButtonState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,ToggleButtonState)
namespace feathers{
namespace controls{


class ToggleButtonState_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ToggleButtonState_obj OBJ_;

	public:
		ToggleButtonState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.controls.ToggleButtonState",31,6a,35,02); }
		::String __ToString() const { return HX_("ToggleButtonState.",63,ee,fc,01) + _hx_tag; }

		static ::feathers::controls::ToggleButtonState DISABLED(bool selected);
		static ::Dynamic DISABLED_dyn();
		static ::feathers::controls::ToggleButtonState DOWN(bool selected);
		static ::Dynamic DOWN_dyn();
		static ::feathers::controls::ToggleButtonState HOVER(bool selected);
		static ::Dynamic HOVER_dyn();
		static ::feathers::controls::ToggleButtonState UP(bool selected);
		static ::Dynamic UP_dyn();
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ToggleButtonState */ 
