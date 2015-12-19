#ifndef INCLUDED_sx_properties_AutoSize
#define INCLUDED_sx_properties_AutoSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,properties,AutoSize)
HX_DECLARE_CLASS2(sx,signals,Signal)
namespace sx{
namespace properties{


class HXCPP_CLASS_ATTRIBUTES  AutoSize_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AutoSize_obj OBJ_;
		AutoSize_obj();
		Void __construct(hx::Null< bool >  __o_byDefault);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sx.properties.AutoSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AutoSize_obj > __new(hx::Null< bool >  __o_byDefault);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AutoSize_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AutoSize","\xf0","\x4b","\x2b","\x09"); }

		bool __width;
		bool __height;
		::sx::signals::Signal onChange;
		bool weak;
		virtual bool either( );
		Dynamic either_dyn();

		virtual bool neither( );
		Dynamic neither_dyn();

		virtual bool both( );
		Dynamic both_dyn();

		virtual Void set( bool width,bool height);
		Dynamic set_dyn();

		virtual ::sx::properties::AutoSize copyValueFrom( ::sx::properties::AutoSize autoSize);
		Dynamic copyValueFrom_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void __invokeOnChange( bool horizontalChanged,bool verticalChanged);
		Dynamic __invokeOnChange_dyn();

		virtual bool set_width( bool value);
		Dynamic set_width_dyn();

		virtual bool set_height( bool value);
		Dynamic set_height_dyn();

		virtual bool get_width( );
		Dynamic get_width_dyn();

		virtual bool get_height( );
		Dynamic get_height_dyn();

};

} // end namespace sx
} // end namespace properties

#endif /* INCLUDED_sx_properties_AutoSize */ 
