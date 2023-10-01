// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_Standin_PetLoader_DigistructIn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_Standin_PetLoader_DigistructIn_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnBegin");

	UCE_Standin_PetLoader_DigistructIn_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_Standin_PetLoader_DigistructIn_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnEnd");

	UCE_Standin_PetLoader_DigistructIn_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCE_Standin_PetLoader_DigistructIn_C::ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn");

	UCE_Standin_PetLoader_DigistructIn_C_ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
