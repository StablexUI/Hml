#ifndef INCLUDED_hunit_match_ERegMatch
#define INCLUDED_hunit_match_ERegMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hunit,match,ERegMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  ERegMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef ERegMatch_obj OBJ_;
		ERegMatch_obj();
		Void __construct(::EReg regexp,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.ERegMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ERegMatch_obj > __new(::EReg regexp,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ERegMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ERegMatch","\xb6","\x98","\x44","\x5a"); }

		::EReg regexp;
		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

		virtual ::String extractPattern( );
		Dynamic extractPattern_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_ERegMatch */ 
