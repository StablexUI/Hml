#ifndef INCLUDED_hunit_warnings_IncompleteTestWarning
#define INCLUDED_hunit_warnings_IncompleteTestWarning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_warnings_Warning
#include <hunit/warnings/Warning.h>
#endif
HX_DECLARE_CLASS2(hunit,warnings,IncompleteTestWarning)
HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace warnings{


class HXCPP_CLASS_ATTRIBUTES  IncompleteTestWarning_obj : public ::hunit::warnings::Warning_obj{
	public:
		typedef ::hunit::warnings::Warning_obj super;
		typedef IncompleteTestWarning_obj OBJ_;
		IncompleteTestWarning_obj();
		Void __construct(::String message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.warnings.IncompleteTestWarning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IncompleteTestWarning_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IncompleteTestWarning_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IncompleteTestWarning","\x0c","\x8f","\x74","\xdc"); }

		virtual ::String defaultMessage( );

};

} // end namespace hunit
} // end namespace warnings

#endif /* INCLUDED_hunit_warnings_IncompleteTestWarning */ 
