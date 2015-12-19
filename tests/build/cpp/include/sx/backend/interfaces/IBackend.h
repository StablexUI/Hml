#ifndef INCLUDED_sx_backend_interfaces_IBackend
#define INCLUDED_sx_backend_interfaces_IBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,backend,dummy,Point)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackend)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace backend{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IBackend_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBackend_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void addWidget( ::sx::widgets::Widget child)=0;
		virtual Dynamic addWidget_dyn()=0;
		virtual Void addWidgetAt( ::sx::widgets::Widget child,int index)=0;
		virtual Dynamic addWidgetAt_dyn()=0;
		virtual Void removeWidget( ::sx::widgets::Widget child)=0;
		virtual Dynamic removeWidget_dyn()=0;
		virtual ::sx::widgets::Widget removeWidgetAt( int index)=0;
		virtual Dynamic removeWidgetAt_dyn()=0;
		virtual int getWidgetIndex( ::sx::widgets::Widget child)=0;
		virtual Dynamic getWidgetIndex_dyn()=0;
		virtual int setWidgetIndex( ::sx::widgets::Widget child,int index)=0;
		virtual Dynamic setWidgetIndex_dyn()=0;
		virtual ::sx::widgets::Widget getWidgetAt( int index)=0;
		virtual Dynamic getWidgetAt_dyn()=0;
		virtual Void swapWidgets( ::sx::widgets::Widget child1,::sx::widgets::Widget child2)=0;
		virtual Dynamic swapWidgets_dyn()=0;
		virtual Void swapWidgetsAt( int index1,int index2)=0;
		virtual Dynamic swapWidgetsAt_dyn()=0;
		virtual ::sx::backend::dummy::Point widgetGlobalToLocal( ::sx::backend::dummy::Point point)=0;
		virtual Dynamic widgetGlobalToLocal_dyn()=0;
		virtual ::sx::backend::dummy::Point widgetLocalToGlobal( ::sx::backend::dummy::Point point)=0;
		virtual Dynamic widgetLocalToGlobal_dyn()=0;
		virtual Void widgetOriginChanged( )=0;
		virtual Dynamic widgetOriginChanged_dyn()=0;
		virtual Void widgetOffsetChanged( )=0;
		virtual Dynamic widgetOffsetChanged_dyn()=0;
		virtual Void widgetResized( )=0;
		virtual Dynamic widgetResized_dyn()=0;
		virtual Void widgetMoved( )=0;
		virtual Dynamic widgetMoved_dyn()=0;
		virtual Void widgetRotated( )=0;
		virtual Dynamic widgetRotated_dyn()=0;
		virtual Void widgetScaledX( )=0;
		virtual Dynamic widgetScaledX_dyn()=0;
		virtual Void widgetScaledY( )=0;
		virtual Dynamic widgetScaledY_dyn()=0;
		virtual Void widgetAlphaChanged( )=0;
		virtual Dynamic widgetAlphaChanged_dyn()=0;
		virtual Void widgetVisibilityChanged( )=0;
		virtual Dynamic widgetVisibilityChanged_dyn()=0;
		virtual Void widgetOverflowChanged( )=0;
		virtual Dynamic widgetOverflowChanged_dyn()=0;
		virtual Void widgetSkinChanged( )=0;
		virtual Dynamic widgetSkinChanged_dyn()=0;
		virtual Void widgetDisposed( )=0;
		virtual Dynamic widgetDisposed_dyn()=0;
};

