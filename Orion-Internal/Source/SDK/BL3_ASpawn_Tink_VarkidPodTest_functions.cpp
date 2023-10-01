// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_VarkidPodTest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_VarkidPodTest_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.OnBegin");

	UASpawn_Tink_VarkidPodTest_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.Notify_Attack
// (BlueprintCallable, BlueprintEvent)

void UASpawn_Tink_VarkidPodTest_C::Notify_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.Notify_Attack");

	UASpawn_Tink_VarkidPodTest_C_Notify_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.ExecuteUbergraph_ASpawn_Tink_VarkidPodTest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_Tink_VarkidPodTest_C::ExecuteUbergraph_ASpawn_Tink_VarkidPodTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_Tink_VarkidPodTest.ASpawn_Tink_VarkidPodTest_C.ExecuteUbergraph_ASpawn_Tink_VarkidPodTest");

	UASpawn_Tink_VarkidPodTest_C_ExecuteUbergraph_ASpawn_Tink_VarkidPodTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
