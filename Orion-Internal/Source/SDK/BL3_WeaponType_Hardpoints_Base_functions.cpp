// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoints_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPAnim_IronCub_C*       AnimGraph                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_Base_C::GetIronCubAnimBP(class UBPAnim_IronCub_C** AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronCubAnimBP");

	AWeaponType_Hardpoints_Base_C_GetIronCubAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPAnim_IronBear_1st_C*  AnimGraph_1st                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBPAnim_IronBear_3rd_C*  AnimGraph_3rd                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_Base_C::GetIronBearAnimBPs(class UBPAnim_IronBear_1st_C** AnimGraph_1st, class UBPAnim_IronBear_3rd_C** AnimGraph_3rd)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.GetIronBearAnimBPs");

	AWeaponType_Hardpoints_Base_C_GetIronBearAnimBPs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph_1st != nullptr)
		*AnimGraph_1st = params.AnimGraph_1st;
	if (AnimGraph_3rd != nullptr)
		*AnimGraph_3rd = params.AnimGraph_3rd;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.UserConstructionScript");

	AWeaponType_Hardpoints_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_Base_C::BeginHardPointAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.BeginHardPointAction");

	AWeaponType_Hardpoints_Base_C_BeginHardPointAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_Base_C::EndHardPointAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.EndHardPointAction");

	AWeaponType_Hardpoints_Base_C_EndHardPointAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize
// (Event, Protected, BlueprintEvent)

void AWeaponType_Hardpoints_Base_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.K2_Initialize");

	AWeaponType_Hardpoints_Base_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub
// (BlueprintCallable, BlueprintEvent)

void AWeaponType_Hardpoints_Base_C::InitializeHardPointIronCub()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.InitializeHardPointIronCub");

	AWeaponType_Hardpoints_Base_C_InitializeHardPointIronCub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponType_Hardpoints_Base_C::ExecuteUbergraph_WeaponType_Hardpoints_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponType_Hardpoints_Base.WeaponType_Hardpoints_Base_C.ExecuteUbergraph_WeaponType_Hardpoints_Base");

	AWeaponType_Hardpoints_Base_C_ExecuteUbergraph_WeaponType_Hardpoints_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
