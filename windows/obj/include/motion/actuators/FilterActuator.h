#ifndef INCLUDED_motion_actuators_FilterActuator
#define INCLUDED_motion_actuators_FilterActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,FilterActuator)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES FilterActuator_obj : public  ::motion::actuators::SimpleActuator_obj
{
	public:
		typedef  ::motion::actuators::SimpleActuator_obj super;
		typedef FilterActuator_obj OBJ_;
		FilterActuator_obj();

	public:
		enum { _hx_ClassId = 0x1c8f0915 };

		void __construct( ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.actuators.FilterActuator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"motion.actuators.FilterActuator"); }
		static ::hx::ObjectPtr< FilterActuator_obj > __new( ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties);
		static ::hx::ObjectPtr< FilterActuator_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FilterActuator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FilterActuator",31,e5,1e,60); }

		 ::openfl::filters::BitmapFilter filter;
		::hx::Class filterClass;
		int filterIndex;
		void apply();

		void initialize();

		void setFilter();
		::Dynamic setFilter_dyn();

		void update(Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_FilterActuator */ 
