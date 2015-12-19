#ifndef INCLUDED_sx_backend_interfaces_IBackendManager
#define INCLUDED_sx_backend_interfaces_IBackendManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,backend,dummy,Backend)
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
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IBackendManager_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBackendManager_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void setupPointerDevices( )=0;
		virtual Dynamic setupPointerDevices_dyn()=0;
		virtual Void setupFrames( )=0;
		virtual Dynamic setupFrames_dyn()=0;
		virtual ::sx::widgets::Widget getRoot( )=0;
		virtual Dynamic getRoot_dyn()=0;
		virtual ::sx::backend::dummy::Point getPointerPosition( hx::Null< int >  touchId)=0;
		virtual Dynamic getPointerPosition_dyn()=0;
		virtual ::sx::backend::dummy::Backend widgetBackend( ::sx::widgets::Widget widget)=0;
		virtual Dynamic widgetBackend_dyn()=0;
		virtual ::sx::backend::dummy::TextRenderer textRenderer( ::sx::widgets::Text textField)=0;
		virtual Dynamic textRenderer_dyn()=0;
		virtual ::sx::backend::dummy::TextInputRenderer textInputRenderer( ::sx::widgets::TextInput textInput)=0;
		virtual Dynamic textInputRenderer_dyn()=0;
		virtual ::sx::backend::dummy::BitmapRenderer bitmapRenderer( ::sx::widgets::Bmp bmp)=0;
		virtual Dynamic bitmapRenderer_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_IBackendManager \
virtual Void setupPointerDevices( ) { return mDelegate->setupPointerDevices();}  \
virtual Dynamic setupPointerDevices_dyn() { return mDelegate->setupPointerDevices_dyn();}  \
virtual Void setupFrames( ) { return mDelegate->setupFrames();}  \
virtual Dynamic setupFrames_dyn() { return mDelegate->setupFrames_dyn();}  \
virtual ::sx::widgets::Widget getRoot( ) { return mDelegate->getRoot();}  \
virtual Dynamic getRoot_dyn() { return mDelegate->getRoot_dyn();}  \
virtual ::sx::backend::dummy::Point getPointerPosition( hx::Null< int >  touchId) { return mDelegate->getPointerPosition(touchId);}  \
virtual Dynamic getPointerPosition_dyn() { return mDelegate->getPointerPosition_dyn();}  \
virtual ::sx::backend::dummy::Backend widgetBackend( ::sx::widgets::Widget widget) { return mDelegate->widgetBackend(widget);}  \
virtual Dynamic widgetBackend_dyn() { return mDelegate->widgetBackend_dyn();}  \
virtual ::sx::backend::dummy::TextRenderer textRenderer( ::sx::widgets::Text textField) { return mDelegate->textRenderer(textField);}  \
virtual Dynamic textRenderer_dyn() { return mDelegate->textRenderer_dyn();}  \
virtual ::sx::backend::dummy::TextInputRenderer textInputRenderer( ::sx::widgets::TextInput textInput) { return mDelegate->textInputRenderer(textInput);}  \
virtual Dynamic textInputRenderer_dyn() { return mDelegate->textInputRenderer_dyn();}  \
virtual ::sx::backend::dummy::BitmapRenderer bitmapRenderer( ::sx::widgets::Bmp bmp) { return mDelegate->bitmapRenderer(bmp);}  \
virtual Dynamic bitmapRenderer_dyn() { return mDelegate->bitmapRenderer_dyn();}  \


template<typename IMPL>
class IBackendManager_delegate_ : public IBackendManager_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBackendManager_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_IBackendManager
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_IBackendManager */ 
