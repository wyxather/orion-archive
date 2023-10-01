// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_FogOfDiscoveryManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.UserConstructionScript");

	ABP_FogOfDiscoveryManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FogOfDiscoveryManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveBeginPlay");

	ABP_FogOfDiscoveryManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map
// (BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryManager_C::Update_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Update Map");

	ABP_FogOfDiscoveryManager_C_Update_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveEndPlay");

	ABP_FogOfDiscoveryManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture
// (BlueprintCallable, BlueprintEvent)

void ABP_FogOfDiscoveryManager_C::Save_FOD_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.Save FOD Texture");

	ABP_FogOfDiscoveryManager_C_Save_FOD_Texture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ReceiveTick");

	ABP_FogOfDiscoveryManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfDiscoveryManager_C::ExecuteUbergraph_BP_FogOfDiscoveryManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfDiscoveryManager.BP_FogOfDiscoveryManager_C.ExecuteUbergraph_BP_FogOfDiscoveryManager");

	ABP_FogOfDiscoveryManager_C_ExecuteUbergraph_BP_FogOfDiscoveryManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
