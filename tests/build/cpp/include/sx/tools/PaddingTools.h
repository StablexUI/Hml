#ifndef INCLUDED_sx_tools_PaddingTools
#define INCLUDED_sx_tools_PaddingTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
HX_DECLARE_CLASS2(sx,tools,PaddingTools)
namespace sx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  PaddingTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PaddingTools_obj OBJ_;
		PaddingTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.tools.PaddingTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PaddingTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PaddingTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PaddingTools","\xaa","\xbe","\x84","\x0d"); }

		static Float sumDip( ::sx::properties::metric::Padding padding,::String orientation);
		static Dynamic sumDip_dyn();

		static Float sumPx( ::sx::properties::metric::Padding padding,::String orientation);
		static Dynamic sumPx_dyn();

		static ::sx::properties::metric::Size side( ::sx::properties::metric::Padding padding,::String side);
		static Dynamic side_dyn();

		static ::sx::properties::metric::Size oppositeSide( ::sx::properties::metric::Padding padding,::String side);
		static Dynamic oppositeSide_dyn();

		static bool isZero( ::sx::properties::metric::Padding padding);
		static Dynamic isZero_dyn();

};

} // end namespace sx
} // end namespace tools

#endif /* INCLUDED_sx_tools_PaddingTools */ 
