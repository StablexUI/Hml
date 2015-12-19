#ifndef INCLUDED_hunit_mock_IMock
#define INCLUDED_hunit_mock_IMock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,mock,IMock)
HX_DECLARE_CLASS2(hunit,mock,MockData)
namespace hunit{
namespace mock{


class HXCPP_CLASS_ATTRIBUTES  IMock_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IMock_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};

#define DELEGATE_hunit_mock_IMock \


template<typename IMPL>
class IMock_delegate_ : public IMock_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IMock_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_hunit_mock_IMock
};

} // end namespace hunit
} // end namespace mock

#endif /* INCLUDED_hunit_mock_IMock */ 
