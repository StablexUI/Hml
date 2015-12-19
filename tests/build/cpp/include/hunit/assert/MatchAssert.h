#ifndef INCLUDED_hunit_assert_MatchAssert
#define INCLUDED_hunit_assert_MatchAssert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_assert_BaseAssert
#include <hunit/assert/BaseAssert.h>
#endif
HX_DECLARE_CLASS2(hunit,_assert,BaseAssert)
HX_DECLARE_CLASS2(hunit,_assert,MatchAssert)
HX_DECLARE_CLASS2(hunit,match,Match)
namespace hunit{
namespace _assert{


class HXCPP_CLASS_ATTRIBUTES  MatchAssert_obj : public ::hunit::_assert::BaseAssert_obj{
	public:
		typedef ::hunit::_assert::BaseAssert_obj super;
		typedef MatchAssert_obj OBJ_;
		MatchAssert_obj();
		Void __construct(::hunit::match::Match expected,Dynamic actual,::String message,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.assert.MatchAssert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MatchAssert_obj > __new(::hunit::match::Match expected,Dynamic actual,::String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatchAssert_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MatchAssert","\xcb","\x5d","\x53","\xb8"); }

		::hunit::match::Match expected;
		Dynamic actual;
		::String message;
		virtual Void validate( );

		virtual ::String buildMessage( );
		Dynamic buildMessage_dyn();

		virtual ::String actualType( );
		Dynamic actualType_dyn();

};

} // end namespace hunit
} // end namespace assert

#endif /* INCLUDED_hunit_assert_MatchAssert */ 
