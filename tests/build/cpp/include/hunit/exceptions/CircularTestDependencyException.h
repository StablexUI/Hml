#ifndef INCLUDED_hunit_exceptions_CircularTestDependencyException
#define INCLUDED_hunit_exceptions_CircularTestDependencyException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#include <hunit/exceptions/InvalidTestException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,CircularTestDependencyException)
HX_DECLARE_CLASS2(hunit,exceptions,InvalidTestException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  CircularTestDependencyException_obj : public ::hunit::exceptions::InvalidTestException_obj{
	public:
		typedef ::hunit::exceptions::InvalidTestException_obj super;
		typedef CircularTestDependencyException_obj OBJ_;
		CircularTestDependencyException_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.CircularTestDependencyException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CircularTestDependencyException_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CircularTestDependencyException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CircularTestDependencyException","\x13","\x88","\x5d","\x33"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_CircularTestDependencyException */ 
