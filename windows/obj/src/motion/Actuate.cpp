#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TweenTimer
#include <motion/_Actuate/TweenTimer.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_40_apply,"motion.Actuate","apply",0x649fd077,"motion.Actuate.apply","motion/Actuate.hx",40,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_69_effects,"motion.Actuate","effects",0x889fc40b,"motion.Actuate.effects","motion/Actuate.hx",69,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_76_getLibrary,"motion.Actuate","getLibrary",0xc133c15c,"motion.Actuate.getLibrary","motion/Actuate.hx",76,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_109_isActive,"motion.Actuate","isActive",0x1dbf5de7,"motion.Actuate.isActive","motion/Actuate.hx",109,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_135_motionPath,"motion.Actuate","motionPath",0x6ec8ff52,"motion.Actuate.motionPath","motion/Actuate.hx",135,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_147_pause,"motion.Actuate","pause",0xfdbc21ff,"motion.Actuate.pause","motion/Actuate.hx",147,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_187_pauseAll,"motion.Actuate","pauseAll",0xb88d9862,"motion.Actuate.pauseAll","motion/Actuate.hx",187,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_203_reset,"motion.Actuate","reset",0x272c94d8,"motion.Actuate.reset","motion/Actuate.hx",203,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_248_resume,"motion.Actuate","resume",0x1fe1c684,"motion.Actuate.resume","motion/Actuate.hx",248,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_288_resumeAll,"motion.Actuate","resumeAll",0x7a6fd4fd,"motion.Actuate.resumeAll","motion/Actuate.hx",288,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_310_stop,"motion.Actuate","stop",0xb1ab9919,"motion.Actuate.stop","motion/Actuate.hx",310,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_370_timer,"motion.Actuate","timer",0x509a0ace,"motion.Actuate.timer","motion/Actuate.hx",370,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_387_transform,"motion.Actuate","transform",0xc41430f5,"motion.Actuate.transform","motion/Actuate.hx",387,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_404_tween,"motion.Actuate","tween",0x59d4f574,"motion.Actuate.tween","motion/Actuate.hx",404,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_450_unload,"motion.Actuate","unload",0x7ce9fdd6,"motion.Actuate.unload","motion/Actuate.hx",450,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_501_update,"motion.Actuate","update",0x9e62e2e0,"motion.Actuate.update","motion/Actuate.hx",501,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_24_boot,"motion.Actuate","boot",0xa66b2d49,"motion.Actuate.boot","motion/Actuate.hx",24,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_25_boot,"motion.Actuate","boot",0xa66b2d49,"motion.Actuate.boot","motion/Actuate.hx",25,0xcac92ba8)
HX_LOCAL_STACK_FRAME(_hx_pos_113fc4785685f161_26_boot,"motion.Actuate","boot",0xa66b2d49,"motion.Actuate.boot","motion/Actuate.hx",26,0xcac92ba8)
namespace motion{

void Actuate_obj::__construct() { }

Dynamic Actuate_obj::__CreateEmpty() { return new Actuate_obj; }

void *Actuate_obj::_hx_vtable = 0;

Dynamic Actuate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Actuate_obj > _hx_result = new Actuate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Actuate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12334cb1;
}

::hx::Class Actuate_obj::defaultActuator;

::Dynamic Actuate_obj::defaultEase;

 ::haxe::ds::ObjectMap Actuate_obj::targetLibraries;

 ::motion::actuators::GenericActuator Actuate_obj::apply( ::Dynamic target, ::Dynamic properties,::hx::Class customActuator){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_40_apply)
HXLINE(  42)		::motion::Actuate_obj::stop(target,properties,null(),null());
HXLINE(  44)		if (::hx::IsNull( customActuator )) {
HXLINE(  46)			customActuator = ::motion::Actuate_obj::defaultActuator;
            		}
HXLINE(  50)		 ::motion::actuators::GenericActuator actuator = ( ( ::motion::actuators::GenericActuator)(::Type_obj::createInstance(customActuator,::cpp::VirtualArray_obj::__new(3)->init(0,target)->init(1,0)->init(2,properties))) );
HXLINE(  51)		actuator->apply();
HXLINE(  53)		return actuator;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,apply,return )

 ::motion::_Actuate::EffectsOptions Actuate_obj::effects( ::openfl::display::DisplayObject target,Float duration,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_113fc4785685f161_69_effects)
HXDLIN(  69)		return  ::motion::_Actuate::EffectsOptions_obj::__alloc( HX_CTX ,target,duration,overwrite);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,effects,return )

