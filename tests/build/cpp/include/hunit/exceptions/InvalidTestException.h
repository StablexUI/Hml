#ifndef INCLUDED_hunit_exceptions_InvalidTestException
#define INCLUDED_hunit_exceptions_InvalidTestException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,InvalidTestException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  InvalidTestException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef InvalidTestException_obj OBJ_;
		InvalidTestException_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.InvalidTestException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InvalidTestException_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvalidTestException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InvalidTestException","\x46","\xa0","\xc3","\x6a"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_InvalidTestException */ 
