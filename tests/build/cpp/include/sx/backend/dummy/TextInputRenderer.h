#ifndef INCLUDED_sx_backend_dummy_TextInputRenderer
#define INCLUDED_sx_backend_dummy_TextInputRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#include <sx/backend/interfaces/ITextInputRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,TextInputRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextInputRenderer)
HX_DECLARE_CLASS2(sx,widgets,TextInput)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  TextInputRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextInputRenderer_obj OBJ_;
		TextInputRenderer_obj();
		Void __construct(::sx::widgets::TextInput textInput);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.backend.dummy.TextInputRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextInputRenderer_obj > __new(::sx::widgets::TextInput textInput);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextInputRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sx::backend::interfaces::ITextInputRenderer_obj *();
		operator ::sx::backend::interfaces::IRenderer_obj *();
		::String __ToString() const { return HX_HCSTRING("TextInputRenderer","\x60","\x7a","\xeb","\x23"); }

		::sx::widgets::TextInput __textInput;
		::String __text;
		Dynamic __onTextChange;
		Dynamic &__onTextChange_dyn() { return __onTextChange;}
		Dynamic __format;
		Float __width;
		Float __height;
		virtual Void onTextChange( Dynamic onTextChange);
		Dynamic onTextChange_dyn();

		virtual Void onReceiveCursor( Dynamic callback);
		Dynamic onReceiveCursor_dyn();

		virtual Void onLoseCursor( Dynamic callback);
		Dynamic onLoseCursor_dyn();

		virtual ::String getText( );
		Dynamic getText_dyn();

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

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

};

} // end namespace sx
} // end namespace backend
} // end namespace dummy

#endif /* INCLUDED_sx_backend_dummy_TextInputRenderer */ 
