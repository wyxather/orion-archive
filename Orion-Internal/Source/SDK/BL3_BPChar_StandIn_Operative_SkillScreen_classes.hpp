#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Operative_SkillScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C
// 0x0010 (0x23B8 - 0x23A8)
class ABPChar_StandIn_Operative_SkillScreen_C : public ABPChar_StandIn_Operative_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23A8(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   CannonMesh;                                               // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShowShoulderCannon();
	void HideShoulderCannon();
	void ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
