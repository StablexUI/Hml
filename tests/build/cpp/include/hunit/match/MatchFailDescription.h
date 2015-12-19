#ifndef INCLUDED_hunit_match_MatchFailDescription
#define INCLUDED_hunit_match_MatchFailDescription

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,match,MatchFailDescription)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  MatchFailDescription_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MatchFailDescription_obj OBJ_;
		MatchFailDescription_obj();
		Void __construct(::String expected,::String actual);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.MatchFailDescription")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MatchFailDescription_obj > __new(::String expected,::String actual);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatchFailDescription_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MatchFailDescription","\x19","\xf8","\xdc","\xb7"); }

		::String expected;
		::String actual;
};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_MatchFailDescription */ 
