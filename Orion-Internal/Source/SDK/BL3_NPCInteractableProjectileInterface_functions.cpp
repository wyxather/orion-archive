// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_NPCInteractableProjectileInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDetonate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNPCInteractableProjectileInterface_C::ProjectileDetonate(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDetonate");

	UNPCInteractableProjectileInterface_C_ProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileArm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNPCInteractableProjectileInterface_C::ProjectileArm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileArm");

	UNPCInteractableProjectileInterface_C_ProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDisarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNPCInteractableProjectileInterface_C::ProjectileDisarm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDisarm");

	UNPCInteractableProjectileInterface_C_ProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
