#ifndef INCLUDED_hunit_match_GenericMatchFactory
#define INCLUDED_hunit_match_GenericMatchFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hunit,match,AnyMatch)
HX_DECLARE_CLASS2(hunit,match,CallbackMatch)
HX_DECLARE_CLASS2(hunit,match,ERegMatch)
HX_DECLARE_CLASS2(hunit,match,EqualMatch)
HX_DECLARE_CLASS2(hunit,match,GenericMatchFactory)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,MatchChainLogic)
HX_DECLARE_CLASS2(hunit,match,SimilarMatch)
HX_DECLARE_CLASS2(hunit,match,TypeMatch)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  GenericMatchFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericMatchFactory_obj OBJ_;
		GenericMatchFactory_obj();
		Void __construct(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.GenericMatchFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GenericMatchFactory_obj > __new(::hunit::match::Match previous,::hunit::match::MatchChainLogic chainLogic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericMatchFactory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GenericMatchFactory","\x9c","\x5a","\x03","\xaf"); }

		::hunit::match::Match previous;
		::hunit::match::MatchChainLogic chainLogic;
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

		virtual ::hunit::match::Match notEqual( Dynamic value);
		Dynamic notEqual_dyn();

		virtual ::hunit::match::CallbackMatch callback( Dynamic verify);
		Dynamic callback_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_GenericMatchFactory */ 
