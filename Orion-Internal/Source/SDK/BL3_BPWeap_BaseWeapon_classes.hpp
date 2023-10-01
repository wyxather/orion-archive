#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_BaseWeapon.BPWeap_BaseWeapon_C
// 0x006C (0x09CC - 0x0960)
class ABPWeap_BaseWeapon_C : public AOakWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0960(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               OakCharacter;                                             // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UManufacturerData*                           Manufacturer;                                             // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0981(0x0003) MISSED OFFSET
	float                                              Joke_Reload_Delta;                                        // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Joke_Reload_Current;                                      // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_Accuracy;                                            // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_Handling;                                            // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_Damage;                                              // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_FireRate;                                            // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_ReloadSpeed;                                         // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_CritDamage;                                          // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_ChargeTime;                                          // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_ProjectileSpeed;                                     // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_AreaDamage;                                          // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Name_HeatImpulse;                                         // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              GenericActorContainer;                                    // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              OverrideManufacturerDescription;                          // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_BaseWeapon.BPWeap_BaseWeapon_C");
		return ptr;
	}


	void BPAnim_Data(float* FiregripType, float* GripType, float* ScopeType, float* ModeType);
	void GetChargePercent(float* ChargePercent);
	void JokeReload();
	void Get_IK_Offset_Data(bool DebugSockets, bool First_Person, const struct FName& WeaponSocket_Left, const struct FName& WeaponSocket_Right, struct FTransform* L_IK_Offset, struct FTransform* R_IK_Offset);
	void BoneRotator_Incremental(float Current, float Target, float DeltaTime, float BoneRotationSpeed, float TotalRotation, float* CurrentRotation, float* NewRotation, struct FRotator* CurrentRotator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReInitialize();
	void WeaponAttached();
	void Notify_ReloadStarted(bool bAutoReload);
	void Notify_ReloadEnded(bool bCompleted);
	void ExecuteUbergraph_BPWeap_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
