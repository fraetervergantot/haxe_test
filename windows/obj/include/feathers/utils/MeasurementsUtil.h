#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#define INCLUDED_feathers_utils_MeasurementsUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,utils,MeasurementsUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES MeasurementsUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MeasurementsUtil_obj OBJ_;
		MeasurementsUtil_obj();

	public:
		enum { _hx_ClassId = 0x357e2db2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.MeasurementsUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.MeasurementsUtil"); }

		inline static ::hx::ObjectPtr< MeasurementsUtil_obj > __new() {
			::hx::ObjectPtr< MeasurementsUtil_obj > __this = new MeasurementsUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MeasurementsUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MeasurementsUtil_obj *__this = (MeasurementsUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeasurementsUtil_obj), false, "feathers.utils.MeasurementsUtil"));
			*(void **)__this = MeasurementsUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MeasurementsUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MeasurementsUtil",b9,5c,bd,27); }

		static void resetFluidlyWithParentValues( ::feathers::layout::Measurements measurements, ::openfl::display::DisplayObject target, ::Dynamic parentExplicitWidth, ::Dynamic parentExplicitHeight, ::Dynamic parentExplicitMinWidth, ::Dynamic parentExplicitMinHeight, ::Dynamic parentExplicitMaxWidth, ::Dynamic parentExplicitMaxHeight);
		static ::Dynamic resetFluidlyWithParentValues_dyn();

		static void resetFluidlyWithParent( ::feathers::layout::Measurements measurements, ::openfl::display::DisplayObject target,::Dynamic parent);
		static ::Dynamic resetFluidlyWithParent_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_MeasurementsUtil */ 
