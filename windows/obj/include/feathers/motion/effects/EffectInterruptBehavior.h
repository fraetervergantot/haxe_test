#ifndef INCLUDED_feathers_motion_effects_EffectInterruptBehavior
#define INCLUDED_feathers_motion_effects_EffectInterruptBehavior

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,motion,effects,EffectInterruptBehavior)
namespace feathers{
namespace motion{
namespace effects{


class EffectInterruptBehavior_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EffectInterruptBehavior_obj OBJ_;

	public:
		EffectInterruptBehavior_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("feathers.motion.effects.EffectInterruptBehavior",3e,59,1c,76); }
		::String __ToString() const { return HX_("EffectInterruptBehavior.",4a,7c,9a,e7) + _hx_tag; }

		static ::feathers::motion::effects::EffectInterruptBehavior END;
		static inline ::feathers::motion::effects::EffectInterruptBehavior END_dyn() { return END; }
		static ::feathers::motion::effects::EffectInterruptBehavior STOP;
		static inline ::feathers::motion::effects::EffectInterruptBehavior STOP_dyn() { return STOP; }
};

} // end namespace feathers
} // end namespace motion
} // end namespace effects

#endif /* INCLUDED_feathers_motion_effects_EffectInterruptBehavior */ 
