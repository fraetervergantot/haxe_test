#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_OpCode
#define INCLUDED_openfl_utils__AGALMiniAssembler_OpCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b6bb58d9c0266c23_804_new)
HX_DECLARE_CLASS3(openfl,utils,_AGALMiniAssembler,OpCode)

namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{


class HXCPP_CLASS_ATTRIBUTES OpCode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OpCode_obj OBJ_;
		OpCode_obj();

	public:
		enum { _hx_ClassId = 0x60536c68 };

		void __construct(::String name,int numRegister,int emitCode,int flags);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._AGALMiniAssembler.OpCode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._AGALMiniAssembler.OpCode"); }

		inline static ::hx::ObjectPtr< OpCode_obj > __new(::String name,int numRegister,int emitCode,int flags) {
			::hx::ObjectPtr< OpCode_obj > __this = new OpCode_obj();
			__this->__construct(name,numRegister,emitCode,flags);
			return __this;
		}

		inline static ::hx::ObjectPtr< OpCode_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int numRegister,int emitCode,int flags) {
			OpCode_obj *__this = (OpCode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpCode_obj), true, "openfl.utils._AGALMiniAssembler.OpCode"));
			*(void **)__this = OpCode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b6bb58d9c0266c23_804_new)
HXLINE( 805)		( ( ::openfl::utils::_AGALMiniAssembler::OpCode)(__this) )->name = name;
HXLINE( 806)		( ( ::openfl::utils::_AGALMiniAssembler::OpCode)(__this) )->numRegister = numRegister;
HXLINE( 807)		( ( ::openfl::utils::_AGALMiniAssembler::OpCode)(__this) )->emitCode = emitCode;
HXLINE( 808)		( ( ::openfl::utils::_AGALMiniAssembler::OpCode)(__this) )->flags = flags;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpCode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpCode",0e,57,b0,3f); }

		static void __boot();
		static  ::Dynamic __meta__;
		int emitCode;
		int flags;
		::String name;
		int numRegister;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler

#endif /* INCLUDED_openfl_utils__AGALMiniAssembler_OpCode */ 
