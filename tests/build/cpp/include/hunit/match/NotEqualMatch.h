#ifndef INCLUDED_hunit_match_NotEqualMatch
#define INCLUDED_hunit_match_NotEqualMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_EqualMatch
#include <hunit/match/EqualMatch.h>
#endif
HX_DECLARE_CLASS2(hunit,match,EqualMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
HX_DECLARE_CLASS2(hunit,match,NotEqualMatch)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  NotEqualMatch_obj : public ::hunit::match::EqualMatch_obj{
	public:
		typedef ::hunit::match::EqualMatch_obj super;
		typedef NotEqualMatch_obj OBJ_;
		NotEqualMatch_obj();
		Void __construct(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.NotEqualMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NotEqualMatch_obj > __new(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NotEqualMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NotEqualMatch","\xc4","\xdf","\x9c","\xc2"); }

		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_NotEqualMatch */ 
