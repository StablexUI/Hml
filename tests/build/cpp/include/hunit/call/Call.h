#ifndef INCLUDED_hunit_call_Call
#define INCLUDED_hunit_call_Call

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(hunit,call,Call)
HX_DECLARE_CLASS2(hunit,call,Stub)
HX_DECLARE_CLASS2(hunit,mock,MockData)
HX_DECLARE_CLASS2(hunit,utils,Value)
namespace hunit{
namespace call{


class HXCPP_CLASS_ATTRIBUTES  Call_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Call_obj OBJ_;
		Call_obj();
		Void __construct(int id,::hunit::mock::MockData mockData,::String method,cpp::ArrayBase arguments,Array< ::Dynamic > stack,Dynamic pos,bool isStub,::hunit::call::Stub stub);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.call.Call")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Call_obj > __new(int id,::hunit::mock::MockData mockData,::String method,cpp::ArrayBase arguments,Array< ::Dynamic > stack,Dynamic pos,bool isStub,::hunit::call::Stub stub);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Call_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Call","\xbe","\x44","\x93","\x2c"); }

		int id;
		::hunit::mock::MockData mockData;
		::String method;
		cpp::ArrayBase arguments;
		::hunit::utils::Value result;
		Array< ::Dynamic > stack;
		::hunit::utils::Value exceptionValue;
		Array< ::Dynamic > exceptionStack;
		bool isStub;
		::hunit::call::Stub stub;
		Dynamic pos;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::hunit::utils::Value set_exceptionValue( ::hunit::utils::Value value);
		Dynamic set_exceptionValue_dyn();

};

} // end namespace hunit
} // end namespace call

#endif /* INCLUDED_hunit_call_Call */ 
