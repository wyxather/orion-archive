#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_DigiClone_PanicButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C
// 0x0009 (0x0151 - 0x0148)
class UBP_CE_DigiClone_PanicButton_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	bool                                               bCanSimulateRelease;                                      // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_DigiClone_PanicButton.BP_CE_DigiClone_PanicButton_C");
		return ptr;
	}


	void GetAssociatedPlayer(class AActor* Actor, class AActor** res);
	void ShouldSimulateRelease(class AActor* Actor, bool* res);
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void OnShouldSimulateEnd();
	void ExecuteUbergraph_BP_CE_DigiClone_PanicButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
