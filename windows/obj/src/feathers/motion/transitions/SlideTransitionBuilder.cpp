#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_motion_effects_BaseEffectContext
#include <feathers/motion/effects/BaseEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_EffectInterruptBehavior
#include <feathers/motion/effects/EffectInterruptBehavior.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_IEffectContext
#include <feathers/motion/effects/IEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateEffectContext
#include <feathers/motion/effects/actuate/ActuateEffectContext.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_ActuateForEffects
#include <feathers/motion/effects/actuate/ActuateForEffects.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#include <feathers/motion/effects/actuate/IReadableGenericActuator.h>
#endif
#ifndef INCLUDED_feathers_motion_transitions_SlideTransitionBuilder
#include <feathers/motion/transitions/SlideTransitionBuilder.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83146237e6bb70f5_31_new,"feathers.motion.transitions.SlideTransitionBuilder","new",0xe4cfc591,"feathers.motion.transitions.SlideTransitionBuilder.new","feathers/motion/transitions/SlideTransitionBuilder.hx",31,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_63_setAngle,"feathers.motion.transitions.SlideTransitionBuilder","setAngle",0x359f4600,"feathers.motion.transitions.SlideTransitionBuilder.setAngle","feathers/motion/transitions/SlideTransitionBuilder.hx",63,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_74_setRadians,"feathers.motion.transitions.SlideTransitionBuilder","setRadians",0x2493eddf,"feathers.motion.transitions.SlideTransitionBuilder.setRadians","feathers/motion/transitions/SlideTransitionBuilder.hx",74,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_84_setUp,"feathers.motion.transitions.SlideTransitionBuilder","setUp",0x6d77f60e,"feathers.motion.transitions.SlideTransitionBuilder.setUp","feathers/motion/transitions/SlideTransitionBuilder.hx",84,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_94_setDown,"feathers.motion.transitions.SlideTransitionBuilder","setDown",0xa8af1ad5,"feathers.motion.transitions.SlideTransitionBuilder.setDown","feathers/motion/transitions/SlideTransitionBuilder.hx",94,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_104_setLeft,"feathers.motion.transitions.SlideTransitionBuilder","setLeft",0xadf12a7a,"feathers.motion.transitions.SlideTransitionBuilder.setLeft","feathers/motion/transitions/SlideTransitionBuilder.hx",104,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_114_setRight,"feathers.motion.transitions.SlideTransitionBuilder","setRight",0xfc210e09,"feathers.motion.transitions.SlideTransitionBuilder.setRight","feathers/motion/transitions/SlideTransitionBuilder.hx",114,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_123_setDuration,"feathers.motion.transitions.SlideTransitionBuilder","setDuration",0x061ce747,"feathers.motion.transitions.SlideTransitionBuilder.setDuration","feathers/motion/transitions/SlideTransitionBuilder.hx",123,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_133_setEase,"feathers.motion.transitions.SlideTransitionBuilder","setEase",0xa94dae61,"feathers.motion.transitions.SlideTransitionBuilder.setEase","feathers/motion/transitions/SlideTransitionBuilder.hx",133,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_144_setParallax,"feathers.motion.transitions.SlideTransitionBuilder","setParallax",0x6f857f4a,"feathers.motion.transitions.SlideTransitionBuilder.setParallax","feathers/motion/transitions/SlideTransitionBuilder.hx",144,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_158_setInterruptBehavior,"feathers.motion.transitions.SlideTransitionBuilder","setInterruptBehavior",0xf2013302,"feathers.motion.transitions.SlideTransitionBuilder.setInterruptBehavior","feathers/motion/transitions/SlideTransitionBuilder.hx",158,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_252_build,"feathers.motion.transitions.SlideTransitionBuilder","build",0xae333e9f,"feathers.motion.transitions.SlideTransitionBuilder.build","feathers/motion/transitions/SlideTransitionBuilder.hx",252,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_176_build,"feathers.motion.transitions.SlideTransitionBuilder","build",0xae333e9f,"feathers.motion.transitions.SlideTransitionBuilder.build","feathers/motion/transitions/SlideTransitionBuilder.hx",176,0x878c96be)
static const Float _hx_array_data_b91fa91f_13[] = {
	0.0,
};
static const Float _hx_array_data_b91fa91f_14[] = {
	0.0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_168_build,"feathers.motion.transitions.SlideTransitionBuilder","build",0xae333e9f,"feathers.motion.transitions.SlideTransitionBuilder.build","feathers/motion/transitions/SlideTransitionBuilder.hx",168,0x878c96be)
