#ifndef INCLUDED_sx_backend_interfaces_ITextRenderer
#define INCLUDED_sx_backend_interfaces_ITextRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,ITextRenderer)
namespace sx{
namespace backend{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ITextRenderer_obj : public ::sx::backend::interfaces::IRenderer_obj{
	public:
		typedef ::sx::backend::interfaces::IRenderer_obj super;
		typedef ITextRenderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void setText( ::String text)=0;
		virtual Dynamic setText_dyn()=0;
		virtual Dynamic getFormat( )=0;
		virtual Dynamic getFormat_dyn()=0;
		virtual Void setFormat( Dynamic format)=0;
		virtual Dynamic setFormat_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_ITextRenderer \
virtual Void setText( ::String text) { return mDelegate->setText(text);}  \
virtual Dynamic setText_dyn() { return mDelegate->setText_dyn();}  \
virtual Dynamic getFormat( ) { return mDelegate->getFormat();}  \
virtual Dynamic getFormat_dyn() { return mDelegate->getFormat_dyn();}  \
virtual Void setFormat( Dynamic format) { return mDelegate->setFormat(format);}  \
virtual Dynamic setFormat_dyn() { return mDelegate->setFormat_dyn();}  \


template<typename IMPL>
class ITextRenderer_delegate_ : public ITextRenderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITextRenderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_ITextRenderer
		DELEGATE_sx_backend_interfaces_IRenderer
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_ITextRenderer */ 
