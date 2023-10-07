#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ListSubItem.BPI_ListSubItem_C
class IBPI_ListSubItem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ListSubItem_C* GetDefaultObj();

	void SetSelectIndex(int32 Index);
	void GetItemListWidget(TArray<class UMJListItemWidget*>* ListWidget);
	void ReOpenHelpWindow();
	void GetItemList(TArray<struct FMJListWidgetItemData>* ItemList);
	void OutSelect();
	void GetItemLength(int32* Length);
	void MostBottom();
	void MostTop();
	void Setup();
	void OnCursorDown(bool* End);
	void OnCursorUp(bool* End);
	void EnableSelect(bool* Enable);
};

}


