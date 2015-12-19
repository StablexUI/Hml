#ifndef INCLUDED_hunit_TestState
#define INCLUDED_hunit_TestState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS1(hunit,TestState)
HX_DECLARE_CLASS2(hunit,call,Call)
HX_DECLARE_CLASS2(hunit,exceptions,ExpectedExceptionData)
HX_DECLARE_CLASS2(hunit,report,TestReport)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{


class HXCPP_CLASS_ATTRIBUTES  TestState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestState_obj OBJ_;
		TestState_obj();
		Void __construct(::hunit::TestCase testCase,::String testName,::hunit::report::TestReport report,Dynamic print);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.TestState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestState_obj > __new(::hunit::TestCase testCase,::String testName,::hunit::report::TestReport report,Dynamic print);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestState","\x3f","\x94","\xe0","\xee"); }

		::hunit::TestCase testCase;
		::String testName;
		::hunit::report::TestReport report;
		::hunit::exceptions::ExpectedExceptionData expectedException;
		Dynamic print;
		Dynamic &print_dyn() { return print;}
		bool warned;
		::List expectedCalls;
		::List asserted;
		Array< ::Dynamic > pendingExceptions;
		Array< ::Dynamic > callExceptions;
		virtual bool expectingException( );
		Dynamic expectingException_dyn();

		virtual Void validateException( Dynamic e,Array< ::Dynamic > catchExceptionStack,Array< ::Dynamic > exceptionStack);
		Dynamic validateException_dyn();

		virtual Void success( );
		Dynamic success_dyn();

		virtual Void warn( ::hunit::warnings::Warning warning);
		Dynamic warn_dyn();

		virtual Void fail( ::Exception exception);
		Dynamic fail_dyn();

		virtual Void notice( ::String msg,Dynamic pos);
		Dynamic notice_dyn();

		virtual Void pendingFail( ::Exception exception);
		Dynamic pendingFail_dyn();

		virtual Void cacheCallException( ::hunit::call::Call call);
		Dynamic cacheCallException_dyn();

		virtual Array< ::Dynamic > getOriginalExceptionStack( Dynamic e,Array< ::Dynamic > catchExceptionStack,Array< ::Dynamic > exceptionStack);
		Dynamic getOriginalExceptionStack_dyn();

		virtual bool madeAssertions( );
		Dynamic madeAssertions_dyn();

		virtual Void finalize( );
		Dynamic finalize_dyn();

		virtual ::hunit::exceptions::ExpectedExceptionData set_expectedException( ::hunit::exceptions::ExpectedExceptionData expectedException);
		Dynamic set_expectedException_dyn();

};

} // end namespace hunit

#endif /* INCLUDED_hunit_TestState */ 
