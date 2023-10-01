// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkTurret_RunOut_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.TurretVisible
// (BlueprintCallable, BlueprintEvent)

void UASpawn_TinkTurret_RunOut_C::TurretVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.TurretVisible");

	UASpawn_TinkTurret_RunOut_C_TurretVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkTurret_RunOut_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.OnBegin");

	UASpawn_TinkTurret_RunOut_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.ExecuteUbergraph_ASpawn_TinkTurret_RunOut
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkTurret_RunOut_C::ExecuteUbergraph_ASpawn_TinkTurret_RunOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkTurret_RunOut.ASpawn_TinkTurret_RunOut_C.ExecuteUbergraph_ASpawn_TinkTurret_RunOut");

	UASpawn_TinkTurret_RunOut_C_ExecuteUbergraph_ASpawn_TinkTurret_RunOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
