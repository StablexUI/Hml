#ifndef INCLUDED_hunit__Match_Match_Impl_
#define INCLUDED_hunit__Match_Match_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,_Match,Match_Impl_)
namespace hunit{
namespace _Match{


class HXCPP_CLASS_ATTRIBUTES  Match_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Match_Impl__obj OBJ_;
		Match_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="hunit._Match.Match_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Match_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Match_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Match_Impl_","\x85","\xdf","\x44","\x84"); }

		static Dynamic fromValue( Dynamic value);
		static Dynamic fromValue_dyn();

		static Dynamic _new( Dynamic value);
		static Dynamic _new_dyn();

};

} // end namespace hunit
} // end namespace _Match

#endif /* INCLUDED_hunit__Match_Match_Impl_ */ 
