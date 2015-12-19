#include <hxcpp.h>

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
#ifndef INCLUDED_sx_tools_SizeTools
#include <sx/tools/SizeTools.h>
#endif
namespace sx{
namespace tools{

Void SizeTools_obj::__construct()
{
	return null();
}

//SizeTools_obj::~SizeTools_obj() { }

Dynamic SizeTools_obj::__CreateEmpty() { return  new SizeTools_obj; }
hx::ObjectPtr< SizeTools_obj > SizeTools_obj::__new()
{  hx::ObjectPtr< SizeTools_obj > _result_ = new SizeTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic SizeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SizeTools_obj > _result_ = new SizeTools_obj();
	_result_->__construct();
	return _result_;}

bool SizeTools_obj::isZero( ::sx::properties::metric::Size size){
	HX_STACK_FRAME("sx.tools.SizeTools","isZero",0x082c0702,"sx.tools.SizeTools.isZero","sx/tools/PropertiesTools.hx",44,0xabe69754)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(45)
	bool tmp = (size->__value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeTools_obj,isZero,return )

bool SizeTools_obj::notZero( ::sx::properties::metric::Size size){
	HX_STACK_FRAME("sx.tools.SizeTools","notZero",0x45f3dd0b,"sx.tools.SizeTools.notZero","sx/tools/PropertiesTools.hx",54,0xabe69754)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(55)
	bool tmp = (size->__value != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeTools_obj,notZero,return )

Float SizeTools_obj::get( ::sx::properties::metric::Size size,::String units){
	HX_STACK_FRAME("sx.tools.SizeTools","get",0xc5996bc6,"sx.tools.SizeTools.get","sx/tools/PropertiesTools.hx",63,0xabe69754)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(units,"units")
	HX_STACK_LINE(64)
	::String tmp = units;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("dip","\x4b","\x3d","\x4c","\x00"))){
		HX_STACK_LINE(65)
		tmp1 = size->get_dip();
	}
	else if (  ( _switch_1==HX_HCSTRING("px","\x08","\x62","\x00","\x00"))){
		HX_STACK_LINE(66)
		tmp1 = size->get_px();
	}
	else if (  ( _switch_1==HX_HCSTRING("pct","\x21","\x53","\x55","\x00"))){
		HX_STACK_LINE(67)
		tmp1 = size->get_pct();
	}
	HX_STACK_LINE(64)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SizeTools_obj,get,return )


SizeTools_obj::SizeTools_obj()
{
}

bool SizeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isZero") ) { outValue = isZero_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notZero") ) { outValue = notZero_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizeTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizeTools_obj::__mClass,"__mClass");
};

#endif

hx::Class SizeTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isZero","\x32","\xd4","\x57","\x6e"),
	HX_HCSTRING("notZero","\xdb","\x99","\x1b","\x46"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void SizeTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tools.SizeTools","\x9e","\xf3","\x1d","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SizeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SizeTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sx
} // end namespace tools
