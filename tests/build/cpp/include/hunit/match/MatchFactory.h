#ifndef INCLUDED_hunit_match_MatchFactory
#define INCLUDED_hunit_match_MatchFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hunit,match,AnyMatch)
HX_DECLARE_CLASS2(hunit,match,CallbackMatch)
HX_DECLARE_CLASS2(hunit,match,ERegMatch)
HX_DECLARE_CLASS2(hunit,match,EqualMatch)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchFactory)
HX_DECLARE_CLASS2(hunit,match,NotEqualMatch)
HX_DECLARE_CLASS2(hunit,match,SimilarMatch)
HX_DECLARE_CLASS2(hunit,match,TypeMatch)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  MatchFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MatchFactory_obj OBJ_;
		MatchFactory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hunit.match.MatchFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MatchFactory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatchFactory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MatchFactory","\x25","\x2a","\x9c","\x01"); }

		virtual ::hunit::match::AnyMatch any( );
		Dynamic any_dyn();

		virtual ::hunit::match::TypeMatch type( ::hx::Class type);
		Dynamic type_dyn();

		virtual ::hunit::match::ERegMatch regexp( ::EReg pattern);
		Dynamic regexp_dyn();

		virtual ::hunit::match::SimilarMatch similar( Dynamic pattern);
		Dynamic similar_dyn();

		virtual ::hunit::match::EqualMatch equal( Dynamic value);
		Dynamic equal_dyn();

		virtual ::hunit::match::NotEqualMatch notEqual( Dynamic value);
		Dynamic notEqual_dyn();

		virtual ::hunit::match::CallbackMatch callback( Dynamic verify);
		Dynamic callback_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_MatchFactory */ 
