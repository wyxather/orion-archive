#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TinkEquipGunBackup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C
// 0x0010 (0x0110 - 0x0100)
class UAIAspect_TinkEquipGunBackup_C : public UAIAspect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	class APawn*                                       MyControlledPawn;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C");
		return ptr;
	}


	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAspect_TinkEquipGunBackup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
