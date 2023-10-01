// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_FogOfDiscoveryCapture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.FinishZoneMapFoD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryCapture_C::FinishZoneMapFoD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.FinishZoneMapFoD");

	ABP_FogOfDiscoveryCapture_C_FinishZoneMapFoD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.CaptureZoneMapFoD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryCapture_C::CaptureZoneMapFoD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.CaptureZoneMapFoD");

	ABP_FogOfDiscoveryCapture_C_CaptureZoneMapFoD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryCapture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.UserConstructionScript");

	ABP_FogOfDiscoveryCapture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.GetData
// (BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryCapture_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.GetData");

	ABP_FogOfDiscoveryCapture_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UZoneMapData**           UpdatedZoneMap                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryCapture_C::OnFogLevelLoaded(class UZoneMapData** UpdatedZoneMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded");

	ABP_FogOfDiscoveryCapture_C_OnFogLevelLoaded_Params params;
	params.UpdatedZoneMap = UpdatedZoneMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryCapture_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay");

	ABP_FogOfDiscoveryCapture_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FogOfDiscoveryCapture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveBeginPlay");

	ABP_FogOfDiscoveryCapture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryCapture_C::ExecuteUbergraph_BP_FogOfDiscoveryCapture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture");

	ABP_FogOfDiscoveryCapture_C_ExecuteUbergraph_BP_FogOfDiscoveryCapture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
