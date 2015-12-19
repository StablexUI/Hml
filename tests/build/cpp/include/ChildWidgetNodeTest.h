#ifndef INCLUDED_ChildWidgetNodeTest
#define INCLUDED_ChildWidgetNodeTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_TestCase
#include <hunit/TestCase.h>
#endif
HX_DECLARE_CLASS0(ChildWidgetNodeTest)
HX_DECLARE_CLASS1(hunit,TestCase)


class HXCPP_CLASS_ATTRIBUTES  ChildWidgetNodeTest_obj : public ::hunit::TestCase_obj{
	public:
		typedef ::hunit::TestCase_obj super;
		typedef ChildWidgetNodeTest_obj OBJ_;
		ChildWidgetNodeTest_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ChildWidgetNodeTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ChildWidgetNodeTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ChildWidgetNodeTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ChildWidgetNodeTest","\xf4","\xc5","\xae","\x4b"); }

		static void __boot();
		virtual Void childWidgetNode( );
		Dynamic childWidgetNode_dyn();

		static Dynamic __meta__;
		static ::String __rtti;
};


#endif /* INCLUDED_ChildWidgetNodeTest */ 
