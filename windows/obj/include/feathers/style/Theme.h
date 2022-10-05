#ifndef INCLUDED_feathers_style_Theme
#define INCLUDED_feathers_style_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,ITheme)
HX_DECLARE_CLASS2(feathers,style,Theme)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace style{


class HXCPP_CLASS_ATTRIBUTES Theme_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Theme_obj OBJ_;
		Theme_obj();

	public:
		enum { _hx_ClassId = 0x4250c488 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.style.Theme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.style.Theme"); }

		inline static ::hx::ObjectPtr< Theme_obj > __new() {
			::hx::ObjectPtr< Theme_obj > __this = new Theme_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Theme_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Theme_obj *__this = (Theme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Theme_obj), false, "feathers.style.Theme"));
			*(void **)__this = Theme_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Theme",e9,ed,b3,a2); }

		static void __boot();
		static ::Dynamic _fallbackTheme;
		static ::Dynamic get_fallbackTheme();
		static ::Dynamic get_fallbackTheme_dyn();

		static ::Dynamic primaryTheme;
		static ::Array< ::Dynamic> roots;
		static  ::haxe::ds::ObjectMap rootToTheme;
		static void setTheme(::Dynamic theme, ::openfl::display::DisplayObjectContainer root,::hx::Null< bool >  disposeOldTheme);
		static ::Dynamic setTheme_dyn();

		static ::Dynamic getTheme(::Dynamic object);
		static ::Dynamic getTheme_dyn();

};

} // end namespace feathers
} // end namespace style

#endif /* INCLUDED_feathers_style_Theme */ 
