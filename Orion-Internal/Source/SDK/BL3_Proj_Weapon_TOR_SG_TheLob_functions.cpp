// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_SG_TheLob_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_SG_TheLob_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.UserConstructionScript");

	AProj_Weapon_TOR_SG_TheLob_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProj_Weapon_TOR_SG_TheLob_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ReceiveDestroyed");

	AProj_Weapon_TOR_SG_TheLob_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_SG_TheLob_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ReceiveBeginPlay");

	AProj_Weapon_TOR_SG_TheLob_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_SG_TheLob_C::ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_SG_TheLob.Proj_Weapon_TOR_SG_TheLob_C.ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob");

	AProj_Weapon_TOR_SG_TheLob_C_ExecuteUbergraph_Proj_Weapon_TOR_SG_TheLob_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
