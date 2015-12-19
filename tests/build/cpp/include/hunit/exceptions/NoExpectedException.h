#ifndef INCLUDED_hunit_exceptions_NoExpectedException
#define INCLUDED_hunit_exceptions_NoExpectedException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,NoExpectedException)
HX_DECLARE_CLASS2(hunit,exceptions,TestFailException)
HX_DECLARE_CLASS2(hunit,match,Match)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  NoExpectedException_obj : public ::hunit::exceptions::TestFailException_obj{
	public:
		typedef ::hunit::exceptions::TestFailException_obj super;
		typedef NoExpectedException_obj OBJ_;
		NoExpectedException_obj();
		Void __construct(::hunit::match::Match exceptionMatch,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.NoExpectedException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NoExpectedException_obj > __new(::hunit::match::Match exceptionMatch,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoExpectedException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NoExpectedException","\x16","\xb1","\x85","\xce"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_NoExpectedException */ 
