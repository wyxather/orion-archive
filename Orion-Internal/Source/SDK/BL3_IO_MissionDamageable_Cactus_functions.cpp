// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_Cactus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_Cactus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.UserConstructionScript");

	AIO_MissionDamageable_Cactus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Destroying
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_Cactus_C::PlayFeedback_Destroying()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Destroying");

	AIO_MissionDamageable_Cactus_C_PlayFeedback_Destroying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Destroyed
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_Cactus_C::PlayFeedback_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Destroyed");

	AIO_MissionDamageable_Cactus_C_PlayFeedback_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Default
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_Cactus_C::PlayFeedback_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Default");

	AIO_MissionDamageable_Cactus_C_PlayFeedback_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Damageable
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_Cactus_C::PlayFeedback_Damageable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.PlayFeedback_Damageable");

	AIO_MissionDamageable_Cactus_C_PlayFeedback_Damageable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.ExecuteUbergraph_IO_MissionDamageable_Cactus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_Cactus_C::ExecuteUbergraph_IO_MissionDamageable_Cactus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable_Cactus.IO_MissionDamageable_Cactus_C.ExecuteUbergraph_IO_MissionDamageable_Cactus");

	AIO_MissionDamageable_Cactus_C_ExecuteUbergraph_IO_MissionDamageable_Cactus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
