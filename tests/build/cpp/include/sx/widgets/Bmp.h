#ifndef INCLUDED_sx_widgets_Bmp
#define INCLUDED_sx_widgets_Bmp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,BitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,widgets,Bmp)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Bmp_obj : public ::sx::widgets::base::RendererHolder_obj{
	public:
		typedef ::sx::widgets::base::RendererHolder_obj super;
		typedef Bmp_obj OBJ_;
		Bmp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.widgets.Bmp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bmp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bmp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bmp","\x25","\x74","\x32","\x00"); }

		Dynamic bitmapData;
		::sx::backend::dummy::BitmapRenderer renderer;
		bool keepAspect;
		bool smooth;
		bool __dontUpdateBitmapScaling;
		virtual Void __createRenderer( );

		virtual Void __propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);

		virtual Void __paddingChanged( bool horizontal,bool vertical);

		virtual Void __autoSizeChanged( bool widthChanged,bool heightChanged);

		virtual Void __updateBitmapScaling( );
		Dynamic __updateBitmapScaling_dyn();

		virtual Void __scaleBitmapHeight( );
		Dynamic __scaleBitmapHeight_dyn();

		virtual Void __scaleBitmapWidth( );
		Dynamic __scaleBitmapWidth_dyn();

		virtual Void __scaleBitmapBoth( );
		Dynamic __scaleBitmapBoth_dyn();

		virtual Dynamic set_bitmapData( Dynamic value);
		Dynamic set_bitmapData_dyn();

		virtual bool set_keepAspect( bool value);
		Dynamic set_keepAspect_dyn();

		virtual bool set_smooth( bool value);
		Dynamic set_smooth_dyn();

		virtual ::sx::backend::interfaces::IRenderer get___renderer( );

};

} // end namespace sx
} // end namespace widgets

#endif /* INCLUDED_sx_widgets_Bmp */ 
