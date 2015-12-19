#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif
#ifndef INCLUDED_hunit_report_TestReport
#include <hunit/report/TestReport.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{
namespace report{

Void TestReport_obj::__construct(::hunit::report::IReportWriter writer)
{
HX_STACK_FRAME("hunit.report.TestReport","new",0x0368f230,"hunit.report.TestReport.new","hunit/report/TestReport.hx",19,0x8d0b1d20)
HX_STACK_THIS(this)
HX_STACK_ARG(writer,"writer")
{
	HX_STACK_LINE(45)
	this->assertionCount = (int)0;
	HX_STACK_LINE(26)
	this->spentTime = ((Float)0);
	HX_STACK_LINE(24)
	this->endTime = ((Float)0);
	HX_STACK_LINE(22)
	this->startTime = ((Float)0);
	HX_STACK_LINE(54)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->cases = tmp;
	HX_STACK_LINE(55)
	::List tmp1 = ::List_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	this->fails = tmp1;
	HX_STACK_LINE(56)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	this->warnings = tmp2;
	HX_STACK_LINE(57)
	::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	this->successful = tmp3;
	HX_STACK_LINE(58)
	::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	this->skipped = tmp4;
	HX_STACK_LINE(59)
	::List tmp5 = ::List_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	this->notices = tmp5;
	HX_STACK_LINE(61)
	this->writer = writer;
}
;
	return null();
}

//TestReport_obj::~TestReport_obj() { }

Dynamic TestReport_obj::__CreateEmpty() { return  new TestReport_obj; }
hx::ObjectPtr< TestReport_obj > TestReport_obj::__new(::hunit::report::IReportWriter writer)
{  hx::ObjectPtr< TestReport_obj > _result_ = new TestReport_obj();
	_result_->__construct(writer);
	return _result_;}

Dynamic TestReport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestReport_obj > _result_ = new TestReport_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TestReport_obj::addFail( ::hunit::TestCase testCase,::String test,::Exception e){
{
		HX_STACK_FRAME("hunit.report.TestReport","addFail",0x2e05466f,"hunit.report.TestReport.addFail","hunit/report/TestReport.hx",70,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(71)
		::List tmp = this->fails;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		::String tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::Exception tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( ::Exception &tmp5,::String &tmp4,::String &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/report/TestReport.hx",71,0x8d0b1d20)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36") , tmp3,false);
					__result->Add(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c") , tmp4,false);
					__result->Add(HX_HCSTRING("exception","\x4f","\x10","\x9a","\x49") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		tmp->add(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestReport_obj,addFail,(void))

Void TestReport_obj::addSuccess( ::hunit::TestCase testCase,::String test){
{
		HX_STACK_FRAME("hunit.report.TestReport","addSuccess",0xd31609d2,"hunit.report.TestReport.addSuccess","hunit/report/TestReport.hx",84,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_LINE(85)
		::List tmp = this->successful;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::String tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp4,::String &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/report/TestReport.hx",85,0x8d0b1d20)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36") , tmp3,false);
					__result->Add(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(85)
		Dynamic tmp5 = _Function_1_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		tmp->add(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestReport_obj,addSuccess,(void))

Void TestReport_obj::addWarning( ::hunit::TestCase testCase,::String test,::hunit::warnings::Warning warning){
{
		HX_STACK_FRAME("hunit.report.TestReport","addWarning",0x2493be6b,"hunit.report.TestReport.addWarning","hunit/report/TestReport.hx",97,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_ARG(warning,"warning")
		HX_STACK_LINE(98)
		::List tmp = this->warnings;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		::String tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		::hunit::warnings::Warning tmp5 = warning;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( ::hunit::warnings::Warning &tmp5,::String &tmp4,::String &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/report/TestReport.hx",98,0x8d0b1d20)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36") , tmp3,false);
					__result->Add(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c") , tmp4,false);
					__result->Add(HX_HCSTRING("warning","\x5c","\xda","\xcb","\x09") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp4,tmp3);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		tmp->add(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestReport_obj,addWarning,(void))

Void TestReport_obj::addSkip( ::hunit::TestCase testCase,::String test,Array< ::String > depends){
{
		HX_STACK_FRAME("hunit.report.TestReport","addSkip",0x36a4a310,"hunit.report.TestReport.addSkip","hunit/report/TestReport.hx",111,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_ARG(depends,"depends")
		HX_STACK_LINE(112)
		::List tmp = this->skipped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		::String tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &depends,::String &tmp4,::String &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/report/TestReport.hx",112,0x8d0b1d20)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36") , tmp3,false);
					__result->Add(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c") , tmp4,false);
					__result->Add(HX_HCSTRING("depends","\x87","\x29","\x65","\x60") , depends,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		Dynamic tmp5 = _Function_1_1::Block(depends,tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		tmp->add(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestReport_obj,addSkip,(void))

Void TestReport_obj::addNotice( ::hunit::TestCase testCase,::String test,::String message,Dynamic pos){
{
		HX_STACK_FRAME("hunit.report.TestReport","addNotice",0xf8716ae9,"hunit.report.TestReport.addNotice","hunit/report/TestReport.hx",125,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(126)
		::List tmp = this->notices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		::String tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		Dynamic tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp5,Dynamic &tmp6,::String &tmp4,::String &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hunit/report/TestReport.hx",126,0x8d0b1d20)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("caseName","\x1b","\xd5","\x7f","\x36") , tmp3,false);
					__result->Add(HX_HCSTRING("testName","\xbd","\xf7","\x31","\x4c") , tmp4,false);
					__result->Add(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a") , tmp5,false);
					__result->Add(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00") , tmp6,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(126)
		Dynamic tmp7 = _Function_1_1::Block(tmp5,tmp6,tmp4,tmp3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		tmp->add(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestReport_obj,addNotice,(void))

Void TestReport_obj::output( ){
{
		HX_STACK_FRAME("hunit.report.TestReport","output",0xbe12ef31,"hunit.report.TestReport.output","hunit/report/TestReport.hx",140,0x8d0b1d20)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::hunit::report::IReportWriter tmp = this->writer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		tmp->write(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestReport_obj,output,(void))

::String TestReport_obj::getSummary( ){
	HX_STACK_FRAME("hunit.report.TestReport","getSummary",0x83884960,"hunit.report.TestReport.getSummary","hunit/report/TestReport.hx",150,0x8d0b1d20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	::List tmp = this->fails;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	int failed = tmp->length;		HX_STACK_VAR(failed,"failed");
	HX_STACK_LINE(152)
	::List tmp1 = this->warnings;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	int warned = tmp1->length;		HX_STACK_VAR(warned,"warned");
	HX_STACK_LINE(153)
	int tmp2 = warned;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	::List tmp3 = this->successful;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(153)
	int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	int passed = tmp5;		HX_STACK_VAR(passed,"passed");
	HX_STACK_LINE(154)
	int tmp6 = (failed + passed);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(154)
	int total = tmp6;		HX_STACK_VAR(total,"total");
	HX_STACK_LINE(156)
	bool tmp7 = (failed == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(156)
	::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(156)
	if ((tmp7)){
		HX_STACK_LINE(156)
		tmp8 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(156)
		::String tmp9 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + failed);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		::String tmp10 = (tmp9 + HX_HCSTRING(" failure","\x2a","\xb4","\x48","\x3d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(156)
		bool tmp11 = (failed == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(156)
		if ((tmp11)){
			HX_STACK_LINE(156)
			tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(156)
			tmp12 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
		}
		HX_STACK_LINE(156)
		tmp8 = (tmp10 + tmp12);
	}
	HX_STACK_LINE(156)
	::String failedMsg = tmp8;		HX_STACK_VAR(failedMsg,"failedMsg");
	HX_STACK_LINE(157)
	bool tmp9 = (warned == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(157)
	::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(157)
	if ((tmp9)){
		HX_STACK_LINE(157)
		tmp10 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(157)
		::String tmp11 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + warned);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		::String tmp12 = (tmp11 + HX_HCSTRING(" warning","\x3c","\x1e","\x1a","\x30"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		bool tmp13 = (warned == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(157)
		if ((tmp13)){
			HX_STACK_LINE(157)
			tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(157)
			tmp14 = HX_HCSTRING("s","\x73","\x00","\x00","\x00");
		}
		HX_STACK_LINE(157)
		tmp10 = (tmp12 + tmp14);
	}
	HX_STACK_LINE(157)
	::String warnedMsg = tmp10;		HX_STACK_VAR(warnedMsg,"warnedMsg");
	HX_STACK_LINE(158)
	::List tmp11 = this->skipped;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(158)
	int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(158)
	bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(158)
	::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(158)
	if ((tmp13)){
		HX_STACK_LINE(158)
		tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(158)
		::List tmp15 = this->skipped;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(158)
		int tmp16 = tmp15->length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(158)
		::String tmp17 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(158)
		tmp14 = (tmp17 + HX_HCSTRING(" skipped","\x90","\x5b","\x12","\x5c"));
	}
	HX_STACK_LINE(158)
	::String skippedMsg = tmp14;		HX_STACK_VAR(skippedMsg,"skippedMsg");
	HX_STACK_LINE(160)
	Float tmp15 = this->spentTime;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(160)
	::String tmp16 = (HX_HCSTRING("Time: ","\x13","\x50","\x66","\x53") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(160)
	::String tmp17 = (tmp16 + HX_HCSTRING(" seconds.\n\n","\x6f","\x7b","\x4a","\xb8"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(160)
	::String summary = tmp17;		HX_STACK_VAR(summary,"summary");
	HX_STACK_LINE(161)
	::List tmp18 = this->fails;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(161)
	int tmp19 = tmp18->length;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(161)
	bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(161)
	bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(161)
	bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(161)
	if ((tmp21)){
		HX_STACK_LINE(161)
		::List tmp23 = this->warnings;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(161)
		::List tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(161)
		::List tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(161)
		int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(161)
		tmp22 = (tmp26 == (int)0);
	}
	else{
		HX_STACK_LINE(161)
		tmp22 = false;
	}
	HX_STACK_LINE(161)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(161)
	if ((tmp22)){
		HX_STACK_LINE(161)
		::List tmp24 = this->skipped;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(161)
		::List tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(161)
		int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(161)
		tmp23 = (tmp26 == (int)0);
	}
	else{
		HX_STACK_LINE(161)
		tmp23 = false;
	}
	HX_STACK_LINE(161)
	if ((tmp23)){
		HX_STACK_LINE(162)
		::String tmp24 = (HX_HCSTRING("OK (","\x24","\xe0","\x70","\x34") + total);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(162)
		::String tmp25 = (tmp24 + HX_HCSTRING(" tests, ","\x75","\x64","\x2c","\xe4"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(162)
		int tmp26 = this->assertionCount;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(162)
		::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(162)
		::String tmp28 = (tmp27 + HX_HCSTRING(" assertions)","\x78","\x93","\xbb","\x65"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(162)
		hx::AddEq(summary,tmp28);
	}
	else{
		HX_STACK_LINE(163)
		::List tmp24 = this->fails;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(163)
		int tmp25 = tmp24->length;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(163)
		bool tmp26 = (tmp25 == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(163)
		if ((tmp26)){
			HX_STACK_LINE(164)
			::String tmp27 = (HX_HCSTRING("OK, but with risky tests! (","\x69","\xfc","\xa0","\x98") + total);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(164)
			::String tmp28 = (tmp27 + HX_HCSTRING(" tests, ","\x75","\x64","\x2c","\xe4"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(164)
			int tmp29 = this->assertionCount;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(164)
			::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(164)
			::String tmp31 = (tmp30 + HX_HCSTRING(" assertions","\x91","\x8b","\xfe","\x78"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(164)
			::String tmp32 = warnedMsg;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(164)
			::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(164)
			::String tmp34 = skippedMsg;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(164)
			::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(164)
			::String tmp36 = (tmp35 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(164)
			hx::AddEq(summary,tmp36);
		}
		else{
			HX_STACK_LINE(166)
			::String tmp27 = (HX_HCSTRING("FAILURES! (","\x20","\x7d","\x0a","\xbb") + total);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(166)
			::String tmp28 = (tmp27 + HX_HCSTRING(" tests","\xc1","\x0b","\x01","\xd9"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(166)
			::String tmp29 = failedMsg;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(166)
			::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(166)
			::String tmp31 = warnedMsg;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(166)
			::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(166)
			::String tmp33 = skippedMsg;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(166)
			::String tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(166)
			::String tmp35 = (tmp34 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(166)
			hx::AddEq(summary,tmp35);
		}
	}
	HX_STACK_LINE(169)
	::String tmp24 = summary;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(169)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC0(TestReport_obj,getSummary,return )

Float TestReport_obj::set_endTime( Float endTime){
	HX_STACK_FRAME("hunit.report.TestReport","set_endTime",0xe24c5e7b,"hunit.report.TestReport.set_endTime","hunit/report/TestReport.hx",178,0x8d0b1d20)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endTime,"endTime")
	HX_STACK_LINE(179)
	Float tmp = endTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Float tmp1 = this->startTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	Float tmp3 = (tmp2 * (int)1000);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	Float tmp5 = (Float(tmp4) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	this->spentTime = tmp5;
	HX_STACK_LINE(181)
	Float tmp6 = this->endTime = endTime;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TestReport_obj,set_endTime,return )

int TestReport_obj::get_testCount( ){
	HX_STACK_FRAME("hunit.report.TestReport","get_testCount",0xc4a8dcc4,"hunit.report.TestReport.get_testCount","hunit/report/TestReport.hx",190,0x8d0b1d20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	::List tmp = this->successful;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	::List tmp2 = this->warnings;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	::List tmp5 = this->fails;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(191)
	::List tmp8 = this->skipped;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(191)
	int tmp9 = tmp8->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(191)
	int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(191)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(TestReport_obj,get_testCount,return )


TestReport_obj::TestReport_obj()
{
}

void TestReport_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestReport);
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(endTime,"endTime");
	HX_MARK_MEMBER_NAME(spentTime,"spentTime");
	HX_MARK_MEMBER_NAME(writer,"writer");
	HX_MARK_MEMBER_NAME(cases,"cases");
	HX_MARK_MEMBER_NAME(fails,"fails");
	HX_MARK_MEMBER_NAME(warnings,"warnings");
	HX_MARK_MEMBER_NAME(successful,"successful");
	HX_MARK_MEMBER_NAME(skipped,"skipped");
	HX_MARK_MEMBER_NAME(notices,"notices");
	HX_MARK_MEMBER_NAME(assertionCount,"assertionCount");
	HX_MARK_END_CLASS();
}

void TestReport_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(endTime,"endTime");
	HX_VISIT_MEMBER_NAME(spentTime,"spentTime");
	HX_VISIT_MEMBER_NAME(writer,"writer");
	HX_VISIT_MEMBER_NAME(cases,"cases");
	HX_VISIT_MEMBER_NAME(fails,"fails");
	HX_VISIT_MEMBER_NAME(warnings,"warnings");
	HX_VISIT_MEMBER_NAME(successful,"successful");
	HX_VISIT_MEMBER_NAME(skipped,"skipped");
	HX_VISIT_MEMBER_NAME(notices,"notices");
	HX_VISIT_MEMBER_NAME(assertionCount,"assertionCount");
}

Dynamic TestReport_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cases") ) { return cases; }
		if (HX_FIELD_EQ(inName,"fails") ) { return fails; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"writer") ) { return writer; }
		if (HX_FIELD_EQ(inName,"output") ) { return output_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endTime") ) { return endTime; }
		if (HX_FIELD_EQ(inName,"skipped") ) { return skipped; }
		if (HX_FIELD_EQ(inName,"notices") ) { return notices; }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		if (HX_FIELD_EQ(inName,"addSkip") ) { return addSkip_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"warnings") ) { return warnings; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		if (HX_FIELD_EQ(inName,"spentTime") ) { return spentTime; }
		if (HX_FIELD_EQ(inName,"testCount") ) { if (inCallProp == hx::paccAlways) return get_testCount(); }
		if (HX_FIELD_EQ(inName,"addNotice") ) { return addNotice_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"successful") ) { return successful; }
		if (HX_FIELD_EQ(inName,"addSuccess") ) { return addSuccess_dyn(); }
		if (HX_FIELD_EQ(inName,"addWarning") ) { return addWarning_dyn(); }
		if (HX_FIELD_EQ(inName,"getSummary") ) { return getSummary_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_endTime") ) { return set_endTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_testCount") ) { return get_testCount_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { return assertionCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestReport_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cases") ) { cases=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fails") ) { fails=inValue.Cast< ::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"writer") ) { writer=inValue.Cast< ::hunit::report::IReportWriter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endTime") ) { if (inCallProp == hx::paccAlways) return set_endTime(inValue);endTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipped") ) { skipped=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notices") ) { notices=inValue.Cast< ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"warnings") ) { warnings=inValue.Cast< ::List >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spentTime") ) { spentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"successful") ) { successful=inValue.Cast< ::List >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assertionCount") ) { assertionCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestReport_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TestReport_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f"));
	outFields->push(HX_HCSTRING("spentTime","\x9b","\xe6","\x0e","\x2e"));
	outFields->push(HX_HCSTRING("writer","\xb3","\xd6","\xe5","\x7d"));
	outFields->push(HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"));
	outFields->push(HX_HCSTRING("fails","\xd5","\xe8","\x4c","\xfb"));
	outFields->push(HX_HCSTRING("warnings","\x97","\x36","\x93","\x88"));
	outFields->push(HX_HCSTRING("successful","\x5a","\x62","\x89","\xe2"));
	outFields->push(HX_HCSTRING("skipped","\xb0","\x17","\xc4","\x35"));
	outFields->push(HX_HCSTRING("notices","\x5b","\x3d","\x04","\x50"));
	outFields->push(HX_HCSTRING("testCount","\x1d","\x83","\x65","\x13"));
	outFields->push(HX_HCSTRING("assertionCount","\xad","\x2e","\xc2","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TestReport_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsFloat,(int)offsetof(TestReport_obj,endTime),HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f")},
	{hx::fsFloat,(int)offsetof(TestReport_obj,spentTime),HX_HCSTRING("spentTime","\x9b","\xe6","\x0e","\x2e")},
	{hx::fsObject /*::hunit::report::IReportWriter*/ ,(int)offsetof(TestReport_obj,writer),HX_HCSTRING("writer","\xb3","\xd6","\xe5","\x7d")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,cases),HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,fails),HX_HCSTRING("fails","\xd5","\xe8","\x4c","\xfb")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,warnings),HX_HCSTRING("warnings","\x97","\x36","\x93","\x88")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,successful),HX_HCSTRING("successful","\x5a","\x62","\x89","\xe2")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,skipped),HX_HCSTRING("skipped","\xb0","\x17","\xc4","\x35")},
	{hx::fsObject /*::List*/ ,(int)offsetof(TestReport_obj,notices),HX_HCSTRING("notices","\x5b","\x3d","\x04","\x50")},
	{hx::fsInt,(int)offsetof(TestReport_obj,assertionCount),HX_HCSTRING("assertionCount","\xad","\x2e","\xc2","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("endTime","\x88","\x85","\x21","\x2f"),
	HX_HCSTRING("spentTime","\x9b","\xe6","\x0e","\x2e"),
	HX_HCSTRING("writer","\xb3","\xd6","\xe5","\x7d"),
	HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"),
	HX_HCSTRING("fails","\xd5","\xe8","\x4c","\xfb"),
	HX_HCSTRING("warnings","\x97","\x36","\x93","\x88"),
	HX_HCSTRING("successful","\x5a","\x62","\x89","\xe2"),
	HX_HCSTRING("skipped","\xb0","\x17","\xc4","\x35"),
	HX_HCSTRING("notices","\x5b","\x3d","\x04","\x50"),
	HX_HCSTRING("assertionCount","\xad","\x2e","\xc2","\x06"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addSuccess","\xa2","\x51","\xd8","\x1f"),
	HX_HCSTRING("addWarning","\x3b","\x06","\x56","\x71"),
	HX_HCSTRING("addSkip","\x40","\x59","\x92","\x88"),
	HX_HCSTRING("addNotice","\x19","\x0d","\xdd","\xe9"),
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("getSummary","\x30","\x91","\x4a","\xd0"),
	HX_HCSTRING("set_endTime","\xab","\xec","\x88","\xbf"),
	HX_HCSTRING("get_testCount","\xf4","\x56","\xc9","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestReport_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestReport_obj::__mClass,"__mClass");
};

#endif

hx::Class TestReport_obj::__mClass;

void TestReport_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.report.TestReport","\x3e","\x5a","\xa0","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TestReport_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestReport_obj >;
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

} // end namespace hunit
} // end namespace report
