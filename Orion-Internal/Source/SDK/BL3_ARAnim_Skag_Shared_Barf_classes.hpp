#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Barf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C
// 0x0010 (0x0248 - 0x0238)
class UARAnim_Skag_Shared_Barf_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MyBarfingParticle;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C");
		return ptr;
	}


	void Notify_BreathStart();
	void Notify_BreathStop();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_ARAnim_Skag_Shared_Barf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
