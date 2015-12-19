#include <hxcpp.h>

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
#ifndef INCLUDED_hunit_TestState
#include <hunit/TestState.h>
#endif
#ifndef INCLUDED_hunit_TestSuite
#include <hunit/TestSuite.h>
#endif
#ifndef INCLUDED_hunit_Utils
#include <hunit/Utils.h>
#endif
#ifndef INCLUDED_hunit_call_Expect
#include <hunit/call/Expect.h>
#endif
#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
#ifndef INCLUDED_hunit_exceptions_ExpectedExceptionData
#include <hunit/exceptions/ExpectedExceptionData.h>
#endif
#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_NoExpectedException
#include <hunit/exceptions/NoExpectedException.h>
#endif
#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
#ifndef INCLUDED_hunit_report_DefaultWriter
#include <hunit/report/DefaultWriter.h>
#endif
#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif
#ifndef INCLUDED_hunit_report_TestReport
#include <hunit/report/TestReport.h>
#endif
#ifndef INCLUDED_hunit_utils_TestCaseData
#include <hunit/utils/TestCaseData.h>
#endif
#ifndef INCLUDED_hunit_warnings_IncompleteTestWarning
#include <hunit/warnings/IncompleteTestWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_NoAssertionsWarning
#include <hunit/warnings/NoAssertionsWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_NoTestsWarning
#include <hunit/warnings/NoTestsWarning.h>
#endif
#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
namespace hunit{

Void TestSuite_obj::__construct(::hunit::report::IReportWriter reportWriter,Dynamic printer)
{
HX_STACK_FRAME("hunit.TestSuite","new",0x013dc7d6,"hunit.TestSuite.new","hunit/TestSuite.hx",36,0xffbb01db)
HX_STACK_THIS(this)
HX_STACK_ARG(reportWriter,"reportWriter")
HX_STACK_ARG(printer,"printer")
{
	HX_STACK_LINE(39)
	this->shutDownStandaloneFlashPlayer = false;
	HX_STACK_LINE(71)
	this->groups = Array_obj< ::String >::__new();
	HX_STACK_LINE(72)
	this->excludeGroups = Array_obj< ::String >::__new();
	HX_STACK_LINE(74)
	this->exclude = Array_obj< ::String >::__new();
	HX_STACK_LINE(76)
	bool tmp = (printer == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	if ((tmp)){
		HX_STACK_LINE(77)
		Dynamic tmp1 = ::hunit::Utils_obj::print_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		printer = tmp1;
	}
	HX_STACK_LINE(80)
	this->printer = printer;
	HX_STACK_LINE(82)
	bool tmp1 = (reportWriter == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		::hunit::report::DefaultWriter tmp2 = ::hunit::report::DefaultWriter_obj::__new(printer);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		reportWriter = tmp2;
	}
	HX_STACK_LINE(85)
	this->reportWriter = reportWriter;
	HX_STACK_LINE(87)
	this->cases = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(88)
	::hunit::report::TestReport tmp2 = this->createReport();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	this->report = tmp2;
}
;
	return null();
}

//TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hx::ObjectPtr< TestSuite_obj > TestSuite_obj::__new(::hunit::report::IReportWriter reportWriter,Dynamic printer)
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct(reportWriter,printer);
	return _result_;}

Dynamic TestSuite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestSuite_obj > _result_ = new TestSuite_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void TestSuite_obj::add( ::hunit::TestCase testCase){
{
		HX_STACK_FRAME("hunit.TestSuite","add",0x0133e997,"hunit.TestSuite.add","hunit/TestSuite.hx",109,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_LINE(110)
		::hunit::TestCase tmp = testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		this->cases->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestSuite_obj,add,(void))

Void TestSuite_obj::run( ){
{
		HX_STACK_FRAME("hunit.TestSuite","run",0x0140dec1,"hunit.TestSuite.run","hunit/TestSuite.hx",119,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		int tmp = this->cases->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(121)
			this->printer(HX_HCSTRING("\nNo test cases added to test suite.\n\n","\x15","\xb9","\x4e","\x20"));
			HX_STACK_LINE(122)
			return null();
		}
		HX_STACK_LINE(125)
		this->redirectTraces();
		HX_STACK_LINE(126)
		Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		::hunit::report::TestReport tmp3 = this->report;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		tmp3->startTime = tmp2;
		HX_STACK_LINE(128)
		this->printHeader();
		HX_STACK_LINE(130)
		int total = (int)1;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Array< ::Dynamic > _g1 = ::hunit::Utils_obj::filterCases(this->cases,this->exclude);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(131)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(131)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				if ((tmp5)){
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(131)
				::hunit::TestCase tmp6 = _g1->__get(_g).StaticCast< ::hunit::TestCase >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				::hunit::TestCase testCase = tmp6;		HX_STACK_VAR(testCase,"testCase");
				HX_STACK_LINE(131)
				++(_g);
				HX_STACK_LINE(132)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(133)
					::hunit::utils::TestCaseData tmp7 = ::hunit::utils::TestCaseData_obj::__new(testCase);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(133)
					::hunit::utils::TestCaseData data = tmp7;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(135)
					::hunit::TestCase tmp8 = testCase;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					::hunit::utils::TestCaseData tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					this->onCaseBegin(tmp8,tmp9);
					HX_STACK_LINE(137)
					int tmp10 = data->get_totalTestCount();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					if ((tmp11)){
						HX_STACK_LINE(138)
						::hunit::TestCase tmp12 = testCase;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(138)
						::hx::Class tmp13 = ::Type_obj::getClass(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(138)
						::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(138)
						::String cls = tmp14;		HX_STACK_VAR(cls,"cls");
						HX_STACK_LINE(139)
						::hunit::report::TestReport tmp15 = this->report;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(139)
						::hunit::TestCase tmp16 = testCase;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(139)
						::String tmp17 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + cls);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(139)
						::String tmp18 = (tmp17 + HX_HCSTRING(" does not contain any tests.","\x01","\xea","\x69","\xfb"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(139)
						::hunit::warnings::NoTestsWarning tmp19 = ::hunit::warnings::NoTestsWarning_obj::__new(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(139)
						tmp15->addWarning(tmp16,HX_HCSTRING("<none>","\xca","\xf4","\x2f","\x9d"),tmp19);
					}
					else{
						HX_STACK_LINE(142)
						cpp::ArrayBase runQueue = data->getTests(this->groups,this->excludeGroups);		HX_STACK_VAR(runQueue,"runQueue");
						HX_STACK_LINE(144)
						while((true)){
							HX_STACK_LINE(144)
							bool tmp12 = (runQueue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(144)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(144)
							if ((tmp13)){
								HX_STACK_LINE(144)
								break;
							}
							HX_STACK_LINE(145)
							Dynamic tmp14 = runQueue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(145)
							Dynamic test = tmp14;		HX_STACK_VAR(test,"test");
							HX_STACK_LINE(147)
							int tmp15 = hx::Mod(total,(int)80);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(147)
							bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(147)
							if ((tmp16)){
								HX_STACK_LINE(147)
								this->another80Tests();
							}
							HX_STACK_LINE(149)
							::hunit::TestCase tmp17 = testCase;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(149)
							Dynamic tmp18 = test;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(149)
							bool tmp19 = this->executeTest(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							bool passed = tmp19;		HX_STACK_VAR(passed,"passed");
							HX_STACK_LINE(150)
							bool tmp20 = passed;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(150)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(150)
							if ((tmp21)){
								HX_STACK_LINE(151)
								::hunit::TestCase tmp22 = testCase;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(151)
								Dynamic tmp23 = test;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(151)
								runQueue = this->skipDependent(tmp22,tmp23,runQueue);
							}
							HX_STACK_LINE(154)
							(total)++;
						}
					}
					HX_STACK_LINE(158)
					::hunit::TestCase tmp12 = testCase;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(158)
					this->onCaseEnd(tmp12);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(160)
							this->printer(HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
							HX_STACK_LINE(161)
							::hunit::report::TestReport tmp7 = this->report;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(161)
							::hunit::TestCase tmp8 = testCase;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(161)
							Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(161)
							Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("TestSuite.hx","\x98","\xf9","\xeb","\xf6"),161,HX_HCSTRING("hunit.TestSuite","\xe4","\xe4","\x63","\x51"),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(161)
							::Exception tmp11 = ::Exception_obj::wrap(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(161)
							tmp7->addFail(tmp8,HX_HCSTRING("<none>","\xca","\xf4","\x2f","\x9d"),tmp11);
						}
					}
				}
			}
		}
		HX_STACK_LINE(164)
		::hunit::report::TestReport tmp4 = this->report;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		Float tmp5 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		tmp4->set_endTime(tmp5);
		HX_STACK_LINE(166)
		this->printer(HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));
		HX_STACK_LINE(168)
		::hunit::report::TestReport tmp6 = this->report;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		tmp6->output();
		HX_STACK_LINE(169)
		this->printSummary();
		HX_STACK_LINE(171)
		this->restoreOriginalTrace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,run,(void))

::hunit::report::TestReport TestSuite_obj::createReport( ){
	HX_STACK_FRAME("hunit.TestSuite","createReport",0xbecbe69a,"hunit.TestSuite.createReport","hunit/TestSuite.hx",186,0xffbb01db)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	::hunit::report::IReportWriter tmp = this->reportWriter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	::hunit::report::TestReport tmp1 = ::hunit::report::TestReport_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,createReport,return )

::hunit::TestState TestSuite_obj::createTestState( ::hunit::TestCase testCase,::String testName){
	HX_STACK_FRAME("hunit.TestSuite","createTestState",0x083cbe39,"hunit.TestSuite.createTestState","hunit/TestSuite.hx",196,0xffbb01db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCase,"testCase")
	HX_STACK_ARG(testName,"testName")
	HX_STACK_LINE(197)
	::hunit::TestCase tmp = testCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::String tmp1 = testName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	::hunit::report::TestReport tmp2 = this->report;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	Dynamic tmp3 = this->printer_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	::hunit::TestState tmp4 = ::hunit::TestState_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,createTestState,return )

Void TestSuite_obj::redirectTraces( ){
{
		HX_STACK_FRAME("hunit.TestSuite","redirectTraces",0xd18ebed4,"hunit.TestSuite.redirectTraces","hunit/TestSuite.hx",206,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		this->originalTrace = tmp;
		HX_STACK_LINE(208)
		Dynamic tmp1 = ::hunit::Utils_obj::printTrace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		Dynamic tmp2 = this->printer_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(208)
			Dynamic a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Dynamic,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Dynamic a2,Dynamic a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","hunit/TestSuite.hx",208,0xffbb01db)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(208)
					Dynamic tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(208)
					Dynamic tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(208)
					Dynamic tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(208)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(208)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(208)
		::haxe::Log_obj::trace = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,redirectTraces,(void))

Void TestSuite_obj::restoreOriginalTrace( ){
{
		HX_STACK_FRAME("hunit.TestSuite","restoreOriginalTrace",0xbc2bb810,"hunit.TestSuite.restoreOriginalTrace","hunit/TestSuite.hx",217,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		Dynamic tmp = this->originalTrace_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		::haxe::Log_obj::trace = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,restoreOriginalTrace,(void))

Void TestSuite_obj::onCaseBegin( ::hunit::TestCase testCase,::hunit::utils::TestCaseData data){
{
		HX_STACK_FRAME("hunit.TestSuite","onCaseBegin",0x6eee3db0,"hunit.TestSuite.onCaseBegin","hunit/TestSuite.hx",227,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(228)
		::hunit::report::TestReport tmp = this->report;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		::hunit::TestCase tmp1 = testCase;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		tmp->cases->add(tmp1);
		HX_STACK_LINE(229)
		testCase->setupTestCase();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,onCaseBegin,(void))

Void TestSuite_obj::onCaseEnd( ::hunit::TestCase testCase){
{
		HX_STACK_FRAME("hunit.TestSuite","onCaseEnd",0xa54397a2,"hunit.TestSuite.onCaseEnd","hunit/TestSuite.hx",239,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_LINE(239)
		testCase->tearDownTestCase();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestSuite_obj,onCaseEnd,(void))

bool TestSuite_obj::executeTest( ::hunit::TestCase testCase,Dynamic test){
	HX_STACK_FRAME("hunit.TestSuite","executeTest",0xcde91a9d,"hunit.TestSuite.executeTest","hunit/TestSuite.hx",248,0xffbb01db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCase,"testCase")
	HX_STACK_ARG(test,"test")
	HX_STACK_LINE(249)
	this->executeTestCallStack = ::haxe::CallStack_obj::callStack();
	HX_STACK_LINE(251)
	::hunit::TestCase tmp = testCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	::String tmp1 = test->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	this->beforeTestStart(tmp,tmp1);
	HX_STACK_LINE(252)
	testCase->setup();
	HX_STACK_LINE(254)
	bool passed = false;		HX_STACK_VAR(passed,"passed");
	HX_STACK_LINE(256)
	try
	{
	HX_STACK_CATCHABLE(::Exception, 0);
	{
		HX_STACK_LINE(258)
		bool tmp2 = test->__Field(HX_HCSTRING("isIncomplete","\x28","\x72","\x2d","\xd4"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		if ((tmp2)){
			HX_STACK_LINE(259)
			::hunit::TestState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			::hunit::warnings::IncompleteTestWarning tmp4 = ::hunit::warnings::IncompleteTestWarning_obj::__new(test->__Field(HX_HCSTRING("incompleteMsg","\x43","\xdf","\xef","\xe3"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			tmp3->warn(tmp4);
		}
		else{
			HX_STACK_LINE(261)
			try
			{
			HX_STACK_CATCHABLE(::hunit::exceptions::TestFailException, 0);
			HX_STACK_CATCHABLE(Dynamic, 1);
			{
				HX_STACK_LINE(262)
				::hunit::TestCase tmp3 = testCase;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(262)
				Dynamic tmp4 = test->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(262)
				::Reflect_obj::callMethod(tmp3,tmp4,cpp::ArrayBase_obj::__new());
				HX_STACK_LINE(263)
				Dynamic tmp5 = test;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(263)
				this->validateTest(tmp5,null(),null());
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hunit::exceptions::TestFailException >() ){
					HX_STACK_BEGIN_CATCH
					::hunit::exceptions::TestFailException e = __e;{
						HX_STACK_LINE(265)
						::hunit::exceptions::TestFailException tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(265)
						HX_STACK_DO_THROW(tmp3);
					}
				}
				else {
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(267)
						Dynamic tmp3 = test;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(267)
						Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(267)
						this->validateTest(tmp3,tmp4,::haxe::CallStack_obj::exceptionStack());
					}
				}
			}
		}
		HX_STACK_LINE(271)
		::hunit::TestState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		bool tmp4 = tmp3->warned;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		if ((tmp5)){
			HX_STACK_LINE(272)
			::hunit::TestState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			tmp6->success();
			HX_STACK_LINE(273)
			passed = true;
			HX_STACK_LINE(274)
			this->printer(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(276)
			this->printer(HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(278)
		::hunit::TestState tmp6 = this->state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		tmp6->finalize();
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::Exception >() ){
			HX_STACK_BEGIN_CATCH
			::Exception e = __e;{
				HX_STACK_LINE(281)
				::hunit::TestState tmp2 = this->state;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(281)
				::Exception tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(281)
				tmp2->fail(tmp3);
				HX_STACK_LINE(282)
				::Exception tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(282)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::hunit::exceptions::InvalidTestException >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(282)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(282)
				if ((tmp5)){
					HX_STACK_LINE(282)
					tmp6 = HX_HCSTRING("E","\x45","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(282)
					tmp6 = HX_HCSTRING("F","\x46","\x00","\x00","\x00");
				}
				HX_STACK_LINE(282)
				this->printer(tmp6);
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(285)
	testCase->tearDown();
	HX_STACK_LINE(286)
	::hunit::TestCase tmp2 = testCase;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(286)
	this->afterTestDone(tmp2);
	HX_STACK_LINE(288)
	bool tmp3 = passed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(288)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,executeTest,return )

Void TestSuite_obj::beforeTestStart( ::hunit::TestCase testCase,::String test){
{
		HX_STACK_FRAME("hunit.TestSuite","beforeTestStart",0x6cef86a7,"hunit.TestSuite.beforeTestStart","hunit/TestSuite.hx",297,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_ARG(test,"test")
		HX_STACK_LINE(298)
		::hunit::TestCase tmp = testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		::String tmp1 = test;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		::hunit::TestState tmp2 = this->createTestState(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		this->state = tmp2;
		HX_STACK_LINE(299)
		::hunit::TestState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		testCase->__hu_state = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestSuite_obj,beforeTestStart,(void))

Void TestSuite_obj::afterTestDone( ::hunit::TestCase testCase){
{
		HX_STACK_FRAME("hunit.TestSuite","afterTestDone",0x8f5c3b26,"hunit.TestSuite.afterTestDone","hunit/TestSuite.hx",309,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCase,"testCase")
		HX_STACK_LINE(309)
		this->state = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestSuite_obj,afterTestDone,(void))

Void TestSuite_obj::validateTest( Dynamic test,Dynamic exception,Array< ::Dynamic > exceptionStack){
{
		HX_STACK_FRAME("hunit.TestSuite","validateTest",0x36ec31d2,"hunit.TestSuite.validateTest","hunit/TestSuite.hx",322,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(test,"test")
		HX_STACK_ARG(exception,"exception")
		HX_STACK_ARG(exceptionStack,"exceptionStack")
		HX_STACK_LINE(324)
		::hunit::TestState tmp = this->state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		int tmp1 = tmp->pendingExceptions->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		if ((tmp2)){
			HX_STACK_LINE(325)
			::hunit::TestState tmp3 = this->state;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			::Exception tmp4 = tmp3->pendingExceptions->__get((int)0).StaticCast< ::Exception >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(328)
		bool tmp3 = (exception != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		if ((tmp3)){
			HX_STACK_LINE(329)
			::hunit::TestState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			Dynamic tmp5 = exception;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(329)
			tmp4->validateException(tmp5,this->executeTestCallStack,exceptionStack);
		}
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			::hunit::TestState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(tmp4->expectedCalls->h);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(332)
			::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(332)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(332)
				if ((tmp7)){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(332)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(332)
				{
					HX_STACK_LINE(332)
					Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(332)
					_g->val = tmp9;
					HX_STACK_LINE(332)
					Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(332)
					_g->head = tmp10;
					HX_STACK_LINE(332)
					tmp8 = _g->val;
				}
				HX_STACK_LINE(332)
				::hunit::call::Expect expect = ((::hunit::call::Expect)(tmp8));		HX_STACK_VAR(expect,"expect");
				HX_STACK_LINE(333)
				expect->validate();
			}
		}
		HX_STACK_LINE(336)
		::hunit::TestState tmp4 = this->state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		bool tmp5 = tmp4->expectingException();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		if ((tmp5)){
			HX_STACK_LINE(336)
			::hunit::TestState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(336)
			::hunit::TestState tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			bool tmp9 = tmp8->expectedException->satisfied;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(336)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(336)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(336)
			tmp6 = !(tmp11);
		}
		else{
			HX_STACK_LINE(336)
			tmp6 = false;
		}
		HX_STACK_LINE(336)
		if ((tmp6)){
			HX_STACK_LINE(337)
			::hunit::TestState tmp7 = this->state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			::hunit::match::Match tmp8 = tmp7->expectedException->match;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			::hunit::TestState tmp9 = this->state;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(337)
			Dynamic tmp10 = tmp9->expectedException->pos;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(337)
			::hunit::exceptions::NoExpectedException tmp11 = ::hunit::exceptions::NoExpectedException_obj::__new(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(337)
			HX_STACK_DO_THROW(tmp11);
		}
		HX_STACK_LINE(340)
		bool tmp7 = test->__Field(HX_HCSTRING("isIncomplete","\x28","\x72","\x2d","\xd4"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(340)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(340)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(340)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(340)
		if ((tmp9)){
			HX_STACK_LINE(340)
			::hunit::TestState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(340)
			::hunit::TestState tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(340)
			bool tmp13 = tmp12->madeAssertions();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(340)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(340)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(340)
			tmp10 = !(tmp15);
		}
		else{
			HX_STACK_LINE(340)
			tmp10 = false;
		}
		HX_STACK_LINE(340)
		if ((tmp10)){
			HX_STACK_LINE(341)
			::hunit::TestState tmp11 = this->state;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(341)
			::hunit::warnings::NoAssertionsWarning tmp12 = ::hunit::warnings::NoAssertionsWarning_obj::__new(HX_HCSTRING("This test did not perform any assertions","\xde","\x92","\xce","\x44"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(341)
			tmp11->warn(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestSuite_obj,validateTest,(void))

cpp::ArrayBase TestSuite_obj::skipDependent( ::hunit::TestCase testCase,Dynamic failed,cpp::ArrayBase runQueue){
	HX_STACK_FRAME("hunit.TestSuite","skipDependent",0x2f644276,"hunit.TestSuite.skipDependent","hunit/TestSuite.hx",351,0xffbb01db)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCase,"testCase")
	HX_STACK_ARG(failed,"failed")
	HX_STACK_ARG(runQueue,"runQueue")
	HX_STACK_LINE(352)
	Dynamic tmp = failed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	cpp::ArrayBase dependent = ::hunit::utils::TestCaseData_obj::getDependent(tmp,runQueue,null());		HX_STACK_VAR(dependent,"dependent");
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(354)
		while((true)){
			HX_STACK_LINE(354)
			bool tmp1 = (_g < dependent->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			if ((tmp2)){
				HX_STACK_LINE(354)
				break;
			}
			HX_STACK_LINE(354)
			Dynamic tmp3 = dependent->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			Dynamic test = tmp3;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(354)
			++(_g);
			HX_STACK_LINE(355)
			this->printer(HX_HCSTRING("S","\x53","\x00","\x00","\x00"));
			HX_STACK_LINE(356)
			Dynamic tmp4 = test;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(356)
			runQueue->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp4);
			HX_STACK_LINE(357)
			::hunit::report::TestReport tmp5 = this->report;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			::hunit::TestCase tmp6 = testCase;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(357)
			::String tmp7 = test->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			tmp5->addSkip(tmp6,tmp7,test->__Field(HX_HCSTRING("depends","\x87","\x29","\x65","\x60"), hx::paccDynamic ));
		}
	}
	HX_STACK_LINE(360)
	return runQueue;
}


HX_DEFINE_DYNAMIC_FUNC3(TestSuite_obj,skipDependent,return )

::String TestSuite_obj::version( ){
	HX_STACK_FRAME("hunit.TestSuite","version",0x90ebd18e,"hunit.TestSuite.version","hunit/TestSuite.hx",370,0xffbb01db)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	return HX_HCSTRING("0.1.32","\xba","\x89","\x16","\xce");
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,version,return )

Void TestSuite_obj::printHeader( ){
{
		HX_STACK_FRAME("hunit.TestSuite","printHeader",0xddf71310,"hunit.TestSuite.printHeader","hunit/TestSuite.hx",379,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		::String tmp = this->version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		::String tmp1 = (HX_HCSTRING("HUnit ","\xb4","\xd3","\xc6","\x03") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		::String tmp2 = (tmp1 + HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		this->printer(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,printHeader,(void))

Void TestSuite_obj::printSummary( ){
{
		HX_STACK_FRAME("hunit.TestSuite","printSummary",0x781a5443,"hunit.TestSuite.printSummary","hunit/TestSuite.hx",389,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(390)
		::hunit::report::TestReport tmp = this->report;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		::String tmp1 = tmp->getSummary();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		::String tmp2 = (tmp1 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		this->printer(tmp2);
		HX_STACK_LINE(391)
		this->printer(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,printSummary,(void))

Void TestSuite_obj::another80Tests( ){
{
		HX_STACK_FRAME("hunit.TestSuite","another80Tests",0x246fc3b0,"hunit.TestSuite.another80Tests","hunit/TestSuite.hx",402,0xffbb01db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(402)
		this->printer(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestSuite_obj,another80Tests,(void))


TestSuite_obj::TestSuite_obj()
{
}

void TestSuite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestSuite);
	HX_MARK_MEMBER_NAME(shutDownStandaloneFlashPlayer,"shutDownStandaloneFlashPlayer");
	HX_MARK_MEMBER_NAME(report,"report");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(excludeGroups,"excludeGroups");
	HX_MARK_MEMBER_NAME(exclude,"exclude");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(cases,"cases");
	HX_MARK_MEMBER_NAME(originalTrace,"originalTrace");
	HX_MARK_MEMBER_NAME(printer,"printer");
	HX_MARK_MEMBER_NAME(executeTestCallStack,"executeTestCallStack");
	HX_MARK_MEMBER_NAME(reportWriter,"reportWriter");
	HX_MARK_END_CLASS();
}

void TestSuite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shutDownStandaloneFlashPlayer,"shutDownStandaloneFlashPlayer");
	HX_VISIT_MEMBER_NAME(report,"report");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(excludeGroups,"excludeGroups");
	HX_VISIT_MEMBER_NAME(exclude,"exclude");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(cases,"cases");
	HX_VISIT_MEMBER_NAME(originalTrace,"originalTrace");
	HX_VISIT_MEMBER_NAME(printer,"printer");
	HX_VISIT_MEMBER_NAME(executeTestCallStack,"executeTestCallStack");
	HX_VISIT_MEMBER_NAME(reportWriter,"reportWriter");
}

Dynamic TestSuite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"cases") ) { return cases; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { return report; }
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"exclude") ) { return exclude; }
		if (HX_FIELD_EQ(inName,"printer") ) { return printer; }
		if (HX_FIELD_EQ(inName,"version") ) { return version_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onCaseEnd") ) { return onCaseEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCaseBegin") ) { return onCaseBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"executeTest") ) { return executeTest_dyn(); }
		if (HX_FIELD_EQ(inName,"printHeader") ) { return printHeader_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reportWriter") ) { return reportWriter; }
		if (HX_FIELD_EQ(inName,"createReport") ) { return createReport_dyn(); }
		if (HX_FIELD_EQ(inName,"validateTest") ) { return validateTest_dyn(); }
		if (HX_FIELD_EQ(inName,"printSummary") ) { return printSummary_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"excludeGroups") ) { return excludeGroups; }
		if (HX_FIELD_EQ(inName,"originalTrace") ) { return originalTrace; }
		if (HX_FIELD_EQ(inName,"afterTestDone") ) { return afterTestDone_dyn(); }
		if (HX_FIELD_EQ(inName,"skipDependent") ) { return skipDependent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return redirectTraces_dyn(); }
		if (HX_FIELD_EQ(inName,"another80Tests") ) { return another80Tests_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTestState") ) { return createTestState_dyn(); }
		if (HX_FIELD_EQ(inName,"beforeTestStart") ) { return beforeTestStart_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"executeTestCallStack") ) { return executeTestCallStack; }
		if (HX_FIELD_EQ(inName,"restoreOriginalTrace") ) { return restoreOriginalTrace_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"shutDownStandaloneFlashPlayer") ) { return shutDownStandaloneFlashPlayer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestSuite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::hunit::TestState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cases") ) { cases=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { report=inValue.Cast< ::hunit::report::TestReport >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"exclude") ) { exclude=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"printer") ) { printer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reportWriter") ) { reportWriter=inValue.Cast< ::hunit::report::IReportWriter >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"excludeGroups") ) { excludeGroups=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originalTrace") ) { originalTrace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"executeTestCallStack") ) { executeTestCallStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"shutDownStandaloneFlashPlayer") ) { shutDownStandaloneFlashPlayer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestSuite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TestSuite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shutDownStandaloneFlashPlayer","\xd6","\xc2","\xc0","\x47"));
	outFields->push(HX_HCSTRING("report","\xb4","\x3c","\x84","\x06"));
	outFields->push(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"));
	outFields->push(HX_HCSTRING("excludeGroups","\xce","\xf6","\xd8","\xc4"));
	outFields->push(HX_HCSTRING("exclude","\xda","\xbe","\x32","\xab"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"));
	outFields->push(HX_HCSTRING("executeTestCallStack","\xa3","\x87","\x6c","\x8e"));
	outFields->push(HX_HCSTRING("reportWriter","\x87","\x06","\xeb","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TestSuite_obj,shutDownStandaloneFlashPlayer),HX_HCSTRING("shutDownStandaloneFlashPlayer","\xd6","\xc2","\xc0","\x47")},
	{hx::fsObject /*::hunit::report::TestReport*/ ,(int)offsetof(TestSuite_obj,report),HX_HCSTRING("report","\xb4","\x3c","\x84","\x06")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TestSuite_obj,groups),HX_HCSTRING("groups","\x54","\x24","\x28","\x1c")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TestSuite_obj,excludeGroups),HX_HCSTRING("excludeGroups","\xce","\xf6","\xd8","\xc4")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TestSuite_obj,exclude),HX_HCSTRING("exclude","\xda","\xbe","\x32","\xab")},
	{hx::fsObject /*::hunit::TestState*/ ,(int)offsetof(TestSuite_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestSuite_obj,cases),HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestSuite_obj,originalTrace),HX_HCSTRING("originalTrace","\x74","\x84","\x10","\x71")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestSuite_obj,printer),HX_HCSTRING("printer","\xda","\xd5","\x33","\x84")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestSuite_obj,executeTestCallStack),HX_HCSTRING("executeTestCallStack","\xa3","\x87","\x6c","\x8e")},
	{hx::fsObject /*::hunit::report::IReportWriter*/ ,(int)offsetof(TestSuite_obj,reportWriter),HX_HCSTRING("reportWriter","\x87","\x06","\xeb","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shutDownStandaloneFlashPlayer","\xd6","\xc2","\xc0","\x47"),
	HX_HCSTRING("report","\xb4","\x3c","\x84","\x06"),
	HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"),
	HX_HCSTRING("excludeGroups","\xce","\xf6","\xd8","\xc4"),
	HX_HCSTRING("exclude","\xda","\xbe","\x32","\xab"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("cases","\xc3","\xbb","\x20","\x41"),
	HX_HCSTRING("originalTrace","\x74","\x84","\x10","\x71"),
	HX_HCSTRING("printer","\xda","\xd5","\x33","\x84"),
	HX_HCSTRING("executeTestCallStack","\xa3","\x87","\x6c","\x8e"),
	HX_HCSTRING("reportWriter","\x87","\x06","\xeb","\xb8"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("createReport","\xd0","\x7c","\xd9","\x28"),
	HX_HCSTRING("createTestState","\xc3","\x6d","\x02","\xee"),
	HX_HCSTRING("redirectTraces","\x8a","\xce","\xd6","\x0a"),
	HX_HCSTRING("restoreOriginalTrace","\x46","\x74","\xab","\x6d"),
	HX_HCSTRING("onCaseBegin","\x3a","\xe0","\x6e","\xb5"),
	HX_HCSTRING("onCaseEnd","\xac","\xa3","\x21","\x2f"),
	HX_HCSTRING("executeTest","\x27","\xbd","\x69","\x14"),
	HX_HCSTRING("beforeTestStart","\x31","\x36","\xb5","\x52"),
	HX_HCSTRING("afterTestDone","\x30","\x14","\x32","\xf1"),
	HX_HCSTRING("validateTest","\x08","\xc8","\xf9","\xa0"),
	HX_HCSTRING("skipDependent","\x80","\x1b","\x3a","\x91"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("printHeader","\x9a","\xb5","\x77","\x24"),
	HX_HCSTRING("printSummary","\x79","\xea","\x27","\xe2"),
	HX_HCSTRING("another80Tests","\x66","\xd3","\xb7","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestSuite_obj::__mClass,"__mClass");
};

#endif

hx::Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hunit.TestSuite","\xe4","\xe4","\x63","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TestSuite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestSuite_obj >;
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
