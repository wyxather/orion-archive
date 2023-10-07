#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x100 - 0x100)
// BlueprintGeneratedClass BP_InventorComponent.BP_InventorComponent_C
class UBP_InventorComponent_C : public UInventorComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_InventorComponent_C* GetDefaultObj();

	bool IsInventorItemAllReady();
	bool StartCreateAllInventorItem();
	bool IsExecutableInventorItem();
	bool UseInventorItem(class FName StrInventorItemLabel);
	bool IsInventorItemReady(class FName StrLabel);
	bool IsInventorItemExecCreate(class FName StrLabel);
	void GetInventorItemCreateTurn(class FName StrLabel, int32* NRestTurn, int32* NCreateTurnMax);
	bool UpdateCreateInventorItem(int32 NTurnCount, bool bRandom, bool bUseText);
	bool StartCreateInventorItem(class FName StrInventorItemLabel);
	bool InitInventorItemData();
	bool AddInventorItemData(class FName StrInventorItemLabel, int32 NInventorTurn);
};

}


