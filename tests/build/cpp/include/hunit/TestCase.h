#ifndef INCLUDED_hunit_TestCase
#define INCLUDED_hunit_TestCase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS1(hunit,TestState)
HX_DECLARE_CLASS2(hunit,_assert,AssertFactory)
HX_DECLARE_CLASS2(hunit,match,MatchFactory)
HX_DECLARE_CLASS2(hunit,mock,IMock)
HX_DECLARE_CLASS2(hunit,mock,MockData)
namespace hunit{


class HXCPP_CLASS_ATTRIBUTES  TestCase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestCase_obj OBJ_;
		TestCase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.TestCase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestCase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestCase_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestCase","\x42","\x60","\x9e","\x1e"); }

		static void __boot();
		::hunit::match::MatchFactory match;
		::hunit::_assert::AssertFactory _assert;
		::hunit::TestState __hu_state;
		virtual Void setupTestCase( );
		Dynamic setupTestCase_dyn();

		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void tearDown( );
		Dynamic tearDown_dyn();

		virtual Void tearDownTestCase( );
		Dynamic tearDownTestCase_dyn();

		virtual Void expectException( Dynamic match,Dynamic pos);
		Dynamic expectException_dyn();

		virtual Void notice( ::String msg,Dynamic pos);
		Dynamic notice_dyn();

		virtual ::hunit::match::MatchFactory set_match( ::hunit::match::MatchFactory match);
		Dynamic set_match_dyn();

		virtual ::hunit::_assert::AssertFactory set_assert( ::hunit::_assert::AssertFactory _assert);
		Dynamic set_assert_dyn();

		static ::String __rtti;
		static ::hunit::mock::MockData getMockData( ::hunit::mock::IMock mock);
		static Dynamic getMockData_dyn();

};

} // end namespace hunit

#endif /* INCLUDED_hunit_TestCase */ 
