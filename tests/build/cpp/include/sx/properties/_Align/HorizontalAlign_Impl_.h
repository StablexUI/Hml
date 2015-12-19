#ifndef INCLUDED_sx_properties__Align_HorizontalAlign_Impl_
#define INCLUDED_sx_properties__Align_HorizontalAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,properties,Align)
HX_DECLARE_CLASS3(sx,properties,_Align,HorizontalAlign_Impl_)
namespace sx{
namespace properties{
namespace _Align{


class HXCPP_CLASS_ATTRIBUTES  HorizontalAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HorizontalAlign_Impl__obj OBJ_;
		HorizontalAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties._Align.HorizontalAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HorizontalAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HorizontalAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HorizontalAlign_Impl_","\x81","\x62","\x0c","\xdf"); }

		static void __boot();
		static ::String Left;
		static ::String Center;
		static ::String Right;
		static ::String HNone;
		static ::sx::properties::Align andVertical( ::String this1,::String b);
		static Dynamic andVertical_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace _Align

#endif /* INCLUDED_sx_properties__Align_HorizontalAlign_Impl_ */ 
