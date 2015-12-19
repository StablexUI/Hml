#ifndef INCLUDED_hunit_call_Expect
#define INCLUDED_hunit_call_Expect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_call_IExpect
#include <hunit/call/IExpect.h>
#endif
HX_DECLARE_CLASS2(hunit,call,Call)
HX_DECLARE_CLASS2(hunit,call,CallCount)
HX_DECLARE_CLASS2(hunit,call,Expect)
HX_DECLARE_CLASS2(hunit,call,IExpect)
HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,mock,MockData)
HX_DECLARE_CLASS2(hunit,utils,Value)
namespace hunit{
namespace call{


class HXCPP_CLASS_ATTRIBUTES  Expect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Expect_obj OBJ_;
		Expect_obj();
		Void __construct(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,::hunit::call::CallCount count,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.call.Expect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Expect_obj > __new(::hunit::mock::MockData mockData,::String method,Array< ::Dynamic > arguments,::hunit::utils::Value returns,::hunit::utils::Value throws,::hunit::call::CallCount count,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Expect_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::hunit::call::IExpect_obj *();
		::String __ToString() const { return HX_HCSTRING("Expect","\xf9","\x61","\x0a","\xf9"); }

		::hunit::mock::MockData mockData;
		::String method;
		Array< ::Dynamic > arguments;
		::hunit::utils::Value returns;
		::hunit::utils::Value throws;
		::hunit::call::CallCount count;
		Dynamic pos;
		int timesMatched;
		int fromCallId;
		virtual bool sameObjectMethod( ::hunit::call::Call call);
		Dynamic sameObjectMethod_dyn();

		virtual bool match( ::hunit::call::Call call);
		Dynamic match_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual bool tooManyCalls( );
		Dynamic tooManyCalls_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace hunit
} // end namespace call

#endif /* INCLUDED_hunit_call_Expect */ 
