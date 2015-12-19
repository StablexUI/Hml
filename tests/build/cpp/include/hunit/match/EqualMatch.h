#ifndef INCLUDED_hunit_match_EqualMatch
#define INCLUDED_hunit_match_EqualMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS2(hunit,match,EqualMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  EqualMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef EqualMatch_obj OBJ_;
		EqualMatch_obj();
		Void __construct(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.EqualMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EqualMatch_obj > __new(Dynamic value,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EqualMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EqualMatch","\x11","\x81","\x2d","\x9b"); }

		Dynamic value;
		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_EqualMatch */ 
