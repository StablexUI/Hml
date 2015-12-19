#ifndef INCLUDED_sx_properties_displaylist_ArrayDisplayList
#define INCLUDED_sx_properties_displaylist_ArrayDisplayList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,properties,displaylist,ArrayDisplayList)
HX_DECLARE_CLASS2(sx,widgets,Widget)
namespace sx{
namespace properties{
namespace displaylist{


class HXCPP_CLASS_ATTRIBUTES  ArrayDisplayList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayDisplayList_obj OBJ_;
		ArrayDisplayList_obj();
		Void __construct(::sx::widgets::Widget widget);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.displaylist.ArrayDisplayList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayDisplayList_obj > __new(::sx::widgets::Widget widget);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayDisplayList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArrayDisplayList","\xc7","\x66","\xb9","\x31"); }

		::sx::widgets::Widget widget;
		::sx::properties::displaylist::ArrayDisplayList parent;
		Array< ::Dynamic > children;
		virtual ::sx::properties::displaylist::ArrayDisplayList addChild( ::sx::properties::displaylist::ArrayDisplayList child);
		Dynamic addChild_dyn();

		virtual ::sx::properties::displaylist::ArrayDisplayList addChildAt( ::sx::properties::displaylist::ArrayDisplayList child,int index);
		Dynamic addChildAt_dyn();

		virtual ::sx::properties::displaylist::ArrayDisplayList removeChild( ::sx::properties::displaylist::ArrayDisplayList child);
		Dynamic removeChild_dyn();

		virtual ::sx::properties::displaylist::ArrayDisplayList removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual int removeChildren( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic removeChildren_dyn();

		virtual bool contains( ::sx::properties::displaylist::ArrayDisplayList child);
		Dynamic contains_dyn();

		virtual int getChildIndex( ::sx::properties::displaylist::ArrayDisplayList child);
		Dynamic getChildIndex_dyn();

		virtual int setChildIndex( ::sx::properties::displaylist::ArrayDisplayList child,int index);
		Dynamic setChildIndex_dyn();

		virtual ::sx::properties::displaylist::ArrayDisplayList getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual Void swapChildren( ::sx::properties::displaylist::ArrayDisplayList child1,::sx::properties::displaylist::ArrayDisplayList child2);
		Dynamic swapChildren_dyn();

		virtual Void swapChildrenAt( int index1,int index2);
		Dynamic swapChildrenAt_dyn();

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

};

} // end namespace sx
} // end namespace properties
} // end namespace displaylist

#endif /* INCLUDED_sx_properties_displaylist_ArrayDisplayList */ 
