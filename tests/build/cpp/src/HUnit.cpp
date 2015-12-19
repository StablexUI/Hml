#include <hxcpp.h>

#ifndef INCLUDED_ChildWidgetNodeTest
#include <ChildWidgetNodeTest.h>
#endif
#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_HUnit
#include <HUnit.h>
#endif
#ifndef INCLUDED_MetricValueTest
#include <MetricValueTest.h>
#endif
#ifndef INCLUDED_SignalValueTest
#include <SignalValueTest.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_TestSuite
#include <hunit/TestSuite.h>
#endif
#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif

Void HUnit_obj::__construct()
{
	return null();
}

//HUnit_obj::~HUnit_obj() { }

Dynamic HUnit_obj::__CreateEmpty() { return  new HUnit_obj; }
hx::ObjectPtr< HUnit_obj > HUnit_obj::__new()
{  hx::ObjectPtr< HUnit_obj > _result_ = new HUnit_obj();
	_result_->__construct();
	return _result_;}

Dynamic HUnit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HUnit_obj > _result_ = new HUnit_obj();
	_result_->__construct();
	return _result_;}

Void HUnit_obj::main( ){
{
		HX_STACK_FRAME("HUnit","main",0xe73f14fb,"HUnit.main","HUnit.hx",24,0xa1f52352)
		HX_STACK_LINE(25)
		Dynamic tmp = ::HUnit_obj::processExceptionStack_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		::Exception_obj::processCallStackOnCreation = tmp;
		HX_STACK_LINE(27)
		::hunit::TestSuite tmp1 = ::hunit::TestSuite_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::hunit::TestSuite suite = tmp1;		HX_STACK_VAR(suite,"suite");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(61)
			::SignalValueTest tmp2 = ::SignalValueTest_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			suite->add(tmp2);
			HX_STACK_LINE(61)
			::MetricValueTest tmp3 = ::MetricValueTest_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			suite->add(tmp3);
			HX_STACK_LINE(61)
			::ChildWidgetNodeTest tmp4 = ::ChildWidgetNodeTest_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			suite->add(tmp4);
		}
		HX_STACK_LINE(29)
		suite->run();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HUnit_obj,main,(void))

Array< ::Dynamic > HUnit_obj::processExceptionStack( Array< ::Dynamic > stack){
	HX_STACK_FRAME("HUnit","processExceptionStack",0x55c2ec46,"HUnit.processExceptionStack","HUnit.hx",52,0xa1f52352)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(54)
	int count = (int)4;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(63)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return stack->slice((int)0,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HUnit_obj,processExceptionStack,return )


HUnit_obj::HUnit_obj()
{
}

bool HUnit_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"processExceptionStack") ) { outValue = processExceptionStack_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class HUnit_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("processExceptionStack","\x48","\x43","\xa8","\x68"),
	::String(null()) };

void HUnit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("HUnit","\xec","\xba","\x5c","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HUnit_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HUnit_obj >;
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

