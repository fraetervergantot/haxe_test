#ifndef INCLUDED_feathers_utils_PopUpUtil
#define INCLUDED_feathers_utils_PopUpUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,PopUpUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES PopUpUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PopUpUtil_obj OBJ_;
		PopUpUtil_obj();

	public:
		enum { _hx_ClassId = 0x20a1b235 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.PopUpUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.PopUpUtil"); }

		inline static ::hx::ObjectPtr< PopUpUtil_obj > __new() {
			::hx::ObjectPtr< PopUpUtil_obj > __this = new PopUpUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PopUpUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PopUpUtil_obj *__this = (PopUpUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PopUpUtil_obj), false, "feathers.utils.PopUpUtil"));
			*(void **)__this = PopUpUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PopUpUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PopUpUtil",4e,68,72,9b); }

		static bool isTopLevelPopUpOrIsContainedByTopLevelPopUp( ::openfl::display::DisplayObject target);
		static ::Dynamic isTopLevelPopUpOrIsContainedByTopLevelPopUp_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_PopUpUtil */ 
