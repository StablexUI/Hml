#include <hxcpp.h>

#ifndef INCLUDED_sx_tools_OrientationTools
#include <sx/tools/OrientationTools.h>
#endif
namespace sx{
namespace tools{

Void OrientationTools_obj::__construct()
{
	return null();
}

//OrientationTools_obj::~OrientationTools_obj() { }

Dynamic OrientationTools_obj::__CreateEmpty() { return  new OrientationTools_obj; }
hx::ObjectPtr< OrientationTools_obj > OrientationTools_obj::__new()
{  hx::ObjectPtr< OrientationTools_obj > _result_ = new OrientationTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic OrientationTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrientationTools_obj > _result_ = new OrientationTools_obj();
	_result_->__construct();
	return _result_;}

::String OrientationTools_obj::opposite( ::String orientation){
	HX_STACK_FRAME("sx.tools.OrientationTools","opposite",0xcfe38e8e,"sx.tools.OrientationTools.opposite","sx/tools/PropertiesTools.hx",22,0xabe69754)
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(23)
	::String tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(24)
		tmp1 = HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
	}
	else if (  ( _switch_1==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(25)
		tmp1 = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OrientationTools_obj,opposite,return )


OrientationTools_obj::OrientationTools_obj()
{
}

bool OrientationTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"opposite") ) { outValue = opposite_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OrientationTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OrientationTools_obj::__mClass,"__mClass");
};

#endif

hx::Class OrientationTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("opposite","\xe7","\xd8","\x09","\xfc"),
	::String(null()) };

void OrientationTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sx.tools.OrientationTools","\xa7","\xfb","\x43","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OrientationTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OrientationTools_obj >;
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
