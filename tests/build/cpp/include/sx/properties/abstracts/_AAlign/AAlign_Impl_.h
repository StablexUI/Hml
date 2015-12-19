#ifndef INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_
#define INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
HX_DECLARE_CLASS2(sx,properties,Align)
HX_DECLARE_CLASS4(sx,properties,abstracts,_AAlign,AAlign_Impl_)
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAlign{


class HXCPP_CLASS_ATTRIBUTES  AAlign_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AAlign_Impl__obj OBJ_;
		AAlign_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._AAlign.AAlign_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AAlign_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AAlign_Impl_","\x64","\xe2","\x90","\x3c"); }

		static void __boot();
		static ::sx::ds::ObjectPool __pool;
		static ::sx::properties::Align fromHorizontal( ::String v);
		static Dynamic fromHorizontal_dyn();

		static ::sx::properties::Align fromVertical( ::String v);
		static Dynamic fromVertical_dyn();

		static ::sx::properties::Align fromNone( ::String v);
		static Dynamic fromNone_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAlign

#endif /* INCLUDED_sx_properties_abstracts__AAlign_AAlign_Impl_ */ 
