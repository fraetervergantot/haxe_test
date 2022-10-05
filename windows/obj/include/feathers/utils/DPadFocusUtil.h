#ifndef INCLUDED_feathers_utils_DPadFocusUtil
#define INCLUDED_feathers_utils_DPadFocusUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,layout,RelativePosition)
HX_DECLARE_CLASS2(feathers,utils,DPadFocusUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DPadFocusUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DPadFocusUtil_obj OBJ_;
		DPadFocusUtil_obj();

	public:
		enum { _hx_ClassId = 0x55f567f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.DPadFocusUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.DPadFocusUtil"); }

		inline static ::hx::ObjectPtr< DPadFocusUtil_obj > __new() {
			::hx::ObjectPtr< DPadFocusUtil_obj > __this = new DPadFocusUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DPadFocusUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DPadFocusUtil_obj *__this = (DPadFocusUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DPadFocusUtil_obj), false, "feathers.utils.DPadFocusUtil"));
			*(void **)__this = DPadFocusUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DPadFocusUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DPadFocusUtil",8b,9e,5d,cb); }

		static bool isBetterFocusForRelativePosition( ::openfl::display::DisplayObject object1, ::openfl::display::DisplayObject object2, ::openfl::geom::Rectangle focusedRect, ::feathers::layout::RelativePosition relativePosition);
		static ::Dynamic isBetterFocusForRelativePosition_dyn();

		static Float calculateSecondaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position);
		static ::Dynamic calculateSecondaryAxisDistanceForRelativePosition_dyn();

		static Float calculateMaxPrimaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position);
		static ::Dynamic calculateMaxPrimaryAxisDistanceForRelativePosition_dyn();

		static Float calculateMinPrimaryAxisDistanceForRelativePosition( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position);
		static ::Dynamic calculateMinPrimaryAxisDistanceForRelativePosition_dyn();

		static bool itemsAreOnSameAxis( ::openfl::geom::Rectangle globalRect1, ::openfl::geom::Rectangle globalRect2, ::feathers::layout::RelativePosition position);
		static ::Dynamic itemsAreOnSameAxis_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_DPadFocusUtil */ 
