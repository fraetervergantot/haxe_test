#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_data_ArrayCollection
#include <feathers/data/ArrayCollection.h>
#endif
#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_events_FlatCollectionEvent
#include <feathers/events/FlatCollectionEvent.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_66_new,"feathers.data.ArrayCollection","new",0x694c2ca3,"feathers.data.ArrayCollection.new","feathers/data/ArrayCollection.hx",66,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_98_get_array,"feathers.data.ArrayCollection","get_array",0x74fc3a73,"feathers.data.ArrayCollection.get_array","feathers/data/ArrayCollection.hx",98,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_101_set_array,"feathers.data.ArrayCollection","set_array",0x584d267f,"feathers.data.ArrayCollection.set_array","feathers/data/ArrayCollection.hx",101,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_119_get_length,"feathers.data.ArrayCollection","get_length",0xcece06cc,"feathers.data.ArrayCollection.get_length","feathers/data/ArrayCollection.hx",119,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_139_get_filterFunction,"feathers.data.ArrayCollection","get_filterFunction",0x8377c6d6,"feathers.data.ArrayCollection.get_filterFunction","feathers/data/ArrayCollection.hx",139,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_142_set_filterFunction,"feathers.data.ArrayCollection","set_filterFunction",0x6026f94a,"feathers.data.ArrayCollection.set_filterFunction","feathers/data/ArrayCollection.hx",142,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_161_get_sortCompareFunction,"feathers.data.ArrayCollection","get_sortCompareFunction",0xa104dd79,"feathers.data.ArrayCollection.get_sortCompareFunction","feathers/data/ArrayCollection.hx",161,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_164_set_sortCompareFunction,"feathers.data.ArrayCollection","set_sortCompareFunction",0xa3664685,"feathers.data.ArrayCollection.set_sortCompareFunction","feathers/data/ArrayCollection.hx",164,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_178_get,"feathers.data.ArrayCollection","get",0x6946dcd9,"feathers.data.ArrayCollection.get","feathers/data/ArrayCollection.hx",178,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_194_set,"feathers.data.ArrayCollection","set",0x694ff7e5,"feathers.data.ArrayCollection.set","feathers/data/ArrayCollection.hx",194,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_261_add,"feathers.data.ArrayCollection","add",0x69424e64,"feathers.data.ArrayCollection.add","feathers/data/ArrayCollection.hx",261,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_268_addAt,"feathers.data.ArrayCollection","addAt",0xf93de877,"feathers.data.ArrayCollection.addAt","feathers/data/ArrayCollection.hx",268,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_275_addAll,"feathers.data.ArrayCollection","addAll",0x1ced791d,"feathers.data.ArrayCollection.addAll","feathers/data/ArrayCollection.hx",275,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_283_addAllAt,"feathers.data.ArrayCollection","addAllAt",0x4e13f370,"feathers.data.ArrayCollection.addAllAt","feathers/data/ArrayCollection.hx",283,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_296_reset,"feathers.data.ArrayCollection","reset",0xc3c27cd2,"feathers.data.ArrayCollection.reset","feathers/data/ArrayCollection.hx",296,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_324_remove,"feathers.data.ArrayCollection","remove",0x827b0be1,"feathers.data.ArrayCollection.remove","feathers/data/ArrayCollection.hx",324,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_344_removeAt,"feathers.data.ArrayCollection","removeAt",0x603ebf34,"feathers.data.ArrayCollection.removeAt","feathers/data/ArrayCollection.hx",344,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_368_removeAll,"feathers.data.ArrayCollection","removeAll",0xd6a887c0,"feathers.data.ArrayCollection.removeAll","feathers/data/ArrayCollection.hx",368,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_395_indexOf,"feathers.data.ArrayCollection","indexOf",0x96ee828c,"feathers.data.ArrayCollection.indexOf","feathers/data/ArrayCollection.hx",395,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_409_contains,"feathers.data.ArrayCollection","contains",0xdf9eaafc,"feathers.data.ArrayCollection.contains","feathers/data/ArrayCollection.hx",409,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_415_iterator,"feathers.data.ArrayCollection","iterator",0x46bd9acb,"feathers.data.ArrayCollection.iterator","feathers/data/ArrayCollection.hx",415,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_428_updateAt,"feathers.data.ArrayCollection","updateAt",0x2b1d6439,"feathers.data.ArrayCollection.updateAt","feathers/data/ArrayCollection.hx",428,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_439_updateAll,"feathers.data.ArrayCollection","updateAll",0x8e9a471b,"feathers.data.ArrayCollection.updateAll","feathers/data/ArrayCollection.hx",439,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_447_refresh,"feathers.data.ArrayCollection","refresh",0xa350139e,"feathers.data.ArrayCollection.refresh","feathers/data/ArrayCollection.hx",447,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_467_find,"feathers.data.ArrayCollection","find",0xb4142e96,"feathers.data.ArrayCollection.find","feathers/data/ArrayCollection.hx",467,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_484_findIndex,"feathers.data.ArrayCollection","findIndex",0xb8cf3c9c,"feathers.data.ArrayCollection.findIndex","feathers/data/ArrayCollection.hx",484,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_501_some,"feathers.data.ArrayCollection","some",0xbcb08151,"feathers.data.ArrayCollection.some","feathers/data/ArrayCollection.hx",501,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_518_every,"feathers.data.ArrayCollection","every",0x52befe9e,"feathers.data.ArrayCollection.every","feathers/data/ArrayCollection.hx",518,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_536_forEach,"feathers.data.ArrayCollection","forEach",0x7aed636d,"feathers.data.ArrayCollection.forEach","feathers/data/ArrayCollection.hx",536,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_548_map,"feathers.data.ArrayCollection","map",0x694b66df,"feathers.data.ArrayCollection.map","feathers/data/ArrayCollection.hx",548,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_559_readExternal,"feathers.data.ArrayCollection","readExternal",0xed52131e,"feathers.data.ArrayCollection.readExternal","feathers/data/ArrayCollection.hx",559,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_564_writeExternal,"feathers.data.ArrayCollection","writeExternal",0x9ede504d,"feathers.data.ArrayCollection.writeExternal","feathers/data/ArrayCollection.hx",564,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_567_refreshFilterAndSort,"feathers.data.ArrayCollection","refreshFilterAndSort",0x1fc0c67f,"feathers.data.ArrayCollection.refreshFilterAndSort","feathers/data/ArrayCollection.hx",567,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_616_toArray,"feathers.data.ArrayCollection","toArray",0xa842f3e1,"feathers.data.ArrayCollection.toArray","feathers/data/ArrayCollection.hx",616,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_623_getSortedInsertionIndex,"feathers.data.ArrayCollection","getSortedInsertionIndex",0xe6ab4ff9,"feathers.data.ArrayCollection.getSortedInsertionIndex","feathers/data/ArrayCollection.hx",623,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_637_addAtInternal,"feathers.data.ArrayCollection","addAtInternal",0xd5c5dad4,"feathers.data.ArrayCollection.addAtInternal","feathers/data/ArrayCollection.hx",637,0x494b6c8d)
HX_LOCAL_STACK_FRAME(_hx_pos_5e7eb2ae850ff3f5_66_boot,"feathers.data.ArrayCollection","boot",0xb173e28f,"feathers.data.ArrayCollection.boot","feathers/data/ArrayCollection.hx",66,0x494b6c8d)
namespace feathers{
namespace data{

void ArrayCollection_obj::__construct(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_66_new)
HXLINE( 153)		this->_sortCompareFunction = null();
HXLINE( 131)		this->_filterFunction = null();
HXLINE( 129)		this->_pendingRefresh = false;
HXLINE(  82)		this->_array = null();
HXLINE(  80)		this->_filterAndSortData = null();
HXLINE(  73)		super::__construct(null());
HXLINE(  74)		if (::hx::IsNull( array )) {
HXLINE(  75)			array = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(  77)		this->set_array(array);
            	}

Dynamic ArrayCollection_obj::__CreateEmpty() { return new ArrayCollection_obj; }

void *ArrayCollection_obj::_hx_vtable = 0;

Dynamic ArrayCollection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayCollection_obj > _hx_result = new ArrayCollection_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayCollection_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0780f9f1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0780f9f1;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

static ::openfl::utils::IExternalizable_obj _hx_feathers_data_ArrayCollection__hx_openfl_utils_IExternalizable= {
	( void (::hx::Object::*)(::Dynamic))&::feathers::data::ArrayCollection_obj::readExternal,
	( void (::hx::Object::*)(::Dynamic))&::feathers::data::ArrayCollection_obj::writeExternal,
};

static ::openfl::events::IEventDispatcher_obj _hx_feathers_data_ArrayCollection__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::data::ArrayCollection_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::data::ArrayCollection_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::data::ArrayCollection_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::data::ArrayCollection_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::data::ArrayCollection_obj::willTrigger,
};

static ::feathers::data::IFlatCollection_obj _hx_feathers_data_ArrayCollection__hx_feathers_data_IFlatCollection= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::data::ArrayCollection_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::data::ArrayCollection_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::data::ArrayCollection_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::data::ArrayCollection_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::data::ArrayCollection_obj::willTrigger,
	( int (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::get_length,
	(  ::Dynamic (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::get_filterFunction,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::set_filterFunction,
	(  ::Dynamic (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::get_sortCompareFunction,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::set_sortCompareFunction,
	(  ::Dynamic (::hx::Object::*)(int))&::feathers::data::ArrayCollection_obj::get,
	( void (::hx::Object::*)(int, ::Dynamic))&::feathers::data::ArrayCollection_obj::set,
	( void (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::add,
	( void (::hx::Object::*)( ::Dynamic,int))&::feathers::data::ArrayCollection_obj::addAt,
	( void (::hx::Object::*)(::Dynamic))&::feathers::data::ArrayCollection_obj::addAll,
	( void (::hx::Object::*)(::Dynamic,int))&::feathers::data::ArrayCollection_obj::addAllAt,
	( void (::hx::Object::*)(::Dynamic))&::feathers::data::ArrayCollection_obj::reset,
	( void (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::remove,
	(  ::Dynamic (::hx::Object::*)(int))&::feathers::data::ArrayCollection_obj::removeAt,
	( void (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::removeAll,
	( int (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::indexOf,
	( bool (::hx::Object::*)( ::Dynamic))&::feathers::data::ArrayCollection_obj::contains,
	( void (::hx::Object::*)(int))&::feathers::data::ArrayCollection_obj::updateAt,
	( void (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::updateAll,
	(  ::Dynamic (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::iterator,
	( void (::hx::Object::*)())&::feathers::data::ArrayCollection_obj::refresh,
};

void *ArrayCollection_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x58114efe: return &_hx_feathers_data_ArrayCollection__hx_openfl_utils_IExternalizable;
		case (int)0x87530281: return &_hx_feathers_data_ArrayCollection__hx_openfl_events_IEventDispatcher;
		case (int)0xde3c5fc6: return &_hx_feathers_data_ArrayCollection__hx_feathers_data_IFlatCollection;
	}
	return super::_hx_getInterface(inHash);
}

::cpp::VirtualArray ArrayCollection_obj::get_array(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_98_get_array)
HXDLIN(  98)		return this->_array;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,get_array,return )

::cpp::VirtualArray ArrayCollection_obj::set_array(::cpp::VirtualArray value){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_101_set_array)
HXLINE( 102)		if (::hx::IsPointerEq( this->_array,value )) {
HXLINE( 103)			return this->_array;
            		}
HXLINE( 105)		if (::hx::IsNull( value )) {
HXLINE( 106)			value = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 108)		this->_array = value;
HXLINE( 109)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("reset",cf,49,c8,e6),-1,null(),null(),null(),null());
HXLINE( 110)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 111)		return this->_array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,set_array,return )

int ArrayCollection_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_119_get_length)
HXLINE( 120)		if (this->_pendingRefresh) {
HXLINE( 121)			this->refreshFilterAndSort();
            		}
HXLINE( 123)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 124)			return this->_filterAndSortData->get_length();
            		}
HXLINE( 126)		return this->_array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,get_length,return )

 ::Dynamic ArrayCollection_obj::get_filterFunction(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_139_get_filterFunction)
HXDLIN( 139)		return this->_filterFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,get_filterFunction,return )

 ::Dynamic ArrayCollection_obj::set_filterFunction( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_142_set_filterFunction)
HXLINE( 143)		if (::hx::IsEq( this->_filterFunction,value )) {
HXLINE( 144)			return this->_filterFunction;
            		}
HXLINE( 146)		this->_filterFunction = value;
HXLINE( 147)		this->_pendingRefresh = true;
HXLINE( 148)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("filterChange",48,bf,ca,c3),-1,null(),null(),null(),null());
HXLINE( 149)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 150)		return this->_filterFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,set_filterFunction,return )

 ::Dynamic ArrayCollection_obj::get_sortCompareFunction(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_161_get_sortCompareFunction)
HXDLIN( 161)		return this->_sortCompareFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,get_sortCompareFunction,return )

 ::Dynamic ArrayCollection_obj::set_sortCompareFunction( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_164_set_sortCompareFunction)
HXLINE( 165)		if (::hx::IsEq( this->_sortCompareFunction,value )) {
HXLINE( 166)			return this->_sortCompareFunction;
            		}
HXLINE( 168)		this->_sortCompareFunction = value;
HXLINE( 169)		this->_pendingRefresh = true;
HXLINE( 170)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("sortChange",6e,07,58,14),-1,null(),null(),null(),null());
HXLINE( 171)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 172)		return this->_sortCompareFunction;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,set_sortCompareFunction,return )

 ::Dynamic ArrayCollection_obj::get(int index){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_178_get)
