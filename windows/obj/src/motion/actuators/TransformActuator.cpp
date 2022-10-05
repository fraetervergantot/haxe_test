#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_23_new,"motion.actuators.TransformActuator","new",0x47f6a58b,"motion.actuators.TransformActuator.new","motion/actuators/TransformActuator.hx",23,0x0795ec87)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_28_apply,"motion.actuators.TransformActuator","apply",0xba1e3b59,"motion.actuators.TransformActuator.apply","motion/actuators/TransformActuator.hx",28,0x0795ec87)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_48_initialize,"motion.actuators.TransformActuator","initialize",0x51c62785,"motion.actuators.TransformActuator.initialize","motion/actuators/TransformActuator.hx",48,0x0795ec87)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_68_initializeColor,"motion.actuators.TransformActuator","initializeColor",0x768d579e,"motion.actuators.TransformActuator.initializeColor","motion/actuators/TransformActuator.hx",68,0x0795ec87)
static const ::String _hx_array_data_3da48419_5[] = {
	HX_("redMultiplier",32,f4,e9,4e),HX_("greenMultiplier",24,2c,40,6f),HX_("blueMultiplier",bb,32,96,cf),HX_("redOffset",c4,37,9e,53),HX_("greenOffset",b6,0e,d9,b7),HX_("blueOffset",cd,3d,34,bb),
};
HX_LOCAL_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_145_initializeSound,"motion.actuators.TransformActuator","initializeSound",0xacfd730a,"motion.actuators.TransformActuator.initializeSound","motion/actuators/TransformActuator.hx",145,0x0795ec87)
HX_LOCAL_STACK_FRAME(_hx_pos_8aa8282d2dbb60fd_174_update,"motion.actuators.TransformActuator","update",0x1781fdbe,"motion.actuators.TransformActuator.update","motion/actuators/TransformActuator.hx",174,0x0795ec87)
namespace motion{
namespace actuators{

void TransformActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_23_new)
HXDLIN(  23)		super::__construct(target,duration,properties);
            	}

Dynamic TransformActuator_obj::__CreateEmpty() { return new TransformActuator_obj; }

void *TransformActuator_obj::_hx_vtable = 0;

Dynamic TransformActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransformActuator_obj > _hx_result = new TransformActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TransformActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x172f0ab4) {
		if (inClassId<=(int)0x05603dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
		} else {
			return inClassId==(int)0x172f0ab4;
		}
	} else {
		return inClassId==(int)0x4c56c8a5;
	}
}

void TransformActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_28_apply)
HXLINE(  30)		this->initialize();
HXLINE(  32)		if (::hx::IsNotNull( this->endColorTransform )) {
HXLINE(  34)			 ::Dynamic target = this->target;
HXDLIN(  34)			 ::Dynamic value = null();
HXDLIN(  34)			if (::Reflect_obj::hasField(target,HX_("transform",6c,2d,93,45))) {
HXLINE(  34)				value = ::Reflect_obj::field(target,HX_("transform",6c,2d,93,45));
            			}
            			else {
HXLINE(  34)				value = ::Reflect_obj::getProperty(target,HX_("transform",6c,2d,93,45));
            			}
HXDLIN(  34)			 ::openfl::geom::Transform transform = ( ( ::openfl::geom::Transform)(value) );
HXLINE(  35)			{
HXLINE(  35)				 ::Dynamic value1 = this->endColorTransform;
HXDLIN(  35)				if (::Reflect_obj::hasField(transform,HX_("colorTransform",89,d7,3f,ad))) {
HXLINE(  35)					::Reflect_obj::setField(transform,HX_("colorTransform",89,d7,3f,ad),value1);
            				}
            				else {
HXLINE(  35)					::Reflect_obj::setProperty(transform,HX_("colorTransform",89,d7,3f,ad),value1);
            				}
            			}
            		}
