#ifndef INCLUDED_sx_widgets_Widget
#define INCLUDED_sx_widgets_Widget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,backend,dummy,Backend)
HX_DECLARE_CLASS3(sx,backend,dummy,Point)
HX_DECLARE_CLASS3(sx,backend,interfaces,IBackend)
HX_DECLARE_CLASS2(sx,layout,Layout)
HX_DECLARE_CLASS3(sx,properties,metric,Coordinate)
HX_DECLARE_CLASS3(sx,properties,metric,Offset)
HX_DECLARE_CLASS3(sx,properties,metric,Size)
HX_DECLARE_CLASS2(sx,signals,Signal)
HX_DECLARE_CLASS3(sx,skins,base,SkinBase)
HX_DECLARE_CLASS2(sx,tween,Tweener)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Widget_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Widget_obj OBJ_;
		Widget_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.widgets.Widget")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Widget_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Widget_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Widget","\xe4","\x23","\x87","\x80"); }

		static void __boot();
		::String name;
		::sx::widgets::Widget __parent;
		int numChildren;
		::sx::properties::metric::Coordinate __left;
		::sx::properties::metric::Coordinate __right;
		::sx::properties::metric::Coordinate __top;
		::sx::properties::metric::Coordinate __bottom;
		::sx::properties::metric::Offset __origin;
		::sx::properties::metric::Offset __offset;
		::sx::properties::metric::Size __width;
		::sx::properties::metric::Size __height;
		Float scaleX;
		Float scaleY;
		Float rotation;
		Float alpha;
		bool visible;
		bool overflow;
		::sx::skins::base::SkinBase __skin;
		::sx::layout::Layout __layout;
		bool arrangeable;
		bool enabled;
		::String style;
		::sx::backend::dummy::Backend backend;
		bool initialized;
		bool disposed;
		::sx::tween::Tweener __tween;
		::sx::signals::Signal __onResize;
		::sx::signals::Signal __onMove;
		::sx::signals::Signal __onChildAdded;
		::sx::signals::Signal __onChildRemoved;
		::sx::signals::Signal __onParentChanged;
		::sx::signals::Signal __onEnable;
		::sx::signals::Signal __onDisable;
		::sx::signals::Signal __onPointerPress;
		::sx::signals::Signal __onPointerRelease;
		::sx::signals::Signal __onPointerTap;
		::sx::signals::Signal __onPointerMove;
		::sx::signals::Signal __onPointerOver;
		::sx::signals::Signal __onPointerOut;
		::sx::signals::Signal __onInitialize;
		::sx::signals::Signal __onDispose;
		bool __listeningParentResize;
		int __resizeCounter;
		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual ::sx::widgets::Widget addChild( ::sx::widgets::Widget child);
		Dynamic addChild_dyn();

		virtual ::sx::widgets::Widget addChildAt( ::sx::widgets::Widget child,int index);
		Dynamic addChildAt_dyn();

		virtual ::sx::widgets::Widget removeChild( ::sx::widgets::Widget child);
		Dynamic removeChild_dyn();

		virtual ::sx::widgets::Widget removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual int removeChildren( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic removeChildren_dyn();

		virtual bool contains( ::sx::widgets::Widget child);
		Dynamic contains_dyn();

		virtual int getChildIndex( ::sx::widgets::Widget child);
		Dynamic getChildIndex_dyn();

		virtual int setChildIndex( ::sx::widgets::Widget child,int index);
		Dynamic setChildIndex_dyn();

		virtual ::sx::widgets::Widget getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual Void swapChildren( ::sx::widgets::Widget child1,::sx::widgets::Widget child2);
		Dynamic swapChildren_dyn();

		virtual Void swapChildrenAt( int index1,int index2);
		Dynamic swapChildrenAt_dyn();

		virtual ::sx::widgets::Widget getChild( ::String name);
		Dynamic getChild_dyn();

		virtual Dynamic getChildAs( ::String name,::hx::Class cls);
		Dynamic getChildAs_dyn();

		virtual ::sx::widgets::Widget getDirectChild( ::String name);
		Dynamic getDirectChild_dyn();

		virtual ::sx::widgets::Widget getParent( ::String name);
		Dynamic getParent_dyn();

		virtual Dynamic getParentAs( ::String name,::hx::Class cls);
		Dynamic getParentAs_dyn();

		virtual bool isEnabled( );
		Dynamic isEnabled_dyn();

		virtual ::sx::backend::dummy::Point globalToLocal( ::sx::backend::dummy::Point point);
		Dynamic globalToLocal_dyn();

		virtual ::sx::backend::dummy::Point localToGlobal( ::sx::backend::dummy::Point point);
		Dynamic localToGlobal_dyn();

		virtual Void dispose( hx::Null< bool >  disposeChildren);
		Dynamic dispose_dyn();

		virtual Void applyStyle( );
		Dynamic applyStyle_dyn();

		virtual Void __createBackend( );
		Dynamic __createBackend_dyn();

		virtual Void __propertyResized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __propertyResized_dyn();

		virtual Void __resized( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __resized_dyn();

		virtual Void __propertyMoved( ::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __propertyMoved_dyn();

		virtual Void __moved( );
		Dynamic __moved_dyn();

		virtual Void __originChanged( );
		Dynamic __originChanged_dyn();

		virtual Void __offsetChanged( );
		Dynamic __offsetChanged_dyn();

		virtual ::sx::properties::metric::Size __parentWidthProvider( );
		Dynamic __parentWidthProvider_dyn();

		virtual ::sx::properties::metric::Size __parentHeightProvider( );
		Dynamic __parentHeightProvider_dyn();

		virtual Void __parentResized( ::sx::widgets::Widget parent,::sx::properties::metric::Size changed,::String previousUnits,Float previousValue);
		Dynamic __parentResized_dyn();

		virtual Void __reactParentResize( ::sx::properties::metric::Coordinate position,::sx::properties::metric::Size size);
		Dynamic __reactParentResize_dyn();

		virtual Void __affectParentResizeListener( ::sx::properties::metric::Size changed,::String previousUnits);
		Dynamic __affectParentResizeListener_dyn();

		virtual Void __updateParentResizeListener( );
		Dynamic __updateParentResizeListener_dyn();

		virtual Void __initializeSelf( );
		Dynamic __initializeSelf_dyn();

		virtual Void __initializeChildren( );
		Dynamic __initializeChildren_dyn();

		virtual Float set_rotation( Float rotation);
		Dynamic set_rotation_dyn();

		virtual Float set_scaleX( Float scaleX);
		Dynamic set_scaleX_dyn();

		virtual Float set_scaleY( Float scaleY);
		Dynamic set_scaleY_dyn();

		virtual Float set_alpha( Float alpha);
		Dynamic set_alpha_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual ::sx::skins::base::SkinBase set_skin( ::sx::skins::base::SkinBase value);
		Dynamic set_skin_dyn();

		virtual ::sx::layout::Layout set_layout( ::sx::layout::Layout value);
		Dynamic set_layout_dyn();

		virtual ::String set_style( ::String value);
		Dynamic set_style_dyn();

		virtual ::sx::properties::metric::Offset get_origin( );
		Dynamic get_origin_dyn();

		virtual ::sx::properties::metric::Offset get_offset( );
		Dynamic get_offset_dyn();

		virtual ::sx::widgets::Widget set___parent( ::sx::widgets::Widget value);
		Dynamic set___parent_dyn();

		virtual bool set_enabled( bool value);
		Dynamic set_enabled_dyn();

		virtual ::sx::tween::Tweener get_tween( );
		Dynamic get_tween_dyn();

		virtual bool set_overflow( bool value);
		Dynamic set_overflow_dyn();

		virtual bool set_arrangeable( bool value);
		Dynamic set_arrangeable_dyn();

		virtual ::sx::widgets::Widget get_parent( );
		Dynamic get_parent_dyn();

		virtual ::sx::properties::metric::Size get_width( );
		Dynamic get_width_dyn();

		virtual ::sx::properties::metric::Size get_height( );
		Dynamic get_height_dyn();

		virtual ::sx::properties::metric::Coordinate get_left( );
		Dynamic get_left_dyn();

		virtual ::sx::properties::metric::Coordinate get_right( );
		Dynamic get_right_dyn();

		virtual ::sx::properties::metric::Coordinate get_top( );
		Dynamic get_top_dyn();

		virtual ::sx::properties::metric::Coordinate get_bottom( );
		Dynamic get_bottom_dyn();

		virtual ::sx::skins::base::SkinBase get_skin( );
		Dynamic get_skin_dyn();

		virtual ::sx::layout::Layout get_layout( );
		Dynamic get_layout_dyn();

		virtual ::sx::properties::metric::Coordinate set_left( ::sx::properties::metric::Size v);
		Dynamic set_left_dyn();

		virtual ::sx::properties::metric::Coordinate set_right( ::sx::properties::metric::Size v);
		Dynamic set_right_dyn();

		virtual ::sx::properties::metric::Coordinate set_top( ::sx::properties::metric::Size v);
		Dynamic set_top_dyn();

		virtual ::sx::properties::metric::Coordinate set_bottom( ::sx::properties::metric::Size v);
		Dynamic set_bottom_dyn();

		virtual ::sx::properties::metric::Size set_width( ::sx::properties::metric::Size v);
		Dynamic set_width_dyn();

		virtual ::sx::properties::metric::Size set_height( ::sx::properties::metric::Size v);
		Dynamic set_height_dyn();

		virtual ::sx::signals::Signal get_onResize( );
		Dynamic get_onResize_dyn();

		virtual ::sx::signals::Signal get_onMove( );
		Dynamic get_onMove_dyn();

		virtual ::sx::signals::Signal get_onInitialize( );
		Dynamic get_onInitialize_dyn();

		virtual ::sx::signals::Signal get_onDispose( );
		Dynamic get_onDispose_dyn();

		virtual ::sx::signals::Signal get_onChildAdded( );
		Dynamic get_onChildAdded_dyn();

		virtual ::sx::signals::Signal get_onChildRemoved( );
		Dynamic get_onChildRemoved_dyn();

		virtual ::sx::signals::Signal get_onEnable( );
		Dynamic get_onEnable_dyn();

		virtual ::sx::signals::Signal get_onDisable( );
		Dynamic get_onDisable_dyn();

		virtual ::sx::signals::Signal get_onParentChanged( );
		Dynamic get_onParentChanged_dyn();

		virtual ::sx::signals::Signal get_onPointerPress( );
		Dynamic get_onPointerPress_dyn();

		virtual ::sx::signals::Signal get_onPointerRelease( );
		Dynamic get_onPointerRelease_dyn();

		virtual ::sx::signals::Signal get_onPointerTap( );
		Dynamic get_onPointerTap_dyn();

		virtual ::sx::signals::Signal get_onClick( );
		Dynamic get_onClick_dyn();

		virtual ::sx::signals::Signal get_onPointerMove( );
		Dynamic get_onPointerMove_dyn();

		virtual ::sx::signals::Signal get_onPointerOver( );
		Dynamic get_onPointerOver_dyn();

		virtual ::sx::signals::Signal get_onPointerOut( );
		Dynamic get_onPointerOut_dyn();

		static int MAX_RESIZE_DEPTH;
};

} // end namespace sx
} // end namespace widgets

#endif /* INCLUDED_sx_widgets_Widget */ 
