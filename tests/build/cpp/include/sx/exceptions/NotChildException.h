#ifndef INCLUDED_sx_exceptions_NotChildException
#define INCLUDED_sx_exceptions_NotChildException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_exceptions_SxException
#include <sx/exceptions/SxException.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(sx,exceptions,NotChildException)
HX_DECLARE_CLASS2(sx,exceptions,SxException)
namespace sx{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  NotChildException_obj : public ::sx::exceptions::SxException_obj{
	public:
		typedef ::sx::exceptions::SxException_obj super;
		typedef NotChildException_obj OBJ_;
		NotChildException_obj();
		Void __construct(::String __o_msg,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.exceptions.NotChildException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NotChildException_obj > __new(::String __o_msg,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NotChildException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NotChildException","\x66","\xfb","\x9c","\x6d"); }

};

} // end namespace sx
} // end namespace exceptions

#endif /* INCLUDED_sx_exceptions_NotChildException */ 