HX_LOCAL_STACK_FRAME(_hx_pos_83146237e6bb70f5_32_boot,"feathers.motion.transitions.SlideTransitionBuilder","boot",0x491619e1,"feathers.motion.transitions.SlideTransitionBuilder.boot","feathers/motion/transitions/SlideTransitionBuilder.hx",32,0x878c96be)
namespace feathers{
namespace motion{
namespace transitions{

void SlideTransitionBuilder_obj::__construct(::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease){
            		Float angleDegrees = __o_angleDegrees.Default(((Float)0.0));
            		Float duration = __o_duration.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_31_new)
HXLINE(  49)		this->_parallax = ((Float)1.0);
HXLINE(  40)		this->_angle = angleDegrees;
HXLINE(  41)		this->_duration = duration;
HXLINE(  42)		this->_ease = ease;
            	}

Dynamic SlideTransitionBuilder_obj::__CreateEmpty() { return new SlideTransitionBuilder_obj; }

void *SlideTransitionBuilder_obj::_hx_vtable = 0;

Dynamic SlideTransitionBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SlideTransitionBuilder_obj > _hx_result = new SlideTransitionBuilder_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SlideTransitionBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fb26735;
}

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setAngle(Float angleDegrees){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_63_setAngle)
HXLINE(  64)		this->_angle = angleDegrees;
HXLINE(  65)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setAngle,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setRadians(Float angleRadians){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_74_setRadians)
HXLINE(  75)		this->_angle = ((angleRadians * ((Float)180.0)) / ::Math_obj::PI);
HXDLIN(  75)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setRadians,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setUp(){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_84_setUp)
HXLINE(  85)		this->_angle = ((Float)90.0);
HXDLIN(  85)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlideTransitionBuilder_obj,setUp,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setDown(){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_94_setDown)
HXLINE(  95)		this->_angle = ((Float)270.0);
HXDLIN(  95)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlideTransitionBuilder_obj,setDown,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setLeft(){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_104_setLeft)
HXLINE( 105)		this->_angle = ((Float)180.0);
HXDLIN( 105)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlideTransitionBuilder_obj,setLeft,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setRight(){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_114_setRight)
HXLINE( 115)		this->_angle = ((Float)0.0);
HXDLIN( 115)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlideTransitionBuilder_obj,setRight,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setDuration(Float duration){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_123_setDuration)
HXLINE( 124)		this->_duration = duration;
HXLINE( 125)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setDuration,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setEase(::Dynamic ease){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_133_setEase)
HXLINE( 134)		this->_ease = ease;
HXLINE( 135)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setEase,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setParallax(Float parallax){
            	HX_GC_STACKFRAME(&_hx_pos_83146237e6bb70f5_144_setParallax)
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		if (!((parallax < ((Float)0.0)))) {
HXLINE( 145)			_hx_tmp = (parallax > ((Float)1.0));
            		}
            		else {
HXLINE( 145)			_hx_tmp = true;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 146)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((HX_("Invalid parallax value: ",f7,65,c7,79) + parallax) + HX_(". Expected a value between 0.0 and 1.0.",4e,94,8d,2f))));
            		}
