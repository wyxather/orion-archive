#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_TinkPsycho_StaggerToLeft_Var1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_TinkPsycho_StaggerToLeft_Var1.AHitReact_TinkPsycho_StaggerToLeft_Var1_C
// 0x0008 (0x0240 - 0x0238)
class UAHitReact_TinkPsycho_StaggerToLeft_Var1_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_TinkPsycho_StaggerToLeft_Var1.AHitReact_TinkPsycho_StaggerToLeft_Var1_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_AHitReact_TinkPsycho_StaggerToLeft_Var1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
