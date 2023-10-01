// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WorldMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ADialog_WorldMenu_C::BeginSurvivalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode");

	ADialog_WorldMenu_C_BeginSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_WorldMenu_C::SetContext(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext");

	ADialog_WorldMenu_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
