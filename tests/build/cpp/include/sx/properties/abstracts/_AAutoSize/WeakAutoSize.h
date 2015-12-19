#ifndef INCLUDED_sx_properties_abstracts__AAutoSize_WeakAutoSize
#define INCLUDED_sx_properties_abstracts__AAutoSize_WeakAutoSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_AutoSize
#include <sx/properties/AutoSize.h>
#endif
HX_DECLARE_CLASS2(sx,properties,AutoSize)
HX_DECLARE_CLASS4(sx,properties,abstracts,_AAutoSize,WeakAutoSize)
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAutoSize{


class HXCPP_CLASS_ATTRIBUTES  WeakAutoSize_obj : public ::sx::properties::AutoSize_obj{
	public:
		typedef ::sx::properties::AutoSize_obj super;
		typedef WeakAutoSize_obj OBJ_;
		WeakAutoSize_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._AAutoSize.WeakAutoSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakAutoSize_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakAutoSize_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakAutoSize","\x88","\x2c","\x18","\x40"); }

		virtual Void dispose( );

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAutoSize

#endif /* INCLUDED_sx_properties_abstracts__AAutoSize_WeakAutoSize */ 
