// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_HW_PodRocket_Barrel_03_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Barrel_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.UserConstructionScript");

	AProj_ATL_HW_PodRocket_Barrel_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_HW_PodRocket_Barrel_03_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.ReceiveBeginPlay");

	AProj_ATL_HW_PodRocket_Barrel_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_03
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_HW_PodRocket_Barrel_03_C::ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_HW_PodRocket_Barrel_03.Proj_ATL_HW_PodRocket_Barrel_03_C.ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_03");

	AProj_ATL_HW_PodRocket_Barrel_03_C_ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
