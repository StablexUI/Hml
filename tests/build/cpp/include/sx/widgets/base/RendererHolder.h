#ifndef INCLUDED_sx_widgets_base_RendererHolder
#define INCLUDED_sx_widgets_base_RendererHolder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_Widget
#include <sx/widgets/Widget.h>
#endif
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS2(sx,properties,AutoSize)
HX_DECLARE_CLASS3(sx,properties,metric,Padding)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS3(sx,properties,metric,SizeSetterProxy)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace widgets{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  RendererHolder_obj : public ::sx::widgets::Widget_obj{
	public:
		typedef ::sx::widgets::Widget_obj super;
		typedef RendererHolder_obj OBJ_;
		RendererHolder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.widgets.base.RendererHolder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RendererHolder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RendererHolder_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RendererHolder","\x2f","\xd1","\xcc","\x54"); }

		::sx::properties::AutoSize autoSize;
		::sx::properties::metric::Padding __padding;
		bool __rendererOnResizeIsSet;
		bool __adjustingSize;
		::sx::properties::metric::Size __helperSize;
		virtual Void dispose( hx::Null< bool >  disposeChildren);

		virtual Void __createRenderer( );
		Dynamic __createRenderer_dyn();

		virtual Void __autoSizeChanged( bool widthChanged,bool heightChanged);
		Dynamic __autoSizeChanged_dyn();

		virtual Void __disableRendererResizeListener( );
		Dynamic __disableRendererResizeListener_dyn();

		virtual Void __enableRendererResizeListener( );
		Dynamic __enableRendererResizeListener_dyn();

		virtual Void __rendererResized( Float widthPx,Float heightPx);
		Dynamic __rendererResized_dyn();

		virtual Void __propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);

		virtual Void __adjustSize( ::sx::properties::metric::Size size,Float rendererSizePx);
		Dynamic __adjustSize_dyn();

		virtual Void __paddingChanged( bool horizontal,bool vertical);
		Dynamic __paddingChanged_dyn();

		virtual ::sx::properties::metric::Size __widthProviderForPadding( );
		Dynamic __widthProviderForPadding_dyn();

		virtual ::sx::properties::metric::Size __heightProviderForPadding( );
		Dynamic __heightProviderForPadding_dyn();

		virtual ::sx::properties::metric::Size __getPaddedRendererSize( ::sx::properties::metric::Size paddingSide1,::sx::properties::metric::Size paddingSide2,Float rendererSizePx);
		Dynamic __getPaddedRendererSize_dyn();

		virtual Float __getPaddingPixels( ::sx::properties::metric::Size paddingSide,::sx::properties::metric::Size oppositeSide);
		Dynamic __getPaddingPixels_dyn();

		virtual ::sx::properties::metric::Size __getHelperSize( );
		Dynamic __getHelperSize_dyn();

		virtual ::sx::backend::interfaces::IRenderer get___renderer( );
		Dynamic get___renderer_dyn();

		virtual ::sx::properties::AutoSize set_autoSize( ::sx::properties::AutoSize value);
		Dynamic set_autoSize_dyn();

		virtual ::sx::properties::metric::Padding get_padding( );
		Dynamic get_padding_dyn();

		virtual ::sx::properties::metric::Padding set_padding( ::sx::properties::metric::Size v);
		Dynamic set_padding_dyn();

};

} // end namespace sx
} // end namespace widgets
} // end namespace base

#endif /* INCLUDED_sx_widgets_base_RendererHolder */ 
