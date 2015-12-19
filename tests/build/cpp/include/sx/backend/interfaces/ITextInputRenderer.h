#ifndef INCLUDED_sx_backend_interfaces_ITextInputRenderer
#define INCLUDED_sx_backend_interfaces_ITextInputRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextInputRenderer)
namespace sx{
namespace backend{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ITextInputRenderer_obj : public ::sx::backend::interfaces::IRenderer_obj{
	public:
		typedef ::sx::backend::interfaces::IRenderer_obj super;
		typedef ITextInputRenderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onTextChange( Dynamic callback)=0;
		virtual Dynamic onTextChange_dyn()=0;
		virtual Void onReceiveCursor( Dynamic callback)=0;
		virtual Dynamic onReceiveCursor_dyn()=0;
		virtual Void onLoseCursor( Dynamic callback)=0;
		virtual Dynamic onLoseCursor_dyn()=0;
		virtual ::String getText( )=0;
		virtual Dynamic getText_dyn()=0;
		virtual Void setText( ::String text)=0;
		virtual Dynamic setText_dyn()=0;
		virtual Dynamic getFormat( )=0;
		virtual Dynamic getFormat_dyn()=0;
		virtual Void setFormat( Dynamic format)=0;
		virtual Dynamic setFormat_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_ITextInputRenderer \
virtual Void onTextChange( Dynamic callback) { return mDelegate->onTextChange(callback);}  \
virtual Dynamic onTextChange_dyn() { return mDelegate->onTextChange_dyn();}  \
virtual Void onReceiveCursor( Dynamic callback) { return mDelegate->onReceiveCursor(callback);}  \
virtual Dynamic onReceiveCursor_dyn() { return mDelegate->onReceiveCursor_dyn();}  \
virtual Void onLoseCursor( Dynamic callback) { return mDelegate->onLoseCursor(callback);}  \
virtual Dynamic onLoseCursor_dyn() { return mDelegate->onLoseCursor_dyn();}  \
virtual ::String getText( ) { return mDelegate->getText();}  \
virtual Dynamic getText_dyn() { return mDelegate->getText_dyn();}  \
virtual Void setText( ::String text) { return mDelegate->setText(text);}  \
virtual Dynamic setText_dyn() { return mDelegate->setText_dyn();}  \
virtual Dynamic getFormat( ) { return mDelegate->getFormat();}  \
virtual Dynamic getFormat_dyn() { return mDelegate->getFormat_dyn();}  \
virtual Void setFormat( Dynamic format) { return mDelegate->setFormat(format);}  \
virtual Dynamic setFormat_dyn() { return mDelegate->setFormat_dyn();}  \


template<typename IMPL>
class ITextInputRenderer_delegate_ : public ITextInputRenderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITextInputRenderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_ITextInputRenderer
		DELEGATE_sx_backend_interfaces_IRenderer
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_ITextInputRenderer */ 
