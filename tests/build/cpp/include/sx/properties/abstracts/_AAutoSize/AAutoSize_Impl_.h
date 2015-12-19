#ifndef INCLUDED_sx_properties_abstracts__AAutoSize_AAutoSize_Impl_
#define INCLUDED_sx_properties_abstracts__AAutoSize_AAutoSize_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,ds,ObjectPool)
HX_DECLARE_CLASS2(sx,properties,AutoSize)
HX_DECLARE_CLASS4(sx,properties,abstracts,_AAutoSize,AAutoSize_Impl_)
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAutoSize{


class HXCPP_CLASS_ATTRIBUTES  AAutoSize_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AAutoSize_Impl__obj OBJ_;
		AAutoSize_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.properties.abstracts._AAutoSize.AAutoSize_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AAutoSize_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AAutoSize_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AAutoSize_Impl_","\x91","\xac","\xc1","\xa1"); }

		static void __boot();
		static ::sx::ds::ObjectPool __pool;
		static ::sx::properties::AutoSize fromBool( bool v);
		static Dynamic fromBool_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAutoSize

#endif /* INCLUDED_sx_properties_abstracts__AAutoSize_AAutoSize_Impl_ */ 
