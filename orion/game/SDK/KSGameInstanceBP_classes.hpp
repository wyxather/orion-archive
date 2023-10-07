#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x310 - 0x250)
// BlueprintGeneratedClass KSGameInstanceBP.KSGameInstanceBP_C
class UKSGameInstanceBP_C : public UKSGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                DebugNextTrigger;                                  // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                NextTrigger;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsDebugMode;                                       // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDebugLevelLoad;                                  // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug_FirstSpawn;                                  // 0x27A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_326[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartLevelName;                                    // 0x27C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPersistantLevelLoaded;                           // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFont*>                         FontCache_PC;                                      // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        GameStartTime;                                     // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFont*>                         FontCache_PS4;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFont*>                         FontCache_PS5;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFont*>                         FontCash_Switch;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDataTable*>                    FontStyle_PC;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDataTable*>                    FontStyle_PS4;                                     // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDataTable*>                    FontStyle_PS5;                                     // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDataTable*>                    FontStyle_Switch;                                  // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UKSGameInstanceBP_C* GetDefaultObj();

	class FName GetStartLevel();
	bool GetIsDebugLoadLevel();
	bool GetFirstSpawn();
	void ReceiveInit();
	void SetDebugMode(bool IsDebug);
	void SetFirstSpawn(bool FirstSpawn);
	void SetDebugLoadLevel(bool DebugLoadLebel);
	void SetStartLevel(class FName LevelName);
	void ExecuteUbergraph_KSGameInstanceBP(int32 EntryPoint);
};

}


