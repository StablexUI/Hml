#ifndef INCLUDED_sx_backend_dummy_Point
#define INCLUDED_sx_backend_dummy_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(sx,backend,dummy,Point)
namespace sx{
namespace backend{
namespace dummy{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sx.backend.dummy.Point")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Point_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"); }

		Float x;
		Float y;
};

} // end namespace sx
} // end namespace backend
} // end namespace dummy

#endif /* INCLUDED_sx_backend_dummy_Point */ 
