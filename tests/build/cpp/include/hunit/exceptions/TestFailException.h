#ifndef INCLUDED_hunit_exceptions_TestFailException
#define INCLUDED_hunit_exceptions_TestFailException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,TestFailException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  TestFailException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef TestFailException_obj OBJ_;
		TestFailException_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.TestFailException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestFailException_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestFailException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TestFailException","\xbf","\x06","\xd0","\x93"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_TestFailException */ 