HXLINE(  39)		if (::hx::IsNotNull( this->endSoundTransform )) {
HXLINE(  41)			 ::Dynamic target = this->target;
HXDLIN(  41)			 ::Dynamic value = this->endSoundTransform;
HXDLIN(  41)			if (::Reflect_obj::hasField(target,HX_("soundTransform",9d,ee,de,22))) {
HXLINE(  41)				::Reflect_obj::setField(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            			else {
HXLINE(  41)				::Reflect_obj::setProperty(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            		}
            	}


void TransformActuator_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_48_initialize)
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (::Reflect_obj::hasField(this->properties,HX_("colorValue",0e,97,24,56))) {
HXLINE(  50)			_hx_tmp = ::Std_obj::isOfType(this->target,( ( ::Dynamic)(::hx::ClassOf< ::openfl::display::DisplayObject >()) ));
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  52)			this->initializeColor();
            		}
HXLINE(  56)		bool _hx_tmp1;
HXDLIN(  56)		if (!(::Reflect_obj::hasField(this->properties,HX_("soundVolume",09,30,80,12)))) {
HXLINE(  56)			_hx_tmp1 = ::Reflect_obj::hasField(this->properties,HX_("soundPan",ce,27,a3,19));
            		}
            		else {
HXLINE(  56)			_hx_tmp1 = true;
            		}
HXDLIN(  56)		if (_hx_tmp1) {
HXLINE(  58)			this->initializeSound();
            		}
HXLINE(  62)		this->detailsLength = this->propertyDetails->length;
HXLINE(  63)		this->initialized = true;
            	}


void TransformActuator_obj::initializeColor(){
            	HX_GC_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_68_initializeColor)
HXLINE(  70)		this->endColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  72)		int color = ( (int)(this->properties->__Field(HX_("colorValue",0e,97,24,56),::hx::paccDynamic)) );
HXLINE(  73)		Float strength = ( (Float)(this->properties->__Field(HX_("colorStrength",04,9b,51,91),::hx::paccDynamic)) );
HXLINE(  75)		if ((strength < 1)) {
HXLINE(  77)			Float multiplier;
HXLINE(  78)			Float offset;
HXLINE(  80)			if ((strength < ((Float)0.5))) {
HXLINE(  82)				multiplier = ( (Float)(1) );
HXLINE(  83)				offset = (strength * ( (Float)(2) ));
            			}
            			else {
HXLINE(  87)				multiplier = (( (Float)(1) ) - ((strength - ((Float)0.5)) * ( (Float)(2) )));
HXLINE(  88)				offset = ( (Float)(1) );
            			}
HXLINE(  92)			this->endColorTransform->redMultiplier = multiplier;
HXLINE(  93)			this->endColorTransform->greenMultiplier = multiplier;
HXLINE(  94)			this->endColorTransform->blueMultiplier = multiplier;
HXLINE(  96)			this->endColorTransform->redOffset = (offset * ( (Float)(((color >> 16) & 255)) ));
HXLINE(  97)			this->endColorTransform->greenOffset = (offset * ( (Float)(((color >> 8) & 255)) ));
HXLINE(  98)			this->endColorTransform->blueOffset = (offset * ( (Float)((color & 255)) ));
            		}
            		else {
HXLINE( 104)			this->endColorTransform->redMultiplier = ( (Float)(0) );
HXLINE( 105)			this->endColorTransform->greenMultiplier = ( (Float)(0) );
HXLINE( 106)			this->endColorTransform->blueMultiplier = ( (Float)(0) );
HXLINE( 108)			this->endColorTransform->redOffset = ( (Float)(((color >> 16) & 255)) );
HXLINE( 109)			this->endColorTransform->greenOffset = ( (Float)(((color >> 8) & 255)) );
HXLINE( 110)			this->endColorTransform->blueOffset = ( (Float)((color & 255)) );
            		}
