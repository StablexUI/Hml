#ifndef INCLUDED_sx_exceptions_OutOfBoundsException
#define INCLUDED_sx_exceptions_OutOfBoundsException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(sx,exceptions,OutOfBoundsException)
HX_DECLARE_CLASS2(sx,exceptions,SxException)
namespace sx{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  OutOfBoundsException_obj : public ::sx::exceptions::SxException_obj{
	public:
		typedef ::sx::exceptions::SxException_obj super;
		typedef OutOfBoundsException_obj OBJ_;
		OutOfBoundsException_obj();
		Void __construct(::String __o_msg,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.exceptions.OutOfBoundsException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OutOfBoundsException_obj > __new(::String __o_msg,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OutOfBoundsException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OutOfBoundsException","\x75","\xf7","\xc2","\x9a"); }

};

} // end namespace sx
} // end namespace exceptions

#endif /* INCLUDED_sx_exceptions_OutOfBoundsException */ 
