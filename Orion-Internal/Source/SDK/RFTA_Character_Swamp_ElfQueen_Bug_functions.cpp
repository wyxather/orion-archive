// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Swamp_ElfQueen_Bug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C.OnDead_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Swamp_ElfQueen_Bug_C::OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C.OnDead_Event_2");

	ACharacter_Swamp_ElfQueen_Bug_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C.ExecuteUbergraph_Character_Swamp_ElfQueen_Bug
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Swamp_ElfQueen_Bug_C::ExecuteUbergraph_Character_Swamp_ElfQueen_Bug(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C.ExecuteUbergraph_Character_Swamp_ElfQueen_Bug");

	ACharacter_Swamp_ElfQueen_Bug_C_ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
