#ifndef INCLUDED_sx_tools_SizeTools
#define INCLUDED_sx_tools_SizeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,tools,SizeTools)
namespace sx{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  SizeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SizeTools_obj OBJ_;
		SizeTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.tools.SizeTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SizeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SizeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SizeTools","\x7a","\xe5","\x97","\xb4"); }

		static bool isZero( ::sx::properties::metric::Size size);
		static Dynamic isZero_dyn();

		static bool notZero( ::sx::properties::metric::Size size);
		static Dynamic notZero_dyn();

		static Float get( ::sx::properties::metric::Size size,::String units);
		static Dynamic get_dyn();

};

} // end namespace sx
} // end namespace tools

#endif /* INCLUDED_sx_tools_SizeTools */ 
