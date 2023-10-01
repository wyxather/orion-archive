// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AnimTechDeath_InTechnicalBackTurret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AnimTechDeath_InTechnicalBackTurret.Action_AnimTechDeath_InTechnicalBackTurret_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_AnimTechDeath_InTechnicalBackTurret_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AnimTechDeath_InTechnicalBackTurret.Action_AnimTechDeath_InTechnicalBackTurret_C.OnBegin");

	UAction_AnimTechDeath_InTechnicalBackTurret_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AnimTechDeath_InTechnicalBackTurret.Action_AnimTechDeath_InTechnicalBackTurret_C.ExecuteUbergraph_Action_AnimTechDeath_InTechnicalBackTurret
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_AnimTechDeath_InTechnicalBackTurret_C::ExecuteUbergraph_Action_AnimTechDeath_InTechnicalBackTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AnimTechDeath_InTechnicalBackTurret.Action_AnimTechDeath_InTechnicalBackTurret_C.ExecuteUbergraph_Action_AnimTechDeath_InTechnicalBackTurret");

	UAction_AnimTechDeath_InTechnicalBackTurret_C_ExecuteUbergraph_Action_AnimTechDeath_InTechnicalBackTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
