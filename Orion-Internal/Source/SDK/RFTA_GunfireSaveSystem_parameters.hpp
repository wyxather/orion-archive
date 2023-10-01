#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireSaveSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunfireSaveSystem.CommitSaveWithResultCallbackProxy.CommitSaveWithResult
struct UCommitSaveWithResultCallbackProxy_CommitSaveWithResult_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString*                                     Reason;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommitSaveWithResultCallbackProxy*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.LoadSaveCallbackProxy.LoadSave
struct ULoadSaveCallbackProxy_LoadSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoadSaveCallbackProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.LoadProfileSaveCallbackProxy.LoadProfileSave
struct ULoadProfileSaveCallbackProxy_LoadProfileSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoadProfileSaveCallbackProxy*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.ReadSaveCallbackProxy.ReadSave
struct UReadSaveCallbackProxy_ReadSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReadSaveCallbackProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.HasSaveCallbackProxy.HasSave
struct UHasSaveCallbackProxy_HasSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHasSaveCallbackProxy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.DeleteSaveCallbackProxy.DeleteSave
struct UDeleteSaveCallbackProxy_DeleteSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteSaveCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.DeleteProfileSaveCallbackProxy.DeleteProfileSave
struct UDeleteProfileSaveCallbackProxy_DeleteProfileSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeleteProfileSaveCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.HasProfileBackupCallbackProxy.HasProfileBackup
struct UHasProfileBackupCallbackProxy_HasProfileBackup_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHasProfileBackupCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.RestoreProfileBackupCallbackProxy.RestoreProfileBackup
struct URestoreProfileBackupCallbackProxy_RestoreProfileBackup_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestoreProfileBackupCallbackProxy*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.HasSlotBackupCallbackProxy.HasSlotBackup
struct UHasSlotBackupCallbackProxy_HasSlotBackup_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHasSlotBackupCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.RestoreSlotBackupCallbackProxy.RestoreSlotBackup
struct URestoreSlotBackupCallbackProxy_RestoreSlotBackup_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int*                                               Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestoreSlotBackupCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetReference
struct UPersistenceBlueprintFunctionLibrary_SetReference_Params
{
	struct FPersistentReference                        Reference;                                                // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.SetDisableCommit
struct UPersistenceBlueprintFunctionLibrary_SetDisableCommit_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool*                                              DisableCommit;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetReference
struct UPersistenceBlueprintFunctionLibrary_GetReference_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPersistentReference                        Reference;                                                // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetProfileSave
struct UPersistenceBlueprintFunctionLibrary_GetProfileSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USaveGameProfile*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetPersistenceManager
struct UPersistenceBlueprintFunctionLibrary_GetPersistenceManager_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPersistenceManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.GetCurrentSave
struct UPersistenceBlueprintFunctionLibrary_GetCurrentSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USaveGameWorld*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CopyReference
struct UPersistenceBlueprintFunctionLibrary_CopyReference_Params
{
	struct FPersistentReference*                       from;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPersistentReference                        to;                                                       // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.CommitSave
struct UPersistenceBlueprintFunctionLibrary_CommitSave_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString*                                     Reason;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.PersistenceBlueprintFunctionLibrary.ClearReference
struct UPersistenceBlueprintFunctionLibrary_ClearReference_Params
{
	struct FPersistentReference                        Reference;                                                // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GunfireSaveSystem.SaveGamePersistence.PreCommit
struct USaveGamePersistence_PreCommit_Params
{
	class UPersistenceManager**                        PersistenceManager;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
