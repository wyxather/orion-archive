// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_TextListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWidget_TextListItem.BPWidget_TextListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPWidget_TextListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_TextListItem.BPWidget_TextListItem_C.Construct");

	UBPWidget_TextListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWidget_TextListItem.BPWidget_TextListItem_C.ExecuteUbergraph_BPWidget_TextListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWidget_TextListItem_C::ExecuteUbergraph_BPWidget_TextListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_TextListItem.BPWidget_TextListItem_C.ExecuteUbergraph_BPWidget_TextListItem");

	UBPWidget_TextListItem_C_ExecuteUbergraph_BPWidget_TextListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
