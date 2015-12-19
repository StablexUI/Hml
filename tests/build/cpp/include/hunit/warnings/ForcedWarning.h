#ifndef INCLUDED_hunit_warnings_ForcedWarning
#define INCLUDED_hunit_warnings_ForcedWarning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
HX_DECLARE_CLASS2(hunit,warnings,ForcedWarning)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace warnings{


class HXCPP_CLASS_ATTRIBUTES  ForcedWarning_obj : public ::hunit::warnings::Warning_obj{
	public:
		typedef ::hunit::warnings::Warning_obj super;
		typedef ForcedWarning_obj OBJ_;
		ForcedWarning_obj();
		Void __construct(::String message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.warnings.ForcedWarning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ForcedWarning_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ForcedWarning_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ForcedWarning","\x23","\xfb","\x8a","\xbc"); }

};

} // end namespace hunit
} // end namespace warnings

#endif /* INCLUDED_hunit_warnings_ForcedWarning */ 