HXLINE( 179)		if (this->_pendingRefresh) {
HXLINE( 180)			this->refreshFilterAndSort();
            		}
HXLINE( 182)		bool _hx_tmp;
HXDLIN( 182)		if ((index >= 0)) {
HXLINE( 182)			_hx_tmp = (index >= this->get_length());
            		}
            		else {
HXLINE( 182)			_hx_tmp = true;
            		}
HXDLIN( 182)		if (_hx_tmp) {
HXLINE( 183)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to get item at index ",5a,e2,93,4d) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + (this->get_length() - 1)) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 185)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 186)			return this->_filterAndSortData->__get(index);
            		}
HXLINE( 188)		return this->_array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,get,return )

void ArrayCollection_obj::set(int index, ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_194_set)
HXLINE( 195)		if (this->_pendingRefresh) {
HXLINE( 196)			this->refreshFilterAndSort();
            		}
HXLINE( 198)		bool _hx_tmp;
HXDLIN( 198)		if ((index >= 0)) {
HXLINE( 198)			_hx_tmp = (index > this->get_length());
            		}
            		else {
HXLINE( 198)			_hx_tmp = true;
            		}
HXDLIN( 198)		if (_hx_tmp) {
HXLINE( 199)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to set item at index ",ce,14,43,2a) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + this->get_length()) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 201)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 203)			int unfilteredIndex = this->_array->get_length();
HXLINE( 204)			 ::Dynamic oldItem = null();
HXLINE( 205)			if ((index < this->_filterAndSortData->get_length())) {
HXLINE( 206)				oldItem = this->_filterAndSortData->__get(index);
HXLINE( 209)				unfilteredIndex = this->_array->indexOf(oldItem,null());
            			}
HXLINE( 211)			this->_array->set(unfilteredIndex,item);
HXLINE( 212)			if (::hx::IsNotNull( this->_filterFunction )) {
HXLINE( 213)				bool includeItem = ( (bool)(this->_filterFunction(item)) );
HXLINE( 214)				if ((index < this->_filterAndSortData->get_length())) {
HXLINE( 215)					if (includeItem) {
HXLINE( 217)						this->_filterAndSortData->set(index,item);
HXLINE( 218)						::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("replaceItem",67,63,5b,5a),index,item,oldItem,null(),null());
HXLINE( 219)						::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            					}
            					else {
HXLINE( 223)						this->_filterAndSortData->splice(index,1);
HXLINE( 224)						::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("removeItem",77,ff,de,c2),index,null(),oldItem,null(),null());
HXLINE( 225)						::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            					}
            				}
            				else {
HXLINE( 227)					if (includeItem) {
HXLINE( 228)						this->_filterAndSortData->set(this->_filterAndSortData->get_length(),item);
HXLINE( 229)						::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("addItem",d4,07,fd,81),index,item,null(),null(),null());
HXLINE( 230)						::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            					}
            				}
