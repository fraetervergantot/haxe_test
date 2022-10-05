#ifndef INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator
#define INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_motion_effects_actuate_IGotoActuator
#include <feathers/motion/effects/actuate/IGotoActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IGotoActuator)
HX_DECLARE_CLASS4(feathers,motion,effects,actuate,IReadableGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace feathers{
namespace motion{
namespace effects{
namespace actuate{


class HXCPP_CLASS_ATTRIBUTES IReadableGenericActuator_obj {
	public:
		typedef  ::feathers::motion::effects::actuate::IGotoActuator_obj super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_autoVisible)( ::Dynamic value); 
		static inline ::Dynamic autoVisible( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_autoVisible)(value);
		}
		::Dynamic (::hx::Object :: *_hx_delay)(Float duration); 
		static inline ::Dynamic delay( ::Dynamic _hx_,Float duration) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_delay)(duration);
		}
		::Dynamic (::hx::Object :: *_hx_ease)(::Dynamic easing); 
		static inline ::Dynamic ease( ::Dynamic _hx_,::Dynamic easing) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_ease)(easing);
		}
		::Dynamic (::hx::Object :: *_hx_onComplete)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onComplete( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_onComplete)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onRepeat)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onRepeat( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_onRepeat)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onUpdate)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onUpdate( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_onUpdate)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_reflect)( ::Dynamic value); 
		static inline ::Dynamic reflect( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_reflect)(value);
		}
		::Dynamic (::hx::Object :: *_hx_repeat)( ::Dynamic times); 
		static inline ::Dynamic repeat( ::Dynamic _hx_, ::Dynamic times) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_repeat)(times);
		}
		::Dynamic (::hx::Object :: *_hx_reverse)( ::Dynamic value); 
		static inline ::Dynamic reverse( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_reverse)(value);
		}
		::Dynamic (::hx::Object :: *_hx_smartRotation)( ::Dynamic value); 
		static inline ::Dynamic smartRotation( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_smartRotation)(value);
		}
		::Dynamic (::hx::Object :: *_hx_snapping)( ::Dynamic value); 
		static inline ::Dynamic snapping( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_snapping)(value);
		}
		::Dynamic (::hx::Object :: *_hx_onPause)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onPause( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_onPause)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onResume)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onResume( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_onResume)(handler,parameters);
		}
		void (::hx::Object :: *_hx_apply)(); 
		static inline void apply( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_apply)();
		}
		void (::hx::Object :: *_hx_move)(); 
		static inline void move( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_move)();
		}
		void (::hx::Object :: *_hx_pause)(); 
		static inline void pause( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_pause)();
		}
		void (::hx::Object :: *_hx_resume)(); 
		static inline void resume( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_resume)();
		}
		void (::hx::Object :: *_hx_stop)( ::Dynamic properties,bool complete,bool sendEvent); 
		static inline void stop( ::Dynamic _hx_, ::Dynamic properties,bool complete,bool sendEvent) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_stop)(properties,complete,sendEvent);
		}
		void (::hx::Object :: *_hx__hx_goto)(Float position); 
		static inline void _hx_goto( ::Dynamic _hx_,Float position) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx__hx_goto)(position);
		}
		 ::Dynamic (::hx::Object :: *_hx_getTarget)(); 
		static inline  ::Dynamic getTarget( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getTarget)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getDuration)(); 
		static inline  ::Dynamic getDuration( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getDuration)();
		}
		bool (::hx::Object :: *_hx_getAutoVisible)(); 
		static inline bool getAutoVisible( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getAutoVisible)();
		}
		Float (::hx::Object :: *_hx_getDelay)(); 
		static inline Float getDelay( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getDelay)();
		}
		::Dynamic (::hx::Object :: *_hx_getEase)(); 
		static inline ::Dynamic getEase( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getEase)();
		}
		bool (::hx::Object :: *_hx_getReflect)(); 
		static inline bool getReflect( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getReflect)();
		}
		int (::hx::Object :: *_hx_getRepeat)(); 
		static inline int getRepeat( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getRepeat)();
		}
		bool (::hx::Object :: *_hx_getReverse)(); 
		static inline bool getReverse( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getReverse)();
		}
		bool (::hx::Object :: *_hx_getSmartRotation)(); 
		static inline bool getSmartRotation( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getSmartRotation)();
		}
		bool (::hx::Object :: *_hx_getSnapping)(); 
		static inline bool getSnapping( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getSnapping)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getOnComplete)(); 
		static inline  ::Dynamic getOnComplete( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnComplete)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_getOnCompleteParams)(); 
		static inline ::cpp::VirtualArray getOnCompleteParams( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnCompleteParams)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getOnRepeat)(); 
		static inline  ::Dynamic getOnRepeat( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnRepeat)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_getOnRepeatParams)(); 
		static inline ::cpp::VirtualArray getOnRepeatParams( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnRepeatParams)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getOnUpdate)(); 
		static inline  ::Dynamic getOnUpdate( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnUpdate)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_getOnUpdateParams)(); 
		static inline ::cpp::VirtualArray getOnUpdateParams( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnUpdateParams)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getOnPause)(); 
		static inline  ::Dynamic getOnPause( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnPause)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_getOnPauseParams)(); 
		static inline ::cpp::VirtualArray getOnPauseParams( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnPauseParams)();
		}
		 ::Dynamic (::hx::Object :: *_hx_getOnResume)(); 
		static inline  ::Dynamic getOnResume( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnResume)();
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_getOnResumeParams)(); 
		static inline ::cpp::VirtualArray getOnResumeParams( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::feathers::motion::effects::actuate::IReadableGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x07c53f0a)))->_hx_getOnResumeParams)();
		}
};

} // end namespace feathers
} // end namespace motion
} // end namespace effects
} // end namespace actuate

#endif /* INCLUDED_feathers_motion_effects_actuate_IReadableGenericActuator */ 
