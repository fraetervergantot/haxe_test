#ifndef INCLUDED_feathers_graphics__CreateGradientBoxMatrix_CreateGradientBoxMatrix_Impl_
#define INCLUDED_feathers_graphics__CreateGradientBoxMatrix_CreateGradientBoxMatrix_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,graphics,_CreateGradientBoxMatrix,CreateGradientBoxMatrix_Impl_)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace feathers{
namespace graphics{
namespace _CreateGradientBoxMatrix{


class HXCPP_CLASS_ATTRIBUTES CreateGradientBoxMatrix_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CreateGradientBoxMatrix_Impl__obj OBJ_;
		CreateGradientBoxMatrix_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2a70b624 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_"); }

		inline static ::hx::ObjectPtr< CreateGradientBoxMatrix_Impl__obj > __new() {
			::hx::ObjectPtr< CreateGradientBoxMatrix_Impl__obj > __this = new CreateGradientBoxMatrix_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CreateGradientBoxMatrix_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CreateGradientBoxMatrix_Impl__obj *__this = (CreateGradientBoxMatrix_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreateGradientBoxMatrix_Impl__obj), false, "feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_"));
			*(void **)__this = CreateGradientBoxMatrix_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CreateGradientBoxMatrix_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CreateGradientBoxMatrix_Impl_",80,f4,5a,03); }

		static  ::Dynamic fromRadians(Float radians);
		static ::Dynamic fromRadians_dyn();

		static  ::Dynamic fromMatrix( ::openfl::geom::Matrix matrix);
		static ::Dynamic fromMatrix_dyn();

};

} // end namespace feathers
} // end namespace graphics
} // end namespace _CreateGradientBoxMatrix

#endif /* INCLUDED_feathers_graphics__CreateGradientBoxMatrix_CreateGradientBoxMatrix_Impl_ */ 