HXLINE( 232)				return;
            			}
            			else {
HXLINE( 233)				if (::hx::IsNotNull( this->_sortCompareFunction )) {
HXLINE( 235)					this->_filterAndSortData->remove(oldItem);
HXLINE( 237)					int sortedIndex = this->getSortedInsertionIndex(item);
HXLINE( 238)					this->_filterAndSortData->set(sortedIndex,item);
HXLINE( 239)					::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("replaceItem",67,63,5b,5a),index,item,oldItem,null(),null());
HXLINE( 240)					::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 241)					return;
            				}
            			}
            		}
HXLINE( 246)		if ((index < this->_array->get_length())) {
HXLINE( 247)			 ::Dynamic oldItem = this->_array->__get(index);
HXLINE( 248)			this->_array->set(index,item);
HXLINE( 249)			::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("replaceItem",67,63,5b,5a),index,item,oldItem,null(),null());
            		}
            		else {
HXLINE( 251)			this->_array->set(index,item);
HXLINE( 252)			::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("addItem",d4,07,fd,81),index,item,null(),null(),null());
            		}
HXLINE( 254)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayCollection_obj,set,(void))

void ArrayCollection_obj::add( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_261_add)
HXDLIN( 261)		this->addAtInternal(item,this->get_length(),true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,add,(void))

