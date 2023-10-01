#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Gunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Gunner.BPChar_Gunner_C
// 0x0080 (0x3668 - 0x35E8)
class ABPChar_Gunner_C : public ABPChar_Player_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x35E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    DeviceHologram3rd;                                        // 0x35F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DLCActionSkillDevice3rd;                                  // 0x35F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyAccessoryComponent*                    FoleyAccessory_Vest;                                      // 0x3600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SK_Play_Gunner_Base_Head;                                 // 0x3608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFaceFXComponent*                            FaceFX;                                                   // 0x3610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Fire_And_Sprint_Enabled;                                  // 0x3618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3619(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          Att_IronBearScalar_Armor;                                 // 0x361C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_IronBearScalar_CoreUse;                               // 0x3628(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeInteger                        CQCMeleeFXNotify;                                         // 0x3634(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class AActor*                                      LastAutoBear;                                             // 0x3640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_ClassMod_Gunner_ClassModL01Equipped;                  // 0x3648(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x3654(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        DLCActionSkillDevice1st;                                  // 0x3658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DeviceHologram1st;                                        // 0x3660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Gunner.BPChar_Gunner_C");
		return ptr;
	}


	class UOakActionAbility* GetPrimaryActionAbility();
	void GetHeadMesh(class USkeletalMesh** HeadMesh);
	void UserConstructionScript();
	void SetGunnerDeviceVisible(bool Visible);
	void SetGunnerHologramVisible(bool Visible);
	void SetGunnerHologramTemplate(class UParticleSystem* Template);
	void ExecuteUbergraph_BPChar_Gunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
