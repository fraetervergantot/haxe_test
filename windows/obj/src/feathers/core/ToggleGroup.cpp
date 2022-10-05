#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_IGroupedToggle
#include <feathers/controls/IGroupedToggle.h>
#endif
#ifndef INCLUDED_feathers_controls_IToggle
#include <feathers/controls/IToggle.h>
#endif
#ifndef INCLUDED_feathers_core_IDataSelector
#include <feathers/core/IDataSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IIndexSelector
#include <feathers/core/IIndexSelector.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_ToggleGroup
#include <feathers/core/ToggleGroup.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_33_new,"feathers.core.ToggleGroup","new",0xc661d48c,"feathers.core.ToggleGroup.new","feathers/core/ToggleGroup.hx",33,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_53_get_numItems,"feathers.core.ToggleGroup","get_numItems",0x73148a37,"feathers.core.ToggleGroup.get_numItems","feathers/core/ToggleGroup.hx",53,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_81_get_selectedIndex,"feathers.core.ToggleGroup","get_selectedIndex",0x4712fb3a,"feathers.core.ToggleGroup.get_selectedIndex","feathers/core/ToggleGroup.hx",81,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_84_set_selectedIndex,"feathers.core.ToggleGroup","set_selectedIndex",0x6a80d346,"feathers.core.ToggleGroup.set_selectedIndex","feathers/core/ToggleGroup.hx",84,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_118_get_maxSelectedIndex,"feathers.core.ToggleGroup","get_maxSelectedIndex",0xe1e3d4d0,"feathers.core.ToggleGroup.get_maxSelectedIndex","feathers/core/ToggleGroup.hx",118,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_141_get_selectedItem,"feathers.core.ToggleGroup","get_selectedItem",0x0f42a1eb,"feathers.core.ToggleGroup.get_selectedItem","feathers/core/ToggleGroup.hx",141,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_148_set_selectedItem,"feathers.core.ToggleGroup","set_selectedItem",0x65848f5f,"feathers.core.ToggleGroup.set_selectedItem","feathers/core/ToggleGroup.hx",148,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_178_get_requireSelection,"feathers.core.ToggleGroup","get_requireSelection",0x13974b84,"feathers.core.ToggleGroup.get_requireSelection","feathers/core/ToggleGroup.hx",178,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_181_set_requireSelection,"feathers.core.ToggleGroup","set_requireSelection",0xe04f02f8,"feathers.core.ToggleGroup.set_requireSelection","feathers/core/ToggleGroup.hx",181,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_207_addItem,"feathers.core.ToggleGroup","addItem",0x56fe9200,"feathers.core.ToggleGroup.addItem","feathers/core/ToggleGroup.hx",207,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_247_removeItem,"feathers.core.ToggleGroup","removeItem",0x990518cb,"feathers.core.ToggleGroup.removeItem","feathers/core/ToggleGroup.hx",247,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_293_removeAllItems,"feathers.core.ToggleGroup","removeAllItems",0xc895fad7,"feathers.core.ToggleGroup.removeAllItems","feathers/core/ToggleGroup.hx",293,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_324_hasItem,"feathers.core.ToggleGroup","hasItem",0xea056fb9,"feathers.core.ToggleGroup.hasItem","feathers/core/ToggleGroup.hx",324,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_341_getItemAt,"feathers.core.ToggleGroup","getItemAt",0xc5799f48,"feathers.core.ToggleGroup.getItemAt","feathers/core/ToggleGroup.hx",341,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_361_getItemIndex,"feathers.core.ToggleGroup","getItemIndex",0x0c34b3dd,"feathers.core.ToggleGroup.getItemIndex","feathers/core/ToggleGroup.hx",361,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_376_setItemIndex,"feathers.core.ToggleGroup","setItemIndex",0x212dd751,"feathers.core.ToggleGroup.setItemIndex","feathers/core/ToggleGroup.hx",376,0xefa344c4)
HX_LOCAL_STACK_FRAME(_hx_pos_07d2f490ce6f62f0_401_item_changeHandler,"feathers.core.ToggleGroup","item_changeHandler",0x02353222,"feathers.core.ToggleGroup.item_changeHandler","feathers/core/ToggleGroup.hx",401,0xefa344c4)
namespace feathers{
namespace core{

void ToggleGroup_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_33_new)
HXLINE( 154)		this->_requireSelection = true;
HXLINE(  58)		this->_selectedIndex = -1;
HXLINE(  56)		this->_ignoreChanges = false;
HXLINE(  43)		this->_items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  40)		super::__construct(null());
            	}

