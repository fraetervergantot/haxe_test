#ifndef INCLUDED_feathers_style__ClassVariantStyleProvider_StyleTarget
#define INCLUDED_feathers_style__ClassVariantStyleProvider_StyleTarget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,style,_ClassVariantStyleProvider,StyleTarget)
namespace feathers{
namespace style{
namespace _ClassVariantStyleProvider{


class StyleTarget_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef StyleTarget_obj OBJ_;

	public:
		StyleTarget_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.style._ClassVariantStyleProvider.StyleTarget",65,ec,3d,0a); }
		::String __ToString() const { return HX_("StyleTarget.",ac,3a,84,7d) + _hx_tag; }

		static ::feathers::style::_ClassVariantStyleProvider::StyleTarget Class(::String type);
		static ::Dynamic Class_dyn();
		static ::feathers::style::_ClassVariantStyleProvider::StyleTarget ClassAndVariant(::String type,::String variant);
		static ::Dynamic ClassAndVariant_dyn();
};

} // end namespace feathers
} // end namespace style
} // end namespace _ClassVariantStyleProvider

#endif /* INCLUDED_feathers_style__ClassVariantStyleProvider_StyleTarget */ 
