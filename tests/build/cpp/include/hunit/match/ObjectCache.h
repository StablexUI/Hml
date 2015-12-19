#ifndef INCLUDED_hunit_match_ObjectCache
#define INCLUDED_hunit_match_ObjectCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS2(hunit,match,ObjectCache)
HX_DECLARE_CLASS2(hunit,match,SimilarMatch)
namespace hunit{
namespace match{


class HXCPP_CLASS_ATTRIBUTES  ObjectCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectCache_obj OBJ_;
		ObjectCache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.ObjectCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectCache_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectCache","\xe3","\x4e","\x76","\x94"); }

		cpp::ArrayBase keys;
		Array< ::Dynamic > values;
		virtual ::hunit::match::SimilarMatch get( Dynamic key);
		Dynamic get_dyn();

		virtual Void set( Dynamic key,::hunit::match::SimilarMatch value);
		Dynamic set_dyn();

};

} // end namespace hunit
} // end namespace match

#endif /* INCLUDED_hunit_match_ObjectCache */ 
