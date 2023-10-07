#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC (0x37C - 0x2C0)
// WidgetBlueprintGeneratedClass BarMenuPrologueList.BarMenuPrologueList_C
class UBarMenuPrologueList_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ChNameClose;                                       // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChNameOpen;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_1;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_2;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_3;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_4;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_5;                              // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBarMenuStoryChList_C*                 BarMenuStoryChList_6;                              // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_ChNameList;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGuideData>                    SingleMenuGuide;                                   // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    BarMenuSingleGuide;                                // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    BarMenuGuide;                                      // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                PrologueCharaID;                                   // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBarMenuStoryChList_C*>         PrologueCharaList;                                 // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBarMenuStoryChList_C*>         ActivePrologueCharaList;                           // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PrologueSelectIndex;                               // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBarMenuPrologueList_C* GetDefaultObj();

	void PlayCloseAnim();
	void UpdatePrologueList(int32 CurrentIndex, int32 BeforeIndex, bool IsFast);
	void SetPrologueCharaIndex(int32 NewIndex, int32 BeforeIndex);
	void MovePrologueCursor(bool IsUp);
	void Setup_Prologue_Chara_List(TArray<int32>& CharaID);
	void Construct();
	void ExecuteUbergraph_BarMenuPrologueList(int32 EntryPoint);
};

}


