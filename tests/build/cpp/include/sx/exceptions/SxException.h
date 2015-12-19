#ifndef INCLUDED_sx_exceptions_SxException
#define INCLUDED_sx_exceptions_SxException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(sx,exceptions,SxException)
namespace sx{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  SxException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef SxException_obj OBJ_;
		SxException_obj();
		Void __construct(::String __o_msg,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.exceptions.SxException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SxException_obj > __new(::String __o_msg,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SxException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SxException","\xca","\xe6","\x71","\xd6"); }

};

} // end namespace sx
} // end namespace exceptions

#endif /* INCLUDED_sx_exceptions_SxException */ 
