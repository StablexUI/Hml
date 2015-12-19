#ifndef INCLUDED_hunit_exceptions_UnmetExpectationException
#define INCLUDED_hunit_exceptions_UnmetExpectationException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,call,Expect)
HX_DECLARE_CLASS2(hunit,call,IExpect)
HX_DECLARE_CLASS2(hunit,exceptions,TestFailException)
HX_DECLARE_CLASS2(hunit,exceptions,UnmetExpectationException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  UnmetExpectationException_obj : public ::hunit::exceptions::TestFailException_obj{
	public:
		typedef ::hunit::exceptions::TestFailException_obj super;
		typedef UnmetExpectationException_obj OBJ_;
		UnmetExpectationException_obj();
		Void __construct(::hunit::call::Expect expect,::String __o_reason,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.UnmetExpectationException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UnmetExpectationException_obj > __new(::hunit::call::Expect expect,::String __o_reason,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnmetExpectationException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UnmetExpectationException","\x56","\x0b","\xd3","\x04"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_UnmetExpectationException */ 
