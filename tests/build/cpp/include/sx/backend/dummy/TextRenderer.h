#ifndef INCLUDED_sx_backend_dummy_TextRenderer
#define INCLUDED_sx_backend_dummy_TextRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_ITextRenderer
#include <sx/backend/interfaces/ITextRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,TextRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextRenderer)
HX_DECLARE_CLASS2(sx,widgets,Text)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  TextRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextRenderer_obj OBJ_;
		TextRenderer_obj();
		Void __construct(::sx::widgets::Text textField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.backend.dummy.TextRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextRenderer_obj > __new(::sx::widgets::Text textField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sx::backend::interfaces::ITextRenderer_obj *();
		operator ::sx::backend::interfaces::IRenderer_obj *();
		::String __ToString() const { return HX_HCSTRING("TextRenderer","\x30","\x8f","\x69","\xaf"); }

		::sx::widgets::Text __textField;
		::String __text;
		Dynamic __onResize;
		Dynamic &__onResize_dyn() { return __onResize;}
		Dynamic __format;
		virtual Void setText( ::String text);
		Dynamic setText_dyn();

		virtual Dynamic getFormat( );
		Dynamic getFormat_dyn();

		virtual Void setFormat( Dynamic format);
		Dynamic setFormat_dyn();

		virtual Void onResize( Dynamic callback);
		Dynamic onResize_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Void setAvailableAreaWidth( Float width);
		Dynamic setAvailableAreaWidth_dyn();

		virtual Void setAvailableAreaHeight( Float height);
		Dynamic setAvailableAreaHeight_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace sx
} // end namespace backend
} // end namespace dummy

#endif /* INCLUDED_sx_backend_dummy_TextRenderer */ 
