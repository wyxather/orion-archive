// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhysDeath_Skag_TechDeathFire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APhysDeath_Skag_TechDeathFire.APhysDeath_Skag_TechDeathFire_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhysDeath_Skag_TechDeathFire_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhysDeath_Skag_TechDeathFire.APhysDeath_Skag_TechDeathFire_C.OnBegin");

	UAPhysDeath_Skag_TechDeathFire_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhysDeath_Skag_TechDeathFire.APhysDeath_Skag_TechDeathFire_C.ExecuteUbergraph_APhysDeath_Skag_TechDeathFire
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhysDeath_Skag_TechDeathFire_C::ExecuteUbergraph_APhysDeath_Skag_TechDeathFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhysDeath_Skag_TechDeathFire.APhysDeath_Skag_TechDeathFire_C.ExecuteUbergraph_APhysDeath_Skag_TechDeathFire");

	UAPhysDeath_Skag_TechDeathFire_C_ExecuteUbergraph_APhysDeath_Skag_TechDeathFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
