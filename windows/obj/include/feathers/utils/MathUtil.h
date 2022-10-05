#ifndef INCLUDED_feathers_utils_MathUtil
#define INCLUDED_feathers_utils_MathUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(feathers,utils,MathUtil)

namespace feathers{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES MathUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MathUtil_obj OBJ_;
		MathUtil_obj();

	public:
		enum { _hx_ClassId = 0x322721cb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.utils.MathUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.utils.MathUtil"); }

		inline static ::hx::ObjectPtr< MathUtil_obj > __new() {
			::hx::ObjectPtr< MathUtil_obj > __this = new MathUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MathUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MathUtil_obj *__this = (MathUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MathUtil_obj), false, "feathers.utils.MathUtil"));
			*(void **)__this = MathUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MathUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MathUtil",0a,06,68,71); }

		static Float roundDownToNearest(Float number,::hx::Null< Float >  nearest);
		static ::Dynamic roundDownToNearest_dyn();

		static Float roundUpToNearest(Float number,::hx::Null< Float >  nearest);
		static ::Dynamic roundUpToNearest_dyn();

		static Float roundToNearest(Float number,::hx::Null< Float >  nearest);
		static ::Dynamic roundToNearest_dyn();

		static Float roundToPrecision(Float number,::hx::Null< int >  precision);
		static ::Dynamic roundToPrecision_dyn();

		static bool fuzzyEquals(Float n1,Float n2,::hx::Null< Float >  maxDifference);
		static ::Dynamic fuzzyEquals_dyn();

};

} // end namespace feathers
} // end namespace utils

#endif /* INCLUDED_feathers_utils_MathUtil */ 
