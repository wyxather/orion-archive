// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Crafter_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Crafter_Base.Character_Crafter_Base_C.CheckItemsPostAdd
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Crafter_Base_C::CheckItemsPostAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.CheckItemsPostAdd");

	ACharacter_Crafter_Base_C_CheckItemsPostAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.GetItemSpawnTags
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Out                            (Parm, OutParm, ZeroConstructor)

void ACharacter_Crafter_Base_C::GetItemSpawnTags(TArray<struct FName>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.GetItemSpawnTags");

	ACharacter_Crafter_Base_C_GetItemSpawnTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.Generate
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Crafter_Base_C::Generate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.Generate");

	ACharacter_Crafter_Base_C_Generate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Crafter_Base_C::OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA");

	ACharacter_Crafter_Base_C_OnLoaded_C6B46B8B4E282D083FC66B8185ED69BA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.LoadAndAdd
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Crafter_Base_C::LoadAndAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.LoadAndAdd");

	ACharacter_Crafter_Base_C_LoadAndAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Crafter_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.ReceiveBeginPlay");

	ACharacter_Crafter_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Crafter_Base.Character_Crafter_Base_C.ExecuteUbergraph_Character_Crafter_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Crafter_Base_C::ExecuteUbergraph_Character_Crafter_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Crafter_Base.Character_Crafter_Base_C.ExecuteUbergraph_Character_Crafter_Base");

	ACharacter_Crafter_Base_C_ExecuteUbergraph_Character_Crafter_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
