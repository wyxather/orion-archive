// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_OperativeCannon_Digistruct_Out_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_OperativeCannon_Digistruct_Out.BP_CE_OperativeCannon_Digistruct_Out_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_OperativeCannon_Digistruct_Out_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_OperativeCannon_Digistruct_Out.BP_CE_OperativeCannon_Digistruct_Out_C.OnServerEnd");

	UBP_CE_OperativeCannon_Digistruct_Out_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_OperativeCannon_Digistruct_Out.BP_CE_OperativeCannon_Digistruct_Out_C.ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_Out
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_OperativeCannon_Digistruct_Out_C::ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_Out(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_OperativeCannon_Digistruct_Out.BP_CE_OperativeCannon_Digistruct_Out_C.ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_Out");

	UBP_CE_OperativeCannon_Digistruct_Out_C_ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_Out_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
