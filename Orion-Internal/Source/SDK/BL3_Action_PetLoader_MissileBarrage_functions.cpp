// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_MissileBarrage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_MissileBarrage_C::AN_FireLeftShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireLeftShot");

	UAction_PetLoader_MissileBarrage_C_AN_FireLeftShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_MissileBarrage_C::AN_FireRightShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.AN_FireRightShot");

	UAction_PetLoader_MissileBarrage_C_AN_FireRightShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_MissileBarrage_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.OnServerBegin");

	UAction_PetLoader_MissileBarrage_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_MissileBarrage_C::ExecuteUbergraph_Action_PetLoader_MissileBarrage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_MissileBarrage.Action_PetLoader_MissileBarrage_C.ExecuteUbergraph_Action_PetLoader_MissileBarrage");

	UAction_PetLoader_MissileBarrage_C_ExecuteUbergraph_Action_PetLoader_MissileBarrage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
