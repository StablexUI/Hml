#ifndef INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize
#define INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_Size
#include <sx/properties/metric/Size.h>
#endif
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS4(sx,properties,metric,_Size,Size_Internal_ZeroSize)
namespace sx{
namespace properties{
namespace metric{
namespace _Size{


class HXCPP_CLASS_ATTRIBUTES  Size_Internal_ZeroSize_obj : public ::sx::properties::metric::Size_obj{
	public:
		typedef ::sx::properties::metric::Size_obj super;
		typedef Size_Internal_ZeroSize_obj OBJ_;
		Size_Internal_ZeroSize_obj();
		Void __construct(::String __o_orientation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric._Size.Size_Internal_ZeroSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Size_Internal_ZeroSize_obj > __new(::String __o_orientation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Size_Internal_ZeroSize_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Size_Internal_ZeroSize","\x6d","\x8a","\xcd","\x24"); }

		static void __boot();
		virtual Float get_px( );

		virtual Float get_pct( );

		virtual Float get_dip( );

		virtual Float set_px( Float v);

		virtual Float set_pct( Float v);

		virtual Float set_dip( Float v);

		static ::sx::properties::metric::Size instance;
};

} // end namespace sx
} // end namespace properties
} // end namespace metric
} // end namespace _Size

#endif /* INCLUDED_sx_properties_metric__Size_Size_Internal_ZeroSize */ 
