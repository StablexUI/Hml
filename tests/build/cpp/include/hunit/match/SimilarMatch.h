#ifndef INCLUDED_hunit_match_SimilarMatch
#define INCLUDED_hunit_match_SimilarMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
HX_DECLARE_CLASS2(hunit,match,ObjectCache)
HX_DECLARE_CLASS2(hunit,match,SimilarMatch)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  SimilarMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef SimilarMatch_obj OBJ_;
		SimilarMatch_obj();
		Void __construct(Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic,::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.SimilarMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SimilarMatch_obj > __new(Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic,::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimilarMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SimilarMatch","\x3a","\xa3","\xed","\x9e"); }

		::hunit::match::SimilarMatch root;
		::hunit::match::Match matcher;
		cpp::ArrayBase checkedObjects;
		virtual Void buildMatcher( ::hunit::match::SimilarMatch root,Dynamic expected,::hunit::match::ObjectCache processedObjects);
		Dynamic buildMatcher_dyn();

		virtual bool isRoot( );
		Dynamic isRoot_dyn();

		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

		virtual ::hunit::match::Match createMatcherForValue( Dynamic value,::hunit::match::ObjectCache processedObjects);
		Dynamic createMatcherForValue_dyn();

		static ::String getAType( Dynamic value);
		static Dynamic getAType_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_SimilarMatch */ 
