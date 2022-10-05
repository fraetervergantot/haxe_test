#ifndef INCLUDED_feathers_core_InvalidationFlag
#define INCLUDED_feathers_core_InvalidationFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,InvalidationFlag)
namespace feathers{
namespace core{


class InvalidationFlag_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef InvalidationFlag_obj OBJ_;

	public:
		InvalidationFlag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.core.InvalidationFlag",3b,1d,8a,be); }
		::String __ToString() const { return HX_("InvalidationFlag.",a4,2d,91,99) + _hx_tag; }

		static ::feathers::core::InvalidationFlag CUSTOM(::String value);
		static ::Dynamic CUSTOM_dyn();
		static ::feathers::core::InvalidationFlag DATA;
		static inline ::feathers::core::InvalidationFlag DATA_dyn() { return DATA; }
		static ::feathers::core::InvalidationFlag FOCUS;
		static inline ::feathers::core::InvalidationFlag FOCUS_dyn() { return FOCUS; }
		static ::feathers::core::InvalidationFlag LAYOUT;
		static inline ::feathers::core::InvalidationFlag LAYOUT_dyn() { return LAYOUT; }
		static ::feathers::core::InvalidationFlag SCROLL;
		static inline ::feathers::core::InvalidationFlag SCROLL_dyn() { return SCROLL; }
		static ::feathers::core::InvalidationFlag SELECTION;
		static inline ::feathers::core::InvalidationFlag SELECTION_dyn() { return SELECTION; }
		static ::feathers::core::InvalidationFlag SIZE;
		static inline ::feathers::core::InvalidationFlag SIZE_dyn() { return SIZE; }
		static ::feathers::core::InvalidationFlag SKIN;
		static inline ::feathers::core::InvalidationFlag SKIN_dyn() { return SKIN; }
		static ::feathers::core::InvalidationFlag SORT;
		static inline ::feathers::core::InvalidationFlag SORT_dyn() { return SORT; }
		static ::feathers::core::InvalidationFlag STATE;
		static inline ::feathers::core::InvalidationFlag STATE_dyn() { return STATE; }
		static ::feathers::core::InvalidationFlag STYLES;
		static inline ::feathers::core::InvalidationFlag STYLES_dyn() { return STYLES; }
};

} // end namespace feathers
} // end namespace core

#endif /* INCLUDED_feathers_core_InvalidationFlag */ 
