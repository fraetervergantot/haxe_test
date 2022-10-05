#ifndef INCLUDED_feathers_controls_ButtonState
#define INCLUDED_feathers_controls_ButtonState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,controls,ButtonState)
namespace feathers{
namespace controls{


class ButtonState_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ButtonState_obj OBJ_;

	public:
		ButtonState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.controls.ButtonState",e5,b0,e9,37); }
		::String __ToString() const { return HX_("ButtonState.",af,fc,cb,75) + _hx_tag; }

		static ::feathers::controls::ButtonState DISABLED;
		static inline ::feathers::controls::ButtonState DISABLED_dyn() { return DISABLED; }
		static ::feathers::controls::ButtonState DOWN;
		static inline ::feathers::controls::ButtonState DOWN_dyn() { return DOWN; }
		static ::feathers::controls::ButtonState HOVER;
		static inline ::feathers::controls::ButtonState HOVER_dyn() { return HOVER; }
		static ::feathers::controls::ButtonState UP;
		static inline ::feathers::controls::ButtonState UP_dyn() { return UP; }
};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_ButtonState */ 
