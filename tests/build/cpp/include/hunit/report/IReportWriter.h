#ifndef INCLUDED_hunit_report_IReportWriter
#define INCLUDED_hunit_report_IReportWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,report,IReportWriter)
HX_DECLARE_CLASS2(hunit,report,TestReport)
namespace hunit{
namespace report{


class HXCPP_CLASS_ATTRIBUTES  IReportWriter_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IReportWriter_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void write( ::hunit::report::TestReport report)=0;
		virtual Dynamic write_dyn()=0;
};

#define DELEGATE_hunit_report_IReportWriter \
virtual Void write( ::hunit::report::TestReport report) { return mDelegate->write(report);}  \
virtual Dynamic write_dyn() { return mDelegate->write_dyn();}  \


template<typename IMPL>
class IReportWriter_delegate_ : public IReportWriter_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IReportWriter_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_hunit_report_IReportWriter
};

} // end namespace hunit
} // end namespace report

#endif /* INCLUDED_hunit_report_IReportWriter */ 
