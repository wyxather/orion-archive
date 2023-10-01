#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Drone_VDayHeart_TeamSwap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C
// 0x0017 (0x07D8 - 0x07C1)
class AProj_Drone_VDayHeart_TeamSwap_C : public AProj_Drone_VDayHeart_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_V_Heart_Frilly;                                        // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_TeamSwap.Proj_Drone_VDayHeart_TeamSwap_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void ExecuteUbergraph_Proj_Drone_VDayHeart_TeamSwap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
