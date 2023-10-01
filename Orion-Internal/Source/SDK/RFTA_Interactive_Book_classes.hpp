#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Book_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_Book.Interactive_Book_C
// 0x005C (0x0484 - 0x0428)
class AInteractive_Book_C : public ABP_Inspectable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Interact_Node;                                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URasterWidgetComponent*                      RasterWidget;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Page_Turns;                                               // 0x0450(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int                                                Last_Page_Turns;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBookPage>                           Parsed_Pages;                                             // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFont*                                       Font;                                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentParse;                                             // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                 // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UICurrentPage;                                            // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReadNotify;                                               // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               gridlines_;                                               // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Open;                                                     // 0x047E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                               ShouldReadNotify;                                         // 0x047F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ReadNotifyPage;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Book.Interactive_Book_C");
		return ptr;
	}


	void CheckReadNotify(struct FBookPage* Page);
	void UpdatePageTurnUI();
	void GetLore(class ALoreItem** Lore);
	void OnRep_Page_Turns();
	void Update_All_Materials();
	void Update_Page_Material(int* Page_ID);
	void Update_Material(int* Material_Element_Index, bool* Activate, class UTexture** Texture);
	void Get_Current_Page_Index(int* Page_ID, bool* Forward, int* Page_Index);
	void Assign_All_Render_Textures(bool* Activate);
	void GetBookWidget(class UWidget_BookPages_C** Book_Widget);
	void Update_Pages(bool* Forward);
	void Assign_Render_Texture(int* Material_Element_Index, bool* Activate);
	void PrevPage();
	void NextPage();
	void ReceiveBeginPlay();
	void Single_Page_Ready();
	void Page_4_Set();
	void Update_Pages_Delayed(bool* Forward);
	void OnNextDialog();
	void OnPrevDialog();
	void InitLore();
	void OnHUDInit();
	void ServerBeginInspect();
	void OnHUDUpdate();
	void CacheUIPage(int* CurrentPage);
	void OnInspectEnd();
	void ExecuteUbergraph_Interactive_Book(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
