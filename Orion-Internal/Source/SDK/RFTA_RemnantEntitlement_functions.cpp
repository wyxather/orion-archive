// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RemnantEntitlement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RemnantEntitlement.RemnantEntitlement_C.RevokeLicense
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void URemnantEntitlement_C::RevokeLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantEntitlement.RemnantEntitlement_C.RevokeLicense");

	URemnantEntitlement_C_RevokeLicense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemnantEntitlement.RemnantEntitlement_C.ExecuteUbergraph_RemnantEntitlement
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URemnantEntitlement_C::ExecuteUbergraph_RemnantEntitlement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantEntitlement.RemnantEntitlement_C.ExecuteUbergraph_RemnantEntitlement");

	URemnantEntitlement_C_ExecuteUbergraph_RemnantEntitlement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
