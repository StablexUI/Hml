#ifndef INCLUDED_sx_exceptions_InvalidBackendException
#define INCLUDED_sx_exceptions_InvalidBackendException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(sx,exceptions,InvalidBackendException)
HX_DECLARE_CLASS2(sx,exceptions,SxException)
namespace sx{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  InvalidBackendException_obj : public ::sx::exceptions::SxException_obj{
	public:
		typedef ::sx::exceptions::SxException_obj super;
		typedef InvalidBackendException_obj OBJ_;
		InvalidBackendException_obj();
		Void __construct(::String __o_msg,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.exceptions.InvalidBackendException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InvalidBackendException_obj > __new(::String __o_msg,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvalidBackendException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InvalidBackendException","\x92","\x4e","\xdc","\x03"); }

};

} // end namespace sx
} // end namespace exceptions

#endif /* INCLUDED_sx_exceptions_InvalidBackendException */ 
