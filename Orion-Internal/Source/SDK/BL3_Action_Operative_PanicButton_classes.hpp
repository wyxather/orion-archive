#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_PanicButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Operative_PanicButton.Action_Operative_PanicButton_C
// 0x0030 (0x02B0 - 0x0280)
class UAction_Operative_PanicButton_C : public UAction_Operative_Digiclone_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                DetonateTimerHandle;                                      // 0x0288(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FDataTableValueHandle                       PanicTimeHandle;                                          // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxAction*                                  CoordinatedEffectRef;                                     // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_PanicButton.Action_Operative_PanicButton_C");
		return ptr;
	}


	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void StopButtonPress();
	void DetonateClone();
	void StopDigicloneFX();
	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_Operative_PanicButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
