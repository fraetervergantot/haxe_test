#include <hxcpp.h>

#ifndef INCLUDED_HomeView
#include <HomeView.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_Alert
#include <feathers/controls/Alert.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_BasicButton
#include <feathers/controls/BasicButton.h>
#endif
#ifndef INCLUDED_feathers_controls_Button
#include <feathers/controls/Button.h>
#endif
#ifndef INCLUDED_feathers_controls_ITriggerView
#include <feathers/controls/ITriggerView.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_controls_Panel
#include <feathers/controls/Panel.h>
#endif
#ifndef INCLUDED_feathers_controls_ScrollContainer
#include <feathers/controls/ScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_controls_popups_IPopUpAdapter
#include <feathers/controls/popups/IPopUpAdapter.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_BaseScrollContainer
#include <feathers/controls/supportClasses/BaseScrollContainer.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusContainer
#include <feathers/core/IFocusContainer.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusExtras
#include <feathers/core/IFocusExtras.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_IStateContext
#include <feathers/core/IStateContext.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_data_ButtonBarItemState
#include <feathers/data/ButtonBarItemState.h>
#endif
#ifndef INCLUDED_feathers_events_TriggerEvent
#include <feathers/events/TriggerEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayout
#include <feathers/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayoutData
#include <feathers/layout/HorizontalLayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayout
#include <feathers/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayoutData
#include <feathers/layout/VerticalLayoutData.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_675356bc1682b012_23_new,"HomeView","new",0xc1f0f336,"HomeView.new","Tab1View.hx",23,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_45_createRows,"HomeView","createRows",0x3d933a1f,"HomeView.createRows","Tab1View.hx",45,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_59_createButtons,"HomeView","createButtons",0xbec174fb,"HomeView.createButtons","Tab1View.hx",59,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_81_buttons_trigerHandler,"HomeView","buttons_trigerHandler",0x3b96e119,"HomeView.buttons_trigerHandler","Tab1View.hx",81,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_89_showMessage,"HomeView","showMessage",0x0309bb20,"HomeView.showMessage","Tab1View.hx",89,0x4237ac7d)
static const ::String _hx_array_data_1385e044_6[] = {
	HX_("OK",1c,45,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_93_scrollUp,"HomeView","scrollUp",0x843bd532,"HomeView.scrollUp","Tab1View.hx",93,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_101_scrollDown,"HomeView","scrollDown",0xdf840af9,"HomeView.scrollDown","Tab1View.hx",101,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_110_scrollLeft,"HomeView","scrollLeft",0xe4c61a9e,"HomeView.scrollLeft","Tab1View.hx",110,0x4237ac7d)
HX_LOCAL_STACK_FRAME(_hx_pos_675356bc1682b012_119_scrollRight,"HomeView","scrollRight",0xbf9e3d65,"HomeView.scrollRight","Tab1View.hx",119,0x4237ac7d)

void HomeView_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_675356bc1682b012_23_new)
HXLINE(  41)		this->buttons = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  40)		this->rows = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		super::__construct();
HXLINE(  31)		 ::feathers::layout::VerticalLayout vLayout =  ::feathers::layout::VerticalLayout_obj::__alloc( HX_CTX );
HXLINE(  32)		vLayout->set_gap(((Float)1.0));
HXLINE(  33)		this->set_layout(vLayout);
HXLINE(  35)		this->createRows();
HXLINE(  36)		this->createButtons();
            	}

Dynamic HomeView_obj::__CreateEmpty() { return new HomeView_obj; }

void *HomeView_obj::_hx_vtable = 0;

Dynamic HomeView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HomeView_obj > _hx_result = new HomeView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HomeView_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			if (inClassId<=(int)0x128a091e) {
				return inClassId==(int)0x11a722e7 || inClassId==(int)0x128a091e;
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933 || inClassId==(int)0x6f16d304;
		}
	}
}

void HomeView_obj::createRows(){
            	HX_GC_STACKFRAME(&_hx_pos_675356bc1682b012_45_createRows)
HXDLIN(  45)		{
HXLINE(  46)			 ::feathers::layout::HorizontalLayout layout =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  47)			layout->set_verticalAlign(::feathers::layout::VerticalAlign_obj::MIDDLE_dyn());
HXLINE(  48)			layout->set_gap(((Float)1.0));
HXLINE(  49)			 ::feathers::controls::LayoutGroup row =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  50)			row->set_layout(layout);
HXLINE(  51)			row->set_layoutData( ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0)));
HXLINE(  52)			this->addChild(row);
HXLINE(  53)			this->rows->push(row);
            		}
HXLINE(  45)		{
HXLINE(  46)			 ::feathers::layout::HorizontalLayout layout1 =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  47)			layout1->set_verticalAlign(::feathers::layout::VerticalAlign_obj::MIDDLE_dyn());
HXLINE(  48)			layout1->set_gap(((Float)1.0));
HXLINE(  49)			 ::feathers::controls::LayoutGroup row1 =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  50)			row1->set_layout(layout1);
HXLINE(  51)			row1->set_layoutData( ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0)));
HXLINE(  52)			this->addChild(row1);
HXLINE(  53)			this->rows->push(row1);
            		}
