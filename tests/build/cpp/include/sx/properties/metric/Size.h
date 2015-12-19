#ifndef INCLUDED_sx_properties_metric_Size
#define INCLUDED_sx_properties_metric_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{
namespace metric{


class HXCPP_CLASS_ATTRIBUTES  Size_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();
		Void __construct(::String __o_orientation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric.Size")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Size_obj > __new(::String __o_orientation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Size","\xe1","\xcc","\x2c","\x37"); }

		::sx::properties::metric::Size __min;
		::sx::properties::metric::Size __max;
		::String units;
		::String orientation;
		Dynamic pctSource;
		Dynamic &pctSource_dyn() { return pctSource;}
		::sx::signals::Signal onChange;
		bool weak;
		Float __value;
		virtual bool isVertical( );
		Dynamic isVertical_dyn();

		virtual bool isHorizontal( );
		Dynamic isHorizontal_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::sx::properties::metric::Size copyValueFrom( ::sx::properties::metric::Size size);
		Dynamic copyValueFrom_dyn();

		virtual bool hasMin( );
		Dynamic hasMin_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::sx::properties::metric::Size __pctSource( );
		Dynamic __pctSource_dyn();

		virtual Void __invokeOnChange( ::String previousUnits,Float previousValue);
		Dynamic __invokeOnChange_dyn();

		virtual Void __constraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue);
		Dynamic __constraintChanged_dyn();

		virtual Float get_dip( );
		Dynamic get_dip_dyn();

		virtual Float get_px( );
		Dynamic get_px_dyn();

		virtual Float get_pct( );
		Dynamic get_pct_dyn();

		virtual Float set_dip( Float value);
		Dynamic set_dip_dyn();

		virtual Float set_px( Float value);
		Dynamic set_px_dyn();

		virtual Float set_pct( Float value);
		Dynamic set_pct_dyn();

		virtual ::sx::properties::metric::Size get_min( );
		Dynamic get_min_dyn();

		virtual ::sx::properties::metric::Size set_min( ::sx::properties::metric::Size value);
		Dynamic set_min_dyn();

		virtual ::sx::properties::metric::Size get_max( );
		Dynamic get_max_dyn();

		virtual ::sx::properties::metric::Size set_max( ::sx::properties::metric::Size value);
		Dynamic set_max_dyn();

		static ::sx::properties::metric::Size get_zeroProperty( );
		static Dynamic get_zeroProperty_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace metric

#endif /* INCLUDED_sx_properties_metric_Size */ 
