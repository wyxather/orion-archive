#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x570 - 0x2C0)
// BlueprintGeneratedClass DBAccessManagerBP.DBAccessManagerBP_C
class ADBAccessManagerBP_C : public ADBAccessManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class FName>                     AbilityIDToLabel;                                  // 0x2D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FName>                     AbilitySetIDToLabel;                               // 0x320(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FName>                     EnemyIDToLabel;                                    // 0x370(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FItemDataForMenu>   ItemDataForMenu;                                   // 0x3C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FPlacementLabelInfo>      NPCUniqIDToLabel;                                  // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                MenuJobIDList;                                     // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          MenuJobLabelList;                                  // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FName>                     SupporterIDToLabel;                                // 0x480(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FName>                     EncountIDToLabel;                                  // 0x4D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FName>                     SupportAbilityIDToLabel;                           // 0x520(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ADBAccessManagerBP_C* GetDefaultObj();

	void CheckNotCoexistencePlacementLabel(TArray<class FName>& PlacementLabels, bool* Return);
	void IsfulfilledPlacementCondition(class FName PlacementLabel, bool* Return);
	void GetMenuJobIDList(TArray<int32>* OutIDList);
	void GetMenuJobLabelList(TArray<class FName>* OutJobList);
	void Debug_GetEnemyLabelFromResourceLabel(class FName ResourceLabel, bool* Success, class FName* EnemyLabel);
	void Debug_GetNPCFlag(class FName EnemyLabel, bool* NPCFlag);
	class FText MakeItemDetailText(struct FItemData& ItemData, int32 CharacterID);
	bool ConvertSupportAbilityIdToLabel(int32 SuportAbilityId, class FName* SuportAbilityLabel);
	void ConvertLabelToSupportAbilityID(class FName AbilityLabel, int32* AbilityID);
	bool SearchAbilitySetFromRestricWeapon(class FName& WeaponLabel, class FName* AbilitySetLabel);
	bool GetItemDataForMenu(class FName& ItemLabel, struct FItemDataForMenu* Value);
	bool ConvertLabelToAbilitySetID(class FName AbilitySetLabel, int32* AbilitySetID);
	bool ConvertUniqueIDToLabel(int32 NPCUniqID, class FName* NPCLabel);
	void ConvertEncountTriggerIDToLabel(int32 EncountTriggerId, class FName* EncountTriggerLabel);
	void ConvertLabelToAbilitySetID_OLD(class FName AbilitySetLabel, int32* AbilitySetID);
	void ConvertAbilitySetIDToLabel(int32 AbilitySetID, class FName* AbilityLabel, bool* IsFind);
	void ConvertSupporterIDToLabel(int32& SupporterID, class FName* SupporterLabel);
	void CreateMenuJobData();
	bool PrepareDBAccess(int32 Index);
	void ConvertLabelToEnemyID(class FName Label, int32* EnemyID);
	void ConvertEnemyIDToLabel(int32& EnemyID, class FName* EnemyLabel);
	void ConvertLabelToAbilityID(class FName AbilityLabel, int32* AbilityID);
	void ConvertAbilityIDToLabel(int32& AbilityID, class FName* AbilityLabel, bool* IsFind);
	void CreaetItemDataforMenu();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DBAccessManagerBP(int32 EntryPoint);
};

}


