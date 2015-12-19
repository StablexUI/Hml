#ifndef INCLUDED_hunit_match_AnyMatch
#define INCLUDED_hunit_match_AnyMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS2(hunit,match,AnyMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  AnyMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef AnyMatch_obj OBJ_;
		AnyMatch_obj();
		Void __construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.AnyMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnyMatch_obj > __new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnyMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AnyMatch","\xd9","\x62","\x87","\x5b"); }

		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_AnyMatch */ 
