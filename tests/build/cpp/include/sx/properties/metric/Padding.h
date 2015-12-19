#ifndef INCLUDED_sx_properties_metric_Padding
#define INCLUDED_sx_properties_metric_Padding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_properties_metric_SizeSetterProxy
#include <sx/properties/metric/SizeSetterProxy.h>
#endif
HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{
namespace metric{


class HXCPP_CLASS_ATTRIBUTES  Padding_obj : public ::sx::properties::metric::SizeSetterProxy_obj{
	public:
		typedef ::sx::properties::metric::SizeSetterProxy_obj super;
		typedef Padding_obj OBJ_;
		Padding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.metric.Padding")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Padding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Padding_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Padding","\xb1","\x81","\xce","\x9d"); }

		::sx::properties::metric::Size __left;
		::sx::properties::metric::Size __right;
		::sx::properties::metric::Size __top;
		::sx::properties::metric::Size __bottom;
		::sx::properties::metric::SizeSetterProxy __horizontal;
		::sx::properties::metric::SizeSetterProxy __vertical;
		Dynamic ownerWidth;
		Dynamic &ownerWidth_dyn() { return ownerWidth;}
		Dynamic ownerHeight;
		Dynamic &ownerHeight_dyn() { return ownerHeight;}
		::sx::signals::Signal onComponentsChange;
		bool __batchChanges;
		virtual Void __sideChanged( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __sideChanged_dyn();

		virtual Void __dimensionChanged( ::sx::properties::metric::Size changed,::String units,Float value);
		Dynamic __dimensionChanged_dyn();

		virtual Void __setDimension( ::sx::properties::metric::Size first,::sx::properties::metric::Size second,::String units,Float value);
		Dynamic __setDimension_dyn();

		virtual Void __setAll( ::sx::properties::metric::Size changed,::String units,Float value);
		Dynamic __setAll_dyn();

		virtual Void __invokeOnComponentsChange( bool horizontal,bool vertical);
		Dynamic __invokeOnComponentsChange_dyn();

		virtual ::sx::properties::metric::Size __ownerWidthProvider( );
		Dynamic __ownerWidthProvider_dyn();

		virtual ::sx::properties::metric::Size __ownerHeightProvider( );
		Dynamic __ownerHeightProvider_dyn();

		virtual Void __constraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue);

		virtual Void __verticalConstraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue);
		Dynamic __verticalConstraintChanged_dyn();

		virtual Void __horizontalConstraintChanged( ::sx::properties::metric::Size constraint,::String previousUnits,Float previousValue);
		Dynamic __horizontalConstraintChanged_dyn();

		virtual ::sx::properties::metric::SizeSetterProxy get_horizontal( );
		Dynamic get_horizontal_dyn();

		virtual ::sx::properties::metric::SizeSetterProxy get_vertical( );
		Dynamic get_vertical_dyn();

		virtual ::sx::properties::metric::SizeSetterProxy set_horizontal( ::sx::properties::metric::SizeSetterProxy value);
		Dynamic set_horizontal_dyn();

		virtual ::sx::properties::metric::SizeSetterProxy set_vertical( ::sx::properties::metric::SizeSetterProxy value);
		Dynamic set_vertical_dyn();

		virtual ::String toString( );

		virtual ::sx::properties::metric::Size get_left( );
		Dynamic get_left_dyn();

		virtual ::sx::properties::metric::Size get_right( );
		Dynamic get_right_dyn();

		virtual ::sx::properties::metric::Size get_top( );
		Dynamic get_top_dyn();

		virtual ::sx::properties::metric::Size get_bottom( );
		Dynamic get_bottom_dyn();

		virtual ::sx::properties::metric::Size set_left( ::sx::properties::metric::Size v);
		Dynamic set_left_dyn();

		virtual ::sx::properties::metric::Size set_right( ::sx::properties::metric::Size v);
		Dynamic set_right_dyn();

		virtual ::sx::properties::metric::Size set_top( ::sx::properties::metric::Size v);
		Dynamic set_top_dyn();

		virtual ::sx::properties::metric::Size set_bottom( ::sx::properties::metric::Size v);
		Dynamic set_bottom_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace metric

#endif /* INCLUDED_sx_properties_metric_Padding */ 
