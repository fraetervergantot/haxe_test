#ifndef INCLUDED_feathers_layout_AutoSizeMode
#define INCLUDED_feathers_layout_AutoSizeMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,AutoSizeMode)
namespace feathers{
namespace layout{


class AutoSizeMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AutoSizeMode_obj OBJ_;

	public:
		AutoSizeMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.layout.AutoSizeMode",39,01,92,48); }
		::String __ToString() const { return HX_("AutoSizeMode.",5b,01,31,34) + _hx_tag; }

		static ::feathers::layout::AutoSizeMode CONTENT;
		static inline ::feathers::layout::AutoSizeMode CONTENT_dyn() { return CONTENT; }
		static ::feathers::layout::AutoSizeMode STAGE;
		static inline ::feathers::layout::AutoSizeMode STAGE_dyn() { return STAGE; }
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_AutoSizeMode */ 
