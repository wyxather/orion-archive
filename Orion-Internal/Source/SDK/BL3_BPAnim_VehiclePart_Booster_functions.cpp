// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehiclePart_Booster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAnim_VehiclePart_Booster.BPAnim_VehiclePart_Booster_C.ExecuteUbergraph_BPAnim_VehiclePart_Booster
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPAnim_VehiclePart_Booster_C::ExecuteUbergraph_BPAnim_VehiclePart_Booster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAnim_VehiclePart_Booster.BPAnim_VehiclePart_Booster_C.ExecuteUbergraph_BPAnim_VehiclePart_Booster");

	UBPAnim_VehiclePart_Booster_C_ExecuteUbergraph_BPAnim_VehiclePart_Booster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
