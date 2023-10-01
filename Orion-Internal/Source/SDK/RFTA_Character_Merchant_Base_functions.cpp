// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Merchant_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Merchant_Base.Character_Merchant_Base_C.GetItemSpawnTags
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Tags                           (Parm, OutParm, ZeroConstructor)

void ACharacter_Merchant_Base_C::GetItemSpawnTags(TArray<struct FName>* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.GetItemSpawnTags");

	ACharacter_Merchant_Base_C_GetItemSpawnTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.GetLevel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Merchant_Base_C::GetLevel(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.GetLevel");

	ACharacter_Merchant_Base_C_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.GetRandomSeed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Seed                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Merchant_Base_C::GetRandomSeed(int* Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.GetRandomSeed");

	ACharacter_Merchant_Base_C_GetRandomSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Seed != nullptr)
		*Seed = params.Seed;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.Generate
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Merchant_Base_C::Generate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.Generate");

	ACharacter_Merchant_Base_C_Generate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_8FC16AA04430CE125AFE78B043C14005
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Merchant_Base_C::OnLoaded_8FC16AA04430CE125AFE78B043C14005(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_8FC16AA04430CE125AFE78B043C14005");

	ACharacter_Merchant_Base_C_OnLoaded_8FC16AA04430CE125AFE78B043C14005_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_57B56CA34F9C75CB4271589095AF3F85
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Merchant_Base_C::OnLoaded_57B56CA34F9C75CB4271589095AF3F85(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.OnLoaded_57B56CA34F9C75CB4271589095AF3F85");

	ACharacter_Merchant_Base_C_OnLoaded_57B56CA34F9C75CB4271589095AF3F85_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.LoadAndAdd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Merchant_Base_C::LoadAndAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.LoadAndAdd");

	ACharacter_Merchant_Base_C_LoadAndAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Merchant_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.ReceiveBeginPlay");

	ACharacter_Merchant_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.RemovePreviousVendorOptions
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Merchant_Base_C::RemovePreviousVendorOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.RemovePreviousVendorOptions");

	ACharacter_Merchant_Base_C_RemovePreviousVendorOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Merchant_Base.Character_Merchant_Base_C.ExecuteUbergraph_Character_Merchant_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Merchant_Base_C::ExecuteUbergraph_Character_Merchant_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Merchant_Base.Character_Merchant_Base_C.ExecuteUbergraph_Character_Merchant_Base");

	ACharacter_Merchant_Base_C_ExecuteUbergraph_Character_Merchant_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
