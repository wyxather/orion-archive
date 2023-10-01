// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OperativeCharacterComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.SetOperativeDeviceVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OperativeCharacterComponent_C::SetOperativeDeviceVisible(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.SetOperativeDeviceVisible");

	UBP_OperativeCharacterComponent_C_SetOperativeDeviceVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.ExecuteUbergraph_BP_OperativeCharacterComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_OperativeCharacterComponent_C::ExecuteUbergraph_BP_OperativeCharacterComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OperativeCharacterComponent.BP_OperativeCharacterComponent_C.ExecuteUbergraph_BP_OperativeCharacterComponent");

	UBP_OperativeCharacterComponent_C_ExecuteUbergraph_BP_OperativeCharacterComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
