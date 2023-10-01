#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Varkid_Death_Pod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C
// 0x0008 (0x0220 - 0x0218)
class UAHitReact_Varkid_Death_Pod_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Varkid_Death_Pod.AHitReact_Varkid_Death_Pod_C");
		return ptr;
	}


	void Notify_PodBurst();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_AHitReact_Varkid_Death_Pod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
