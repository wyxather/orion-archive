#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x278 - 0x250)
// BlueprintGeneratedClass KSPlayerStart.KSPlayerStart_C
class AKSPlayerStart_C : public APlayerStart
{
public:
	int32                                        CharacterID;                                       // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquipLanternData                     EquipLanternData;                                  // 0x258(0x20)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AKSPlayerStart_C* GetDefaultObj();

};

}


