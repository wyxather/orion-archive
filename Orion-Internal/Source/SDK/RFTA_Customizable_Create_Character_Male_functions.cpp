// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Male_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Customizable_Create_Character_Male.Customizable_Create_Character_Male_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomizable_Create_Character_Male_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Male.Customizable_Create_Character_Male_C.ReceiveTick");

	ACustomizable_Create_Character_Male_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Customizable_Create_Character_Male.Customizable_Create_Character_Male_C.ExecuteUbergraph_Customizable_Create_Character_Male
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomizable_Create_Character_Male_C::ExecuteUbergraph_Customizable_Create_Character_Male(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Customizable_Create_Character_Male.Customizable_Create_Character_Male_C.ExecuteUbergraph_Customizable_Create_Character_Male");

	ACustomizable_Create_Character_Male_C_ExecuteUbergraph_Customizable_Create_Character_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
