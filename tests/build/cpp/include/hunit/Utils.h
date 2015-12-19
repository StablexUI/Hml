#ifndef INCLUDED_hunit_Utils
#define INCLUDED_hunit_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS1(hunit,Utils)
namespace hunit{


class HXCPP_CLASS_ATTRIBUTES  Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hunit.Utils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Utils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Utils","\x11","\x1a","\x0c","\x3e"); }

		static void __boot();
		static ::String META_TEST;
		static bool isObject( Dynamic value);
		static Dynamic isObject_dyn();

		static ::String shortenString( ::String str);
		static Dynamic shortenString_dyn();

		static bool hasToString( Dynamic value);
		static Dynamic hasToString_dyn();

		static ::String safeToString( Dynamic value);
		static Dynamic safeToString_dyn();

		static ::String shortenQuote( Dynamic value);
		static Dynamic shortenQuote_dyn();

		static Void printTrace( Dynamic printer,Dynamic value,Dynamic pos);
		static Dynamic printTrace_dyn();

		static Void print( Dynamic value);
		static Dynamic print_dyn();

		static ::String buffer;
		static Void bufferedPrint( ::String value,Dynamic printer);
		static Dynamic bufferedPrint_dyn();

		static Array< ::Dynamic > filterCases( Array< ::Dynamic > cases,Array< ::String > excludes);
		static Dynamic filterCases_dyn();

};

} // end namespace hunit

#endif /* INCLUDED_hunit_Utils */ 