#define DELEGATE_sx_backend_interfaces_IBackend \
virtual Void addWidget( ::sx::widgets::Widget child) { return mDelegate->addWidget(child);}  \
virtual Dynamic addWidget_dyn() { return mDelegate->addWidget_dyn();}  \
virtual Void addWidgetAt( ::sx::widgets::Widget child,int index) { return mDelegate->addWidgetAt(child,index);}  \
virtual Dynamic addWidgetAt_dyn() { return mDelegate->addWidgetAt_dyn();}  \
virtual Void removeWidget( ::sx::widgets::Widget child) { return mDelegate->removeWidget(child);}  \
virtual Dynamic removeWidget_dyn() { return mDelegate->removeWidget_dyn();}  \
virtual ::sx::widgets::Widget removeWidgetAt( int index) { return mDelegate->removeWidgetAt(index);}  \
virtual Dynamic removeWidgetAt_dyn() { return mDelegate->removeWidgetAt_dyn();}  \
virtual int getWidgetIndex( ::sx::widgets::Widget child) { return mDelegate->getWidgetIndex(child);}  \
virtual Dynamic getWidgetIndex_dyn() { return mDelegate->getWidgetIndex_dyn();}  \
virtual int setWidgetIndex( ::sx::widgets::Widget child,int index) { return mDelegate->setWidgetIndex(child,index);}  \
virtual Dynamic setWidgetIndex_dyn() { return mDelegate->setWidgetIndex_dyn();}  \
virtual ::sx::widgets::Widget getWidgetAt( int index) { return mDelegate->getWidgetAt(index);}  \
virtual Dynamic getWidgetAt_dyn() { return mDelegate->getWidgetAt_dyn();}  \
virtual Void swapWidgets( ::sx::widgets::Widget child1,::sx::widgets::Widget child2) { return mDelegate->swapWidgets(child1,child2);}  \
virtual Dynamic swapWidgets_dyn() { return mDelegate->swapWidgets_dyn();}  \
virtual Void swapWidgetsAt( int index1,int index2) { return mDelegate->swapWidgetsAt(index1,index2);}  \
virtual Dynamic swapWidgetsAt_dyn() { return mDelegate->swapWidgetsAt_dyn();}  \
virtual ::sx::backend::dummy::Point widgetGlobalToLocal( ::sx::backend::dummy::Point point) { return mDelegate->widgetGlobalToLocal(point);}  \
virtual Dynamic widgetGlobalToLocal_dyn() { return mDelegate->widgetGlobalToLocal_dyn();}  \
virtual ::sx::backend::dummy::Point widgetLocalToGlobal( ::sx::backend::dummy::Point point) { return mDelegate->widgetLocalToGlobal(point);}  \
virtual Dynamic widgetLocalToGlobal_dyn() { return mDelegate->widgetLocalToGlobal_dyn();}  \
virtual Void widgetOriginChanged( ) { return mDelegate->widgetOriginChanged();}  \
virtual Dynamic widgetOriginChanged_dyn() { return mDelegate->widgetOriginChanged_dyn();}  \
virtual Void widgetOffsetChanged( ) { return mDelegate->widgetOffsetChanged();}  \
virtual Dynamic widgetOffsetChanged_dyn() { return mDelegate->widgetOffsetChanged_dyn();}  \
virtual Void widgetResized( ) { return mDelegate->widgetResized();}  \
virtual Dynamic widgetResized_dyn() { return mDelegate->widgetResized_dyn();}  \
virtual Void widgetMoved( ) { return mDelegate->widgetMoved();}  \
virtual Dynamic widgetMoved_dyn() { return mDelegate->widgetMoved_dyn();}  \
virtual Void widgetRotated( ) { return mDelegate->widgetRotated();}  \
virtual Dynamic widgetRotated_dyn() { return mDelegate->widgetRotated_dyn();}  \
virtual Void widgetScaledX( ) { return mDelegate->widgetScaledX();}  \
virtual Dynamic widgetScaledX_dyn() { return mDelegate->widgetScaledX_dyn();}  \
virtual Void widgetScaledY( ) { return mDelegate->widgetScaledY();}  \
virtual Dynamic widgetScaledY_dyn() { return mDelegate->widgetScaledY_dyn();}  \
virtual Void widgetAlphaChanged( ) { return mDelegate->widgetAlphaChanged();}  \
virtual Dynamic widgetAlphaChanged_dyn() { return mDelegate->widgetAlphaChanged_dyn();}  \
virtual Void widgetVisibilityChanged( ) { return mDelegate->widgetVisibilityChanged();}  \
virtual Dynamic widgetVisibilityChanged_dyn() { return mDelegate->widgetVisibilityChanged_dyn();}  \
virtual Void widgetOverflowChanged( ) { return mDelegate->widgetOverflowChanged();}  \
virtual Dynamic widgetOverflowChanged_dyn() { return mDelegate->widgetOverflowChanged_dyn();}  \
virtual Void widgetSkinChanged( ) { return mDelegate->widgetSkinChanged();}  \
virtual Dynamic widgetSkinChanged_dyn() { return mDelegate->widgetSkinChanged_dyn();}  \
virtual Void widgetDisposed( ) { return mDelegate->widgetDisposed();}  \
virtual Dynamic widgetDisposed_dyn() { return mDelegate->widgetDisposed_dyn();}  \


template<typename IMPL>
class IBackend_delegate_ : public IBackend_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBackend_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_sx_backend_interfaces_IBackend
};

} // end namespace sx
} // end namespace backend
} // end namespace interfaces

#endif /* INCLUDED_sx_backend_interfaces_IBackend */ 
