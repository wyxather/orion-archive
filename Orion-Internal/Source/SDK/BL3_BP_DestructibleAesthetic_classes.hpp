#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DestructibleAesthetic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DestructibleAesthetic.BP_DestructibleAesthetic_C
// 0x0010 (0x0508 - 0x04F8)
class ABP_DestructibleAesthetic_C : public AGbxDestructibleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (Transient, DuplicateTransient)
	class UWwiseEvent*                                 Wwise_Fracture_Event;                                     // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleAesthetic.BP_DestructibleAesthetic_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_10_ComponentFractureSignature__DelegateSignature_BP_DestructibleAesthetic(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_BP_DestructibleAesthetic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
