#ifndef INCLUDED_hunit_exceptions_AssertException
#define INCLUDED_hunit_exceptions_AssertException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,AssertException)
HX_DECLARE_CLASS2(hunit,exceptions,TestFailException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  AssertException_obj : public ::hunit::exceptions::TestFailException_obj{
	public:
		typedef ::hunit::exceptions::TestFailException_obj super;
		typedef AssertException_obj OBJ_;
		AssertException_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.AssertException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssertException_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssertException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssertException","\x89","\xa8","\xf5","\xfd"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_AssertException */ 