HXLINE( 148)		this->_parallax = parallax;
HXLINE( 149)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setParallax,return )

 ::feathers::motion::transitions::SlideTransitionBuilder SlideTransitionBuilder_obj::setInterruptBehavior( ::feathers::motion::effects::EffectInterruptBehavior interruptBehavior){
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_158_setInterruptBehavior)
HXLINE( 159)		this->_interruptBehavior = interruptBehavior;
HXLINE( 160)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SlideTransitionBuilder_obj,setInterruptBehavior,return )

 ::Dynamic SlideTransitionBuilder_obj::build(){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_1,Float,duration, ::feathers::motion::transitions::SlideTransitionBuilder,_gthis,::Array< Float >,angle, ::feathers::motion::effects::EffectInterruptBehavior,interruptBehavior,::Dynamic,ease) HXARGC(2)
            		::Dynamic _hx_run( ::openfl::display::DisplayObject oldView, ::openfl::display::DisplayObject newView){
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0, ::feathers::motion::transitions::SlideTransitionBuilder,_gthis, ::openfl::display::DisplayObject,newView,::Array< Float >,endY,::Array< Float >,endX, ::openfl::display::DisplayObject,oldView) HXARGC(2)
            			void _hx_run(Float x,Float y){
            				HX_GC_STACKFRAME(&_hx_pos_83146237e6bb70f5_252_build)
HXLINE( 253)				if (::hx::IsNotNull( oldView )) {
HXLINE( 254)					oldView->set_x((x * _gthis->_parallax));
HXLINE( 255)					oldView->set_y((y * _gthis->_parallax));
            				}
HXLINE( 257)				if (::hx::IsNotNull( newView )) {
HXLINE( 258)					newView->set_x((x - endX->__get(0)));
HXLINE( 259)					newView->set_y((y - endY->__get(0)));
            				}
            			}
            			HX_END_LOCAL_FUNC2((void))

            			HX_GC_STACKFRAME(&_hx_pos_83146237e6bb70f5_176_build)
HXLINE( 177)			bool _hx_tmp;
HXDLIN( 177)			if (::hx::IsNull( oldView )) {
HXLINE( 177)				_hx_tmp = ::hx::IsNull( newView );
            			}
            			else {
HXLINE( 177)				_hx_tmp = false;
            			}
HXDLIN( 177)			if (_hx_tmp) {
HXLINE( 178)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,::feathers::motion::transitions::SlideTransitionBuilder_obj::VIEW_REQUIRED_ERROR));
            			}
HXLINE( 180)			 ::openfl::display::DisplayObjectContainer parent = null();
HXLINE( 181)			Float width = ((Float)0.0);
HXLINE( 182)			Float height = ((Float)0.0);
HXLINE( 183)			if (::hx::IsNotNull( oldView )) {
HXLINE( 184)				parent = oldView->parent;
HXLINE( 185)				width = oldView->get_width();
HXLINE( 186)				height = oldView->get_height();
            			}
HXLINE( 188)			if (::hx::IsNotNull( newView )) {
HXLINE( 189)				parent = newView->parent;
HXLINE( 190)				width = ::Math_obj::max(width,newView->get_width());
HXLINE( 191)				height = ::Math_obj::max(height,newView->get_height());
            			}
HXLINE( 193)			::Array< Float > endX = ::Array_obj< Float >::fromData( _hx_array_data_b91fa91f_13,1);
HXLINE( 194)			::Array< Float > endY = ::Array_obj< Float >::fromData( _hx_array_data_b91fa91f_14,1);
HXLINE( 195)			bool _hx_tmp1;
HXDLIN( 195)			if ((angle->__get(0) >= ((Float)0.0))) {
HXLINE( 195)				_hx_tmp1 = (angle->__get(0) < ((Float)45.0));
            			}
            			else {
HXLINE( 195)				_hx_tmp1 = false;
            			}
