#ifndef INCLUDED_sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_
#define INCLUDED_sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
HX_DECLARE_CLASS4(sx,properties,abstracts,_ASizeSetterProxy,ASizeSetterProxy_Impl_)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASizeSetterProxy{


class HXCPP_CLASS_ATTRIBUTES  ASizeSetterProxy_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASizeSetterProxy_Impl__obj OBJ_;
		ASizeSetterProxy_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._ASizeSetterProxy.ASizeSetterProxy_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ASizeSetterProxy_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ASizeSetterProxy_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ASizeSetterProxy_Impl_","\x4d","\xa0","\x5a","\xcc"); }

		static void __boot();
		static ::sx::ds::ObjectPool __pool;
		static ::sx::properties::metric::SizeSetterProxy fromFloat( Float v);
		static Dynamic fromFloat_dyn();

		static Float set_dip( ::sx::properties::metric::SizeSetterProxy this1,Float v);
		static Dynamic set_dip_dyn();

		static Float set_px( ::sx::properties::metric::SizeSetterProxy this1,Float v);
		static Dynamic set_px_dyn();

		static Float set_pct( ::sx::properties::metric::SizeSetterProxy this1,Float v);
		static Dynamic set_pct_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASizeSetterProxy

#endif /* INCLUDED_sx_properties_abstracts__ASizeSetterProxy_ASizeSetterProxy_Impl_ */ 
