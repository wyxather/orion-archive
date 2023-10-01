#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Tink_Turret_BasicBL2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C
// 0x0020 (0x09D4 - 0x09B4)
class ABPWeap_Tink_Turret_BasicBL2_C : public ABPWeap_Tink_Turret_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B8(0x0008) (Transient, DuplicateTransient)
	class UBlackboardComponent*                        MyInstigatorBB;                                           // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     TargetLockLocation;                                       // 0x09C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_3_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2();
	void BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2();
	void ExecuteUbergraph_BPWeap_Tink_Turret_BasicBL2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
