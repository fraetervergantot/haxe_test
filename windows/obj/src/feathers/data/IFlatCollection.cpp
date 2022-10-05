#include <hxcpp.h>

#ifndef INCLUDED_feathers_data_IFlatCollection
#include <feathers/data/IFlatCollection.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace feathers{
namespace data{


static ::String IFlatCollection_obj_sMemberFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("get_filterFunction",b9,df,0d,a5),
	HX_("set_filterFunction",2d,12,bd,81),
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
	HX_("updateAt",5c,13,fa,77),
	HX_("updateAll",98,d6,d6,82),
	HX_("iterator",ee,49,9a,93),
	HX_("refresh",db,d9,20,ed),
	::String(null()) };

::hx::Class IFlatCollection_obj::__mClass;

void IFlatCollection_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.data.IFlatCollection",9a,3f,ea,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlatCollection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xde3c5fc6 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace data
