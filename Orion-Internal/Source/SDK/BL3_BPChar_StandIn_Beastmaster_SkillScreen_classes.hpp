#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Beastmaster_SkillScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_StandIn_Beastmaster_SkillScreen.BPChar_StandIn_Beastmaster_SkillScreen_C
// 0x0018 (0x23B0 - 0x2398)
class ABPChar_StandIn_Beastmaster_SkillScreen_C : public ABPChar_StandIn_Beastmaster_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2398(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   GravTrap;                                                 // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_BeastmasterMelee;                                      // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Beastmaster_SkillScreen.BPChar_StandIn_Beastmaster_SkillScreen_C");
		return ptr;
	}


	void UserConstructionScript();
	void Notify_Stealth();
	void Notify_HideMeleeMesh();
	void ShowGravTrap();
	void HideGravTrap();
	void PlayTrapAnim();
	void ExecuteUbergraph_BPChar_StandIn_Beastmaster_SkillScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
