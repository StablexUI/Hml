#ifndef INCLUDED_hunit_exceptions_UnexpectedCallException
#define INCLUDED_hunit_exceptions_UnexpectedCallException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_exceptions_TestFailException
#include <hunit/exceptions/TestFailException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,call,Call)
HX_DECLARE_CLASS2(hunit,call,Expect)
HX_DECLARE_CLASS2(hunit,call,IExpect)
HX_DECLARE_CLASS2(hunit,exceptions,TestFailException)
HX_DECLARE_CLASS2(hunit,exceptions,UnexpectedCallException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  UnexpectedCallException_obj : public ::hunit::exceptions::TestFailException_obj{
	public:
		typedef ::hunit::exceptions::TestFailException_obj super;
		typedef UnexpectedCallException_obj OBJ_;
		UnexpectedCallException_obj();
		Void __construct(::hunit::call::Call call,::hunit::call::Expect expect,::String reason,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.UnexpectedCallException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UnexpectedCallException_obj > __new(::hunit::call::Call call,::hunit::call::Expect expect,::String reason,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnexpectedCallException_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UnexpectedCallException","\x20","\xe7","\x20","\x46"); }

		static ::String generateMessage( ::hunit::call::Call call,::hunit::call::Expect expect);
		static Dynamic generateMessage_dyn();

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_UnexpectedCallException */ 
