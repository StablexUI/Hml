#ifndef INCLUDED_sx_widgets_Text
#define INCLUDED_sx_widgets_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_widgets_base_RendererHolder
#include <sx/widgets/base/RendererHolder.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,TextRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextRenderer)
HX_DECLARE_CLASS2(sx,widgets,Text)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public ::sx::widgets::base::RendererHolder_obj{
	public:
		typedef ::sx::widgets::base::RendererHolder_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.widgets.Text")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Text_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"); }

		::String __text;
		::sx::backend::dummy::TextRenderer renderer;
		virtual Dynamic getTextFormat( );
		Dynamic getTextFormat_dyn();

		virtual Void setTextFormat( Dynamic format);
		Dynamic setTextFormat_dyn();

		virtual Void __createRenderer( );

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::sx::backend::interfaces::IRenderer get___renderer( );

};

} // end namespace sx
} // end namespace widgets

#endif /* INCLUDED_sx_widgets_Text */ 
