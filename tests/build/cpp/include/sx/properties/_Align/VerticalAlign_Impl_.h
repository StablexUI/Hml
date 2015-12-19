#ifndef INCLUDED_sx_properties__Align_VerticalAlign_Impl_
#define INCLUDED_sx_properties__Align_VerticalAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,properties,Align)
HX_DECLARE_CLASS3(sx,properties,_Align,VerticalAlign_Impl_)
namespace sx{
namespace properties{
namespace _Align{


class HXCPP_CLASS_ATTRIBUTES  VerticalAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VerticalAlign_Impl__obj OBJ_;
		VerticalAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties._Align.VerticalAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VerticalAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VerticalAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VerticalAlign_Impl_","\x2f","\xd0","\x1b","\xa0"); }

		static void __boot();
		static ::String Top;
		static ::String Middle;
		static ::String Bottom;
		static ::String VNone;
		static ::sx::properties::Align andHorizontal( ::String this1,::String b);
		static Dynamic andHorizontal_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace _Align

#endif /* INCLUDED_sx_properties__Align_VerticalAlign_Impl_ */ 
