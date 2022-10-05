#include <hxcpp.h>

#ifndef INCLUDED_feathers_graphics__CreateGradientBoxMatrix_CreateGradientBoxMatrix_Impl_
#include <feathers/graphics/_CreateGradientBoxMatrix/CreateGradientBoxMatrix_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3b7e0fe81b178674_31_fromRadians,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_","fromRadians",0xc4bf3d32,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_.fromRadians","feathers/graphics/CreateGradientBoxMatrix.hx",31,0x96a60503)
HX_LOCAL_STACK_FRAME(_hx_pos_3b7e0fe81b178674_46_fromMatrix,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_","fromMatrix",0xda565781,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_.fromMatrix","feathers/graphics/CreateGradientBoxMatrix.hx",46,0x96a60503)
HX_LOCAL_STACK_FRAME(_hx_pos_3b7e0fe81b178674_45_fromMatrix,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_","fromMatrix",0xda565781,"feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_.fromMatrix","feathers/graphics/CreateGradientBoxMatrix.hx",45,0x96a60503)
namespace feathers{
namespace graphics{
namespace _CreateGradientBoxMatrix{

void CreateGradientBoxMatrix_Impl__obj::__construct() { }

Dynamic CreateGradientBoxMatrix_Impl__obj::__CreateEmpty() { return new CreateGradientBoxMatrix_Impl__obj; }

void *CreateGradientBoxMatrix_Impl__obj::_hx_vtable = 0;

Dynamic CreateGradientBoxMatrix_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreateGradientBoxMatrix_Impl__obj > _hx_result = new CreateGradientBoxMatrix_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CreateGradientBoxMatrix_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a70b624;
}

 ::Dynamic CreateGradientBoxMatrix_Impl__obj::fromRadians(Float radians){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,Float,radians) HXARGC(5)
            		 ::openfl::geom::Matrix _hx_run(Float defaultWidth,Float defaultHeight, ::Dynamic defaultRadians, ::Dynamic defaultTx, ::Dynamic defaultTy){
            			HX_GC_STACKFRAME(&_hx_pos_3b7e0fe81b178674_31_fromRadians)
HXLINE(  32)			 ::openfl::geom::Matrix matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  33)			matrix->createGradientBox(defaultWidth,defaultHeight,radians,defaultTx,defaultTy);
HXLINE(  34)			return matrix;
            		}
            		HX_END_LOCAL_FUNC5(return)

            	HX_STACKFRAME(&_hx_pos_3b7e0fe81b178674_31_fromRadians)
HXDLIN(  31)		return  ::Dynamic(new _hx_Closure_0(radians));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CreateGradientBoxMatrix_Impl__obj,fromRadians,return )

 ::Dynamic CreateGradientBoxMatrix_Impl__obj::fromMatrix( ::openfl::geom::Matrix matrix){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::geom::Matrix,matrix) HXARGC(5)
            		 ::openfl::geom::Matrix _hx_run(Float defaultWidth,Float defaultHeight, ::Dynamic defaultRadians, ::Dynamic defaultTx, ::Dynamic defaultTy){
            			HX_STACKFRAME(&_hx_pos_3b7e0fe81b178674_46_fromMatrix)
HXLINE(  46)			return matrix;
            		}
            		HX_END_LOCAL_FUNC5(return)

            	HX_STACKFRAME(&_hx_pos_3b7e0fe81b178674_45_fromMatrix)
HXDLIN(  45)		return  ::Dynamic(new _hx_Closure_0(matrix));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CreateGradientBoxMatrix_Impl__obj,fromMatrix,return )


CreateGradientBoxMatrix_Impl__obj::CreateGradientBoxMatrix_Impl__obj()
{
}

bool CreateGradientBoxMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { outValue = fromMatrix_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromRadians") ) { outValue = fromRadians_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CreateGradientBoxMatrix_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CreateGradientBoxMatrix_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CreateGradientBoxMatrix_Impl__obj::__mClass;

static ::String CreateGradientBoxMatrix_Impl__obj_sStaticFields[] = {
	HX_("fromRadians",28,aa,30,bf),
	HX_("fromMatrix",4b,3b,0c,ff),
	::String(null())
};

void CreateGradientBoxMatrix_Impl__obj::__register()
{
	CreateGradientBoxMatrix_Impl__obj _hx_dummy;
	CreateGradientBoxMatrix_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.graphics._CreateGradientBoxMatrix.CreateGradientBoxMatrix_Impl_",78,0c,0c,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CreateGradientBoxMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CreateGradientBoxMatrix_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CreateGradientBoxMatrix_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreateGradientBoxMatrix_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreateGradientBoxMatrix_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace graphics
} // end namespace _CreateGradientBoxMatrix