HXDLIN( 195)			if (_hx_tmp1) {
HXLINE( 197)				endX[0] = width;
HXLINE( 200)				Float hy = (width / ::Math_obj::cos(((angle->__get(0) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 201)				endY[0] = -(::Math_obj::sqrt(((hy * hy) - (width * width))));
            			}
            			else {
HXLINE( 202)				bool _hx_tmp;
HXDLIN( 202)				if ((angle->__get(0) >= ((Float)45.0))) {
HXLINE( 202)					_hx_tmp = (angle->__get(0) < ((Float)90.0));
            				}
            				else {
HXLINE( 202)					_hx_tmp = false;
            				}
HXDLIN( 202)				if (_hx_tmp) {
HXLINE( 204)					endY[0] = -(height);
HXLINE( 207)					Float hy = (height / ::Math_obj::sin(((angle->__get(0) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 208)					endX[0] = ::Math_obj::sqrt(((hy * hy) - (height * height)));
            				}
            				else {
HXLINE( 209)					bool _hx_tmp;
HXDLIN( 209)					if ((angle->__get(0) >= ((Float)90.0))) {
HXLINE( 209)						_hx_tmp = (angle->__get(0) < ((Float)135.0));
            					}
            					else {
HXLINE( 209)						_hx_tmp = false;
            					}
HXDLIN( 209)					if (_hx_tmp) {
HXLINE( 211)						endY[0] = -(height);
HXLINE( 212)						Float hy = (height / ::Math_obj::cos((((angle->__get(0) - ((Float)90.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 213)						endX[0] = -(::Math_obj::sqrt(((hy * hy) - (height * height))));
            					}
            					else {
HXLINE( 214)						bool _hx_tmp;
HXDLIN( 214)						if ((angle->__get(0) >= ((Float)135.0))) {
HXLINE( 214)							_hx_tmp = (angle->__get(0) < ((Float)180.0));
            						}
            						else {
HXLINE( 214)							_hx_tmp = false;
            						}
HXDLIN( 214)						if (_hx_tmp) {
HXLINE( 216)							endX[0] = -(width);
HXLINE( 217)							Float hy = (width / ::Math_obj::sin((((angle->__get(0) - ((Float)90.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 218)							endY[0] = -(::Math_obj::sqrt(((hy * hy) - (width * width))));
            						}
            						else {
HXLINE( 219)							bool _hx_tmp;
HXDLIN( 219)							if ((angle->__get(0) >= ((Float)180.0))) {
HXLINE( 219)								_hx_tmp = (angle->__get(0) < ((Float)225.0));
            							}
            							else {
HXLINE( 219)								_hx_tmp = false;
            							}
HXDLIN( 219)							if (_hx_tmp) {
HXLINE( 221)								endX[0] = -(width);
HXLINE( 222)								Float hy = (width / ::Math_obj::cos((((angle->__get(0) - ((Float)180.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 223)								endY[0] = ::Math_obj::sqrt(((hy * hy) - (width * width)));
            							}
            							else {
HXLINE( 224)								bool _hx_tmp;
HXDLIN( 224)								if ((angle->__get(0) >= ((Float)225.0))) {
HXLINE( 224)									_hx_tmp = (angle->__get(0) < ((Float)270.0));
            								}
            								else {
HXLINE( 224)									_hx_tmp = false;
            								}
HXDLIN( 224)								if (_hx_tmp) {
HXLINE( 226)									endY[0] = height;
HXLINE( 227)									Float hy = (height / ::Math_obj::sin((((angle->__get(0) - ((Float)180.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 228)									endX[0] = -(::Math_obj::sqrt(((hy * hy) - (height * height))));
            								}
            								else {
HXLINE( 229)									bool _hx_tmp;
HXDLIN( 229)									if ((angle->__get(0) >= ((Float)270.0))) {
HXLINE( 229)										_hx_tmp = (angle->__get(0) < ((Float)315.0));
            									}
            									else {
HXLINE( 229)										_hx_tmp = false;
            									}
HXDLIN( 229)									if (_hx_tmp) {
HXLINE( 231)										endY[0] = height;
HXLINE( 232)										Float hy = (height / ::Math_obj::cos((((angle->__get(0) - ((Float)270.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 233)										endX[0] = ::Math_obj::sqrt(((hy * hy) - (height * height)));
            									}
            									else {
HXLINE( 236)										endX[0] = width;
HXLINE( 237)										Float hy = (width / ::Math_obj::sin((((angle->__get(0) - ((Float)270.0)) * ::Math_obj::PI) / ((Float)180.0))));
HXLINE( 238)										endY[0] = ::Math_obj::sqrt(((hy * hy) - (width * width)));
            									}
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 240)			if (::hx::IsNotNull( newView )) {
HXLINE( 241)				newView->set_x(-(endX->__get(0)));
HXLINE( 242)				newView->set_y(-(endY->__get(0)));
            			}
HXLINE( 244)			bool _hx_tmp2;
HXDLIN( 244)			bool _hx_tmp3;
HXDLIN( 244)			if (::hx::IsNotNull( parent )) {
HXLINE( 244)				_hx_tmp3 = ::hx::IsNotNull( oldView );
            			}
            			else {
HXLINE( 244)				_hx_tmp3 = false;
            			}
HXDLIN( 244)			if (_hx_tmp3) {
HXLINE( 244)				_hx_tmp2 = ::hx::IsNotNull( newView );
            			}
            			else {
HXLINE( 244)				_hx_tmp2 = false;
            			}
HXDLIN( 244)			if (_hx_tmp2) {
HXLINE( 245)				int oldViewIndex = parent->getChildIndex(oldView);
HXLINE( 246)				int newViewIndex = parent->getChildIndex(newView);
HXLINE( 247)				if ((oldViewIndex > newViewIndex)) {
HXLINE( 249)					parent->swapChildren(oldView,newView);
            				}
            			}
HXLINE( 252)			::Dynamic actuator = ::feathers::motion::effects::actuate::ActuateForEffects_obj::update( ::Dynamic(new _hx_Closure_0(_gthis,newView,endY,endX,oldView)),duration,::cpp::VirtualArray_obj::__new(2)->init(0,((Float)0.0))->init(1,((Float)0.0)),::cpp::VirtualArray_obj::__new(2)->init(0,endX->__get(0))->init(1,endY->__get(0)),null());
HXLINE( 262)			if (::hx::IsNotNull( ease )) {
HXLINE( 263)				::motion::actuators::IGenericActuator_obj::ease(actuator,ease);
            			}
HXLINE( 265)			::motion::Actuate_obj::pause(actuator);
HXLINE( 266)			return  ::feathers::motion::effects::actuate::ActuateEffectContext_obj::__alloc( HX_CTX ,null(),actuator,interruptBehavior);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_168_build)
HXDLIN( 168)		 ::feathers::motion::transitions::SlideTransitionBuilder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 169)		::Array< Float > angle = ::Array_obj< Float >::__new(1)->init(0,::hx::Mod(this->_angle,((Float)360.0)));
HXLINE( 170)		if ((angle->__get(0) < ((Float)0.0))) {
HXLINE( 171)			::Array< Float > angle1 = angle;
HXDLIN( 171)			int _hx_tmp = 0;
HXDLIN( 171)			angle1[_hx_tmp] = (angle1->__get(_hx_tmp) + ((Float)360.0));
            		}
HXLINE( 173)		Float duration = this->_duration;
HXLINE( 174)		::Dynamic ease = this->_ease;
HXLINE( 175)		 ::feathers::motion::effects::EffectInterruptBehavior interruptBehavior = this->_interruptBehavior;
HXLINE( 176)		return  ::Dynamic(new _hx_Closure_1(duration,_gthis,angle,interruptBehavior,ease));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SlideTransitionBuilder_obj,build,return )

::String SlideTransitionBuilder_obj::VIEW_REQUIRED_ERROR;


::hx::ObjectPtr< SlideTransitionBuilder_obj > SlideTransitionBuilder_obj::__new(::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease) {
	::hx::ObjectPtr< SlideTransitionBuilder_obj > __this = new SlideTransitionBuilder_obj();
	__this->__construct(__o_angleDegrees,__o_duration,ease);
	return __this;
}

::hx::ObjectPtr< SlideTransitionBuilder_obj > SlideTransitionBuilder_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_angleDegrees,::hx::Null< Float >  __o_duration,::Dynamic ease) {
	SlideTransitionBuilder_obj *__this = (SlideTransitionBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SlideTransitionBuilder_obj), true, "feathers.motion.transitions.SlideTransitionBuilder"));
	*(void **)__this = SlideTransitionBuilder_obj::_hx_vtable;
	__this->__construct(__o_angleDegrees,__o_duration,ease);
	return __this;
}

SlideTransitionBuilder_obj::SlideTransitionBuilder_obj()
{
}

void SlideTransitionBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlideTransitionBuilder);
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_interruptBehavior,"_interruptBehavior");
	HX_MARK_MEMBER_NAME(_parallax,"_parallax");
	HX_MARK_END_CLASS();
}

void SlideTransitionBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_interruptBehavior,"_interruptBehavior");
	HX_VISIT_MEMBER_NAME(_parallax,"_parallax");
}

::hx::Val SlideTransitionBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return ::hx::Val( _ease ); }
		if (HX_FIELD_EQ(inName,"setUp") ) { return ::hx::Val( setUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"build") ) { return ::hx::Val( build_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return ::hx::Val( _angle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDown") ) { return ::hx::Val( setDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLeft") ) { return ::hx::Val( setLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"setEase") ) { return ::hx::Val( setEase_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setAngle") ) { return ::hx::Val( setAngle_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRight") ) { return ::hx::Val( setRight_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { return ::hx::Val( _duration ); }
		if (HX_FIELD_EQ(inName,"_parallax") ) { return ::hx::Val( _parallax ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setRadians") ) { return ::hx::Val( setRadians_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setDuration") ) { return ::hx::Val( setDuration_dyn() ); }
		if (HX_FIELD_EQ(inName,"setParallax") ) { return ::hx::Val( setParallax_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_interruptBehavior") ) { return ::hx::Val( _interruptBehavior ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setInterruptBehavior") ) { return ::hx::Val( setInterruptBehavior_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SlideTransitionBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"VIEW_REQUIRED_ERROR") ) { outValue = ( VIEW_REQUIRED_ERROR ); return true; }
	}
	return false;
}

::hx::Val SlideTransitionBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parallax") ) { _parallax=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_interruptBehavior") ) { _interruptBehavior=inValue.Cast<  ::feathers::motion::effects::EffectInterruptBehavior >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SlideTransitionBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"VIEW_REQUIRED_ERROR") ) { VIEW_REQUIRED_ERROR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void SlideTransitionBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_angle",14,8b,c9,1e));
	outFields->push(HX_("_duration",b3,06,24,5c));
	outFields->push(HX_("_ease",cd,a7,1d,f6));
	outFields->push(HX_("_interruptBehavior",16,c6,08,47));
	outFields->push(HX_("_parallax",b6,9e,8c,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SlideTransitionBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SlideTransitionBuilder_obj,_angle),HX_("_angle",14,8b,c9,1e)},
	{::hx::fsFloat,(int)offsetof(SlideTransitionBuilder_obj,_duration),HX_("_duration",b3,06,24,5c)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SlideTransitionBuilder_obj,_ease),HX_("_ease",cd,a7,1d,f6)},
	{::hx::fsObject /*  ::feathers::motion::effects::EffectInterruptBehavior */ ,(int)offsetof(SlideTransitionBuilder_obj,_interruptBehavior),HX_("_interruptBehavior",16,c6,08,47)},
	{::hx::fsFloat,(int)offsetof(SlideTransitionBuilder_obj,_parallax),HX_("_parallax",b6,9e,8c,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SlideTransitionBuilder_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &SlideTransitionBuilder_obj::VIEW_REQUIRED_ERROR,HX_("VIEW_REQUIRED_ERROR",62,05,07,c1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SlideTransitionBuilder_obj_sMemberFields[] = {
	HX_("_angle",14,8b,c9,1e),
	HX_("_duration",b3,06,24,5c),
	HX_("_ease",cd,a7,1d,f6),
	HX_("_interruptBehavior",16,c6,08,47),
	HX_("_parallax",b6,9e,8c,c5),
	HX_("setAngle",d1,ac,16,31),
	HX_("setRadians",f0,6a,cf,79),
	HX_("setUp",9d,92,2f,7a),
	HX_("setDown",24,39,f2,07),
	HX_("setLeft",c9,48,34,0d),
	HX_("setRight",da,74,98,f7),
	HX_("setDuration",16,d9,ee,44),
	HX_("setEase",b0,cc,90,08),
	HX_("setParallax",19,71,57,ae),
	HX_("setInterruptBehavior",53,0f,20,68),
	HX_("build",2e,db,ea,ba),
	::String(null()) };

static void SlideTransitionBuilder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlideTransitionBuilder_obj::VIEW_REQUIRED_ERROR,"VIEW_REQUIRED_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SlideTransitionBuilder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlideTransitionBuilder_obj::VIEW_REQUIRED_ERROR,"VIEW_REQUIRED_ERROR");
};

#endif

::hx::Class SlideTransitionBuilder_obj::__mClass;

static ::String SlideTransitionBuilder_obj_sStaticFields[] = {
	HX_("VIEW_REQUIRED_ERROR",62,05,07,c1),
	::String(null())
};

void SlideTransitionBuilder_obj::__register()
{
	SlideTransitionBuilder_obj _hx_dummy;
	SlideTransitionBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.motion.transitions.SlideTransitionBuilder",1f,a9,1f,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SlideTransitionBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &SlideTransitionBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = SlideTransitionBuilder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SlideTransitionBuilder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SlideTransitionBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SlideTransitionBuilder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SlideTransitionBuilder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SlideTransitionBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SlideTransitionBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SlideTransitionBuilder_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_83146237e6bb70f5_32_boot)
HXDLIN(  32)		VIEW_REQUIRED_ERROR = HX_("Cannot transition if both old view and new view are null.",21,63,0e,72);
            	}
}

} // end namespace feathers
} // end namespace motion
} // end namespace transitions
