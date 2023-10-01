// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_VersionOmNom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShieldAug_VersionOmNom.ShieldAug_VersionOmNom_C.K2_OnShieldDepleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShield**                Shield                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference* ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAugmentData            StackData                      (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UShieldAug_VersionOmNom_C::K2_OnShieldDepleted(class AShield** Shield, struct FGameResourcePoolReference* ResourcePool, struct FAugmentData* StackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShieldAug_VersionOmNom.ShieldAug_VersionOmNom_C.K2_OnShieldDepleted");

	UShieldAug_VersionOmNom_C_K2_OnShieldDepleted_Params params;
	params.Shield = Shield;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StackData != nullptr)
		*StackData = params.StackData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
