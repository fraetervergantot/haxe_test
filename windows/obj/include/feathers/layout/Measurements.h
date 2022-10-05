#ifndef INCLUDED_feathers_layout_Measurements
#define INCLUDED_feathers_layout_Measurements

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES Measurements_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Measurements_obj OBJ_;
		Measurements_obj();

	public:
		enum { _hx_ClassId = 0x1880b671 };

		void __construct( ::openfl::display::DisplayObject target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.layout.Measurements")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.layout.Measurements"); }
		static ::hx::ObjectPtr< Measurements_obj > __new( ::openfl::display::DisplayObject target);
		static ::hx::ObjectPtr< Measurements_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Measurements_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Measurements",17,01,6a,4d); }

		void save( ::openfl::display::DisplayObject target);
		::Dynamic save_dyn();

		void restore( ::openfl::display::DisplayObject target);
		::Dynamic restore_dyn();

		 ::Dynamic width;
		 ::Dynamic height;
		 ::Dynamic minWidth;
		 ::Dynamic minHeight;
		 ::Dynamic maxWidth;
		 ::Dynamic maxHeight;
};

} // end namespace feathers
} // end namespace layout

#endif /* INCLUDED_feathers_layout_Measurements */ 
