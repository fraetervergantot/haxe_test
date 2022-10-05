#include <hxcpp.h>

#ifndef INCLUDED_feathers_motion_effects_EffectInterruptBehavior
#include <feathers/motion/effects/EffectInterruptBehavior.h>
#endif
namespace feathers{
namespace motion{
namespace effects{

::feathers::motion::effects::EffectInterruptBehavior EffectInterruptBehavior_obj::END;

::feathers::motion::effects::EffectInterruptBehavior EffectInterruptBehavior_obj::STOP;

bool EffectInterruptBehavior_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("END",bb,9f,34,00)) { outValue = EffectInterruptBehavior_obj::END; return true; }
	if (inName==HX_("STOP",02,b8,1c,37)) { outValue = EffectInterruptBehavior_obj::STOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EffectInterruptBehavior_obj)

int EffectInterruptBehavior_obj::__FindIndex(::String inName)
{
	if (inName==HX_("END",bb,9f,34,00)) return 0;
	if (inName==HX_("STOP",02,b8,1c,37)) return 1;
	return super::__FindIndex(inName);
}

int EffectInterruptBehavior_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("END",bb,9f,34,00)) return 0;
	if (inName==HX_("STOP",02,b8,1c,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EffectInterruptBehavior_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("END",bb,9f,34,00)) return END;
	if (inName==HX_("STOP",02,b8,1c,37)) return STOP;
	return super::__Field(inName,inCallProp);
}

static ::String EffectInterruptBehavior_obj_sStaticFields[] = {
	HX_("END",bb,9f,34,00),
	HX_("STOP",02,b8,1c,37),
	::String(null())
};

::hx::Class EffectInterruptBehavior_obj::__mClass;

Dynamic __Create_EffectInterruptBehavior_obj() { return new EffectInterruptBehavior_obj; }

void EffectInterruptBehavior_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.motion.effects.EffectInterruptBehavior",3e,59,1c,76), ::hx::TCanCast< EffectInterruptBehavior_obj >,EffectInterruptBehavior_obj_sStaticFields,0,
	&__Create_EffectInterruptBehavior_obj, &__Create,
	&super::__SGetClass(), &CreateEffectInterruptBehavior_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EffectInterruptBehavior_obj::__GetStatic;
}

void EffectInterruptBehavior_obj::__boot()
{
END = ::hx::CreateConstEnum< EffectInterruptBehavior_obj >(HX_("END",bb,9f,34,00),0);
STOP = ::hx::CreateConstEnum< EffectInterruptBehavior_obj >(HX_("STOP",02,b8,1c,37),1);
}


} // end namespace feathers
} // end namespace motion
} // end namespace effects
