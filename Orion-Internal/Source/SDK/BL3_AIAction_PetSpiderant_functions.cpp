// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_PetSpiderant_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.EndSpiderantBurrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetSpiderant_C::EndSpiderantBurrow(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.EndSpiderantBurrow");

	UAIAction_PetSpiderant_C_EndSpiderantBurrow_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAIActionResult                Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetSpiderant_C::BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant");

	UAIAction_PetSpiderant_C_BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.ExecuteUbergraph_AIAction_PetSpiderant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_PetSpiderant_C::ExecuteUbergraph_AIAction_PetSpiderant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.ExecuteUbergraph_AIAction_PetSpiderant");

	UAIAction_PetSpiderant_C_ExecuteUbergraph_AIAction_PetSpiderant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
