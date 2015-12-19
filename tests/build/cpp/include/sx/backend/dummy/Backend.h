#ifndef INCLUDED_sx_backend_dummy_Backend
#define INCLUDED_sx_backend_dummy_Backend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sx_backend_interfaces_IBackend
#include <sx/backend/interfaces/IBackend.h>
#endif
HX_DECLARE_CLASS3(sx,backend,dummy,Backend)
HX_DECLARE_CLASS3(sx,backend,dummy,Point)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackend)
HX_DECLARE_CLASS3(sx,properties,displaylist,ArrayDisplayList)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  Backend_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Backend_obj OBJ_;
		Backend_obj();
		Void __construct(::sx::widgets::Widget widget);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.backend.dummy.Backend")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Backend_obj > __new(::sx::widgets::Widget widget);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Backend_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::sx::backend::interfaces::IBackend_obj *();
		::String __ToString() const { return HX_HCSTRING("Backend","\xf4","\xe3","\xd8","\xc8"); }

		::sx::properties::displaylist::ArrayDisplayList __node;
		virtual Void addWidget( ::sx::widgets::Widget child);
		Dynamic addWidget_dyn();

		virtual Void addWidgetAt( ::sx::widgets::Widget child,int index);
		Dynamic addWidgetAt_dyn();

		virtual Void removeWidget( ::sx::widgets::Widget child);
		Dynamic removeWidget_dyn();

		virtual ::sx::widgets::Widget removeWidgetAt( int index);
		Dynamic removeWidgetAt_dyn();

		virtual int getWidgetIndex( ::sx::widgets::Widget child);
		Dynamic getWidgetIndex_dyn();

		virtual int setWidgetIndex( ::sx::widgets::Widget child,int index);
		Dynamic setWidgetIndex_dyn();

		virtual ::sx::widgets::Widget getWidgetAt( int index);
		Dynamic getWidgetAt_dyn();

		virtual Void swapWidgets( ::sx::widgets::Widget child1,::sx::widgets::Widget child2);
		Dynamic swapWidgets_dyn();

		virtual Void swapWidgetsAt( int index1,int index2);
		Dynamic swapWidgetsAt_dyn();

		virtual ::sx::backend::dummy::Point widgetGlobalToLocal( ::sx::backend::dummy::Point point);
		Dynamic widgetGlobalToLocal_dyn();

		virtual ::sx::backend::dummy::Point widgetLocalToGlobal( ::sx::backend::dummy::Point point);
		Dynamic widgetLocalToGlobal_dyn();

		virtual Void widgetOriginChanged( );
		Dynamic widgetOriginChanged_dyn();

		virtual Void widgetOffsetChanged( );
		Dynamic widgetOffsetChanged_dyn();

		virtual Void widgetResized( );
		Dynamic widgetResized_dyn();

		virtual Void widgetMoved( );
		Dynamic widgetMoved_dyn();

		virtual Void widgetRotated( );
		Dynamic widgetRotated_dyn();

		virtual Void widgetScaledX( );
		Dynamic widgetScaledX_dyn();

		virtual Void widgetScaledY( );
		Dynamic widgetScaledY_dyn();

		virtual Void widgetAlphaChanged( );
		Dynamic widgetAlphaChanged_dyn();

		virtual Void widgetVisibilityChanged( );
		Dynamic widgetVisibilityChanged_dyn();

		virtual Void widgetOverflowChanged( );
		Dynamic widgetOverflowChanged_dyn();

		virtual Void widgetSkinChanged( );
		Dynamic widgetSkinChanged_dyn();

		virtual Void widgetDisposed( );
		Dynamic widgetDisposed_dyn();

};

} // end namespace sx
} // end namespace backend
} // end namespace dummy

#endif /* INCLUDED_sx_backend_dummy_Backend */ 
