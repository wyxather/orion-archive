// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkTurret_FloorPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.TurretVisible
// (BlueprintCallable, BlueprintEvent)

void UASpawn_TinkTurret_FloorPanel_C::TurretVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.TurretVisible");

	UASpawn_TinkTurret_FloorPanel_C_TurretVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkTurret_FloorPanel_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.OnBegin");

	UASpawn_TinkTurret_FloorPanel_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.ExecuteUbergraph_ASpawn_TinkTurret_FloorPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkTurret_FloorPanel_C::ExecuteUbergraph_ASpawn_TinkTurret_FloorPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_FloorPanel.ASpawn_TinkTurret_FloorPanel_C.ExecuteUbergraph_ASpawn_TinkTurret_FloorPanel");

	UASpawn_TinkTurret_FloorPanel_C_ExecuteUbergraph_ASpawn_TinkTurret_FloorPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
