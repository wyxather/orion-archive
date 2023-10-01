// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Tink_Anointed_ShrinkandGrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CE_Tink_Anointed_ShrinkandGrow.BP_CE_Tink_Anointed_ShrinkandGrow_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Tink_Anointed_ShrinkandGrow_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Tink_Anointed_ShrinkandGrow.BP_CE_Tink_Anointed_ShrinkandGrow_C.OnBegin");

	UBP_CE_Tink_Anointed_ShrinkandGrow_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CE_Tink_Anointed_ShrinkandGrow.BP_CE_Tink_Anointed_ShrinkandGrow_C.ExecuteUbergraph_BP_CE_Tink_Anointed_ShrinkandGrow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CE_Tink_Anointed_ShrinkandGrow_C::ExecuteUbergraph_BP_CE_Tink_Anointed_ShrinkandGrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CE_Tink_Anointed_ShrinkandGrow.BP_CE_Tink_Anointed_ShrinkandGrow_C.ExecuteUbergraph_BP_CE_Tink_Anointed_ShrinkandGrow");

	UBP_CE_Tink_Anointed_ShrinkandGrow_C_ExecuteUbergraph_BP_CE_Tink_Anointed_ShrinkandGrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
