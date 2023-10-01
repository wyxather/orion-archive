// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inspectable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inspectable.Widget_Inspectable_C.On Request Close__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inspectable_C::On_Request_Close__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable.Widget_Inspectable_C.On Request Close__DelegateSignature");

	UWidget_Inspectable_C_On_Request_Close__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
