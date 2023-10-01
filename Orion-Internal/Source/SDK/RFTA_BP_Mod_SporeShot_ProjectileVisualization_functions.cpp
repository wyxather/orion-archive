// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Mod_SporeShot_ProjectileVisualization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mod_SporeShot_ProjectileVisualization.BP_Mod_SporeShot_ProjectileVisualization_C.GetRadius
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mod_SporeShot_ProjectileVisualization_C::GetRadius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_SporeShot_ProjectileVisualization.BP_Mod_SporeShot_ProjectileVisualization_C.GetRadius");

	ABP_Mod_SporeShot_ProjectileVisualization_C_GetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
