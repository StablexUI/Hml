#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#define INCLUDED_sx_backend_interfaces_IRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
namespace sx{
namespace backend{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IRenderer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRenderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float getWidth( )=0;
		virtual Dynamic getWidth_dyn()=0;
		virtual Float getHeight( )=0;
		virtual Dynamic getHeight_dyn()=0;
		virtual Void onResize( Dynamic callback)=0;
		virtual Dynamic onResize_dyn()=0;
		virtual Void setAvailableAreaWidth( Float width)=0;
		virtual Dynamic setAvailableAreaWidth_dyn()=0;
		virtual Void setAvailableAreaHeight( Float height)=0;
		virtual Dynamic setAvailableAreaHeight_dyn()=0;
		virtual Void dispose( )=0;
		virtual Dynamic dispose_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_IRenderer \
virtual Float getWidth( ) { return mDelegate->getWidth();}  \
virtual Dynamic getWidth_dyn() { return mDelegate->getWidth_dyn();}  \
virtual Float getHeight( ) { return mDelegate->getHeight();}  \
virtual Dynamic getHeight_dyn() { return mDelegate->getHeight_dyn();}  \
virtual Void onResize( Dynamic callback) { return mDelegate->onResize(callback);}  \
virtual Dynamic onResize_dyn() { return mDelegate->onResize_dyn();}  \
virtual Void setAvailableAreaWidth( Float width) { return mDelegate->setAvailableAreaWidth(width);}  \
virtual Dynamic setAvailableAreaWidth_dyn() { return mDelegate->setAvailableAreaWidth_dyn();}  \
virtual Void setAvailableAreaHeight( Float height) { return mDelegate->setAvailableAreaHeight(height);}  \
virtual Dynamic setAvailableAreaHeight_dyn() { return mDelegate->setAvailableAreaHeight_dyn();}  \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \


template<typename IMPL>
class IRenderer_delegate_ : public IRenderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRenderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_IRenderer
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_IRenderer */ 
