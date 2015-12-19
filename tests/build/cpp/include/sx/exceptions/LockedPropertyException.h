#ifndef INCLUDED_sx_exceptions_LockedPropertyException
#define INCLUDED_sx_exceptions_LockedPropertyException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS2(sx,exceptions,LockedPropertyException)
namespace sx{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  LockedPropertyException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef LockedPropertyException_obj OBJ_;
		LockedPropertyException_obj();
		Void __construct(::String __o_msg,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.exceptions.LockedPropertyException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LockedPropertyException_obj > __new(::String __o_msg,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LockedPropertyException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LockedPropertyException","\xb0","\xcc","\xbc","\x3f"); }

};

} // end namespace sx
} // end namespace exceptions

#endif /* INCLUDED_sx_exceptions_LockedPropertyException */ 
