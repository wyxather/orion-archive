#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_TongueLash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C
// 0x0110 (0x0348 - 0x0238)
class UARAnim_Skag_Shared_TongueLash_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UClass*>             ElementToDamageTypeMap;                                   // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      SkagDamageType;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  myElement;                                                // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleLashRtoL;                          // 0x02A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleLashLtoR;                          // 0x02F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_Skag_Shared_TongueLash.ARAnim_Skag_Shared_TongueLash_C");
		return ptr;
	}


	void Notify_TongueLashLtoR();
	void OnBegin(class AActor** Actor);
	void Notify_TongueLashRtoL();
	void ExecuteUbergraph_ARAnim_Skag_Shared_TongueLash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