void ArrayCollection_obj::addAt( ::Dynamic item,int index){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_268_addAt)
HXDLIN( 268)		this->addAtInternal(item,index,true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayCollection_obj,addAt,(void))

void ArrayCollection_obj::addAll(::Dynamic collection){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_275_addAll)
HXDLIN( 275)		 ::Dynamic item = ::feathers::data::IFlatCollection_obj::iterator(collection);
HXDLIN( 275)		while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 275)			 ::Dynamic item1 = item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 276)			this->add(item1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,addAll,(void))

void ArrayCollection_obj::addAllAt(::Dynamic collection,int index){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_283_addAllAt)
HXLINE( 284)		bool _hx_tmp;
HXDLIN( 284)		if ((index >= 0)) {
HXLINE( 284)			_hx_tmp = (index > this->get_length());
            		}
            		else {
HXLINE( 284)			_hx_tmp = true;
            		}
HXDLIN( 284)		if (_hx_tmp) {
HXLINE( 285)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to add collection at index ",fa,68,c9,16) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + this->get_length()) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 287)		{
HXLINE( 287)			 ::Dynamic item = ::feathers::data::IFlatCollection_obj::iterator(collection);
HXDLIN( 287)			while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 287)				 ::Dynamic item1 = item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 288)				this->addAt(item1,index);
HXLINE( 289)				index = (index + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayCollection_obj,addAllAt,(void))

void ArrayCollection_obj::reset(::Dynamic collection){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_296_reset)
HXLINE( 297)		if (this->_pendingRefresh) {
HXLINE( 298)			this->refreshFilterAndSort();
            		}
HXLINE( 300)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 304)			this->_filterAndSortData->resize(0);
            		}
HXLINE( 310)		this->_array->resize(0);
HXLINE( 312)		if (::hx::IsNotNull( collection )) {
HXLINE( 313)			 ::Dynamic item = ::feathers::data::IFlatCollection_obj::iterator(collection);
HXDLIN( 313)			while(( (bool)(item->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 313)				 ::Dynamic item1 = item->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 314)				this->addAtInternal(item1,this->get_length(),false);
            			}
            		}
HXLINE( 317)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("reset",cf,49,c8,e6),-1,null(),null(),null(),null());
HXLINE( 318)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,reset,(void))

void ArrayCollection_obj::remove( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_324_remove)
HXLINE( 325)		if (this->_pendingRefresh) {
HXLINE( 326)			this->refreshFilterAndSort();
            		}
HXLINE( 328)		int index = this->indexOf(item);
HXLINE( 329)		if ((index == -1)) {
HXLINE( 331)			return;
            		}
HXLINE( 333)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 334)			this->_filterAndSortData->remove(item);
            		}
HXLINE( 336)		this->_array->remove(item);
HXLINE( 337)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("removeItem",77,ff,de,c2),index,null(),item,null(),null());
HXLINE( 338)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,remove,(void))

 ::Dynamic ArrayCollection_obj::removeAt(int index){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_344_removeAt)
HXLINE( 345)		if (this->_pendingRefresh) {
HXLINE( 346)			this->refreshFilterAndSort();
            		}
HXLINE( 348)		bool _hx_tmp;
HXDLIN( 348)		if ((index >= 0)) {
HXLINE( 348)			_hx_tmp = (index >= this->get_length());
            		}
            		else {
HXLINE( 348)			_hx_tmp = true;
            		}
HXDLIN( 348)		if (_hx_tmp) {
HXLINE( 349)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to remove item at index ",a8,09,90,5e) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + (this->get_length() - 1)) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 351)		 ::Dynamic item = null();
HXLINE( 352)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 353)			item = this->_filterAndSortData->__get(index);
HXLINE( 354)			this->_filterAndSortData->remove(item);
HXLINE( 355)			this->_array->remove(item);
            		}
            		else {
HXLINE( 357)			item = this->_array->__get(index);
HXLINE( 358)			this->_array->remove(item);
            		}
