#ifndef INCLUDED_sx_properties__Align_NoneAlign_Impl_
#define INCLUDED_sx_properties__Align_NoneAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,_Align,NoneAlign_Impl_)
namespace sx{
namespace properties{
namespace _Align{


class HXCPP_CLASS_ATTRIBUTES  NoneAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NoneAlign_Impl__obj OBJ_;
		NoneAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties._Align.NoneAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NoneAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NoneAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NoneAlign_Impl_","\x2d","\x0d","\x04","\x42"); }

		static void __boot();
		static ::String None;
		static ::String toHorizontal( ::String this1);
		static Dynamic toHorizontal_dyn();

		static ::String toVertical( ::String this1);
		static Dynamic toVertical_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace _Align

#endif /* INCLUDED_sx_properties__Align_NoneAlign_Impl_ */ 
