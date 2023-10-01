// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_OnlineSubsystemSteamEOS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginPersistenceAuth
// 00007FF6F82E8670
// (Native, Public, BlueprintCallable)

void UGunfireCrossplayManager::LoginPersistenceAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginPersistenceAuth");

	UGunfireCrossplayManager_LoginPersistenceAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginEpicFromSteam
// 00007FF6F82E85E0
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bCreateHeadlessAccount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGunfireCrossplayManager::LoginEpicFromSteam(bool* bCreateHeadlessAccount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LoginEpicFromSteam");

	UGunfireCrossplayManager_LoginEpicFromSteam_Params params;
	params.bCreateHeadlessAccount = bCreateHeadlessAccount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LinkEpicFromSteam
// 00007FF6F82E85C0
// (Native, Public, BlueprintCallable)

void UGunfireCrossplayManager::LinkEpicFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.LinkEpicFromSteam");

	UGunfireCrossplayManager_LinkEpicFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.GetGunfireCrossplayManager
// 00007FF6F82E8540
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGunfireCrossplayManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGunfireCrossplayManager* UGunfireCrossplayManager::STATIC_GetGunfireCrossplayManager(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.GetGunfireCrossplayManager");

	UGunfireCrossplayManager_GetGunfireCrossplayManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.DeletePersistenceAuth
// 00007FF6F82E8520
// (Native, Public, BlueprintCallable)

void UGunfireCrossplayManager::DeletePersistenceAuth()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.DeletePersistenceAuth");

	UGunfireCrossplayManager_DeletePersistenceAuth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.BeginCrossplayLogin
// 00007FF6F82E8500
// (Native, Public, BlueprintCallable)

void UGunfireCrossplayManager::BeginCrossplayLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamEOS.GunfireCrossplayManager.BeginCrossplayLogin");

	UGunfireCrossplayManager_BeginCrossplayLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
