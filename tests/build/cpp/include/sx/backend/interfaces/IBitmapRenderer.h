#ifndef INCLUDED_sx_backend_interfaces_IBitmapRenderer
#define INCLUDED_sx_backend_interfaces_IBitmapRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IRenderer
#include <sx/backend/interfaces/IRenderer.h>
#endif
HX_DECLARE_CLASS3(sx,backend,interfaces,IBitmapRenderer)
HX_DECLARE_CLASS3(sx,backend,interfaces,IRenderer)
namespace sx{
namespace backend{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IBitmapRenderer_obj : public ::sx::backend::interfaces::IRenderer_obj{
	public:
		typedef ::sx::backend::interfaces::IRenderer_obj super;
		typedef IBitmapRenderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void setBitmapData( Dynamic bitmapData)=0;
		virtual Dynamic setBitmapData_dyn()=0;
		virtual Float getBitmapDataWidth( )=0;
		virtual Dynamic getBitmapDataWidth_dyn()=0;
		virtual Float getBitmapDataHeight( )=0;
		virtual Dynamic getBitmapDataHeight_dyn()=0;
		virtual Void setBitmapScale( Float scaleX,Float scaleY)=0;
		virtual Dynamic setBitmapScale_dyn()=0;
		virtual Void setBitmapSmoothing( bool smoothing)=0;
		virtual Dynamic setBitmapSmoothing_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_IBitmapRenderer \
virtual Void setBitmapData( Dynamic bitmapData) { return mDelegate->setBitmapData(bitmapData);}  \
virtual Dynamic setBitmapData_dyn() { return mDelegate->setBitmapData_dyn();}  \
virtual Float getBitmapDataWidth( ) { return mDelegate->getBitmapDataWidth();}  \
virtual Dynamic getBitmapDataWidth_dyn() { return mDelegate->getBitmapDataWidth_dyn();}  \
virtual Float getBitmapDataHeight( ) { return mDelegate->getBitmapDataHeight();}  \
virtual Dynamic getBitmapDataHeight_dyn() { return mDelegate->getBitmapDataHeight_dyn();}  \
virtual Void setBitmapScale( Float scaleX,Float scaleY) { return mDelegate->setBitmapScale(scaleX,scaleY);}  \
virtual Dynamic setBitmapScale_dyn() { return mDelegate->setBitmapScale_dyn();}  \
virtual Void setBitmapSmoothing( bool smoothing) { return mDelegate->setBitmapSmoothing(smoothing);}  \
virtual Dynamic setBitmapSmoothing_dyn() { return mDelegate->setBitmapSmoothing_dyn();}  \


template<typename IMPL>
class IBitmapRenderer_delegate_ : public IBitmapRenderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBitmapRenderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_IBitmapRenderer
		DELEGATE_sx_backend_interfaces_IRenderer
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_IBitmapRenderer */ 