HXLINE( 360)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("removeItem",77,ff,de,c2),index,null(),item,null(),null());
HXLINE( 361)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 362)		return item;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,removeAt,return )

void ArrayCollection_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_368_removeAll)
HXLINE( 369)		if (this->_pendingRefresh) {
HXLINE( 370)			this->refreshFilterAndSort();
            		}
HXLINE( 372)		if ((this->_array->get_length() == 0)) {
HXLINE( 374)			return;
            		}
HXLINE( 376)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 380)			this->_filterAndSortData->resize(0);
            		}
HXLINE( 386)		this->_array->resize(0);
HXLINE( 388)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("removeAll",3d,17,e5,ca),-1,null(),null(),null(),null());
HXLINE( 389)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,removeAll,(void))

int ArrayCollection_obj::indexOf( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_395_indexOf)
HXLINE( 396)		if (this->_pendingRefresh) {
HXLINE( 397)			this->refreshFilterAndSort();
            		}
HXLINE( 399)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 400)			return this->_filterAndSortData->indexOf(item,null());
            		}
HXLINE( 402)		return this->_array->indexOf(item,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,indexOf,return )

bool ArrayCollection_obj::contains( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_409_contains)
HXDLIN( 409)		return (this->indexOf(item) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,contains,return )

 ::Dynamic ArrayCollection_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_415_iterator)
HXLINE( 416)		if (this->_pendingRefresh) {
HXLINE( 417)			this->refreshFilterAndSort();
            		}
HXLINE( 419)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 420)			return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->_filterAndSortData);
            		}
HXLINE( 422)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,this->_array);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,iterator,return )

void ArrayCollection_obj::updateAt(int index){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_428_updateAt)
HXLINE( 429)		bool _hx_tmp;
HXDLIN( 429)		if ((index >= 0)) {
HXLINE( 429)			_hx_tmp = (index >= this->get_length());
            		}
            		else {
HXLINE( 429)			_hx_tmp = true;
            		}
HXDLIN( 429)		if (_hx_tmp) {
HXLINE( 430)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to update item at index ",83,e5,10,25) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + (this->get_length() - 1)) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 432)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("updateItem",bc,af,74,fe),index,null(),null(),null(),null());
HXLINE( 433)		this->refresh();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,updateAt,(void))

void ArrayCollection_obj::updateAll(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_439_updateAll)
HXLINE( 440)		::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("updateAll",98,d6,d6,82),-1,null(),null(),null(),null());
HXLINE( 441)		this->refresh();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,updateAll,(void))

void ArrayCollection_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_447_refresh)
HXLINE( 448)		bool _hx_tmp;
HXDLIN( 448)		if (::hx::IsNull( this->_filterFunction )) {
HXLINE( 448)			_hx_tmp = ::hx::IsNull( this->_sortCompareFunction );
            		}
            		else {
HXLINE( 448)			_hx_tmp = false;
            		}
HXDLIN( 448)		if (_hx_tmp) {
HXLINE( 449)			return;
            		}
HXLINE( 451)		this->_pendingRefresh = true;
HXLINE( 452)		if (::hx::IsNotNull( this->_filterFunction )) {
HXLINE( 453)			::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("filterChange",48,bf,ca,c3),-1,null(),null(),null(),null());
            		}
HXLINE( 455)		if (::hx::IsNotNull( this->_sortCompareFunction )) {
HXLINE( 456)			::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("sortChange",6e,07,58,14),-1,null(),null(),null(),null());
            		}
HXLINE( 458)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,refresh,(void))

 ::Dynamic ArrayCollection_obj::find( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_467_find)
HXLINE( 468)		{
HXLINE( 468)			int _g = 0;
HXDLIN( 468)			int _g1 = this->get_length();
HXDLIN( 468)			while((_g < _g1)){
HXLINE( 468)				_g = (_g + 1);
HXDLIN( 468)				int i = (_g - 1);
HXLINE( 469)				 ::Dynamic item = this->get(i);
HXLINE( 470)				bool result = ( (bool)(callback(item,i,::hx::ObjectPtr<OBJ_>(this))) );
HXLINE( 471)				if (result) {
HXLINE( 472)					return item;
            				}
            			}
            		}
HXLINE( 475)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,find,return )

int ArrayCollection_obj::findIndex( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_484_findIndex)
HXLINE( 485)		{
HXLINE( 485)			int _g = 0;
HXDLIN( 485)			int _g1 = this->get_length();
HXDLIN( 485)			while((_g < _g1)){
HXLINE( 485)				_g = (_g + 1);
HXDLIN( 485)				int i = (_g - 1);
HXLINE( 486)				 ::Dynamic item = this->get(i);
HXLINE( 487)				bool result = ( (bool)(callback(item,i,::hx::ObjectPtr<OBJ_>(this))) );
HXLINE( 488)				if (result) {
HXLINE( 489)					return i;
            				}
            			}
            		}
HXLINE( 492)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,findIndex,return )

