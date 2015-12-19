#ifndef INCLUDED_hunit_warnings_Warning
#define INCLUDED_hunit_warnings_Warning

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,warnings,Warning)
namespace hunit{
namespace warnings{


class HXCPP_CLASS_ATTRIBUTES  Warning_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Warning_obj OBJ_;
		Warning_obj();
		Void __construct(::String message);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.warnings.Warning")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Warning_obj > __new(::String message);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Warning_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Warning","\x3c","\x02","\x1d","\xd7"); }

		::String message;
		virtual ::String defaultMessage( );
		Dynamic defaultMessage_dyn();

};

} // end namespace hunit
} // end namespace warnings

#endif /* INCLUDED_hunit_warnings_Warning */ 
