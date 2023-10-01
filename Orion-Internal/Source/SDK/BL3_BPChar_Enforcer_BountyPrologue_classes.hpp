#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enforcer_BountyPrologue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C
// 0x002C (0x2408 - 0x23DC)
class ABPChar_Enforcer_BountyPrologue_C : public ABPChar_EnforcerBasic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x23DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23E0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           ButtCollision;                                            // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   AuxiliaryCollision;                                       // 0x23F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Event_WasButtholed;                                       // 0x23F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C");
		return ptr;
	}


	void UserConstructionScript();
	void CE_HitRegionButt(const struct FDamageReactionEventSummary& DamageSummary);
	void Enforcer_AllowButtStagger(bool* AllowButtStagger);
	void ExecuteUbergraph_BPChar_Enforcer_BountyPrologue(int EntryPoint);
	void Event_WasButtholed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
