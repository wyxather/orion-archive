#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Operative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_StandIn_Operative.BPChar_StandIn_Operative_C
// 0x0018 (0x23A8 - 0x2390)
class ABPChar_StandIn_Operative_C : public ABPChar_StandInPlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2390(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   ActionSkillDevice;                                        // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOperativeStandInComponent*                  OperativeStandIn;                                         // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Operative.BPChar_StandIn_Operative_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShowActionSkillDevice();
	void HideActionSkillDevice();
	void ExecuteUbergraph_BPChar_StandIn_Operative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
