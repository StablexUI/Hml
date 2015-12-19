#include <hxcpp.h>

#ifndef INCLUDED_hunit_utils_CTypeClassFieldsUtils
#include <hunit/utils/CTypeClassFieldsUtils.h>
#endif
namespace hunit{
namespace utils{

Void CTypeClassFieldsUtils_obj::__construct()
{
	return null();
}

//CTypeClassFieldsUtils_obj::~CTypeClassFieldsUtils_obj() { }

Dynamic CTypeClassFieldsUtils_obj::__CreateEmpty() { return  new CTypeClassFieldsUtils_obj; }
hx::ObjectPtr< CTypeClassFieldsUtils_obj > CTypeClassFieldsUtils_obj::__new()
{  hx::ObjectPtr< CTypeClassFieldsUtils_obj > _result_ = new CTypeClassFieldsUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic CTypeClassFieldsUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CTypeClassFieldsUtils_obj > _result_ = new CTypeClassFieldsUtils_obj();
	_result_->__construct();
	return _result_;}

::String CTypeClassFieldsUtils_obj::TEST_INDICATOR;

bool CTypeClassFieldsUtils_obj::isTest( Dynamic field){
	HX_STACK_FRAME("hunit.utils.CTypeClassFieldsUtils","isTest",0x6e2575ec,"hunit.utils.CTypeClassFieldsUtils.isTest","hunit/utils/CTypeClassFieldUtils.hx",21,0xe1e21feb)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(23)
	int tmp = HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c").length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"), hx::paccDynamic )((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = (tmp1 == HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	if ((tmp2)){
		HX_STACK_LINE(24)
		return true;
	}
	else{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		cpp::ArrayBase _g1 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			if ((tmp4)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			Dynamic meta = tmp5;		HX_STACK_VAR(meta,"meta");
			HX_STACK_LINE(27)
			++(_g);
			HX_STACK_LINE(29)
			bool tmp6 = (meta->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			if ((tmp6)){
				HX_STACK_LINE(30)
				return true;
			}
		}
	}
	HX_STACK_LINE(35)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CTypeClassFieldsUtils_obj,isTest,return )

bool CTypeClassFieldsUtils_obj::mIsTest( Dynamic field){
	HX_STACK_FRAME("hunit.utils.CTypeClassFieldsUtils","mIsTest",0x9c1f2719,"hunit.utils.CTypeClassFieldsUtils.mIsTest","hunit/utils/CTypeClassFieldUtils.hx",44,0xe1e21feb)
	HX_STACK_ARG(field,"field")
	HX_STACK_LINE(46)
	int tmp = HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c").length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::String tmp1 = field->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"), hx::paccDynamic )((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = (tmp1 == HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	if ((tmp2)){
		HX_STACK_LINE(47)
		return true;
	}
	else{
		HX_STACK_LINE(50)
		bool tmp3 = field->__Field(HX_HCSTRING("meta","\xc5","\x4a","\x59","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"), hx::paccDynamic )(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		return tmp3;
	}
	HX_STACK_LINE(53)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CTypeClassFieldsUtils_obj,mIsTest,return )


CTypeClassFieldsUtils_obj::CTypeClassFieldsUtils_obj()
{
}

bool CTypeClassFieldsUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isTest") ) { outValue = isTest_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mIsTest") ) { outValue = mIsTest_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &CTypeClassFieldsUtils_obj::TEST_INDICATOR,HX_HCSTRING("TEST_INDICATOR","\x42","\xbe","\x75","\x32")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CTypeClassFieldsUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CTypeClassFieldsUtils_obj::TEST_INDICATOR,"TEST_INDICATOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CTypeClassFieldsUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CTypeClassFieldsUtils_obj::TEST_INDICATOR,"TEST_INDICATOR");
};

#endif

hx::Class CTypeClassFieldsUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TEST_INDICATOR","\x42","\xbe","\x75","\x32"),
	HX_HCSTRING("isTest","\x5c","\x8d","\x60","\x6a"),
	HX_HCSTRING("mIsTest","\xa9","\x91","\x98","\x53"),
	::String(null()) };

void CTypeClassFieldsUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.utils.CTypeClassFieldsUtils","\xde","\x05","\x10","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CTypeClassFieldsUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CTypeClassFieldsUtils_obj >;
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

void CTypeClassFieldsUtils_obj::__boot()
{
	TEST_INDICATOR= HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c");
}

} // end namespace hunit
} // end namespace utils
