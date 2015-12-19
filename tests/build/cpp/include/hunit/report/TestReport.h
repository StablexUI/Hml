#ifndef INCLUDED_hunit_report_TestReport
#define INCLUDED_hunit_report_TestReport

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS2(hunit,report,IReportWriter)
HX_DECLARE_CLASS2(hunit,report,TestReport)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace report{


class HXCPP_CLASS_ATTRIBUTES  TestReport_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestReport_obj OBJ_;
		TestReport_obj();
		Void __construct(::hunit::report::IReportWriter writer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.report.TestReport")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestReport_obj > __new(::hunit::report::IReportWriter writer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestReport_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestReport","\xc6","\x86","\x29","\x16"); }

		Float startTime;
		Float endTime;
		Float spentTime;
		::hunit::report::IReportWriter writer;
		::List cases;
		::List fails;
		::List warnings;
		::List successful;
		::List skipped;
		::List notices;
		int assertionCount;
		virtual Void addFail( ::hunit::TestCase testCase,::String test,::Exception e);
		Dynamic addFail_dyn();

		virtual Void addSuccess( ::hunit::TestCase testCase,::String test);
		Dynamic addSuccess_dyn();

		virtual Void addWarning( ::hunit::TestCase testCase,::String test,::hunit::warnings::Warning warning);
		Dynamic addWarning_dyn();

		virtual Void addSkip( ::hunit::TestCase testCase,::String test,Array< ::String > depends);
		Dynamic addSkip_dyn();

		virtual Void addNotice( ::hunit::TestCase testCase,::String test,::String message,Dynamic pos);
		Dynamic addNotice_dyn();

		virtual Void output( );
		Dynamic output_dyn();

		virtual ::String getSummary( );
		Dynamic getSummary_dyn();

		virtual Float set_endTime( Float endTime);
		Dynamic set_endTime_dyn();

		virtual int get_testCount( );
		Dynamic get_testCount_dyn();

};

} // end namespace hunit
} // end namespace report

#endif /* INCLUDED_hunit_report_TestReport */ 
