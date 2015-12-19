#ifndef INCLUDED_sx_properties_abstracts__AAlign_WeakAlign
#define INCLUDED_sx_properties_abstracts__AAlign_WeakAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_Align
#include <sx/properties/Align.h>
#endif
HX_DECLARE_CLASS2(sx,properties,Align)
HX_DECLARE_CLASS4(sx,properties,abstracts,_AAlign,WeakAlign)
namespace sx{
namespace properties{
namespace abstracts{
namespace _AAlign{


class HXCPP_CLASS_ATTRIBUTES  WeakAlign_obj : public ::sx::properties::Align_obj{
	public:
		typedef ::sx::properties::Align_obj super;
		typedef WeakAlign_obj OBJ_;
		WeakAlign_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.abstracts._AAlign.WeakAlign")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakAlign_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakAlign_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WeakAlign","\x0d","\x17","\x82","\x7f"); }

		virtual Void dispose( );

};

} // end namespace sx
} // end namespace properties
} // end namespace abstracts
} // end namespace _AAlign

#endif /* INCLUDED_sx_properties_abstracts__AAlign_WeakAlign */ 
