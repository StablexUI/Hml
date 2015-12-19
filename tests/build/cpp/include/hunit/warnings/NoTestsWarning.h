#ifndef INCLUDED_hunit_warnings_NoTestsWarning
#define INCLUDED_hunit_warnings_NoTestsWarning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
HX_DECLARE_CLASS2(hunit,warnings,NoTestsWarning)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace warnings{


class HXCPP_CLASS_ATTRIBUTES  NoTestsWarning_obj : public ::hunit::warnings::Warning_obj{
	public:
		typedef ::hunit::warnings::Warning_obj super;
		typedef NoTestsWarning_obj OBJ_;
		NoTestsWarning_obj();
		Void __construct(::String message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.warnings.NoTestsWarning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NoTestsWarning_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoTestsWarning_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NoTestsWarning","\x7c","\xce","\x73","\x79"); }

};

} // end namespace hunit
} // end namespace warnings

#endif /* INCLUDED_hunit_warnings_NoTestsWarning */ 
