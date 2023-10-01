// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_BooleanListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPWidget_BooleanListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.Construct");

	UBPWidget_BooleanListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.ExecuteUbergraph_BPWidget_BooleanListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWidget_BooleanListItem_C::ExecuteUbergraph_BPWidget_BooleanListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.ExecuteUbergraph_BPWidget_BooleanListItem");

	UBPWidget_BooleanListItem_C_ExecuteUbergraph_BPWidget_BooleanListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
