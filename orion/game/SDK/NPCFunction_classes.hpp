#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass NPCFunction.NPCFunction_C
class UNPCFunction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNPCFunction_C* GetDefaultObj();

	void GetSupporterSupportLimit(class FName SupporterName, class UObject* __WorldContext, int32* SupportLimit);
	void GetSupporterCommandTable(class FName SupporterName, class UObject* __WorldContext, TArray<struct FSupporterCommandData>* CommandTable);
	void IsUnlimitedSupporter(class AKSCharacterBase* NPC, class UObject* __WorldContext, bool* IsUnlimited);
	void GetSupporterWeaponType(class FName SupporterName, class UObject* __WorldContext, enum class EWEAPON_CATEGORY* WeaponType);
	void GetSupporterData(class FName SupporterName, class UObject* __WorldContext, bool* IsFound, struct FSupportCharacterData* SupportData);
	bool IsSupporterExists(class FName SupporterName, class UObject* __WorldContext);
	void GetPlacementDataNpcID(int32 NPCUniqID, class UObject* __WorldContext, struct FPlacementData* PlacementData);
	void GetNPCNameLabel(class FName NPCLabel, class UObject* __WorldContext, class FName* Text);
	bool IsFollowPlayerNPC(int32 NPCUniqID, class UObject* __WorldContext);
	void IsSwoonState(class FName NPCLabel, class UObject* __WorldContext, bool* IsSwoon);
	void GetNPCName(class FName NPCLabel, class UObject* __WorldContext, class FText* Text);
};

}