bool ArrayCollection_obj::some( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_501_some)
HXLINE( 502)		{
HXLINE( 502)			int _g = 0;
HXDLIN( 502)			int _g1 = this->get_length();
HXDLIN( 502)			while((_g < _g1)){
HXLINE( 502)				_g = (_g + 1);
HXDLIN( 502)				int i = (_g - 1);
HXLINE( 503)				 ::Dynamic item = this->get(i);
HXLINE( 504)				bool result = ( (bool)(callback(item,i,::hx::ObjectPtr<OBJ_>(this))) );
HXLINE( 505)				if (result) {
HXLINE( 506)					return true;
            				}
            			}
            		}
HXLINE( 509)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,some,return )

bool ArrayCollection_obj::every( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_518_every)
HXLINE( 519)		{
HXLINE( 519)			int _g = 0;
HXDLIN( 519)			int _g1 = this->get_length();
HXDLIN( 519)			while((_g < _g1)){
HXLINE( 519)				_g = (_g + 1);
HXDLIN( 519)				int i = (_g - 1);
HXLINE( 520)				 ::Dynamic item = this->get(i);
HXLINE( 521)				bool result = ( (bool)(callback(item,i,::hx::ObjectPtr<OBJ_>(this))) );
HXLINE( 522)				if (!(result)) {
HXLINE( 523)					return false;
            				}
            			}
            		}
HXLINE( 526)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,every,return )

void ArrayCollection_obj::forEach( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_536_forEach)
HXDLIN( 536)		int _g = 0;
HXDLIN( 536)		int _g1 = this->get_length();
HXDLIN( 536)		while((_g < _g1)){
HXDLIN( 536)			_g = (_g + 1);
HXDLIN( 536)			int i = (_g - 1);
HXLINE( 537)			 ::Dynamic item = this->get(i);
HXLINE( 538)			callback(item,i,::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,forEach,(void))

 ::feathers::data::ArrayCollection ArrayCollection_obj::map( ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_548_map)
HXLINE( 549)		::cpp::VirtualArray result = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 550)		{
HXLINE( 550)			int _g = 0;
HXDLIN( 550)			int _g1 = this->get_length();
HXDLIN( 550)			while((_g < _g1)){
HXLINE( 550)				_g = (_g + 1);
HXDLIN( 550)				int i = (_g - 1);
HXLINE( 551)				 ::Dynamic item = this->get(i);
HXLINE( 552)				result->push(callback(item,i,::hx::ObjectPtr<OBJ_>(this)));
            			}
            		}
HXLINE( 554)		return  ::feathers::data::ArrayCollection_obj::__alloc( HX_CTX ,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,map,return )

void ArrayCollection_obj::readExternal(::Dynamic input){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_559_readExternal)
HXDLIN( 559)		this->set_array(( (::cpp::VirtualArray)(::Std_obj::downcast(::openfl::utils::IDataInput_obj::readObject(input),::hx::ArrayBase::__mClass)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,readExternal,(void))

void ArrayCollection_obj::writeExternal(::Dynamic output){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_564_writeExternal)
HXDLIN( 564)		::openfl::utils::IDataOutput_obj::writeObject(output,this->get_array());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,writeExternal,(void))

void ArrayCollection_obj::refreshFilterAndSort(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_567_refreshFilterAndSort)
HXLINE( 568)		this->_pendingRefresh = false;
HXLINE( 569)		if (::hx::IsNotNull( this->_filterFunction )) {
HXLINE( 570)			::cpp::VirtualArray result = this->_filterAndSortData;
HXLINE( 571)			if (::hx::IsNotNull( result )) {
HXLINE( 576)				result->resize(0);
            			}
            			else {
HXLINE( 579)				result = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE( 581)			{
HXLINE( 581)				int _g = 0;
HXDLIN( 581)				int _g1 = this->_array->get_length();
HXDLIN( 581)				while((_g < _g1)){
HXLINE( 581)					_g = (_g + 1);
HXDLIN( 581)					int i = (_g - 1);
HXLINE( 582)					 ::Dynamic item = this->_array->__get(i);
HXLINE( 583)					if (( (bool)(this->_filterFunction(item)) )) {
HXLINE( 584)						result->push(item);
            					}
            				}
            			}
HXLINE( 587)			this->_filterAndSortData = result;
            		}
            		else {
HXLINE( 588)			if (::hx::IsNotNull( this->_sortCompareFunction )) {
HXLINE( 590)				::cpp::VirtualArray result = this->_filterAndSortData;
HXLINE( 591)				if (::hx::IsNotNull( result )) {
HXLINE( 592)					result->resize(this->_array->get_length());
HXLINE( 593)					{
HXLINE( 593)						int _g = 0;
HXDLIN( 593)						int _g1 = this->_array->get_length();
HXDLIN( 593)						while((_g < _g1)){
HXLINE( 593)							_g = (_g + 1);
HXDLIN( 593)							int i = (_g - 1);
HXLINE( 594)							result->set(i,this->_array->__get(i));
            						}
            					}
            				}
            				else {
HXLINE( 598)					result = this->_array->slice(0,null());
            				}
HXLINE( 600)				this->_filterAndSortData = result;
            			}
            			else {
HXLINE( 603)				this->_filterAndSortData = null();
            			}
            		}
HXLINE( 605)		if (::hx::IsNotNull( this->_sortCompareFunction )) {
HXLINE( 606)			this->_filterAndSortData->sort(this->_sortCompareFunction);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,refreshFilterAndSort,(void))

::cpp::VirtualArray ArrayCollection_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_616_toArray)
HXLINE( 617)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 618)			return this->_filterAndSortData->copy();
            		}
HXLINE( 620)		return this->_array->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayCollection_obj,toArray,return )

