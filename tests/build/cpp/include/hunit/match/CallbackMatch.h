#ifndef INCLUDED_hunit_match_CallbackMatch
#define INCLUDED_hunit_match_CallbackMatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_match_Match
#include <hunit/match/Match.h>
#endif
HX_DECLARE_CLASS2(hunit,match,CallbackMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  CallbackMatch_obj : public ::hunit::match::Match_obj{
	public:
		typedef ::hunit::match::Match_obj super;
		typedef CallbackMatch_obj OBJ_;
		CallbackMatch_obj();
		Void __construct(Dynamic verify,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.CallbackMatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CallbackMatch_obj > __new(Dynamic verify,::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallbackMatch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CallbackMatch","\x20","\xe5","\xfd","\x87"); }

		Dynamic verify;
		Dynamic &verify_dyn() { return verify;}
		virtual bool checkMatch( Dynamic value);

		virtual ::String shortCode( );

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_CallbackMatch */ 
