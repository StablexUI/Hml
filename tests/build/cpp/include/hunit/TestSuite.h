#ifndef INCLUDED_hunit_TestSuite
#define INCLUDED_hunit_TestSuite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS1(hunit,TestState)
HX_DECLARE_CLASS1(hunit,TestSuite)
HX_DECLARE_CLASS2(hunit,report,IReportWriter)
HX_DECLARE_CLASS2(hunit,report,TestReport)
HX_DECLARE_CLASS2(hunit,utils,TestCaseData)
namespace hunit{


class HXCPP_CLASS_ATTRIBUTES  TestSuite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestSuite_obj OBJ_;
		TestSuite_obj();
		Void __construct(::hunit::report::IReportWriter reportWriter,Dynamic printer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.TestSuite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestSuite_obj > __new(::hunit::report::IReportWriter reportWriter,Dynamic printer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestSuite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestSuite","\xe6","\xdc","\x8f","\xef"); }

		bool shutDownStandaloneFlashPlayer;
		::hunit::report::TestReport report;
		Array< ::String > groups;
		Array< ::String > excludeGroups;
		Array< ::String > exclude;
		::hunit::TestState state;
		Array< ::Dynamic > cases;
		Dynamic originalTrace;
		Dynamic &originalTrace_dyn() { return originalTrace;}
		Dynamic printer;
		Dynamic &printer_dyn() { return printer;}
		Array< ::Dynamic > executeTestCallStack;
		::hunit::report::IReportWriter reportWriter;
		virtual Void add( ::hunit::TestCase testCase);
		Dynamic add_dyn();

		virtual Void run( );
		Dynamic run_dyn();

		virtual ::hunit::report::TestReport createReport( );
		Dynamic createReport_dyn();

		virtual ::hunit::TestState createTestState( ::hunit::TestCase testCase,::String testName);
		Dynamic createTestState_dyn();

		virtual Void redirectTraces( );
		Dynamic redirectTraces_dyn();

		virtual Void restoreOriginalTrace( );
		Dynamic restoreOriginalTrace_dyn();

		virtual Void onCaseBegin( ::hunit::TestCase testCase,::hunit::utils::TestCaseData data);
		Dynamic onCaseBegin_dyn();

		virtual Void onCaseEnd( ::hunit::TestCase testCase);
		Dynamic onCaseEnd_dyn();

		virtual bool executeTest( ::hunit::TestCase testCase,Dynamic test);
		Dynamic executeTest_dyn();

		virtual Void beforeTestStart( ::hunit::TestCase testCase,::String test);
		Dynamic beforeTestStart_dyn();

		virtual Void afterTestDone( ::hunit::TestCase testCase);
		Dynamic afterTestDone_dyn();

		virtual Void validateTest( Dynamic test,Dynamic exception,Array< ::Dynamic > exceptionStack);
		Dynamic validateTest_dyn();

		virtual cpp::ArrayBase skipDependent( ::hunit::TestCase testCase,Dynamic failed,cpp::ArrayBase runQueue);
		Dynamic skipDependent_dyn();

		virtual ::String version( );
		Dynamic version_dyn();

		virtual Void printHeader( );
		Dynamic printHeader_dyn();

		virtual Void printSummary( );
		Dynamic printSummary_dyn();

		virtual Void another80Tests( );
		Dynamic another80Tests_dyn();

};

} // end namespace hunit

#endif /* INCLUDED_hunit_TestSuite */ 
