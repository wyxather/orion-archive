// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_COV_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_AR_COV.BPWeap_AR_COV_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_COV_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_COV.BPWeap_AR_COV_C.UserConstructionScript");

	ABPWeap_AR_COV_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_AR_COV_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_COV.BPWeap_AR_COV_C.ReceiveBeginPlay");

	ABPWeap_AR_COV_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.Weapon_NotifyEquipped
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_COV_C::Weapon_NotifyEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_COV.BPWeap_AR_COV_C.Weapon_NotifyEquipped");

	ABPWeap_AR_COV_C_Weapon_NotifyEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_COV.BPWeap_AR_COV_C.ExecuteUbergraph_BPWeap_AR_COV
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_COV_C::ExecuteUbergraph_BPWeap_AR_COV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_COV.BPWeap_AR_COV_C.ExecuteUbergraph_BPWeap_AR_COV");

	ABPWeap_AR_COV_C_ExecuteUbergraph_BPWeap_AR_COV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
