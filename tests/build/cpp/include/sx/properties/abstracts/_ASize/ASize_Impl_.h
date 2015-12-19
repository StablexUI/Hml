#ifndef INCLUDED_sx_properties_abstracts__ASize_ASize_Impl_
#define INCLUDED_sx_properties_abstracts__ASize_ASize_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
HX_DECLARE_CLASS4(sx,properties,abstracts,_ASize,ASize_Impl_)
HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
namespace sx{
namespace properties{
namespace abstracts{
namespace _ASize{


class HXCPP_CLASS_ATTRIBUTES  ASize_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ASize_Impl__obj OBJ_;
		ASize_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._ASize.ASize_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ASize_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ASize_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ASize_Impl_","\xc2","\xa3","\x2d","\x8c"); }

		static void __boot();
		static ::sx::ds::ObjectPool __pool;
		static ::sx::properties::metric::Size fromFloat( Float v);
		static Dynamic fromFloat_dyn();

		static ::sx::properties::metric::Size fromSize( ::sx::properties::metric::Coordinate coordinate);
		static Dynamic fromSize_dyn();

		static Float toFloat( ::sx::properties::metric::Size this1);
		static Dynamic toFloat_dyn();

		static ::sx::properties::metric::Size _new( ::sx::properties::metric::Size size);
		static Dynamic _new_dyn();

		static Float AincB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AincB_dyn();

		static Float AdecB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AdecB_dyn();

		static Float AmulIncB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AmulIncB_dyn();

		static Float AdevDecB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AdevDecB_dyn();

		static Float AplusB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AplusB_dyn();

		static Float AminusB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AminusB_dyn();

		static Float AmulB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AmulB_dyn();

		static Float AdivB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AdivB_dyn();

		static bool AltB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AltB_dyn();

		static bool AlteB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AlteB_dyn();

		static bool AneB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AneB_dyn();

		static bool AgteB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AgteB_dyn();

		static bool AgtB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AgtB_dyn();

		static bool AeqB( ::sx::properties::metric::Size a,::sx::properties::metric::Size b);
		static Dynamic AeqB_dyn();

		static Float minusA( ::sx::properties::metric::Size a);
		static Dynamic minusA_dyn();

		static Float Ainc( ::sx::properties::metric::Size a);
		static Dynamic Ainc_dyn();

		static Float Bdec( ::sx::properties::metric::Size a);
		static Dynamic Bdec_dyn();

		static Float AincBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AincBf_dyn();

		static Float AdecBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AdecBf_dyn();

		static Float AmulIncBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AmulIncBf_dyn();

		static Float AdevDecBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AdevDecBf_dyn();

		static Float AplusBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AplusBf_dyn();

		static Float AminusBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AminusBf_dyn();

		static Float AmulBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AmulBf_dyn();

		static Float AdivBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AdivBf_dyn();

		static bool AltBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AltBf_dyn();

		static bool AlteBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AlteBf_dyn();

		static bool AneBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AneBf_dyn();

		static bool AgteBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AgteBf_dyn();

		static bool AgtBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AgtBf_dyn();

		static bool AeqBf( ::sx::properties::metric::Size a,Float b);
		static Dynamic AeqBf_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _ASize

#endif /* INCLUDED_sx_properties_abstracts__ASize_ASize_Impl_ */ 
