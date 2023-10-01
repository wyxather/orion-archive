// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Operative_Digiclone_Provoke_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Operative_Digiclone_Provoke_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnBegin");

	UBP_CE_Operative_Digiclone_Provoke_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Operative_Digiclone_Provoke_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.OnEnd");

	UBP_CE_Operative_Digiclone_Provoke_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ProvokeSoundStop
// (BlueprintCallable, BlueprintEvent)

void UBP_CE_Operative_Digiclone_Provoke_C::ProvokeSoundStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ProvokeSoundStop");

	UBP_CE_Operative_Digiclone_Provoke_C_ProvokeSoundStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Operative_Digiclone_Provoke_C::ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C.ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke");

	UBP_CE_Operative_Digiclone_Provoke_C_ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