Dynamic ToggleGroup_obj::__CreateEmpty() { return new ToggleGroup_obj; }

void *ToggleGroup_obj::_hx_vtable = 0;

Dynamic ToggleGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToggleGroup_obj > _hx_result = new ToggleGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToggleGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0187fb6c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0187fb6c;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

static ::feathers::core::IDataSelector_obj _hx_feathers_core_ToggleGroup__hx_feathers_core_IDataSelector= {
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::ToggleGroup_obj::get_selectedItem_2aa2127b,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::feathers::core::ToggleGroup_obj::set_selectedItem_a7a2487a,
};

static ::feathers::core::IIndexSelector_obj _hx_feathers_core_ToggleGroup__hx_feathers_core_IIndexSelector= {
	( int (::hx::Object::*)())&::feathers::core::ToggleGroup_obj::get_selectedIndex,
	( int (::hx::Object::*)(int))&::feathers::core::ToggleGroup_obj::set_selectedIndex,
	( int (::hx::Object::*)())&::feathers::core::ToggleGroup_obj::get_maxSelectedIndex,
};

 ::Dynamic ToggleGroup_obj::set_selectedItem_a7a2487a( ::Dynamic value) {
			return set_selectedItem(value);
}

 ::Dynamic ToggleGroup_obj::get_selectedItem_2aa2127b() {
			return get_selectedItem();
}
void *ToggleGroup_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe7e1ba63: return &_hx_feathers_core_ToggleGroup__hx_feathers_core_IDataSelector;
		case (int)0xe0b54c17: return &_hx_feathers_core_ToggleGroup__hx_feathers_core_IIndexSelector;
	}
	return super::_hx_getInterface(inHash);
}

int ToggleGroup_obj::get_numItems(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_53_get_numItems)
HXDLIN(  53)		return this->_items->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,get_numItems,return )

int ToggleGroup_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_81_get_selectedIndex)
HXDLIN(  81)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,get_selectedIndex,return )

int ToggleGroup_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_84_set_selectedIndex)
HXLINE(  85)		int itemCount = this->_items->length;
HXLINE(  86)		bool _hx_tmp;
HXDLIN(  86)		if ((value >= -1)) {
HXLINE(  86)			_hx_tmp = (value > itemCount);
            		}
            		else {
HXLINE(  86)			_hx_tmp = true;
            		}
HXDLIN(  86)		if (_hx_tmp) {
HXLINE(  87)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,((((HX_("Index ",ee,88,87,c8) + value) + HX_(" is out of range ",04,9f,ff,37)) + itemCount) + HX_(" for ToggleGroup.",7a,42,58,48))));
            		}
HXLINE(  90)		bool hasChanged = (this->_selectedIndex != value);
HXLINE(  91)		this->_selectedIndex = value;
HXLINE(  94)		bool oldIgnoreChanges = this->_ignoreChanges;
HXLINE(  95)		this->_ignoreChanges = true;
HXLINE(  96)		{
HXLINE(  96)			int _g = 0;
HXDLIN(  96)			int _g1 = this->_items->length;
HXDLIN(  96)			while((_g < _g1)){
HXLINE(  96)				_g = (_g + 1);
HXDLIN(  96)				int i = (_g - 1);
HXLINE(  97)				::Dynamic item = this->_items->__get(i);
HXLINE(  98)				::feathers::controls::IToggle_obj::set_selected(item,(i == value));
            			}
            		}
HXLINE( 100)		this->_ignoreChanges = oldIgnoreChanges;
HXLINE( 102)		if (hasChanged) {
HXLINE( 107)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            		}
HXLINE( 109)		return this->_selectedIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,set_selectedIndex,return )

int ToggleGroup_obj::get_maxSelectedIndex(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_118_get_maxSelectedIndex)
HXDLIN( 118)		return (this->_items->length - 1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,get_maxSelectedIndex,return )

::Dynamic ToggleGroup_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_141_get_selectedItem)
HXLINE( 142)		if ((this->_selectedIndex == -1)) {
HXLINE( 143)			return null();
            		}
HXLINE( 145)		return this->_items->__get(this->_selectedIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,get_selectedItem,return )

::Dynamic ToggleGroup_obj::set_selectedItem(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_148_set_selectedItem)
HXLINE( 150)		this->set_selectedIndex(this->_items->indexOf(value,null()));
HXLINE( 151)		return this->get_selectedItem();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,set_selectedItem,return )

