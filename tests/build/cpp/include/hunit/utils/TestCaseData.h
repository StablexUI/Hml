#ifndef INCLUDED_hunit_utils_TestCaseData
#define INCLUDED_hunit_utils_TestCaseData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS2(hunit,utils,TestCaseData)
namespace hunit{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  TestCaseData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestCaseData_obj OBJ_;
		TestCaseData_obj();
		Void __construct(::hunit::TestCase testCase);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.utils.TestCaseData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestCaseData_obj > __new(::hunit::TestCase testCase);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestCaseData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TestCaseData","\x8c","\x2b","\xfd","\x6a"); }

		::hunit::TestCase testCase;
		Dynamic rtti;
		cpp::ArrayBase tests;
		Array< ::String > defaultGroups;
		virtual cpp::ArrayBase getTests( Array< ::String > groups,Array< ::String > excludeGroups);
		Dynamic getTests_dyn();

		virtual Void processTestCaseRttiMeta( );
		Dynamic processTestCaseRttiMeta_dyn();

		virtual Void gatherTestData( );
		Dynamic gatherTestData_dyn();

		virtual Dynamic getTestData( Dynamic field);
		Dynamic getTestData_dyn();

		virtual bool testIsInGroups( Dynamic test,Array< ::String > groups);
		Dynamic testIsInGroups_dyn();

		virtual ::String get_className( );
		Dynamic get_className_dyn();

		virtual ::String get_file( );
		Dynamic get_file_dyn();

		virtual int get_totalTestCount( );
		Dynamic get_totalTestCount_dyn();

		virtual ::hunit::TestCase set_testCase( ::hunit::TestCase value);
		Dynamic set_testCase_dyn();

		static cpp::ArrayBase getDependent( Dynamic test,cpp::ArrayBase list,cpp::ArrayBase dependencyStack);
		static Dynamic getDependent_dyn();

		static cpp::ArrayBase sortByDependencies( cpp::ArrayBase list);
		static Dynamic sortByDependencies_dyn();

};

} // end namespace hunit
} // end namespace utils

#endif /* INCLUDED_hunit_utils_TestCaseData */ 
