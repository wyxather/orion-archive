// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPDuelTotem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPDuelTotem_C::FinalizeCombatants()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants");

	ABPDuelTotem_C_FinalizeCombatants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.SetCombatant
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*    Combatant                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxSkeletalMeshComponent* SceneSkMesh                    (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPDuelTotem_C::SetCombatant(class AOakCharacter_Player* Combatant, class UGbxSkeletalMeshComponent** SceneSkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.SetCombatant");

	ABPDuelTotem_C_SetCombatant_Params params;
	params.Combatant = Combatant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SceneSkMesh != nullptr)
		*SceneSkMesh = params.SceneSkMesh;
}


// Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPDuelTotem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript");

	ABPDuelTotem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABPDuelTotem_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc");

	ABPDuelTotem_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABPDuelTotem_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc");

	ABPDuelTotem_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPotentialDuelState*           NewDuelState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelTotem_C::OnDuelStateChanged(EPotentialDuelState* NewDuelState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged");

	ABPDuelTotem_C_OnDuelStateChanged_Params params;
	params.NewDuelState = NewDuelState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AOakCharacter_Player*> Players                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABPDuelTotem_C::UpdateCombatants(TArray<class AOakCharacter_Player*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants");

	ABPDuelTotem_C_UpdateCombatants_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem
// (Event, Protected, BlueprintEvent)
// Parameters:
// EDuelTotemDestroyReason*       TheDestroyReason               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelTotem_C::OnDestroyTotem(EDuelTotemDestroyReason* TheDestroyReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem");

	ABPDuelTotem_C_OnDestroyTotem_Params params;
	params.TheDestroyReason = TheDestroyReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPDuelTotem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay");

	ABPDuelTotem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged
// (Event, Protected, BlueprintEvent)

void ABPDuelTotem_C::OnAcceptedPlayersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged");

	ABPDuelTotem_C_OnAcceptedPlayersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPDuelTotem_C::ExecuteUbergraph_BPDuelTotem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem");

	ABPDuelTotem_C_ExecuteUbergraph_BPDuelTotem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
