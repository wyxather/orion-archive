#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_Homing_MultiTarget_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C
// 0x0014 (0x04E0 - 0x04CC)
class ABP_Projectile_Homing_MultiTarget_Base_C : public ABP_Projectile_Homing_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFxActorDestroyerComponent*                  FxActorDestroyer;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Homing_MultiTarget_Base.BP_Projectile_Homing_MultiTarget_Base_C");
		return ptr;
	}


	void ClearTargetIndicator();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BndEvt__FxActorDestroyer_K2Node_ComponentBoundEvent_0_SoftDestroyEvent__DelegateSignature();
	void OnProjectileHit(struct FHitResult* Hit);
	void ExecuteUbergraph_BP_Projectile_Homing_MultiTarget_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