bool ToggleGroup_obj::get_requireSelection(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_178_get_requireSelection)
HXDLIN( 178)		return this->_requireSelection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,get_requireSelection,return )

bool ToggleGroup_obj::set_requireSelection(bool value){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_181_set_requireSelection)
HXLINE( 182)		if ((this->_requireSelection == value)) {
HXLINE( 183)			return this->_requireSelection;
            		}
HXLINE( 185)		this->_requireSelection = value;
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		bool _hx_tmp1;
HXDLIN( 186)		if (this->_requireSelection) {
HXLINE( 186)			_hx_tmp1 = (this->_selectedIndex == -1);
            		}
            		else {
HXLINE( 186)			_hx_tmp1 = false;
            		}
HXDLIN( 186)		if (_hx_tmp1) {
HXLINE( 186)			_hx_tmp = (this->_items->length > 0);
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 188)			this->set_selectedIndex(0);
            		}
HXLINE( 190)		return this->_requireSelection;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,set_requireSelection,return )

void ToggleGroup_obj::addItem(::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_207_addItem)
HXLINE( 208)		if (::hx::IsNull( item )) {
HXLINE( 209)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("IToggle passed to ToggleGroup addItem() must not be null.",f6,5f,60,b3)));
            		}
HXLINE( 212)		int index = this->_items->indexOf(item,null());
HXLINE( 213)		if ((index != -1)) {
HXLINE( 214)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot add an item to a ToggleGroup more than once.",96,b6,51,26)));
            		}
HXLINE( 216)		this->_items->push(item);
HXLINE( 217)		if (::feathers::controls::IToggle_obj::get_selected(item)) {
HXLINE( 218)			this->set_selectedItem(item);
            		}
            		else {
HXLINE( 219)			bool _hx_tmp;
HXDLIN( 219)			if ((this->_selectedIndex < 0)) {
HXLINE( 219)				_hx_tmp = this->_requireSelection;
            			}
            			else {
HXLINE( 219)				_hx_tmp = false;
            			}
HXDLIN( 219)			if (_hx_tmp) {
HXLINE( 220)				this->set_selectedItem(item);
            			}
            			else {
HXLINE( 222)				::feathers::controls::IToggle_obj::set_selected(item,false);
            			}
            		}
HXLINE( 224)		::openfl::events::IEventDispatcher_obj::addEventListener(item,HX_("change",70,91,72,b7),this->item_changeHandler_dyn(),false,0,true);
HXLINE( 226)		if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::controls::IGroupedToggle >())) {
HXLINE( 227)			::feathers::controls::IGroupedToggle_obj::set_toggleGroup(item,::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,addItem,(void))

void ToggleGroup_obj::removeItem(::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_247_removeItem)
HXLINE( 248)		int index = this->_items->indexOf(item,null());
HXLINE( 249)		if ((index == -1)) {
HXLINE( 250)			return;
            		}
HXLINE( 252)		this->_items->remove(item);
HXLINE( 253)		::openfl::events::IEventDispatcher_obj::removeEventListener(item,HX_("change",70,91,72,b7),this->item_changeHandler_dyn(),null());
HXLINE( 254)		if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::controls::IGroupedToggle >())) {
HXLINE( 255)			::feathers::controls::IGroupedToggle_obj::set_toggleGroup(item,null());
            		}
