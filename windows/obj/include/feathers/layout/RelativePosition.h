#ifndef INCLUDED_feathers_layout_RelativePosition
#define INCLUDED_feathers_layout_RelativePosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
namespace feathers{
namespace layout{


class RelativePosition_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef RelativePosition_obj OBJ_;

	public:
		RelativePosition_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.layout.RelativePosition",7b,fa,90,f4); }
		::String __ToString() const { return HX_("RelativePosition.",d9,dc,b5,6e) + _hx_tag; }

		static ::feathers::layout::RelativePosition BOTTOM;
		static inline ::feathers::layout::RelativePosition BOTTOM_dyn() { return BOTTOM; }
		static ::feathers::layout::RelativePosition LEFT;
		static inline ::feathers::layout::RelativePosition LEFT_dyn() { return LEFT; }
		static ::feathers::layout::RelativePosition MANUAL;
		static inline ::feathers::layout::RelativePosition MANUAL_dyn() { return MANUAL; }
		static ::feathers::layout::RelativePosition RIGHT;
		static inline ::feathers::layout::RelativePosition RIGHT_dyn() { return RIGHT; }
		static ::feathers::layout::RelativePosition TOP;
		static inline ::feathers::layout::RelativePosition TOP_dyn() { return TOP; }
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_RelativePosition */ 
