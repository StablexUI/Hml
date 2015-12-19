#ifndef INCLUDED_hunit_call_Stub
#define INCLUDED_hunit_call_Stub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,call,CallCount)
HX_DECLARE_CLASS2(hunit,call,Expect)
HX_DECLARE_CLASS2(hunit,call,IExpect)
HX_DECLARE_CLASS2(hunit,call,Stub)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,mock,MockData)
HX_DECLARE_CLASS2(hunit,utils,Value)
namespace hunit{
namespace call{


class HXCPP_CLASS_ATTRIBUTES  Stub_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stub_obj OBJ_;
		Stub_obj();
		Void __construct(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.call.Stub")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stub_obj > __new(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stub_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stub","\x4e","\x21","\x35","\x37"); }

		::hunit::mock::MockData mockData;
		::String method;
		Array< ::Dynamic > arguments;
		::hunit::utils::Value returns;
		::hunit::utils::Value throws;
		::hunit::utils::Value implementation;
		Dynamic pos;
		virtual ::hunit::call::Expect expect( ::hunit::call::CallCount count);
		Dynamic expect_dyn();

		virtual bool match( ::String method,cpp::ArrayBase arguments);
		Dynamic match_dyn();

};

} // end namespace hunit
} // end namespace call

#endif /* INCLUDED_hunit_call_Stub */ 
