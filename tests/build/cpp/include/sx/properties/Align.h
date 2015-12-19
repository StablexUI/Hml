#ifndef INCLUDED_sx_properties_Align
#define INCLUDED_sx_properties_Align

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,properties,Align)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{


class HXCPP_CLASS_ATTRIBUTES  Align_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Align_obj OBJ_;
		Align_obj();
		Void __construct(::String __o_horizontal,::String __o_vertical);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.Align")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Align_obj > __new(::String __o_horizontal,::String __o_vertical);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Align_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Align","\xa5","\xc6","\xbe","\xb4"); }

		::String __horizontal;
		::String __vertical;
		::sx::signals::Signal onChange;
		bool weak;
		virtual Void set( ::String horizontal,::String vertical);
		Dynamic set_dyn();

		virtual ::sx::properties::Align copyValueFrom( ::sx::properties::Align align);
		Dynamic copyValueFrom_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void __invokeOnChange( bool horizontalChanged,bool verticalChanged);
		Dynamic __invokeOnChange_dyn();

		virtual ::String set_vertical( ::String value);
		Dynamic set_vertical_dyn();

		virtual ::String set_horizontal( ::String value);
		Dynamic set_horizontal_dyn();

		virtual ::String get_vertical( );
		Dynamic get_vertical_dyn();

		virtual ::String get_horizontal( );
		Dynamic get_horizontal_dyn();

};

} // end namespace sx
} // end namespace properties

#endif /* INCLUDED_sx_properties_Align */ 