HXLINE( 114)		::Array< ::String > propertyNames = ::Array_obj< ::String >::fromData( _hx_array_data_3da48419_5,6);
HXLINE( 116)		if (::Reflect_obj::hasField(this->properties,HX_("colorAlpha",fb,be,02,46))) {
HXLINE( 118)			this->endColorTransform->alphaMultiplier = ( (Float)(this->properties->__Field(HX_("colorAlpha",fb,be,02,46),::hx::paccDynamic)) );
HXLINE( 119)			propertyNames->push(HX_("alphaMultiplier",7f,b4,82,9a));
            		}
            		else {
HXLINE( 123)			 ::Dynamic target = this->target;
HXDLIN( 123)			 ::Dynamic value = null();
HXDLIN( 123)			if (::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21))) {
HXLINE( 123)				value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            			}
            			else {
HXLINE( 123)				value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            			}
HXDLIN( 123)			this->endColorTransform->alphaMultiplier = ( (Float)(value) );
            		}
HXLINE( 127)		 ::Dynamic target = this->target;
HXDLIN( 127)		 ::Dynamic value = null();
HXDLIN( 127)		if (::Reflect_obj::hasField(target,HX_("transform",6c,2d,93,45))) {
HXLINE( 127)			value = ::Reflect_obj::field(target,HX_("transform",6c,2d,93,45));
            		}
            		else {
HXLINE( 127)			value = ::Reflect_obj::getProperty(target,HX_("transform",6c,2d,93,45));
            		}
HXDLIN( 127)		 ::openfl::geom::Transform transform = ( ( ::openfl::geom::Transform)(value) );
HXLINE( 128)		 ::Dynamic value1 = null();
HXDLIN( 128)		if (::Reflect_obj::hasField(transform,HX_("colorTransform",89,d7,3f,ad))) {
HXLINE( 128)			value1 = ::Reflect_obj::field(transform,HX_("colorTransform",89,d7,3f,ad));
            		}
            		else {
HXLINE( 128)			value1 = ::Reflect_obj::getProperty(transform,HX_("colorTransform",89,d7,3f,ad));
            		}
HXDLIN( 128)		 ::openfl::geom::ColorTransform begin = ( ( ::openfl::geom::ColorTransform)(value1) );
HXLINE( 129)		this->tweenColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 131)		 ::motion::actuators::PropertyDetails details;
HXLINE( 132)		Float start;
HXLINE( 134)		{
HXLINE( 134)			int _g = 0;
HXDLIN( 134)			while((_g < propertyNames->length)){
HXLINE( 134)				::String propertyName = propertyNames->__get(_g);
HXDLIN( 134)				_g = (_g + 1);
HXLINE( 136)				 ::Dynamic value = null();
HXDLIN( 136)				if (::Reflect_obj::hasField(begin,propertyName)) {
HXLINE( 136)					value = ::Reflect_obj::field(begin,propertyName);
            				}
            				else {
HXLINE( 136)					value = ::Reflect_obj::getProperty(begin,propertyName);
            				}
HXDLIN( 136)				start = ( (Float)(value) );
HXLINE( 137)				 ::openfl::geom::ColorTransform details1 = this->tweenColorTransform;
HXDLIN( 137)				 ::openfl::geom::ColorTransform target = this->endColorTransform;
HXDLIN( 137)				 ::Dynamic value1 = null();
HXDLIN( 137)				if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE( 137)					value1 = ::Reflect_obj::field(target,propertyName);
            				}
            				else {
HXLINE( 137)					value1 = ::Reflect_obj::getProperty(target,propertyName);
            				}
HXDLIN( 137)				details =  ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,details1,propertyName,start,(( (Float)(value1) ) - start),null());
HXLINE( 138)				this->propertyDetails->push(details);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeColor,(void))

void TransformActuator_obj::initializeSound(){
            	HX_GC_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_145_initializeSound)
