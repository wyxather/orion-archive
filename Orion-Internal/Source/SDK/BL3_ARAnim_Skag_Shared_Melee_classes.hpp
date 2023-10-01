#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C
// 0x0170 (0x03A8 - 0x0238)
class UARAnim_Skag_Shared_Melee_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UClass*>             ElementToDamageTypeMap;                                   // 0x0248(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      SkagDamageType;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleRtoL;                              // 0x02A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleLtoR;                              // 0x02F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EOakElementalType                                  myElement;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleBite;                              // 0x0348(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Enum_SkagVariants>                     MyVariant;                                                // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UClass*                                      MyDamageData;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_Bite();
	void Notify_ClawLtoR();
	void Notify_ClawRtoL();
	void ExecuteUbergraph_ARAnim_Skag_Shared_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
