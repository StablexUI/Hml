#ifndef INCLUDED_hunit_match_MatchChainLogic
#define INCLUDED_hunit_match_MatchChainLogic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
namespace hunit{
namespace match{


class MatchChainLogic_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MatchChainLogic_obj OBJ_;

	public:
		MatchChainLogic_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("hunit.match.MatchChainLogic","\xf7","\xc1","\xf8","\x5b"); }
		::String __ToString() const { return HX_HCSTRING("MatchChainLogic.","\xcc","\xef","\x6a","\xed") + tag; }

		static ::hunit::match::MatchChainLogic And;
		static inline ::hunit::match::MatchChainLogic And_dyn() { return And; }
		static ::hunit::match::MatchChainLogic Or;
		static inline ::hunit::match::MatchChainLogic Or_dyn() { return Or; }
};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_MatchChainLogic */ 
