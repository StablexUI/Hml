#ifndef INCLUDED_hunit_match_Match
#define INCLUDED_hunit_match_Match

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,match,GenericMatchFactory)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  Match_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Match_obj OBJ_;
		Match_obj();
		Void __construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.Match")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Match_obj > __new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Match_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Match","\x25","\xb9","\x50","\x96"); }

		::hunit::match::Match previous;
		::hunit::match::MatchChainLogic chainLogic;
		::hunit::match::GenericMatchFactory _and;
		::hunit::match::GenericMatchFactory _or;
		virtual bool match( Dynamic value);
		Dynamic match_dyn();

		virtual bool isChained( );
		Dynamic isChained_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String shortCode( );
		Dynamic shortCode_dyn();

		virtual bool checkMatch( Dynamic value);
		Dynamic checkMatch_dyn();

		virtual ::hunit::match::GenericMatchFactory get_and( );
		Dynamic get_and_dyn();

		virtual ::hunit::match::GenericMatchFactory get_or( );
		Dynamic get_or_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_Match */ 
