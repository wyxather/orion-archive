#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Varkid_DeathRagdollLaunch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C
// 0x0008 (0x0208 - 0x0200)
class UAPhys_Varkid_DeathRagdollLaunch_C : public UOakAction_PhysicalDeath
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Varkid_DeathRagdollLaunch.APhys_Varkid_DeathRagdollLaunch_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_APhys_Varkid_DeathRagdollLaunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
