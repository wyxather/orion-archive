// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_ActionSkill_Operative_ShoulderCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_ActionSkill_Operative_ShoulderCannon_C::StartShoulderCannonMod3Timer(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.StartShoulderCannonMod3Timer");

	UInterface_ActionSkill_Operative_ShoulderCannon_C_StartShoulderCannonMod3Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_ActionSkill_Operative_ShoulderCannon_C::GetCannonRef(class AActor** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.GetCannonRef");

	UInterface_ActionSkill_Operative_ShoulderCannon_C_GetCannonRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShoulderCannonMods> Mod                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_ActionSkill_Operative_ShoulderCannon_C::IsShouldCannonModSlotted(TEnumAsByte<EShoulderCannonMods> Mod, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_ActionSkill_Operative_ShoulderCannon.Interface_ActionSkill_Operative_ShoulderCannon_C.IsShouldCannonModSlotted");

	UInterface_ActionSkill_Operative_ShoulderCannon_C_IsShouldCannonModSlotted_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
