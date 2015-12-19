#ifndef INCLUDED_hunit_call_IExpect
#define INCLUDED_hunit_call_IExpect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hunit,call,IExpect)
namespace hunit{
namespace call{


class HXCPP_CLASS_ATTRIBUTES  IExpect_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IExpect_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void validate( )=0;
		virtual Dynamic validate_dyn()=0;
};

#define DELEGATE_hunit_call_IExpect \
virtual Void validate( ) { return mDelegate->validate();}  \
virtual Dynamic validate_dyn() { return mDelegate->validate_dyn();}  \


template<typename IMPL>
class IExpect_delegate_ : public IExpect_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IExpect_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_hunit_call_IExpect
};

} // end namespace hunit
} // end namespace call

#endif /* INCLUDED_hunit_call_IExpect */ 
