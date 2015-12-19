#ifndef INCLUDED_hunit_assert_BaseAssert
#define INCLUDED_hunit_assert_BaseAssert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,_assert,BaseAssert)
namespace hunit{
namespace _assert{


class HXCPP_CLASS_ATTRIBUTES  BaseAssert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseAssert_obj OBJ_;
		BaseAssert_obj();
		Void __construct(Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.assert.BaseAssert")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseAssert_obj > __new(Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseAssert_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseAssert","\xd7","\x89","\xe4","\x1a"); }

		Dynamic pos;
		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void failed( ::String message);
		Dynamic failed_dyn();

};

} // end namespace hunit
} // end namespace assert

#endif /* INCLUDED_hunit_assert_BaseAssert */ 
