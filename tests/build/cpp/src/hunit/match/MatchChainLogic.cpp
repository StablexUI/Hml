#include <hxcpp.h>

#ifndef INCLUDED_hunit_match_MatchChainLogic
#include <hunit/match/MatchChainLogic.h>
#endif
namespace hunit{
namespace match{

::hunit::match::MatchChainLogic MatchChainLogic_obj::And;

::hunit::match::MatchChainLogic MatchChainLogic_obj::Or;

HX_DEFINE_CREATE_ENUM(MatchChainLogic_obj)

int MatchChainLogic_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("And","\xb7","\xb2","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("Or","\x43","\x45","\x00","\x00")) return 1;
	return super::__FindIndex(inName);
}

int MatchChainLogic_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("And","\xb7","\xb2","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("Or","\x43","\x45","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MatchChainLogic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("And","\xb7","\xb2","\x31","\x00")) return And;
	if (inName==HX_HCSTRING("Or","\x43","\x45","\x00","\x00")) return Or;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("And","\xb7","\xb2","\x31","\x00"),
	HX_HCSTRING("Or","\x43","\x45","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MatchChainLogic_obj::And,"And");
	HX_MARK_MEMBER_NAME(MatchChainLogic_obj::Or,"Or");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MatchChainLogic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MatchChainLogic_obj::And,"And");
	HX_VISIT_MEMBER_NAME(MatchChainLogic_obj::Or,"Or");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class MatchChainLogic_obj::__mClass;

Dynamic __Create_MatchChainLogic_obj() { return new MatchChainLogic_obj; }

void MatchChainLogic_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hunit.match.MatchChainLogic","\xf7","\xc1","\xf8","\x5b"), hx::TCanCast< MatchChainLogic_obj >,sStaticFields,sMemberFields,
	&__Create_MatchChainLogic_obj, &__Create,
	&super::__SGetClass(), &CreateMatchChainLogic_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MatchChainLogic_obj::__boot()
{
hx::Static(And) = hx::CreateEnum< MatchChainLogic_obj >(HX_HCSTRING("And","\xb7","\xb2","\x31","\x00"),0);
hx::Static(Or) = hx::CreateEnum< MatchChainLogic_obj >(HX_HCSTRING("Or","\x43","\x45","\x00","\x00"),1);
}


} // end namespace hunit
} // end namespace match
