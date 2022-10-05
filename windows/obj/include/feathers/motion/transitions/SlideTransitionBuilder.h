#ifndef INCLUDED_feathers_motion_transitions_SlideTransitionBuilder
#define INCLUDED_feathers_motion_transitions_SlideTransitionBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,motion,effects,EffectInterruptBehavior)
HX_DECLARE_CLASS3(feathers,motion,effects,IEffectContext)
HX_DECLARE_CLASS3(feathers,motion,transitions,SlideTransitionBuilder)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace motion{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES SlideTransitionBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SlideTransitionBuilder_obj OBJ_;
		SlideTransitionBuilder_obj();

	public:
		enum { _hx_ClassId = 0x7fb26735 };

		void __construct(::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.motion.transitions.SlideTransitionBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.motion.transitions.SlideTransitionBuilder"); }
		static ::hx::ObjectPtr< SlideTransitionBuilder_obj > __new(::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease);
		static ::hx::ObjectPtr< SlideTransitionBuilder_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SlideTransitionBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SlideTransitionBuilder",b5,49,7c,f0); }

		static void __boot();
		static ::String VIEW_REQUIRED_ERROR;
		Float _angle;
		Float _duration;
		::Dynamic _ease;
		 ::feathers::motion::effects::EffectInterruptBehavior _interruptBehavior;
		Float _parallax;
		 ::feathers::motion::transitions::SlideTransitionBuilder setAngle(Float angleDegrees);
		::Dynamic setAngle_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setRadians(Float angleRadians);
		::Dynamic setRadians_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setUp();
		::Dynamic setUp_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setDown();
		::Dynamic setDown_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setLeft();
		::Dynamic setLeft_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setRight();
		::Dynamic setRight_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setDuration(Float duration);
		::Dynamic setDuration_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setEase(::Dynamic ease);
		::Dynamic setEase_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setParallax(Float parallax);
		::Dynamic setParallax_dyn();

		 ::feathers::motion::transitions::SlideTransitionBuilder setInterruptBehavior( ::feathers::motion::effects::EffectInterruptBehavior interruptBehavior);
		::Dynamic setInterruptBehavior_dyn();

		 ::Dynamic build();
		::Dynamic build_dyn();

};

} // end namespace feathers
} // end namespace motion
} // end namespace transitions

#endif /* INCLUDED_feathers_motion_transitions_SlideTransitionBuilder */ 
