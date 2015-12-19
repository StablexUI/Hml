#ifndef INCLUDED_SignalValueTest
#define INCLUDED_SignalValueTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
HX_DECLARE_CLASS0(SignalValueTest)
HX_DECLARE_CLASS1(hunit,TestCase)


class HXCPP_CLASS_ATTRIBUTES  SignalValueTest_obj : public ::hunit::TestCase_obj{
	public:
		typedef ::hunit::TestCase_obj super;
		typedef SignalValueTest_obj OBJ_;
		SignalValueTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="SignalValueTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SignalValueTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SignalValueTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SignalValueTest","\xbb","\x2c","\x62","\xa6"); }

		static void __boot();
		virtual Void simple( );
		Dynamic simple_dyn();

		virtual Void closureWithBlockBody( );
		Dynamic closureWithBlockBody_dyn();

		virtual Void closureWithSingleExprBody( );
		Dynamic closureWithSingleExprBody_dyn();

		static Dynamic __meta__;
		static ::String __rtti;
};


#endif /* INCLUDED_SignalValueTest */ 
