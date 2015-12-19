#ifndef INCLUDED_sx_tools_OrientationTools
#define INCLUDED_sx_tools_OrientationTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,tools,OrientationTools)
namespace sx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  OrientationTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OrientationTools_obj OBJ_;
		OrientationTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.tools.OrientationTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OrientationTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OrientationTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OrientationTools","\x4b","\x3d","\xb4","\x64"); }

		static ::String opposite( ::String orientation);
		static Dynamic opposite_dyn();

};

} // end namespace sx
} // end namespace tools

#endif /* INCLUDED_sx_tools_OrientationTools */ 
