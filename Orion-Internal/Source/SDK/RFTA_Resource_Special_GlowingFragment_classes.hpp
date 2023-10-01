#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Special_GlowingFragment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C
// 0x0018 (0x04F8 - 0x04E0)
class AResource_Special_GlowingFragment_C : public AItem_AccountCurrency_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Resource_Special_Simulacrum_Loop_SC;                      // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      CrystalMesh;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Special_GlowingFragment.Resource_Special_GlowingFragment_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Resource_Special_GlowingFragment(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