::Array< ::Dynamic> Actuate_obj::getLibrary( ::Dynamic target,::hx::Null< bool >  __o_allowCreation){
            		bool allowCreation = __o_allowCreation.Default(true);
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_76_getLibrary)
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if (!(::motion::Actuate_obj::targetLibraries->exists(target))) {
HXLINE(  94)			_hx_tmp = allowCreation;
            		}
            		else {
HXLINE(  94)			_hx_tmp = false;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  96)			 ::haxe::ds::ObjectMap _hx_tmp = ::motion::Actuate_obj::targetLibraries;
HXDLIN(  96)			_hx_tmp->set(target,::Array_obj< ::Dynamic>::__new());
            		}
HXLINE( 100)		return ( (::Array< ::Dynamic>)(::motion::Actuate_obj::targetLibraries->get(target)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,getLibrary,return )

bool Actuate_obj::isActive(){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_109_isActive)
HXLINE( 111)		bool result = false;
HXLINE( 113)		{
HXLINE( 113)			 ::Dynamic library = ::motion::Actuate_obj::targetLibraries->iterator();
HXDLIN( 113)			while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 113)				::Array< ::Dynamic> library1 = ( (::Array< ::Dynamic>)(library->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 115)				result = true;
HXLINE( 116)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 120)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,isActive,return )

 ::motion::actuators::GenericActuator Actuate_obj::motionPath( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_135_motionPath)
HXDLIN( 135)		return ::motion::Actuate_obj::tween(target,duration,properties,overwrite,::hx::ClassOf< ::motion::actuators::MotionPathActuator >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,motionPath,return )

void Actuate_obj::pause( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_147_pause)
HXDLIN( 147)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::motion::actuators::IGenericActuator >()) ))) {
HXLINE( 149)			::Dynamic actuator = target;
HXLINE( 150)			::motion::actuators::IGenericActuator_obj::pause(actuator);
            		}
            		else {
HXLINE( 154)			::Array< ::Dynamic> library = ::motion::Actuate_obj::getLibrary(target,false);
HXLINE( 156)			if (::hx::IsNotNull( library )) {
HXLINE( 158)				int _g = 0;
HXDLIN( 158)				while((_g < library->length)){
HXLINE( 158)					::Dynamic actuator = library->__get(_g);
HXDLIN( 158)					_g = (_g + 1);
HXLINE( 160)					::motion::actuators::IGenericActuator_obj::pause(actuator);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,pause,(void))

void Actuate_obj::pauseAll(){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_187_pauseAll)
HXDLIN( 187)		 ::Dynamic library = ::motion::Actuate_obj::targetLibraries->iterator();
HXDLIN( 187)		while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 187)			::Array< ::Dynamic> library1 = ( (::Array< ::Dynamic>)(library->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 189)			{
HXLINE( 189)				int _g = 0;
HXDLIN( 189)				while((_g < library1->length)){
HXLINE( 189)					::Dynamic actuator = library1->__get(_g);
HXDLIN( 189)					_g = (_g + 1);
HXLINE( 191)					::motion::actuators::IGenericActuator_obj::pause(actuator);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,pauseAll,(void))

void Actuate_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_113fc4785685f161_203_reset)
HXLINE( 224)		{
HXLINE( 224)			 ::Dynamic library = ::motion::Actuate_obj::targetLibraries->iterator();
HXDLIN( 224)			while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 224)				::Array< ::Dynamic> library1 = ( (::Array< ::Dynamic>)(library->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 226)				int i = (library1->length - 1);
HXLINE( 228)				while((i >= 0)){
HXLINE( 230)					::motion::actuators::IGenericActuator_obj::stop(library1->__get(i),null(),false,false);
HXLINE( 231)					i = (i - 1);
            				}
            			}
            		}
HXLINE( 237)		::motion::Actuate_obj::targetLibraries =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,reset,(void))

