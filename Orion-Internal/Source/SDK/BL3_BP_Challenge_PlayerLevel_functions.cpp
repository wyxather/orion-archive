// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_PlayerLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.LeveledUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Old_XP_Level                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_XP_Level                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_PlayerLevel_C::LeveledUp(int Old_XP_Level, int New_XP_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.LeveledUp");

	UBP_Challenge_PlayerLevel_C_LeveledUp_Params params;
	params.Old_XP_Level = Old_XP_Level;
	params.New_XP_Level = New_XP_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent**   OwningChallenges               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter**          AssociatedCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_PlayerLevel_C::OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.OnInitChallengeInstance");

	UBP_Challenge_PlayerLevel_C_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.ExecuteUbergraph_BP_Challenge_PlayerLevel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_PlayerLevel_C::ExecuteUbergraph_BP_Challenge_PlayerLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.ExecuteUbergraph_BP_Challenge_PlayerLevel");

	UBP_Challenge_PlayerLevel_C_ExecuteUbergraph_BP_Challenge_PlayerLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
