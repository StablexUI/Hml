#ifndef INCLUDED_hunit_exceptions_UnexpectedException
#define INCLUDED_hunit_exceptions_UnexpectedException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Exception
#include <Exception.h>
#endif
HX_DECLARE_CLASS0(Exception)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(hunit,exceptions,UnexpectedException)
namespace hunit{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES  UnexpectedException_obj : public ::Exception_obj{
	public:
		typedef ::Exception_obj super;
		typedef UnexpectedException_obj OBJ_;
		UnexpectedException_obj();
		Void __construct(Dynamic e,Array< ::Dynamic > exceptionStack,Dynamic pos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.exceptions.UnexpectedException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UnexpectedException_obj > __new(Dynamic e,Array< ::Dynamic > exceptionStack,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnexpectedException_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UnexpectedException","\x1e","\x90","\xf7","\x3d"); }

		Dynamic original;
		Array< ::Dynamic > originalExceptionStack;
		virtual ::String toString( );

		virtual Array< ::Dynamic > buildStack( Array< ::Dynamic > stack);

};

} // end namespace hunit
} // end namespace exceptions

#endif /* INCLUDED_hunit_exceptions_UnexpectedException */ 
