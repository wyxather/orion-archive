// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MiniMap_Display_Base.MiniMap_Display_Base_C.Toggle Mini Map
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_Base_C::Toggle_Mini_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_Base.MiniMap_Display_Base_C.Toggle Mini Map");

	AMiniMap_Display_Base_C_Toggle_Mini_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_Base.MiniMap_Display_Base_C.OnInit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 MiniMapRefActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_Base_C::OnInit(class ACharacter_Master_Player_C** Player, class AActor** MiniMapRefActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_Base.MiniMap_Display_Base_C.OnInit");

	AMiniMap_Display_Base_C_OnInit_Params params;
	params.Player = Player;
	params.MiniMapRefActor = MiniMapRefActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_Base.MiniMap_Display_Base_C.ExecuteUbergraph_MiniMap_Display_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMiniMap_Display_Base_C::ExecuteUbergraph_MiniMap_Display_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_Base.MiniMap_Display_Base_C.ExecuteUbergraph_MiniMap_Display_Base");

	AMiniMap_Display_Base_C_ExecuteUbergraph_MiniMap_Display_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiniMap_Display_Base.MiniMap_Display_Base_C.Map Initialized__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMiniMap_Display_Base_C::Map_Initialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Display_Base.MiniMap_Display_Base_C.Map Initialized__DelegateSignature");

	AMiniMap_Display_Base_C_Map_Initialized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
