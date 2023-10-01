#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_Operative_Digiclone_Provoke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C
// 0x0010 (0x0158 - 0x0148)
class UBP_CE_Operative_Digiclone_Provoke_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                Provoke_Sound_Timer;                                      // 0x0150(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Operative_Digiclone_Provoke.BP_CE_Operative_Digiclone_Provoke_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ProvokeSoundStop();
	void ExecuteUbergraph_BP_CE_Operative_Digiclone_Provoke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
