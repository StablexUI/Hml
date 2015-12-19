#ifndef INCLUDED_hunit_mock_MockBuilder
#define INCLUDED_hunit_mock_MockBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hunit,TestCase)
HX_DECLARE_CLASS2(hunit,mock,MockBuilder)
HX_DECLARE_CLASS2(hunit,mock,MockData)
namespace hunit{
namespace mock{


class HXCPP_CLASS_ATTRIBUTES  MockBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MockBuilder_obj OBJ_;
		MockBuilder_obj();
		Void __construct(::hunit::TestCase test,::hx::Class mockClass,::hx::Class targetClass);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.mock.MockBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MockBuilder_obj > __new(::hunit::TestCase test,::hx::Class mockClass,::hx::Class targetClass);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MockBuilder_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MockBuilder","\x91","\x8d","\xad","\xdb"); }

		::hunit::TestCase test;
		::hx::Class mockClass;
		::hx::Class targetClass;
		bool fullStub;
		bool strictMode;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual Void assignMockData( Dynamic instance);
		Dynamic assignMockData_dyn();

		virtual ::hunit::mock::MockData createMockData( );
		Dynamic createMockData_dyn();

		virtual bool set_strictMode( bool value);
		Dynamic set_strictMode_dyn();

		virtual bool set_fullStub( bool value);
		Dynamic set_fullStub_dyn();

};

} // end namespace hunit
} // end namespace mock

#endif /* INCLUDED_hunit_mock_MockBuilder */ 
