// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_ComboListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPWidget_ComboListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.Construct");

	UBPWidget_ComboListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.ExecuteUbergraph_BPWidget_ComboListItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWidget_ComboListItem_C::ExecuteUbergraph_BPWidget_ComboListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.ExecuteUbergraph_BPWidget_ComboListItem");

	UBPWidget_ComboListItem_C_ExecuteUbergraph_BPWidget_ComboListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
