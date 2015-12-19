#ifndef INCLUDED_sx_properties_abstracts__APadding_APadding_Impl_
#define INCLUDED_sx_properties_abstracts__APadding_APadding_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
HX_DECLARE_CLASS4(sx,properties,abstracts,_APadding,APadding_Impl_)
HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{
namespace abstracts{
namespace _APadding{


class HXCPP_CLASS_ATTRIBUTES  APadding_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef APadding_Impl__obj OBJ_;
		APadding_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._APadding.APadding_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< APadding_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APadding_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("APadding_Impl_","\x30","\xc4","\x07","\xb8"); }

		static void __boot();
		static ::sx::ds::ObjectPool __pool;
		static ::sx::properties::metric::Padding fromFloat( Float v);
		static Dynamic fromFloat_dyn();

		static ::sx::signals::Signal get_onChange( ::sx::properties::metric::Padding this1);
		static Dynamic get_onChange_dyn();

		static Float set_dip( ::sx::properties::metric::Padding this1,Float v);
		static Dynamic set_dip_dyn();

		static Float set_px( ::sx::properties::metric::Padding this1,Float v);
		static Dynamic set_px_dyn();

		static Float set_pct( ::sx::properties::metric::Padding this1,Float v);
		static Dynamic set_pct_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _APadding

#endif /* INCLUDED_sx_properties_abstracts__APadding_APadding_Impl_ */ 
