// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetLoader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITree_PetLoader.AITree_PetLoader_C.BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAITree_PetLoader_C::BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PetLoader.AITree_PetLoader_C.BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader");

	UAITree_PetLoader_C_BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AITree_PetLoader.AITree_PetLoader_C.ExecuteUbergraph_AITree_PetLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAITree_PetLoader_C::ExecuteUbergraph_AITree_PetLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITree_PetLoader.AITree_PetLoader_C.ExecuteUbergraph_AITree_PetLoader");

	UAITree_PetLoader_C_ExecuteUbergraph_AITree_PetLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
