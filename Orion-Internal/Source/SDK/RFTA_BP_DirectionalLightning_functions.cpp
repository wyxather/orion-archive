// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_DirectionalLightning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DirectionalLightning.BP_DirectionalLightning_C.RandomizeRotation
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightning_C::RandomizeRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.RandomizeRotation");

	ABP_DirectionalLightning_C_RandomizeRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.UserConstructionScript");

	ABP_DirectionalLightning_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__FinishedFunc");

	ABP_DirectionalLightning_C_Lightning_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_2__UpdateFunc");

	ABP_DirectionalLightning_C_Lightning_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__FinishedFunc");

	ABP_DirectionalLightning_C_Lightning_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning_3__UpdateFunc");

	ABP_DirectionalLightning_C_Lightning_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__FinishedFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__FinishedFunc");

	ABP_DirectionalLightning_C_Lightning__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__UpdateFunc
// 00007FF6F8B35350
// (BlueprintEvent)

void ABP_DirectionalLightning_C::Lightning__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning__UpdateFunc");

	ABP_DirectionalLightning_C_Lightning__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ABP_DirectionalLightning_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.ReceiveBeginPlay");

	ABP_DirectionalLightning_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Call Lightning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightning_C::Call_Lightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Call Lightning");

	ABP_DirectionalLightning_C_Call_Lightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Custom Lightning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Version                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DirectionalLightning_C::Custom_Lightning(int* Version, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Custom Lightning");

	ABP_DirectionalLightning_C_Custom_Lightning_Params params;
	params.Version = Version;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Reenable Random Lightning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightning_C::Reenable_Random_Lightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Reenable Random Lightning");

	ABP_DirectionalLightning_C_Reenable_Random_Lightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning Flash
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Version                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Random_Lightning               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DirectionalLightning_C::Lightning_Flash(int* Version, struct FRotator* Rotation, bool* Random_Lightning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.Lightning Flash");

	ABP_DirectionalLightning_C_Lightning_Flash_Params params;
	params.Version = Version;
	params.Rotation = Rotation;
	params.Random_Lightning = Random_Lightning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DirectionalLightning.BP_DirectionalLightning_C.ExecuteUbergraph_BP_DirectionalLightning
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightning_C::ExecuteUbergraph_BP_DirectionalLightning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightning.BP_DirectionalLightning_C.ExecuteUbergraph_BP_DirectionalLightning");

	ABP_DirectionalLightning_C_ExecuteUbergraph_BP_DirectionalLightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
