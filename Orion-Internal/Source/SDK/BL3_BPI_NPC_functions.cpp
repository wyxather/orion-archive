// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_NPC.BPI_NPC_C.SetNPCEngagePlayerRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Units                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::SetNPCEngagePlayerRange(float Units)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.SetNPCEngagePlayerRange");

	UBPI_NPC_C_SetNPCEngagePlayerRange_Params params;
	params.Units = Units;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.ForceNPCRevive
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::ForceNPCRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.ForceNPCRevive");

	UBPI_NPC_C_ForceNPCRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCCanReviveOthers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanReviveOthers                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::NPCCanReviveOthers(bool CanReviveOthers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCCanReviveOthers");

	UBPI_NPC_C_NPCCanReviveOthers_Params params;
	params.CanReviveOthers = CanReviveOthers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.ForceDefaultCombatNPCDownstate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::ForceDefaultCombatNPCDownstate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.ForceDefaultCombatNPCDownstate");

	UBPI_NPC_C_ForceDefaultCombatNPCDownstate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.TakeThingThenGiveBack
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::TakeThingThenGiveBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.TakeThingThenGiveBack");

	UBPI_NPC_C_TakeThingThenGiveBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCResetUsable
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCResetUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCResetUsable");

	UBPI_NPC_C_NPCResetUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCConstrainUsable
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCConstrainUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCConstrainUsable");

	UBPI_NPC_C_NPCConstrainUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.IgnoreEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IgnoreEnemies                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::IgnoreEnemies(bool IgnoreEnemies)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.IgnoreEnemies");

	UBPI_NPC_C_IgnoreEnemies_Params params;
	params.IgnoreEnemies = IgnoreEnemies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCHideSword
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCHideSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCHideSword");

	UBPI_NPC_C_NPCHideSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCUnhideSword
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCUnhideSword()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCUnhideSword");

	UBPI_NPC_C_NPCUnhideSword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCUnhideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCUnhideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCUnhideWeapon");

	UBPI_NPC_C_NPCUnhideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.NPCHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::NPCHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.NPCHideWeapon");

	UBPI_NPC_C_NPCHideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.HoldHandOutToTakeSomething
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::HoldHandOutToTakeSomething()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.HoldHandOutToTakeSomething");

	UBPI_NPC_C_HoldHandOutToTakeSomething_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.GiveSomethingToThePlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_NPC_C::GiveSomethingToThePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.GiveSomethingToThePlayer");

	UBPI_NPC_C_GiveSomethingToThePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.ThingToHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             TheThingToHold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FItemPoolInfo           ThePickupToHold                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform              OffsetTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PutAwayOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TakeOutOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseAltAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::ThingToHold(class UStaticMesh* TheThingToHold, const struct FItemPoolInfo& ThePickupToHold, const struct FTransform& OffsetTransform, float PutAwayOffset, float TakeOutOffset, bool UseAltAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.ThingToHold");

	UBPI_NPC_C_ThingToHold_Params params;
	params.TheThingToHold = TheThingToHold;
	params.ThePickupToHold = ThePickupToHold;
	params.OffsetTransform = OffsetTransform;
	params.PutAwayOffset = PutAwayOffset;
	params.TakeOutOffset = TakeOutOffset;
	params.UseAltAnimation = UseAltAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.CanPatrol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPatrol                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::CanPatrol(bool CanPatrol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.CanPatrol");

	UBPI_NPC_C_CanPatrol_Params params;
	params.CanPatrol = CanPatrol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.EngagePlayerWhenIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LookAtPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::EngagePlayerWhenIdle(bool LookAtPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.EngagePlayerWhenIdle");

	UBPI_NPC_C_EngagePlayerWhenIdle_Params params;
	params.LookAtPlayer = LookAtPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.UseSmartObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseSmartObjects                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::UseSmartObjects(bool UseSmartObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.UseSmartObjects");

	UBPI_NPC_C_UseSmartObjects_Params params;
	params.UseSmartObjects = UseSmartObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_NPC.BPI_NPC_C.EngageInCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EngageInCombat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_NPC_C::EngageInCombat(bool EngageInCombat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_NPC.BPI_NPC_C.EngageInCombat");

	UBPI_NPC_C_EngageInCombat_Params params;
	params.EngageInCombat = EngageInCombat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