HXLINE( 257)		if ((this->_selectedIndex > index)) {
HXLINE( 259)			this->set_selectedIndex((this->get_selectedIndex() - 1));
            		}
            		else {
HXLINE( 260)			if ((this->get_selectedIndex() == index)) {
HXLINE( 261)				if (this->_requireSelection) {
HXLINE( 262)					int maxSelectedIndex = (this->_items->length - 1);
HXLINE( 263)					if ((this->_selectedIndex > maxSelectedIndex)) {
HXLINE( 267)						this->set_selectedIndex(maxSelectedIndex);
            					}
            					else {
HXLINE( 272)						::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            					}
            				}
            				else {
HXLINE( 277)					this->set_selectedIndex(-1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,removeItem,(void))

void ToggleGroup_obj::removeAllItems(){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_293_removeAllItems)
HXLINE( 294)		{
HXLINE( 294)			int _g = 0;
HXDLIN( 294)			::Array< ::Dynamic> _g1 = this->_items;
HXDLIN( 294)			while((_g < _g1->length)){
HXLINE( 294)				::Dynamic item = _g1->__get(_g);
HXDLIN( 294)				_g = (_g + 1);
HXLINE( 295)				::openfl::events::IEventDispatcher_obj::removeEventListener(item,HX_("change",70,91,72,b7),this->item_changeHandler_dyn(),null());
HXLINE( 296)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::controls::IGroupedToggle >())) {
HXLINE( 297)					::feathers::controls::IGroupedToggle_obj::set_toggleGroup(item,null());
            				}
            			}
            		}
HXLINE( 303)		this->_items->resize(0);
HXLINE( 306)		this->set_selectedIndex(-1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToggleGroup_obj,removeAllItems,(void))

bool ToggleGroup_obj::hasItem(::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_324_hasItem)
HXDLIN( 324)		return (this->_items->indexOf(item,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,hasItem,return )

::Dynamic ToggleGroup_obj::getItemAt(int index){
            	HX_GC_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_341_getItemAt)
HXLINE( 342)		bool _hx_tmp;
HXDLIN( 342)		if ((index >= 0)) {
HXLINE( 342)			_hx_tmp = (index >= this->_items->length);
            		}
            		else {
HXLINE( 342)			_hx_tmp = true;
            		}
HXDLIN( 342)		if (_hx_tmp) {
HXLINE( 343)			HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            		}
HXLINE( 345)		return this->_items->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,getItemAt,return )

int ToggleGroup_obj::getItemIndex(::Dynamic item){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_361_getItemIndex)
HXDLIN( 361)		return this->_items->indexOf(item,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,getItemIndex,return )

void ToggleGroup_obj::setItemIndex(::Dynamic item,int index){
            	HX_GC_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_376_setItemIndex)
HXLINE( 377)		int oldIndex = this->_items->indexOf(item,null());
HXLINE( 378)		if ((oldIndex < 0)) {
HXLINE( 379)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Attempting to set index of an item that has not been added to this ToggleGroup.",65,8c,c2,e2)));
            		}
HXLINE( 381)		if ((oldIndex == index)) {
HXLINE( 383)			return;
            		}
HXLINE( 385)		this->_items->remove(item);
HXLINE( 386)		this->_items->insert(index,item);
HXLINE( 387)		if ((this->_selectedIndex >= 0)) {
HXLINE( 388)			if ((this->_selectedIndex == oldIndex)) {
HXLINE( 390)				this->set_selectedIndex(index);
            			}
            			else {
HXLINE( 391)				bool _hx_tmp;
HXDLIN( 391)				if ((oldIndex < this->_selectedIndex)) {
HXLINE( 391)					_hx_tmp = (index > this->_selectedIndex);
            				}
            				else {
HXLINE( 391)					_hx_tmp = false;
            				}
HXDLIN( 391)				if (_hx_tmp) {
HXLINE( 393)					this->set_selectedIndex((this->get_selectedIndex() - 1));
            				}
            				else {
HXLINE( 394)					bool _hx_tmp;
HXDLIN( 394)					if ((oldIndex > this->_selectedIndex)) {
HXLINE( 394)						_hx_tmp = (index < this->_selectedIndex);
            					}
            					else {
HXLINE( 394)						_hx_tmp = false;
            					}
HXDLIN( 394)					if (_hx_tmp) {
HXLINE( 396)						this->set_selectedIndex((this->get_selectedIndex() + 1));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToggleGroup_obj,setItemIndex,(void))

void ToggleGroup_obj::item_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_07d2f490ce6f62f0_401_item_changeHandler)
HXLINE( 402)		if (this->_ignoreChanges) {
HXLINE( 403)			return;
            		}
HXLINE( 406)		::Dynamic item =  ::hx::interface_check(event->currentTarget,0xdea06717);
HXLINE( 407)		int index = this->_items->indexOf(item,null());
HXLINE( 408)		bool _hx_tmp;
HXDLIN( 408)		if (!(::feathers::controls::IToggle_obj::get_selected(item))) {
HXLINE( 408)			if (this->_requireSelection) {
HXLINE( 408)				_hx_tmp = (this->_selectedIndex == index);
            			}
            			else {
HXLINE( 408)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 408)			_hx_tmp = true;
            		}
HXDLIN( 408)		if (_hx_tmp) {
HXLINE( 410)			this->set_selectedIndex(index);
            		}
            		else {
HXLINE( 411)			if (!(::feathers::controls::IToggle_obj::get_selected(item))) {
HXLINE( 413)				this->set_selectedIndex(-1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToggleGroup_obj,item_changeHandler,(void))


::hx::ObjectPtr< ToggleGroup_obj > ToggleGroup_obj::__new() {
	::hx::ObjectPtr< ToggleGroup_obj > __this = new ToggleGroup_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ToggleGroup_obj > ToggleGroup_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ToggleGroup_obj *__this = (ToggleGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToggleGroup_obj), true, "feathers.core.ToggleGroup"));
	*(void **)__this = ToggleGroup_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToggleGroup_obj::ToggleGroup_obj()
{
}

void ToggleGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToggleGroup);
	HX_MARK_MEMBER_NAME(_items,"_items");
	HX_MARK_MEMBER_NAME(_ignoreChanges,"_ignoreChanges");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_requireSelection,"_requireSelection");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToggleGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_items,"_items");
	HX_VISIT_MEMBER_NAME(_ignoreChanges,"_ignoreChanges");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_requireSelection,"_requireSelection");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ToggleGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_items") ) { return ::hx::Val( _items ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addItem") ) { return ::hx::Val( addItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasItem") ) { return ::hx::Val( hasItem_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numItems") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numItems() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getItemAt") ) { return ::hx::Val( getItemAt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeItem") ) { return ::hx::Val( removeItem_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numItems") ) { return ::hx::Val( get_numItems_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedItem() ); }
		if (HX_FIELD_EQ(inName,"getItemIndex") ) { return ::hx::Val( getItemIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setItemIndex") ) { return ::hx::Val( setItemIndex_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ignoreChanges") ) { return ::hx::Val( _ignoreChanges ); }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return ::hx::Val( _selectedIndex ); }
		if (HX_FIELD_EQ(inName,"removeAllItems") ) { return ::hx::Val( removeAllItems_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxSelectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSelectedIndex() ); }
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"requireSelection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_requireSelection() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"_requireSelection") ) { return ::hx::Val( _requireSelection ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"item_changeHandler") ) { return ::hx::Val( item_changeHandler_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_maxSelectedIndex") ) { return ::hx::Val( get_maxSelectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_requireSelection") ) { return ::hx::Val( get_requireSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_requireSelection") ) { return ::hx::Val( set_requireSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ToggleGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_items") ) { _items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedItem(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ignoreChanges") ) { _ignoreChanges=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requireSelection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_requireSelection(inValue.Cast< bool >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_requireSelection") ) { _requireSelection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToggleGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_items",41,f3,f3,bd));
	outFields->push(HX_("numItems",da,bf,1c,7f));
	outFields->push(HX_("_ignoreChanges",52,36,ac,28));
	outFields->push(HX_("_selectedIndex",f8,66,a8,f2));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("maxSelectedIndex",73,e5,5e,80));
	outFields->push(HX_("selectedItem",0e,e5,59,d6));
	outFields->push(HX_("_requireSelection",86,4a,8d,4a));
	outFields->push(HX_("requireSelection",27,5c,12,b2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToggleGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ToggleGroup_obj,_items),HX_("_items",41,f3,f3,bd)},
	{::hx::fsBool,(int)offsetof(ToggleGroup_obj,_ignoreChanges),HX_("_ignoreChanges",52,36,ac,28)},
	{::hx::fsInt,(int)offsetof(ToggleGroup_obj,_selectedIndex),HX_("_selectedIndex",f8,66,a8,f2)},
	{::hx::fsBool,(int)offsetof(ToggleGroup_obj,_requireSelection),HX_("_requireSelection",86,4a,8d,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ToggleGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String ToggleGroup_obj_sMemberFields[] = {
	HX_("_items",41,f3,f3,bd),
	HX_("get_numItems",e3,73,36,34),
	HX_("_ignoreChanges",52,36,ac,28),
	HX_("_selectedIndex",f8,66,a8,f2),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_maxSelectedIndex",7c,4a,c9,9e),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("_requireSelection",86,4a,8d,4a),
	HX_("get_requireSelection",30,c1,7c,d0),
	HX_("set_requireSelection",a4,78,34,9d),
	HX_("addItem",d4,07,fd,81),
	HX_("removeItem",77,ff,de,c2),
	HX_("removeAllItems",83,a7,46,85),
	HX_("hasItem",8d,e5,03,15),
	HX_("getItemAt",1c,32,60,85),
	HX_("getItemIndex",89,9d,56,cd),
	HX_("setItemIndex",fd,c0,4f,e2),
	HX_("item_changeHandler",ce,a4,97,cb),
	::String(null()) };

::hx::Class ToggleGroup_obj::__mClass;

void ToggleGroup_obj::__register()
{
	ToggleGroup_obj _hx_dummy;
	ToggleGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ToggleGroup",9a,de,a9,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToggleGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToggleGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToggleGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToggleGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
