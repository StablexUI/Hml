#ifndef INCLUDED_hunit_exceptions_ExpectedExceptionData
#define INCLUDED_hunit_exceptions_ExpectedExceptionData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(hunit,exceptions,ExpectedExceptionData)
HX_DECLARE_CLASS2(hunit,match,Match)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  ExpectedExceptionData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExpectedExceptionData_obj OBJ_;
		ExpectedExceptionData_obj();
		Void __construct(::hunit::match::Match match,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.ExpectedExceptionData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ExpectedExceptionData_obj > __new(::hunit::match::Match match,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExpectedExceptionData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ExpectedExceptionData","\x61","\x0c","\x54","\x0c"); }

		::hunit::match::Match match;
		bool satisfied;
		Dynamic pos;
		virtual Void validate( Dynamic e,Array< ::Dynamic > exceptionStack);
		Dynamic validate_dyn();

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_ExpectedExceptionData */ 
