#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Inspectable_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Inspectable_HUD.BP_Inspectable_HUD_C
// 0x0043 (0x0420 - 0x03DD)
class ABP_Inspectable_HUD_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnDialogNext;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDialogPrev;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<E_InspectableHUDMode>                  Inspectable_Menu_Mode;                                    // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ForceUpdateUI;                                            // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Inspectable_HUD.BP_Inspectable_HUD_C");
		return ptr;
	}


	void TogglePageTurnBindings(bool* DoBind);
	void ClearInspectable();
	void Set_Display_Message(struct FText* InText);
	void Set_Inspectable(class ABP_Inspectable_C** Inspectable, TEnumAsByte<E_InspectableHUDMode>* Inspectable_Mode);
	void ReceiveBeginPlay();
	void OnBeginDialog();
	void PageNext();
	void PagePrev();
	void RequestEndInspectWithContext();
	void ExecuteUbergraph_BP_Inspectable_HUD(int* EntryPoint);
	void ForceUpdateUI__DelegateSignature();
	void OnDialogPrev__DelegateSignature();
	void OnDialogNext__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
