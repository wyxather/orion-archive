// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AnimBP_Veh_Outrunner_Flag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimBP_Veh_Outrunner_Flag.AnimBP_Veh_Outrunner_Flag_C.ExecuteUbergraph_AnimBP_Veh_Outrunner_Flag
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Veh_Outrunner_Flag_C::ExecuteUbergraph_AnimBP_Veh_Outrunner_Flag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Veh_Outrunner_Flag.AnimBP_Veh_Outrunner_Flag_C.ExecuteUbergraph_AnimBP_Veh_Outrunner_Flag");

	UAnimBP_Veh_Outrunner_Flag_C_ExecuteUbergraph_AnimBP_Veh_Outrunner_Flag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