HXLINE(  45)		{
HXLINE(  46)			 ::feathers::layout::HorizontalLayout layout2 =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  47)			layout2->set_verticalAlign(::feathers::layout::VerticalAlign_obj::MIDDLE_dyn());
HXLINE(  48)			layout2->set_gap(((Float)1.0));
HXLINE(  49)			 ::feathers::controls::LayoutGroup row2 =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  50)			row2->set_layout(layout2);
HXLINE(  51)			row2->set_layoutData( ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0)));
HXLINE(  52)			this->addChild(row2);
HXLINE(  53)			this->rows->push(row2);
            		}
HXLINE(  45)		{
HXLINE(  46)			 ::feathers::layout::HorizontalLayout layout3 =  ::feathers::layout::HorizontalLayout_obj::__alloc( HX_CTX );
HXLINE(  47)			layout3->set_verticalAlign(::feathers::layout::VerticalAlign_obj::MIDDLE_dyn());
HXLINE(  48)			layout3->set_gap(((Float)1.0));
HXLINE(  49)			 ::feathers::controls::LayoutGroup row3 =  ::feathers::controls::LayoutGroup_obj::__alloc( HX_CTX );
HXLINE(  50)			row3->set_layout(layout3);
HXLINE(  51)			row3->set_layoutData( ::feathers::layout::VerticalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0)));
HXLINE(  52)			this->addChild(row3);
HXLINE(  53)			this->rows->push(row3);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HomeView_obj,createRows,(void))

