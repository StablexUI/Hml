#ifndef INCLUDED_hunit_match_similar_SimilarMapMatch
#define INCLUDED_hunit_match_similar_SimilarMapMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
HX_DECLARE_CLASS2(hunit,match,ObjectCache)
HX_DECLARE_CLASS2(hunit,match,SimilarMatch)
HX_DECLARE_CLASS3(hunit,match,similar,SimilarMapMatch)
HX_DECLARE_CLASS4(hunit,match,similar,_SimilarMapMatch,DynamicMatchMap)
namespace hunit{
namespace match{
namespace similar{


class HXCPP_CLASS_ATTRIBUTES  SimilarMapMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef SimilarMapMatch_obj OBJ_;
		SimilarMapMatch_obj();
		Void __construct(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.similar.SimilarMapMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SimilarMapMatch_obj > __new(::hunit::match::SimilarMatch root,::hunit::match::ObjectCache processedObjects,Dynamic expected,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimilarMapMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SimilarMapMatch","\x34","\x46","\xca","\x4e"); }

		::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap expected;
		::hunit::match::SimilarMatch root;
		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

		virtual ::hunit::match::similar::_SimilarMapMatch::DynamicMatchMap getMatchMap( ::haxe::IMap expected,::hunit::match::ObjectCache processedObjects);
		Dynamic getMatchMap_dyn();

};

} // end namespace hunit
} // end namespace match
} // end namespace similar

#endif /* INCLUDED_hunit_match_similar_SimilarMapMatch */ 