HXLINE( 147)		 ::Dynamic target = this->target;
HXDLIN( 147)		 ::Dynamic value = null();
HXDLIN( 147)		if (::Reflect_obj::hasField(target,HX_("soundTransform",9d,ee,de,22))) {
HXLINE( 147)			value = ::Reflect_obj::field(target,HX_("soundTransform",9d,ee,de,22));
            		}
            		else {
HXLINE( 147)			value = ::Reflect_obj::getProperty(target,HX_("soundTransform",9d,ee,de,22));
            		}
HXDLIN( 147)		if (::hx::IsNull( value )) {
HXLINE( 149)			 ::Dynamic target = this->target;
HXDLIN( 149)			 ::Dynamic value =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 149)			if (::Reflect_obj::hasField(target,HX_("soundTransform",9d,ee,de,22))) {
HXLINE( 149)				::Reflect_obj::setField(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            			else {
HXLINE( 149)				::Reflect_obj::setProperty(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            		}
HXLINE( 153)		 ::Dynamic target1 = this->target;
HXDLIN( 153)		 ::Dynamic value1 = null();
HXDLIN( 153)		if (::Reflect_obj::hasField(target1,HX_("soundTransform",9d,ee,de,22))) {
HXLINE( 153)			value1 = ::Reflect_obj::field(target1,HX_("soundTransform",9d,ee,de,22));
            		}
            		else {
HXLINE( 153)			value1 = ::Reflect_obj::getProperty(target1,HX_("soundTransform",9d,ee,de,22));
            		}
HXDLIN( 153)		 ::openfl::media::SoundTransform start = ( ( ::openfl::media::SoundTransform)(value1) );
HXLINE( 154)		 ::Dynamic target2 = this->target;
HXDLIN( 154)		 ::Dynamic value2 = null();
HXDLIN( 154)		if (::Reflect_obj::hasField(target2,HX_("soundTransform",9d,ee,de,22))) {
HXLINE( 154)			value2 = ::Reflect_obj::field(target2,HX_("soundTransform",9d,ee,de,22));
            		}
            		else {
HXLINE( 154)			value2 = ::Reflect_obj::getProperty(target2,HX_("soundTransform",9d,ee,de,22));
            		}
HXDLIN( 154)		this->endSoundTransform = ( ( ::openfl::media::SoundTransform)(value2) );
HXLINE( 155)		this->tweenSoundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 157)		if (::Reflect_obj::hasField(this->properties,HX_("soundVolume",09,30,80,12))) {
HXLINE( 159)			this->endSoundTransform->volume = ( (Float)(this->properties->__Field(HX_("soundVolume",09,30,80,12),::hx::paccDynamic)) );
HXLINE( 160)			::Array< ::Dynamic> _hx_tmp = this->propertyDetails;
HXDLIN( 160)			_hx_tmp->push( ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,this->tweenSoundTransform,HX_("volume",da,29,53,5f),start->volume,(this->endSoundTransform->volume - start->volume),null()));
            		}
HXLINE( 164)		if (::Reflect_obj::hasField(this->properties,HX_("soundPan",ce,27,a3,19))) {
HXLINE( 166)			this->endSoundTransform->pan = ( (Float)(this->properties->__Field(HX_("soundPan",ce,27,a3,19),::hx::paccDynamic)) );
HXLINE( 167)			::Array< ::Dynamic> _hx_tmp = this->propertyDetails;
HXDLIN( 167)			_hx_tmp->push( ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,this->tweenSoundTransform,HX_("pan",5d,51,55,00),start->pan,(this->endSoundTransform->pan - start->pan),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeSound,(void))

void TransformActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_8aa8282d2dbb60fd_174_update)
HXLINE( 176)		this->super::update(currentTime);
HXLINE( 178)		if (::hx::IsNotNull( this->endColorTransform )) {
HXLINE( 180)			 ::Dynamic target = this->target;
HXDLIN( 180)			 ::Dynamic value = null();
HXDLIN( 180)			if (::Reflect_obj::hasField(target,HX_("transform",6c,2d,93,45))) {
HXLINE( 180)				value = ::Reflect_obj::field(target,HX_("transform",6c,2d,93,45));
            			}
            			else {
HXLINE( 180)				value = ::Reflect_obj::getProperty(target,HX_("transform",6c,2d,93,45));
            			}
HXDLIN( 180)			 ::openfl::geom::Transform transform = ( ( ::openfl::geom::Transform)(value) );
HXLINE( 181)			{
HXLINE( 181)				 ::Dynamic value1 = this->tweenColorTransform;
HXDLIN( 181)				if (::Reflect_obj::hasField(transform,HX_("colorTransform",89,d7,3f,ad))) {
HXLINE( 181)					::Reflect_obj::setField(transform,HX_("colorTransform",89,d7,3f,ad),value1);
            				}
            				else {
HXLINE( 181)					::Reflect_obj::setProperty(transform,HX_("colorTransform",89,d7,3f,ad),value1);
            				}
            			}
            		}
HXLINE( 185)		if (::hx::IsNotNull( this->endSoundTransform )) {
HXLINE( 187)			 ::Dynamic target = this->target;
HXDLIN( 187)			 ::Dynamic value = this->tweenSoundTransform;
HXDLIN( 187)			if (::Reflect_obj::hasField(target,HX_("soundTransform",9d,ee,de,22))) {
HXLINE( 187)				::Reflect_obj::setField(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            			else {
HXLINE( 187)				::Reflect_obj::setProperty(target,HX_("soundTransform",9d,ee,de,22),value);
            			}
            		}
            	}



::hx::ObjectPtr< TransformActuator_obj > TransformActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< TransformActuator_obj > __this = new TransformActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< TransformActuator_obj > TransformActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,Float duration, ::Dynamic properties) {
	TransformActuator_obj *__this = (TransformActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransformActuator_obj), true, "motion.actuators.TransformActuator"));
	*(void **)__this = TransformActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

