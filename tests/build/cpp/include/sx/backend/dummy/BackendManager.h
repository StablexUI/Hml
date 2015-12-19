#ifndef INCLUDED_sx_backend_dummy_BackendManager
#define INCLUDED_sx_backend_dummy_BackendManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#include <sx/backend/interfaces/IBackendManager.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,Backend)
HX_DECLARE_CLASS3(sx,backend,dummy,BackendManager)
HX_DECLARE_CLASS3(sx,backend,dummy,BitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,dummy,Point)
HX_DECLARE_CLASS3(sx,backend,dummy,TextInputRenderer)
HX_DECLARE_CLASS3(sx,backend,dummy,TextRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackend)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackendManager)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextInputRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextRenderer)
HX_DECLARE_CLASS2(sx,widgets,Bmp)
HX_DECLARE_CLASS2(sx,widgets,Text)
HX_DECLARE_CLASS2(sx,widgets,TextInput)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  BackendManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackendManager_obj OBJ_;
		BackendManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.backend.dummy.BackendManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BackendManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackendManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sx::backend::interfaces::IBackendManager_obj *();
		::String __ToString() const { return HX_HCSTRING("BackendManager","\xd9","\xfc","\x80","\xa2"); }

		::sx::widgets::Widget __root;
		virtual Void setupPointerDevices( );
		Dynamic setupPointerDevices_dyn();

		virtual Void setupFrames( );
		Dynamic setupFrames_dyn();

		virtual ::sx::backend::dummy::Point getPointerPosition( hx::Null< int >  touchId);
		Dynamic getPointerPosition_dyn();

		virtual ::sx::widgets::Widget getRoot( );
		Dynamic getRoot_dyn();

		virtual ::sx::backend::dummy::Backend widgetBackend( ::sx::widgets::Widget widget);
		Dynamic widgetBackend_dyn();

		virtual ::sx::backend::dummy::TextRenderer textRenderer( ::sx::widgets::Text textField);
		Dynamic textRenderer_dyn();

		virtual ::sx::backend::dummy::TextInputRenderer textInputRenderer( ::sx::widgets::TextInput textInput);
		Dynamic textInputRenderer_dyn();

		virtual ::sx::backend::dummy::BitmapRenderer bitmapRenderer( ::sx::widgets::Bmp bmp);
		Dynamic bitmapRenderer_dyn();

};

} // end namespace sx
} // end namespace backend
} // end namespace dummy

#endif /* INCLUDED_sx_backend_dummy_BackendManager */ 
