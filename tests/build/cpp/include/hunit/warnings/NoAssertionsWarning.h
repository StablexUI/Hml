#ifndef INCLUDED_hunit_warnings_NoAssertionsWarning
#define INCLUDED_hunit_warnings_NoAssertionsWarning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
HX_DECLARE_CLASS2(hunit,warnings,NoAssertionsWarning)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace warnings{


class HXCPP_CLASS_ATTRIBUTES  NoAssertionsWarning_obj : public ::hunit::warnings::Warning_obj{
	public:
		typedef ::hunit::warnings::Warning_obj super;
		typedef NoAssertionsWarning_obj OBJ_;
		NoAssertionsWarning_obj();
		Void __construct(::String message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.warnings.NoAssertionsWarning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NoAssertionsWarning_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoAssertionsWarning_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NoAssertionsWarning","\x4a","\x1d","\xc1","\x3b"); }

};

} // end namespace hunit
} // end namespace warnings

#endif /* INCLUDED_hunit_warnings_NoAssertionsWarning */ 
