#ifndef INCLUDED_sx_backend_dummy_BitmapRenderer
#define INCLUDED_sx_backend_dummy_BitmapRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IBitmapRenderer
#include <sx/backend/interfaces/IBitmapRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,BitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS2(sx,widgets,Bmp)
HX_DECLARE_CLASS2(sx,widgets,Widget)
HX_DECLARE_CLASS3(sx,widgets,base,RendererHolder)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  BitmapRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapRenderer_obj OBJ_;
		BitmapRenderer_obj();
		Void __construct(::sx::widgets::Bmp bmp);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.backend.dummy.BitmapRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapRenderer_obj > __new(::sx::widgets::Bmp bmp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapRenderer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sx::backend::interfaces::IBitmapRenderer_obj *();
		operator ::sx::backend::interfaces::IRenderer_obj *();
		::String __ToString() const { return HX_HCSTRING("BitmapRenderer","\x72","\x2c","\x77","\x28"); }

		::sx::widgets::Bmp __bmp;
		Dynamic __bitmapData;
		Dynamic __onResize;
		Dynamic &__onResize_dyn() { return __onResize;}
		virtual Void setBitmapData( Dynamic bitmapData);
		Dynamic setBitmapData_dyn();

		virtual Float getBitmapDataWidth( );
		Dynamic getBitmapDataWidth_dyn();

		virtual Float getBitmapDataHeight( );
		Dynamic getBitmapDataHeight_dyn();

		virtual Void setBitmapScale( Float scaleX,Float scaleY);
		Dynamic setBitmapScale_dyn();

		virtual Void setBitmapSmoothing( bool smooth);
		Dynamic setBitmapSmoothing_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Void onResize( Dynamic callback);
		Dynamic onResize_dyn();

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

#endif /* INCLUDED_sx_backend_dummy_BitmapRenderer */ 
