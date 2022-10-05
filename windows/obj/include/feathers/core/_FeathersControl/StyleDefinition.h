#ifndef INCLUDED_feathers_core__FeathersControl_StyleDefinition
#define INCLUDED_feathers_core__FeathersControl_StyleDefinition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,core,_FeathersControl,StyleDefinition)
namespace feathers{
namespace core{
namespace _FeathersControl{


class StyleDefinition_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef StyleDefinition_obj OBJ_;

	public:
		StyleDefinition_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.core._FeathersControl.StyleDefinition",35,10,a6,6e); }
		::String __ToString() const { return HX_("StyleDefinition.",aa,f5,88,fc) + _hx_tag; }

		static ::feathers::core::_FeathersControl::StyleDefinition Name(::String name);
		static ::Dynamic Name_dyn();
		static ::feathers::core::_FeathersControl::StyleDefinition NameAndState(::String name, ::Dynamic state);
		static ::Dynamic NameAndState_dyn();
};

} // end namespace feathers
} // end namespace core
} // end namespace _FeathersControl

#endif /* INCLUDED_feathers_core__FeathersControl_StyleDefinition */ 
