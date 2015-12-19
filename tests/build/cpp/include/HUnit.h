#ifndef INCLUDED_HUnit
#define INCLUDED_HUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HUnit)
HX_DECLARE_CLASS1(haxe,StackItem)


class HXCPP_CLASS_ATTRIBUTES  HUnit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HUnit_obj OBJ_;
		HUnit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="HUnit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HUnit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HUnit_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HUnit","\xec","\xba","\x5c","\xad"); }

		static Void main( );
		static Dynamic main_dyn();

		static Array< ::Dynamic > processExceptionStack( Array< ::Dynamic > stack);
		static Dynamic processExceptionStack_dyn();

};


#endif /* INCLUDED_HUnit */ 
