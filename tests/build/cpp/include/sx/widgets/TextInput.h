#ifndef INCLUDED_sx_widgets_TextInput
#define INCLUDED_sx_widgets_TextInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,TextInputRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextInputRenderer)
HX_DECLARE_CLASS2(sx,signals,Signal)
HX_DECLARE_CLASS2(sx,widgets,TextInput)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  TextInput_obj : public ::sx::widgets::base::RendererHolder_obj{
	public:
		typedef ::sx::widgets::base::RendererHolder_obj super;
		typedef TextInput_obj OBJ_;
		TextInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.widgets.TextInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextInput","\xfd","\x33","\xde","\xf8"); }

		::String __text;
		::String __invitation;
		::sx::backend::dummy::TextInputRenderer renderer;
		::sx::signals::Signal __onChange;
		bool __hasCursor;
		virtual Dynamic getTextFormat( );
		Dynamic getTextFormat_dyn();

		virtual Void setTextFormat( Dynamic format);
		Dynamic setTextFormat_dyn();

		virtual Void __createRenderer( );

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Void __rendererTextChanged( ::String newText);
		Dynamic __rendererTextChanged_dyn();

		virtual Void __rendererReceiveCursor( );
		Dynamic __rendererReceiveCursor_dyn();

		virtual Void __rendererLoseCursor( );
		Dynamic __rendererLoseCursor_dyn();

		virtual Void __updateRendererContent( );
		Dynamic __updateRendererContent_dyn();

		virtual ::String set_invitation( ::String value);
		Dynamic set_invitation_dyn();

		virtual ::String get_invitation( );
		Dynamic get_invitation_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::sx::backend::interfaces::IRenderer get___renderer( );

		virtual ::sx::signals::Signal get_onChange( );
		Dynamic get_onChange_dyn();

};

} // end namespace sx
} // end namespace widgets

#endif /* INCLUDED_sx_widgets_TextInput */ 
