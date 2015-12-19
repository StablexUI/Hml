#ifndef INCLUDED_exception_StackTools
#define INCLUDED_exception_StackTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(exception,StackTools)
HX_DECLARE_CLASS1(haxe,StackItem)
namespace exception{


class HXCPP_CLASS_ATTRIBUTES  StackTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StackTools_obj OBJ_;
		StackTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="exception.StackTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StackTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StackTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StackTools","\xd3","\x39","\xfe","\x1d"); }

		static Array< ::Dynamic > truncate( Array< ::Dynamic > stack,Dynamic pos,hx::Null< bool >  fromTop);
		static Dynamic truncate_dyn();

		static Array< ::Dynamic > cppTruncate( Array< ::Dynamic > stack,Dynamic pos,hx::Null< bool >  fromTop);
		static Dynamic cppTruncate_dyn();

};

} // end namespace exception

#endif /* INCLUDED_exception_StackTools */ 