TransformActuator_obj::TransformActuator_obj()
{
}

void TransformActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformActuator);
	HX_MARK_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_MARK_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_MARK_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_MARK_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	 ::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransformActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_VISIT_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_VISIT_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_VISIT_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	 ::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransformActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeColor") ) { return ::hx::Val( initializeColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"initializeSound") ) { return ::hx::Val( initializeSound_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { return ::hx::Val( endColorTransform ); }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { return ::hx::Val( endSoundTransform ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { return ::hx::Val( tweenColorTransform ); }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { return ::hx::Val( tweenSoundTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransformActuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { endColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { endSoundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { tweenColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { tweenSoundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("endColorTransform",c4,58,c3,ca));
	outFields->push(HX_("endSoundTransform",d8,6f,62,40));
	outFields->push(HX_("tweenColorTransform",54,5b,47,72));
	outFields->push(HX_("tweenSoundTransform",68,72,e6,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransformActuator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(TransformActuator_obj,endColorTransform),HX_("endColorTransform",c4,58,c3,ca)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(TransformActuator_obj,endSoundTransform),HX_("endSoundTransform",d8,6f,62,40)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(TransformActuator_obj,tweenColorTransform),HX_("tweenColorTransform",54,5b,47,72)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(TransformActuator_obj,tweenSoundTransform),HX_("tweenSoundTransform",68,72,e6,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransformActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String TransformActuator_obj_sMemberFields[] = {
	HX_("endColorTransform",c4,58,c3,ca),
	HX_("endSoundTransform",d8,6f,62,40),
	HX_("tweenColorTransform",54,5b,47,72),
	HX_("tweenSoundTransform",68,72,e6,e7),
	HX_("apply",6e,85,3b,24),
	HX_("initialize",50,31,bb,ec),
	HX_("initializeColor",f3,ed,29,64),
	HX_("initializeSound",5f,09,9a,9a),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class TransformActuator_obj::__mClass;

void TransformActuator_obj::__register()
{
	TransformActuator_obj _hx_dummy;
	TransformActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.TransformActuator",19,84,a4,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransformActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransformActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransformActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransformActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
