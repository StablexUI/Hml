#ifndef INCLUDED_hunit_assert_AssertFactory
#define INCLUDED_hunit_assert_AssertFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS2(hunit,_assert,AssertFactory)
HX_DECLARE_CLASS2(hunit,match,Match)
namespace hunit{
namespace _assert{


class HXCPP_CLASS_ATTRIBUTES  AssertFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssertFactory_obj OBJ_;
		AssertFactory_obj();
		Void __construct(::hunit::TestCase testCase);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.assert.AssertFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssertFactory_obj > __new(::hunit::TestCase testCase);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssertFactory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssertFactory","\x84","\x52","\xaf","\x4f"); }

		::hunit::TestCase testCase;
		virtual Void match( ::hunit::match::Match match,Dynamic value,::String message,Dynamic pos);
		Dynamic match_dyn();

		virtual Void equal( Dynamic expected,Dynamic actual,::String message,Dynamic pos);
		Dynamic equal_dyn();

		virtual Void notEqual( Dynamic expected,Dynamic actual,::String message,Dynamic pos);
		Dynamic notEqual_dyn();

		virtual Void type( ::hx::Class expectedType,Dynamic value,::String message,Dynamic pos);
		Dynamic type_dyn();

		virtual Void isNull( Dynamic value,::String message,Dynamic pos);
		Dynamic isNull_dyn();

		virtual Void notNull( Dynamic value,::String message,Dynamic pos);
		Dynamic notNull_dyn();

		virtual Void isTrue( bool value,::String message,Dynamic pos);
		Dynamic isTrue_dyn();

		virtual Void isFalse( bool value,::String message,Dynamic pos);
		Dynamic isFalse_dyn();

		virtual Void regexp( ::EReg pattern,::String value,::String message,Dynamic pos);
		Dynamic regexp_dyn();

		virtual Void similar( Dynamic expected,Dynamic actual,::String message,Dynamic pos);
		Dynamic similar_dyn();

		virtual Void fail( ::String message,Dynamic pos);
		Dynamic fail_dyn();

		virtual Void warn( ::String message,Dynamic pos);
		Dynamic warn_dyn();

		virtual Void success( Dynamic pos);
		Dynamic success_dyn();

};

} // end namespace hunit
} // end namespace assert

#endif /* INCLUDED_hunit_assert_AssertFactory */ 
