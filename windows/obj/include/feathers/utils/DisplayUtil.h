#ifndef INCLUDED_feathers_utils_DisplayUtil
#define INCLUDED_feathers_utils_DisplayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,DisplayUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES DisplayUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DisplayUtil_obj OBJ_;
		DisplayUtil_obj();

	public:
		enum { _hx_ClassId = 0x72c98223 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.DisplayUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.DisplayUtil"); }

		inline static ::hx::ObjectPtr< DisplayUtil_obj > __new() {
			::hx::ObjectPtr< DisplayUtil_obj > __this = new DisplayUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DisplayUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DisplayUtil_obj *__this = (DisplayUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayUtil_obj), false, "feathers.utils.DisplayUtil"));
			*(void **)__this = DisplayUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayUtil",44,8f,d3,19); }

		static int getDisplayObjectDepthFromStage( ::openfl::display::DisplayObject target);
		static ::Dynamic getDisplayObjectDepthFromStage_dyn();

		static Float getConcatenatedScaleX( ::openfl::display::DisplayObject target);
		static ::Dynamic getConcatenatedScaleX_dyn();

		static Float getConcatenatedScaleY( ::openfl::display::DisplayObject target);
		static ::Dynamic getConcatenatedScaleY_dyn();

		static  ::openfl::geom::Point getConcatenatedScale( ::openfl::display::DisplayObject target, ::openfl::geom::Point result);
		static ::Dynamic getConcatenatedScale_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_DisplayUtil */ 
