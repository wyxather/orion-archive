// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SmartObject_TannisKeyTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASmartObject_TannisKeyTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.UserConstructionScript");

	ASmartObject_TannisKeyTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.TurnOnKey
// (BlueprintCallable, BlueprintEvent)

void ASmartObject_TannisKeyTable_C::TurnOnKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.TurnOnKey");

	ASmartObject_TannisKeyTable_C_TurnOnKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.HideKey_Event
// (BlueprintCallable, BlueprintEvent)

void ASmartObject_TannisKeyTable_C::HideKey_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.HideKey_Event");

	ASmartObject_TannisKeyTable_C_HideKey_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.ExecuteUbergraph_SmartObject_TannisKeyTable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmartObject_TannisKeyTable_C::ExecuteUbergraph_SmartObject_TannisKeyTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.ExecuteUbergraph_SmartObject_TannisKeyTable");

	ASmartObject_TannisKeyTable_C_ExecuteUbergraph_SmartObject_TannisKeyTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.HideKey__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASmartObject_TannisKeyTable_C::HideKey__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C.HideKey__DelegateSignature");

	ASmartObject_TannisKeyTable_C_HideKey__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
