// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IBPChar_DigiClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsTeleporting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_DigiClone_C::SetIsTeleporting(bool bIsTeleporting)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.SetIsTeleporting");

	UIBPChar_DigiClone_C_SetIsTeleporting_Params params;
	params.bIsTeleporting = bIsTeleporting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::StartProvoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.StartProvoke");

	UIBPChar_DigiClone_C_StartProvoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::OnDigicloneTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.OnDigicloneTeleport");

	UIBPChar_DigiClone_C_OnDigicloneTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::UpdateMaxTeleportRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.UpdateMaxTeleportRange");

	UIBPChar_DigiClone_C_UpdateMaxTeleportRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::DigiCloneThrowGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.DigiCloneThrowGrenade");

	UIBPChar_DigiClone_C_DigiCloneThrowGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::AutomagicallyRemoveDamageOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRemoveDamageOverride");

	UIBPChar_DigiClone_C_AutomagicallyRemoveDamageOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementalType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Grade                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIBPChar_DigiClone_C::AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int Grade)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.AutomagicallyRegisterDamageOverride");

	UIBPChar_DigiClone_C_AutomagicallyRegisterDamageOverride_Params params;
	params.ElementalType = ElementalType;
	params.Grade = Grade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::ReleaseDigiclone()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.ReleaseDigiclone");

	UIBPChar_DigiClone_C_ReleaseDigiclone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::KillDigiCloneNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.KillDigiCloneNow");

	UIBPChar_DigiClone_C_KillDigiCloneNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::BlowUpDigiClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.BlowUpDigiClone");

	UIBPChar_DigiClone_C_BlowUpDigiClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::StopScalingDigiClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.StopScalingDigiClone");

	UIBPChar_DigiClone_C_StopScalingDigiClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone
// (Public, BlueprintCallable, BlueprintEvent)

void UIBPChar_DigiClone_C::BeginScalingDigiClone()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.BeginScalingDigiClone");

	UIBPChar_DigiClone_C_BeginScalingDigiClone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Grenade_Projectile_Class       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIBPChar_DigiClone_C::Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function IBPChar_DigiClone.IBPChar_DigiClone_C.Get Owners Grenade Projectile Class");

	UIBPChar_DigiClone_C_Get_Owners_Grenade_Projectile_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grenade_Projectile_Class != nullptr)
		*Grenade_Projectile_Class = params.Grenade_Projectile_Class;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
