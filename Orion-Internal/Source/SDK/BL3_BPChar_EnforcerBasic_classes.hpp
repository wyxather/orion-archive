#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerBasic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_EnforcerBasic.BPChar_EnforcerBasic_C
// 0x0019 (0x23DC - 0x23C3)
class ABPChar_EnforcerBasic_C : public ABPChar_EnforcerShared_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x23C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23C8(0x0008) (Transient, DuplicateTransient)
	class UAIExplosiveSpawningComponent_C*             AIExplosiveSpawningComponent;                             // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChanceToTransformToGun;                                   // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_EnforcerBasic.BPChar_EnforcerBasic_C");
		return ptr;
	}


	void UserConstructionScript();
	void Enforcer_TransformToGun();
	void CE_AttemptTransformToGun(const struct FDamageReactionEventSummary& DamageSummary);
	void ExecuteUbergraph_BPChar_EnforcerBasic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
