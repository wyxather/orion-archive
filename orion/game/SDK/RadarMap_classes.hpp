#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x460 - 0x3F8)
// WidgetBlueprintGeneratedClass RadarMap.RadarMap_C
class URadarMap_C : public URadarMapBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             Base_Ring;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_50;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Main_RadarMap;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_4;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             PlayerIcon;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Playerposition;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadarMapDayNightWidget_C*             RadarMapDayNightWidget;                            // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                               PlayerPos;                                         // 0x438(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconMaxNum;                                        // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDash;                                            // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTown;                                            // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URadarMapIconWidgets_C*>        RadarIconList;                                     // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class URadarMap_C* GetDefaultObj();

	void OnResetHiddenFlag();
	void RemoveIconFromListIndex(int32 Index);
	void CheckOverlapSubIcon(int32 Key, const struct FRadarMapDisplayData& TargetData);
	void ClacPositonKey(struct FVector& Location, int32* Key);
	void AddIcon_PlacementSubStory();
	void ModifyLevelTriggerIcon_SubStory();
	void HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	bool RefreshAllIcon();
	void RemoveAllIcon();
	bool RemoveIcon_AllLevelTrigger();
	bool RemoveIcon_AllFieldNpc();
	void ModifyLevelTriggerIcon_MainStory();
	void AddIcon_DelayedSpawnNpc();
	void AddIcon_LevelTrigger();
	void AddIcon_PlacementMainStory();
	void AddIcon_FieldNpc();
	void AddIcon_EventTrigger();
	bool RemoveIcon_AllSubStoryEventTrigger();
	bool RemoveIcon_AllMapObject();
	bool RefreshLevelTriggerIcon();
	void AddIcon_MapObject();
	void NextSwitch(bool* IsVisible);
	bool CheckHiddenPointIcon(int32 PointIndex);
	bool AddIcon(int32* AttachIndex, class FName DestinationLabel, enum class ERADARMAP_ICON_TYPE IconType, enum class ERADARMAP_ICON_OBJ_TYPE ObjType, uint8 LevelTriggerID, class FName NextFieldName, class FName TargetObjectName, const struct FVector& Position, int32 TreasureIndex, enum class EGameColor GameColor, enum class EGameColor RippleColor, int32 TargetCharaID);
	bool CheckTreasureBoxIcon(int32 TreasureIndex);
	bool ClearIcon();
	bool SetRadarMapVisible(bool IsVisible);
	bool SetBackTitle();
	void GetEmptyIconWidget(class FName TargetObjName, class URadarMapIconWidgets_C** Array_Element, int32* IconListIndex);
	void GetMapChangeIconName(enum class ERADARMAP_ICON_TYPE IconType, class FName NextFieldName, int32 CharaID, class FName* MapIconName);
	void FrameIconColor();
	void GetAngle(const struct FVector& StartPos, const struct FVector& TargetPos, float* Angle);
	void GetZOrder(enum class ERADARMAP_ICON_TYPE IconType, int32* ZOrder);
	void CreateIcon();
	void GetPlayerIconPos(struct FVector2D* IconPos);
	void UpdateIconPos();
	void UpdatePlayerPos();
	void GetShopIcon(class UObject* ArrayElement, bool* Success, struct FVector* Position, enum class ERADARMAP_ICON_TYPE* Type);
	void OnRefreshSpawnComplete(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_RadarMap(int32 EntryPoint);
};

}


