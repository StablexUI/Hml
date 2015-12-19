#ifndef INCLUDED_MetricValueTest
#define INCLUDED_MetricValueTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
HX_DECLARE_CLASS0(MetricValueTest)
HX_DECLARE_CLASS1(hunit,TestCase)


class HXCPP_CLASS_ATTRIBUTES  MetricValueTest_obj : public ::hunit::TestCase_obj{
	public:
		typedef ::hunit::TestCase_obj super;
		typedef MetricValueTest_obj OBJ_;
		MetricValueTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MetricValueTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MetricValueTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MetricValueTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MetricValueTest","\xf3","\x59","\xe0","\xf3"); }

		static void __boot();
		virtual Void dip( );
		Dynamic dip_dyn();

		virtual Void pixel( );
		Dynamic pixel_dyn();

		virtual Void pct( );
		Dynamic pct_dyn();

		static Dynamic __meta__;
		static ::String __rtti;
};


#endif /* INCLUDED_MetricValueTest */ 
