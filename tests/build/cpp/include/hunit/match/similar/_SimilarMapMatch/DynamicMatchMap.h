#ifndef INCLUDED_hunit_match_similar__SimilarMapMatch_DynamicMatchMap
#define INCLUDED_hunit_match_similar__SimilarMapMatch_DynamicMatchMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,match,Match)
HX_DECLARE_CLASS4(hunit,match,similar,_SimilarMapMatch,DynamicMatchMap)
namespace hunit{
namespace match{
namespace similar{
namespace _SimilarMapMatch{


class HXCPP_CLASS_ATTRIBUTES  DynamicMatchMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DynamicMatchMap_obj OBJ_;
		DynamicMatchMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.match.similar._SimilarMapMatch.DynamicMatchMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DynamicMatchMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DynamicMatchMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DynamicMatchMap","\xd6","\x4c","\x74","\x66"); }

		cpp::ArrayBase keyList;
		Array< ::Dynamic > valueList;
		virtual cpp::ArrayBase keys( );
		Dynamic keys_dyn();

		virtual bool exists( Dynamic key);
		Dynamic exists_dyn();

		virtual ::hunit::match::Match get( Dynamic key);
		Dynamic get_dyn();

		virtual Void set( Dynamic key,::hunit::match::Match value);
		Dynamic set_dyn();

};

} // end namespace hunit
} // end namespace match
} // end namespace similar
} // end namespace _SimilarMapMatch

#endif /* INCLUDED_hunit_match_similar__SimilarMapMatch_DynamicMatchMap */ 
