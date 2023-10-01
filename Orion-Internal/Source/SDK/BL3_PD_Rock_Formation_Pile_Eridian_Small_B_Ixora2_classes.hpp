#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2.PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2_C
// 0x0010 (0x05D8 - 0x05C8)
class APD_Rock_Formation_Pile_Eridian_Small_B_Ixora2_C : public APD_Rock_Formation_Pile_Eridian_Small_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2.PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B_Ixora2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
