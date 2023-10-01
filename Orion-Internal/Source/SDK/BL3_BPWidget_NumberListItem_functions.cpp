// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_NumberListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPWidget_NumberListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.Construct");

	UBPWidget_NumberListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.ExecuteUbergraph_BPWidget_NumberListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWidget_NumberListItem_C::ExecuteUbergraph_BPWidget_NumberListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.ExecuteUbergraph_BPWidget_NumberListItem");

	UBPWidget_NumberListItem_C_ExecuteUbergraph_BPWidget_NumberListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