int ArrayCollection_obj::getSortedInsertionIndex( ::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_623_getSortedInsertionIndex)
HXLINE( 624)		if (::hx::IsNull( this->_sortCompareFunction )) {
HXLINE( 625)			return this->_filterAndSortData->get_length();
            		}
HXLINE( 627)		{
HXLINE( 627)			int _g = 0;
HXDLIN( 627)			int _g1 = this->_filterAndSortData->get_length();
HXDLIN( 627)			while((_g < _g1)){
HXLINE( 627)				_g = (_g + 1);
HXDLIN( 627)				int i = (_g - 1);
HXLINE( 628)				 ::Dynamic otherItem = this->_filterAndSortData->__get(i);
HXLINE( 629)				int result = ( (int)(this->_sortCompareFunction(item,otherItem)) );
HXLINE( 630)				if ((result < 1)) {
HXLINE( 631)					return i;
            				}
            			}
            		}
HXLINE( 634)		return this->_filterAndSortData->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayCollection_obj,getSortedInsertionIndex,return )

void ArrayCollection_obj::addAtInternal( ::Dynamic item,int index,bool dispatchEvents){
            	HX_GC_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_637_addAtInternal)
HXLINE( 638)		if (this->_pendingRefresh) {
HXLINE( 639)			this->refreshFilterAndSort();
            		}
HXLINE( 641)		bool _hx_tmp;
HXDLIN( 641)		if ((index >= 0)) {
HXLINE( 641)			_hx_tmp = (index > this->get_length());
            		}
            		else {
HXLINE( 641)			_hx_tmp = true;
            		}
HXDLIN( 641)		if (_hx_tmp) {
HXLINE( 642)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Failed to add item at index ",2f,e5,45,e9) + index) + HX_(". Expected a value between 0 and ",35,4d,cd,45)) + this->get_length()) + HX_(".",2e,00,00,00))));
            		}
HXLINE( 644)		if (::hx::IsNotNull( this->_filterAndSortData )) {
HXLINE( 647)			int unfilteredIndex = this->_array->get_length();
HXLINE( 648)			if ((index < this->_filterAndSortData->get_length())) {
HXLINE( 651)				 ::Dynamic oldItem = this->_filterAndSortData->__get(index);
HXLINE( 652)				unfilteredIndex = this->_array->indexOf(oldItem,null());
            			}
HXLINE( 655)			this->_array->insert(unfilteredIndex,item);
HXLINE( 657)			bool includeItem = true;
HXLINE( 658)			if (::hx::IsNotNull( this->_filterFunction )) {
HXLINE( 659)				includeItem = ( (bool)(this->_filterFunction(item)) );
            			}
HXLINE( 661)			if (includeItem) {
HXLINE( 662)				int sortedIndex = index;
HXLINE( 663)				if (::hx::IsNotNull( this->_sortCompareFunction )) {
HXLINE( 664)					sortedIndex = this->getSortedInsertionIndex(item);
            				}
HXLINE( 666)				this->_filterAndSortData->insert(sortedIndex,item);
HXLINE( 667)				if (dispatchEvents) {
HXLINE( 669)					::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("addItem",d4,07,fd,81),index,item,null(),null(),null());
HXLINE( 670)					::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            				}
            			}
            		}
            		else {
HXLINE( 674)			this->_array->insert(index,item);
HXLINE( 675)			if (dispatchEvents) {
HXLINE( 676)				::feathers::events::FlatCollectionEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("addItem",d4,07,fd,81),index,item,null(),null(),null());
HXLINE( 677)				::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ArrayCollection_obj,addAtInternal,(void))


::hx::ObjectPtr< ArrayCollection_obj > ArrayCollection_obj::__new(::cpp::VirtualArray array) {
	::hx::ObjectPtr< ArrayCollection_obj > __this = new ArrayCollection_obj();
	__this->__construct(array);
	return __this;
}

::hx::ObjectPtr< ArrayCollection_obj > ArrayCollection_obj::__alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray array) {
	ArrayCollection_obj *__this = (ArrayCollection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayCollection_obj), true, "feathers.data.ArrayCollection"));
	*(void **)__this = ArrayCollection_obj::_hx_vtable;
	__this->__construct(array);
	return __this;
}

ArrayCollection_obj::ArrayCollection_obj()
{
}

void ArrayCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayCollection);
	HX_MARK_MEMBER_NAME(_filterAndSortData,"_filterAndSortData");
	HX_MARK_MEMBER_NAME(_array,"_array");
	HX_MARK_MEMBER_NAME(_pendingRefresh,"_pendingRefresh");
	HX_MARK_MEMBER_NAME(_filterFunction,"_filterFunction");
	HX_MARK_MEMBER_NAME(_sortCompareFunction,"_sortCompareFunction");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_filterAndSortData,"_filterAndSortData");
	HX_VISIT_MEMBER_NAME(_array,"_array");
	HX_VISIT_MEMBER_NAME(_pendingRefresh,"_pendingRefresh");
	HX_VISIT_MEMBER_NAME(_filterFunction,"_filterFunction");
	HX_VISIT_MEMBER_NAME(_sortCompareFunction,"_sortCompareFunction");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ArrayCollection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"find") ) { return ::hx::Val( find_dyn() ); }
		if (HX_FIELD_EQ(inName,"some") ) { return ::hx::Val( some_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_array() ); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return ::hx::Val( addAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"every") ) { return ::hx::Val( every_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { return ::hx::Val( _array ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return ::hx::Val( addAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { return ::hx::Val( indexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAllAt") ) { return ::hx::Val( addAllAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return ::hx::Val( removeAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateAt") ) { return ::hx::Val( updateAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_array") ) { return ::hx::Val( get_array_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_array") ) { return ::hx::Val( set_array_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateAll") ) { return ::hx::Val( updateAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"findIndex") ) { return ::hx::Val( findIndex_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readExternal") ) { return ::hx::Val( readExternal_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeExternal") ) { return ::hx::Val( writeExternal_dyn() ); }
		if (HX_FIELD_EQ(inName,"addAtInternal") ) { return ::hx::Val( addAtInternal_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filterFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filterFunction() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pendingRefresh") ) { return ::hx::Val( _pendingRefresh ); }
		if (HX_FIELD_EQ(inName,"_filterFunction") ) { return ::hx::Val( _filterFunction ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_filterAndSortData") ) { return ::hx::Val( _filterAndSortData ); }
		if (HX_FIELD_EQ(inName,"get_filterFunction") ) { return ::hx::Val( get_filterFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterFunction") ) { return ::hx::Val( set_filterFunction_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sortCompareFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sortCompareFunction() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_sortCompareFunction") ) { return ::hx::Val( _sortCompareFunction ); }
		if (HX_FIELD_EQ(inName,"refreshFilterAndSort") ) { return ::hx::Val( refreshFilterAndSort_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_sortCompareFunction") ) { return ::hx::Val( get_sortCompareFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sortCompareFunction") ) { return ::hx::Val( set_sortCompareFunction_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSortedInsertionIndex") ) { return ::hx::Val( getSortedInsertionIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayCollection_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_array(inValue.Cast< ::cpp::VirtualArray >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_array") ) { _array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filterFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterFunction(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_pendingRefresh") ) { _pendingRefresh=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filterFunction") ) { _filterFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_filterAndSortData") ) { _filterAndSortData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sortCompareFunction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sortCompareFunction(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_sortCompareFunction") ) { _sortCompareFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_filterAndSortData",88,de,33,6e));
	outFields->push(HX_("_array",da,b4,76,21));
	outFields->push(HX_("array",99,6d,8f,25));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("_pendingRefresh",e3,7a,4d,d1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayCollection_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ArrayCollection_obj,_filterAndSortData),HX_("_filterAndSortData",88,de,33,6e)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ArrayCollection_obj,_array),HX_("_array",da,b4,76,21)},
	{::hx::fsBool,(int)offsetof(ArrayCollection_obj,_pendingRefresh),HX_("_pendingRefresh",e3,7a,4d,d1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ArrayCollection_obj,_filterFunction),HX_("_filterFunction",8f,47,d4,52)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ArrayCollection_obj,_sortCompareFunction),HX_("_sortCompareFunction",20,1e,5e,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayCollection_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayCollection_obj_sMemberFields[] = {
	HX_("_filterAndSortData",88,de,33,6e),
	HX_("_array",da,b4,76,21),
	HX_("get_array",f0,c9,38,69),
	HX_("set_array",fc,b5,89,4c),
	HX_("get_length",af,04,8f,8f),
	HX_("_pendingRefresh",e3,7a,4d,d1),
	HX_("_filterFunction",8f,47,d4,52),
	HX_("get_filterFunction",b9,df,0d,a5),
	HX_("set_filterFunction",2d,12,bd,81),
	HX_("_sortCompareFunction",20,1e,5e,4a),
	HX_("get_sortCompareFunction",b6,ad,5a,53),
	HX_("set_sortCompareFunction",c2,16,bc,55),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("addAt",74,b5,43,1c),
	HX_("addAll",80,09,fb,9e),
	HX_("addAllAt",93,a2,f0,9a),
	HX_("reset",cf,49,c8,e6),
	HX_("remove",44,9c,88,04),
	HX_("removeAt",57,6e,1b,ad),
	HX_("removeAll",3d,17,e5,ca),
	HX_("indexOf",c9,48,bf,e0),
	HX_("contains",1f,5a,7b,2c),
	HX_("iterator",ee,49,9a,93),
	HX_("updateAt",5c,13,fa,77),
	HX_("updateAll",98,d6,d6,82),
	HX_("refresh",db,d9,20,ed),
	HX_("find",39,d0,bb,43),
	HX_("findIndex",19,cc,0b,ad),
	HX_("some",f4,22,58,4c),
	HX_("every",9b,cb,c4,75),
	HX_("forEach",aa,29,be,c4),
	HX_("map",9c,0a,53,00),
	HX_("readExternal",c1,8f,b8,1e),
	HX_("writeExternal",4a,e2,24,a7),
	HX_("refreshFilterAndSort",22,1e,b9,65),
	HX_("toArray",1e,ba,13,f2),
	HX_("getSortedInsertionIndex",36,20,01,99),
	HX_("addAtInternal",d1,6c,0c,de),
	::String(null()) };

::hx::Class ArrayCollection_obj::__mClass;

void ArrayCollection_obj::__register()
{
	ArrayCollection_obj _hx_dummy;
	ArrayCollection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.data.ArrayCollection",31,9f,b2,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayCollection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayCollection_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayCollection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayCollection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ArrayCollection_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5e7eb2ae850ff3f5_66_boot)
HXDLIN(  66)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("array",99,6d,8f,25))))));
            	}
}

} // end namespace feathers
} // end namespace data
