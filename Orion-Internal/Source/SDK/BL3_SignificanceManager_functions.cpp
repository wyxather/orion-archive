// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SignificanceManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SignificanceManager.SignificanceManager.UnregisterForTickOptim
// (Final, Native, Public)
// Parameters:
// class AActor*                  TickOptimActor                 (Parm, ZeroConstructor, IsPlainOldData)

void USignificanceManager::UnregisterForTickOptim(class AActor* TickOptimActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignificanceManager.SignificanceManager.UnregisterForTickOptim");

	USignificanceManager_UnregisterForTickOptim_Params params;
	params.TickOptimActor = TickOptimActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SignificanceManager.SignificanceManager.OnTickActorEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                  TickOptimActor                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void USignificanceManager::OnTickActorEndPlay(class AActor* TickOptimActor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SignificanceManager.SignificanceManager.OnTickActorEndPlay");

	USignificanceManager_OnTickActorEndPlay_Params params;
	params.TickOptimActor = TickOptimActor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
