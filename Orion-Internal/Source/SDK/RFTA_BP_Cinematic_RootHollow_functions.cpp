// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Cinematic_RootHollow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.Set Weapons
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cinematic_RootHollow_C::Set_Weapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.Set Weapons");

	ABP_Cinematic_RootHollow_C_Set_Weapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.Set Material
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface**     Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematic_RootHollow_C::Set_Material(class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.Set Material");

	ABP_Cinematic_RootHollow_C_Set_Material_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cinematic_RootHollow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cinematic_RootHollow.BP_Cinematic_RootHollow_C.UserConstructionScript");

	ABP_Cinematic_RootHollow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
