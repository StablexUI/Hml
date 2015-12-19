#ifndef INCLUDED_hunit_mock_MockData
#define INCLUDED_hunit_mock_MockData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS2(hunit,call,Call)
HX_DECLARE_CLASS2(hunit,call,Expect)
HX_DECLARE_CLASS2(hunit,call,IExpect)
HX_DECLARE_CLASS2(hunit,call,Stub)
HX_DECLARE_CLASS2(hunit,mock,MockData)
namespace hunit{
namespace mock{


class HXCPP_CLASS_ATTRIBUTES  MockData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MockData_obj OBJ_;
		MockData_obj();
		Void __construct(::hunit::TestCase testCase,::hx::Class mockClass,hx::Null< bool >  __o_fullStub,hx::Null< bool >  __o_strictMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.mock.MockData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MockData_obj > __new(::hunit::TestCase testCase,::hx::Class mockClass,hx::Null< bool >  __o_fullStub,hx::Null< bool >  __o_strictMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MockData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MockData","\xf4","\x1d","\x6c","\x9a"); }

		::hx::Class mockClass;
		::hunit::TestCase testCase;
		int callCounter;
		Array< ::Dynamic > callLog;
		Array< ::Dynamic > stubs;
		Array< ::Dynamic > expectations;
		bool fullStub;
		bool strictMode;
		Array< ::String > unstubbedMethods;
		cpp::ArrayBase unstubPositions;
		virtual ::String mockClassName( );
		Dynamic mockClassName_dyn();

		virtual Void stub( ::hunit::call::Stub stub);
		Dynamic stub_dyn();

		virtual Void unstub( ::String method,Dynamic pos);
		Dynamic unstub_dyn();

		virtual Void expect( ::hunit::call::Expect expect);
		Dynamic expect_dyn();

		virtual Void removeExpect( ::hunit::call::Expect expect);
		Dynamic removeExpect_dyn();

		virtual int methodInvoked( ::String name,cpp::ArrayBase args,Dynamic pos);
		Dynamic methodInvoked_dyn();

		virtual bool isMethodMocked( int callId);
		Dynamic isMethodMocked_dyn();

		virtual Dynamic getMockedCallResult( int callId);
		Dynamic getMockedCallResult_dyn();

		virtual Void addCallResult( int callId,Dynamic result);
		Dynamic addCallResult_dyn();

		virtual Void addCallException( int callId,Dynamic exception);
		Dynamic addCallException_dyn();

		virtual Void validateExpectation( ::hunit::call::Expect expect);
		Dynamic validateExpectation_dyn();

		virtual Void validateStrictMode( int callId);
		Dynamic validateStrictMode_dyn();

		virtual Void validateCall( int callId);
		Dynamic validateCall_dyn();

		virtual Void throwUnexpectedCallException( ::hunit::call::Call call,::String msg,::hunit::call::Expect expect);
		Dynamic throwUnexpectedCallException_dyn();

};

} // end namespace hunit
} // end namespace mock

#endif /* INCLUDED_hunit_mock_MockData */ 
