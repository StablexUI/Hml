#ifndef INCLUDED_hunit_report_DefaultWriter
#define INCLUDED_hunit_report_DefaultWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hunit_report_IReportWriter
#include <hunit/report/IReportWriter.h>
#endif
HX_DECLARE_CLASS2(hunit,report,DefaultWriter)
HX_DECLARE_CLASS2(hunit,report,IReportWriter)
HX_DECLARE_CLASS2(hunit,report,TestReport)
namespace hunit{
namespace report{


class HXCPP_CLASS_ATTRIBUTES  DefaultWriter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DefaultWriter_obj OBJ_;
		DefaultWriter_obj();
		Void __construct(Dynamic printer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hunit.report.DefaultWriter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultWriter_obj > __new(Dynamic printer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultWriter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::hunit::report::IReportWriter_obj *();
		::String __ToString() const { return HX_HCSTRING("DefaultWriter","\x34","\xfa","\x4e","\xc0"); }

		int itemsWriteCounter;
		Dynamic printer;
		Dynamic &printer_dyn() { return printer;}
		virtual Void write( ::hunit::report::TestReport report);
		Dynamic write_dyn();

		virtual Void writeFail( Dynamic item);
		Dynamic writeFail_dyn();

		virtual Void writeWarning( Dynamic item);
		Dynamic writeWarning_dyn();

		virtual Void writeNotice( Dynamic item);
		Dynamic writeNotice_dyn();

		virtual Void writeItem( ::String caseName,::String test,::String message,Dynamic pos,hx::Null< bool >  addPosToTestName);
		Dynamic writeItem_dyn();

};

} // end namespace hunit
} // end namespace report

#endif /* INCLUDED_hunit_report_DefaultWriter */ 