void Actuate_obj::resume( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_248_resume)
HXDLIN( 248)		if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::motion::actuators::IGenericActuator >()) ))) {
HXLINE( 250)			::Dynamic actuator = target;
HXLINE( 251)			::motion::actuators::IGenericActuator_obj::resume(actuator);
            		}
            		else {
HXLINE( 255)			::Array< ::Dynamic> library = ::motion::Actuate_obj::getLibrary(target,false);
HXLINE( 257)			if (::hx::IsNotNull( library )) {
HXLINE( 259)				int _g = 0;
HXDLIN( 259)				while((_g < library->length)){
HXLINE( 259)					::Dynamic actuator = library->__get(_g);
HXDLIN( 259)					_g = (_g + 1);
HXLINE( 261)					::motion::actuators::IGenericActuator_obj::resume(actuator);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,resume,(void))

void Actuate_obj::resumeAll(){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_288_resumeAll)
HXDLIN( 288)		 ::Dynamic library = ::motion::Actuate_obj::targetLibraries->iterator();
HXDLIN( 288)		while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 288)			::Array< ::Dynamic> library1 = ( (::Array< ::Dynamic>)(library->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 290)			{
HXLINE( 290)				int _g = 0;
HXDLIN( 290)				while((_g < library1->length)){
HXLINE( 290)					::Dynamic actuator = library1->__get(_g);
HXDLIN( 290)					_g = (_g + 1);
HXLINE( 292)					::motion::actuators::IGenericActuator_obj::resume(actuator);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,resumeAll,(void))

void Actuate_obj::stop( ::Dynamic target, ::Dynamic properties,::hx::Null< bool >  __o_complete,::hx::Null< bool >  __o_sendEvent){
            		bool complete = __o_complete.Default(false);
            		bool sendEvent = __o_sendEvent.Default(true);
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_310_stop)
HXDLIN( 310)		if (::hx::IsNotNull( target )) {
HXLINE( 312)			if (::Std_obj::isOfType(target,( ( ::Dynamic)(::hx::ClassOf< ::motion::actuators::IGenericActuator >()) ))) {
HXLINE( 314)				::Dynamic actuator = target;
HXLINE( 315)				::motion::actuators::IGenericActuator_obj::stop(actuator,null(),complete,sendEvent);
            			}
            			else {
HXLINE( 319)				::Array< ::Dynamic> library = ::motion::Actuate_obj::getLibrary(target,false);
HXLINE( 321)				if (::hx::IsNotNull( library )) {
HXLINE( 323)					if (::Std_obj::isOfType(properties,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 325)						 ::Dynamic temp =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 326)						::Reflect_obj::setField(temp,( (::String)(properties) ),null());
HXLINE( 327)						properties = temp;
            					}
            					else {
HXLINE( 329)						if (::Std_obj::isOfType(properties,( ( ::Dynamic)(::hx::ArrayBase::__mClass) ))) {
HXLINE( 331)							 ::Dynamic temp =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 333)							{
HXLINE( 333)								int _g = 0;
HXDLIN( 333)								::cpp::VirtualArray _g1 = ::hx::TCast< ::cpp::VirtualArray >::cast(properties);
HXDLIN( 333)								while((_g < _g1->get_length())){
HXLINE( 333)									 ::Dynamic property = _g1->__get(_g);
HXDLIN( 333)									_g = (_g + 1);
HXLINE( 335)									::Reflect_obj::setField(temp,( (::String)(property) ),null());
            								}
            							}
HXLINE( 339)							properties = temp;
            						}
            					}
HXLINE( 343)					int i = (library->length - 1);
HXLINE( 345)					while((i >= 0)){
HXLINE( 347)						::motion::actuators::IGenericActuator_obj::stop(library->__get(i),properties,complete,sendEvent);
HXLINE( 348)						i = (i - 1);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,stop,(void))

 ::motion::actuators::GenericActuator Actuate_obj::timer(Float duration,::hx::Class customActuator){
            	HX_GC_STACKFRAME(&_hx_pos_113fc4785685f161_370_timer)
HXDLIN( 370)		 ::motion::_Actuate::TweenTimer _hx_tmp =  ::motion::_Actuate::TweenTimer_obj::__alloc( HX_CTX ,( (Float)(0) ));
HXDLIN( 370)		return ::motion::Actuate_obj::tween(_hx_tmp,duration, ::motion::_Actuate::TweenTimer_obj::__alloc( HX_CTX ,( (Float)(1) )),false,customActuator);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,timer,return )

 ::motion::_Actuate::TransformOptions Actuate_obj::transform( ::Dynamic target,::hx::Null< Float >  __o_duration,::hx::Null< bool >  __o_overwrite){
            		Float duration = __o_duration.Default(0);
            		bool overwrite = __o_overwrite.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_113fc4785685f161_387_transform)
HXDLIN( 387)		return  ::motion::_Actuate::TransformOptions_obj::__alloc( HX_CTX ,target,duration,overwrite);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,transform,return )

 ::motion::actuators::GenericActuator Actuate_obj::tween( ::Dynamic target,Float duration, ::Dynamic properties,::hx::Null< bool >  __o_overwrite,::hx::Class customActuator){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_404_tween)
HXLINE( 406)		if (::hx::IsNotNull( target )) {
HXLINE( 408)			if ((duration > 0)) {
HXLINE( 410)				if (::hx::IsNull( customActuator )) {
HXLINE( 412)					customActuator = ::motion::Actuate_obj::defaultActuator;
            				}
HXLINE( 416)				 ::motion::actuators::GenericActuator actuator = ( ( ::motion::actuators::GenericActuator)(::Type_obj::createInstance(customActuator,::cpp::VirtualArray_obj::__new(3)->init(0,target)->init(1,duration)->init(2,properties))) );
HXLINE( 417)				::Array< ::Dynamic> library = ::motion::Actuate_obj::getLibrary(actuator->target,null());
HXLINE( 419)				if (overwrite) {
HXLINE( 421)					int i = (library->length - 1);
HXLINE( 423)					while((i >= 0)){
HXLINE( 424)						::motion::actuators::IGenericActuator_obj::stop(library->__get(i),actuator->properties,false,false);
HXLINE( 425)						i = (i - 1);
            					}
HXLINE( 428)					library = ::motion::Actuate_obj::getLibrary(actuator->target,null());
            				}
HXLINE( 432)				library->push(actuator);
HXLINE( 433)				actuator->move();
HXLINE( 435)				return actuator;
            			}
            			else {
HXLINE( 439)				return ::motion::Actuate_obj::apply(target,properties,customActuator);
            			}
            		}
HXLINE( 445)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,tween,return )

void Actuate_obj::unload( ::motion::actuators::GenericActuator actuator){
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_450_unload)
HXLINE( 452)		 ::Dynamic target = actuator->target;
HXLINE( 476)		if (::motion::Actuate_obj::targetLibraries->exists(target)) {
HXLINE( 478)			( (::Array< ::Dynamic>)(::motion::Actuate_obj::targetLibraries->get(target)) )->remove(actuator);
HXLINE( 480)			if ((( (::Array< ::Dynamic>)(::motion::Actuate_obj::targetLibraries->get(target)) )->length == 0)) {
HXLINE( 482)				::motion::Actuate_obj::targetLibraries->remove(target);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,unload,(void))

 ::motion::actuators::GenericActuator Actuate_obj::update( ::Dynamic target,Float duration,::cpp::VirtualArray start,::cpp::VirtualArray end,::hx::Null< bool >  __o_overwrite){
            		bool overwrite = __o_overwrite.Default(true);
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_501_update)
HXLINE( 503)		 ::Dynamic properties =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("start",62,74,0b,84),start)
            			->setFixed(1,HX_("end",db,03,4d,00),end));
HXLINE( 505)		return ::motion::Actuate_obj::tween(target,duration,properties,overwrite,::hx::ClassOf< ::motion::actuators::MethodActuator >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,update,return )


Actuate_obj::Actuate_obj()
{
}

bool Actuate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { outValue = effects_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { outValue = isActive_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pauseAll") ) { outValue = pauseAll_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resumeAll") ) { outValue = resumeAll_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"motionPath") ) { outValue = motionPath_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { outValue = ( defaultEase ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { outValue = ( defaultActuator ); return true; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { outValue = ( targetLibraries ); return true; }
	}
	return false;
}

bool Actuate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { defaultEase=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { defaultActuator=ioValue.Cast< ::hx::Class >(); return true; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { targetLibraries=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Actuate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Actuate_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::hx::Class */ ,(void *) &Actuate_obj::defaultActuator,HX_("defaultActuator",1a,bb,b5,e9)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Actuate_obj::defaultEase,HX_("defaultEase",4f,85,cb,14)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &Actuate_obj::targetLibraries,HX_("targetLibraries",88,ca,b7,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Actuate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Actuate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#endif

::hx::Class Actuate_obj::__mClass;

static ::String Actuate_obj_sStaticFields[] = {
	HX_("defaultActuator",1a,bb,b5,e9),
	HX_("defaultEase",4f,85,cb,14),
	HX_("targetLibraries",88,ca,b7,7d),
	HX_("apply",6e,85,3b,24),
	HX_("effects",c2,e4,4b,2e),
	HX_("getLibrary",05,ad,d1,8e),
	HX_("isActive",50,dd,af,6e),
	HX_("motionPath",fb,ea,66,3c),
	HX_("pause",f6,d6,57,bd),
	HX_("pauseAll",cb,17,7e,09),
	HX_("reset",cf,49,c8,e6),
	HX_("resume",ad,69,84,08),
	HX_("resumeAll",74,d1,ee,fb),
	HX_("stop",02,f0,5b,4c),
	HX_("timer",c5,bf,35,10),
	HX_("transform",6c,2d,93,45),
	HX_("tween",6b,aa,70,19),
	HX_("unload",ff,a0,8c,65),
	HX_("update",09,86,05,87),
	::String(null())
};

void Actuate_obj::__register()
{
	Actuate_obj _hx_dummy;
	Actuate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.Actuate",b7,4e,b3,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuate_obj::__GetStatic;
	__mClass->mSetStaticField = &Actuate_obj::__SetStatic;
	__mClass->mMarkFunc = Actuate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Actuate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Actuate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Actuate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Actuate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Actuate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Actuate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_24_boot)
HXDLIN(  24)		defaultActuator = ::hx::ClassOf< ::motion::actuators::SimpleActuator >();
            	}
{
            	HX_STACKFRAME(&_hx_pos_113fc4785685f161_25_boot)
HXDLIN(  25)		defaultEase = ::motion::easing::Expo_obj::easeOut;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_113fc4785685f161_26_boot)
HXDLIN(  26)		targetLibraries =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