void HomeView_obj::createButtons(){
            	HX_GC_STACKFRAME(&_hx_pos_675356bc1682b012_59_createButtons)
HXDLIN(  59)		int _g = 0;
HXDLIN(  59)		while((_g < 16)){
HXDLIN(  59)			_g = (_g + 1);
HXDLIN(  59)			int i = (_g - 1);
HXLINE(  60)			 ::feathers::controls::Button button =  ::feathers::controls::Button_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  61)			button->set_text((HX_("Button ",ce,79,c6,97) + ::Std_obj::string(i)));
HXLINE(  62)			button->set_layoutData( ::feathers::layout::HorizontalLayoutData_obj::__alloc( HX_CTX ,((Float)100.0),((Float)100.0)));
HXLINE(  64)			button->addEventListener(HX_("trigger",38,55,df,25),this->buttons_trigerHandler_dyn(),null(),null(),null());
HXLINE(  65)			this->buttons->push(button);
HXLINE(  66)			if ((i < 4)) {
HXLINE(  67)				this->rows->__get(0).StaticCast<  ::feathers::controls::LayoutGroup >()->addChild(button);
            			}
            			else {
HXLINE(  69)				if ((i < 8)) {
HXLINE(  70)					this->rows->__get(1).StaticCast<  ::feathers::controls::LayoutGroup >()->addChild(button);
            				}
            				else {
HXLINE(  72)					if ((i < 12)) {
HXLINE(  73)						this->rows->__get(2).StaticCast<  ::feathers::controls::LayoutGroup >()->addChild(button);
            					}
            					else {
HXLINE(  75)						if ((i < 16)) {
HXLINE(  76)							this->rows->__get(3).StaticCast<  ::feathers::controls::LayoutGroup >()->addChild(button);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(HomeView_obj,createButtons,(void))

void HomeView_obj::buttons_trigerHandler( ::feathers::events::TriggerEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_675356bc1682b012_81_buttons_trigerHandler)
HXLINE(  82)		int index = this->buttons->indexOf(event->currentTarget,null());
HXLINE(  83)		 ::feathers::controls::Label label =  ::feathers::controls::Label_obj::__alloc( HX_CTX ,null());
HXLINE(  85)		this->showMessage(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,buttons_trigerHandler,(void))

void HomeView_obj::showMessage(int num){
            	HX_STACKFRAME(&_hx_pos_675356bc1682b012_89_showMessage)
HXDLIN(  89)		::feathers::controls::Alert_obj::show(((HX_("Button ",ce,79,c6,97) + ::Std_obj::string(num)) + HX_(" was pressed",8b,3c,30,1e)),HX_("Message",a7,5d,62,67),::Array_obj< ::String >::fromData( _hx_array_data_1385e044_6,1),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,showMessage,(void))

void HomeView_obj::scrollUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_675356bc1682b012_93_scrollUp)
HXDLIN(  93)		Float _hx_tmp = this->picture->get_scrollRect()->y;
HXDLIN(  93)		if ((_hx_tmp > ::openfl::Lib_obj::get_application()->_hx___window->_hx___y)) {
HXLINE(  94)			 ::openfl::geom::Rectangle rect = this->picture->get_scrollRect();
HXLINE(  95)			 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN(  95)			rect1->y = (rect1->y - ( (Float)(20) ));
HXLINE(  96)			this->picture->set_scrollRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,scrollUp,(void))

void HomeView_obj::scrollDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_675356bc1682b012_101_scrollDown)
HXDLIN( 101)		Float _hx_tmp = this->picture->get_scrollRect()->y;
HXDLIN( 101)		if ((_hx_tmp < ::openfl::Lib_obj::get_application()->_hx___window->_hx___height)) {
HXLINE( 103)			 ::openfl::geom::Rectangle rect = this->picture->get_scrollRect();
HXLINE( 104)			 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 104)			rect1->y = (rect1->y + 20);
HXLINE( 105)			this->picture->set_scrollRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,scrollDown,(void))

void HomeView_obj::scrollLeft( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_675356bc1682b012_110_scrollLeft)
HXDLIN( 110)		Float _hx_tmp = this->picture->get_scrollRect()->x;
HXDLIN( 110)		if ((_hx_tmp > ::openfl::Lib_obj::get_application()->_hx___window->_hx___x)) {
HXLINE( 112)			 ::openfl::geom::Rectangle rect = this->picture->get_scrollRect();
HXLINE( 113)			 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 113)			rect1->x = (rect1->x - ( (Float)(20) ));
HXLINE( 114)			this->picture->set_scrollRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,scrollLeft,(void))

void HomeView_obj::scrollRight( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_675356bc1682b012_119_scrollRight)
HXDLIN( 119)		Float _hx_tmp = this->picture->get_scrollRect()->x;
HXDLIN( 119)		if ((_hx_tmp < ::openfl::Lib_obj::get_application()->_hx___window->_hx___width)) {
HXLINE( 121)			 ::openfl::geom::Rectangle rect = this->picture->get_scrollRect();
HXLINE( 122)			 ::openfl::geom::Rectangle rect1 = rect;
HXDLIN( 122)			rect1->x = (rect1->x + 20);
HXLINE( 123)			this->picture->set_scrollRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,scrollRight,(void))


::hx::ObjectPtr< HomeView_obj > HomeView_obj::__new() {
	::hx::ObjectPtr< HomeView_obj > __this = new HomeView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HomeView_obj > HomeView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HomeView_obj *__this = (HomeView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HomeView_obj), true, "HomeView"));
	*(void **)__this = HomeView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HomeView_obj::HomeView_obj()
{
}

void HomeView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HomeView);
	HX_MARK_MEMBER_NAME(picture,"picture");
	HX_MARK_MEMBER_NAME(label_out,"label_out");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	 ::feathers::controls::Application_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HomeView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(picture,"picture");
	HX_VISIT_MEMBER_NAME(label_out,"label_out");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	 ::feathers::controls::Application_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HomeView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"picture") ) { return ::hx::Val( picture ); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scrollUp") ) { return ::hx::Val( scrollUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"label_out") ) { return ::hx::Val( label_out ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRows") ) { return ::hx::Val( createRows_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollDown") ) { return ::hx::Val( scrollDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollLeft") ) { return ::hx::Val( scrollLeft_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showMessage") ) { return ::hx::Val( showMessage_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollRight") ) { return ::hx::Val( scrollRight_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createButtons") ) { return ::hx::Val( createButtons_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buttons_trigerHandler") ) { return ::hx::Val( buttons_trigerHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HomeView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::feathers::controls::Button >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"picture") ) { picture=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"label_out") ) { label_out=inValue.Cast<  ::feathers::controls::Label >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HomeView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("picture",be,30,8e,7a));
	outFields->push(HX_("label_out",83,fd,9e,65));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("buttons",41,52,75,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HomeView_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(HomeView_obj,picture),HX_("picture",be,30,8e,7a)},
	{::hx::fsObject /*  ::feathers::controls::Label */ ,(int)offsetof(HomeView_obj,label_out),HX_("label_out",83,fd,9e,65)},
	{::hx::fsObject /*  ::feathers::controls::Button */ ,(int)offsetof(HomeView_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HomeView_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HomeView_obj,buttons),HX_("buttons",41,52,75,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HomeView_obj_sStaticStorageInfo = 0;
#endif

static ::String HomeView_obj_sMemberFields[] = {
	HX_("picture",be,30,8e,7a),
	HX_("label_out",83,fd,9e,65),
	HX_("button",f2,61,e0,d9),
	HX_("rows",19,f5,ae,4b),
	HX_("buttons",41,52,75,ca),
	HX_("createRows",35,b6,3c,5e),
	HX_("createButtons",a5,2a,b8,b2),
	HX_("buttons_trigerHandler",c3,50,1a,d9),
	HX_("showMessage",4a,d2,ac,76),
	HX_("scrollUp",c8,ff,54,8c),
	HX_("scrollDown",0f,87,2d,00),
	HX_("scrollLeft",b4,96,6f,05),
	HX_("scrollRight",8f,54,41,33),
	::String(null()) };

::hx::Class HomeView_obj::__mClass;

void HomeView_obj::__register()
{
	HomeView_obj _hx_dummy;
	HomeView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HomeView",44,e0,85,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HomeView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HomeView_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HomeView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HomeView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

