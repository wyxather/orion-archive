// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Cinematic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence**         Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Cinematic_C::SetContext(class ULevelSequence** Context, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext");

	ADialog_Cinematic_C_SetContext_Params params;
	params.Context = Context;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_Cinematic_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog");

	ADialog_Cinematic_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_Cinematic_C::ExecuteUbergraph_Dialog_Cinematic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic");

	ADialog_Cinematic_C_ExecuteUbergraph_Dialog_Cinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
