#ifndef INCLUDED_hunit_exceptions_WarningException
#define INCLUDED_hunit_exceptions_WarningException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(hunit,exceptions,WarningException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  WarningException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef WarningException_obj OBJ_;
		WarningException_obj();
		Void __construct(::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.WarningException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WarningException_obj > __new(::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WarningException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WarningException","\x73","\xc6","\x13","\x6f"); }

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_WarningException */ 
