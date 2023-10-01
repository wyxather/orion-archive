#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidBadass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_VarkidBadass.BPChar_VarkidBadass_C
// 0x003F (0x2600 - 0x25C1)
class ABPChar_VarkidBadass_C : public ABPChar_VarkidShared_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x25C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25C8(0x0008) (Transient, DuplicateTransient)
	class USceneBodySwitchComponent*                   Switch_ChargeFX;                                          // 0x25D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeFX;                                                 // 0x25D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AProj_VarkidDamageRibbon_C*                  Proj_DamageRibbon;                                        // 0x25E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      BodyLoopAudio;                                            // 0x25E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_VarkidBadass.BPChar_VarkidBadass_C");
		return ptr;
	}


	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_FD10B572457A9F4AC94097AE1D785AE4(class AActor* Actor, int InstanceIndex);
	void Varkid_EnableRibbon();
	void Varkid_DisableRibbon();
	void Varkid_DestroyRibbon();
	void ReceiveBeginPlay();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidBadass(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_BPChar_VarkidBadass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
