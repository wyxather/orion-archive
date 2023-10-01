// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Cartel_TeleportIn_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnDeath_CartelThugCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Parent_C::OnDeath_CartelThugCE(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnDeath_CartelThugCE");

	UBP_CE_Cartel_TeleportIn_Parent_C_OnDeath_CartelThugCE_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Parent_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.OnServerBegin");

	UBP_CE_Cartel_TeleportIn_Parent_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Cartel_TeleportIn_Parent_C::ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Cartel_TeleportIn_Parent.BP_CE_Cartel_TeleportIn_Parent_C.ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent");

	UBP_CE_Cartel_TeleportIn_Parent_C_ExecuteUbergraph_BP_CE_Cartel_TeleportIn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
