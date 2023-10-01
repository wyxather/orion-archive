#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Skag_Shared_Tongue_Run_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C
// 0x00C0 (0x02D8 - 0x0218)
class UA_Skag_Shared_Tongue_Run_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UClass*>             ElementToDamageTypeMap;                                   // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EOakElementalType                                  myElement;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UClass*                                      SkagDamageType;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleLashRtoL;                          // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C");
		return ptr;
	}


	void Notify_TongueLashRtoL();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Skag_Shared_Tongue_Run(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
