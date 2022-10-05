#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateForEffects
#define INCLUDED_feathers_motion_effects_actuate_ActuateForEffects

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(feathers,motion,effects,actuate,ActuateForEffects)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IGotoActuator)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IReadableGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


class HXCPP_CLASS_ATTRIBUTES ActuateForEffects_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ActuateForEffects_obj OBJ_;
		ActuateForEffects_obj();

	public:
		enum { _hx_ClassId = 0x7648ee39 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.motion.effects.actuate.ActuateForEffects")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.motion.effects.actuate.ActuateForEffects"); }

		inline static ::hx::ObjectPtr< ActuateForEffects_obj > __new() {
			::hx::ObjectPtr< ActuateForEffects_obj > __this = new ActuateForEffects_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ActuateForEffects_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ActuateForEffects_obj *__this = (ActuateForEffects_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActuateForEffects_obj), false, "feathers.motion.effects.actuate.ActuateForEffects"));
			*(void **)__this = ActuateForEffects_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActuateForEffects_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ActuateForEffects",88,6e,4e,52); }

		static ::Dynamic tween( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  overwrite);
		static ::Dynamic tween_dyn();

		static ::Dynamic update( ::Dynamic target,Float duration, ::Dynamic start, ::Dynamic end,::hx::Null< bool >  overwrite);
		static ::Dynamic update_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate

#endif /* INCLUDED_feathers_motion_effects_actuate_ActuateForEffects */ 
